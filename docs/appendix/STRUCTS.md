# FSN Data Structures Reference

> Complete structure layouts used in FSN.

## Rendering Context Structure

The primary context structure accessed via `curcontext` pointer.

```c
// Size: ~3280 bytes (0xCD0)
// Access: char* curcontext

struct fsn_context {
    // +0x000: Camera Position (12 bytes)
    float camera_x;              // +0x00: X position (left/right)
    float camera_y;              // +0x04: Y position (forward/back)
    float camera_z;              // +0x08: Z position (height)

    // +0x00C: Camera Rotation (6 bytes)
    short rotation_z;            // +0x0c: Yaw in tenths of degrees
    short rotation_x;            // +0x0e: Pitch in tenths of degrees
    short fov;                   // +0x10: FOV in tenths (default 450)

    // +0x012: Padding/unknown (6 bytes)
    char  padding_12[6];         // +0x12

    // +0x018: Zoom Parameters (32 bytes)
    float zoom_factor_1;         // +0x18: Zoom multiplier
    char  padding_1c[4];         // +0x1c
    float zoom_factor_2;         // +0x20: Zoom divisor
    char  padding_24[16];        // +0x24

    // +0x034: Scale (8 bytes)
    float scale_factor;          // +0x34: View scale (default 1.0)
    char  padding_38[4];         // +0x38

    // +0x03C: Mode Flags (4 bytes)
    int   zoom_mode;             // +0x3c: 0=normal, non-0=zooming

    // +0x040 to +0xC4B: Various state (3084 bytes)
    char  state_data[3084];      // Unknown fields

    // +0xC4C: Timing (4 bytes)
    int   render_time_usec;      // +0xc4c: Frame time in microseconds
};
```

### Common Access Patterns

```c
// Camera position
float cam_x = *(float *)curcontext;
float cam_y = *(float *)(curcontext + 4);
float cam_z = *(float *)(curcontext + 8);

// Camera rotation
short rot_x = *(short *)(curcontext + 0xe);
short rot_z = *(short *)(curcontext + 0xc);
short fov   = *(short *)(curcontext + 0x10);

// Scale and zoom
float scale = *(float *)(curcontext + 0x34);
int zoom    = *(int *)(curcontext + 0x3c);
```

## Widget Array Structure

The `curcontextwindows` pointer references an array of widgets and window IDs.

```c
// Size: Variable, at least 48 bytes (12 entries × 4 bytes on 32-bit)
// 64-bit: Use pointer array access

struct context_windows {
    Window main_window;          // [0]: X11 window ID
    void*  unknown_1;            // [1]: Unknown
    Widget glwidget;             // [2]: GL drawing area widget
    Widget context_top;          // [3]: Main form widget
    void*  unknown_4_8[5];       // [4-8]: Unknown
    Widget active_button;        // [9]: Button form
    Widget active_mask;          // [10]: Bulletin board
    Widget highlight_name;       // [11]: Highlight label
    // ... more widgets
};
```

### 64-bit Access Pattern

```c
// WRONG (32-bit byte offsets):
Widget w = *(Widget *)(curcontextwindows + 8);  // Don't do this!

// CORRECT (pointer array):
Widget *widgets = (Widget *)curcontextwindows;
Widget glwidget = widgets[2];
Widget top_form = widgets[3];
```

## IrisGL Types (fsn_igl.h)

### Basic Types

```c
// 64-bit safe definitions (int32_t instead of long)
typedef unsigned char  Byte;
typedef int32_t        Boolean;     // Avoid X11 conflict
typedef char*          String;
typedef void*          Lstring;

// Coordinates
typedef short          Angle;       // Tenths of degrees
typedef short          Screencoord;
typedef short          Scoord;
typedef int32_t        Icoord;      // Was: long
typedef float          Coord;
typedef float          Matrix[4][4];

// Colors
typedef unsigned short Colorindex;
typedef unsigned char  RGBvalue;

// Objects
typedef unsigned short Device;
typedef int32_t        GLObject;    // Was: Object (X11 conflict)
typedef int32_t        Tag;
typedef int32_t        Offset;
```

### Pattern Types

