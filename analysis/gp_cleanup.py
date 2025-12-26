#!/usr/bin/env python3
"""
gp_cleanup.py - Clean GP-related artifacts from decompiled code

Uses tree-sitter AST traversal to find GP access patterns and apply transformations:
1. Function calls via GP → Keep original + add comment with symbol
2. Data access via GP → Replace with named global variable
3. Unresolved GP offsets → Mark with TODO comment

Usage:
    python3 analysis/gp_cleanup.py <input.c> [--output <output.c>]
    python3 analysis/gp_cleanup.py --generate-header  # Generate gp_globals.h
    python3 analysis/gp_cleanup.py --dry-run <input.c>  # Preview changes

Requires GP_MAPPING.md in fsn_original.exploded.cleanup/
"""

import sys
import os
import re
import argparse
from pathlib import Path
from typing import Dict, List, Tuple, Optional, Set
import tree_sitter_c as tsc
from tree_sitter import Language, Parser, Node

# Initialize parser
C_LANGUAGE = Language(tsc.language())
parser = Parser(C_LANGUAGE)

# Default paths
GP_MAPPING_PATH = "fsn_original.exploded.cleanup/GP_MAPPING.md"
GP_GLOBALS_HEADER = "include/gp_globals.h"


def load_gp_mapping(mapping_path: str) -> Tuple[Dict[int, str], Dict[int, str]]:
    """
    Load GP_MAPPING.md into two lookup tables.

    Returns (functions, data) where each is {offset: symbol_name}
    """
    functions = {}
    data = {}

    if not os.path.exists(mapping_path):
        print(f"Warning: GP mapping not found: {mapping_path}", file=sys.stderr)
        return functions, data

    current_section = None

    with open(mapping_path, 'r') as f:
        for line in f:
            line = line.strip()

            # Detect section headers
            if line.startswith("## Functions"):
                current_section = "functions"
                continue
            elif line.startswith("## Data"):
                current_section = "data"
                continue
            elif line.startswith("##"):
                current_section = None
                continue

            # Parse table rows: | `-0x76ec` | `0x0043b79c` | `symbol` |
            if current_section and line.startswith("|") and "`-0x" in line:
                match = re.search(r'\|\s*`(-0x[0-9a-fA-F]+)`\s*\|\s*`0x[0-9a-fA-F]+`\s*\|\s*`([^`]+)`\s*\|', line)
                if match:
                    offset_str = match.group(1)
                    symbol = match.group(2)
                    try:
                        offset = int(offset_str, 16)  # Negative value
                        if current_section == "functions":
                            functions[offset] = symbol
                        else:
                            data[offset] = symbol
                    except ValueError:
                        continue

    return functions, data


def parse_file(filepath: str) -> Tuple[bytes, any]:
    """Parse a C file and return (source_bytes, tree)."""
    with open(filepath, 'rb') as f:
        source = f.read()
    tree = parser.parse(source)
    return source, tree


def get_node_text(source: bytes, node: Node) -> str:
    """Extract text from AST node."""
    return source[node.start_byte:node.end_byte].decode('utf-8')


def parse_gp_offset(source: bytes, node: Node) -> Optional[int]:
    """
    Check if node is a GP offset expression like (unaff_gp + -0x7a70)
    Returns the offset value if found, None otherwise.
    """
    if node.type != 'parenthesized_expression':
        return None

    text = get_node_text(source, node)

    # Look for pattern: (unaff_gp + -0xNNNN) or (unaff_gp + 0xNNNN)
    match = re.match(r'\(\s*unaff_gp\s*\+\s*(-?0x[0-9a-fA-F]+)\s*\)', text)
    if match:
        try:
            return int(match.group(1), 16)
        except ValueError:
            pass
    return None


