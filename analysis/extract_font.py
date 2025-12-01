#!/usr/bin/env python3
"""
Extract chrtbl vector font data from FSN binary and convert to C array.

The original FSN used a stroked vector font stored in 'chrtbl'.
This script extracts the font data directly from the SGI IRIX binary.

Font format:
- 128 characters (ASCII 0-127)
- 216 bytes per character (54 int32s, big-endian)
- Each command is {type, x, y}

Command types:
  0 = end of character
  1 = move (translate pen position)
  2 = begin line + vertex
  3 = continue line (add vertex)
  4 = end line + vertex

Usage:
    python3 extract_font.py                              # Uses fsn.original
    python3 extract_font.py fsn.original                 # Specify binary
    python3 extract_font.py fsn.original output.c        # Specify output
"""

import sys
import struct
import os

# Font location in binary
# .data VMA = 0x10000000, file offset = 0x3c000
# chrtbl VMA = 0x10000214 (from GP_MAPPING: -0x76cc -> 0x10000214)
# File offset = 0x3c000 + (0x10000214 - 0x10000000) = 0x3c214
FONT_OFFSET = 0x3c214
CHARS_COUNT = 128
BYTES_PER_CHAR = 216  # 54 int32s × 4 bytes


def extract_font(binary_path, output_file=None):
    """Extract font data from binary and output C array."""

    # Read font data from binary
    with open(binary_path, 'rb') as f:
        f.seek(FONT_OFFSET)
        data = f.read(CHARS_COUNT * BYTES_PER_CHAR)

    if len(data) < CHARS_COUNT * BYTES_PER_CHAR:
        raise ValueError(f"Binary too small: got {len(data)} bytes, "
                        f"expected {CHARS_COUNT * BYTES_PER_CHAR}")

    # Output stream
    out = output_file if output_file else sys.stdout

    print("/**", file=out)
    print(" * vector_font_data.c - Original FSN stroked font data", file=out)
    print(" *", file=out)
    print(" * Extracted from fsn.original (SGI IRIX binary, Dec 1996)", file=out)
    print(" * Address: 0x10000218 in .data section", file=out)
    print(" *", file=out)
    print(" * Format: 128 characters, 216 bytes each (54 int32s)", file=out)
    print(" * Command structure: {type, x, y} where:", file=out)
    print(" *   0 = end of character", file=out)
    print(" *   1 = move (translate pen position)", file=out)
    print(" *   2 = begin line + vertex", file=out)
    print(" *   3 = continue line (add vertex)", file=out)
    print(" *   4 = end line + vertex", file=out)
    print(" */", file=out)
    print("", file=out)
    print("#include <stdint.h>", file=out)
    print("", file=out)
    print("/* 128 characters x 54 int32s (216 bytes each) */", file=out)
    print("const int32_t chrtbl[128][54] = {", file=out)

    # 128 characters, 216 bytes each, 54 int32s per char
    for char_idx in range(CHARS_COUNT):
        offset = char_idx * BYTES_PER_CHAR
        char_data = data[offset:offset+BYTES_PER_CHAR]

        # Convert to int32s (big-endian from MIPS)
        values = struct.unpack('>54i', char_data)

        # Format character index and optional ASCII representation
        if 32 <= char_idx < 127:
            char_name = f"'{chr(char_idx)}'"
        else:
            char_name = f"char {char_idx}"

        print(f"    /* {char_idx:3d} {char_name:8s} */ {{", end="", file=out)

        # Print 18 commands (3 values each) on multiple lines
        for cmd_idx in range(18):
            if cmd_idx % 6 == 0:
                if cmd_idx > 0:
                    print(",", file=out)
                    print("        ", end="", file=out)
                else:
                    print("", file=out)
                    print("        ", end="", file=out)
            else:
                print(", ", end="", file=out)

            v0 = values[cmd_idx * 3]
            v1 = values[cmd_idx * 3 + 1]
            v2 = values[cmd_idx * 3 + 2]
            print(f"{v0:2d},{v1:2d},{v2:2d}", end="", file=out)

        if char_idx < 127:
            print("", file=out)
            print("    },", file=out)
        else:
            print("", file=out)
            print("    }", file=out)

    print("};", file=out)


if __name__ == '__main__':
    # Find project root
    script_dir = os.path.dirname(os.path.abspath(__file__))
    project_root = os.path.dirname(script_dir)
    default_binary = os.path.join(project_root, 'fsn.original')

    if len(sys.argv) >= 3:
        binary_path = sys.argv[1]
        output_path = sys.argv[2]
    elif len(sys.argv) == 2:
        binary_path = sys.argv[1]
        output_path = None
    else:
        binary_path = default_binary
        output_path = None

    if not os.path.exists(binary_path):
        print(f"Error: Binary not found: {binary_path}", file=sys.stderr)
        sys.exit(1)

    if output_path:
        with open(output_path, 'w') as f:
            extract_font(binary_path, f)
        print(f"Wrote font data to: {output_path}", file=sys.stderr)
    else:
        extract_font(binary_path)

    # Show verification info to stderr
    with open(binary_path, 'rb') as f:
        f.seek(FONT_OFFSET + 65 * BYTES_PER_CHAR)
        char_a = struct.unpack('>3i', f.read(12))
        print(f"Verified: Character 'A' (65) cmd0=({char_a[0]},{char_a[1]},{char_a[2]})",
              file=sys.stderr)
