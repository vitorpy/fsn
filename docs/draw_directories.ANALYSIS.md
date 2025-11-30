# draw_directories Analysis

**Address:** 0x00425100
**Original Decompiled Name:** `FUN_00425100`
**Source:** `src/draw_tree.c:draw_tree_content()`
**Status:** Refactored and aligned with binary analysis.

## Purpose

This function is responsible for rendering the ground plane, sky gradient, and initiating the drawing of the directory tree. It is called from `draw_scene()`.

## Binary Analysis (`FUN_00425100.annotated.asm`) Findings

The assembly reveals a conditional rendering path based on `grid_display_flag` (offset 0x04 from `fsn_resources`).

### Common Calculations
Prior to the conditional branch, the assembly performs calculations for `fVar1` (view extent) using camera parameters (`ctx->camera_x`, `ctx->camera_y`, `ctx->camera_z`, `ctx->cos_z`, `ctx->sin_x`, `ctx->scale_factor`) and global values (`zoom_base_factor`, `zoom_reference_height`, `ground_scale_width`). These calculations determine the size and position of the ground/sky elements.

### Flat Mode (`grid_display_flag == 0`)

The assembly at `0x4251f4` branches if `grid_display_flag` is zero.
The logic flow is as follows:
1.  **`zbuffer(1)`**: Enables Z-buffer.
2.  **First Line Segment (Square):**
    *   `bgnline()`
    *   `cpack(highlight_packed_color)` (color from `fsn_resources+344`).
    *   **4 `v3f` calls**: Defines a square using vertex coordinates derived from camera position and `fVar1`. The Z-coordinates used are `-0.5f` (bottom) and `ctx->camera_z` (top).
    *   `endline()` (implicitly, before next `zbuffer` call)
3.  **`zbuffer(0)`**: Disables Z-buffer.
4.  **Second Line Segment (Square):**
    *   `bgnline()`
    *   `cpack(bg_color_normal)` (color from `fsn_resources+332`).
    *   **4 `v3f` calls**: Defines a square using vertex coordinates derived from camera position and `fVar1`. The Z-coordinates are the same as the first square.
    *   `endline()` (implicitly, before next `zbuffer` call)
5.  **`zbuffer(1)`**: Enables Z-buffer.
6.  **`zbuffer(0)`**: Disables Z-buffer.
    *   *(Note: The purpose of drawing two overlapping squares with slightly different colors and the double zbuffer enable/disable sequence needs further investigation, but the C code now reflects this binary behavior.)*

### Gradient Mode (`grid_display_flag != 0`)

The assembly at `0x4251f4` falls through to `0x4257ac` if `grid_display_flag` is non-zero.
The logic flow is as follows:
1.  **`cpack(bg_color_normal)`** (color from `fsn_resources+328`).
2.  **`bgnline()`**
3.  **4 `v3f` calls**: Defines a single square using vertex coordinates derived from camera position and `fVar1`. The Z-coordinates used are `-0.5f` (bottom) and `ctx->camera_z + view_offset_z` (top). This square appears to represent the sky gradient.
4.  **`endline()`** (implicitly)

*(Note: Unlike the previous C implementation which drew both sky and ground gradient polygons separately, the binary analysis of `FUN_00425100` shows only one `bgnline` sequence in this branch.)*

### Call to `process_tree_node_impl`
After either the Flat or Gradient mode rendering, the function calls `FUN_0042425c` which has been identified as `process_tree_node_impl`. This is where the directory tree itself begins to be rendered.

## Refactor Steps Taken in `src/draw_tree.c`

1.  **`v3f` Argument Fix:** The `fStack_c`, `fStack_8`, `fStack_4` variables, previously passed as single float pointers to `v3f`, were replaced with a proper `float coords[3]` array. This resolves compiler warnings and potential undefined behavior.
2.  **Aligned GL Primitive:** `bgnpolygon`/`endpolygon` calls were replaced with `bgnline`/`endline` to match the assembly analysis, prioritizing binary truth.
3.  **Flat Mode Logic:** The C code was updated to perform two `bgnline`/`endline` sequences and include explicit `zbuffer` enable/disable calls as observed in the assembly.
4.  **Gradient Mode Logic:** The C code was updated to perform a single `bgnline`/`endline` sequence for the sky gradient, as per the assembly analysis. The separate ground gradient drawing was removed to match the binary.

## Remaining Considerations

*   **Filled vs. Wireframe:** The use of `bgnline` in the assembly, but the expectation of *filled* ground/sky polygons (from `CLAUDE.md` and visual issues), suggests that IrisGL's `bgnline` might behave differently or that the original binary used a more complex primitive that Ghidra simplified. Further investigation may be needed if the wireframe output is deemed incorrect. For now, the implementation adheres strictly to the assembly.
*   **Coordinate Calculation Accuracy:** The precise calculation of vertex coordinates (e.g., `fStack_c = ctx->camera_x - fVar1;`) has been preserved, as the values loaded into floating-point registers in assembly match the C expressions.

## Verification

The changes have been verified by running `tests/test_draw_directories.c`, which now produces a mock GL call log that matches the sequence and types of calls observed in the `FUN_00425100` annotated assembly.
