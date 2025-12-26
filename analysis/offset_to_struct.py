#!/usr/bin/env python3
"""
offset_to_struct.py - Replace raw byte offsets with struct member access

Uses tree-sitter to find patterns like:
    *(int*)(param_1 + 0x3c)
And replaces them with:
    param_1->height

Usage:
    python3 analysis/offset_to_struct.py <input.c> [--output <output.c>]
    python3 analysis/offset_to_struct.py --list-mappings
"""

import sys
import os
import re
import argparse
from typing import Dict, List, Tuple, Optional
import tree_sitter_c as tsc
from tree_sitter import Language, Parser

# Initialize parser
C_LANGUAGE = Language(tsc.language())
parser = Parser(C_LANGUAGE)

# =============================================================================
# Offset Mappings - Extracted from include/fsn_dir.h and include/fsn_context.h
# =============================================================================

# DirectoryNode offsets (32-bit MIPS layout)
# These are the ORIGINAL offsets from the decompile, not 64-bit offsets
DIRECTORY_NODE_OFFSETS = {
    0x00: ("name", "char*"),
    0x04: ("name_len", "int"),
    0x08: ("parent", "DirectoryNode*"),
    0x0c: ("file_count", "int"),
    0x10: ("file_array", "void**"),
    0x14: ("child_count", "int"),
    0x18: ("child_array", "void**"),
    0x1c: ("_field_1c", "int"),           # Unknown
    0x20: ("_field_20", "int"),           # Unknown
    0x24: ("_field_24", "int"),           # Unknown
    0x28: ("child_center", "DirectoryNode*"),
    0x2c: ("child_left", "DirectoryNode*"),
    0x30: ("child_right", "DirectoryNode*"),
    0x34: ("pos_x", "float"),
    0x38: ("pos_y", "float"),
    0x3c: ("height", "float"),
    0x40: ("_field_40", "int"),           # Unknown
    0x44: ("flags", "uint"),
    0x48: ("bound_min_x", "float"),
    0x4c: ("offset_x", "float"),
    0x50: ("offset_y", "float"),
    0x54: ("_field_54", "int"),           # Unknown
    0x58: ("scale", "float"),
    0x5c: ("_field_5c", "int"),           # Unknown
    0x5e: ("name_index", "short"),
    0x60: ("_field_60", "int"),           # Unknown
    0x64: ("_field_64", "int"),           # Unknown
    0x68: ("display_mode", "int"),
    0x6c: ("_field_6c", "int"),           # Unknown
    0x70: ("initial_val", "int"),
    0x74: ("render_flags", "uint"),
    0x76: ("depth_indicator", "short"),
}

# FsnContext offsets
FSN_CONTEXT_OFFSETS = {
    0x00: ("camera_x", "float"),
    0x04: ("camera_y", "float"),
    0x08: ("camera_z", "float"),
    0x0c: ("rotation_z", "short"),
    0x0e: ("rotation_x", "short"),
    0x10: ("fov", "short"),
    0x14: ("sin_z", "float"),
    0x18: ("cos_z", "float"),
    0x1c: ("tan_z", "float"),
    0x20: ("sin_x", "float"),
    0x24: ("cos_x", "float"),
    0x28: ("tan_x", "float"),
    0x34: ("scale_factor", "float"),
    0x3c: ("zoom_mode", "int"),
    0x40: ("_field_40", "int"),
    0x44: ("current_dir", "DirectoryNode*"),
    0x48: ("current_file", "void*"),
    0xc4c: ("render_time_usec", "int"),
    0xc53: ("special_mode_flag", "char"),
}

# Variable name patterns that map to struct types
VARIABLE_PATTERNS = {
    # DirectoryNode patterns
    r'^param_\d+$': DIRECTORY_NODE_OFFSETS,       # param_1, param_2, etc. (common for dir functions)
    r'^node$': DIRECTORY_NODE_OFFSETS,
    r'^dir$': DIRECTORY_NODE_OFFSETS,
    r'^entry$': DIRECTORY_NODE_OFFSETS,
    r'^child$': DIRECTORY_NODE_OFFSETS,
    r'^parent$': DIRECTORY_NODE_OFFSETS,
    r'^iVar\d+$': DIRECTORY_NODE_OFFSETS,         # Often used for dir pointers

    # FsnContext patterns
    r'^curcontext$': FSN_CONTEXT_OFFSETS,
    r'^ctx$': FSN_CONTEXT_OFFSETS,
    r'^context$': FSN_CONTEXT_OFFSETS,
}

def get_offset_mapping(var_name: str) -> Optional[Dict]:
    """Get the offset mapping for a variable name."""
    for pattern, mapping in VARIABLE_PATTERNS.items():
        if re.match(pattern, var_name):
            return mapping
    return None


def parse_file(filepath: str) -> Tuple[bytes, any]:
    """Parse a C file and return (source_bytes, tree)."""
    with open(filepath, 'rb') as f:
        source = f.read()
    tree = parser.parse(source)
    return source, tree


