# FSN Data Structures Reference

> Complete structure layouts used in FSN.

## Rendering Context Structure

The primary context structure accessed via `curcontext` pointer. Refactored in Phase 18 to use a formal C structure with explicit padding for alignment guarantees.

```c
// Size: ~3280 bytes (0xCD0)
// Access: FsnContext* ctx = (FsnContext*)curcontext

typedef struct FsnContext {
    /* +0x00 */ float camera_x;
    /* +0x04 */ float camera_y;
    /* +0x08 */ float camera_z;
    
    /* +0x0c */ int16_t rotation_z;   /* Yaw (tenths of degrees) */
    /* +0x0e */ int16_t rotation_x;   /* Pitch (tenths of degrees) */
    /* +0x10 */ int16_t fov;          /* Field of View (tenths of degrees) */
    
    /* +0x12 */ char _pad_12[2];      /* Align next float to 0x14 */
    
    /* +0x14 */ float sin_z;          /* Precomputed sin(rot_z) */
    /* +0x18 */ float cos_z;          /* Precomputed cos(rot_z) */
    /* +0x1c */ float tan_z;          /* Precomputed tan(rot_z) */
    
    /* +0x20 */ float sin_x;          /* Precomputed sin(rot_x) */
    /* +0x24 */ float cos_x;          /* Precomputed cos(rot_x) */
    /* +0x28 */ float tan_x;          /* Precomputed tan(rot_x) */
    
    /* +0x2c */ char _pad_2c[8];      /* Padding 0x2c -> 0x34 */
    
    /* +0x34 */ float scale_factor;   /* View scale (default 1.0) */
    
    /* +0x38 */ char _pad_38[4];      /* Padding 0x38 -> 0x3c */
    
    /* +0x3c */ int32_t zoom_mode;    /* 0=normal, non-0=zooming */
    
    /* +0x40 */ char _pad_40[0xc4c - 0x40]; /* Huge gap of unknown state */
    
    /* +0xc4c */ int32_t render_time_usec; /* Frame render time */
    
    /* +0xc50 */ char _pad_c50[3];         /* Padding to 0xc53 */
    /* +0xc53 */ char special_mode_flag;   /* Accessed in stubs.c setScales */
} FsnContext;
```

### Access Patterns

**Old (Deprecated):**
```c
float cam_x = *(float *)curcontext;
short rot_x = *(short *)(curcontext + 0xe);
```

**New (Recommended):**
```c
FsnContext *ctx = (FsnContext *)curcontext;
float cam_x = ctx->camera_x;
short rot_x = ctx->rotation_x;
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
