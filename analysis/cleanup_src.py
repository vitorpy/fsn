#!/usr/bin/env python3
"""
cleanup_src.py - Claude-powered cleanup of src/*.c files

Uses tree-sitter to extract functions containing halt_baddata(),
finds corresponding reference in fsn_original.exploded.v2/,
then uses Claude CLI to intelligently fix each function.

Usage:
    python3 analysis/cleanup_src.py --dry-run           # Preview what would be fixed
    python3 analysis/cleanup_src.py --jobs 8            # Run with 8 concurrent Claude calls
    python3 analysis/cleanup_src.py src/checks.c        # Single file
    python3 analysis/cleanup_src.py --backup            # Create .bak files before modifying
"""

import sys
import os
import asyncio
import argparse
import shutil
from pathlib import Path
from typing import List, Dict, Tuple, Optional
import tree_sitter_c as tsc
from tree_sitter import Language, Parser

# Initialize tree-sitter parser
C_LANGUAGE = Language(tsc.language())
parser = Parser(C_LANGUAGE)

# Reference directory with already-cleaned function files
V2_DIR = Path("fsn_original.exploded.v2")

# Struct offset mappings for the prompt
STRUCT_MAPPINGS = """
DirectoryNode (32-bit MIPS offsets):
  0x00=name, 0x04=name_len, 0x08=parent, 0x0c=file_count, 0x10=file_array,
  0x14=child_count (num_files), 0x18=child_array (files_array),
  0x28=child_center, 0x2c=child_left, 0x30=child_right,
  0x34=pos_x, 0x38=pos_y, 0x3c=height, 0x44=flags,
  0x4c=offset_x, 0x50=offset_y, 0x5e=name_index,
  0x74=render_flags, 0x76=depth_indicator

FsnContext (32-bit MIPS offsets):
  0x00=camera_x, 0x04=camera_y, 0x08=camera_z,
  0x0c=rotation_z, 0x0e=rotation_x, 0x10=fov,
  0x14=sin_z, 0x18=cos_z, 0x1c=tan_z,
  0x20=sin_x, 0x24=cos_x, 0x28=tan_x,
  0x34=scale_factor, 0x3c=zoom_mode,
  0x44=current_dir, 0x48=current_file
"""


def find_functions_with_baddata(filepath: str) -> List[Tuple[str, int, int, str]]:
    """
    Find all functions containing halt_baddata() in a C file.

    Returns list of (func_name, start_byte, end_byte, func_body) tuples.
    Uses tree-sitter for accurate parsing.
    """
    with open(filepath, 'rb') as f:
        source = f.read()

    tree = parser.parse(source)
    results = []

    def extract_func_name(node) -> Optional[str]:
        """Extract function name from a function_definition node."""
        for child in node.children:
            if child.type == 'function_declarator':
                for c in child.children:
                    if c.type == 'identifier':
                        return source[c.start_byte:c.end_byte].decode('utf-8')
            # Handle pointer return types: type *func_name(...)
            elif child.type == 'pointer_declarator':
                for c in child.children:
                    if c.type == 'function_declarator':
                        for cc in c.children:
                            if cc.type == 'identifier':
                                return source[cc.start_byte:cc.end_byte].decode('utf-8')
        return None

    for node in tree.root_node.children:
        if node.type == 'function_definition':
            body = source[node.start_byte:node.end_byte].decode('utf-8')
            if 'halt_baddata' in body:
                name = extract_func_name(node)
                if name:
                    results.append((name, node.start_byte, node.end_byte, body))

    return results


def find_v2_reference(func_name: str) -> Optional[str]:
    """
    Find the corresponding cleaned function file in fsn_original.exploded.v2/.

    Returns the file content if found, None otherwise.
    """
    v2_path = V2_DIR / f"{func_name}.c"
    if v2_path.exists():
        return v2_path.read_text()
    return None


