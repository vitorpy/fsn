#!/usr/bin/env python3
"""
lookup_data.py - Look up values from FSN binary data sections

This tool helps decode float/double constants from the original SGI binary
by looking up addresses in the .data and .rodata sections.

Usage:
    python3 analysis/lookup_data.py <address_or_offset> [type]

    address_or_offset: Can be:
        - Hex address like 0x10000218
        - GP offset like -20664 (negative offset from GP base)
        - lwc1 notation like "lwc1 $f19,-20664(at)"

    type: Optional, one of: float, double, int32, bytes
          Default: auto-detect based on size

Examples:
    python3 analysis/lookup_data.py 0x10000218 float
    python3 analysis/lookup_data.py -20664 double
    python3 analysis/lookup_data.py "lwc1 -20664"
"""

import sys
import struct
import re
from pathlib import Path

# Section layout from readelf -S
# .data: VMA=0x10000000, file_offset=0x3c000, size=0x9f50
# .rodata: VMA=0x10009f50, file_offset=0x45f50, size=0xbbf0
SECTIONS = {
    '.data': {
        'vma': 0x10000000,
        'file_offset': 0x3c000,
        'size': 0x9f50
    },
    '.rodata': {
        'vma': 0x10009f50,
        'file_offset': 0x45f50,
        'size': 0xbbf0
    }
}

# Known base addresses used with GP-relative addressing
# DAT_10010000 is commonly used as a base
KNOWN_BASES = {
    'DAT_10010000': 0x10010000,
    'gp': 0x1001db30,  # GP value from assembly
}

BINARY_PATH = Path(__file__).parent.parent / 'fsn.original'


def read_binary(path=BINARY_PATH):
    """Read the binary file."""
    with open(path, 'rb') as f:
        return f.read()


def addr_to_file_offset(addr):
    """Convert a virtual address to file offset."""
    # Check .data section
    data = SECTIONS['.data']
    if data['vma'] <= addr < data['vma'] + data['size']:
        return data['file_offset'] + (addr - data['vma'])

    # Check .rodata section
    rodata = SECTIONS['.rodata']
    if rodata['vma'] <= addr < rodata['vma'] + rodata['size']:
        return rodata['file_offset'] + (addr - rodata['vma'])

    return None


def parse_address(arg):
    """Parse various address formats."""
    arg = arg.strip()

    # Check for lwc1 notation: "lwc1 $f19,-20664(at)"
    lwc1_match = re.search(r'(-?\d+)\s*\(\s*(\w+)\s*\)', arg)
    if lwc1_match:
        offset = int(lwc1_match.group(1))
        base_reg = lwc1_match.group(2)
        # Assume 'at' refers to DAT_10010000
        base = KNOWN_BASES.get('DAT_10010000', 0x10010000)
        return base + offset

    # Check for plain negative offset (GP-relative)
    if arg.startswith('-') and arg[1:].isdigit():
        offset = int(arg)
        # Assume offset from DAT_10010000
        base = KNOWN_BASES.get('DAT_10010000', 0x10010000)
        return base + offset

    # Check for hex address
    if arg.startswith('0x') or arg.startswith('0X'):
        return int(arg, 16)

    # Try as decimal
    try:
        return int(arg)
    except ValueError:
        pass

    return None


def decode_value(data, offset, value_type='auto'):
    """Decode a value from binary data."""
    if offset < 0 or offset + 8 > len(data):
        return None, "Invalid offset"

    # Big-endian MIPS
    float_val = struct.unpack('>f', data[offset:offset+4])[0]
    int32_val = struct.unpack('>i', data[offset:offset+4])[0]
    uint32_val = struct.unpack('>I', data[offset:offset+4])[0]

    # For doubles, we need 8 bytes
    if offset + 8 <= len(data):
        double_val = struct.unpack('>d', data[offset:offset+8])[0]
    else:
        double_val = None

    raw_bytes = data[offset:offset+8].hex()

    if value_type == 'float':
        return float_val, f"0x{uint32_val:08x}"
    elif value_type == 'double':
        if double_val is not None:
            return double_val, raw_bytes[:16]
        return None, "Not enough data for double"
    elif value_type == 'int32':
        return int32_val, f"0x{uint32_val:08x}"
    elif value_type == 'bytes':
        return raw_bytes, None
    else:  # auto
        results = []
        results.append(f"  float:  {float_val:g} (0x{uint32_val:08x})")
        results.append(f"  int32:  {int32_val} (0x{uint32_val:08x})")
        if double_val is not None:
            results.append(f"  double: {double_val:g} (0x{raw_bytes[:16]})")
        results.append(f"  bytes:  {raw_bytes}")
        return '\n'.join(results), None


def decode_hex_constant(hex_val):
    """Decode a hex constant as float or double."""
    # Handle 32-bit (float)
    if len(hex_val) <= 8:
        hex_val = hex_val.zfill(8)
        float_val = struct.unpack('>f', bytes.fromhex(hex_val))[0]
        print(f"0x{hex_val} as float: {float_val:g}")

    # Handle 64-bit (double)
    if len(hex_val) <= 16:
        hex_val = hex_val.zfill(16)
        double_val = struct.unpack('>d', bytes.fromhex(hex_val))[0]
        print(f"0x{hex_val} as double: {double_val:g}")


def find_constant_patterns():
    """Look for common IEEE 754 patterns in the binary."""
    data = read_binary()

    print("\n=== Searching for common float constants ===")

    # Common floats to look for
    common_floats = [
        (0.0, 0x00000000),
        (1.0, 0x3f800000),
        (-1.0, 0xbf800000),
        (0.5, 0x3f000000),
        (-0.5, 0xbf000000),
        (2.0, 0x40000000),
        (0.1, 0x3dcccccd),
        (0.03, 0x3cf5c28f),
        (-0.05, 0xbd4ccccd),
    ]

    for val, pattern in common_floats:
        pattern_bytes = struct.pack('>I', pattern)
        offset = 0
        while True:
            pos = data.find(pattern_bytes, offset)
            if pos == -1:
                break
            print(f"  {val:g} (0x{pattern:08x}) found at file offset 0x{pos:x}")
            offset = pos + 1
            if offset - data.find(pattern_bytes, 0) > 100:  # Limit results
                print(f"    ... (more occurrences)")
                break


def main():
    if len(sys.argv) < 2:
        print(__doc__)
        return

    arg = sys.argv[1]
    value_type = sys.argv[2] if len(sys.argv) > 2 else 'auto'

    # Special commands
    if arg == '--find-constants':
        find_constant_patterns()
        return

    if arg.startswith('0x') and len(arg) <= 18:
        # Might be a hex constant to decode
        decode_hex_constant(arg[2:])
        return

    addr = parse_address(arg)
    if addr is None:
        print(f"Error: Could not parse address: {arg}")
        return

    print(f"Virtual address: 0x{addr:08x}")

    file_offset = addr_to_file_offset(addr)
    if file_offset is None:
        print(f"Warning: Address not in known section, trying direct offset")
        file_offset = addr
    else:
        print(f"File offset: 0x{file_offset:x}")

    data = read_binary()
    result, extra = decode_value(data, file_offset, value_type)

    if result is not None:
        if extra:
            print(f"Value: {result} ({extra})")
        else:
            print(f"Values:\n{result}")


if __name__ == '__main__':
    main()
