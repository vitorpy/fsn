# IrisGL to OpenGL API Mapping

> Complete reference for SGI IrisGL function translations to modern OpenGL.
> Implementation: `src/fsn_igl.c`

## Buffer Operations

| IrisGL | OpenGL | Notes |
|--------|--------|-------|
| `clear()` | `glClearColor() + glClear(GL_COLOR_BUFFER_BIT)` | Uses current color |
| `zclear()` | `glClearDepth(1.0) + glClear(GL_DEPTH_BUFFER_BIT)` | |
| `czclear(cval, zval)` | `glClearColor() + glClearDepth() + glClear(COLOR\|DEPTH)` | |
| `zbuffer(enable)` | `glEnable/glDisable(GL_DEPTH_TEST)` | |
| `zwritemask(mask)` | `glDepthMask(mask != 0)` | |
| `swapbuffers()` | `glXSwapBuffers(display, window)` | Via glx_swap_current_buffer() |
| `gflush()` | `glFlush()` | |

## Matrix Operations

| IrisGL | OpenGL | Notes |
|--------|--------|-------|
| `mmode(MPROJECTION)` | `glMatrixMode(GL_PROJECTION)` | |
| `mmode(MVIEWING)` | `glMatrixMode(GL_MODELVIEW)` | |
| `mmode(MSINGLE)` | `glMatrixMode(GL_PROJECTION)` | Legacy single-matrix mode |
| `mmode(MTEXTURE)` | `glMatrixMode(GL_TEXTURE)` | |
| `getmmode()` | Returns current mode | Internal state |
| `pushmatrix()` | `glPushMatrix()` | |
| `popmatrix()` | `glPopMatrix()` | |
| `loadmatrix(m)` | `glLoadMatrixf(m)` | With proj base in MSINGLE |
| `multmatrix(m)` | `glMultMatrixf(m)` | |

## Transform Operations

| IrisGL | OpenGL | Notes |
|--------|--------|-------|
| `translate(x, y, z)` | `glTranslatef(x, y, z)` | Variadic macro handles 1-5 args |
| `rotate(angle, axis)` | `glRotatef(angle*0.1, ax, ay, az)` | Angle in tenths of degrees! |
| `scale(x, y, z)` | `glScalef(x, y, z)` | Variadic macro handles 1-5 args |

### Angle Conversion
```c
// IrisGL uses tenths of degrees
rotate(450, 'x');  // 45.0 degrees around X

// Implementation:
void rotate(Angle amount, char axis) {
    float degrees = amount * 0.1f;  // Convert from tenths
    if (axis == 'x') glRotatef(degrees, 1, 0, 0);
    // ...
}
```

## Projection Operations

| IrisGL | OpenGL | Notes |
|--------|--------|-------|
| `perspective(fovy, aspect, near, far)` | `gluPerspective(fovy*0.1, aspect, near, far)` | FOV in tenths |
| `ortho2(l, r, b, t)` | `gluOrtho2D(l, r, b, t)` | |
| `ortho(l, r, b, t, n, f)` | `glOrtho(l, r, b, t, n, f)` | |
| `viewport(l, r, b, t)` | `glViewport(l, b, r-l+1, t-b+1)` | Also sets scissor |

## Color Operations

| IrisGL | OpenGL | Notes |
|--------|--------|-------|
| `color(index)` | `glColor3ub(r, g, b)` | Uses internal colormap |
| `cpack(packed)` | `glColor4ubv(rgba)` | **BGR format!** |
| `RGBcolor(r, g, b)` | `glColor3ub(r, g, b)` | Direct RGB |
| `c3f(rgb)` | `glColor3fv(rgb)` | Float RGB array |
| `c4f(rgba)` | `glColor4fv(rgba)` | Float RGBA array |

