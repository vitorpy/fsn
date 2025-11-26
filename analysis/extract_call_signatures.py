#!/usr/bin/env python3
"""
Extract function call signatures from source files using tree-sitter.
Generates stub declarations based on how functions are actually called.
"""

import sys
import os
from typing import Dict, List, Tuple, Set
from pathlib import Path
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


def infer_type_from_arg(source: bytes, arg_node) -> str:
    """Infer C type from an argument expression node."""
    arg_text = source[arg_node.start_byte:arg_node.end_byte].decode('utf-8', errors='replace')
    arg_type = arg_node.type

    # String literals
    if arg_type == 'string_literal':
        return 'const char *'

    # Number literals
    if arg_type == 'number_literal':
        if '.' in arg_text or 'f' in arg_text.lower():
            return 'float'
        return 'int'

    # Cast expressions - extract the type
    if arg_type == 'cast_expression':
        for child in arg_node.children:
            if child.type == 'type_descriptor':
                return source[child.start_byte:child.end_byte].decode('utf-8', errors='replace')

    # Pointer expressions (address-of)
    if arg_type == 'pointer_expression':
        return 'void *'

    # Unary expressions (&var, *var)
    if arg_type == 'unary_expression':
        op = arg_node.children[0] if arg_node.children else None
        if op and source[op.start_byte:op.end_byte].decode() == '&':
            return 'void *'
        return 'int'

    # Binary expressions (arithmetic)
    if arg_type == 'binary_expression':
        return 'int'

    # Parenthesized expression - recurse
    if arg_type == 'parenthesized_expression':
        for child in arg_node.children:
            if child.type not in ('(', ')'):
                return infer_type_from_arg(source, child)

    # Call expression - assume returns int
    if arg_type == 'call_expression':
        return 'int'

    # Identifier - check for common patterns
    if arg_type == 'identifier':
        arg_lower = arg_text.lower()
        if 'widget' in arg_lower or arg_text.startswith('w_'):
            return 'Widget'
        if 'display' in arg_lower:
            return 'Display *'
        if 'window' in arg_lower:
            return 'Window'
        if 'str' in arg_lower or 'name' in arg_lower or 'path' in arg_lower:
            return 'const char *'
        if arg_text.startswith('DAT_'):
            return 'int'  # Ghidra data reference
        return 'int'  # Default for identifiers

    # Field expression (struct.field or struct->field)
    if arg_type in ('field_expression', 'subscript_expression'):
        return 'int'

    # Conditional expression (ternary)
    if arg_type == 'conditional_expression':
        return 'int'

    # Default
    return 'int'


def extract_call_info(source: bytes, call_node) -> Tuple[str, List[str]]:
    """Extract function name and argument types from a call expression."""
    func_name = None
    arg_types = []

    for child in call_node.children:
        if child.type == 'identifier':
            func_name = source[child.start_byte:child.end_byte].decode('utf-8')
        elif child.type == 'argument_list':
            for arg in child.children:
                if arg.type not in ('(', ')', ','):
                    arg_types.append(infer_type_from_arg(source, arg))

    return func_name, arg_types


def collect_call_signatures(filepath: str, target_funcs: Set[str]) -> Dict[str, List[List[str]]]:
    """Collect all call signatures for target functions in a file."""
    source, tree = parse_file(filepath)
    signatures = {}  # func_name -> list of arg_type_lists

    def walk(node):
        if node.type == 'call_expression':
            func_name, arg_types = extract_call_info(source, node)
            if func_name and func_name in target_funcs:
                if func_name not in signatures:
                    signatures[func_name] = []
                signatures[func_name].append(arg_types)

        for child in node.children:
            walk(child)

    walk(tree.root_node)
    return signatures


