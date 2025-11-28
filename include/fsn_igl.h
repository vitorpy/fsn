/**
 * fsn_igl.h - FSN IrisGL Compatibility Layer
 *
 * 64-bit safe adaptation of SGI IrisGL types and functions.
 * Based on irix-igl (https://github.com/irixxxx/irix-igl)
 *
 * This provides the SGI GL API that FSN expects, translating
 * to modern OpenGL calls.
 */

#ifndef FSN_IGL_H
#define FSN_IGL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ============================================================
 * Type Definitions (64-bit safe - using int32_t instead of long)
 * Note: Some types conflict with X11, so we don't redefine them
 * ============================================================ */

typedef unsigned char Byte;

/* Boolean - use X11's if available, otherwise define our own */
#ifndef _XtIntrinsic_h
typedef int32_t Boolean;
#endif

typedef char *String;
typedef void *Lstring;

typedef short Angle;
typedef short Screencoord;
typedef short Scoord;
typedef int32_t Icoord;         /* Was: long */
typedef float Coord;
typedef float Matrix[4][4];

typedef unsigned short Colorindex;
typedef unsigned char RGBvalue;

typedef unsigned short Device;

/* Object - conflicts with X11, use GLObject for SGI GL object IDs */
typedef int32_t GLObject;       /* Was: long, renamed to avoid X11 conflict */
typedef int32_t Tag;            /* Was: long */
typedef int32_t Offset;         /* Was: long */

/* Pattern types */
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

/* Font character structures (64-bit safe) */
typedef struct {
    uint32_t value;             /* Was: unsigned long */
    uint32_t offset;            /* Was: unsigned long */
    short w, h;
    short xoff, yoff;
    short xmove, ymove;
} Lfontchar;

typedef struct {
    unsigned short offset;
    Byte w, h;
    char xoff, yoff;
    short width;
} Fontchar;

/* ============================================================
 * Constants
 * ============================================================ */

/* Color names */
#define BLACK           0
#define RED             1
#define GREEN           2
#define YELLOW          3
#define BLUE            4
#define MAGENTA         5
#define CYAN            6
#define WHITE           7

/* Display modes */
#define DMRGB           0
#define DMSINGLE        1
#define DMDOUBLE        2
#define DMRGBDOUBLE     5

/* Buffer bits */
#define BCKBUFFER       0x1
#define FRNTBUFFER      0x2
#define DRAWZBUFFER     0x4

/* Line smoothing */
#define SML_OFF         0x0
#define SML_ON          0x1
#define SML_SMOOTHER    0x2
#define SML_END_CORRECT 0x4

/* Shade models */
#define FLAT            0
#define GOURAUD         1

/* Matrix modes */
#define MSINGLE         0
#define MPROJECTION     1
#define MVIEWING        2
#define MTEXTURE        3

/* Z function */
#define ZF_NEVER        0
#define ZF_LESS         1
#define ZF_EQUAL        2
#define ZF_LEQUAL       3
#define ZF_GREATER      4
#define ZF_NOTEQUAL     5
#define ZF_GEQUAL       6
#define ZF_ALWAYS       7