### BGR Color Format
```c
// cpack uses BGR, NOT RGB!
// Byte order: 0xAABBGGRR

cpack(0x0000ff);    // RED (not blue!)
cpack(0x00ff00);    // GREEN
cpack(0xff0000);    // BLUE (not red!)
cpack(0x00ffff);    // YELLOW (R+G)
cpack(0xffff00);    // CYAN (G+B)

// Implementation:
void cpack(uint32_t color) {
    fsn_current_color[0] = GetRValue(color);  // & 0xFF
    fsn_current_color[1] = GetGValue(color);  // >> 8 & 0xFF
    fsn_current_color[2] = GetBValue(color);  // >> 16 & 0xFF
    fsn_current_color[3] = GetAValue(color);  // >> 24 & 0xFF
    glColor4ubv(fsn_current_color);
}
```

## Primitive Begin/End

| IrisGL | OpenGL | Notes |
|--------|--------|-------|
| `bgnpolygon()` | `glBegin(GL_POLYGON)` | |
| `endpolygon()` | `glEnd()` | |
| `bgnline()` | `glBegin(GL_LINE_STRIP)` | |
| `endline()` | `glEnd()` | |
| `bgnclosedline()` | `glBegin(GL_LINE_LOOP)` | |
| `endclosedline()` | `glEnd()` | |
| `bgntmesh()` | `glBegin(GL_TRIANGLE_STRIP)` | Triangle mesh |
| `endtmesh()` | `glEnd()` | |
| `bgnqstrip()` | `glBegin(GL_QUAD_STRIP)` | Quad strip |
| `endqstrip()` | `glEnd()` | |
| `bgnpoint()` | `glBegin(GL_POINTS)` | |
| `endpoint()` | `glEnd()` | |

## Vertex Submission

| IrisGL | OpenGL | Notes |
|--------|--------|-------|
| `v2f(v)` | `glVertex2fv(v)` | 2D float |
| `v3f(v)` | `glVertex3fv(v)` | 3D float |
| `v4f(v)` | `glVertex4fv(v)` | 4D float (homogeneous) |
| `v2i(v)` | `glVertex2iv(v)` | 2D int |
| `v2s(v)` | `glVertex2sv(v)` | 2D short |
| `v3i(v)` | `glVertex3iv(v)` | 3D int |
| `v3s(v)` | `glVertex3sv(v)` | 3D short |

## Drawing Primitives

| IrisGL | OpenGL | Notes |
|--------|--------|-------|
| `rect(x1, y1, x2, y2)` | `glBegin(GL_LINE_LOOP) + 4 vertices` | Outline |
| `rectf(x1, y1, x2, y2)` | `glBegin(GL_POLYGON) + 4 vertices` | Filled |
| `recti(x1, y1, x2, y2)` | Same with int coords | |
| `rectfi(x1, y1, x2, y2)` | Same filled with int coords | |
| `arc(x, y, r, start, end)` | Line strip approximation | Uses segments |
| `arcf(x, y, r, start, end)` | Triangle fan approximation | Filled |
| `circ(x, y, r)` | `arc(x, y, r, 0, 3600)` | Full circle outline |
| `circf(x, y, r)` | `arcf(x, y, r, 0, 3600)` | Full circle filled |

## Line Attributes

| IrisGL | OpenGL | Notes |
|--------|--------|-------|
| `linewidth(w)` | `glLineWidth(w)` | |
| `linesmooth(mode)` | `glEnable/Disable(GL_LINE_SMOOTH)` | + blend hints |

## Picking/Selection

| IrisGL | OpenGL | Notes |
|--------|--------|-------|
| `pick(buffer, size)` | `glSelectBuffer() + glRenderMode(GL_SELECT)` | |
| `endpick(buffer)` | `glRenderMode(GL_RENDER)` | Returns hit count |
| `gselect(buffer, size)` | Similar to pick | |
| `endselect(buffer)` | Similar to endpick | |
| `initnames()` | `glInitNames()` | |
| `pushname(name)` | `glPushName(name)` | |
| `popname()` | `glPopName()` | |
| `loadname(name)` | `glLoadName(name)` | |
| `picksize(dx, dy)` | Sets internal pick region | Used with gluPickMatrix |

