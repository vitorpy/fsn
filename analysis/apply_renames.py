#!/usr/bin/env python3
"""
Apply function renames from function_renames.txt to fsn.c
"""

import re
import sys
import os

def parse_rename_map(filename):
    """Parse the rename mapping file."""
    renames = []
    with open(filename, 'r') as f:
        for line in f:
            line = line.strip()
            # Skip comments and empty lines
            if not line or line.startswith('#'):
                continue
            # Parse: OLD_NAME -> NEW_NAME : REASON
            if ' -> ' in line:
                parts = line.split(' -> ')
                old_name = parts[0].strip()
                rest = parts[1].split(' : ')
                new_name = rest[0].strip()
                reason = rest[1] if len(rest) > 1 else ""
                renames.append((old_name, new_name, reason))
    return renames

def apply_renames(source_file, renames, dry_run=True):
    """Apply renames to source file."""
    with open(source_file, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()

    original_content = content
    changes = []

    for old_name, new_name, reason in renames:
        # Count occurrences before replacing
        count = content.count(old_name)
        if count == 0:
            print(f"WARNING: {old_name} not found in source")
            continue

        # Replace all occurrences (function definitions and calls)
        content = content.replace(old_name, new_name)
        changes.append((old_name, new_name, count, reason))
        print(f"  {old_name} -> {new_name} ({count} occurrences)")

    if not dry_run:
        # Write back to file
        with open(source_file, 'w', encoding='utf-8') as f:
            f.write(content)
        print(f"\nWrote changes to {source_file}")
    else:
        print(f"\nDRY RUN - No changes written")

    return changes

def main():
    if len(sys.argv) < 2:
        print("Usage: apply_renames.py <function_renames.txt> [--apply]")
        print("  Default is dry-run mode. Use --apply to actually modify fsn.c")
        sys.exit(1)

    rename_file = sys.argv[1]
    dry_run = '--apply' not in sys.argv

    if not os.path.exists(rename_file):
        print(f"Error: {rename_file} not found")
        sys.exit(1)

    source_file = 'fsn.c'
    if not os.path.exists(source_file):
        print(f"Error: {source_file} not found")
        sys.exit(1)

    print("=" * 80)
    print(f"Function Rename Application")
    print(f"Mode: {'DRY RUN' if dry_run else 'APPLY CHANGES'}")
    print("=" * 80)
    print()

    renames = parse_rename_map(rename_file)
    print(f"Found {len(renames)} renames to apply:\n")

    changes = apply_renames(source_file, renames, dry_run)

    print("\n" + "=" * 80)
    print(f"Summary: {len(changes)} functions renamed")
    print(f"Total occurrences changed: {sum(c[2] for c in changes)}")

    if dry_run:
        print("\nTo apply these changes, run: python3 apply_renames.py function_renames.txt --apply")

if __name__ == '__main__':
    main()
