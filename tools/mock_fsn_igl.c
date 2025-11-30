/**
 * mock_fsn_igl.c - Mock implementation of FSN IGL for testing
 *
 * Prints GL calls to stdout instead of executing them.
 * Used for verifying rendering logic against binary assembly.
 */

#include "fsn_igl.h"
#include <stdio.h>
#include <stdarg.h>

/* Helper to print formatted output */
static void log_call(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    vprintf(fmt, args);
    printf("\n");
    va_end(args);
}

/* ============================================================
 * Matrix Operations
 * ============================================================ */

void pushmatrix(void) {
    log_call("call pushmatrix");
}

void popmatrix(void) {
    log_call("call popmatrix");
}

void loadmatrix(Matrix m) {
    log_call("call loadmatrix [...]");
}

void multmatrix(Matrix m) {
    log_call("call multmatrix [...]");
}

void _translate3(Coord x, Coord y, Coord z) {
    log_call("call translate %.6g %.6g %.6g", x, y, z);
}

void rotate(Angle angle, char axis) {
    log_call("call rotate %d '%c'", angle, axis);
}

void _scale3(Coord x, Coord y, Coord z) {
    log_call("call scale %.6g %.6g %.6g", x, y, z);
}

void mmode(short mode) {
    log_call("call mmode %d", mode);
}

short getmmode(void) {
    return 0;
}

/* ============================================================
 * Projection
 * ============================================================ */

void perspective(Angle fovy, float aspect, Coord near, Coord far) {
    log_call("call perspective %d %.6g %.6g %.6g", fovy, aspect, near, far);
}

void ortho2(Coord left, Coord right, Coord bottom, Coord top) {
    log_call("call ortho2 %.6g %.6g %.6g %.6g", left, right, bottom, top);
}

void ortho2_ndc(void) {
    log_call("call ortho2_ndc");
}

void ortho(Coord left, Coord right, Coord bottom, Coord top, Coord near, Coord far) {
    log_call("call ortho %.6g %.6g %.6g %.6g %.6g %.6g", left, right, bottom, top, near, far);
}

void viewport(Screencoord left, Screencoord right, Screencoord bottom, Screencoord top) {
    log_call("call viewport %d %d %d %d", left, right, bottom, top);
}

void fix_irisgl_coordinate_mismatch(void) {
    log_call("call fix_irisgl_coordinate_mismatch");
}

/* ============================================================
 * Color
 * ============================================================ */

void color(Colorindex c) {
    log_call("call color %d", c);
}

void cpack(uint32_t color) {
    log_call("call cpack 0x%08x", color);
}

void RGBcolor(short r, short g, short b) {
    log_call("call RGBcolor %d %d %d", r, g, b);
}

void c3f(float c[3]) {
    log_call("call c3f %.6g %.6g %.6g", c[0], c[1], c[2]);
}

void c4f(float c[4]) {
    log_call("call c4f %.6g %.6g %.6g %.6g", c[0], c[1], c[2], c[3]);
}

/* ============================================================
 * Primitives
 * ============================================================ */

void bgnpolygon(void) { log_call("call bgnpolygon"); }
void endpolygon(void) { log_call("call endpolygon"); }
void bgnline(void) { log_call("call bgnline"); }
void endline(void) { log_call("call endline"); }
void bgnclosedline(void) { log_call("call bgnclosedline"); }
void endclosedline(void) { log_call("call endclosedline"); }
void bgntmesh(void) { log_call("call bgntmesh"); }
void endtmesh(void) { log_call("call endtmesh"); }
void bgnqstrip(void) { log_call("call bgnqstrip"); }
void endqstrip(void) { log_call("call endqstrip"); }
void bgnpoint(void) { log_call("call bgnpoint"); }
void endpoint(void) { log_call("call endpoint"); }

/* ============================================================
 * Vertex Submission
 * ============================================================ */

void v2f(float v[2]) { log_call("call v2f %.6g %.6g", v[0], v[1]); }
void v3f(float v[3]) { log_call("call v3f %.6g %.6g %.6g", v[0], v[1], v[2]); }
void v4f(float v[4]) { log_call("call v4f %.6g %.6g %.6g %.6g", v[0], v[1], v[2], v[3]); }
void v2i(int32_t v[2]) { log_call("call v2i %d %d", v[0], v[1]); }
void v2s(short v[2]) { log_call("call v2s %d %d", v[0], v[1]); }
void v3i(int32_t v[3]) { log_call("call v3i %d %d %d", v[0], v[1], v[2]); }
void v3s(short v[3]) { log_call("call v3s %d %d %d", v[0], v[1], v[2]); }

