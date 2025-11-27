# FSN Archaeology Reference

> Comprehensive reference for the FSN (File System Navigator) restoration project.
> This document survives context compaction and guides future work.

## 1. Project Overview

**FSN** (File System Navigator) is the iconic 3D file browser from the 1993 film Jurassic Park. Originally developed by Silicon Graphics for IRIX workstations, this project restores it to run on modern Linux.

| Aspect | Original | Target |
|--------|----------|--------|
| Architecture | 32-bit MIPS | 64-bit x86-64 |
| OS | SGI IRIX | Linux |
| Graphics API | IrisGL | OpenGL |
| Toolkit | Motif | Motif (unchanged) |
| Binary Size | ~300KB | ~300KB |

**Current Status:** Phase 14 - Ground/sky rendering works, window displays correctly.

## 2. Codebase Architecture

### 2.1 Module Inventory (81 source files)

| Domain | Files | Key Modules |
|--------|-------|-------------|
| **Graphics/Rendering** | 12 | fsn_igl.c, drawing.c, rendering.c, view_camera.c |
| **File System** | 11 | directory.c, file_ops.c, database.c, fam_monitor.c |
| **UI/Widgets** | 10 | panels.c, menus.c, preferences.c, window.c |
| **Selection/Picking** | 4 | selection.c, picking.c, highlight.c |
| **Navigation** | 4 | zoom.c, position.c, warp.c |
| **Context/State** | 6 | context.c, fsn_state.c, state.c |
| **Data Structures** | 5 | tree.c, datastructures.c, layout.c |
| **Icons/Bytecode** | 4 | interpreter.c, bytecode.c, icons.c |
| **Utilities** | 8 | color.c, string_utils.c, sgi_utils.c |
| **Core** | 4 | main.c, init.c, stubs.c |

See: [appendix/FUNCTIONS.md](appendix/FUNCTIONS.md) for complete function listing.

### 2.2 Key Data Structures

**Context Structure** (`curcontext` pointer, 56+ bytes):
```c
+0x00: float camera_x        // Camera X position
+0x04: float camera_y        // Camera Y position (forward)
+0x08: float camera_z        // Camera Z position (height)
+0x0c: short rotation_z      // Yaw rotation (tenths of degrees)
+0x0e: short rotation_x      // Pitch rotation (tenths of degrees)
+0x10: short fov             // Field of view (tenths of degrees, default 450)
+0x18: float zoom_factor_1   // Zoom multiplier
+0x20: float zoom_factor_2   // Zoom divisor
+0x34: float scale_factor    // View scale (default 1.0)
+0x3c: int zoom_mode         // 0=normal, non-0=zooming
+0xc4c: int render_time_usec // Frame render time
```

**Widget Array** (`curcontextwindows`):
```c
Index 0:  Window ID (X11)
Index 2:  glwidget (GL drawing area)
Index 3:  contextTopWidget (main form)
Index 9:  activeButton (button form)
Index 10: activeButtonMask (bulletin board)
Index 11: locateHighlightName (highlight label)
```

See: [appendix/STRUCTS.md](appendix/STRUCTS.md) for complete structure layouts.

### 2.3 IrisGL to OpenGL Mapping

The `fsn_igl.c` module translates SGI IrisGL calls to modern OpenGL:

| IrisGL | OpenGL | Notes |
|--------|--------|-------|
| `bgnpolygon()` | `glBegin(GL_POLYGON)` | |
| `endpolygon()` | `glEnd()` | |
| `v3f(v)` | `glVertex3fv(v)` | |
| `cpack(c)` | `glColor4ubv()` | **BGR format!** |
| `perspective()` | `gluPerspective()` | FOV in tenths |
| `mmode(m)` | `glMatrixMode()` | MPROJECTION/MVIEWING |
| `pushmatrix()` | `glPushMatrix()` | |
| `rotate(a,'x')` | `glRotatef(a*0.1,1,0,0)` | Tenths of degrees |

See: [appendix/IGL_API.md](appendix/IGL_API.md) for complete mapping.

## 3. Coordinate Systems

### FSN Coordinates (Y-forward)
```
     Z (up)
     |
     |
     +------ X (right)
    /
   /
  Y (forward, into screen)
```

### OpenGL Coordinates (Z-out)
```
     Y (up)
     |
     |
     +------ X (right)
    /
   /
  Z (out of screen, camera looks down -Z)
```

### Conversion Matrix
Apply before FSN transforms in draw_scene():
```c
glRotatef(180.0f, 0.0f, 0.0f, 1.0f);  // Flip upside down
glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);  // FSN Y-forward to GL -Z
```

## 4. Decompilation Artifacts

These Ghidra artifacts indicate areas needing attention:

| Artifact | Count | Meaning | Action |
|----------|-------|---------|--------|
| `halt_baddata()` | 703 | Bad instruction recovery | Remove/stub |
| `unaff_gp` | 31,238 | MIPS global pointer indirect | Refactor to direct |
| `CONCAT44()` | 126 | 32-bit register pair combine | Use 64-bit types |
| `in_register_*` | 112 | Register value tracking | Analyze stack layout |
| `undefined4` | Many | Untyped 32-bit value | Add proper types |
| Magic numbers | ~100 | Xt resource IDs (0xe3f...) | Keep as-is |

## 5. Global State Variables

