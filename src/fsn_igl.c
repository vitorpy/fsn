/**
 * fsn_igl.c - FSN IrisGL Compatibility Layer
 *
 * 64-bit safe implementation of SGI IrisGL functions.
 * Simplified from irix-igl for FSN's specific needs.
 *
 * Copyright (c) 2004 Matevz Bradac (original irix-igl)
 * Copyright (c) 2006-2016 Kai-Uwe Bloem (irix-igl updates)
 * Adapted for FSN 64-bit by FSN Restoration Project
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#include "fsn_igl.h"
#include <GL/gl.h>
#include <GL/glu.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

/* Color unpacking macros (RGBA packed as 0xAABBGGRR) */
#define GetRValue(c) ((c) & 0xFF)
#define GetGValue(c) (((c) >> 8) & 0xFF)
#define GetBValue(c) (((c) >> 16) & 0xFF)
#define GetAValue(c) (((c) >> 24) & 0xFF)

/* ============================================================
 * Internal State
 * ============================================================ */

/* Current color for clear() */
static unsigned char fsn_current_color[4] = {0, 0, 0, 255};

/* Picking state */
static short fsn_pick_deltax = 10;
static short fsn_pick_deltay = 10;
static GLuint *fsn_pick_buffer = NULL;
static int fsn_picking = 0;
static float fsn_pick_matrix[16];
static int fsn_viewport[4];

/* Matrix mode state - must be updated via mmode() */
static int fsn_matrix_mode = MSINGLE;

/* Max Z value for depth calculations */
static int32_t fsn_gd_zmax = 0x7FFFFF;  /* 23-bit depth buffer */

/* ============================================================
 * Buffer Operations
 * ============================================================ */

void clear(void)
{
    glClearColor(fsn_current_color[0]/255.0f, fsn_current_color[1]/255.0f,
                 fsn_current_color[2]/255.0f, fsn_current_color[3]/255.0f);
    glClear(GL_COLOR_BUFFER_BIT);
}

void zclear(void)
{
    glClearDepth(1.0);
    glClear(GL_DEPTH_BUFFER_BIT);
}

