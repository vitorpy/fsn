#!/usr/bin/env python3
"""
Resolve indirect calls in exploded FSN function files.

Creates annotated cleanup versions with GP offsets resolved to:
- Function names (for code ** patterns)
- Global variable names (for data access patterns)

Usage:
    python3 resolve_indirect_calls.py --input fsn_original.exploded --output fsn_original.exploded.cleanup

Files output to <output>/<FUNCTION>.c with comments added for each GP offset.
Also generates <output>/GP_MAPPING.md with full offset→symbol mapping.
"""

import os
import sys
import re
import struct
import argparse
import subprocess
from pathlib import Path
from typing import Dict, Tuple, Optional

# Binary layout constants
GP = 0x1001db30  # GOT + 0x7ff0
GOT_START = 0x10015b40
GOT_FILE_OFFSET = 0x51b40
GOT_SIZE = 0xa60
TEXT_START = 0x00409440
TEXT_END = 0x0043b7b0
DATA_START = 0x10000000
DATA_END = 0x10019230


def load_dynamic_symbols(binary_path: str) -> Dict[int, str]:
    """Load dynamic symbols from binary."""
    result = subprocess.run(
        ['mips-linux-gnu-objdump', '-T', binary_path],
        capture_output=True, text=True
    )
    symbols = {}
    for line in result.stdout.split('\n'):
        # Parse: 00409450      DF *UND*	00000000 fabsf
        # or: 10000180 g    DO .data	00000000 topdir
        parts = line.split()
        if len(parts) >= 2:
            try:
                addr = int(parts[0], 16)
                name = parts[-1]
                if addr:
                    symbols[addr] = name
            except ValueError:
                continue
    return symbols


def read_got_entry(binary_path: str, gp_offset: int) -> Tuple[Optional[int], int]:
    """Read a 4-byte big-endian value from GOT at GP + offset."""
    got_addr = GP + gp_offset
    if got_addr < GOT_START or got_addr >= GOT_START + GOT_SIZE:
        return None, got_addr

    file_offset = GOT_FILE_OFFSET + (got_addr - GOT_START)

    with open(binary_path, 'rb') as f:
        f.seek(file_offset)
        data = f.read(4)
        if len(data) < 4:
            return None, got_addr
        value = struct.unpack('>I', data)[0]
        return value, got_addr


def classify_address(addr: int, symbols: Dict[int, str]) -> str:
    """Classify an address as function, data, or external."""
    if addr in symbols:
        return symbols[addr]

    if TEXT_START <= addr <= TEXT_END:
        return f"FUN_{addr:08x}"

    if DATA_START <= addr <= DATA_END:
        return f"DAT_{addr:08x}"

    # External library address
    return f"EXTERNAL_0x{addr:08x}"


def build_offset_mapping(binary_path: str, symbols: Dict[int, str]) -> Dict[int, Tuple[int, str]]:
    """Build complete GP offset → (address, symbol) mapping."""
    mapping = {}

    # Read entire GOT
    with open(binary_path, 'rb') as f:
        f.seek(GOT_FILE_OFFSET)
        got_data = f.read(GOT_SIZE)

    for i in range(0, len(got_data), 4):
        if i + 4 > len(got_data):
            break
        value = struct.unpack('>I', got_data[i:i+4])[0]
        got_addr = GOT_START + i
        gp_offset = got_addr - GP
        symbol = classify_address(value, symbols)
        mapping[gp_offset] = (value, symbol)

    return mapping


def format_offset(offset: int) -> str:
    """Format GP offset as it appears in Ghidra output."""
    if offset < 0:
        return f"-0x{-offset:x}"
    else:
        return f"0x{offset:x}"


def resolve_function_file(input_path: str, output_path: str, mapping: Dict[int, Tuple[int, str]]) -> Dict[str, int]:
    """Add resolution comments to a function file. Returns stats."""
    stats = {'calls': 0, 'data': 0, 'unresolved': 0}

    with open(input_path, 'r') as f:
        content = f.read()

    # Pattern for indirect function calls: *(code **)(unaff_gp + OFFSET)
    # Also captures data access: *(TYPE *)(unaff_gp + OFFSET)

    def replace_offset(match):
        full_match = match.group(0)
        offset_str = match.group(1)

        # Parse offset
        if offset_str.startswith('-0x') or offset_str.startswith('-0X'):
            offset = -int(offset_str[1:], 16)
        elif offset_str.startswith('0x') or offset_str.startswith('0X'):
            offset = int(offset_str, 16)
        else:
            offset = int(offset_str)

        if offset in mapping:
            addr, symbol = mapping[offset]
            # Add comment after the expression
            if 'code **' in match.group(0) or 'code *' in match.group(0):
                stats['calls'] += 1
                return f"{full_match} /* -> {symbol} */"
            else:
                stats['data'] += 1
                return f"{full_match} /* -> {symbol} */"
        else:
            stats['unresolved'] += 1
            return f"{full_match} /* UNRESOLVED */"

    # Match patterns like (unaff_gp + -0x7b2c) or (unaff_gp + 0x1234)
    pattern = r'\(unaff_gp \+ (-?0x[0-9a-fA-F]+|-?\d+)\)'

    # Avoid duplicating comments
    content = re.sub(r'/\* -> [^*]+ \*/|/\* UNRESOLVED \*/', '', content)

    # Add new comments
    new_content = re.sub(pattern, replace_offset, content)

    # Write output
    os.makedirs(os.path.dirname(output_path), exist_ok=True)
    with open(output_path, 'w') as f:
        f.write(new_content)

    return stats


