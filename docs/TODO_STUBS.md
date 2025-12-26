# FSN Stub Functions - Extraction TODO List

This document tracks stub functions that need to be extracted from the original
decompiled code (`fsn.c` or `fsn_original.exploded.v2/`).

## Extraction Priority

- **P0**: Required for core functionality (crashes/broken features)
- **P1**: Required for user-visible features
- **P2**: Polish/optimization
- **P3**: Low priority / rarely used

---

## File Operations (`src/file_ops.c`)

| Function | Original Address | Priority | Description |
|----------|------------------|----------|-------------|
| `FUN_00413580` | 0x00413580 | P1 | Find file in directory by name (uses twalk) |
| `FUN_00433e24` | 0x00433e24 | P2 | XtVaSetValues wrapper for widget state |
| `FUN_00413610` | 0x00413610 | P1 | File lookup by name |
| `FUN_004144ec` | 0x004144ec | P1 | Queue node for redraw |
| `FUN_004184c8` | 0x004184c8 | P2 | Cleanup/notify callback after file stop |

**Notes:**
- `fileExecuting`, `fileDeleted`, `fileStoppedExecuting` are extracted but depend on these stubs
- Original uses SGI's `sproc()` for process spawning - may need Linux adaptation

---

## Core Stubs (`src/stubs.c`)

### GLX/Context Management

| Function | Priority | Status | Notes |
|----------|----------|--------|-------|
| `GLXwinset` | P0 | Implemented | Works with current GLX setup |
| `glx_swap_current_buffer` | P0 | Implemented | Uses glXSwapBuffers |
| `glx_reset_context_wrapper` | P1 | Stub | Needs extraction |
| `glx_switch_context_wrapper` | P1 | Stub | Multi-context support |
| `gl_picking_setup_wrapper` | P0 | Implemented | Sets up GL pick matrix |

### Directory/State Management

| Function | Priority | Status | Notes |
|----------|----------|--------|-------|
| `update_directory_state` | P1 | Stub | Directory tree updates |
| `refresh_directory` | P1 | Stub | Rescan directory contents |
| `clear_selection` | P1 | Stub | Clear file selection |
| `update_selection` | P1 | Stub | Update selection display |
| `save_state` | P2 | Stub | Persist view state |
| `restore_state` | P2 | Stub | Restore view state |

### UI Callbacks (Batch 4)

| Function | Priority | Status | Notes |
|----------|----------|--------|-------|
| `quit_application` | P0 | Implemented | Clean exit |
| `pref_panel_map_callback` | P2 | Stub | Preferences panel |
| `pref_color_callback` | P2 | Stub | Color preferences |
| `toggle_pair_callback` | P2 | Stub | Toggle buttons |
| `color_select_callback` | P2 | Stub | Color picker |
| `rgb_scale_callback` | P2 | Stub | RGB sliders |
| `hsv_scale_callback` | P2 | Stub | HSV sliders |

### GL Widget Callbacks

| Function | Priority | Status | Notes |
|----------|----------|--------|-------|
| `glwidget_expose_callback` | P0 | Implemented | Triggers redraw |
| `glwidget_resize_callback` | P0 | Implemented | Updates viewport |
| `glwidget_init_callback` | P0 | Implemented | GLX context setup |
| `gl_input_callback` | P0 | Partial | Basic event handling |
| `zoom_gl_init_callback` | P1 | Stub | Zoom animation init |
| `search_gl_init_callback` | P2 | Stub | Search results display |

### Navigation/Camera

| Function | Priority | Status | Notes |
|----------|----------|--------|-------|
| `set_camera_lookat` | P0 | Implemented | Sets camera target |
| `calc_h_angle` | P1 | Stub | Horizontal angle calc |
| `calc_v_angle` | P1 | Stub | Vertical angle calc |
| `init_view_transform` | P0 | Implemented | View matrix setup |
| `init_camera_state` | P0 | Implemented | Camera state init |
| `movehoriz` | P1 | Partial | Horizontal movement |
| `gl_motion_handler` | P1 | Partial | Mouse motion |
| `gl_button_handler` | P1 | Partial | Mouse buttons |
| `reset_eye` | P1 | Stub | Reset camera position |

### Path/Selection Utilities

| Function | Priority | Status | Notes |
|----------|----------|--------|-------|
| `build_path_string` | P0 | Implemented | Build full path from node |
| `get_item_screen_coords` | P1 | Stub | Screen position of item |
| `clear_current_selection` | P0 | Implemented | Clear selection |
| `clear_marked_state` | P1 | Stub | Clear marked files |

### Bytecode (SGI-specific)

