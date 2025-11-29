#!/usr/bin/env python3
"""
Annotate an entire call tree starting from a root function.

Recursively disassembles and annotates all internal functions called,
building a complete picture of the call hierarchy.

Usage:
    python3 analysis/annotate_call_tree.py redraw_gl_scene
    python3 analysis/annotate_call_tree.py draw_scene --max-depth 3
    python3 analysis/annotate_call_tree.py FUN_0040cac4 --output call_tree_output
"""

import argparse
import json
import os
import re
import subprocess
import sys
from pathlib import Path
from typing import Dict, List, Set, Tuple

# Import from disassemble_function
sys.path.insert(0, str(Path(__file__).parent))
from disassemble_function import (
    find_function_address,
    load_dynamic_symbols,
    build_gp_mapping,
    extract_disassembly,
    find_function_end,
    annotate_assembly,
    format_analysis_summary,
    BINARY_PATH,
    GP,
    MAX_FUNCTION_SIZE,
)


def get_internal_calls(analysis: dict) -> List[str]:
    """Extract internal function calls (FUN_xxx) from analysis."""
    internal = []
    for addr, name in analysis.get('calls', []):
        if name.startswith('FUN_'):
            internal.append(name)
    return list(set(internal))  # Dedupe


def annotate_function(func_name: str, binary_path: str, symbols: dict,
                      gp_mapping: dict, output_dir: Path) -> Tuple[dict, int]:
    """
    Annotate a single function and return its analysis.

    Returns (analysis_dict, function_size) or (None, 0) on failure.
    """
    # Find function address
    addr = find_function_address(func_name, binary_path)
    if addr is None:
        print(f"  Warning: Could not find function '{func_name}'", file=sys.stderr)
        return None, 0

    # Extract disassembly with auto-detection
    asm = extract_disassembly(binary_path, addr, MAX_FUNCTION_SIZE)
    end_addr, detection = find_function_end(asm, addr)

    if end_addr > addr:
        size = end_addr - addr
        asm = extract_disassembly(binary_path, addr, size)
    else:
        size = MAX_FUNCTION_SIZE

    # Annotate
    annotated, analysis = annotate_assembly(asm, gp_mapping)

    # Determine canonical name
    if func_name.startswith('FUN_') or func_name.startswith('0x'):
        canonical_name = f"FUN_{addr:08x}"
    else:
        canonical_name = func_name

    # Write output file
    output_path = output_dir / f"{canonical_name}.annotated.asm"
    summary = format_analysis_summary(analysis, canonical_name)

    with open(output_path, 'w') as f:
        f.write(f"# Disassembly of {canonical_name}\n")
        f.write(f"# Address: 0x{addr:08x}\n")
        f.write(f"# End: 0x{end_addr:08x}\n")
        f.write(f"# Size: 0x{size:x} ({size} bytes)\n")
        f.write(f"# Detection: {detection}\n")
        f.write(f"# GP = 0x{GP:08x}\n")
        f.write("#\n")
        f.write("# Annotations: GP offsets, function calls, float constants\n")
        f.write("#\n\n")
        f.write(annotated)
        f.write("\n")
        f.write(summary)

    return analysis, size


def build_call_tree(root_func: str, binary_path: str, output_dir: Path,
                    max_depth: int = 10) -> dict:
    """
    Build complete call tree starting from root function.

    Returns dict with structure:
    {
        'root': 'redraw_gl_scene',
        'functions': {
            'func_name': {
                'address': 0x...,
                'size': N,
                'calls': ['func1', 'func2', ...],
                'igl_calls': [('addr', 'name'), ...],
            },
            ...
        },
        'tree': {
            'func_name': ['child1', 'child2', ...],
            ...
        }
    }
    """
    print(f"Building call tree from: {root_func}", file=sys.stderr)
    print(f"Output directory: {output_dir}", file=sys.stderr)
    print(f"Max depth: {max_depth}", file=sys.stderr)
    print("", file=sys.stderr)

    # Load symbols and GP mapping once
    print("Loading symbols...", file=sys.stderr)
    symbols = load_dynamic_symbols(binary_path)
    print(f"Found {len(symbols)} dynamic symbols", file=sys.stderr)

    print("Building GP offset mapping...", file=sys.stderr)
    gp_mapping = build_gp_mapping(binary_path, symbols)
    print(f"Mapped {len(gp_mapping)} GP offsets", file=sys.stderr)
    print("", file=sys.stderr)

    # Create output directory
    output_dir.mkdir(parents=True, exist_ok=True)

    # Track processed functions and results
    processed: Set[str] = set()
    functions: Dict[str, dict] = {}
    tree: Dict[str, List[str]] = {}
    queue: List[Tuple[str, int]] = [(root_func, 0)]  # (func_name, depth)

    while queue:
        func_name, depth = queue.pop(0)

        # Normalize name
        if func_name.startswith('0x'):
            addr = int(func_name, 16)
            func_name = f"FUN_{addr:08x}"

        # Skip if already processed or too deep
        if func_name in processed:
            continue
        if depth > max_depth:
            print(f"  Skipping {func_name} (max depth reached)", file=sys.stderr)
            continue

        processed.add(func_name)
        indent = "  " * depth
        print(f"{indent}[{depth}] Annotating: {func_name}", file=sys.stderr)

        # Annotate this function
        analysis, size = annotate_function(func_name, binary_path, symbols,
                                           gp_mapping, output_dir)

        if analysis is None:
            continue

        # Get function address
        addr = find_function_address(func_name, binary_path)

        # Store function info
        functions[func_name] = {
            'address': f"0x{addr:08x}" if addr else None,
            'size': size,
            'calls': [name for _, name in analysis.get('calls', [])],
            'igl_calls': [(f"0x{a:08x}", n) for a, n in analysis.get('igl_calls', [])],
            'gp_refs': list(analysis.get('gp_refs', set())),
        }

        # Get internal calls for tree
        internal_calls = get_internal_calls(analysis)
        tree[func_name] = internal_calls

        # Queue internal calls for processing
        for called_func in internal_calls:
            if called_func not in processed:
                queue.append((called_func, depth + 1))

    return {
        'root': root_func,
        'functions': functions,
        'tree': tree,
    }


