#!/usr/bin/env python3
"""
Extract and analyze DAT_ globals from Ghidra decompiled code.
Creates a catalog with usage patterns for renaming.
"""

import re
import sys

def extract_global_info(filepath):
    """Extract DAT_ global variable definitions and usages."""
    with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()

    # Pattern for global definitions
    global_pattern = r'((?:undefined|int|long|short|char|float|double|void|ulong|uint|ushort|uchar)\d*\s+\*?)(DAT_[0-9a-f]{8})'

    # Find all globals
    globals_dict = {}
    for match in re.finditer(global_pattern, content):
        var_type = match.group(1).strip()
        var_name = match.group(2)

        if var_name not in globals_dict:
            globals_dict[var_name] = {
                'name': var_name,
                'type': var_type,
                'usages': [],
                'clues': set()
            }

    # Find usage contexts for each global
    for var_name in globals_dict.keys():
        # Find all references
        usage_pattern = re.escape(var_name)
        for match in re.finditer(usage_pattern, content):
            start_pos = match.start()
            context_start = max(0, start_pos - 150)
            context_end = min(len(content), start_pos + 150)
            context = content[context_start:context_end]

            # Analyze this usage
            clues = analyze_global_context(context, var_name)
            globals_dict[var_name]['clues'].update(clues)
            globals_dict[var_name]['usages'].append(context[:200])

    return list(globals_dict.values())

def analyze_global_context(context, var_name):
    """Analyze context to guess global variable purpose."""
    clues = []

    # X11/Motif indicators
    if any(x in context for x in ['Widget', 'Display', 'XtApp', 'Pixel', 'Colormap', 'GC', 'Window']):
        clues.append('X11/Motif')

    # Graphics state
    if any(x in context for x in ['matrix', 'viewport', 'projection', 'modelview', 'gl']):
        clues.append('Graphics State')

    # Configuration/settings
    if any(x in context for x in ['config', 'option', 'setting', 'flag', 'mode']):
        clues.append('Configuration')

    # File/path related
    if any(x in context for x in ['path', 'dir', 'file', 'directory', 'name']):
        clues.append('Filesystem')

    # Tree/data structure
    if any(x in context for x in ['tree', 'node', 'root', 'parent', 'child', 'list']):
        clues.append('Data Structure')

    # String/text
    if any(x in context for x in ['str', 'text', 'label', 'message']):
        clues.append('String/Text')

    # Counter/index
    if any(x in context for x in ['count', 'index', 'num', 'total', 'size']):
        clues.append('Counter/Index')

    # Pointer checks
    if '== NULL' in context or '!= NULL' in context:
        clues.append('Pointer')

    return clues if clues else ['Unknown']

def main():
    if len(sys.argv) < 2:
        print("Usage: extract_globals.py <fsn.c>")
        sys.exit(1)

    filepath = sys.argv[1]
    globals_list = extract_global_info(filepath)

    print(f"Found {len(globals_list)} DAT_ globals\n")
    print("=" * 80)

    # Group by category
    categories = {}
    for glob in globals_list:
        clue_list = list(glob['clues']) if glob['clues'] else ['Unknown']
        cat = clue_list[0]
        if cat not in categories:
            categories[cat] = []
        categories[cat].append(glob)

    # Print summary
    print("\nGlobal Variable Distribution by Category:")
    print("-" * 40)
    for cat, globs in sorted(categories.items()):
        print(f"{cat:20s}: {len(globs):3d} globals")

    # Save detailed catalog
    output_file = 'analysis/global_catalog.txt'
    with open(output_file, 'w') as f:
        f.write("FSN Global Variables Catalog\n")
        f.write("=" * 80 + "\n\n")

        for cat in sorted(categories.keys()):
            f.write(f"\n{'=' * 80}\n")
            f.write(f"Category: {cat} ({len(categories[cat])} globals)\n")
            f.write(f"{'=' * 80}\n\n")

            for glob in categories[cat]:
                f.write(f"Global: {glob['name']}\n")
                f.write(f"Type: {glob['type']}\n")
                f.write(f"Categories: {', '.join(sorted(glob['clues']))}\n")
                f.write(f"Usage count: {len(glob['usages'])}\n")
                if glob['usages']:
                    f.write(f"Sample usage:\n{glob['usages'][0][:250]}\n")
                f.write("-" * 80 + "\n\n")

    print(f"\nDetailed catalog saved to: {output_file}")

if __name__ == '__main__':
    main()
