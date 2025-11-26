#!/usr/bin/env python3
"""
Generate fsn_forward.h with forward declarations for all functions.
Uses tree-sitter for accurate C parsing.
"""

import sys
import os
from typing import List, Tuple, Dict, Set
import tree_sitter_c as tsc
from tree_sitter import Language, Parser
from pathlib import Path

# Initialize parser
C_LANGUAGE = Language(tsc.language())
parser = Parser(C_LANGUAGE)


def parse_file(filepath: str) -> Tuple[bytes, any]:
    """Parse a C file and return (source_bytes, tree)."""
    with open(filepath, 'rb') as f:
        source = f.read()
    tree = parser.parse(source)
    return source, tree


def extract_function_signature(source: bytes, node) -> Tuple[str, str, bool]:
    """Extract function name and signature from a function definition node.
    Returns (name, signature, is_static)."""
    # Find the function name
    func_name = None

    def find_func_name(n):
        if n.type == 'identifier' and n.parent and n.parent.type == 'function_declarator':
            return source[n.start_byte:n.end_byte].decode('utf-8')
        for child in n.children:
            result = find_func_name(child)
            if result:
                return result
        return None

    func_name = find_func_name(node)

    # Check if static
    is_static = False
    for child in node.children:
        if child.type == 'storage_class_specifier':
            spec = source[child.start_byte:child.end_byte].decode('utf-8')
            if spec == 'static':
                is_static = True
                break

    # Find everything up to the compound_statement (function body)
    for child in node.children:
        if child.type == 'compound_statement':
            sig = source[node.start_byte:child.start_byte].decode('utf-8', errors='replace')
            sig = sig.strip()
            # Clean up newlines and extra spaces
            sig = ' '.join(sig.split())
            return func_name, sig + ';', is_static

    # Fallback: split at {
    sig = source[node.start_byte:node.end_byte].decode('utf-8', errors='replace')
    sig = sig.split('{')[0].strip()
    sig = ' '.join(sig.split())
    return func_name, sig + ';', is_static


def get_all_function_signatures(filepath: str) -> Dict[str, Tuple[str, bool]]:
    """Get all function signatures from a C file.
    Returns dict of name -> (signature, is_static)."""
    source, tree = parse_file(filepath)
    signatures = {}

    def walk(node):
        if node.type == 'function_definition':
            name, sig, is_static = extract_function_signature(source, node)
            if name:
                signatures[name] = (sig, is_static)

        for child in node.children:
            walk(child)

    walk(tree.root_node)
    return signatures


def load_missing_functions(filepath: str) -> Set[str]:
    """Load list of functions that are called but not found."""
    missing = set()
    if os.path.exists(filepath):
        with open(filepath, 'r') as f:
            for line in f:
                line = line.strip()
                if line:
                    missing.add(line)
    return missing


def main():
    # Find all .c files in src/
    src_dir = Path(__file__).parent.parent / 'src'
    c_files = list(src_dir.glob('*.c'))

    print(f"Processing {len(c_files)} source files...")

    all_signatures = {}
    static_count = 0
    skipped_types = set()

    # Types that require special headers (skip these declarations)
    special_types = {'in_addr_t', 'u_long', 'WatchEntry', 'Coord', 'Angle', 'Icoord',
                     'FAMConnection', 'FAMEventCode', 'FAMRequest', 'Colorindex',
                     'Screencoord', 'Device', 'Matrix', 'Object', 'Tag', 'RGBvalue'}

    for c_file in sorted(c_files):
        sigs = get_all_function_signatures(str(c_file))
        non_static = sum(1 for _, (_, is_static) in sigs.items() if not is_static)
        static = len(sigs) - non_static
        static_count += static
        print(f"  {c_file.name}: {len(sigs)} functions ({non_static} exported, {static} static)")

        for name, (sig, is_static) in sigs.items():
            if is_static:
                continue  # Skip static functions

            # Check if signature uses special types
            uses_special = False
            for special in special_types:
                if special in sig:
                    uses_special = True
                    skipped_types.add(special)
                    break

            if uses_special:
                continue

            if name not in all_signatures:
                all_signatures[name] = sig
            # If already exists, keep the first one (avoid duplicates)

    print(f"\nTotal unique exported functions: {len(all_signatures)}")
    print(f"Skipped: {static_count} static functions")
    if skipped_types:
        print(f"Skipped types requiring special headers: {', '.join(sorted(skipped_types))}")

    # Optionally filter to only functions that are called from other files
    # For now, output all of them

    # Write to fsn_forward.h
    include_dir = Path(__file__).parent.parent / 'include'
    output_path = include_dir / 'fsn_forward.h'

    with open(output_path, 'w') as f:
        f.write("/**\n")
        f.write(" * fsn_forward.h - Forward declarations for all FSN functions\n")
        f.write(" *\n")
        f.write(" * Auto-generated by generate_forward_decls.py using tree-sitter\n")
        f.write(" */\n\n")
        f.write("#ifndef FSN_FORWARD_H\n")
        f.write("#define FSN_FORWARD_H\n\n")
        f.write("/* Note: This file should be included after fsn_types.h */\n")
        f.write("/* Types used: undefined, undefined1, undefined2, undefined4, uint, etc. */\n\n")

        # Group by prefix for organization
        groups = {}
        for name in sorted(all_signatures.keys()):
            # Get prefix (first word before _)
            parts = name.split('_')
            if len(parts) > 1 and parts[0]:
                prefix = parts[0]
            else:
                prefix = "misc"

            if prefix not in groups:
                groups[prefix] = []
            groups[prefix].append((name, all_signatures[name]))

        # Write grouped declarations
        for prefix in sorted(groups.keys()):
            f.write(f"/* {prefix}_* functions */\n")
            for name, sig in sorted(groups[prefix]):
                f.write(f"{sig}\n")
            f.write("\n")

        f.write("#endif /* FSN_FORWARD_H */\n")

    print(f"\nGenerated: {output_path}")
    print(f"  {len(all_signatures)} forward declarations")


if __name__ == '__main__':
    main()