def print_tree(tree_data: dict, indent: str = "", func: str = None,
               visited: Set[str] = None) -> List[str]:
    """Generate ASCII tree representation."""
    if visited is None:
        visited = set()
    if func is None:
        func = tree_data['root']

    lines = []

    # Avoid infinite recursion
    if func in visited:
        lines.append(f"{indent}└── {func} (recursive)")
        return lines
    visited.add(func)

    functions = tree_data['functions']
    tree = tree_data['tree']

    # Get function info
    info = functions.get(func, {})
    size = info.get('size', 0)
    igl_count = len(info.get('igl_calls', []))

    if igl_count > 0:
        lines.append(f"{indent}├── {func} ({size} bytes, {igl_count} IGL calls)")
    else:
        lines.append(f"{indent}├── {func} ({size} bytes)")

    # Process children
    children = tree.get(func, [])
    for i, child in enumerate(children):
        is_last = (i == len(children) - 1)
        child_indent = indent + ("    " if is_last else "│   ")
        lines.extend(print_tree(tree_data, child_indent, child, visited.copy()))

    return lines


def generate_summary(tree_data: dict) -> str:
    """Generate a summary of the call tree analysis."""
    lines = []
    lines.append("=" * 70)
    lines.append("CALL TREE ANALYSIS SUMMARY")
    lines.append("=" * 70)
    lines.append("")

    functions = tree_data['functions']

    # Stats
    lines.append(f"Root function: {tree_data['root']}")
    lines.append(f"Total functions analyzed: {len(functions)}")

    total_size = sum(f.get('size', 0) for f in functions.values())
    lines.append(f"Total code size: {total_size} bytes (0x{total_size:x})")
    lines.append("")

    # Functions with IrisGL calls
    lines.append("FUNCTIONS WITH IRISGL CALLS:")
    lines.append("-" * 40)
    for func_name, info in sorted(functions.items()):
        igl_calls = info.get('igl_calls', [])
        if igl_calls:
            lines.append(f"\n{func_name}:")
            for addr, name in igl_calls:
                lines.append(f"    {addr}: {name}")

    lines.append("")
    lines.append("=" * 70)
    lines.append("")

    # ASCII tree
    lines.append("CALL TREE:")
    lines.append("-" * 40)
    lines.append(tree_data['root'])
    tree_lines = print_tree(tree_data)
    lines.extend(tree_lines)

    lines.append("")
    lines.append("=" * 70)

    return "\n".join(lines)


def main():
    parser = argparse.ArgumentParser(
        description='Annotate entire call tree starting from a root function'
    )
    parser.add_argument('function', help='Root function name (e.g., redraw_gl_scene)')
    parser.add_argument('--output', '-o', default='call_tree_output',
                       help='Output directory (default: call_tree_output)')
    parser.add_argument('--max-depth', '-d', type=int, default=10,
                       help='Maximum call depth to follow (default: 10)')
    parser.add_argument('--binary', '-b', default=BINARY_PATH,
                       help=f'Binary path (default: {BINARY_PATH})')
    parser.add_argument('--json', action='store_true',
                       help='Also output JSON data')

    args = parser.parse_args()

    output_dir = Path(args.output)

    # Build the call tree
    tree_data = build_call_tree(args.function, args.binary, output_dir,
                                 args.max_depth)

    # Generate and save summary
    summary = generate_summary(tree_data)
    summary_path = output_dir / "CALL_TREE_SUMMARY.txt"
    with open(summary_path, 'w') as f:
        f.write(summary)

    print("", file=sys.stderr)
    print(f"Summary: {summary_path}", file=sys.stderr)

    # Optionally save JSON
    if args.json:
        json_path = output_dir / "call_tree.json"
        with open(json_path, 'w') as f:
            json.dump(tree_data, f, indent=2)
        print(f"JSON: {json_path}", file=sys.stderr)

    # Print summary to stdout
    print(summary)


if __name__ == '__main__':
    main()
