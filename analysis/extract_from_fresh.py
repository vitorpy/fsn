#!/usr/bin/env python3
"""
Extract functions from fsn2.c (fresh Ghidra decompile) and apply renames.
"""

import sys
import os
import re
import tree_sitter_c as tsc
from tree_sitter import Language, Parser

C_LANGUAGE = Language(tsc.language())
parser = Parser(C_LANGUAGE)

def load_renames(rename_file):
    """Load DAT_ -> name mappings from renames file."""
    renames = {}
    if not os.path.exists(rename_file):
        return renames
    with open(rename_file) as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith('#'):
                continue
            if ' -> ' in line:
                parts = line.split(' -> ')
                old = parts[0].strip()
                new = parts[1].split(':')[0].strip()
                renames[old] = new
    return renames


def get_function_node(tree, source, func_name):
    """Find a function definition node by name."""
    def walk(node):
        if node.type == 'function_definition':
            for child in node.children:
                if child.type == 'function_declarator':
                    for sc in child.children:
                        if sc.type == 'identifier':
                            name = source[sc.start_byte:sc.end_byte].decode('utf-8')
                            if name == func_name:
                                return node
        for child in node.children:
            result = walk(child)
            if result:
                return result
        return None
    return walk(tree.root_node)


def extract_function(source, tree, func_name):
    """Extract a function's source code."""
    node = get_function_node(tree, source, func_name)
    if not node:
        return None
    return source[node.start_byte:node.end_byte].decode('utf-8')


def apply_renames(code, renames):
    """Apply DAT_ -> name renames to code."""
    for old, new in renames.items():
        # Use word boundary to avoid partial matches
        code = re.sub(r'\b' + re.escape(old) + r'\b', new, code)
    return code


def main():
    if len(sys.argv) < 2:
        print("Usage: extract_from_fresh.py <function_name> [--no-rename]")
        print("       extract_from_fresh.py list [pattern]")
        sys.exit(1)

    fsn2_path = os.path.expanduser('~/fsn2.c')
    rename_file = 'analysis/global_renames.txt'

    with open(fsn2_path, 'rb') as f:
        source = f.read()
    tree = parser.parse(source)

    if sys.argv[1] == 'list':
        pattern = sys.argv[2].lower() if len(sys.argv) > 2 else ''
        def walk(node):
            if node.type == 'function_definition':
                for child in node.children:
                    if child.type == 'function_declarator':
                        for sc in child.children:
                            if sc.type == 'identifier':
                                name = source[sc.start_byte:sc.end_byte].decode('utf-8')
                                if pattern in name.lower():
                                    line = node.start_point[0] + 1
                                    print(f"{line:6}: {name}")
            for child in node.children:
                walk(child)
        walk(tree.root_node)
        return

    func_name = sys.argv[1]
    no_rename = '--no-rename' in sys.argv

    code = extract_function(source, tree, func_name)
    if not code:
        print(f"Function '{func_name}' not found in fsn2.c")
        sys.exit(1)

    if not no_rename:
        renames = load_renames(rename_file)
        code = apply_renames(code, renames)

    print(code)


if __name__ == '__main__':
    main()
