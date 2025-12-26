#!/usr/bin/env python3
"""
baddata_analyze.py - Analyze halt_baddata() occurrences using Claude CLI

For each halt_baddata() in a C file, this script:
1. Finds the corresponding disassembly from fsn_original.disassembly/
2. Invokes Claude CLI to analyze the assembly and generate C-like pseudocode
3. Inserts the analysis as a comment before the halt_baddata() line

Usage:
    python3 analysis/baddata_analyze.py <input.c> [--output <output.c>]
    python3 analysis/baddata_analyze.py --dry-run <input.c>  # Preview without Claude calls
    python3 analysis/baddata_analyze.py --batch <dir> [--output-dir <dir>] [--jobs N]

Requires:
    - Claude CLI installed and configured
    - Disassembly files in fsn_original.disassembly/
"""

import sys
import os
import re
import argparse
import asyncio
import subprocess
from pathlib import Path
from typing import List, Tuple, Optional, Dict
import tree_sitter_c as tsc
from tree_sitter import Language, Parser, Node

# Initialize parser
C_LANGUAGE = Language(tsc.language())
parser = Parser(C_LANGUAGE)

# Default paths
DISASSEMBLY_DIR = "fsn_original.disassembly"
DEFAULT_CONCURRENCY = 40

# Prompt template for Claude
PROMPT_TEMPLATE = """Analyze this MIPS assembly snippet from the FSN file browser (SGI IRIX, 1996).
This code follows a halt_baddata() marker from Ghidra decompilation - meaning Ghidra couldn't decompile this part.

Function: {func_name}
Address range: 0x{addr_start:08x} - 0x{addr_end:08x}

Assembly:
{disassembly}

Provide:
1. What the assembly actually does (2-3 lines max)
2. C-like pseudocode equivalent (as close to valid C as possible)

Keep response concise - it will become a code comment. No markdown formatting."""


def parse_file(filepath: str) -> Tuple[bytes, any]:
    """Parse a C file and return (source_bytes, tree)."""
    with open(filepath, 'rb') as f:
        source = f.read()
    tree = parser.parse(source)
    return source, tree


def get_node_text(source: bytes, node: Node) -> str:
    """Extract text from AST node."""
    return source[node.start_byte:node.end_byte].decode('utf-8')


def extract_function_name(filepath: str) -> Optional[str]:
    """Extract function name from exploded C file (filename = function name)."""
    return Path(filepath).stem


def find_halt_baddata_sites(tree, source: bytes) -> List[Tuple[int, int, int]]:
    """
    Find all halt_baddata() call sites in the AST.

    Returns list of (line_number, start_byte, end_byte) for each occurrence.
    The start_byte points to where we should insert the comment (before the call).
    """
    results = []

    def walk(node: Node):
        if node.type == 'call_expression':
            # Check if it's a call to halt_baddata
            if node.child_count >= 1:
                func_node = node.children[0]
                if func_node.type == 'identifier':
                    func_name = get_node_text(source, func_node)
                    if func_name == 'halt_baddata':
                        # Find the line number
                        line_num = source[:node.start_byte].count(b'\n') + 1

                        # Find the start of this statement (go back to find indentation)
                        # We want to insert comment before the statement, preserving indent
                        stmt_start = node.start_byte

                        # Walk up to find the expression_statement parent
                        parent = node.parent
                        while parent and parent.type != 'expression_statement':
                            parent = parent.parent
                        if parent:
                            stmt_start = parent.start_byte

                        results.append((line_num, stmt_start, node.end_byte))

        for child in node.children:
            walk(child)

    walk(tree.root_node)
    return results


def load_disassembly(func_name: str, disasm_dir: str) -> Optional[Tuple[str, int, int]]:
    """
    Load disassembly for a function.

    Returns (disassembly_text, start_addr, end_addr) or None if not found.
    """
    # Try to find the .S file
    # Structure: disasm_dir/<func_name>/<func_name>.S
    asm_path = Path(disasm_dir) / func_name / f"{func_name}.S"

    if not asm_path.exists():
        # Try alternate locations
        for subdir in Path(disasm_dir).iterdir():
            if subdir.is_dir():
                candidate = subdir / f"{func_name}.S"
                if candidate.exists():
                    asm_path = candidate
                    break
        else:
            return None

    with open(asm_path, 'r') as f:
        content = f.read()

    # Parse the header for address range
    start_addr = 0
    end_addr = 0

    for line in content.split('\n')[:10]:
        if line.startswith('# Address:'):
            match = re.search(r'0x([0-9a-fA-F]+)\s*-\s*0x([0-9a-fA-F]+)', line)
            if match:
                start_addr = int(match.group(1), 16)
                end_addr = int(match.group(2), 16)
                break

    return content, start_addr, end_addr


