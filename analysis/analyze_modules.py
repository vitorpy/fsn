#!/usr/bin/env python3
"""
Analyze fsn.c to identify logical module boundaries for Phase 4 split.
"""

import re
import sys

def analyze_code_structure(filepath):
    """Analyze code and suggest module boundaries."""
    with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()

    modules = {
        'ui_motif': {
            'description': 'X11/Motif user interface components',
            'patterns': ['Xm', 'Xt', 'Widget', 'XtCreate', 'XmCreate', 'XtAdd', 'XtSet', 'Dialog', 'Menu', 'Button'],
            'functions': []
        },
        'graphics_gl': {
            'description': 'OpenGL rendering and 3D visualization',
            'patterns': ['bgnpolygon', 'endpolygon', 'v3f', 'v2f', 'pushmatrix', 'popmatrix', 'translate', 'rotate', 'scale', 'color', 'cpack', 'rect', 'circf'],
            'functions': []
        },
        'picking': {
            'description': 'Object selection and interaction',
            'patterns': ['pick', 'gselect', 'endpick', 'pushname', 'popname', 'loadname', 'initnames', 'endselect'],
            'functions': []
        },
        'filesystem': {
            'description': 'Directory scanning and file operations',
            'patterns': ['opendir', 'readdir', 'closedir', 'stat', 'lstat', 'DIR', 'dirent', 'statvfs', 'access', 'chmod', 'chdir'],
            'functions': []
        },
        'datastructures': {
            'description': 'Tree management and data structures',
            'patterns': ['malloc', 'calloc', 'free', 'realloc', 'qsort', 'tree', 'node', 'list'],
            'functions': []
        },
        'main': {
            'description': 'Initialization, event loop, command-line parsing',
            'patterns': ['main(', 'XtAppInitialize', 'XtAppMainLoop', 'argc', 'argv', 'getopt'],
            'functions': []
        }
    }

    # Find all function definitions
    func_pattern = r'((?:void|int|long|short|char|float|double|bool|undefined\d*|ulong|uint|ushort|uchar)\s+\*?)?((?:FUN_[0-9a-f]{8})|(?:[a-zA-Z_][a-zA-Z0-9_]*))\s*\([^)]*\)\s*\{'

    for match in re.finditer(func_pattern, content):
        return_type = match.group(1) if match.group(1) else 'void'
        func_name = match.group(2)
        start_pos = match.start()

        # Get function body (approximate - find matching brace)
        # Simple heuristic: take next 1000 chars
        body_end = min(len(content), start_pos + 1000)
        func_body = content[start_pos:body_end]

        # Classify function
        assigned = False
        for module_name, module_info in modules.items():
            if any(pattern in func_body for pattern in module_info['patterns']):
                module_info['functions'].append({
                    'name': func_name,
                    'return_type': return_type.strip()
                })
                assigned = True
                break

        # If not assigned, it might be utility or needs manual classification
        if not assigned and 'utility' not in modules:
            modules['utility'] = {
                'description': 'Utility functions and helpers',
                'patterns': [],
                'functions': []
            }
        if not assigned:
            modules['utility']['functions'].append({
                'name': func_name,
                'return_type': return_type.strip()
            })

    return modules

def main():
    if len(sys.argv) < 2:
        print("Usage: analyze_modules.py <fsn.c>")
        sys.exit(1)

    filepath = sys.argv[1]
    modules = analyze_code_structure(filepath)

    print("FSN Module Boundary Analysis")
    print("=" * 80)
    print()

    total_functions = sum(len(m['functions']) for m in modules.values())
    print(f"Total functions analyzed: {total_functions}")
    print()

    # Print summary
    print("Proposed Module Structure:")
    print("-" * 80)
    for module_name, module_info in sorted(modules.items()):
        func_count = len(module_info['functions'])
        print(f"\n{module_name}.c ({func_count} functions)")
        print(f"  {module_info['description']}")

    # Save detailed breakdown
    output_file = 'analysis/module_boundaries.md'
    with open(output_file, 'w') as f:
        f.write("# FSN Module Boundaries\n\n")
        f.write("## Overview\n\n")
        f.write("This document defines the module structure for Phase 4 (Modularization).\n")
        f.write("The 78K-line monolithic fsn.c will be split into these logical modules.\n\n")

        f.write("## Module Summary\n\n")
        f.write("| Module | Functions | Description |\n")
        f.write("|--------|-----------|-------------|\n")
        for module_name, module_info in sorted(modules.items()):
            func_count = len(module_info['functions'])
            f.write(f"| {module_name}.c | {func_count} | {module_info['description']} |\n")

        f.write(f"\n**Total functions**: {total_functions}\n\n")

        f.write("## Detailed Module Breakdown\n\n")

        for module_name, module_info in sorted(modules.items()):
            f.write(f"### {module_name}.c\n\n")
            f.write(f"**Purpose**: {module_info['description']}\n\n")
            f.write(f"**Functions** ({len(module_info['functions'])}):\n\n")

            if module_info['functions']:
                for func in module_info['functions'][:20]:  # Limit for readability
                    f.write(f"- `{func['return_type']} {func['name']}()`\n")
                if len(module_info['functions']) > 20:
                    f.write(f"- ... and {len(module_info['functions']) - 20} more\n")
            f.write("\n")

        f.write("## Module Dependencies\n\n")
        f.write("Preliminary dependency analysis:\n\n")
        f.write("```\n")
        f.write("main.c\n")
        f.write("  └─> ui_motif.c (creates UI)\n")
        f.write("  └─> graphics_gl.c (initializes GL)\n")
        f.write("  └─> filesystem.c (scans directories)\n")
        f.write("  └─> datastructures.c (manages tree)\n")
        f.write("\n")
        f.write("ui_motif.c\n")
        f.write("  └─> graphics_gl.c (OpenGL widget)\n")
        f.write("  └─> filesystem.c (file dialogs)\n")
        f.write("  └─> picking.c (mouse events)\n")
        f.write("\n")
        f.write("graphics_gl.c\n")
        f.write("  └─> picking.c (selection rendering)\n")
        f.write("  └─> datastructures.c (scene graph)\n")
        f.write("\n")
        f.write("picking.c\n")
        f.write("  └─> datastructures.c (object lookup)\n")
        f.write("  └─> graphics_gl.c (render state)\n")
        f.write("\n")
        f.write("filesystem.c\n")
        f.write("  └─> datastructures.c (populates tree)\n")
        f.write("```\n\n")

        f.write("## Header Files\n\n")
        f.write("Each module will have a corresponding header:\n\n")
        for module_name in sorted(modules.keys()):
            header_name = module_name + ".h"
            f.write(f"- `include/{header_name}` - Public API for {module_name}.c\n")
        f.write("\n")
        f.write("Common headers:\n")
        f.write("- `include/fsn_types.h` - Shared data structures\n")
        f.write("- `include/fsn_config.h` - Configuration constants\n")
        f.write("- `include/fsn_gl.h` - OpenGL/GLM includes and wrappers\n")
        f.write("- `include/fsn_motif.h` - X11/Motif includes and wrappers\n\n")

        f.write("## Next Steps (Phase 4)\n\n")
        f.write("1. Create header files with proper declarations\n")
        f.write("2. Extract functions from fsn.c to respective module files\n")
        f.write("3. Resolve inter-module dependencies\n")
        f.write("4. Update CMakeLists.txt with new source files\n")
        f.write("5. Verify compilation and linking\n")

    print(f"\nDetailed analysis saved to: {output_file}")

if __name__ == '__main__':
    main()