def find_gp_call_expressions(tree, source: bytes) -> List[Tuple[int, int, int, str]]:
    """
    Find function calls via GP using tree-sitter AST.

    Pattern: (**(code **)(unaff_gp + OFFSET))(args)

    AST structure:
      call_expression
        parenthesized_expression      <- function wrapped in parens
          pointer_expression          <- first *
            pointer_expression        <- second *
              cast_expression         <- (code **)
                parenthesized_expression  <- (unaff_gp + offset)

    Returns list of (start_byte, end_byte, offset, original_text)
    We return the CALL expression bounds so we can add comment after.
    """
    results = []

    def find_gp_offset_in_subtree(node: Node) -> Optional[int]:
        """Recursively search for a GP offset parenthesized_expression."""
        if node.type == 'parenthesized_expression':
            offset = parse_gp_offset(source, node)
            if offset is not None:
                return offset
        for child in node.children:
            result = find_gp_offset_in_subtree(child)
            if result is not None:
                return result
        return None

    def has_code_cast(node: Node) -> bool:
        """Check if subtree contains a cast to (code **)."""
        if node.type == 'cast_expression':
            cast_text = get_node_text(source, node)
            if 'code' in cast_text and '**' in cast_text:
                return True
        for child in node.children:
            if has_code_cast(child):
                return True
        return False

    def walk(node: Node):
        if node.type == 'call_expression' and node.child_count >= 2:
            func_node = node.children[0]

            # The function part might be wrapped in parentheses
            # Pattern: (expr)(args) where expr is **cast(gp+offset)
            if func_node.type == 'parenthesized_expression':
                # Check if this contains the GP call pattern
                if has_code_cast(func_node):
                    offset = find_gp_offset_in_subtree(func_node)
                    if offset is not None:
                        results.append((
                            node.start_byte,
                            node.end_byte,
                            offset,
                            get_node_text(source, node)
                        ))

            # Also check direct pointer_expression (without outer parens)
            elif func_node.type == 'pointer_expression':
                if has_code_cast(func_node):
                    offset = find_gp_offset_in_subtree(func_node)
                    if offset is not None:
                        results.append((
                            node.start_byte,
                            node.end_byte,
                            offset,
                            get_node_text(source, node)
                        ))

        for child in node.children:
            walk(child)

    walk(tree.root_node)
    return results


def find_gp_data_expressions(tree, source: bytes) -> List[Tuple[int, int, int, str, bool]]:
    """
    Find data access via GP using tree-sitter AST.

    Pattern: *(type *)(unaff_gp + OFFSET) or *(type **)(unaff_gp + OFFSET)

    This is a pointer_expression (dereference) containing:
    - cast_expression to (type *) or (type **)
    - parenthesized_expression with unaff_gp + offset

    Returns list of (start_byte, end_byte, offset, original_text, is_double_ptr)
    """
    results = []
    # Track which byte ranges are part of call expressions (to exclude)
    call_ranges: Set[Tuple[int, int]] = set()

    def mark_call_ranges(node: Node):
        """First pass: mark all call expression ranges."""
        if node.type == 'call_expression':
            call_ranges.add((node.start_byte, node.end_byte))
        for child in node.children:
            mark_call_ranges(child)

    def is_inside_call(start: int, end: int) -> bool:
        """Check if a range is inside any call expression."""
        for cstart, cend in call_ranges:
            if start >= cstart and end <= cend:
                return True
        return False

    def walk(node: Node):
        if node.type == 'pointer_expression':
            # Check if this is a dereference (starts with *)
            text = get_node_text(source, node)
            if not text.startswith('*'):
                for child in node.children:
                    walk(child)
                return

            # Skip if inside a call expression (those are handled separately)
            if is_inside_call(node.start_byte, node.end_byte):
                for child in node.children:
                    walk(child)
                return

            # Look for cast_expression child
            for child in node.children:
                if child.type == 'cast_expression':
                    cast_text = get_node_text(source, child)
                    is_double_ptr = '**' in cast_text.split('(')[1] if '(' in cast_text else False

                    # Look for GP offset in cast
                    for cast_child in child.children:
                        offset = parse_gp_offset(source, cast_child)
                        if offset is not None:
                            results.append((
                                node.start_byte,
                                node.end_byte,
                                offset,
                                text,
                                is_double_ptr
                            ))
                            return  # Don't recurse further into this node

        for child in node.children:
            walk(child)

    # First pass: mark call ranges
    mark_call_ranges(tree.root_node)
    # Second pass: find data expressions
    walk(tree.root_node)

    return results