/* getgdesc() queries */
#define GD_XPMAX                1
#define GD_YPMAX                2
#define GD_XMMAX                3
#define GD_YMMAX                4
#define GD_ZMIN                 5
#define GD_ZMAX                 6
#define GD_BITS_NORM_SNG_RED    7
#define GD_BITS_NORM_SNG_GREEN  8
#define GD_BITS_NORM_SNG_BLUE   9
#define GD_BITS_NORM_DBL_RED    10
#define GD_BITS_NORM_DBL_GREEN  11
#define GD_BITS_NORM_DBL_BLUE   12
#define GD_BITS_NORM_SNG_CMODE  13
#define GD_BITS_NORM_DBL_CMODE  14
#define GD_BITS_NORM_SNG_MMAP   15
#define GD_BITS_NORM_DBL_MMAP   16
#define GD_BITS_NORM_ZBUFFER    17
#define GD_BITS_OVER_SNG_CMODE  18
#define GD_BITS_UNDR_SNG_CMODE  19
#define GD_BITS_PUP_SNG_CMODE   20
#define GD_BITS_NORM_SNG_ALPHA  21
#define GD_BITS_NORM_DBL_ALPHA  22
#define GD_BITS_CURSOR          23
#define GD_OVERUNDER_SHARED     24
#define GD_BLEND                25
#define GD_CIFRACT              26
#define GD_CROSSHAIR_CINDEX     27
#define GD_DITHER               28
#define GD_LINESMOOTH_CMODE     30
#define GD_LINESMOOTH_RGB       31
#define GD_LOGICOP              33
#define GD_NSCRNS               35
#define GD_NURBS_ORDER          36
#define GD_NBLINKS              37
#define GD_NVERTEX_POLY         39
#define GD_PATSIZE_64           40
#define GD_PNTSMOOTH_CMODE      41
#define GD_PNTSMOOTH_RGB        42
#define GD_PUP_TO_OVERUNDER     43
#define GD_READSOURCE           44
#define GD_READSOURCE_ZBUFFER   48
#define GD_STEREO               50
#define GD_SUBPIXEL_LINE        51
#define GD_SUBPIXEL_PNT         52
#define GD_SUBPIXEL_POLY        53
#define GD_TRIMCURVE_ORDER      54
#define GD_WSYS                 55
#define GD_ZDRAW_GEOM           57
#define GD_ZDRAW_PIXELS         58
#define GD_SCRNTYPE             61
#define GD_TEXTPORT             62
#define GD_NMMAPS               63
#define GD_FRAMEGRABBER         64
#define GD_TIMERHZ              66
#define GD_DBBOX                67
#define GD_APTS                 68
#define GD_APTS_BLEND           69
#define GD_APTS_DITH            70

/* ============================================================
 * Function Declarations
 * ============================================================ */

/* Buffer operations */
void clear(void);
void czclear(uint32_t cval, int32_t zval);
void zclear(void);
void zbuffer(Boolean enable);
void zwritemask(uint32_t mask);
void swapbuffers(void);
void gflush(void);

/* Matrix operations */
void pushmatrix(void);
void popmatrix(void);
void loadmatrix(Matrix m);
void multmatrix(Matrix m);
void _translate3(Coord x, Coord y, Coord z);
void rotate(Angle angle, char axis);
void _scale3(Coord x, Coord y, Coord z);

/* Variadic wrapper macros for translate/scale - Ghidra decompiles with wrong arg counts */
#define _ARG_COUNT_IMPL(_1, _2, _3, _4, _5, N, ...) N
#define _ARG_COUNT(...) _ARG_COUNT_IMPL(__VA_ARGS__, 5, 4, 3, 2, 1)

#define _translate1(x) _translate3((x), 0.0f, 0.0f)
#define _translate2(x, y) _translate3((x), (y), 0.0f)
#define _translate4(x, y, z, w) _translate3((x), (y), (z))
#define _translate5(x, y, z, w, v) _translate3((x), (y), (z))

#define _scale1(x) _scale3((x), (x), (x))
#define _scale2(x, y) _scale3((x), (y), 1.0f)
#define _scale4(x, y, z, w) _scale3((x), (y), (z))
#define _scale5(x, y, z, w, v) _scale3((x), (y), (z))

#define _TRANSLATE_SELECT(_1, _2, _3, _4, _5, NAME, ...) NAME
#define translate(...) _TRANSLATE_SELECT(__VA_ARGS__, _translate5, _translate4, _translate3, _translate2, _translate1)(__VA_ARGS__)

#define _SCALE_SELECT(_1, _2, _3, _4, _5, NAME, ...) NAME
#define scale(...) _SCALE_SELECT(__VA_ARGS__, _scale5, _scale4, _scale3, _scale2, _scale1)(__VA_ARGS__)

