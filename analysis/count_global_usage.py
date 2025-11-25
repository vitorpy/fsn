#!/usr/bin/env python3
"""
Count how many times each DAT_ global is used in fsn.c
Prioritize by usage frequency.
"""

import re
import sys
from collections import Counter

def count_global_usage(filepath):
    """Count DAT_ global references."""
    with open(filepath, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()

    # Find all DAT_ references (not definitions)
    usage_pattern = r'\bDAT_([0-9a-f]{8})\b'

    usages = []
    for match in re.finditer(usage_pattern, content):
        global_name = "DAT_" + match.group(1)
        usages.append(global_name)

    return Counter(usages)

def main():
    if len(sys.argv) < 2:
        print("Usage: count_global_usage.py <fsn.c>")
        sys.exit(1)

    filepath = sys.argv[1]
    usage_counts = count_global_usage(filepath)

    print(f"Global Variable Usage Frequency Analysis")
    print("=" * 80)
    print(f"\nTotal unique DAT_ globals used: {len(usage_counts)}")
    print(f"Total DAT_ usage sites: {sum(usage_counts.values())}")
    print("\nTop 50 most-used globals:\n")
    print(f"{'Rank':<6} {'Global':<20} {'Usage Count':<12} {'Priority'}")
    print("-" * 80)

    for i, (global_var, count) in enumerate(usage_counts.most_common(50), 1):
        priority = "CRITICAL" if count >= 50 else "HIGH" if count >= 20 else "MEDIUM" if count >= 10 else "LOW"
        print(f"{i:<6} {global_var:<20} {count:<12} {priority}")

    # Save full list
    output_file = 'analysis/global_usage_counts.txt'
    with open(output_file, 'w') as f:
        f.write("Global Variable Usage Frequency (All Globals)\n")
        f.write("=" * 80 + "\n\n")
        for global_var, count in usage_counts.most_common():
            f.write(f"{global_var:<20} : {count:>4} uses\n")

    print(f"\n\nFull list saved to: {output_file}")

if __name__ == '__main__':
    main()