```c
#define PATTERN_16      16
#define PATTERN_32      32
#define PATTERN_64      64

#define PATTERN_16_SIZE 16
#define PATTERN_32_SIZE 64
#define PATTERN_64_SIZE 256

typedef unsigned short Pattern16[PATTERN_16_SIZE];
typedef unsigned short Pattern32[PATTERN_32_SIZE];
typedef unsigned short Pattern64[PATTERN_64_SIZE];
typedef unsigned short Linestyle;
```

### Font Structures

```c
// Large font character (64-bit safe)
typedef struct {
    uint32_t value;         // Was: unsigned long
    uint32_t offset;        // Was: unsigned long
    short w, h;             // Width, height
    short xoff, yoff;       // Origin offset
    short xmove, ymove;     // Advance
} Lfontchar;

// Small font character
typedef struct {
    unsigned short offset;
    Byte w, h;
    char xoff, yoff;
    short width;
} Fontchar;
```

## Ghidra Decompilation Types (fsn_types.h)

These types handle Ghidra's output:

```c
// Undefined types (size variants)
typedef unsigned char  undefined;
typedef unsigned short undefined2;
typedef unsigned int   undefined4;
typedef unsigned long  undefined8;

// Boolean
typedef int bool;

// MIPS register concatenation (32-bit pairs)
#define CONCAT44(hi, lo) (((uint64_t)(hi) << 32) | (uint32_t)(lo))

// Byte extraction
#define HIBYTE(x) ((unsigned char)((x) >> 8))
#define LOBYTE(x) ((unsigned char)(x))
```

## Directory Tree Node (Inferred)

> Note: Exact structure not fully recovered. This is inferred from usage.

```c
// Approximate structure for directory tree nodes
struct dir_node {
    char*  name;            // Directory/file name
    char*  full_path;       // Full path string
    int    type;            // File type (dir, file, etc.)
    int    flags;           // State flags
    float  x, y, z;         // 3D position
    float  width, height;   // Visual size
    struct dir_node* parent;
    struct dir_node* children;
    struct dir_node* next;
    // ... additional fields
};
```

## X11/Motif Structures (Standard)

FSN uses standard X11 and Motif structures:

```c
// From <X11/Xlib.h>
typedef struct _XDisplay Display;
typedef unsigned long Window;
typedef unsigned long Pixmap;

// From <Xm/Xm.h>
typedef struct _WidgetRec* Widget;
typedef struct _XtAppStruct* XtAppContext;
typedef void* XtPointer;
typedef char* XmString;

// From <GL/glx.h>
typedef struct __GLXcontextRec* GLXContext;
```

## Color Packing

```c
// BGR format for cpack()
// Stored as: 0xAABBGGRR

// Pack RGB to BGR
#define PACK_BGR(r, g, b) (((b) << 16) | ((g) << 8) | (r))

// Unpack BGR
#define GetRValue(c) ((c) & 0xFF)
#define GetGValue(c) (((c) >> 8) & 0xFF)
#define GetBValue(c) (((c) >> 16) & 0xFF)
#define GetAValue(c) (((c) >> 24) & 0xFF)

// Example: Red = 0x0000FF, Blue = 0xFF0000
```

## Matrix Layout

IrisGL and OpenGL use column-major 4x4 matrices:

```c
typedef float Matrix[4][4];

// Layout:
// [0][0] [1][0] [2][0] [3][0]   // Column 0
// [0][1] [1][1] [2][1] [3][1]   // Column 1
// [0][2] [1][2] [2][2] [3][2]   // Column 2
// [0][3] [1][3] [2][3] [3][3]   // Column 3

// Translation is in column 3:
// [3][0] = tx, [3][1] = ty, [3][2] = tz
```

## File Locations

| Structure | Defined In |
|-----------|------------|
| `fsn_context` | Inferred from fsn.c usage |
| `context_windows` | Inferred from main.c, stubs.c |
| IrisGL types | `include/fsn_igl.h` |
| Ghidra types | `include/fsn_types.h` |
| State types | `include/fsn_state.h` |

---

*Structure layouts inferred from Ghidra decompilation and runtime analysis*
