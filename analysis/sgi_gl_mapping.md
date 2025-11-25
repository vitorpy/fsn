# SGI IRIS GL to OpenGL API Mapping

## Overview

This document maps SGI IRIS GL calls found in fsn.c to their OpenGL equivalents.

## Summary Statistics

- Total unique GL function calls: 48
- Known SGI GL calls: 46
- Total GL call sites: 560

## Known SGI GL Calls (with OpenGL equivalents)

| SGI GL Function | Count | OpenGL Equivalent |
|-----------------|-------|-------------------|
| `v3f()` | 88 | glVertex3f() |
| `translate()` | 41 | glTranslatef() |
| `pushmatrix()` | 38 | glPushMatrix() |
| `cpack()` | 37 | glColor4ubv() with packed RGBA |
| `scale()` | 35 | glScalef() |
| `popmatrix()` | 35 | glPopMatrix() |
| `v2f()` | 23 | glVertex2f() |
| `rotate()` | 17 | glRotatef() |
| `endline()` | 15 | glEnd() |
| `bgnline()` | 15 | glBegin(GL_LINE_STRIP) |
| `color()` | 13 | glColor3f() or glIndexi() for color index |
| `bgnpolygon()` | 12 | glBegin(GL_POLYGON) |
| `endpolygon()` | 12 | glEnd() |
| `bgnclosedline()` | 11 | glBegin(GL_LINE_LOOP) |
| `endclosedline()` | 11 | glEnd() |
| `loadname()` | 10 | glLoadName() |
| `clear()` | 10 | glClear(GL_COLOR_BUFFER_BIT) |
| `bgnqstrip()` | 9 | glBegin(GL_QUAD_STRIP) |
| `endqstrip()` | 9 | glEnd() |
| `linewidth()` | 8 | glLineWidth() |
| `v2i()` | 8 | glVertex2i() |
| `ortho2()` | 8 | glOrtho() |
| `rectf()` | 7 | glRectf() or glVertex2f() with GL_QUADS |
| `rect()` | 7 | glRecti() or glVertex2i() with GL_QUADS |
| `initnames()` | 6 | glInitNames() |
| `pushname()` | 6 | glPushName() |
| `popname()` | 5 | glPopName() |
| `endpick()` | 5 | glRenderMode(GL_RENDER) + process selection buffer |
| `pick()` | 5 | glInitNames(), glPushName(), etc. OR raycasting |
| `setpattern()` | 5 | glEnable(GL_POLYGON_STIPPLE) |
| `viewport()` | 5 | glViewport() |
| `zbuffer()` | 4 | glEnable(GL_DEPTH_TEST) |
| `defpattern()` | 3 | glPolygonStipple() or use textures |
| `endtmesh()` | 3 | glEnd() |
| `linesmooth()` | 3 | glEnable(GL_LINE_SMOOTH) |
| `bgntmesh()` | 3 | glBegin(GL_TRIANGLE_STRIP) |
| `swapbuffers()` | 3 | glXSwapBuffers() or glutSwapBuffers() |
| `charstr()` | 2 | Use freetype/ftgl or texture-mapped fonts |
| `gselect()` | 2 | glRenderMode(GL_SELECT) + GLM raycasting (RECOMMENDED) |
| `circf()` | 2 | Custom circle drawing with GL_TRIANGLE_FAN |
| `arcf()` | 2 | Custom arc drawing with GL_TRIANGLE_FAN |
| `arc()` | 2 | Custom arc drawing with GL_LINE_STRIP |
| `endpoint()` | 2 | glEnd() |
| `perspective()` | 2 | gluPerspective() |
| `bgnpoint()` | 2 | glBegin(GL_POINTS) |
| `multmatrix()` | 2 | glMultMatrixf() |

## Other Function Calls (may not be GL)

| Function | Count |
|----------|-------|
| `v2s()` | 5 |
| `endselect()` | 2 |

## Picking System Replacement Strategy

SGI GL picking (gselect/pick/endpick) will be replaced with **GLM-based raycasting**:

### Raycasting Approach

1. **Mouse to ray**: Convert 2D mouse coordinates to 3D ray using inverse projection
2. **Ray-object intersection**: Test ray against scene geometry bounding boxes/meshes
3. **Nearest hit**: Return closest intersected object

### Implementation Requirements

- GLM library for vector/matrix math
- Maintain scene graph with object IDs and bounding volumes
- Ray-AABB (axis-aligned bounding box) intersection tests
- Optional: Ray-triangle intersection for precise picking

## Matrix and Transform Operations

SGI GL matrix stack operations map directly to OpenGL 2.1:
- Use glPushMatrix()/glPopMatrix() for stack management
- Use glTranslatef()/glRotatef()/glScalef() for transforms
- Modern approach: Consider GLM for matrix math if avoiding deprecated functions

## Text Rendering

SGI GL `charstr()` has no direct OpenGL equivalent:
- Option 1: FreeType + texture-mapped fonts (modern)
- Option 2: FTGL library (FreeType + OpenGL)
- Option 3: Bitmap fonts with glBitmap() (simple but limited)

