#!/usr/bin/env python3
"""
batch_disassemble.py - Generate disassembly for all functions in a C file

Uses tree-sitter to extract function names from exploded C files,
then disassembles each function from the original binary.

Usage:
    python3 analysis/batch_disassemble.py fsn_original.exploded/layout_db.c
    python3 analysis/batch_disassemble.py fsn_original.exploded.cleanup/*.c --output-dir fsn_original.disassembly

Output:
    fsn_original.disassembly/<input_basename>/<function>.S
"""

import sys
import os
import re
import argparse
import subprocess
from pathlib import Path
from typing import List, Tuple, Dict, Optional
import tree_sitter_c as tsc
from tree_sitter import Language, Parser

# Initialize parser
C_LANGUAGE = Language(tsc.language())
parser = Parser(C_LANGUAGE)

# Binary constants
BINARY_PATH = "fsn.original"
GP = 0x1001db30
TEXT_START = 0x00409440
TEXT_END = 0x0043b7b0


def parse_file(filepath: str) -> Tuple[bytes, any]:
    """Parse a C file and return (source_bytes, tree)."""
    with open(filepath, 'rb') as f:
        source = f.read()
    tree = parser.parse(source)
    return source, tree


def extract_function_names(tree, source: bytes) -> List[str]:
    """Extract all function definition names from the AST."""
    functions = []

    def walk(node):
        if node.type == 'function_definition':
            # Find the function declarator
            declarator = None
            for child in node.children:
                if child.type == 'function_declarator':
                    declarator = child
                    break
                elif child.type == 'pointer_declarator':
                    for subchild in child.children:
                        if subchild.type == 'function_declarator':
                            declarator = subchild
                            break

            if declarator:
                # Find the identifier (function name)
                for child in declarator.children:
                    if child.type == 'identifier':
                        name = source[child.start_byte:child.end_byte].decode('utf-8')
                        functions.append(name)
                        break

        for child in node.children:
            walk(child)

    walk(tree.root_node)
    return functions


def load_symbol_table(binary_path: str) -> Dict[str, int]:
    """Load symbol table from binary: name -> address."""
    result = subprocess.run(
        ['mips-linux-gnu-objdump', '-T', binary_path],
        capture_output=True, text=True
    )
    symbols = {}
    for line in result.stdout.split('\n'):
        parts = line.split()
        if len(parts) >= 2:
            try:
                addr = int(parts[0], 16)
                name = parts[-1]
                if addr and TEXT_START <= addr <= TEXT_END:
                    symbols[name] = addr
            except ValueError:
                continue
    return symbols


def find_function_address(func_name: str, symbols: Dict[str, int]) -> Optional[int]:
    """Find function address from name."""
    # Direct match
    if func_name in symbols:
        return symbols[func_name]

    # FUN_ format
    if func_name.startswith('FUN_'):
        try:
            return int(func_name[4:], 16)
        except ValueError:
            pass

    # Try case-insensitive match
    func_lower = func_name.lower()
    for name, addr in symbols.items():
        if name.lower() == func_lower:
            return addr

    return None


def find_function_end(asm_text: str, start_addr: int, max_size: int = 0x2000) -> Tuple[int, str]:
    """
    Find function end by looking for:
    1. jr ra (return instruction)
    2. Next function's prologue: addiu sp,sp,-N
    """
    lines = asm_text.split('\n')
    last_addr = start_addr
    stack_alloc_seen = False

    for line in lines:
        match = re.match(r'\s*([0-9a-fA-F]+):', line)
        if match:
            addr = int(match.group(1), 16)
            if addr < start_addr:
                continue

            last_addr = addr

            # Check for function end
            if addr - start_addr > max_size:
                return last_addr, "max size"

            if 'jr\tra' in line or 'jr\t$ra' in line:
                return addr + 8, "jr ra"

            if re.search(r'addiu\s+sp,sp,-\d+', line):
                if stack_alloc_seen:
                    return addr, "next prologue"
                else:
                    stack_alloc_seen = True

    return last_addr, "end of scan"


def disassemble_function(binary_path: str, func_name: str, start_addr: int,
                         output_path: Path) -> bool:
    """Disassemble a single function and save to file."""
    # Initial disassembly to find function end
    result = subprocess.run(
        ['mips-linux-gnu-objdump', '-d',
         f'--start-address=0x{start_addr:08x}',
         f'--stop-address=0x{start_addr + 0x2000:08x}',
         binary_path],
        capture_output=True, text=True
    )

    if result.returncode != 0:
        return False

    # Find actual function end
    end_addr, method = find_function_end(result.stdout, start_addr)
    size = end_addr - start_addr

    # Re-disassemble with exact size
    result = subprocess.run(
        ['mips-linux-gnu-objdump', '-d',
         f'--start-address=0x{start_addr:08x}',
         f'--stop-address=0x{end_addr:08x}',
         binary_path],
        capture_output=True, text=True
    )

    if result.returncode != 0:
        return False

    # Write output
    output_path.parent.mkdir(parents=True, exist_ok=True)
    with open(output_path, 'w') as f:
        f.write(f"# Function: {func_name}\n")
        f.write(f"# Address: 0x{start_addr:08x} - 0x{end_addr:08x}\n")
        f.write(f"# Size: 0x{size:x} ({size} bytes)\n")
        f.write(f"# End detected by: {method}\n")
        f.write(f"# GP = 0x{GP:08x}\n")
        f.write("#\n\n")
        f.write(result.stdout)

    return True


