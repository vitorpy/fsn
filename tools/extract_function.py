#!/usr/bin/env python3
"""
Extract a function from a C source file given a line number.
Uses tree-sitter for accurate parsing.
"""

import sys
import json
import tree_sitter_c as tsc
from tree_sitter import Language, Parser

def find_function_at_line(source: bytes, target_line: int) -> dict | None:
    """Find the function containing the target line."""
    C_LANGUAGE = Language(tsc.language())
    parser = Parser(C_LANGUAGE)
    tree = parser.parse(source)

    def find_function(node, target_line):
        """Recursively find function containing target line."""
        if node.type == 'function_definition':
            start_line = node.start_point[0] + 1  # 1-indexed
            end_line = node.end_point[0] + 1
            if start_line <= target_line <= end_line:
                # Get function name
                for child in node.children:
                    if child.type == 'function_declarator':
                        for c in child.children:
                            if c.type == 'identifier':
                                func_name = source[c.start_byte:c.end_byte].decode('utf-8')
                                return {
                                    'name': func_name,
                                    'start_line': start_line,
                                    'end_line': end_line,
                                    'text': source[node.start_byte:node.end_byte].decode('utf-8')
                                }
                        # Try pointer_declarator for functions returning pointers
                        if child.type == 'pointer_declarator':
                            for c2 in child.children:
                                if c2.type == 'function_declarator':
                                    for c3 in c2.children:
                                        if c3.type == 'identifier':
                                            func_name = source[c3.start_byte:c3.end_byte].decode('utf-8')
                                            return {
                                                'name': func_name,
                                                'start_line': start_line,
                                                'end_line': end_line,
                                                'text': source[node.start_byte:node.end_byte].decode('utf-8')
                                            }

        for child in node.children:
            result = find_function(child, target_line)
            if result:
                return result
        return None

    return find_function(tree.root_node, target_line)

def main():
    if len(sys.argv) < 3:
        print("Usage: extract_function.py <file> <line_number>", file=sys.stderr)
        sys.exit(1)

    filepath = sys.argv[1]
    line_num = int(sys.argv[2])

    with open(filepath, 'rb') as f:
        source = f.read()

    result = find_function_at_line(source, line_num)
    if result:
        print(json.dumps(result, indent=2))
    else:
        print(json.dumps({'error': f'No function found at line {line_num}'}))
        sys.exit(1)

if __name__ == '__main__':
    main()