### Critical Globals (fsn_state.c)

**Application State:**
- `display` - X11 Display connection
- `toplevel` - Top-level shell widget
- `app_context` - Xt application context
- `topdir` - Root of directory tree (NULL = no data)

**Rendering Contexts:**
- `curcontext` - Active rendering context pointer
- `altcontext` - Alternate context
- `curcontextwindows` - Widget array for current context

**Drawing State:**
- `redraw_flag` - Set to trigger scene redraw
- `grid_display_flag` - 0=flat sky, 1=gradient sky

**Colors (BGR format):**
- `sky_color_top` = 0xd58700 (#0087d5 blue)
- `sky_color_bottom` = 0xf0ff91 (#91fff0 cyan)
- `ground_color_near` = 0x1a4f0f (#0f4f1a green)
- `bg_color_grid` = 0x238823 (#238823 dark green)

See: [appendix/GLOBALS.md](appendix/GLOBALS.md) for complete listing.

## 6. Build System

### Quick Reference
```bash
# Configure
cmake -B build -DCMAKE_BUILD_TYPE=Debug

# Build main executable
cmake --build build --target fsn

# Run
./build/fsn

# Other targets
cmake --build build --target test_headers
cmake --build build --target test_igl
```

### Dependencies
**Arch Linux:**
```bash
sudo pacman -S motif libx11 mesa glu
```

**Debian/Ubuntu:**
```bash
sudo apt-get install libmotif-dev libx11-dev libgl1-mesa-dev libglu1-mesa-dev
```

### Source Categories
- **FSN_SOURCES_CLEAN** (30 files) - Compile without issues
- **FSN_SOURCES_NEED_CLEANUP** (53 files) - Have Ghidra artifacts

## 7. Analysis Tools

Located in `/home/vitorpy/fsn/analysis/`:

| Script | Purpose |
|--------|---------|
| `extract_module_ts.py` | **PREFERRED** - Tree-sitter based extraction |
| `extract_functions.py` | List all function definitions |
| `extract_globals.py` | List global variables |
| `count_function_calls.py` | Find most-called functions |
| `count_global_usage.py` | Find most-used globals |
| `apply_renames.py` | Batch rename from CSV |

### Usage
```bash
# Activate Python venv first
source .venv/bin/activate

# List functions matching pattern
python3 analysis/extract_module_ts.py list draw

# Extract functions into module
python3 analysis/extract_module_ts.py module_name func1,func2,func3
```

## 8. Phase Progress

| Phase | Status | Milestone |
|-------|--------|-----------|
| 1-4 | DONE | Foundation, analysis, function renaming |
| 5-9 | DONE | Module extraction, type fixes |
| 10 | DONE | Window appears, widget hierarchy |
| 11 | DONE | GLX context management (GLXwinset) |
| 12-13 | DONE | Drawing functions wired up |
| 14 | DONE | Ground/sky gradient rendering |
| 15 | TODO | Directory tree rendering |
| 16 | TODO | File icons and labels |
| 17 | TODO | Mouse picking/selection |
| 18 | TODO | Navigation and zoom |

## 9. Key Discoveries Log

### Rendering Breakthrough (Session ~Nov 2024)
- **Problem:** GL context works but geometry invisible
- **Root cause:** `mmode()` function was never copied from irix-igl
- **Fix:** Added mmode()/getmmode() to fsn_igl.c
- **Lesson:** Always verify IGL wrapper has all needed functions

### Coordinate System Fix
- **Problem:** Ground plane in sky, inverted view
- **Root cause:** FSN uses Y-forward, OpenGL uses -Z forward
- **Fix:** Two rotations: 180° around Z, then -90° around X
- **Lesson:** Coordinate systems must be explicitly converted

### Color Format
- **Discovery:** cpack() uses BGR, not RGB
- **Example:** 0x0000ff = red (not blue!)
- **Location:** GetRValue/GetGValue/GetBValue macros in fsn_igl.c

### Widget Access Pattern
- **Original:** Byte offsets into fixed-size structure (32-bit MIPS)
- **Fixed:** Widget array indices for 64-bit Linux
- **Pattern:** `((Widget *)curcontextwindows)[index]`

## 10. Quick Reference Card

### Camera Defaults
```c
camera_x = 0.0f
camera_y = -10.0f   // Behind origin
camera_z = 5.0f     // Above ground
rotation_x = -450   // -45 degrees (look down)
rotation_z = 0
fov = 450           // 45 degrees
scale = 1.0f
```

### Draw Scene Pattern
```c
mmode(MPROJECTION);
perspective(fov, 1.0f, 0.1f, 2000.0f);

mmode(MVIEWING);
glLoadIdentity();
pushmatrix();

// Coordinate conversion
glRotatef(180.0f, 0.0f, 0.0f, 1.0f);
glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);

// FSN transforms
scale(1.0f / ctx_scale);
rotate(rot_x, 'x');
rotate(rot_z, 'z');
translate(-cam_x, -cam_y, -cam_z);

// Draw content
draw_directories(0);

popmatrix();
swapbuffers();
```

### Issue Tracking (Beads)
```bash
bd ready           # See ready tasks
bd list            # All issues
bd show <id>       # View issue
bd dep tree <id>   # Dependency tree
```

---

*Last updated: November 2024*
*See appendix/ for detailed reference tables*