void czclear(uint32_t cval, int32_t zval)
{
    glClearColor(GetRValue(cval)/255.0f, GetGValue(cval)/255.0f,
                 GetBValue(cval)/255.0f, GetAValue(cval)/255.0f);
    glClearDepth((double)zval / fsn_gd_zmax);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void zbuffer(Boolean enable)
{
    if (enable)
        glEnable(GL_DEPTH_TEST);
    else
        glDisable(GL_DEPTH_TEST);
}

void zwritemask(uint32_t mask)
{
    glDepthMask(mask != 0);
}

void swapbuffers(void)
{
    /* Phase 11: Call GLX swap through glue layer */
    extern void glx_swap_current_buffer(void);
    glx_swap_current_buffer();
}

void gflush(void)
{
    glFlush();
}

/* ============================================================
 * Matrix Operations
 * ============================================================ */

static void fsn_set_matrix_mode(void)
{
    switch (fsn_matrix_mode) {
        case MVIEWING:
            glMatrixMode(GL_MODELVIEW);
            break;
        case MSINGLE:
        case MPROJECTION:
            glMatrixMode(GL_PROJECTION);
            break;
        case MTEXTURE:
            glMatrixMode(GL_TEXTURE);
            break;
    }
}

static void fsn_load_proj_base(void)
{
    if (!fsn_picking)
        glLoadIdentity();
    else
        glLoadMatrixf(fsn_pick_matrix);
}

/* GL: mmode - sets the current matrix mode (from irix-igl) */
void mmode(short mode)
{
    static int debug_count = 0;

    if (mode != MSINGLE && mode != MVIEWING && mode != MPROJECTION && mode != MTEXTURE)
        return;

    fsn_matrix_mode = mode;
    fsn_set_matrix_mode();

    if (debug_count++ < 10) {
        const char *names[] = {"MSINGLE", "MPROJECTION", "MVIEWING", "MTEXTURE"};
        fprintf(stderr, "mmode(%s) -> GL mode switched\n", names[mode]);
    }
}

/* GL: getmmode - returns the current matrix mode */
short getmmode(void)
{
    return fsn_matrix_mode;
}

void pushmatrix(void)
{
    glPushMatrix();
}

void popmatrix(void)
{
    glPopMatrix();
}

void loadmatrix(Matrix m)
{
    if (fsn_matrix_mode == MSINGLE || fsn_matrix_mode == MPROJECTION) {
        fsn_load_proj_base();
        glMultMatrixf((GLfloat *)m);
    } else {
        glLoadMatrixf((GLfloat *)m);
    }
}

void multmatrix(Matrix m)
{
    glMultMatrixf((GLfloat *)m);
}

void _translate3(Coord x, Coord y, Coord z)
{
    glTranslatef(x, y, z);
}

void rotate(Angle amount, char axis)
{
    /* NOTE: amount is in tenths of degrees */
    float degrees = amount * 0.1f;
    if (axis == 'x' || axis == 'X')
        glRotatef(degrees, 1, 0, 0);
    else if (axis == 'y' || axis == 'Y')
        glRotatef(degrees, 0, 1, 0);
    else if (axis == 'z' || axis == 'Z')
        glRotatef(degrees, 0, 0, 1);
}

void _scale3(Coord x, Coord y, Coord z)
{
    glScalef(x, y, z);
}

/* ============================================================
 * Projection
 * ============================================================ */

void perspective(Angle fovy, float aspect, Coord near_, Coord far_)
{
    static int debug_count = 0;
    GLint current_mode;

    if (fovy < 2) return;

    if (debug_count++ < 5) {
        glGetIntegerv(GL_MATRIX_MODE, &current_mode);
        fprintf(stderr, "perspective(): fsn_mode=%d GL_MODE=%s fovy=%d\n",
                fsn_matrix_mode,
                current_mode == GL_PROJECTION ? "PROJECTION" :
                current_mode == GL_MODELVIEW ? "MODELVIEW" : "OTHER",
                fovy);
    }

    if (fsn_matrix_mode == MSINGLE || fsn_matrix_mode == MPROJECTION) {
        fsn_load_proj_base();
        gluPerspective((GLdouble)(0.1 * fovy), (GLdouble)aspect,
                       (GLdouble)near_, (GLdouble)far_);
    } else {
        glMatrixMode(GL_PROJECTION);
        fsn_load_proj_base();
        gluPerspective((GLdouble)(0.1 * fovy), (GLdouble)aspect,
                       (GLdouble)near_, (GLdouble)far_);
        fsn_set_matrix_mode();
    }
}

void ortho2(Coord left, Coord right, Coord bottom, Coord top)
{
    if (fsn_matrix_mode == MSINGLE || fsn_matrix_mode == MPROJECTION) {
        fsn_load_proj_base();
        gluOrtho2D((GLdouble)left, (GLdouble)right,
                   (GLdouble)bottom, (GLdouble)top);
    } else {
        glMatrixMode(GL_PROJECTION);
        fsn_load_proj_base();
        gluOrtho2D((GLdouble)left, (GLdouble)right,
                   (GLdouble)bottom, (GLdouble)top);
        fsn_set_matrix_mode();
    }
    /* Disable lighting in 2D mode */
    glDisable(GL_LIGHTING);
}

void ortho(Coord left, Coord right, Coord bottom, Coord top, Coord near_, Coord far_)
{
    if (fsn_matrix_mode == MSINGLE || fsn_matrix_mode == MPROJECTION) {
        fsn_load_proj_base();
        glOrtho((GLdouble)left, (GLdouble)right, (GLdouble)bottom, (GLdouble)top,
                (GLdouble)near_, (GLdouble)far_);
    } else {
        glMatrixMode(GL_PROJECTION);
        fsn_load_proj_base();
        glOrtho((GLdouble)left, (GLdouble)right, (GLdouble)bottom, (GLdouble)top,
                (GLdouble)near_, (GLdouble)far_);
        fsn_set_matrix_mode();
    }
}

void viewport(Screencoord left, Screencoord right, Screencoord bottom, Screencoord top)
{
    int32_t width = right - left + 1;
    int32_t height = top - bottom + 1;
    if (width <= 0 || height <= 0) return;

    fsn_viewport[0] = left;
    fsn_viewport[1] = bottom;
    fsn_viewport[2] = width;
    fsn_viewport[3] = height;

    glViewport(left, bottom, width, height);
    glScissor(left, bottom, width, height);
    glEnable(GL_SCISSOR_TEST);
}

/* ============================================================
 * Color
 * ============================================================ */

void color(Colorindex c)
{
    /* In colormap mode, map index to RGB */
    /* For simplicity, use a basic color table */
    static const unsigned char colormap[8][3] = {
        {0, 0, 0},       /* BLACK */
        {255, 0, 0},     /* RED */
        {0, 255, 0},     /* GREEN */
        {255, 255, 0},   /* YELLOW */
        {0, 0, 255},     /* BLUE */
        {255, 0, 255},   /* MAGENTA */
        {0, 255, 255},   /* CYAN */
        {255, 255, 255}  /* WHITE */
    };

    if (c < 8) {
        fsn_current_color[0] = colormap[c][0];
        fsn_current_color[1] = colormap[c][1];
        fsn_current_color[2] = colormap[c][2];
        fsn_current_color[3] = 255;
        glColor3ubv(colormap[c]);
    } else {
        /* Extended colormap - just use index as grayscale for now */
        unsigned char gray = c & 0xFF;
        fsn_current_color[0] = gray;
        fsn_current_color[1] = gray;
        fsn_current_color[2] = gray;
        fsn_current_color[3] = 255;
        glColor3ub(gray, gray, gray);
    }
}

void cpack(uint32_t color)
{
    fsn_current_color[0] = GetRValue(color);
    fsn_current_color[1] = GetGValue(color);
    fsn_current_color[2] = GetBValue(color);
    fsn_current_color[3] = GetAValue(color);
    glColor4ubv(fsn_current_color);
}

void RGBcolor(short r, short g, short b)
{
    fsn_current_color[0] = (unsigned char)r;
    fsn_current_color[1] = (unsigned char)g;
    fsn_current_color[2] = (unsigned char)b;
    fsn_current_color[3] = 255;
    glColor3ub(r, g, b);
}

void c3f(float c[3])
{
    glColor3fv(c);
}

void c4f(float c[4])
{
    glColor4fv(c);
}

/* ============================================================
 * Primitives - Begin/End
 * ============================================================ */

void bgnpolygon(void)
{
    glBegin(GL_POLYGON);
}

void endpolygon(void)
{
    glEnd();
}

void bgnline(void)
{
    glBegin(GL_LINE_STRIP);
}

void endline(void)
{
    glEnd();
}

void bgnclosedline(void)
{
    glBegin(GL_LINE_LOOP);
}

void endclosedline(void)
{
    glEnd();
}

void bgntmesh(void)
{
    glBegin(GL_TRIANGLE_STRIP);
}

void endtmesh(void)
{
    glEnd();
}

void bgnqstrip(void)
{
    glBegin(GL_QUAD_STRIP);
}

void endqstrip(void)
{
    glEnd();
}

void bgnpoint(void)
{
    glBegin(GL_POINTS);
}

void endpoint(void)
{
    glEnd();
}

/* ============================================================
 * Vertex Submission
 * ============================================================ */

void v2f(float v[2])
{
    glVertex2fv(v);
}

void v3f(float v[3])
{
    glVertex3fv(v);
}

void v4f(float v[4])
{
    glVertex4fv(v);
}

void v2i(int32_t v[2])
{
    glVertex2i(v[0], v[1]);
}

void v2s(short v[2])
{
    glVertex2s(v[0], v[1]);
}

void v3i(int32_t v[3])
{
    glVertex3i(v[0], v[1], v[2]);
}

void v3s(short v[3])
{
    glVertex3s(v[0], v[1], v[2]);
}

/* ============================================================
 * Drawing Primitives
 * ============================================================ */

void _rect4(Coord x1, Coord y1, Coord x2, Coord y2)
{
    glBegin(GL_LINE_LOOP);
    glVertex2f(x1, y1);
    glVertex2f(x2, y1);
    glVertex2f(x2, y2);
    glVertex2f(x1, y2);
    glEnd();
}

void _rectf4(Coord x1, Coord y1, Coord x2, Coord y2)
{
    glRectf(x1, y1, x2, y2);
}

void recti(Icoord x1, Icoord y1, Icoord x2, Icoord y2)
{
    glBegin(GL_LINE_LOOP);
    glVertex2i(x1, y1);
    glVertex2i(x2, y1);
    glVertex2i(x2, y2);
    glVertex2i(x1, y2);
    glEnd();
}

void rectfi(Icoord x1, Icoord y1, Icoord x2, Icoord y2)
{
    glRecti(x1, y1, x2, y2);
}

static void draw_arc(Coord x, Coord y, Coord radius, Angle startang, Angle endang, int filled)
{
    int i;
    float start_rad = startang * M_PI / 1800.0f;
    float end_rad = endang * M_PI / 1800.0f;
    int segments = (int)(fabsf(end_rad - start_rad) * radius / 5.0f);
    if (segments < 8) segments = 8;
    if (segments > 100) segments = 100;

    float delta = (end_rad - start_rad) / segments;

    if (filled)
        glBegin(GL_TRIANGLE_FAN);
    else
        glBegin(GL_LINE_STRIP);

    if (filled)
        glVertex2f(x, y);

    for (i = 0; i <= segments; i++) {
        float angle = start_rad + i * delta;
        glVertex2f(x + radius * cosf(angle), y + radius * sinf(angle));
    }
    glEnd();
}

void arc(Coord x, Coord y, Coord radius, Angle startang, Angle endang)
{
    draw_arc(x, y, radius, startang, endang, 0);
}

void arcf(Coord x, Coord y, Coord radius, Angle startang, Angle endang)
{
    draw_arc(x, y, radius, startang, endang, 1);
}

void circ(Coord x, Coord y, Coord radius)
{
    arc(x, y, radius, 0, 3600);
}

void circf(Coord x, Coord y, Coord radius)
{
    arcf(x, y, radius, 0, 3600);
}

/* ============================================================
 * Line Attributes
 * ============================================================ */

void linewidth(short width)
{
    glLineWidth((GLfloat)width);
}

void linesmooth(uint32_t mode)
{
    if (mode == SML_OFF)
        glDisable(GL_LINE_SMOOTH);
    else
        glEnable(GL_LINE_SMOOTH);
}

/* ============================================================
 * Picking/Selection
 * ============================================================ */

void picksize(short deltax, short deltay)
{
    fsn_pick_deltax = deltax;
    fsn_pick_deltay = deltay;
}

void pick(short *buffer, int32_t bufsize)
{
    /* Get current cursor position - this needs to be provided externally */
    /* For now, use center of viewport */
    int x = fsn_viewport[0] + fsn_viewport[2] / 2;
    int y = fsn_viewport[1] + fsn_viewport[3] / 2;

    /* Create pick matrix */
    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    gluPickMatrix(x, y, fsn_pick_deltax, fsn_pick_deltay, fsn_viewport);
    glGetFloatv(GL_PROJECTION_MATRIX, fsn_pick_matrix);
    glPopMatrix();
    fsn_set_matrix_mode();

    /* Allocate pick buffer */
    fsn_pick_buffer = (GLuint *)calloc(bufsize, sizeof(GLuint));
    glSelectBuffer(bufsize, fsn_pick_buffer);
    glRenderMode(GL_SELECT);
    glPushName(0);

    fsn_picking = 1;
}

int32_t endpick(short *buffer)
{
    int num = glRenderMode(GL_RENDER);
    int i, j, o, p;

    /* Convert hit records */
    for (i = 0, o = 0, p = 0; i < num; i++) {
        int len = fsn_pick_buffer[o++];
        buffer[p++] = len;
        o += 2;  /* Skip Z information */
        for (j = 0; j < len; j++)
            buffer[p++] = fsn_pick_buffer[o++];
    }

    free(fsn_pick_buffer);
    fsn_pick_buffer = NULL;
    fsn_picking = 0;

    return num;
}

int32_t gselect(short *buffer, int32_t bufsize)
{
    fsn_pick_buffer = (GLuint *)calloc(bufsize, sizeof(GLuint));
    glSelectBuffer(bufsize, fsn_pick_buffer);
    glRenderMode(GL_SELECT);
    glPushName(0);
    return 0;
}

int32_t endselect(short *buffer)
{
    return endpick(buffer);
}

void initnames(void)
{
    glInitNames();
    glPushName(0);
}

void pushname(short name)
{
    glPushName(name);
}

void popname(void)
{
    glPopName();
}

void loadname(short name)
{
    glLoadName(name);
}

/* ============================================================
 * Text (Stub - needs font integration)
 * ============================================================ */

static float fsn_char_pos[3] = {0, 0, 0};

void cmov2(Coord x, Coord y)
{
    fsn_char_pos[0] = x;
    fsn_char_pos[1] = y;
    fsn_char_pos[2] = 0;
    glRasterPos2f(x, y);
}

void cmov(Coord x, Coord y, Coord z)
{
    fsn_char_pos[0] = x;
    fsn_char_pos[1] = y;
    fsn_char_pos[2] = z;
    glRasterPos3f(x, y, z);
}

void cmov2i(Icoord x, Icoord y)
{
    cmov2((Coord)x, (Coord)y);
}

void cmov2s(Scoord x, Scoord y)
{
    cmov2((Coord)x, (Coord)y);
}

/* Simple 8x13 bitmap font data for ASCII 32-126 */
static const unsigned char simple_font[95][13] = {
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, /* 32 space */
    {0x00,0x00,0x18,0x18,0x00,0x00,0x18,0x18,0x18,0x18,0x18,0x18,0x18}, /* 33 ! */
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x36,0x36,0x36,0x36}, /* 34 " */
    {0x00,0x00,0x00,0x66,0x66,0xff,0x66,0x66,0xff,0x66,0x66,0x00,0x00}, /* 35 # */
    {0x00,0x00,0x18,0x7e,0xff,0x1b,0x1f,0x7e,0xf8,0xd8,0xff,0x7e,0x18}, /* 36 $ */
    {0x00,0x00,0x0e,0x1b,0xdb,0x6e,0x30,0x18,0x0c,0x76,0xdb,0xd8,0x70}, /* 37 % */
    {0x00,0x00,0x7f,0xc6,0xcf,0xd8,0x70,0x70,0xd8,0xcc,0xcc,0x6c,0x38}, /* 38 & */
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x1c,0x0c,0x0e}, /* 39 ' */
    {0x00,0x00,0x0c,0x18,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x18,0x0c}, /* 40 ( */
    {0x00,0x00,0x30,0x18,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x18,0x30}, /* 41 ) */
    {0x00,0x00,0x00,0x00,0x99,0x5a,0x3c,0xff,0x3c,0x5a,0x99,0x00,0x00}, /* 42 * */
    {0x00,0x00,0x00,0x18,0x18,0x18,0xff,0xff,0x18,0x18,0x18,0x00,0x00}, /* 43 + */
    {0x00,0x00,0x30,0x18,0x1c,0x1c,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, /* 44 , */
    {0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x00,0x00,0x00,0x00,0x00}, /* 45 - */
    {0x00,0x00,0x00,0x38,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, /* 46 . */
    {0x00,0x60,0x60,0x30,0x30,0x18,0x18,0x0c,0x0c,0x06,0x06,0x03,0x03}, /* 47 / */
    {0x00,0x00,0x3c,0x66,0xc3,0xe3,0xf3,0xdb,0xcf,0xc7,0xc3,0x66,0x3c}, /* 48 0 */
    {0x00,0x00,0x7e,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x78,0x38,0x18}, /* 49 1 */
    {0x00,0x00,0xff,0xc0,0xc0,0x60,0x30,0x18,0x0c,0x06,0x03,0xe7,0x7e}, /* 50 2 */
    {0x00,0x00,0x7e,0xe7,0x03,0x03,0x07,0x7e,0x07,0x03,0x03,0xe7,0x7e}, /* 51 3 */
    {0x00,0x00,0x0c,0x0c,0x0c,0x0c,0x0c,0xff,0xcc,0x6c,0x3c,0x1c,0x0c}, /* 52 4 */
    {0x00,0x00,0x7e,0xe7,0x03,0x03,0x07,0xfe,0xc0,0xc0,0xc0,0xc0,0xff}, /* 53 5 */
    {0x00,0x00,0x7e,0xe7,0xc3,0xc3,0xc7,0xfe,0xc0,0xc0,0xc0,0xe7,0x7e}, /* 54 6 */
    {0x00,0x00,0x30,0x30,0x30,0x30,0x18,0x0c,0x06,0x03,0x03,0x03,0xff}, /* 55 7 */
    {0x00,0x00,0x7e,0xe7,0xc3,0xc3,0xe7,0x7e,0xe7,0xc3,0xc3,0xe7,0x7e}, /* 56 8 */
    {0x00,0x00,0x7e,0xe7,0x03,0x03,0x03,0x7f,0xe7,0xc3,0xc3,0xe7,0x7e}, /* 57 9 */
    {0x00,0x00,0x00,0x38,0x38,0x00,0x00,0x38,0x38,0x00,0x00,0x00,0x00}, /* 58 : */
    {0x00,0x00,0x30,0x18,0x1c,0x1c,0x00,0x00,0x1c,0x1c,0x00,0x00,0x00}, /* 59 ; */
    {0x00,0x00,0x06,0x0c,0x18,0x30,0x60,0xc0,0x60,0x30,0x18,0x0c,0x06}, /* 60 < */
    {0x00,0x00,0x00,0x00,0xff,0xff,0x00,0xff,0xff,0x00,0x00,0x00,0x00}, /* 61 = */
    {0x00,0x00,0x60,0x30,0x18,0x0c,0x06,0x03,0x06,0x0c,0x18,0x30,0x60}, /* 62 > */
    {0x00,0x00,0x18,0x00,0x00,0x18,0x18,0x0c,0x06,0x03,0xc3,0xc3,0x7e}, /* 63 ? */
    {0x00,0x00,0x3f,0x60,0xcf,0xdb,0xd3,0xdd,0xc3,0x7e,0x00,0x00,0x00}, /* 64 @ */
    {0x00,0x00,0xc3,0xc3,0xc3,0xc3,0xff,0xc3,0xc3,0xc3,0x66,0x3c,0x18}, /* 65 A */
    {0x00,0x00,0xfe,0xc7,0xc3,0xc3,0xc7,0xfe,0xc7,0xc3,0xc3,0xc7,0xfe}, /* 66 B */
    {0x00,0x00,0x7e,0xe7,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xe7,0x7e}, /* 67 C */
    {0x00,0x00,0xfc,0xce,0xc7,0xc3,0xc3,0xc3,0xc3,0xc3,0xc7,0xce,0xfc}, /* 68 D */
    {0x00,0x00,0xff,0xc0,0xc0,0xc0,0xc0,0xfc,0xc0,0xc0,0xc0,0xc0,0xff}, /* 69 E */
    {0x00,0x00,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xfc,0xc0,0xc0,0xc0,0xff}, /* 70 F */
    {0x00,0x00,0x7e,0xe7,0xc3,0xc3,0xcf,0xc0,0xc0,0xc0,0xc0,0xe7,0x7e}, /* 71 G */
    {0x00,0x00,0xc3,0xc3,0xc3,0xc3,0xc3,0xff,0xc3,0xc3,0xc3,0xc3,0xc3}, /* 72 H */
    {0x00,0x00,0x7e,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x7e}, /* 73 I */
    {0x00,0x00,0x7c,0xee,0xc6,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x1e}, /* 74 J */
    {0x00,0x00,0xc3,0xc6,0xcc,0xd8,0xf0,0xe0,0xf0,0xd8,0xcc,0xc6,0xc3}, /* 75 K */
    {0x00,0x00,0xff,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0}, /* 76 L */
    {0x00,0x00,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xdb,0xff,0xff,0xe7,0xc3}, /* 77 M */
    {0x00,0x00,0xc7,0xc7,0xcf,0xcf,0xdf,0xdb,0xfb,0xf3,0xf3,0xe3,0xe3}, /* 78 N */
    {0x00,0x00,0x7e,0xe7,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xe7,0x7e}, /* 79 O */
    {0x00,0x00,0xc0,0xc0,0xc0,0xc0,0xc0,0xfe,0xc7,0xc3,0xc3,0xc7,0xfe}, /* 80 P */
    {0x00,0x00,0x3f,0x6e,0xdf,0xdb,0xc3,0xc3,0xc3,0xc3,0xc3,0x66,0x3c}, /* 81 Q */
    {0x00,0x00,0xc3,0xc6,0xcc,0xd8,0xf0,0xfe,0xc7,0xc3,0xc3,0xc7,0xfe}, /* 82 R */
    {0x00,0x00,0x7e,0xe7,0x03,0x03,0x07,0x7e,0xe0,0xc0,0xc0,0xe7,0x7e}, /* 83 S */
    {0x00,0x00,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0xff}, /* 84 T */
    {0x00,0x00,0x7e,0xe7,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3}, /* 85 U */
    {0x00,0x00,0x18,0x3c,0x3c,0x66,0x66,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3}, /* 86 V */
    {0x00,0x00,0xc3,0xe7,0xff,0xff,0xdb,0xdb,0xc3,0xc3,0xc3,0xc3,0xc3}, /* 87 W */
    {0x00,0x00,0xc3,0x66,0x66,0x3c,0x3c,0x18,0x3c,0x3c,0x66,0x66,0xc3}, /* 88 X */
    {0x00,0x00,0x18,0x18,0x18,0x18,0x18,0x18,0x3c,0x3c,0x66,0x66,0xc3}, /* 89 Y */
    {0x00,0x00,0xff,0xc0,0xc0,0x60,0x30,0x7e,0x0c,0x06,0x03,0x03,0xff}, /* 90 Z */
    {0x00,0x00,0x3c,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x3c}, /* 91 [ */
    {0x00,0x03,0x03,0x06,0x06,0x0c,0x0c,0x18,0x18,0x30,0x30,0x60,0x60}, /* 92 \ */
    {0x00,0x00,0x3c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x3c}, /* 93 ] */
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc3,0x66,0x3c,0x18,0x00}, /* 94 ^ */
    {0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, /* 95 _ */
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x38,0x30,0x70}, /* 96 ` */
    {0x00,0x00,0x7f,0xc3,0xc3,0x7f,0x03,0xc3,0x7e,0x00,0x00,0x00,0x00}, /* 97 a */
    {0x00,0x00,0xfe,0xc3,0xc3,0xc3,0xc3,0xfe,0xc0,0xc0,0xc0,0xc0,0xc0}, /* 98 b */
    {0x00,0x00,0x7e,0xc3,0xc0,0xc0,0xc0,0xc3,0x7e,0x00,0x00,0x00,0x00}, /* 99 c */
    {0x00,0x00,0x7f,0xc3,0xc3,0xc3,0xc3,0x7f,0x03,0x03,0x03,0x03,0x03}, /* 100 d */
    {0x00,0x00,0x7f,0xc0,0xc0,0xfe,0xc3,0xc3,0x7e,0x00,0x00,0x00,0x00}, /* 101 e */
    {0x00,0x00,0x30,0x30,0x30,0x30,0x30,0xfc,0x30,0x30,0x30,0x33,0x1e}, /* 102 f */
    {0x7e,0xc3,0x03,0x03,0x7f,0xc3,0xc3,0xc3,0x7e,0x00,0x00,0x00,0x00}, /* 103 g */
    {0x00,0x00,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xfe,0xc0,0xc0,0xc0,0xc0}, /* 104 h */
    {0x00,0x00,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0x18,0x00}, /* 105 i */
    {0x38,0x6c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x00,0x00,0x0c,0x00}, /* 106 j */
    {0x00,0x00,0xc6,0xcc,0xf8,0xf0,0xd8,0xcc,0xc6,0xc0,0xc0,0xc0,0xc0}, /* 107 k */
    {0x00,0x00,0x7e,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x78}, /* 108 l */
    {0x00,0x00,0xdb,0xdb,0xdb,0xdb,0xdb,0xdb,0xfe,0x00,0x00,0x00,0x00}, /* 109 m */
    {0x00,0x00,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xfc,0x00,0x00,0x00,0x00}, /* 110 n */
    {0x00,0x00,0x7c,0xc6,0xc6,0xc6,0xc6,0xc6,0x7c,0x00,0x00,0x00,0x00}, /* 111 o */
    {0xc0,0xc0,0xc0,0xfe,0xc3,0xc3,0xc3,0xc3,0xfe,0x00,0x00,0x00,0x00}, /* 112 p */
    {0x03,0x03,0x03,0x7f,0xc3,0xc3,0xc3,0xc3,0x7f,0x00,0x00,0x00,0x00}, /* 113 q */
    {0x00,0x00,0xc0,0xc0,0xc0,0xc0,0xc0,0xe0,0xfe,0x00,0x00,0x00,0x00}, /* 114 r */
    {0x00,0x00,0xfe,0x03,0x03,0x7e,0xc0,0xc0,0x7f,0x00,0x00,0x00,0x00}, /* 115 s */
    {0x00,0x00,0x1c,0x36,0x30,0x30,0x30,0x30,0xfc,0x30,0x30,0x30,0x00}, /* 116 t */
    {0x00,0x00,0x7e,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0x00,0x00,0x00,0x00}, /* 117 u */
    {0x00,0x00,0x18,0x3c,0x3c,0x66,0x66,0xc3,0xc3,0x00,0x00,0x00,0x00}, /* 118 v */
    {0x00,0x00,0xc3,0xe7,0xff,0xdb,0xc3,0xc3,0xc3,0x00,0x00,0x00,0x00}, /* 119 w */
    {0x00,0x00,0xc3,0x66,0x3c,0x18,0x3c,0x66,0xc3,0x00,0x00,0x00,0x00}, /* 120 x */
    {0xf0,0x60,0x60,0x30,0x18,0x3c,0x66,0x66,0xc3,0x00,0x00,0x00,0x00}, /* 121 y */
    {0x00,0x00,0xff,0x60,0x30,0x18,0x0c,0x06,0xff,0x00,0x00,0x00,0x00}, /* 122 z */
    {0x00,0x00,0x0f,0x18,0x18,0x18,0x38,0xf0,0x38,0x18,0x18,0x18,0x0f}, /* 123 { */
    {0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18}, /* 124 | */
    {0x00,0x00,0xf0,0x18,0x18,0x18,0x1c,0x0f,0x1c,0x18,0x18,0x18,0xf0}, /* 125 } */
    {0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x8f,0xf1,0x60,0x00,0x00,0x00}, /* 126 ~ */
};

