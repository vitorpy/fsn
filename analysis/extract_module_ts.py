#!/usr/bin/env python3
"""
Extract a module from fsn.c using tree-sitter for robust C parsing.
Creates both .c and .h files with accurate function extraction.
"""

import sys
import os
from typing import List, Tuple, Optional, Set
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


def get_function_node(tree, source: bytes, func_name: str) -> Optional[any]:
    """Find a function definition node by name."""
    def walk(node):
        if node.type == 'function_definition':
            # Get the declarator to find function name
            declarator = None
            for child in node.children:
                if child.type == 'function_declarator':
                    declarator = child
                    break
                elif child.type == 'pointer_declarator':
                    # Handle pointer return types
                    for subchild in child.children:
                        if subchild.type == 'function_declarator':
                            declarator = subchild
                            break

            if declarator:
                # Find the identifier (function name)
                for child in declarator.children:
                    if child.type == 'identifier':
                        name = source[child.start_byte:child.end_byte].decode('utf-8')
                        if name == func_name:
                            return node
                    elif child.type == 'parenthesized_declarator':
                        # Handle (*func)() style
                        for sub in child.children:
                            if sub.type == 'pointer_declarator':
                                for subsub in sub.children:
                                    if subsub.type == 'identifier':
                                        name = source[subsub.start_byte:subsub.end_byte].decode('utf-8')
                                        if name == func_name:
                                            return node

        for child in node.children:
            result = walk(child)
            if result:
                return result
        return None

    return walk(tree.root_node)


def get_all_function_names(tree, source: bytes) -> List[Tuple[str, int, int]]:
    """Get all function names with their line ranges."""
    functions = []

    def walk(node):
        if node.type == 'function_definition':
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
                for child in declarator.children:
                    if child.type == 'identifier':
                        name = source[child.start_byte:child.end_byte].decode('utf-8')
                        start_line = node.start_point[0] + 1
                        end_line = node.end_point[0] + 1
                        functions.append((name, start_line, end_line))
                        break

        for child in node.children:
            walk(child)

    walk(tree.root_node)
    return functions


def extract_function_text(source: bytes, node) -> str:
    """Extract the full function text from source."""
    return source[node.start_byte:node.end_byte].decode('utf-8', errors='replace')


def extract_function_signature(source: bytes, node) -> str:
    """Extract just the function signature (for header file)."""
    # Find everything up to the compound_statement (function body)
    for child in node.children:
        if child.type == 'compound_statement':
            sig = source[node.start_byte:child.start_byte].decode('utf-8', errors='replace')
            return sig.strip() + ';'
    return source[node.start_byte:node.end_byte].decode('utf-8', errors='replace').split('{')[0].strip() + ';'


def list_functions(filepath: str, pattern: str = None):
    """List all functions, optionally filtered by pattern."""
    source, tree = parse_file(filepath)
    functions = get_all_function_names(tree, source)

    print(f"Found {len(functions)} functions in {filepath}")
    print()

    for name, start, end in sorted(functions, key=lambda x: x[1]):
        if pattern is None or pattern.lower() in name.lower():
            print(f"  {start:6d}-{end:6d}  {name}")


def extract_module(filepath: str, module_name: str, func_names: List[str]):
    """Extract functions into a module."""
    source, tree = parse_file(filepath)

    extracted = []
    signatures = []

    print(f"\nExtracting {len(func_names)} functions for module '{module_name}':")

    for func_name in func_names:
        node = get_function_node(tree, source, func_name)
        if node:
            text = extract_function_text(source, node)
            sig = extract_function_signature(source, node)
            start_line = node.start_point[0] + 1
            end_line = node.end_point[0] + 1

            extracted.append(text)
            signatures.append(sig)
            print(f"  [OK] {func_name} (lines {start_line}-{end_line})")
        else:
            print(f"  [!!] {func_name} - NOT FOUND")

    if not extracted:
        print("\nNo functions extracted!")
        return

    # Create output directories
    os.makedirs("src", exist_ok=True)
    os.makedirs("include", exist_ok=True)

    # Write .c file
    c_path = f"src/{module_name}.c"
    with open(c_path, 'w') as f:
        f.write(f"/**\n")
        f.write(f" * {module_name}.c - Extracted from fsn.c using tree-sitter\n")
        f.write(f" *\n")
        f.write(f" * AS-IS extraction preserving all decompilation artifacts.\n")
        f.write(f" */\n\n")
        f.write(f'#include "{module_name}.h"\n')
        f.write(f'#include "fsn_types.h"\n')
        f.write(f'#include "fsn_state.h"\n\n')
        f.write('\n\n'.join(extracted))
        f.write('\n')

    # Write .h file
    h_path = f"include/{module_name}.h"
    guard = f"FSN_{module_name.upper()}_H"
    with open(h_path, 'w') as f:
        f.write(f"/**\n")
        f.write(f" * {module_name}.h - Header for {module_name} module\n")
        f.write(f" *\n")
        f.write(f" * Extracted from fsn.c using tree-sitter\n")
        f.write(f" */\n\n")
        f.write(f"#ifndef {guard}\n")
        f.write(f"#define {guard}\n\n")
        f.write(f'#include "fsn_types.h"\n\n')
        f.write('\n'.join(signatures))
        f.write(f'\n\n#endif /* {guard} */\n')

    print(f"\n[OK] Created {c_path} ({len(extracted)} functions)")
    print(f"[OK] Created {h_path} ({len(signatures)} declarations)")


def main():
    if len(sys.argv) < 2:
        print("Usage:")
        print("  extract_module_ts.py list [pattern]           - List all functions")
        print("  extract_module_ts.py <module> func1,func2,... - Extract functions")
        print()
        print("Examples:")
        print("  extract_module_ts.py list draw                - List functions containing 'draw'")
        print("  extract_module_ts.py rendering draw_scene,redraw_gl_scene")
        sys.exit(1)

    filepath = 'fsn.c'

    if sys.argv[1] == 'list':
        pattern = sys.argv[2] if len(sys.argv) > 2 else None
        list_functions(filepath, pattern)
    else:
        module_name = sys.argv[1]
        if len(sys.argv) < 3:
            print("Error: specify functions to extract")
            sys.exit(1)
        func_names = [f.strip() for f in sys.argv[2].split(',')]
        extract_module(filepath, module_name, func_names)


if __name__ == '__main__':
    main()
