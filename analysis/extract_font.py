#!/usr/bin/env python3
"""
Extract chrtbl vector font data from FSN binary and convert to C array.

Usage:
    python3 extract_font.py /tmp/chrtbl.bin > src/vector_font_data.c
"""

import sys
import struct

def extract_font(input_file):
    """Read big-endian int32 font data and output C array."""

    print("/**")
    print(" * vector_font_data.c - Original FSN stroked font data")
    print(" *")
    print(" * Extracted from fsn.original (SGI IRIX binary, Dec 1996)")
    print(" * Address: 0x10000218 in .data section")
    print(" *")
    print(" * Format: 128 characters, 216 bytes each (54 int32s)")
    print(" * Command structure: {type, x, y} where:")
    print(" *   0 = end of character")
    print(" *   1 = move (translate pen position)")
    print(" *   2 = begin line + vertex")
    print(" *   3 = continue line (add vertex)")
    print(" *   4 = end line + vertex")
    print(" */")
    print("")
    print("#include <stdint.h>")
    print("")
    print("/* 128 characters x 54 int32s (216 bytes each) */")
    print("const int32_t chrtbl[128][54] = {")

    with open(input_file, 'rb') as f:
        data = f.read()

    # 128 characters, 216 bytes each, 54 int32s per char
    for char_idx in range(128):
        offset = char_idx * 216
        char_data = data[offset:offset+216]

        # Convert to int32s (big-endian from MIPS)
        values = []
        for i in range(54):
            val = struct.unpack('>i', char_data[i*4:(i+1)*4])[0]
            values.append(val)

        # Format as C array
        if char_idx < 32 or char_idx > 126:
            char_name = f"char {char_idx}"
        else:
            char_name = repr(chr(char_idx))

        print(f"    /* {char_idx:3d} {char_name:6s} */ {{", end="")

        # Print 18 commands (3 values each) on multiple lines
        for cmd_idx in range(18):
            if cmd_idx % 6 == 0:
                if cmd_idx > 0:
                    print(",")
                    print("        ", end="")
                else:
                    print("")
                    print("        ", end="")
            else:
                print(", ", end="")

            v0 = values[cmd_idx * 3]
            v1 = values[cmd_idx * 3 + 1]
            v2 = values[cmd_idx * 3 + 2]
            print(f"{v0:2d},{v1:2d},{v2:2d}", end="")

        if char_idx < 127:
            print("")
            print("    },")
        else:
            print("")
            print("    }")

    print("};")


if __name__ == '__main__':
    if len(sys.argv) != 2:
        print(f"Usage: {sys.argv[0]} <chrtbl.bin>", file=sys.stderr)
        sys.exit(1)

    extract_font(sys.argv[1])