async def fix_function_with_claude(
    func_name: str,
    current: str,
    reference: str,
    semaphore: asyncio.Semaphore
) -> str:
    """
    Use Claude CLI to fix a function.

    Provides both the current version and v2 reference, asking Claude to:
    1. Replace halt_baddata() with return;
    2. Replace byte offsets with struct field access
    3. Preserve any modern improvements already in current
    """
    prompt = f"""You are a C compiler. Output ONLY valid ISO C99 code.

CURRENT VERSION:
{current}

REFERENCE VERSION (contains BADDATA ANALYSIS):
{reference}

TASK: Merge these into ONE valid C99 function.

RULES:
1. Use EXACT function signature from CURRENT (do not change parameter types or names)
2. Keep all code from CURRENT that appears BEFORE halt_baddata()
3. Copy the BADDATA ANALYSIS comment from REFERENCE into the output
4. CRITICAL: Remove nested comments! The BADDATA ANALYSIS contains /* */ inside it -
   replace inner /* with // and remove inner */ entirely. C does not allow nested comments.
5. Remove markdown ``` fences from inside comments
6. Replace halt_baddata(); with return; (or return 0; for non-void functions)

OUTPUT FORMAT:
- Output ONLY the C function, nothing else
- Start with the return type (void, int, char*, etc)
- No markdown fences around the output
- Must be valid ISO C99 that compiles with gcc -std=c99"""

    async with semaphore:
        try:
            proc = await asyncio.create_subprocess_exec(
                'claude', '--print', prompt,
                stdout=asyncio.subprocess.PIPE,
                stderr=asyncio.subprocess.PIPE
            )
            stdout, stderr = await asyncio.wait_for(proc.communicate(), timeout=120)

            if proc.returncode != 0:
                error_msg = stderr.decode('utf-8', errors='replace')
                print(f"  [ERROR] Claude failed for {func_name}: {error_msg[:100]}", file=sys.stderr)
                return current  # Return original on error

            result = stdout.decode('utf-8', errors='replace').strip()

            # Clean up any markdown fences Claude might add despite instructions
            if result.startswith('```'):
                lines = result.split('\n')
                # Remove first and last fence lines
                if lines[0].startswith('```'):
                    lines = lines[1:]
                if lines and lines[-1].strip() == '```':
                    lines = lines[:-1]
                result = '\n'.join(lines)

            # Validate that result looks like C code
            # Must start with a type/comment/attribute, not explanatory text
            first_line = result.split('\n')[0].strip() if result else ''
            valid_starts = (
                'void ', 'int ', 'char ', 'float ', 'double ', 'unsigned ',
                'static ', 'extern ', 'const ', 'struct ', 'typedef ',
                '/*', '//', '#', 'uint', 'undefined', 'bool ', 'short ',
                'long ', 'size_t', 'ssize_t', '__'
            )
            if not any(first_line.startswith(s) for s in valid_starts):
                print(f"  [INVALID] {func_name}: Claude returned non-code output", file=sys.stderr)
                return current  # Return original on invalid output

            # Check for explanation patterns ANYWHERE in the output
            # These should only appear inside /* */ comments
            explanation_patterns = [
                'Looking at', 'Let me', 'Based on', 'The function', 'This function',
                'Here is', 'I will', 'I have', 'Note that', 'Given the',
                'appears to be', 'seems to', 'This appears'
            ]
            # Simple heuristic: count comment delimiters
            # If an explanation pattern appears outside balanced comments, reject
            for pattern in explanation_patterns:
                if pattern in result:
                    # Check if pattern is inside a comment block
                    idx = result.find(pattern)
                    before = result[:idx]
                    # Count /* and */ before this point
                    opens = before.count('/*')
                    closes = before.count('*/')
                    if opens <= closes:
                        # Pattern is outside a comment block
                        print(f"  [INVALID] {func_name}: explanation text outside comment", file=sys.stderr)
                        return current

            return result

        except asyncio.TimeoutError:
            print(f"  [TIMEOUT] Claude timed out for {func_name}", file=sys.stderr)
            return current
        except FileNotFoundError:
            print("  [ERROR] Claude CLI not found. Install with: npm install -g @anthropic-ai/claude-code",
                  file=sys.stderr)
            return current
        except Exception as e:
            print(f"  [ERROR] {func_name}: {e}", file=sys.stderr)
            return current


