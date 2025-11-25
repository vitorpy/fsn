#!/usr/bin/env python3
"""
Extract and analyze FUN_ functions from Ghidra decompiled code.
Creates a catalog with context for renaming.
"""

import re
import sys

def extract_function_info(filepath):
    """Extract FUN_ function definitions with context."""
    with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()

    # Pattern for function definitions
    func_pattern = r'((?:void|int|long|short|char|float|double|bool|undefined\d*|ulong|uint|ushort|uchar)\s+\*?)?(FUN_[0-9a-f]{8})\s*\([^)]*\)'

    functions = []
    for match in re.finditer(func_pattern, content):
        func_name = match.group(2)
        return_type = match.group(1) if match.group(1) else 'void'
        start_pos = match.start()

        # Get context (100 chars before, 500 chars after)
        context_start = max(0, start_pos - 100)
        context_end = min(len(content), start_pos + 500)
        context = content[context_start:context_end]

        # Analyze context for clues about function purpose
        clues = analyze_context(context, func_name)

        functions.append({
            'name': func_name,
            'return_type': return_type.strip(),
            'context': context[:200],  # Truncate for display
            'clues': clues
        })

    return functions

def analyze_context(context, func_name):
    """Analyze context to guess function purpose."""
    clues = []

    # X11/Motif indicators
    if any(x in context for x in ['Xm', 'Xt', 'XCreate', 'Widget', 'XtAdd', 'XtSet']):
        clues.append('UI/Motif')

    # Graphics indicators
    if any(x in context for x in ['rect', 'circf', 'bgnpolygon', 'endpolygon', 'pushmatrix', 'draw', 'render']):
        clues.append('Graphics/GL')

    # Filesystem indicators
    if any(x in context for x in ['opendir', 'readdir', 'stat', 'lstat', 'DIR', 'dirent', 'file', 'path']):
        clues.append('Filesystem')

    # Picking indicators
    if any(x in context for x in ['pick', 'gselect', 'pushname', 'popname', 'loadname', 'select']):
        clues.append('Picking/Selection')

    # Data structure indicators
    if any(x in context for x in ['malloc', 'calloc', 'free', 'tree', 'node', 'list', 'insert', 'delete']):
        clues.append('DataStructure')

    # String/text indicators
    if any(x in context for x in ['strcmp', 'strcpy', 'strcat', 'sprintf', 'strlen']):
        clues.append('String/Text')

    # Math indicators
    if any(x in context for x in ['sqrt', 'sin', 'cos', 'atan', 'float', 'double']):
        clues.append('Math')

    return clues if clues else ['Unknown']

def main():
    if len(sys.argv) < 2:
        print("Usage: extract_functions.py <fsn.c>")
        sys.exit(1)

    filepath = sys.argv[1]
    functions = extract_function_info(filepath)

    print(f"Found {len(functions)} FUN_ functions\n")
    print("=" * 80)

    # Group by category
    categories = {}
    for func in functions:
        cat = func['clues'][0] if func['clues'] else 'Unknown'
        if cat not in categories:
            categories[cat] = []
        categories[cat].append(func)

    # Print summary
    print("\nFunction Distribution by Category:")
    print("-" * 40)
    for cat, funcs in sorted(categories.items()):
        print(f"{cat:20s}: {len(funcs):3d} functions")

    # Save detailed catalog
    output_file = 'analysis/function_catalog.txt'
    with open(output_file, 'w') as f:
        f.write("FSN Function Catalog\n")
        f.write("=" * 80 + "\n\n")

        for cat in sorted(categories.keys()):
            f.write(f"\n{'=' * 80}\n")
            f.write(f"Category: {cat} ({len(categories[cat])} functions)\n")
            f.write(f"{'=' * 80}\n\n")

            for func in categories[cat]:
                f.write(f"Function: {func['name']}\n")
                f.write(f"Return Type: {func['return_type']}\n")
                f.write(f"Categories: {', '.join(func['clues'])}\n")
                f.write(f"Context Preview:\n{func['context'][:300]}\n")
                f.write("-" * 80 + "\n\n")

    print(f"\nDetailed catalog saved to: {output_file}")

if __name__ == '__main__':
    main()
