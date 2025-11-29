#!/usr/bin/env python3
"""
Map GP offsets to function addresses via GOT.

GP = 0x1001db30  (GOT + 0x7ff0)
GOT starts at 0x10015b40
"""
import struct
import subprocess
import re
import sys

GP = 0x1001db30
GOT_START = 0x10015b40
GOT_FILE_OFFSET = 0x51b40
GOT_SIZE = 0xa60

def read_got_entry(binary_path, gp_offset):
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

def get_dynamic_symbols(binary_path):
    """Get dynamic symbols from binary."""
    result = subprocess.run(
        ['mips-linux-gnu-objdump', '-T', binary_path],
        capture_output=True, text=True
    )
    symbols = {}
    for line in result.stdout.split('\n'):
        # Parse: 00409450      DF *UND*	00000000 fabsf
        match = re.match(r'^([0-9a-fA-F]+)\s+.*\s+(\S+)$', line)
        if match:
            addr = int(match.group(1), 16)
            name = match.group(2)
            if addr:
                symbols[addr] = name
    return symbols

def main():
    binary = 'fsn.original'
    
    # Get dynamic symbols
    print("Loading dynamic symbols...", file=sys.stderr)
    symbols = get_dynamic_symbols(binary)
    print(f"Found {len(symbols)} symbols", file=sys.stderr)
    
    # Read offsets from stdin or file
    if len(sys.argv) > 1:
        with open(sys.argv[1]) as f:
            offsets_text = f.read()
    else:
        offsets_text = sys.stdin.read()
    
    # Parse offsets like "unaff_gp + -0x7b2c"
    for line in offsets_text.strip().split('\n'):
        match = re.search(r'unaff_gp \+ (-?0x[0-9a-fA-F]+)', line)
        if not match:
            continue
        
        offset_str = match.group(1)
        offset = int(offset_str, 16)
        if offset_str.startswith('-'):
            offset = -int(offset_str[1:], 16)
        
        value, got_addr = read_got_entry(binary, offset)
        
        if value is None:
            print(f"offset {offset_str}: GOT addr 0x{got_addr:08x} (out of range)")
        else:
            name = symbols.get(value, f"FUN_{value:08x}" if 0x409440 <= value <= 0x43b7b0 else f"??? 0x{value:08x}")
            print(f"offset {offset_str} -> 0x{value:08x} -> {name}")

if __name__ == '__main__':
    main()
