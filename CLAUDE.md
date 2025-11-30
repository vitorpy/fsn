# FSN Project - Claude Code Instructions

## ⚠️ CORE PRINCIPLE: RESTORATION, NOT REIMPLEMENTATION ⚠️

**This is a RESTORATION project. We preserve and extract original code - we do NOT rewrite it.**

- **SAVE AS MUCH ORIGINAL CODE AS POSSIBLE** - Every line from fsn.c is valuable
- **Extract functions AS-IS** - Keep Ghidra artifacts (`halt_baddata`, `unaff_gp`, etc.)
- **Never substitute your own implementation** - Even if you "know a better way"
- **The decompiled code IS the source of truth** - It represents the original SGI binary
- **Cleanup comes AFTER functionality** - Make it work first, clean later (separate pass)
- **FIX VERIFIED DECOMPILATION BUGS** - When binary disassembly proves Ghidra wrong, fix it!

When in doubt: **EXTRACT, DON'T REWRITE** (but verify against binary when suspicious)

---

## Project Overview

FSN (File System Navigator) restoration project - converting a 78K-line Ghidra MIPS/IRIX decompile into a functional modern Linux binary. This is the 3D file browser seen in Jurassic Park (1993).

## Current Status: Phase 18 Complete - Text Labels Restored!

The FSN application now:
- Compiles and links successfully
- Launches and displays a Motif window with GL rendering
- Shows the iconic FSN landscape (ground plane + sky gradient)
- Renders 3D file blocks with connecting lines
- Displays text labels using original vector stroked font

### What Works:
- X11/Motif initialization and window creation
- Widget hierarchy (MainWindow, MenuBar, Forms, DrawingArea)
- GLX context management and buffer swapping
- IrisGL compatibility layer (mmode, perspective, transforms)
- Ground plane and gradient sky rendering
- Coordinate system conversion (FSN Y-forward to OpenGL -Z)
- Directory tree visualization (3D file blocks)
- Original vector font text labels (extracted from binary)
- Selection spotlight beams

### Still Needs Work:
- Mouse interaction/picking
- Navigation and zoom controls
- Many stub functions need real implementations

## Archaeology Reference

**See `docs/FSN_ARCHAEOLOGY.md`** for comprehensive reference:
- Context structure offsets
- IrisGL to OpenGL mapping
- Coordinate system details
- Decompilation artifacts guide
- Phase progress tracking

Detailed appendices in `docs/appendix/`:
- `FUNCTIONS.md` - All 402 functions by category
- `GLOBALS.md` - Global variables and offsets
- `STRUCTS.md` - Data structure layouts
- `IGL_API.md` - Complete IrisGL→OpenGL mapping

## Build Commands

**Always build out-of-source in ./build:**

```bash
# Configure (from project root)
cmake -B build -DCMAKE_BUILD_TYPE=Debug

# Build FSN
cmake --build build --target fsn

# Run
./build/fsn

# Other targets
cmake --build build --target test_headers
cmake --build build --target test_igl
```

**Dependencies (Arch Linux):**
```bash
sudo pacman -S motif libx11 mesa glu
```

**Dependencies (Debian/Ubuntu):**
```bash
sudo apt-get install libmotif-dev libx11-dev libgl1-mesa-dev libglu1-mesa-dev
```

## Critical Rules

### DO NOT:
- **Rewrite decompiled functions** - Extract AS-IS, preserving all artifacts
- Manually copy/paste large code blocks from fsn.c - use extraction scripts
- "Clean up" `halt_baddata()` calls, magic numbers, or GP indirect calls yet
- Create new implementations of functions - we're modularizing, not rewriting
- Build inside src/ directory - always use ./build

### DO:
- **Use extraction scripts** in `analysis/` for all module extraction
- Preserve decompilation artifacts (they indicate problem areas to fix later)
- Track work in beads (`bd`) for complex multi-session tasks
- Build in ./build directory (out-of-source)

## Key Scripts (in `analysis/`)

