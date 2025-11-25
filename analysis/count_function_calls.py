#!/usr/bin/env python3
"""
Count how many times each FUN_ function is called in fsn.c
Prioritize by usage frequency.
"""

import re
import sys
from collections import Counter

def count_function_calls(filepath):
    """Count FUN_ function calls."""
    with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()

    # Find all FUN_ calls (not definitions)
    call_pattern = r'\bFUN_([0-9a-f]{8})\s*\('

    calls = []
    for match in re.finditer(call_pattern, content):
        func_name = "FUN_" + match.group(1)
        calls.append(func_name)

    return Counter(calls)

def main():
    if len(sys.argv) < 2:
        print("Usage: count_function_calls.py <fsn.c>")
        sys.exit(1)

    filepath = sys.argv[1]
    call_counts = count_function_calls(filepath)

    print(f"Function Call Frequency Analysis")
    print("=" * 80)
    print(f"\nTotal unique FUN_ functions called: {len(call_counts)}")
    print(f"Total FUN_ call sites: {sum(call_counts.values())}")
    print("\nTop 50 most-called functions:\n")
    print(f"{'Rank':<6} {'Function':<20} {'Call Count':<12} {'Priority'}")
    print("-" * 80)

    for i, (func, count) in enumerate(call_counts.most_common(50), 1):
        priority = "CRITICAL" if count >= 50 else "HIGH" if count >= 20 else "MEDIUM" if count >= 10 else "LOW"
        print(f"{i:<6} {func:<20} {count:<12} {priority}")

    # Save full list
    output_file = 'analysis/function_call_counts.txt'
    with open(output_file, 'w') as f:
        f.write("Function Call Frequency (All Functions)\n")
        f.write("=" * 80 + "\n\n")
        for func, count in call_counts.most_common():
            f.write(f"{func:<20} : {count:>4} calls\n")

    print(f"\n\nFull list saved to: {output_file}")

if __name__ == '__main__':
    main()
