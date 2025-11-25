# FSN Module Boundaries

## Overview

This document defines the module structure for Phase 4 (Modularization).
The 78K-line monolithic fsn.c will be split into these logical modules.

## Module Summary

| Module | Functions | Description |
|--------|-----------|-------------|
| datastructures.c | 62 | Tree management and data structures |
| filesystem.c | 74 | Directory scanning and file operations |
| graphics_gl.c | 171 | OpenGL rendering and 3D visualization |
| main.c | 0 | Initialization, event loop, command-line parsing |
| picking.c | 18 | Object selection and interaction |
| ui_motif.c | 412 | X11/Motif user interface components |
| utility.c | 1521 | Utility functions and helpers |

**Total functions**: 2258

## Detailed Module Breakdown

### datastructures.c

**Purpose**: Tree management and data structures

**Functions** (62):

- `void free()`
- `void calloc()`
- `void realloc()`
- `void malloc()`
- `int getgroups()`
- `void FUN_0040ae2c()`
- `void dirToPath()`
- `void if()`
- `void FUN_00411b30()`
- `void if()`
- `void FUN_00411b84()`
- `void FUN_00411c04()`
- `void if()`
- `void if()`
- `void FUN_00411d68()`
- `void if()`
- `void if()`
- `void if()`
- `void if()`
- `void if()`
- ... and 42 more

### filesystem.c

**Purpose**: Directory scanning and file operations

**Functions** (74):

- `int closedir()`
- `void readdir()`
- `void bsearch()`
- `void opendir()`
- `int lstat()`
- `int statvfs()`
- `int stat()`
- `int access()`
- `void qsort()`
- `void fwrite()`
- `void fread()`
- `short pmap_getport()`
- `int select()`
- `void exit()`
- `void _exit()`
- `void wait()`
- `int fstat()`
- `void FUN_004138e8()`
- `void if()`
- `void if()`
- ... and 54 more

### graphics_gl.c

**Purpose**: OpenGL rendering and 3D visualization

**Functions** (171):

- `void rectf()`
- `void v2f()`
- `void rect()`
- `void bgnpolygon()`
- `void v3f()`
- `void endpolygon()`
- `void circf()`
- `void color()`
- `void cpack()`
- `void scale()`
- `void rotate()`
- `void translate()`
- `void pushmatrix()`
- `void popmatrix()`
- `void getmcolor()`
- `void FUN_0040bc28()`
- `void FUN_0040bc64()`
- `void FUN_0040bce8()`
- `void FUN_0040bdb4()`
- `void check_visibility()`
- ... and 151 more

### main.c

**Purpose**: Initialization, event loop, command-line parsing

**Functions** (0):


### picking.c

**Purpose**: Object selection and interaction

**Functions** (18):

- `void loadname()`
- `void popname()`
- `void initnames()`
- `void endpick()`
- `void pick()`
- `void picksize()`
- `void pushname()`
- `void gselect()`
- `void endselect()`
- `void if()`
- `void draw_files()`
- `void if()`
- `void if()`
- `void if()`
- `void FUN_00426244()`
- `void findzoom()`
- `void FUN_00426d1c()`
- `void pickPointer()`

### ui_motif.c

**Purpose**: X11/Motif user interface components

**Functions** (412):

- `void XmCreateText()`
- `void XmTextGetString()`
- `void XmTextSetEditable()`
- `void XtAppAddInput()`
- `void XtRemoveInput()`
- `void XmGetColorCalculation()`
- `void XmCreateScrolledText()`
- `void XmTextSetString()`
- `void XmListDeletePos()`
- `void XtDestroyWidget()`
- `void XmCreateRadioBox()`
- `void XmCreateErrorDialog()`
- `void XmCreatePanedWindow()`
- `void XmCreateScrolledWindow()`
- `void XmMessageBoxGetChild()`
- `void XmStringGetLtoR()`
- `void XmFileSelectionBoxGetChild()`
- `void XtRealloc()`
- `void XmListAddItem()`
- `void XmCreateInformationDialog()`
- ... and 392 more

### utility.c

**Purpose**: Utility functions and helpers

**Functions** (1521):

- `float fabsf()`
- `double pow()`
- `int strcmp()`
- `void strncpy()`
- `void time()`
- `void strchr()`
- `void XAllocColor()`
- `int strncmp()`
- `void XInternAtom()`
- `double atof()`
- `void XGetTextProperty()`
- `double sqrt()`
- `void bzero()`
- `void defpattern()`
- `void XAllocColorCells()`
- `void XStoreColor()`
- `void strcpy()`
- `void XMapWindow()`
- `void XRaiseWindow()`
- `void XCreateFontCursor()`
- ... and 1501 more

## Module Dependencies

Preliminary dependency analysis:

```
main.c
  └─> ui_motif.c (creates UI)
  └─> graphics_gl.c (initializes GL)
  └─> filesystem.c (scans directories)
  └─> datastructures.c (manages tree)

ui_motif.c
  └─> graphics_gl.c (OpenGL widget)
  └─> filesystem.c (file dialogs)
  └─> picking.c (mouse events)

graphics_gl.c
  └─> picking.c (selection rendering)
  └─> datastructures.c (scene graph)

picking.c
  └─> datastructures.c (object lookup)
  └─> graphics_gl.c (render state)

filesystem.c
  └─> datastructures.c (populates tree)
```

## Header Files

Each module will have a corresponding header:

- `include/datastructures.h` - Public API for datastructures.c
- `include/filesystem.h` - Public API for filesystem.c
- `include/graphics_gl.h` - Public API for graphics_gl.c
- `include/main.h` - Public API for main.c
- `include/picking.h` - Public API for picking.c
- `include/ui_motif.h` - Public API for ui_motif.c
- `include/utility.h` - Public API for utility.c

Common headers:
- `include/fsn_types.h` - Shared data structures
- `include/fsn_config.h` - Configuration constants
- `include/fsn_gl.h` - OpenGL/GLM includes and wrappers
- `include/fsn_motif.h` - X11/Motif includes and wrappers

## Next Steps (Phase 4)

1. Create header files with proper declarations
2. Extract functions from fsn.c to respective module files
3. Resolve inter-module dependencies
4. Update CMakeLists.txt with new source files
5. Verify compilation and linking