def extract_disassembly_snippet(full_disasm: str, start_addr: int, end_addr: int,
                                 baddata_index: int, total_baddata: int) -> str:
    """
    Extract a relevant snippet of disassembly around where halt_baddata would be.

    For functions with multiple halt_baddata, we estimate position based on index.
    """
    lines = full_disasm.split('\n')

    # Find actual instruction lines (have addresses)
    instr_lines = []
    for line in lines:
        match = re.match(r'\s*([0-9a-fA-F]+):', line)
        if match:
            addr = int(match.group(1), 16)
            instr_lines.append((addr, line))

    if not instr_lines:
        return full_disasm  # Return all if we can't parse

    # Estimate where this baddata occurs
    # If there are N baddata calls, divide the function into N segments
    total_instrs = len(instr_lines)
    if total_baddata > 1:
        segment_size = total_instrs // total_baddata
        start_idx = baddata_index * segment_size
        # Take instructions from this segment to the end (baddata truncates)
        snippet_lines = instr_lines[start_idx:]
    else:
        # Single baddata - take the last portion of the function
        # (where the truncation likely occurs)
        snippet_lines = instr_lines[-min(30, total_instrs):]

    # Format the snippet
    result = []
    for addr, line in snippet_lines[:30]:  # Limit to 30 lines
        result.append(line)

    return '\n'.join(result)


async def invoke_claude(prompt: str, semaphore: asyncio.Semaphore) -> str:
    """
    Invoke Claude CLI with the given prompt.

    Uses --print for non-interactive mode, passing prompt as argument.
    """
    async with semaphore:
        try:
            proc = await asyncio.create_subprocess_exec(
                'claude', '--print', prompt,
                stdout=asyncio.subprocess.PIPE,
                stderr=asyncio.subprocess.PIPE
            )
            stdout, stderr = await asyncio.wait_for(proc.communicate(), timeout=120)

            if proc.returncode != 0:
                return f"[Claude error: {stderr.decode('utf-8', errors='replace')}]"

            return stdout.decode('utf-8', errors='replace').strip()

        except asyncio.TimeoutError:
            return "[Claude timeout after 120s]"
        except FileNotFoundError:
            return "[Claude CLI not found - install with: npm install -g @anthropic-ai/claude-code]"
        except Exception as e:
            return f"[Claude error: {str(e)}]"


def format_comment(analysis: str, func_name: str, addr_start: int, addr_end: int) -> str:
    """Format Claude's analysis as a C block comment."""
    # Clean up the analysis
    lines = analysis.strip().split('\n')

    # Build comment block
    result = []
    result.append(f"    /*")
    result.append(f"     * BADDATA ANALYSIS (from binary @ 0x{addr_start:08x}):")
    result.append(f"     * Function: {func_name}")
    result.append(f"     *")

    for line in lines:
        # Wrap long lines
        line = line.strip()
        if line:
            result.append(f"     * {line}")

    result.append(f"     */")

    return '\n'.join(result) + '\n'


async def analyze_file(input_path: str, output_path: Optional[str],
                       disasm_dir: str, semaphore: asyncio.Semaphore,
                       dry_run: bool = False) -> Dict:
    """
    Analyze a single C file for halt_baddata occurrences.

    Returns statistics dict.
    """
    stats = {
        'file': input_path,
        'baddata_found': 0,
        'baddata_analyzed': 0,
        'errors': []
    }

    # Parse the file
    source, tree = parse_file(input_path)
    func_name = extract_function_name(input_path)

    # Find halt_baddata sites
    baddata_sites = find_halt_baddata_sites(tree, source)
    stats['baddata_found'] = len(baddata_sites)

    if not baddata_sites:
        # No baddata - just copy the file if output specified
        if output_path:
            with open(output_path, 'wb') as f:
                f.write(source)
        return stats

    # Load disassembly
    disasm_result = load_disassembly(func_name, disasm_dir)
    if not disasm_result:
        stats['errors'].append(f"No disassembly found for {func_name}")
        if output_path:
            with open(output_path, 'wb') as f:
                f.write(source)
        return stats

    full_disasm, addr_start, addr_end = disasm_result

    # Process each baddata site
    # Sort by position (reverse) for safe insertion
    sorted_sites = sorted(baddata_sites, key=lambda x: x[1], reverse=True)

    result = source.decode('utf-8')
    total_baddata = len(sorted_sites)

    for idx, (line_num, stmt_start, stmt_end) in enumerate(sorted_sites):
        # Extract relevant disassembly snippet
        # Index is reversed because we sorted in reverse
        baddata_index = total_baddata - 1 - idx
        snippet = extract_disassembly_snippet(full_disasm, addr_start, addr_end,
                                               baddata_index, total_baddata)

        if dry_run:
            print(f"  Would analyze baddata at line {line_num}")
            print(f"    Function: {func_name}")
            print(f"    Disassembly snippet: {len(snippet.split(chr(10)))} lines")
            stats['baddata_analyzed'] += 1
            continue

        # Build prompt
        prompt = PROMPT_TEMPLATE.format(
            func_name=func_name,
            addr_start=addr_start,
            addr_end=addr_end,
            disassembly=snippet
        )

        # Invoke Claude
        analysis = await invoke_claude(prompt, semaphore)

        if analysis.startswith('[Claude'):
            stats['errors'].append(f"Line {line_num}: {analysis}")
        else:
            stats['baddata_analyzed'] += 1

        # Format as comment and insert
        comment = format_comment(analysis, func_name, addr_start, addr_end)

        # Find the indentation of the statement
        line_start = result.rfind('\n', 0, stmt_start) + 1
        indent = ''
        for ch in result[line_start:stmt_start]:
            if ch in ' \t':
                indent += ch
            else:
                break

        # Insert comment before the statement (adjust for indent)
        # The comment already has indentation, so just insert at stmt_start
        result = result[:stmt_start] + comment + result[stmt_start:]

    # Write output
    if output_path:
        with open(output_path, 'w') as f:
            f.write(result)
    else:
        print(result)

    return stats