def find_offset_expressions(tree, source: bytes) -> List[Tuple[int, int, str, str, int]]:
    """
    Find all expressions matching patterns like:
        *(type*)(var + 0xNN)
        *(type*)(var + -0xNN)

    Returns list of (start_byte, end_byte, var_name, cast_type, offset)
    """
    results = []

    def extract_text(node) -> str:
        return source[node.start_byte:node.end_byte].decode('utf-8')

    def walk(node):
        # Look for pointer_expression (dereference)
        if node.type == 'pointer_expression':
            # Check if it's a dereference (has *)
            text = extract_text(node)
            if text.startswith('*'):
                # Look for cast_expression child
                for child in node.children:
                    if child.type == 'cast_expression':
                        # Get the cast type
                        cast_type = None
                        inner_expr = None
                        for cast_child in child.children:
                            if cast_child.type == 'type_descriptor':
                                cast_type = extract_text(cast_child)
                            elif cast_child.type == 'parenthesized_expression':
                                inner_expr = cast_child

                        if cast_type and inner_expr:
                            # Parse the parenthesized expression for (var + offset)
                            inner_text = extract_text(inner_expr)
                            # Match patterns like (var + 0x3c) or (var + -0x3c)
                            match = re.match(r'\((\w+)\s*\+\s*(-?0x[0-9a-fA-F]+)\)', inner_text)
                            if match:
                                var_name = match.group(1)
                                offset_str = match.group(2)
                                try:
                                    offset = int(offset_str, 16)
                                    results.append((
                                        node.start_byte,
                                        node.end_byte,
                                        var_name,
                                        cast_type,
                                        offset
                                    ))
                                except ValueError:
                                    pass

        for child in node.children:
            walk(child)

    walk(tree.root_node)
    return results


def transform_source(source: bytes, expressions: List[Tuple[int, int, str, str, int]]) -> str:
    """
    Transform source by replacing offset expressions with struct access.
    """
    # Sort by position (reverse order so we can replace from end to start)
    sorted_exprs = sorted(expressions, key=lambda x: x[0], reverse=True)

    result = source.decode('utf-8')
    replacements = []

    for start, end, var_name, cast_type, offset in sorted_exprs:
        mapping = get_offset_mapping(var_name)
        if mapping and offset in mapping:
            member_name, member_type = mapping[offset]

            # Create replacement
            # For now, simple replacement: var->member
            # TODO: Handle type casting if needed
            old_text = result[start:end]
            new_text = f"{var_name}->{member_name}"

            # Add comment with original for reference
            replacement = f"{new_text} /* was: {old_text} */"

            replacements.append((start, end, old_text, replacement))

    # Apply replacements (already sorted reverse)
    for start, end, old, new in replacements:
        result = result[:start] + new + result[end:]

    return result


def list_mappings():
    """Print all known offset mappings."""
    print("=== DirectoryNode Offsets ===")
    print(f"{'Offset':<10} {'Member':<20} {'Type':<20}")
    print("-" * 50)
    for offset in sorted(DIRECTORY_NODE_OFFSETS.keys()):
        name, typ = DIRECTORY_NODE_OFFSETS[offset]
        print(f"0x{offset:02x}      {name:<20} {typ:<20}")

    print("\n=== FsnContext Offsets ===")
    print(f"{'Offset':<10} {'Member':<20} {'Type':<20}")
    print("-" * 50)
    for offset in sorted(FSN_CONTEXT_OFFSETS.keys()):
        name, typ = FSN_CONTEXT_OFFSETS[offset]
        print(f"0x{offset:02x}      {name:<20} {typ:<20}")


def main():
    argp = argparse.ArgumentParser(description='Replace raw offsets with struct member access')
    argp.add_argument('input', nargs='?', help='Input C file')
    argp.add_argument('--output', '-o', help='Output file (default: stdout)')
    argp.add_argument('--list-mappings', action='store_true', help='List all known offset mappings')
    argp.add_argument('--dry-run', action='store_true', help='Show what would be replaced without changing')

    args = argp.parse_args()

    if args.list_mappings:
        list_mappings()
        return 0

    if not args.input:
        argp.print_help()
        return 1

    if not os.path.exists(args.input):
        print(f"Error: File not found: {args.input}", file=sys.stderr)
        return 1

    # Parse input
    source, tree = parse_file(args.input)

    # Find offset expressions
    expressions = find_offset_expressions(tree, source)

    if args.dry_run:
        print(f"Found {len(expressions)} offset expressions:")
        for start, end, var, cast, offset in expressions:
            mapping = get_offset_mapping(var)
            if mapping and offset in mapping:
                member, typ = mapping[offset]
                print(f"  Line {source[:start].count(b'\\n')+1}: "
                      f"*({cast})({var} + 0x{offset:x}) -> {var}->{member}")
            else:
                print(f"  Line {source[:start].count(b'\\n')+1}: "
                      f"*({cast})({var} + 0x{offset:x}) [NO MAPPING]")
        return 0

    # Transform
    result = transform_source(source, expressions)

    # Output
    if args.output:
        with open(args.output, 'w') as f:
            f.write(result)
        print(f"Wrote {args.output}", file=sys.stderr)
    else:
        print(result)

    return 0


if __name__ == '__main__':
    sys.exit(main())