void charstr(String str)
{
    if (!str) return;

    glPushAttrib(GL_LIST_BIT | GL_CURRENT_BIT | GL_ENABLE_BIT | GL_LIGHTING_BIT);
    glDisable(GL_LIGHTING);
    glDisable(GL_TEXTURE_2D);

    /* Set pixel storage for our 8-bit wide font */
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

    while (*str) {
        unsigned char c = (unsigned char)*str;
        if (c >= 32 && c <= 126) {
            /* Draw character bitmap */
            glBitmap(8, 13, 0.0f, 2.0f, 9.0f, 0.0f, simple_font[c - 32]);
        } else {
            /* Skip non-printable, just advance */
            glBitmap(0, 0, 0.0f, 0.0f, 9.0f, 0.0f, NULL);
        }
        str++;
    }

    glPopAttrib();
}

/* ============================================================
 * State
 * ============================================================ */

void shademodel(int32_t mode)
{
    if (mode == FLAT)
        glShadeModel(GL_FLAT);
    else
        glShadeModel(GL_SMOOTH);
}

void subpixel(Boolean enable)
{
    /* No direct OpenGL equivalent - ignore */
    (void)enable;
}

void glcompat(int32_t mode, int32_t value)
{
    /* Compatibility mode settings - ignore for modern OpenGL */
    (void)mode;
    (void)value;
}

