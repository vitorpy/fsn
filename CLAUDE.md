# FSN Project - Claude Code Instructions

## ⚠️ CORE PRINCIPLE: RESTORATION, NOT REIMPLEMENTATION ⚠️

**This is a RESTORATION project. We preserve and extract original code - we do NOT rewrite it.**

- **SAVE AS MUCH ORIGINAL CODE AS POSSIBLE** - Every line from fsn.c is valuable
- **Extract functions AS-IS** - Keep Ghidra artifacts (`halt_baddata`, `unaff_gp`, etc.)
- **Never substitute your own implementation** - Even if you "know a better way"
- **The decompiled code IS the source of truth** - It represents the original SGI binary
- **Cleanup comes AFTER functionality** - Make it work first, clean later (separate pass)

When in doubt: **EXTRACT, DON'T REWRITE**

---

## Project Overview

FSN (File System Navigator) restoration project - converting a 78K-line Ghidra MIPS/IRIX decompile into a functional modern Linux binary. This is the 3D file browser seen in Jurassic Park (1993).

## Current Status: Phase 14 Complete - Rendering Works!

The FSN application now:
- Compiles and links successfully (296KB binary)
- Launches and displays a Motif window with GL rendering
- Shows the iconic FSN landscape (ground plane + sky gradient)

### What Works:
- X11/Motif initialization and window creation
- Widget hierarchy (MainWindow, MenuBar, Forms, DrawingArea)
- GLX context management and buffer swapping
- IrisGL compatibility layer (mmode, perspective, transforms)
- Ground plane and gradient sky rendering
- Coordinate system conversion (FSN Y-forward to OpenGL -Z)

### Still Needs Work:
- Directory tree visualization (3D file blocks)
- File icons and labels
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

## Project Structure

```
fsn/
├── fsn.c              # Original 78K-line decompile (source of truth)
├── src/               # Extracted modules (.c files)
├── include/           # Headers (.h files)
├── docs/              # Archaeology reference documentation
│   ├── FSN_ARCHAEOLOGY.md  # Main reference
│   └── appendix/      # Detailed appendices
├── analysis/          # Python analysis/extraction scripts
├── .venv/             # Python venv (tree-sitter, etc.)
├── .beads/            # Issue tracker database (bd)
├── build/             # CMake build directory (out-of-source!)
└── CMakeLists.txt     # Build configuration
```

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
