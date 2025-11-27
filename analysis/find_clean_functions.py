#!/usr/bin/env python3
"""
Find functions in fsn.c that DON'T contain halt_baddata() calls.
These are "clean" functions that can be extracted without corruption issues.
"""

import sys
import tree_sitter_c as tsc
from tree_sitter import Language, Parser

C_LANGUAGE = Language(tsc.language())
parser = Parser(C_LANGUAGE)


def parse_file(filepath: str):
    """Parse a C file and return (source_bytes, tree)."""
    with open(filepath, 'rb') as f:
        source = f.read()
    tree = parser.parse(source)
    return source, tree


def contains_call(node, source: bytes, call_name: str) -> bool:
    """Check if a node contains a call to a specific function."""
    if node.type == 'call_expression':
        # Get the function name being called
        func = node.child_by_field_name('function')
        if func and func.type == 'identifier':
            name = source[func.start_byte:func.end_byte].decode('utf-8')
            if name == call_name:
                return True

    # Recurse into children
    for child in node.children:
        if contains_call(child, source, call_name):
            return True
    return False


def get_function_info(node, source: bytes):
    """Extract function name and line number from a function_definition node."""
    name = None

    # Find the declarator
    for child in node.children:
        if child.type == 'function_declarator':
            declarator = child
        elif child.type == 'pointer_declarator':
            for subchild in child.children:
                if subchild.type == 'function_declarator':
                    declarator = subchild
                    break
        else:
            continue

        # Find the identifier in the declarator
        for subchild in declarator.children:
            if subchild.type == 'identifier':
                name = source[subchild.start_byte:subchild.end_byte].decode('utf-8')
                break
        break

    if not name:
        # Try another approach - look for any identifier in the signature
        for child in node.children:
            if child.type == 'identifier':
                name = source[child.start_byte:child.end_byte].decode('utf-8')
                break

    line = node.start_point[0] + 1  # 0-indexed to 1-indexed
    return name, line


def find_all_functions(tree, source: bytes):
    """Find all function definitions in the tree."""
    functions = []

    def walk(node):
        if node.type == 'function_definition':
            name, line = get_function_info(node, source)
            if name:
                has_baddata = contains_call(node, source, 'halt_baddata')
                body_size = node.end_byte - node.start_byte
                functions.append({
                    'name': name,
                    'line': line,
                    'has_baddata': has_baddata,
                    'size': body_size,
                    'node': node
                })
        for child in node.children:
            walk(child)

    walk(tree.root_node)
    return functions


def main():
    filepath = sys.argv[1] if len(sys.argv) > 1 else 'fsn.c'

    print(f"Parsing {filepath}...")
    source, tree = parse_file(filepath)

    print("Finding functions...")
    functions = find_all_functions(tree, source)

    clean = [f for f in functions if not f['has_baddata']]
    corrupted = [f for f in functions if f['has_baddata']]

    print(f"\nTotal functions: {len(functions)}")
    print(f"Clean (no halt_baddata): {len(clean)}")
    print(f"Corrupted (has halt_baddata): {len(corrupted)}")

    # Sort by name for easier reading
    clean.sort(key=lambda x: x['name'])

    print(f"\n=== CLEAN FUNCTIONS ({len(clean)}) ===")
    for f in clean:
        print(f"  {f['name']:40} line {f['line']:6}  ({f['size']:5} bytes)")

    if '--show-corrupted' in sys.argv:
        print(f"\n=== CORRUPTED FUNCTIONS ({len(corrupted)}) ===")
        corrupted.sort(key=lambda x: x['name'])
        for f in corrupted:
            print(f"  {f['name']:40} line {f['line']:6}")


if __name__ == '__main__':
    main()