def process_file(input_path: Path, output_dir: Path, symbols: Dict[str, int],
                 verbose: bool = False) -> Tuple[int, int]:
    """
    Process a single C file, disassembling all functions.

    Returns (success_count, skip_count).
    """
    source, tree = parse_file(str(input_path))
    functions = extract_function_names(tree, source)

    if verbose:
        print(f"Found {len(functions)} functions in {input_path.name}")

    # Create output subdirectory based on input filename
    basename = input_path.stem  # e.g., "layout_db" from "layout_db.c"
    subdir = output_dir / basename

    success = 0
    skipped = 0

    for func_name in functions:
        addr = find_function_address(func_name, symbols)

        if addr is None:
            if verbose:
                print(f"  SKIP: {func_name} (address not found)")
            skipped += 1
            continue

        output_path = subdir / f"{func_name}.S"

        if disassemble_function(BINARY_PATH, func_name, addr, output_path):
            if verbose:
                print(f"  OK: {func_name} @ 0x{addr:08x} -> {output_path}")
            success += 1
        else:
            if verbose:
                print(f"  FAIL: {func_name} @ 0x{addr:08x}")
            skipped += 1

    # Ensure subdir exists and create index file
    subdir.mkdir(parents=True, exist_ok=True)
    index_path = subdir / "INDEX.md"
    with open(index_path, 'w') as f:
        f.write(f"# Disassembly Index: {basename}\n\n")
        f.write(f"Source: `{input_path}`\n\n")
        f.write("| Function | Address | Size | File |\n")
        f.write("|----------|---------|------|------|\n")
        for func_name in sorted(functions):
            addr = find_function_address(func_name, symbols)
            if addr:
                asm_file = subdir / f"{func_name}.S"
                if asm_file.exists():
                    # Read size from file
                    with open(asm_file) as af:
                        for line in af:
                            if line.startswith("# Size:"):
                                size = line.split(":")[1].strip()
                                break
                        else:
                            size = "?"
                    f.write(f"| `{func_name}` | `0x{addr:08x}` | {size} | [{func_name}.S]({func_name}.S) |\n")
                else:
                    f.write(f"| `{func_name}` | `0x{addr:08x}` | - | (failed) |\n")
            else:
                f.write(f"| `{func_name}` | ? | - | (no address) |\n")

    return success, skipped


def main():
    global BINARY_PATH

    argp = argparse.ArgumentParser(
        description='Generate disassembly for all functions in C file(s)'
    )
    argp.add_argument('inputs', nargs='+', help='Input C file(s)')
    argp.add_argument('--output-dir', '-o', default='fsn_original.disassembly',
                      help='Output directory (default: fsn_original.disassembly)')
    argp.add_argument('--binary', '-b', default=BINARY_PATH,
                      help=f'Binary path (default: {BINARY_PATH})')
    argp.add_argument('--verbose', '-v', action='store_true',
                      help='Verbose output')

    args = argp.parse_args()

    BINARY_PATH = args.binary

    if not os.path.exists(BINARY_PATH):
        print(f"Error: Binary not found: {BINARY_PATH}", file=sys.stderr)
        return 1

    # Load symbol table once
    print(f"Loading symbol table from {BINARY_PATH}...", file=sys.stderr)
    symbols = load_symbol_table(BINARY_PATH)
    print(f"Found {len(symbols)} symbols in text section", file=sys.stderr)

    output_dir = Path(args.output_dir)
    total_success = 0
    total_skipped = 0

    for input_path in args.inputs:
        path = Path(input_path)
        if not path.exists():
            print(f"Warning: File not found: {input_path}", file=sys.stderr)
            continue

        if path.is_dir():
            # Process all .c files in directory
            for c_file in path.glob("*.c"):
                success, skipped = process_file(c_file, output_dir, symbols, args.verbose)
                total_success += success
                total_skipped += skipped
        else:
            success, skipped = process_file(path, output_dir, symbols, args.verbose)
            total_success += success
            total_skipped += skipped

    print(f"\nSummary:", file=sys.stderr)
    print(f"  Disassembled: {total_success}", file=sys.stderr)
    print(f"  Skipped: {total_skipped}", file=sys.stderr)
    print(f"  Output: {output_dir}/", file=sys.stderr)

    return 0


if __name__ == '__main__':
    sys.exit(main())
