# FSN Project - Claude Code Instructions

## Project Overview

FSN (File System Navigator) restoration project - converting a 78K-line Ghidra MIPS/IRIX decompile into a functional modern Linux binary. This is the 3D file browser seen in Jurassic Park (1993).

## Critical Rules

### DO NOT:
- **Rewrite decompiled functions** - Extract AS-IS, preserving all artifacts
- Manually copy/paste large code blocks from fsn.c - use extraction scripts
- "Clean up" `halt_baddata()` calls, magic numbers, or GP indirect calls yet
- Create new implementations of functions - we're modularizing, not rewriting

### DO:
- **Use extraction scripts** in `analysis/` for all module extraction
- Preserve decompilation artifacts (they indicate problem areas to fix later)
- Track work in beads (`bd`) for complex multi-session tasks
- Follow the phased approach in README.md

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
├── analysis/          # Python analysis/extraction scripts
├── .venv/             # Python venv (tree-sitter, etc.)
├── .beads/            # Issue tracker database (bd)
└── build/             # CMake build directory
```

## Current Phase: Modularization

We're extracting functions from fsn.c into logical modules while preserving all decompilation artifacts.

### Modules Already Extracted:
- `color.c` - Color space conversions (IRIS GL)
- `main.c` - Entry point and main loop
- `init.c` - Initialization functions
- `fsn_state.c` - Global state definitions
- `fam_monitor.c` - File monitoring (FAM -> inotify adaptation)

### Acceptable Platform Adaptations:
- FAM (SGI) -> inotify (Linux)
- IRIS GL -> OpenGL (future phase)

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

## Build (Not Yet Working)

```bash
mkdir build && cd build
cmake ..
# make  # Disabled until modularization complete
```

Dependencies: libmotif-dev, libx11-dev, libgl1-mesa-dev, libglu1-mesa-dev

## Tips for Working Sessions

1. **Activate venv first**: `source .venv/bin/activate`
2. **Find functions**: `python3 analysis/extract_module_ts.py list <pattern>`
3. **Extract functions**: `python3 analysis/extract_module_ts.py <module> func1,func2,...`
4. **Track progress**: Use beads (`bd`) for multi-session work
5. **Never read entire fsn.c** - Use scripts for context-friendly extraction