def merge_arg_types(type_lists: List[List[str]]) -> List[str]:
    """Merge multiple call signatures into a canonical type list."""
    if not type_lists:
        return []

    # Find max argument count
    max_args = max(len(tl) for tl in type_lists)

    result = []
    for i in range(max_args):
        types_at_pos = []
        for tl in type_lists:
            if i < len(tl):
                types_at_pos.append(tl[i])

        # Pick the most specific type
        if 'void *' in types_at_pos:
            result.append('void *')
        elif 'const char *' in types_at_pos:
            result.append('const char *')
        elif 'Widget' in types_at_pos:
            result.append('Widget')
        elif 'Display *' in types_at_pos:
            result.append('Display *')
        elif 'Window' in types_at_pos:
            result.append('Window')
        elif 'float' in types_at_pos:
            result.append('float')
        elif types_at_pos:
            result.append(types_at_pos[0])
        else:
            result.append('int')

    return result


def generate_stub(func_name: str, arg_types: List[str], return_type: str = 'void') -> str:
    """Generate a stub function declaration/definition."""
    if not arg_types:
        params = 'void'
        body_void = ''
    else:
        params_list = []
        body_void_parts = []
        for i, t in enumerate(arg_types):
            param_name = f'p{i}'
            params_list.append(f'{t} {param_name}')
            body_void_parts.append(f'(void){param_name};')
        params = ', '.join(params_list)
        body_void = ' '.join(body_void_parts)

    if return_type == 'void':
        return f'static inline void {func_name}({params}) {{ {body_void} /* TODO */ }}'
    else:
        return f'static inline {return_type} {func_name}({params}) {{ {body_void} return 0; /* TODO */ }}'


def main():
    # Get list of stub functions from fsn_stubs.h or command line
    if len(sys.argv) > 1:
        # Read function list from file
        with open(sys.argv[1], 'r') as f:
            target_funcs = set(line.strip() for line in f if line.strip())
    else:
        # Extract from compiler errors
        import re
        target_funcs = set()
        errors_file = '/tmp/fsn_errors5.txt'
        if os.path.exists(errors_file):
            with open(errors_file, 'r') as f:
                content = f.read()
                left_quote = chr(8216)
                right_quote = chr(8217)
                pattern = f"function {left_quote}([^{right_quote}]+){right_quote}"
                target_funcs = set(re.findall(pattern, content))

    if not target_funcs:
        print("No target functions found. Run build first or provide function list.")
        sys.exit(1)

    print(f"Analyzing calls for {len(target_funcs)} functions...")

    # Collect signatures from all source files
    src_dir = Path(__file__).parent.parent / 'src'
    all_signatures = {}  # func_name -> merged arg_types

    for c_file in sorted(src_dir.glob('*.c')):
        file_sigs = collect_call_signatures(str(c_file), target_funcs)
        for func_name, type_lists in file_sigs.items():
            if func_name not in all_signatures:
                all_signatures[func_name] = []
            all_signatures[func_name].extend(type_lists)

    # Merge and generate stubs
    print(f"\nGenerated stubs for {len(all_signatures)} functions:\n")

    stubs = []
    for func_name in sorted(all_signatures.keys()):
        merged = merge_arg_types(all_signatures[func_name])
        # Guess return type - functions starting with 'get_' or 'check_' likely return int
        if func_name.startswith(('get_', 'check_', 'create_', 'build_', 'init_', 'equal')):
            return_type = 'int'
        else:
            return_type = 'void'
        stub = generate_stub(func_name, merged, return_type)
        stubs.append(stub)
        print(stub)

    # Write to file
    output_file = Path(__file__).parent.parent / 'include' / 'fsn_stubs_generated.h'
    with open(output_file, 'w') as f:
        f.write("/**\n")
        f.write(" * fsn_stubs_generated.h - Auto-generated stub functions\n")
        f.write(" * Generated by extract_call_signatures.py using tree-sitter\n")
        f.write(" */\n\n")
        f.write("#ifndef FSN_STUBS_GENERATED_H\n")
        f.write("#define FSN_STUBS_GENERATED_H\n\n")
        f.write("#include <X11/Intrinsic.h>  /* Widget */\n\n")
        for stub in stubs:
            f.write(stub + '\n')
        f.write("\n#endif /* FSN_STUBS_GENERATED_H */\n")

    print(f"\nWritten to: {output_file}")


if __name__ == '__main__':
    main()