## Text Operations

| IrisGL | OpenGL | Notes |
|--------|--------|-------|
| `charstr(str)` | Bitmap font rendering | Not fully implemented |
| `cmov(x, y, z)` | `glRasterPos3f(x, y, z)` | Set raster position |
| `cmov2(x, y)` | `glRasterPos2f(x, y)` | 2D raster position |
| `cmov2i(x, y)` | `glRasterPos2i(x, y)` | Integer coords |
| `cmov2s(x, y)` | `glRasterPos2s(x, y)` | Short coords |

## State Queries

| IrisGL | OpenGL | Notes |
|--------|--------|-------|
| `shademodel(FLAT)` | `glShadeModel(GL_FLAT)` | |
| `shademodel(GOURAUD)` | `glShadeModel(GL_SMOOTH)` | |
| `getgdesc(inquiry)` | Various queries | Screen size, depth bits, etc. |
| `glcompat(mode, val)` | Compatibility flags | Mostly ignored |
| `subpixel(enable)` | Subpixel positioning | Hint only |

### getgdesc() Queries

```c
getgdesc(GD_XPMAX)      // Screen width - 1
getgdesc(GD_YPMAX)      // Screen height - 1
getgdesc(GD_ZMAX)       // Max Z value (0x7FFFFF)
getgdesc(GD_BITS_NORM_ZBUFFER)  // Z-buffer bits (24)
// ... many more
```

## Move/Draw 2D

| IrisGL | OpenGL | Notes |
|--------|--------|-------|
| `move2(x, y)` | Sets internal position | Start of line |
| `draw2(x, y)` | `glBegin(GL_LINES) + 2 vertices` | Draw line from move2 |
| `pnt2(x, y)` | `glBegin(GL_POINTS) + 1 vertex` | Single point |
| `pmv2(x, y)` | Sets polygon start | Start of filled polygon |
| `pdr2(x, y)` | Adds vertex to polygon | Continue polygon |

## Pattern Operations

| IrisGL | OpenGL | Notes |
|--------|--------|-------|
| `defpattern(idx, size, data)` | Stores pattern | Internal pattern table |
| `setpattern(idx)` | `glPolygonStipple(pattern)` | Apply pattern |

## Constants Reference

### Matrix Modes
```c
#define MSINGLE      0    // Single matrix (legacy)
#define MPROJECTION  1    // Projection matrix
#define MVIEWING     2    // Modelview matrix
#define MTEXTURE     3    // Texture matrix
```

### Shade Models
```c
#define FLAT     0
#define GOURAUD  1
```

### Buffer Bits
```c
#define BCKBUFFER   0x1
#define FRNTBUFFER  0x2
#define DRAWZBUFFER 0x4
```

### Z Function
```c
#define ZF_NEVER    0
#define ZF_LESS     1
#define ZF_EQUAL    2
#define ZF_LEQUAL   3
#define ZF_GREATER  4
#define ZF_NOTEQUAL 5
#define ZF_GEQUAL   6
#define ZF_ALWAYS   7
```

### Basic Colors (Colormap Mode)
```c
#define BLACK   0
#define RED     1
#define GREEN   2
#define YELLOW  3
#define BLUE    4
#define MAGENTA 5
#define CYAN    6
#define WHITE   7
```

## Implementation Notes

### Not Implemented
- Display lists (`makeobj`, `closeobj`, `callobj`)
- Lighting (`lmdef`, `lmbind`, `n3f`)
- Texturing (`texdef`, `texbind`, `t2f`)
- NURBS surfaces
- Feedback mode

### Partially Implemented
- Font rendering (stub only)
- Some picking modes
- Pattern stippling

### Reference
- Original irix-igl source: `/tmp/irix-igl/src/`
- FSN implementation: `src/fsn_igl.c`, `include/fsn_igl.h`

---

*Based on SGI IrisGL API and irix-igl compatibility layer*
