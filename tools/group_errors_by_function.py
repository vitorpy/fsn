#!/usr/bin/env python3
"""
Group compilation errors by function for targeted fixes.
Outputs JSON with function text and associated errors.
"""

import sys
import json
import re
import os
from collections import defaultdict

# Import the extract function
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from extract_function import find_function_at_line

def parse_errors(error_file: str) -> list[dict]:
    """Parse GCC error output into structured format."""
    errors = []
    error_pattern = re.compile(r'^(/[^:]+):(\d+):(\d+): (error|warning): (.+)$')

    with open(error_file, 'r') as f:
        for line in f:
            match = error_pattern.match(line.strip())
            if match:
                errors.append({
                    'file': match.group(1),
                    'line': int(match.group(2)),
                    'column': int(match.group(3)),
                    'type': match.group(4),
                    'message': match.group(5)
                })
    return errors

def group_by_function(errors: list[dict]) -> dict:
    """Group errors by file and function."""
    # First group by file
    by_file = defaultdict(list)
    for err in errors:
        if err['type'] == 'error':  # Only process errors, not warnings
            by_file[err['file']].append(err)

    # Then group by function within each file
    result = {}
    for filepath, file_errors in by_file.items():
        if not os.path.exists(filepath):
            continue

        with open(filepath, 'rb') as f:
            source = f.read()

        # Get unique functions
        functions = {}
        for err in file_errors:
            func_info = find_function_at_line(source, err['line'])
            if func_info:
                key = f"{filepath}:{func_info['name']}"
                if key not in functions:
                    functions[key] = {
                        'file': filepath,
                        'function_name': func_info['name'],
                        'start_line': func_info['start_line'],
                        'end_line': func_info['end_line'],
                        'text': func_info['text'],
                        'errors': []
                    }
                functions[key]['errors'].append({
                    'line': err['line'],
                    'column': err['column'],
                    'message': err['message'],
                    'relative_line': err['line'] - func_info['start_line'] + 1
                })

        result.update(functions)

    return result

def main():
    if len(sys.argv) < 2:
        print("Usage: group_errors_by_function.py <error_file> [--top N]", file=sys.stderr)
        sys.exit(1)

    error_file = sys.argv[1]
    top_n = None
    if '--top' in sys.argv:
        idx = sys.argv.index('--top')
        top_n = int(sys.argv[idx + 1])

    errors = parse_errors(error_file)
    grouped = group_by_function(errors)

    # Sort by error count
    sorted_funcs = sorted(grouped.values(), key=lambda x: len(x['errors']), reverse=True)

    if top_n:
        sorted_funcs = sorted_funcs[:top_n]

    # Output summary
    print(f"Total functions with errors: {len(sorted_funcs)}", file=sys.stderr)
    for func in sorted_funcs[:10]:
        print(f"  {func['function_name']}: {len(func['errors'])} errors", file=sys.stderr)

    # Output JSON
    print(json.dumps(sorted_funcs, indent=2))

if __name__ == '__main__':
    main()