def transform_source(source: bytes,
                     call_exprs: List[Tuple[int, int, int, str]],
                     data_exprs: List[Tuple[int, int, int, str, bool]],
                     functions: Dict[int, str],
                     data: Dict[int, str]) -> Tuple[str, dict]:
    """
    Transform source by applying GP cleanup rules.

    Rules:
    1. Function calls via GP → Add comment with symbol name after the call
    2. Data access via GP → Replace with global variable name

    Returns (transformed_source, stats)
    """
    stats = {
        'calls_annotated': 0,
        'data_replaced': 0,
        'unresolved': 0
    }

    # Collect all replacements: (start, end, replacement_text)
    replacements = []

    # Process call expressions - add comment annotation
    for start, end, offset, original in call_exprs:
        if offset in functions:
            symbol = functions[offset]
            # Add comment after the call (don't modify the call itself)
            replacement = f"{original} /* ={symbol} */"
            replacements.append((start, end, replacement))
            stats['calls_annotated'] += 1
        else:
            # Unresolved - add TODO
            replacement = f"/* TODO: GP:{offset:+#x} */ {original}"
            replacements.append((start, end, replacement))
            stats['unresolved'] += 1

    # Process data expressions - replace with global name
    for start, end, offset, original, is_double_ptr in data_exprs:
        symbol = None
        if offset in data:
            symbol = data[offset]
        elif offset in functions:
            # Function pointer stored as data
            symbol = functions[offset]

        if symbol:
            replacement = f"{symbol} /* was: {original} */"
            replacements.append((start, end, replacement))
            stats['data_replaced'] += 1
        else:
            replacement = f"/* TODO: GP:{offset:+#x} */ {original}"
            replacements.append((start, end, replacement))
            stats['unresolved'] += 1

    # Sort replacements by position (reverse order for safe replacement)
    replacements.sort(key=lambda x: x[0], reverse=True)

    # Remove overlapping replacements (keep the first/longest one)
    filtered = []
    covered_end = float('inf')
    for start, end, repl in replacements:
        if end <= covered_end:
            filtered.append((start, end, repl))
            covered_end = start

    # Apply replacements
    result = source.decode('utf-8')
    for start, end, repl in filtered:
        result = result[:start] + repl + result[end:]

    return result, stats


