/**
 * fsn_gl.h
 *
 * OpenGL and GLM wrapper header.
 * Provides OpenGL includes and helper macros for SGI GL compatibility.
 */

#ifndef FSN_GL_H
#define FSN_GL_H

/* OpenGL headers */
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glx.h>

/* C++ compatibility for GLM */
#ifdef __cplusplus
/* GLM - OpenGL Mathematics library */
/* Used for raycasting-based picking system */
#define GLM_FORCE_RADIANS
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/intersect.hpp>
#endif /* __cplusplus */

/*
 * SGI GL Compatibility Macros
 *
 * These provide drop-in replacements for simple SGI GL calls.
 * More complex operations (picking, patterns, etc.) require custom implementations.
 */

/* Matrix operations - direct mappings */
#define pushmatrix()     glPushMatrix()
#define popmatrix()      glPopMatrix()
#define translate(x,y,z) glTranslatef(x,y,z)
#define scale(x,y,z)     glScalef(x,y,z)
#define rotate(a,axis)   glRotatef(a,axis=='x',axis=='y',axis=='z')

/* Vertex operations - direct mappings */
#define v2f(x,y)         glVertex2f(x,y)
#define v2i(x,y)         glVertex2i(x,y)
#define v2s(x,y)         glVertex2s(x,y)
#define v3f(x,y,z)       glVertex3f(x,y,z)
#define v3i(x,y,z)       glVertex3i(x,y,z)
#define n3f(x,y,z)       glNormal3f(x,y,z)

/* Begin/End primitives */
#define bgnpolygon()     glBegin(GL_POLYGON)
#define endpolygon()     glEnd()
#define bgnline()        glBegin(GL_LINE_STRIP)
#define endline()        glEnd()
#define bgnclosedline()  glBegin(GL_LINE_LOOP)
#define endclosedline()  glEnd()
#define bgntmesh()       glBegin(GL_TRIANGLE_STRIP)
#define endtmesh()       glEnd()
#define bgnqstrip()      glBegin(GL_QUAD_STRIP)
#define endqstrip()      glEnd()
#define bgnpoint()       glBegin(GL_POINTS)
#define endpoint()       glEnd()

/* Viewing operations */
#define viewport(x,y,w,h)    glViewport(x,y,w,h)
#define ortho2(l,r,b,t)      glOrtho(l,r,b,t,-1,1)
#define perspective(fov,asp,n,f) gluPerspective(fov,asp,n,f)

/* Buffer operations */
#define clear()          glClear(GL_COLOR_BUFFER_BIT)
#define zclear()         glClear(GL_DEPTH_BUFFER_BIT)
#define zbuffer(b)       ((b)?glEnable:glDisable)(GL_DEPTH_TEST)

/* Attribute operations */
#define linewidth(w)     glLineWidth(w)
#define linesmooth(b)    ((b)?glEnable:glDisable)(GL_LINE_SMOOTH)

/*
 * Color operations - require custom implementation
 * SGI GL used different color models (RGB vs color index)
 */
void sgi_color(int index);           /* Color index mode - needs implementation */
void sgi_cpack(unsigned int rgba);   /* Packed RGBA color */
void sgi_RGBcolor(int r, int g, int b); /* RGB color 0-255 */

/*
 * Rectangle/circle primitives - require custom implementation
 * SGI GL provided these as built-in primitives
 */
void sgi_rect(int x1, int y1, int x2, int y2);
void sgi_rectf(float x1, float y1, float x2, float y2);
void sgi_circf(float x, float y, float radius);
void sgi_arc(float x, float y, float radius, float start_angle, float end_angle);
void sgi_arcf(float x, float y, float radius, float start_angle, float end_angle);

/*
 * Text rendering - requires FreeType or bitmap fonts
 */
void sgi_charstr(const char *str);
void sgi_cmov(float x, float y, float z);

/*
 * Picking system - requires GLM raycasting implementation
 * SGI GL picking API is completely replaced
 * Note: Full picking API defined in fsn_picking.h (C++ only)
 */
#ifdef __cplusplus
typedef struct {
    int object_id;
    float distance;
    glm::vec3 point;
} PickResult;

int  picking_init(void);
void picking_begin(void);
PickResult picking_test_ray(const glm::vec3 &origin, const glm::vec3 &direction);
void picking_end(void);
#else
/* C-compatible picking declarations */
int  picking_init(void);
void picking_begin(void);
void picking_end(void);
#endif /* __cplusplus */

/*
 * Pattern/stipple operations - require implementation
 */
void sgi_defpattern(int pattern_id, int size, unsigned short *pattern);
void sgi_setpattern(int pattern_id);

#endif /* FSN_GL_H */