/* ============================================================
 * Drawing Primitives
 * ============================================================ */

void _rect4(Coord x1, Coord y1, Coord x2, Coord y2) {
    log_call("call rect %.6g %.6g %.6g %.6g", x1, y1, x2, y2);
}

void _rectf4(Coord x1, Coord y1, Coord x2, Coord y2) {
    log_call("call rectf %.6g %.6g %.6g %.6g", x1, y1, x2, y2);
}

void recti(Icoord x1, Icoord y1, Icoord x2, Icoord y2) {
    log_call("call recti %d %d %d %d", x1, y1, x2, y2);
}

void rectfi(Icoord x1, Icoord y1, Icoord x2, Icoord y2) {
    log_call("call rectfi %d %d %d %d", x1, y1, x2, y2);
}

void arc(Coord x, Coord y, Coord radius, Angle startang, Angle endang) {
    log_call("call arc %.6g %.6g %.6g %d %d", x, y, radius, startang, endang);
}
void arcf(Coord x, Coord y, Coord radius, Angle startang, Angle endang) {
    log_call("call arcf %.6g %.6g %.6g %d %d", x, y, radius, startang, endang);
}
void circ(Coord x, Coord y, Coord radius) {
    log_call("call circ %.6g %.6g %.6g", x, y, radius);
}
void circf(Coord x, Coord y, Coord radius) {
    log_call("call circf %.6g %.6g %.6g", x, y, radius);
}

/* ============================================================
 * Line Attributes / Other
 * ============================================================ */

void linewidth(short width) { log_call("call linewidth %d", width); }
void linesmooth(uint32_t mode) { log_call("call linesmooth %d", mode); }
void shademodel(int32_t mode) { log_call("call shademodel %d", mode); }
void glcompat(int32_t mode, int32_t value) {}
void subpixel(Boolean enable) {}
int32_t getgdesc(int32_t inquiry) { return 1; }

/* ============================================================
 * Picking
 * ============================================================ */

void pick(short *buffer, int32_t bufsize) { log_call("call pick"); }
int32_t endpick(short *buffer) { log_call("call endpick"); return 0; }
int32_t gselect(short *buffer, int32_t bufsize) { log_call("call gselect"); return 0; }
int32_t endselect(short *buffer) { log_call("call endselect"); return 0; }
void initnames(void) { log_call("call initnames"); }
void pushname(short name) { log_call("call pushname %d", name); }
void popname(void) { log_call("call popname"); }
void loadname(short name) { log_call("call loadname %d", name); }
void picksize(short deltax, short deltay) {}
void set_pick_coords(int x, int y) {}

/* ============================================================
 * Text
 * ============================================================ */

void charstr(String str) {
    log_call("call charstr \"%s\"", str ? str : "(null)");
}

void cmov2(Coord x, Coord y) {
    log_call("call cmov2 %.6g %.6g", x, y);
}

void cmov(Coord x, Coord y, Coord z) {
    log_call("call cmov %.6g %.6g %.6g", x, y, z);
}

void cmov2i(Icoord x, Icoord y) {}
void cmov2s(Scoord x, Scoord y) {}

/* ============================================================
 * Buffer / Clear
 * ============================================================ */

void clear(void) { log_call("call clear"); }
void czclear(uint32_t cval, int32_t zval) { log_call("call czclear 0x%x %d", cval, zval); }
void zclear(void) { log_call("call zclear"); }
void zbuffer(Boolean enable) { log_call("call zbuffer %d", enable); }
void zwritemask(uint32_t mask) { log_call("call zwritemask %x", mask); }
void swapbuffers(void) { log_call("call swapbuffers"); }
void gflush(void) { log_call("call gflush"); }

/* ============================================================
 * Patterns
 * ============================================================ */

void defpattern(short index, short size, unsigned short *pattern) {
    log_call("call defpattern %d %d [...]", index, size);
}
void setpattern(short index) {
    log_call("call setpattern %d", index);
}
long getpattern(void) { return 0; }
void makePatterns(void) {}

/* ============================================================
 * 2D Drawing
 * ============================================================ */
void move2(Coord x, Coord y) { log_call("call move2 %.6g %.6g", x, y); }
void draw2(Coord x, Coord y) { log_call("call draw2 %.6g %.6g", x, y); }
void pnt2(Coord x, Coord y) { log_call("call pnt2 %.6g %.6g", x, y); }
void pdr2(Coord x, Coord y) { log_call("call pdr2 %.6g %.6g", x, y); }
void pmv2(Coord x, Coord y) { log_call("call pmv2 %.6g %.6g", x, y); }
