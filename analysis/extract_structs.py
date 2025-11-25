#!/usr/bin/env python3
"""
Extract struct definitions from Ghidra decompiled code.
"""

import re
import sys

def extract_structs(filepath):
    """Extract all struct definitions."""
    with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()

    # Pattern for struct definitions
    # Matches: struct name { ... };
    struct_pattern = r'struct\s+([a-zA-Z_][a-zA-Z0-9_]*)\s*\{([^}]+)\};'

    structs = []
    for match in re.finditer(struct_pattern, content, re.MULTILINE | re.DOTALL):
        struct_name = match.group(1)
        struct_body = match.group(2)

        structs.append({
            'name': struct_name,
            'body': struct_body.strip(),
            'full_definition': match.group(0)
        })

    # Also look for typedef struct patterns
    typedef_pattern = r'typedef\s+struct\s+([a-zA-Z_][a-zA-Z0-9_]*\s*)?\{([^}]+)\}\s*([a-zA-Z_][a-zA-Z0-9_]*)\s*;'

    for match in re.finditer(typedef_pattern, content, re.MULTILINE | re.DOTALL):
        struct_name = match.group(1).strip() if match.group(1) else None
        typedef_name = match.group(3)
        struct_body = match.group(2)

        structs.append({
            'name': typedef_name,
            'struct_name': struct_name,
            'body': struct_body.strip(),
            'full_definition': match.group(0),
            'is_typedef': True
        })

    return structs

def main():
    if len(sys.argv) < 2:
        print("Usage: extract_structs.py <fsn.c>")
        sys.exit(1)

    filepath = sys.argv[1]
    structs = extract_structs(filepath)

    print(f"Found {len(structs)} struct definitions")
    print("=" * 80)

    # Save structs
    output_file = 'analysis/struct_definitions.txt'
    with open(output_file, 'w') as f:
        f.write("FSN Struct Definitions\n")
        f.write("=" * 80 + "\n\n")

        for i, struct in enumerate(structs, 1):
            f.write(f"\n{'=' * 80}\n")
            f.write(f"Struct #{i}: {struct['name']}\n")
            f.write(f"{'=' * 80}\n\n")
            f.write(struct['full_definition'])
            f.write("\n\n")

    print(f"Struct definitions saved to: {output_file}")

    # Print summary
    print("\nStruct names found:")
    print("-" * 40)
    for struct in structs[:20]:
        typedef_marker = " (typedef)" if struct.get('is_typedef') else ""
        print(f"  {struct['name']}{typedef_marker}")
    if len(structs) > 20:
        print(f"  ... and {len(structs) - 20} more")

if __name__ == '__main__':
    main()