/* Projection */
void perspective(Angle fovy, float aspect, Coord near, Coord far);
void ortho2(Coord left, Coord right, Coord bottom, Coord top);
void ortho2_ndc(void);  /* No-arg version for 2D text overlay (-1 to 1 bounds) */
void ortho(Coord left, Coord right, Coord bottom, Coord top, Coord near, Coord far);
void viewport(Screencoord left, Screencoord right, Screencoord bottom, Screencoord top);

/* Color */
void color(Colorindex c);
void cpack(uint32_t color);
void RGBcolor(short r, short g, short b);
void c3f(float c[3]);
void c4f(float c[4]);

/* Primitives - Begin/End */
void bgnpolygon(void);
void endpolygon(void);
void bgnline(void);
void endline(void);
void bgnclosedline(void);
void endclosedline(void);
void bgntmesh(void);
void endtmesh(void);
void bgnqstrip(void);
void endqstrip(void);
void bgnpoint(void);
void endpoint(void);

/* Vertex submission */
void v2f(float v[2]);
void v3f(float v[3]);
void v4f(float v[4]);
void v2i(int32_t v[2]);
void v2s(short v[2]);
void v3i(int32_t v[3]);
void v3s(short v[3]);

/* Drawing primitives */
void _rect4(Coord x1, Coord y1, Coord x2, Coord y2);
void _rectf4(Coord x1, Coord y1, Coord x2, Coord y2);
void recti(Icoord x1, Icoord y1, Icoord x2, Icoord y2);
void rectfi(Icoord x1, Icoord y1, Icoord x2, Icoord y2);

/* Variadic wrapper for rect - Ghidra sometimes decompiles with 2 args */
#define _rect2(x1, y1) _rect4((x1), (y1), (x1), (y1))
#define _rect3(x1, y1, x2) _rect4((x1), (y1), (x2), (y1))
#define _RECT_SELECT(_1, _2, _3, _4, NAME, ...) NAME
#define rect(...) _RECT_SELECT(__VA_ARGS__, _rect4, _rect3, _rect2, _rect2)(__VA_ARGS__)
#define rectf(...) _RECT_SELECT(__VA_ARGS__, _rectf4, _rect3, _rect2, _rect2)(__VA_ARGS__)
void arc(Coord x, Coord y, Coord radius, Angle startang, Angle endang);
void arcf(Coord x, Coord y, Coord radius, Angle startang, Angle endang);
void circ(Coord x, Coord y, Coord radius);
void circf(Coord x, Coord y, Coord radius);

/* Line attributes */
void linewidth(short width);
void linesmooth(uint32_t mode);

/* Picking/Selection */
void pick(short *buffer, int32_t bufsize);
int32_t endpick(short *buffer);
int32_t gselect(short *buffer, int32_t bufsize);
int32_t endselect(short *buffer);
void initnames(void);
void pushname(short name);
void popname(void);
void loadname(short name);
void picksize(short deltax, short deltay);

/* Text */
void charstr(String str);
void cmov2(Coord x, Coord y);
void cmov(Coord x, Coord y, Coord z);

/* State */
void shademodel(int32_t mode);
int32_t getgdesc(int32_t inquiry);
void glcompat(int32_t mode, int32_t value);
void subpixel(Boolean enable);

/* Matrix mode */
void mmode(short mode);
short getmmode(void);

/* Patterns */
void defpattern(short index, short size, unsigned short *pattern);
void setpattern(short index);
long getpattern(void);
void makePatterns(void);

/* Move/Draw 2D (for line drawing) */
void move2(Coord x, Coord y);
void draw2(Coord x, Coord y);
void pnt2(Coord x, Coord y);
void pdr2(Coord x, Coord y);
void pmv2(Coord x, Coord y);

/* Raster position */
void cmov2i(Icoord x, Icoord y);
void cmov2s(Scoord x, Scoord y);

#ifdef __cplusplus
}
#endif

#endif /* FSN_IGL_H */