| Function | Priority | Status | Notes |
|----------|----------|--------|-------|
| `get_bytecode_context` | P3 | Stub | SGI bytecode - not needed |
| `eval_bytecode_instruction` | P3 | Stub | SGI bytecode - not needed |

---

## Drawing Stubs (`src/drawing.c`)

| Function | Priority | Status | Notes |
|----------|----------|--------|-------|
| `setup_zoom_context` | P1 | Stub | Zoom animation context |
| `check_visibility` | P0 | Implemented | Frustum culling - in checks.c |
| `draw_visibility` | P0 | Implemented | Node visibility check - via FUN_00425c80 |

---

## Picking Stubs (`src/picking.c`)

| Function | Priority | Status | Notes |
|----------|----------|--------|-------|
| `process_pick_item` | P0 | Implemented | Pick traversal |
| `pickWarp` | P0 | Implemented | Warp mode picking |
| `pick_file_item` | P1 | Partial | File action dispatch |
| `draw_second_pick` | P1 | Implemented | Secondary pick overlay |
| `pickPointer` | P1 | Partial | Pointer tracking |

---

## Warp/Zoom Stubs (`src/warp.c`, `src/zoom.c`)

| Function | Priority | Status | Notes |
|----------|----------|--------|-------|
| `findzoom_warp` | P0 | Implemented | Warp zoom target |
| `warpZoomToFile` | P0 | Implemented | Zoom to file |
| `pushzoom` | P0 | Implemented | Push zoom state |
| `popzoom` | P0 | Implemented | Pop zoom state |
| `zoomto` | P0 | Implemented | Zoom transition |
| `zoomToSelection` | P1 | Implemented | Zoom to selected item |
| `findzoom` | P1 | Implemented | Find zoom target |
| `shrinkDueToZoom` | P2 | Stub | Adjust for zoom level |
| `draw_warp` | P1 | **TODO** | Warp transition render |
| `do_warp` | P1 | **TODO** | Execute warp |

---

## Position/Layout Stubs (`src/position.c`)

| Function | Priority | Status | Notes |
|----------|----------|--------|-------|
| `recalc_layout` | P1 | Stub | Recalculate tree layout |
| `save_position` | P2 | Stub | Save camera position |
| `restore_position` | P2 | Stub | Restore camera position |

---

## How to Extract

1. Find function in `fsn_original.exploded.v2/FUN_XXXXXXXX.c`
2. Check BADDATA ANALYSIS comments for assembly insights
3. Copy AS-IS, preserving decompilation artifacts
4. Replace `halt_baddata()` with proper `return`
5. Add stub declarations for any FUN_ dependencies
6. Test compilation

Example:
```bash
# Find original function
cat fsn_original.exploded.v2/FUN_00413580.c

# Check for GP offset resolutions
grep "0x00413580" fsn_original.exploded.v2/GP_MAPPING.md
```

---

## Modern Implementations (Non-Original)

These functions have modern implementations instead of original extraction:

| Function | File | Reason |
|----------|------|--------|
| `copy_file_item` | file_ops.c | Original not decompiled clearly |
| `ensure_tmp_dir` | file_ops.c | Helper for copy_file_item |

---

## Completed Extractions

| Function | File | Date | Notes |
|----------|------|------|-------|
| `editCB` | edit.c | 2025-12-26 | Uses $WINEDITOR |
| `fileExecuting` | file_ops.c | 2025-12-26 | File exec flags |
| `fileDeleted` | file_ops.c | 2025-12-26 | Deletion handler |
| `fileStoppedExecuting` | file_ops.c | 2025-12-26 | Exec cleanup |
| `pickLandscape` | landscape.c | 2025-12-26 | Landscape picking |
| `findzoom_landscape` | landscape.c | 2025-12-26 | Landscape zoom |
| `landscapeZoomToFile` | landscape.c | 2025-12-26 | Zoom to file |
| `check_visibility` | checks.c | 2025-12-26 | Visibility culling entry |
| `FUN_00425c80` | checks.c | 2025-12-26 | draw_visibility - gselect testing |
| `FUN_00425bd8` | checks.c | 2025-12-26 | markAllVisible - recursive mark |
| `FUN_004259dc` | checks.c | 2025-12-26 | Node visibility traverse |
| `FUN_0040bfa0` | checks.c | 2025-12-26 | Perspective setup for visibility |

---

## Next Priority Items

1. **Camera Controls** (`gl_motion_handler`, `gl_button_handler`) - P1
2. **Warp Rendering** (`draw_warp`, `do_warp`) - P1
3. **Directory Updates** (`update_directory_state`, `refresh_directory`) - P1
4. **Position/Layout** (`recalc_layout`, `save_position`, `restore_position`) - P1
