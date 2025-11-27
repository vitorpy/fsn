# FSN Global Variables Reference

> Complete listing of global state variables used in FSN.

## Context Pointers

| Variable | Type | Purpose |
|----------|------|---------|
| `curcontext` | `char*` | Current rendering context (see structure below) |
| `altcontext` | `char*` | Alternate context for dual-view mode |
| `curcontextwindows` | `void*` | Widget array for current context |
| `altcontextwindows` | `void*` | Widget array for alternate context |
| `curcontextid` | `int` | ID of current context |

### Context Structure Offsets

The `curcontext` pointer references a structure with these offsets:

```c
// Camera Position
+0x00: float camera_x           // X position (left/right)
+0x04: float camera_y           // Y position (forward/back)
+0x08: float camera_z           // Z position (up/down, height)

// Camera Rotation (tenths of degrees)
+0x0c: short rotation_z         // Yaw (turn left/right)
+0x0e: short rotation_x         // Pitch (look up/down)
+0x10: short fov                // Field of view (default 450 = 45°)

// Zoom Parameters
+0x18: float zoom_factor_1      // Zoom multiplier
+0x20: float zoom_factor_2      // Zoom divisor
+0x34: float scale_factor       // View scale (default 1.0)
+0x3c: int   zoom_mode          // 0=normal, non-0=zooming

// Timing
+0xc4c: int render_time_usec    // Frame render time in microseconds
```

### Widget Array Indices (curcontextwindows)

```c
Index 0:  Window xid            // X11 window ID
Index 2:  Widget glwidget       // GL drawing area
Index 3:  Widget contextTopWidget  // Main form container
Index 9:  Widget activeButton   // Button form
Index 10: Widget activeButtonMask  // Bulletin board
Index 11: Widget locateHighlightName // Highlight label
```

**Access pattern (64-bit safe):**
```c
Widget glwidget = ((Widget *)curcontextwindows)[2];
```

## X11/Motif State

| Variable | Type | Purpose |
|----------|------|---------|
| `display` | `Display*` | X11 display connection |
| `toplevel` | `Widget` | Top-level shell widget |
| `app_context` | `XtAppContext` | Xt application context |
| `__Argc` | `int` | Command line argument count |
| `__Argv` | `char**` | Command line arguments |

## Widget Variables

### Main Window Widgets
| Variable | Type | Purpose |
|----------|------|---------|
| `message_widget` | `Widget` | Status bar label |
| `panel_widget` | `Widget` | Control panel container |
| `copy_button_widget` | `Widget` | Copy button |
| `context_top_widget` | `Widget` | Main context form |

### Scale/Slider Widgets
| Variable | Type | Purpose |
|----------|------|---------|
| `zoom_scale_widget` | `Widget` | Zoom slider |
| `vertical_scale_widget` | `Widget` | Vertical scale slider |
| `view_angle_widget` | `Widget` | View angle slider |

### Dialog Widgets
| Variable | Type | Purpose |
|----------|------|---------|
| `preference_panel_shell` | `Widget` | Preferences dialog shell |
| `search_dialog_child` | `Widget` | Search dialog content |
| `search_count_label` | `Widget` | Search result count |

### Legend Widgets
| Variable | Type | Purpose |
|----------|------|---------|
| `legend_widget` | `Widget` | Legend container |
| `legendLabel` | `Widget` | Legend text label |

## File System State

| Variable | Type | Purpose |
|----------|------|---------|
| `topdir` | `void*` | Root of directory tree (NULL = no data) |
| `home_directory` | `char*` | User home directory path |
| `db_filepath` | `char*` | Database file path |
| `current_directory` | `char*` | Current working directory |

## Rendering State

### Flags
| Variable | Type | Purpose |
|----------|------|---------|
| `redraw_flag` | `char` | Non-zero triggers scene redraw |
| `grid_display_flag` | `char` | 0=flat sky, 1=gradient sky |
| `drawing_active_flag` | `char` | Drawing in progress |
| `render_mode_flag` | `char` | Current render mode |

