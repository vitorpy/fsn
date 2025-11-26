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

/* Matrix mode state */
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
    /* This needs to be called via GLX - handled externally by FSN */
    glFlush();
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
    if (fovy < 2) return;

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

void charstr(String str)
{
    /* Text rendering stub - needs proper font integration */
    /* For now, do nothing - FSN will need bitmap font support */
    (void)str;
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
