#!/usr/bin/env python3
"""
Explode fsn.c into individual function files for easier analysis.

Creates:
  fsn.c.exploded/<function_name>.c  - One file per function
  fsn.c.exploded/INDEX.md           - Function catalog with addresses and categories
"""

import sys
import os
import re
from typing import List, Tuple, Dict
import tree_sitter_c as tsc
from tree_sitter import Language, Parser

# Initialize parser
C_LANGUAGE = Language(tsc.language())
parser = Parser(C_LANGUAGE)


def parse_file(filepath: str) -> Tuple[bytes, any]:
    """Parse a C file and return (source_bytes, tree)."""
    with open(filepath, 'rb') as f:
        source = f.read()
    tree = parser.parse(source)
    return source, tree


def get_all_functions(tree, source: bytes) -> List[Dict]:
    """Get all function definitions with their metadata."""
    functions = []

    def walk(node):
        if node.type == 'function_definition':
            func_info = extract_function_info(node, source)
            if func_info:
                functions.append(func_info)

        for child in node.children:
            walk(child)

    walk(tree.root_node)
    return functions


def extract_function_info(node, source: bytes) -> Dict:
    """Extract function info from a function_definition node."""
    # Find function name
    func_name = None
    return_type = ""

    for child in node.children:
        # Get return type (everything before declarator)
        if child.type in ('primitive_type', 'type_identifier', 'sized_type_specifier'):
            return_type = source[child.start_byte:child.end_byte].decode('utf-8')

        if child.type == 'function_declarator':
            for subchild in child.children:
                if subchild.type == 'identifier':
                    func_name = source[subchild.start_byte:subchild.end_byte].decode('utf-8')
                    break
        elif child.type == 'pointer_declarator':
            return_type += " *"
            for subchild in child.children:
                if subchild.type == 'function_declarator':
                    for subsubchild in subchild.children:
                        if subsubchild.type == 'identifier':
                            func_name = source[subsubchild.start_byte:subsubchild.end_byte].decode('utf-8')
                            break

    if not func_name:
        return None

    # Extract Ghidra address from FUN_ prefix
    ghidra_addr = None
    if func_name.startswith('FUN_'):
        ghidra_addr = func_name[4:]  # e.g., "00409440"

    # Get the full function text
    func_text = source[node.start_byte:node.end_byte].decode('utf-8', errors='replace')

    # Categorize function
    category = categorize_function(func_name, func_text)

    return {
        'name': func_name,
        'return_type': return_type.strip(),
        'start_line': node.start_point[0] + 1,
        'end_line': node.end_point[0] + 1,
        'ghidra_addr': ghidra_addr,
        'category': category,
        'text': func_text
    }


def categorize_function(name: str, text: str) -> str:
    """Categorize function based on name and content."""
    text_lower = text.lower()

    # Check name-based categories first
    if any(x in name.lower() for x in ['draw', 'render', 'display']):
        return 'Graphics'
    if any(x in name.lower() for x in ['create', 'destroy', 'widget', 'menu', 'panel']):
        return 'UI'
    if any(x in name.lower() for x in ['dir', 'file', 'path', 'read', 'write']):
        return 'Filesystem'
    if any(x in name.lower() for x in ['pick', 'select', 'mouse', 'input']):
        return 'Input'
    if any(x in name.lower() for x in ['init', 'setup', 'config']):
        return 'Init'

    # Check content-based categories
    if any(x in text_lower for x in ['bgnpolygon', 'endpolygon', 'v3f', 'cpack', 'pushmatrix']):
        return 'Graphics'
    if any(x in text_lower for x in ['xtcreate', 'xmcreate', 'widget']):
        return 'UI'
    if any(x in text_lower for x in ['opendir', 'readdir', 'stat', 'lstat']):
        return 'Filesystem'
    if any(x in text_lower for x in ['gselect', 'picksize']):
        return 'Picking'
    if any(x in text_lower for x in ['malloc', 'calloc', 'free']):
        return 'Memory'

    return 'Other'


def write_function_file(output_dir: str, func: Dict):
    """Write a single function to its own file."""
    filepath = os.path.join(output_dir, f"{func['name']}.c")

    with open(filepath, 'w') as f:
        f.write(f"/**\n")
        f.write(f" * {func['name']}\n")
        f.write(f" *\n")
        f.write(f" * Extracted from fsn.c lines {func['start_line']}-{func['end_line']}\n")
        if func['ghidra_addr']:
            f.write(f" * Ghidra address: 0x{func['ghidra_addr']}\n")
        f.write(f" * Category: {func['category']}\n")
        f.write(f" */\n\n")
        f.write(func['text'])
        f.write('\n')


def write_index(output_dir: str, functions: List[Dict]):
    """Write the INDEX.md file."""
    filepath = os.path.join(output_dir, 'INDEX.md')

    # Group by category
    by_category = {}
    for func in functions:
        cat = func['category']
        if cat not in by_category:
            by_category[cat] = []
        by_category[cat].append(func)

    with open(filepath, 'w') as f:
        f.write("# FSN Function Index\n\n")
        f.write(f"Total functions: {len(functions)}\n\n")

        # Summary table
        f.write("## Category Summary\n\n")
        f.write("| Category | Count |\n")
        f.write("|----------|-------|\n")
        for cat in sorted(by_category.keys()):
            f.write(f"| {cat} | {len(by_category[cat])} |\n")
        f.write("\n")

        # Full listing by category
        for cat in sorted(by_category.keys()):
            f.write(f"## {cat} ({len(by_category[cat])} functions)\n\n")
            f.write("| Function | Lines | Ghidra Address |\n")
            f.write("|----------|-------|----------------|\n")

            for func in sorted(by_category[cat], key=lambda x: x['start_line']):
                addr = f"`0x{func['ghidra_addr']}`" if func['ghidra_addr'] else "-"
                f.write(f"| `{func['name']}` | {func['start_line']}-{func['end_line']} | {addr} |\n")
            f.write("\n")


def main():
    import argparse
    parser = argparse.ArgumentParser(description='Explode fsn.c into individual function files')
    parser.add_argument('--input', '-i', default='fsn.c', help='Input C file')
    parser.add_argument('--output', '-o', default=None, help='Output directory (default: <input>.exploded)')
    args = parser.parse_args()

    filepath = args.input
    output_dir = args.output if args.output else f"{filepath}.exploded"

    if not os.path.exists(filepath):
        print(f"Error: {filepath} not found")
        sys.exit(1)

    print(f"Parsing {filepath}...")
    source, tree = parse_file(filepath)

    print("Extracting functions...")
    functions = get_all_functions(tree, source)
    print(f"Found {len(functions)} functions")

    # Create output directory
    os.makedirs(output_dir, exist_ok=True)

    # Write individual function files
    print(f"Writing to {output_dir}/...")
    for i, func in enumerate(functions):
        write_function_file(output_dir, func)
        if (i + 1) % 50 == 0:
            print(f"  {i + 1}/{len(functions)} functions written...")

    # Write index
    print("Writing INDEX.md...")
    write_index(output_dir, functions)

    # Print summary
    print("\nDone!")
    print(f"  {len(functions)} function files created in {output_dir}/")
    print(f"  Index written to {output_dir}/INDEX.md")

    # Show category breakdown
    by_category = {}
    for func in functions:
        cat = func['category']
        by_category[cat] = by_category.get(cat, 0) + 1

    print("\nCategory breakdown:")
    for cat in sorted(by_category.keys()):
        print(f"  {cat:12s}: {by_category[cat]:3d}")


if __name__ == '__main__':
    main()
