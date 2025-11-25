#!/usr/bin/env python3
"""
Extract a module from fsn.c based on function patterns or explicit function list.
Creates both .c and .h files.
"""

import re
import sys
import os
from typing import List, Set, Tuple

def extract_function_definition(content: str, func_name: str) -> Tuple[str, int, int]:
    """
    Extract a complete function definition including body.
    Returns: (function_text, start_line, end_line)
    """
    # Find function definition (return_type function_name(params))
    # This regex finds the function signature
    pattern = rf'^(\w+(?:\s+\*)?)\s+{re.escape(func_name)}\s*\([^)]*\)'

    lines = content.split('\n')
    start_idx = None

    for i, line in enumerate(lines):
        if re.match(pattern, line):
            start_idx = i
            break

    if start_idx is None:
        return None, -1, -1

    # Find the end of the function (matching braces)
    brace_count = 0
    in_function = False
    end_idx = start_idx

    for i in range(start_idx, len(lines)):
        line = lines[i]

        # Count braces (simple approach, doesn't handle strings/comments perfectly)
        for char in line:
            if char == '{':
                brace_count += 1
                in_function = True
            elif char == '}':
                brace_count -= 1

        if in_function and brace_count == 0:
            end_idx = i
            break

    # Extract the function text
    func_lines = lines[start_idx:end_idx+1]
    func_text = '\n'.join(func_lines)

    return func_text, start_idx + 1, end_idx + 1  # +1 for 1-based line numbers

def extract_function_signature(func_def: str) -> str:
    """Extract just the signature line from a function definition."""
    lines = func_def.split('\n')

    # Find the line with the opening brace
    sig_lines = []
    for line in lines:
        sig_lines.append(line)
        if '{' in line:
            break

    # Get everything before the opening brace
    sig_text = '\n'.join(sig_lines)
    sig_text = sig_text[:sig_text.index('{')].strip()

    return sig_text + ';'

def get_all_function_names(content: str) -> List[str]:
    """Get all function names from the source file."""
    pattern = r'^(\w+(?:\s+\*)?)\s+(\w+)\s*\([^)]*\)\s*$'

    functions = []
    lines = content.split('\n')

    for line in lines:
        match = re.match(pattern, line)
        if match and not line.strip().endswith(';'):  # Not a declaration
            func_name = match.group(2)
            if func_name not in ['if', 'while', 'for', 'switch']:  # Not a keyword
                functions.append(func_name)

    return functions

def match_functions_by_pattern(content: str, patterns: List[str]) -> Set[str]:
    """Find all functions that match any of the given patterns."""
    all_functions = get_all_function_names(content)
    matched = set()

    for func in all_functions:
        # Get a snippet of the function body to check for patterns
        func_def, _, _ = extract_function_definition(content, func)
        if func_def:
            func_text_lower = func_def.lower()
            for pattern in patterns:
                if pattern.lower() in func_text_lower:
                    matched.add(func)
                    break

    return matched

def main():
    if len(sys.argv) < 3:
        print("Usage: extract_module.py <module_name> <pattern1,pattern2,...>")
        print("       extract_module.py <module_name> --list func1,func2,func3")
        print("\nExample:")
        print("  extract_module.py datastructures 'malloc,calloc,free,realloc,tree,node'")
        print("  extract_module.py main --list 'main,XtAppInitialize,XtAppMainLoop'")
        sys.exit(1)

    module_name = sys.argv[1]

    # Read source file
    with open('fsn.c', 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()

    # Determine which functions to extract
    if '--list' in sys.argv:
        # Explicit function list
        func_list_str = sys.argv[3] if len(sys.argv) > 3 else ""
        target_functions = set(func_list_str.split(','))
    else:
        # Pattern matching
        patterns_str = sys.argv[2]
        patterns = [p.strip() for p in patterns_str.split(',')]
        print(f"Searching for functions matching patterns: {patterns}")
        target_functions = match_functions_by_pattern(content, patterns)

    print(f"\nFound {len(target_functions)} functions to extract:")
    for func in sorted(target_functions):
        print(f"  - {func}")

    # Extract functions
    extracted_functions = []
    signatures = []

    for func_name in target_functions:
        func_def, start_line, end_line = extract_function_definition(content, func_name)
        if func_def:
            extracted_functions.append(func_def)
            sig = extract_function_signature(func_def)
            signatures.append(sig)
            print(f"Extracted {func_name} (lines {start_line}-{end_line})")
        else:
            print(f"WARNING: Could not find function {func_name}")

    # Create module .c file
    module_c = f"src/{module_name}.c"
    os.makedirs("src", exist_ok=True)

    with open(module_c, 'w') as f:
        f.write(f"// {module_name}.c - Extracted from fsn.c\n")
        f.write(f"// Generated by extract_module.py\n\n")
        f.write('#include "../include/fsn.h"\n')
        f.write(f'#include "../include/{module_name}.h"\n\n')
        f.write('\n\n'.join(extracted_functions))
        f.write('\n')

    print(f"\n✓ Created {module_c} ({len(extracted_functions)} functions)")

    # Create module .h file
    module_h = f"include/{module_name}.h"

    with open(module_h, 'w') as f:
        guard = f"FSN_{module_name.upper()}_H"
        f.write(f"// {module_name}.h - Header for {module_name} module\n")
        f.write(f"// Generated by extract_module.py\n\n")
        f.write(f"#ifndef {guard}\n")
        f.write(f"#define {guard}\n\n")
        f.write('#include "fsn_types.h"\n')
        f.write('#include "fsn_std.h"\n\n')
        f.write('\n'.join(signatures))
        f.write(f'\n\n#endif // {guard}\n')

    print(f"✓ Created {module_h} ({len(signatures)} declarations)")

    print(f"\n✓ Module extraction complete!")
    print(f"\nNext steps:")
    print(f"  1. Review {module_c} and {module_h}")
    print(f"  2. Remove extracted functions from fsn.c")
    print(f"  3. Add {module_name}.c to CMakeLists.txt")
    print(f"  4. Test compilation")

if __name__ == '__main__':
    main()