### Module Extraction - Tree-sitter (PREFERRED)
```bash
# Activate venv first
source .venv/bin/activate

# List functions matching a pattern
python3 analysis/extract_module_ts.py list draw

# Extract specific functions into a module
python3 analysis/extract_module_ts.py <module_name> func1,func2,func3
```

Tree-sitter handles multi-line signatures, complex declarations correctly.

### Legacy Regex Extraction (fallback)
```bash
python3 analysis/extract_module.py <module_name> --list 'func1,func2,func3'
```

### Analysis Scripts
- `extract_functions.py` - List all function definitions
- `extract_globals.py` - List global variables
- `count_function_calls.py` - Find most-used functions
- `count_global_usage.py` - Find most-used globals
- `apply_renames.py` - Apply function/global renames from CSV
- `disassemble_function.py` - Auto-extract and annotate disassembly (NEW)

### Binary Analysis & GP Resolution (NEW)

When Ghidra produces incorrect decompilation (e.g., bizarre bitwise ANDs), use these tools to verify against the actual binary:

```bash
# Explode fsn_original_backup.c into individual function files
python3 analysis/explode_fsn.py -i fsn_original_backup.c -o fsn_original.exploded

# Resolve GP offsets and add annotations to exploded files
python3 analysis/resolve_indirect_calls.py \
  --input fsn_original.exploded \
  --output fsn_original.exploded.cleanup \
  --binary fsn.original

# Quick GP offset lookup
python3 analysis/resolve_got.py /tmp/offsets.txt
```

**Output directories:**
- `fsn_original.exploded/` - Raw exploded functions (937 files)
- `fsn_original.exploded.cleanup/` - Annotated with resolved GP offsets
- `fsn_original.exploded.cleanup/GP_MAPPING.md` - Full offset→symbol table
- `fsn_original.exploded.cleanup/INDEX.md` - Function catalog + structure docs

### Verifying Decompilation Against Binary

**See `docs/DECOMPILATION_PROCEDURE.md`** for the complete step-by-step procedure.

Quick reference:
```bash
# Auto-disassemble and annotate a function
python3 analysis/disassemble_function.py FUN_00422f58

# Manual: Find function address from dynamic symbols
mips-linux-gnu-objdump -T fsn.original | grep draw_scene

# Manual: Disassemble specific function
mips-linux-gnu-objdump -d --start-address=0x40cac4 --stop-address=0x40cf00 fsn.original
```

**Known Ghidra decompilation bugs (FIXED):**
- Z coordinate in `draw_directories()` was decompiled as bizarre `& 0xffffffff00000000`
- Actual code: `Z = curcontext[8] + view_offset_z` (simple float addition)
- See `fsn_original.exploded.cleanup/INDEX.md` for full analysis

## Project Structure

```
fsn/
├── fsn.c                      # Original 78K-line decompile (source of truth)
├── fsn_original_backup.c      # Backup with original FUN_ names
├── fsn.original               # Original 1996 SGI MIPS binary (340KB)
├── src/                       # Extracted modules (.c files)
├── include/                   # Headers (.h files)
├── docs/                      # Archaeology reference documentation
│   ├── FSN_ARCHAEOLOGY.md     # Main reference
│   └── appendix/              # Detailed appendices
├── analysis/                  # Python analysis/extraction scripts
│   ├── explode_fsn.py         # Split C file into per-function files
│   ├── resolve_indirect_calls.py  # Resolve GP offsets to symbols
│   ├── resolve_got.py         # Quick GP offset lookup
│   └── ...                    # Other extraction scripts
├── fsn_original.exploded/     # Raw exploded functions (937 files)
├── fsn_original.exploded.cleanup/  # Annotated with resolved GP offsets
│   ├── GP_MAPPING.md          # Full offset→symbol table
│   └── INDEX.md               # Function catalog + structure docs
├── .venv/                     # Python venv (tree-sitter, etc.)
├── .beads/                    # Issue tracker database (bd)
├── build/                     # CMake build directory (out-of-source!)
└── CMakeLists.txt             # Build configuration
```