int32_t getgdesc(int32_t inquiry)
{
    GLint val;

    switch (inquiry) {
        case GD_XPMAX:
            return 4096;  /* Max X resolution */
        case GD_YPMAX:
            return 4096;  /* Max Y resolution */
        case GD_ZMIN:
            return 0;
        case GD_ZMAX:
            return fsn_gd_zmax;
        case GD_BITS_NORM_SNG_RED:
        case GD_BITS_NORM_SNG_GREEN:
        case GD_BITS_NORM_SNG_BLUE:
        case GD_BITS_NORM_DBL_RED:
        case GD_BITS_NORM_DBL_GREEN:
        case GD_BITS_NORM_DBL_BLUE:
            glGetIntegerv(GL_RED_BITS, &val);
            return val;
        case GD_BITS_NORM_ZBUFFER:
            glGetIntegerv(GL_DEPTH_BITS, &val);
            return val;
        case GD_BLEND:
            return 1;
        case GD_DITHER:
            return 1;
        case GD_LINESMOOTH_RGB:
            return 1;
        default:
            return 0;
    }
}

/* ============================================================
 * Patterns (Stub)
 * ============================================================ */

static unsigned short *fsn_patterns[256] = {NULL};
static short fsn_pattern_sizes[256] = {0};

void defpattern(short index, short size, unsigned short *pattern)
{
    if (index < 0 || index >= 256) return;

    int pat_size;
    switch (size) {
        case PATTERN_16: pat_size = PATTERN_16_SIZE; break;
        case PATTERN_32: pat_size = PATTERN_32_SIZE; break;
        case PATTERN_64: pat_size = PATTERN_64_SIZE; break;
        default: return;
    }

    if (fsn_patterns[index])
        free(fsn_patterns[index]);

    fsn_patterns[index] = (unsigned short *)malloc(pat_size * sizeof(unsigned short));
    memcpy(fsn_patterns[index], pattern, pat_size * sizeof(unsigned short));
    fsn_pattern_sizes[index] = size;
}

void setpattern(short index)
{
    if (index == 0) {
        glDisable(GL_POLYGON_STIPPLE);
    } else if (index > 0 && index < 256 && fsn_patterns[index]) {
        /* Convert to OpenGL stipple pattern (32x32) */
        /* For now, just enable stippling with a default pattern */
        glEnable(GL_POLYGON_STIPPLE);
    }
}

/* ============================================================
 * Move/Draw 2D
 * ============================================================ */

static float fsn_current_pos[2] = {0, 0};

void move2(Coord x, Coord y)
{
    fsn_current_pos[0] = x;
    fsn_current_pos[1] = y;
}

void draw2(Coord x, Coord y)
{
    glBegin(GL_LINES);
    glVertex2f(fsn_current_pos[0], fsn_current_pos[1]);
    glVertex2f(x, y);
    glEnd();
    fsn_current_pos[0] = x;
    fsn_current_pos[1] = y;
}

void pnt2(Coord x, Coord y)
{
    glBegin(GL_POINTS);
    glVertex2f(x, y);
    glEnd();
}

void pdr2(Coord x, Coord y)
{
    draw2(x, y);
}

void pmv2(Coord x, Coord y)
{
    move2(x, y);
}