### Counters
| Variable | Type | Purpose |
|----------|------|---------|
| `redraw_counter` | `int` | Redraw request counter |
| `draw_count_1` | `int` | Draw pass counter 1 |
| `draw_count_2` | `int` | Draw pass counter 2 |
| `graphics_state_mode` | `int` | Current graphics state |
| `graphics_render_flags` | `int` | Render flag bits |

## Color Variables (BGR Format)

> **Important:** All colors are stored in BGR format for cpack()!
> Example: 0x0000ff = red, 0xff0000 = blue

### Background Colors
| Variable | Value | RGB Equivalent | Purpose |
|----------|-------|----------------|---------|
| `bg_color_normal` | 0xffe16d | #6de1ff | Normal background (sky) |
| `bg_color_grid` | 0x238823 | #238823 | Grid mode background |
| `cpack_color` | 0xffe16d | #6de1ff | Default cpack color |

### Sky Gradient
| Variable | Value | RGB Equivalent | Purpose |
|----------|-------|----------------|---------|
| `sky_color_flat` | 0xffe16d | #6de1ff | Flat sky color |
| `sky_color_top` | 0xd58700 | #0087d5 | Sky gradient top (blue) |
| `sky_color_bottom` | 0xf0ff91 | #91fff0 | Sky gradient bottom (cyan) |

### Ground Colors
| Variable | Value | RGB Equivalent | Purpose |
|----------|-------|----------------|---------|
| `ground_color_near` | 0x1a4f0f | #0f4f1a | Near ground (green) |

### UI Colors
| Variable | Value | RGB Equivalent | Purpose |
|----------|-------|----------------|---------|
| `current_packed_color` | 0xffffff | #ffffff | Current drawing color |
| `highlight_color` | 0xffffff | #ffffff | Selection highlight |
| `highlight_packed_color` | 0xd6e0c4 | #c4e0d6 | Unselected line color |
| `rect_draw_color` | 0xd2d2d2 | #d2d2d2 | Warp directory color |

## Ground/Sky Parameters

| Variable | Type | Default | Purpose |
|----------|------|---------|---------|
| `ground_scale_width` | `float` | 2000.0 | Ground plane width |
| `ground_offset_forward` | `float` | 500.0 | Forward ground extent |
| `ground_offset_backward` | `float` | 200.0 | Backward ground extent |
| `ground_horizon_z` | `float` | 500.0 | Sky/ground horizon height |
| `zoom_power_base` | `float` | 1.0 | Zoom calculation base |
| `zoom_power_divisor` | `float` | 100.0 | Zoom calculation divisor |

## Z-Buffer

| Variable | Type | Default | Purpose |
|----------|------|---------|---------|
| `zbuffer_value` | `int` | 0x7fffff | Z-buffer clear value (far) |

## Camera Bounds

| Variable | Type | Purpose |
|----------|------|---------|
| `minx` | `int` | Minimum camera X |
| `maxx` | `int` | Maximum camera X |
| `miny` | `int` | Minimum camera Y |
| `maxy` | `int` | Maximum camera Y |

## Motif String Constants

| Variable | Type | Purpose |
|----------|------|---------|
| `blankXmString` | `XmString` | Empty Motif string |
| `emptyXmString` | `XmString` | Alternative empty string |

## GLX State (in stubs.c)

| Variable | Type | Purpose |
|----------|------|---------|
| `glx_shared_context` | `GLXContext` | Shared GL context |
| `current_glx_display` | `Display*` | Current GLX display |
| `current_glx_window` | `Window` | Current GLX window |

## File Location

Most globals are defined in:
- `src/fsn_state.c` - Primary state definitions
- `include/fsn_state.h` - External declarations
- `src/stubs.c` - GLX context state

---

*Original addresses from MIPS binary (DAT_100xxxxx) have been converted to named variables*