---

## Original Binary & Reverse Engineering

### The Original Binary

**Location:** `fsn.original` in project root

**File Info:**
```
ELF 32-bit MSB executable, MIPS, MIPS-I version 1 (SYSV)
dynamically linked, interpreter /usr/lib/libc.so.1, stripped
Size: 340,856 bytes
```

This is the original SGI IRIX binary from December 1996. Despite being stripped, it contains valuable data that can be extracted.

### MIPS Cross-Tools (Arch Linux)

Install: `sudo pacman -S mips-linux-gnu-binutils`

**Available tools:**
| Tool | Purpose |
|------|---------|
| `mips-linux-gnu-objdump` | Disassemble, show sections, dump data |
| `mips-linux-gnu-objcopy` | Extract binary sections to files |
| `mips-linux-gnu-readelf` | ELF header/section info |
| `mips-linux-gnu-nm` | Symbol listing (limited for stripped binaries) |

### Binary Section Layout

```bash
mips-linux-gnu-objdump -h fsn.original
```

Key sections:
| Section | VMA | Size | Contents |
|---------|-----|------|----------|
| `.text` | 0x00409440 | 0x32350 | Code (206KB) |
| `.data` | 0x10000000 | 0x9f50 | Initialized data (40KB) |
| `.rodata` | 0x0043b7c0 | ~varies | Read-only strings, constants |

### Extracting Data from the Binary

**Step 1: Find data address** (from Ghidra decompile or symbols)
```bash
# Search for known patterns in the decompile
grep -n "chrtbl" fsn.c
# Result: DAT_10000218 - address 0x10000218
```

**Step 2: Calculate file offset**
```
.data section: VMA=0x10000000, File offset=0x3c000
Target: 0x10000218
File offset = 0x3c000 + (0x10000218 - 0x10000000) = 0x3c218
```

**Step 3: Extract raw bytes**
```bash
# Using objcopy to extract .data section
mips-linux-gnu-objcopy -O binary --only-section=.data fsn.original /tmp/data.bin

# Or using dd for specific offset/size
dd if=fsn.original bs=1 skip=$((0x3c218)) count=$((128*216)) of=/tmp/chrtbl.bin
```

**Step 4: Convert to C code**
```bash
python3 analysis/extract_font.py /tmp/chrtbl.bin > src/vector_font_data.c
```

### Known Data Addresses

| Symbol | Address | Size | Description |
|--------|---------|------|-------------|
| `chrtbl` | 0x10000218 | 27,648 bytes | Vector font data (128 chars × 216 bytes) |
| `curcontext` | 0x10009524 | 4 bytes | Current context pointer |
| `topdir` | 0x10016f00 | 4 bytes | Root directory node pointer |

### Data Format Notes

**Vector Font (`chrtbl`):**
- 128 characters, 216 bytes each (54 int32s)
- Big-endian (MIPS MSB)
- Command format: `{type, x, y}` where:
  - 0 = end of character
  - 1 = move/translate pen
  - 2 = begin line + vertex
  - 3 = continue line
  - 4 = end line + vertex

### Quick Reference Commands

```bash
# Show all sections
mips-linux-gnu-objdump -h fsn.original

# Disassemble a function (if you know address)
mips-linux-gnu-objdump -d --start-address=0x409440 --stop-address=0x409500 fsn.original

# Dump hex at offset
xxd -s 0x3c218 -l 256 fsn.original

# Extract entire .data section
mips-linux-gnu-objcopy -O binary --only-section=.data fsn.original data_section.bin

# Search for strings
strings -t x fsn.original | grep -i "fsn"
```

### Extraction Scripts (in `analysis/`)

| Script | Purpose |
|--------|---------|
| `extract_font.py` | Convert binary font data to C array |

When extracting new data, create a Python script that:
1. Reads big-endian values (`struct.unpack('>i', ...)`)
2. Outputs formatted C code
3. Documents the source address and format

## Implemented Stub Functions (Phase 9-10)