async def process_batch(input_dir: str, output_dir: str, disasm_dir: str,
                        max_concurrent: int, dry_run: bool) -> List[Dict]:
    """Process all C files in a directory."""
    input_path = Path(input_dir)
    output_path = Path(output_dir)
    output_path.mkdir(parents=True, exist_ok=True)

    # Find all C files
    c_files = sorted(input_path.glob('*.c'))
    print(f"Found {len(c_files)} C files to process", file=sys.stderr)

    # Create semaphore for concurrency control
    semaphore = asyncio.Semaphore(max_concurrent)

    # Process files
    tasks = []
    for c_file in c_files:
        out_file = output_path / c_file.name
        task = analyze_file(str(c_file), str(out_file), disasm_dir, semaphore, dry_run)
        tasks.append(task)

    # Run with progress reporting
    results = []
    for i, task in enumerate(asyncio.as_completed(tasks)):
        result = await task
        results.append(result)

        # Progress update
        if (i + 1) % 10 == 0 or (i + 1) == len(tasks):
            print(f"Progress: {i + 1}/{len(tasks)} files processed", file=sys.stderr)

    return results


def print_summary(results: List[Dict]):
    """Print summary statistics."""
    total_files = len(results)
    total_baddata = sum(r['baddata_found'] for r in results)
    total_analyzed = sum(r['baddata_analyzed'] for r in results)
    files_with_errors = sum(1 for r in results if r['errors'])

    print("\n=== Summary ===", file=sys.stderr)
    print(f"Files processed: {total_files}", file=sys.stderr)
    print(f"halt_baddata found: {total_baddata}", file=sys.stderr)
    print(f"Successfully analyzed: {total_analyzed}", file=sys.stderr)
    print(f"Files with errors: {files_with_errors}", file=sys.stderr)

    if files_with_errors > 0:
        print("\nErrors:", file=sys.stderr)
        for r in results:
            if r['errors']:
                print(f"  {r['file']}:", file=sys.stderr)
                for err in r['errors']:
                    print(f"    {err}", file=sys.stderr)


def main():
    argp = argparse.ArgumentParser(
        description='Analyze halt_baddata() occurrences using Claude CLI'
    )
    argp.add_argument('input', nargs='?', help='Input C file or directory (with --batch)')
    argp.add_argument('--output', '-o', help='Output file (default: stdout for single file)')
    argp.add_argument('--batch', action='store_true',
                      help='Process all .c files in input directory')
    argp.add_argument('--output-dir', default='fsn_original.exploded.v2',
                      help='Output directory for batch mode')
    argp.add_argument('--disasm-dir', default=DISASSEMBLY_DIR,
                      help=f'Disassembly directory (default: {DISASSEMBLY_DIR})')
    argp.add_argument('--jobs', '-j', type=int, default=DEFAULT_CONCURRENCY,
                      help=f'Max concurrent Claude invocations (default: {DEFAULT_CONCURRENCY})')
    argp.add_argument('--dry-run', action='store_true',
                      help='Show what would be done without invoking Claude')

    args = argp.parse_args()

    if not args.input:
        argp.print_help()
        return 1

    if not os.path.exists(args.input):
        print(f"Error: Input not found: {args.input}", file=sys.stderr)
        return 1

    if args.batch:
        if not os.path.isdir(args.input):
            print(f"Error: --batch requires a directory: {args.input}", file=sys.stderr)
            return 1

        results = asyncio.run(process_batch(
            args.input, args.output_dir, args.disasm_dir, args.jobs, args.dry_run
        ))
        print_summary(results)

    else:
        # Single file mode
        semaphore = asyncio.Semaphore(1)
        result = asyncio.run(analyze_file(
            args.input, args.output, args.disasm_dir, semaphore, args.dry_run
        ))

        if result['errors']:
            for err in result['errors']:
                print(f"Error: {err}", file=sys.stderr)

        print(f"Found {result['baddata_found']} halt_baddata, "
              f"analyzed {result['baddata_analyzed']}", file=sys.stderr)

    return 0


if __name__ == '__main__':
    sys.exit(main())