async def process_file(
    filepath: str,
    dry_run: bool,
    backup: bool,
    semaphore: asyncio.Semaphore
) -> Dict:
    """
    Process a single src/*.c file.

    Returns stats dict with counts of fixed/skipped functions.
    """
    stats = {'file': filepath, 'fixed': 0, 'skipped': 0, 'no_ref': []}

    # Find functions with halt_baddata
    functions = find_functions_with_baddata(filepath)
    if not functions:
        return stats

    print(f"Processing {filepath}: {len(functions)} functions with halt_baddata")

    # Read current content
    with open(filepath, 'r') as f:
        content = f.read()

    # Create backup if requested
    if backup and not dry_run:
        backup_path = filepath + '.bak'
        shutil.copy(filepath, backup_path)
        print(f"  Created backup: {backup_path}")

    # Process functions in reverse order to maintain byte positions
    sorted_funcs = sorted(functions, key=lambda x: x[1], reverse=True)

    for func_name, start, end, body in sorted_funcs:
        # Find v2 reference
        ref = find_v2_reference(func_name)
        if not ref:
            stats['skipped'] += 1
            stats['no_ref'].append(func_name)
            print(f"  [SKIP] {func_name}: no v2 reference found")
            continue

        if dry_run:
            print(f"  [DRY-RUN] Would fix: {func_name}")
            stats['fixed'] += 1
            continue

        # Fix with Claude
        print(f"  Fixing: {func_name}...")
        fixed = await fix_function_with_claude(func_name, body, ref, semaphore)

        # Replace in content
        content = content[:start] + fixed + content[end:]
        stats['fixed'] += 1

    # Write back if not dry-run
    if not dry_run and stats['fixed'] > 0:
        with open(filepath, 'w') as f:
            f.write(content)
        print(f"  Wrote {stats['fixed']} fixes to {filepath}")

    return stats


async def main():
    argp = argparse.ArgumentParser(
        description='Claude-powered cleanup of src/*.c files'
    )
    argp.add_argument('files', nargs='*',
                      help='Specific files to process (default: all src/*.c)')
    argp.add_argument('--dry-run', action='store_true',
                      help='Show what would be fixed without making changes')
    argp.add_argument('--backup', action='store_true',
                      help='Create .bak files before modifying')
    argp.add_argument('--jobs', '-j', type=int, default=8,
                      help='Max concurrent Claude invocations (default: 8)')

    args = argp.parse_args()

    # Get file list
    if args.files:
        files = [Path(f) for f in args.files]
    else:
        files = sorted(Path('src').glob('*.c'))

    # Filter to existing files
    files = [f for f in files if f.exists()]

    if not files:
        print("No files to process", file=sys.stderr)
        return 1

    print(f"{'[DRY-RUN] ' if args.dry_run else ''}Processing {len(files)} files...")
    print(f"Using {args.jobs} concurrent Claude calls")
    print()

    # Create semaphore for concurrency control
    semaphore = asyncio.Semaphore(args.jobs)

    # Process all files
    tasks = [process_file(str(f), args.dry_run, args.backup, semaphore) for f in files]
    results = await asyncio.gather(*tasks)

    # Summary
    total_fixed = sum(r['fixed'] for r in results)
    total_skipped = sum(r['skipped'] for r in results)
    files_modified = sum(1 for r in results if r['fixed'] > 0)

    print()
    print("=" * 60)
    print(f"SUMMARY")
    print("=" * 60)
    print(f"Files processed: {len(files)}")
    print(f"Files with fixes: {files_modified}")
    print(f"Functions fixed: {total_fixed}")
    print(f"Functions skipped (no v2 ref): {total_skipped}")

    # List skipped functions
    all_no_ref = []
    for r in results:
        all_no_ref.extend(r.get('no_ref', []))

    if all_no_ref:
        print(f"\nFunctions without v2 reference:")
        for name in sorted(set(all_no_ref)):
            print(f"  - {name}")

    return 0


if __name__ == '__main__':
    sys.exit(asyncio.run(main()))