These were implemented in `src/stubs.c` to get FSN running:

| Function | Purpose |
|----------|---------|
| `setup_context_widgets()` | Creates GL context and UI widgets in curcontextwindows |
| `create_panel_component()` | Creates RowColumn control panel |
| `get_panel_value()` | Creates MenuBar for MainWindow |
| `set_status_message()` | Updates status bar label |
| `set_camera_lookat()` | Sets camera target position |
| `clear_current_selection()` | Clears file/directory selection |
| `clear_marked_state()` | Clears file marking state |
| `build_path_string()` | Constructs path from directory node |
| `get_item_screen_coords()` | Gets screen position of item (stub) |
| `get_bytecode_context()` | Returns NULL (SGI bytecode not needed) |
| `eval_bytecode_instruction()` | No-op (SGI bytecode not needed) |

## 64-bit Porting Notes

The original FSN was 32-bit MIPS. Key changes for 64-bit Linux:

1. **Widget pointers**: Use `((Widget *)curcontextwindows)[index]` not byte offsets
2. **Pointer casts**: Avoid `undefined4` for pointers - use proper types
3. **contextwindows structure**: Widget indices, not byte offsets:
   - Index 2: glwidget (GL drawing area)
   - Index 3: contextTopWidget (main form)
   - Index 9: activeButton (button form)
   - Index 10: activeButtonMask (bulletin board)
   - Index 11: locateHighlightName (highlight label)

## Beads Issue Tracking

```bash
bd ready           # See work items ready to start
bd list            # See all issues
bd show <id>       # View issue details
bd dep tree <id>   # View dependency tree
```

## Key Decompilation Artifacts to Preserve

These indicate issues to fix in later phases:
- `halt_baddata()` - Bad instruction recovery (831 calls)
- `unaff_gp` - Unaffected global pointer (MIPS ABI)
- `CONCAT44()` - MIPS register concatenation
- `in_register_*` - Ghidra register tracking
- Magic numbers like `0xe3f48f1` - Xt/Motif resource constants

## Tips for Working Sessions

1. **Build first**: `cmake -B build && cmake --build build --target fsn`
2. **Activate venv**: `source .venv/bin/activate` (for analysis scripts)
3. **Find functions**: `python3 analysis/extract_module_ts.py list <pattern>`
4. **Track progress**: Use beads (`bd`) for multi-session work
5. **Never read entire fsn.c** - Use scripts for context-friendly extraction

## Automated Verification & Graphics Testing (NEW)

To speed up restoration and verify graphics logic without running the full GUI, use these tools:

### 1. Static Verification (Assembly vs C)
Compares the function call sequence and float constants in your C code against the original binary.

```bash
# Basic usage (if function name matches)
source .venv/bin/activate && python3 analysis/verify_function.py draw_child_node src/draw_tree.c

# When C name differs from Binary name (e.g. refactored/renamed)
# FUN_xxxx is the original name/address, --name specifies the C function to check
source .venv/bin/activate && python3 analysis/verify_function.py FUN_0040cad0 src/drawing.c --name redraw_gl_scene
```
**Verdict:** "FAIL" usually means you missed a call or got the order wrong. "PASS" means logic structure matches.

### 2. Graphics Unit Testing (Headless)
Runs a specific function with a **mocked** GL layer that prints calls to stdout instead of rendering.

**Step 1: Create a test case** (e.g., `tests/test_my_func.c`)
```c
#include "../src/my_module.c" // Include source to test static functions

int main() {
    // Setup global state if needed (e.g. curcontext)
    curcontext = context; 
    
    // Setup data
    MyStruct data = { ... };

    // Call function
    my_draw_function(&data);
    return 0;
}
```

**Step 2: Run the test**
```bash
./tools/run_gfx_test.sh tests/test_my_func.c
```

**Output:**
```
call pushmatrix
call translate 10.0 0.0 0.0
call bgnline
call v3f ...
```
Compare this output against the assembly analysis from `verify_function.py`!