def write_mapping_file(output_dir: str, mapping: Dict[int, Tuple[int, str]], symbols: Dict[int, str]):
    """Write GP_MAPPING.md with full offset→symbol mapping."""
    filepath = os.path.join(output_dir, 'GP_MAPPING.md')

    # Group by symbol type
    functions = []
    data = []
    external = []

    for offset, (addr, symbol) in sorted(mapping.items()):
        entry = (format_offset(offset), f"0x{addr:08x}", symbol)
        if symbol.startswith('FUN_') or (TEXT_START <= addr <= TEXT_END):
            functions.append(entry)
        elif symbol.startswith('DAT_') or (DATA_START <= addr <= DATA_END):
            data.append(entry)
        elif symbol.startswith('EXTERNAL_'):
            external.append(entry)
        else:
            # Named symbol - classify by address
            if TEXT_START <= addr <= TEXT_END:
                functions.append(entry)
            elif DATA_START <= addr <= DATA_END:
                data.append(entry)
            else:
                external.append(entry)

    with open(filepath, 'w') as f:
        f.write("# GP Offset Mapping\n\n")
        f.write(f"GP = 0x{GP:08x}\n")
        f.write(f"GOT = 0x{GOT_START:08x} - 0x{GOT_START + GOT_SIZE:08x}\n\n")

        f.write(f"## Functions ({len(functions)} entries)\n\n")
        f.write("| GP Offset | Address | Symbol |\n")
        f.write("|-----------|---------|--------|\n")
        for offset, addr, symbol in sorted(functions, key=lambda x: x[0]):
            f.write(f"| `{offset}` | `{addr}` | `{symbol}` |\n")

        f.write(f"\n## Data/Globals ({len(data)} entries)\n\n")
        f.write("| GP Offset | Address | Symbol |\n")
        f.write("|-----------|---------|--------|\n")
        for offset, addr, symbol in sorted(data, key=lambda x: x[0]):
            f.write(f"| `{offset}` | `{addr}` | `{symbol}` |\n")

        f.write(f"\n## External/Library ({len(external)} entries)\n\n")
        f.write("| GP Offset | Address | Symbol |\n")
        f.write("|-----------|---------|--------|\n")
        for offset, addr, symbol in sorted(external, key=lambda x: x[0]):
            f.write(f"| `{offset}` | `{addr}` | `{symbol}` |\n")


def main():
    parser = argparse.ArgumentParser(description='Resolve indirect calls in exploded FSN files')
    parser.add_argument('--input', '-i', default='fsn_original.exploded',
                       help='Input directory with exploded function files')
    parser.add_argument('--output', '-o', default=None,
                       help='Output directory (default: <input>.cleanup)')
    parser.add_argument('--binary', '-b', default='fsn.original',
                       help='Original binary for symbol lookup')
    args = parser.parse_args()

    input_dir = args.input
    output_dir = args.output if args.output else f"{input_dir}.cleanup"
    binary = args.binary

    if not os.path.exists(input_dir):
        print(f"Error: Input directory {input_dir} not found")
        sys.exit(1)

    if not os.path.exists(binary):
        print(f"Error: Binary {binary} not found")
        sys.exit(1)

    print(f"Loading dynamic symbols from {binary}...")
    symbols = load_dynamic_symbols(binary)
    print(f"  Found {len(symbols)} symbols")

    print("Building GP offset mapping...")
    mapping = build_offset_mapping(binary, symbols)
    print(f"  Mapped {len(mapping)} GOT entries")

    # Process each .c file
    c_files = list(Path(input_dir).glob('*.c'))
    print(f"\nProcessing {len(c_files)} function files...")

    total_stats = {'calls': 0, 'data': 0, 'unresolved': 0}

    for i, c_file in enumerate(c_files):
        output_path = os.path.join(output_dir, c_file.name)
        stats = resolve_function_file(str(c_file), output_path, mapping)

        for key in total_stats:
            total_stats[key] += stats[key]

        if (i + 1) % 100 == 0:
            print(f"  Processed {i + 1}/{len(c_files)}...")

    # Copy INDEX.md if it exists
    index_src = os.path.join(input_dir, 'INDEX.md')
    if os.path.exists(index_src):
        index_dst = os.path.join(output_dir, 'INDEX.md')
        with open(index_src, 'r') as f:
            content = f.read()
        with open(index_dst, 'w') as f:
            f.write(content)

    # Write GP mapping file
    print("\nWriting GP_MAPPING.md...")
    write_mapping_file(output_dir, mapping, symbols)

    print(f"\nDone!")
    print(f"  Output directory: {output_dir}")
    print(f"  Function calls resolved: {total_stats['calls']}")
    print(f"  Data accesses resolved: {total_stats['data']}")
    print(f"  Unresolved offsets: {total_stats['unresolved']}")


if __name__ == '__main__':
    main()
