/**
 * drawing.h - Header for drawing module
 *
 * Clean declarations for implemented drawing functions.
 * Full original declarations preserved in src/original/drawing.c
 */

#ifndef FSN_DRAWING_H
#define FSN_DRAWING_H

#include "fsn_types.h"

/* Core rendering functions (Phase 12) */
void draw_scene(void);
void redraw_gl_scene(void);
void checkRedrawScene(void);
/* draw_warp is in warp.h */

/* TODO: Add more as they are ported from original */

#endif /* FSN_DRAWING_H */