def generate_header(data: Dict[int, str], output_path: str) -> None:
    """Generate gp_globals.h with extern declarations."""

    # Group by apparent type based on naming conventions
    pointers = []
    integers = []
    floats = []
    others = []

    for offset, name in sorted(data.items(), key=lambda x: x[1]):
        # Heuristic type classification based on name
        if name.endswith('Widget') or name.endswith('Label') or 'context' in name.lower():
            pointers.append((name, 'void *'))
        elif name.endswith('Color') or 'color' in name.lower():
            pointers.append((name, 'unsigned long'))  # X11 Pixel type
        elif name.endswith('String') or 'string' in name.lower():
            pointers.append((name, 'void *'))  # XmString
        elif name.startswith('__'):
            others.append((name, 'void *'))  # Internal symbols
        elif 'Help' in name:
            pointers.append((name, 'char *'))
        elif any(x in name.lower() for x in ['flag', 'showing', 'count', 'index', 'size', 'argc']):
            integers.append((name, 'int'))
        elif any(x in name.lower() for x in ['max', 'min', 'x', 'y']):
            floats.append((name, 'float'))
        else:
            others.append((name, 'void *'))

    os.makedirs(os.path.dirname(output_path), exist_ok=True)

    with open(output_path, 'w') as f:
        f.write("""/**
 * gp_globals.h - Extern declarations for GP-accessed global variables
 *
 * AUTO-GENERATED from GP_MAPPING.md by gp_cleanup.py
 * These are the global variables accessed via the MIPS global pointer (GP).
 */

#ifndef GP_GLOBALS_H
#define GP_GLOBALS_H

#include <X11/Intrinsic.h>

/* === Pointer Types (Widgets, Contexts, Strings) === */

""")
        for name, typ in sorted(pointers):
            f.write(f"extern {typ} {name};\n")

        f.write("""
/* === Integer Types (Flags, Counts, Indices) === */

""")
        for name, typ in sorted(integers):
            f.write(f"extern {typ} {name};\n")

        f.write("""
/* === Float Types (Coordinates, Scales) === */

""")
        for name, typ in sorted(floats):
            f.write(f"extern {typ} {name};\n")

        f.write("""
/* === Other Types (Unknown/Internal) === */

""")
        for name, typ in sorted(others):
            f.write(f"extern {typ} {name};  /* GP data */\n")

        f.write("""
#endif /* GP_GLOBALS_H */
""")

    print(f"Generated {output_path} with {len(data)} declarations", file=sys.stderr)


def main():
    argp = argparse.ArgumentParser(
        description='Clean GP-related artifacts from decompiled code'
    )
    argp.add_argument('input', nargs='?', help='Input C file')
    argp.add_argument('--output', '-o', help='Output file (default: stdout)')
    argp.add_argument('--mapping', '-m', default=GP_MAPPING_PATH,
                      help=f'GP mapping file (default: {GP_MAPPING_PATH})')
    argp.add_argument('--generate-header', action='store_true',
                      help='Generate gp_globals.h from mapping')
    argp.add_argument('--header-output', default=GP_GLOBALS_HEADER,
                      help=f'Header output path (default: {GP_GLOBALS_HEADER})')
    argp.add_argument('--dry-run', action='store_true',
                      help='Show what would be changed without modifying')

    args = argp.parse_args()

    # Load GP mapping
    functions, data = load_gp_mapping(args.mapping)
    print(f"Loaded GP mapping: {len(functions)} functions, {len(data)} data symbols",
          file=sys.stderr)

    if args.generate_header:
        generate_header(data, args.header_output)
        return 0

    if not args.input:
        argp.print_help()
        return 1

    if not os.path.exists(args.input):
        print(f"Error: File not found: {args.input}", file=sys.stderr)
        return 1

    # Parse input
    source, tree = parse_file(args.input)

    # Find GP expressions using tree-sitter
    call_exprs = find_gp_call_expressions(tree, source)
    data_exprs = find_gp_data_expressions(tree, source)

    if args.dry_run:
        print(f"Found {len(call_exprs)} GP call expressions:")
        for start, end, offset, original in sorted(call_exprs, key=lambda x: x[0]):
            line_num = source[:start].count(b'\n') + 1
            symbol = functions.get(offset, "UNRESOLVED")
            print(f"  Line {line_num}: [call] GP{offset:+#x} → {symbol}")

        print(f"\nFound {len(data_exprs)} GP data expressions:")
        for start, end, offset, original, is_ptr in sorted(data_exprs, key=lambda x: x[0]):
            line_num = source[:start].count(b'\n') + 1
            symbol = data.get(offset) or functions.get(offset, "UNRESOLVED")
            ptr_type = "ptr" if is_ptr else "val"
            print(f"  Line {line_num}: [data:{ptr_type}] GP{offset:+#x} → {symbol}")
        return 0

    # Transform
    result, stats = transform_source(source, call_exprs, data_exprs, functions, data)

    print(f"Transformed: {stats['calls_annotated']} calls annotated, "
          f"{stats['data_replaced']} data replaced, "
          f"{stats['unresolved']} unresolved", file=sys.stderr)

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
