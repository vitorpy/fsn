# FSN Rendering Pipeline - Function Verification Status

This document tracks all functions in the rendering pipeline from `redraw_gl_scene` downstream,
documenting which have been verified against the binary and which still contain Ghidra corruption.

## Call Tree Summary

```
redraw_gl_scene (src/drawing.c:408) ✅ CLEAN
└── draw_scene (src/drawing.c:259) ✅ VERIFIED against assembly
    ├── update_camera (FUN_004294cc)
    ├── update_visibility (FUN_0040bbe0)
    ├── setup_zoom_context (FUN_0040ca58)
    ├── czclear, pushmatrix, scale, rotate, translate
    ├── draw_directories (src/drawing.c:58) ✅ CLEAN
    │   ├── v3f, bgnpolygon, endpolygon, cpack, shademodel
    │   └── process_tree_node → draw_tree.c
    │       ├── draw_child_node (src/draw_tree.c:180)
    │       │   ├── pushname/popname
    │       │   ├── draw_file_block (box_geometry.c)
    │       │   ├── draw_file_icon (vector_font.c)
    │       │   └── spotlight (spotlight.c)
    │       └── process_tree_node_impl (src/draw_tree.c:254)
    ├── popmatrix
    ├── swapbuffers
    ├── finalize_frame (FUN_00420b70)
    └── update_timing (FUN_0040d804)
```

## Verification Status by File

### ✅ VERIFIED (Binary analysis complete, Ghidra bugs fixed)

| File | Function | Address | Status |
|------|----------|---------|--------|
| src/drawing.c | draw_scene | 0x0040cac4 | ✅ Rewritten from assembly |
| src/drawing.c | draw_directories | 0x00425100 | ✅ Fixed Ghidra corruption |
| src/drawing.c | redraw_gl_scene | ~0x0040cb40 | ✅ Clean wrapper |
| src/file_ops.c | draw_file | 0x00422f58 | ✅ Fixed 3 corruption bugs |
| analysis/draw_scene.ANALYSIS.md | - | - | ✅ Full documentation |
| analysis/FUN_00422f58.ANALYSIS.md | - | - | ✅ Full documentation |

### ✅ CLEAN REIMPLEMENTATIONS (No Ghidra code)

| File | Functions | Notes |
|------|-----------|-------|
| src/draw_tree.c | process_tree_node_impl, draw_child_node, draw_directory, draw_dir | Reimplemented cleanly |
| src/box_geometry.c | draw_file_block, draw_3d_block | Clean geometry code |
| src/vector_font.c | draw_file_icon, draw_stroked_text | Extracted font data from binary |
| src/spotlight.c | spotlight | Clean implementation |
| src/fsn_igl.c | IGL wrapper functions | Clean OpenGL wrappers |

### ⚠️ NEEDS VERIFICATION (Contains Ghidra corruption patterns)

Files with `0xffffffff00000000` or `CONCAT44` artifacts:

| File | Count | Priority | Functions Affected |
|------|-------|----------|-------------------|
| context.c | 20 | HIGH | Context manipulation - affects transforms |
| io.c | 19 | LOW | I/O operations - not rendering |
| warp.c | 16 | HIGH | Camera warping/animation |
| rendering.c | 11 | HIGH | Core rendering utilities |
| view_camera.c | 10 | HIGH | Camera positioning |
| tree.c | 8 | MEDIUM | Tree structure ops |
| layout.c | 6 | MEDIUM | Layout calculations |
| highlight.c | 6 | MEDIUM | Selection highlighting |
| init.c | 5 | LOW | Initialization (runs once) |
| display.c | 5 | HIGH | Display state management |
| picking.c | 3 | MEDIUM | Mouse picking |
| icons.c | 3 | LOW | Icon rendering |
| gl_utils.c | 3 | LOW | GL utility stubs |
| directory.c | 3 | MEDIUM | Directory operations |
| zoom.c | 2 | HIGH | Zoom calculations |
| state.c | 2 | MEDIUM | State management |
| position.c | 2 | LOW | Position calculations |
| calc.c | 2 | MEDIUM | Math calculations |
| resources.c | 1 | LOW | Resource management |
| overview.c | 1 | MEDIUM | Overview window |
| landscape.c | 1 | MEDIUM | Landscape rendering |
| items.c | 1 | MEDIUM | Item operations |

**Total: 131 corruption instances across 22 files**

## Ghidra Corruption Pattern Reference

### Pattern 1: Float AND operation (most common)
```c
// CORRUPTED:
(double)((ulonglong)(double)value & 0xffffffff00000000)

// CORRECT: This should be a simple float value, likely 1.0f or the variable itself
1.0f  // or just: value
```

### Pattern 2: CONCAT44 shift (register concatenation)
```c
// CORRUPTED:
(double)CONCAT44((int)((ulonglong)(double)var >> 0x20), constant)

// CORRECT: Should be a float constant or simple expression
*(float *)(resource + offset)  // or a float constant
```

### Pattern 3: extraout_var shift
```c
// CORRUPTED:
(float)((double)((ulonglong)extraout_var << 0x20) / ...)

// CORRECT: Should be 1.0f (the division result)
1.0f / scale_factor
```

## Priority Fix Order

Based on rendering impact:

1. **CRITICAL** (blocks correct rendering):
   - context.c - Camera transforms
   - view_camera.c - Camera positioning
   - rendering.c - Core rendering

2. **HIGH** (affects visual quality):
   - warp.c - Animation warps
   - display.c - Display state
   - zoom.c - Zoom calculations

3. **MEDIUM** (affects interaction):
   - picking.c - Mouse picking
   - highlight.c - Selection display
   - tree.c, directory.c - Data operations

4. **LOW** (non-critical):
   - io.c, init.c, icons.c, resources.c

## Next Steps

1. For each HIGH priority file:
   - Extract disassembly for affected functions
   - Create annotated assembly with GP mapping
   - Identify correct float operations
   - Fix corruption patterns

2. Test after each fix:
   - Rebuild: `cmake --build build --target fsn`
   - Verify rendering still works
   - Check for visual improvements

3. Document each fix in analysis/*.ANALYSIS.md

## GP Offset Quick Reference

Key GP offsets from draw_scene analysis (for verifying other functions):

| Offset | Symbol | Notes |
|--------|--------|-------|
| -30340 (0x7684) | curcontext_ptr | Current view context |
| -30172 (0x75dc) | fsn_resources | Resource struct |
| -31560 (0x7b48) | pushmatrix | |
| -31528 (0x7b28) | popmatrix | |
| -31584 (0x7b60) | translate | 3-arg! |
| -31596 (0x7b6c) | scale | 3-arg |
| -31592 (0x7b68) | rotate | |
| -31564 (0x7b5c) | czclear | |
| -31572 (0x7b54) | swapbuffers | |
| -31644 (0x7b9c) | cpack | |
| -30908 (0x78bc) | update_camera | FUN_004294cc |
| -31460 (0x7ae4) | update_visibility | FUN_0040bbe0 |
| -31032 (0x7938) | draw_directories | FUN_00425100 |

## History

- 2024-01: draw_scene verified and rewritten from assembly
- 2024-01: draw_file (FUN_00422f58) fixed - 3 corruption bugs
- 2024-01: draw_directories cleaned in drawing.c
