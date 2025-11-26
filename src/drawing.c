/**
 * drawing.c - Core rendering functions
 *
 * Clean implementation of drawing functions.
 * Original decompiled code preserved in src/original/drawing.c
 *
 * Phase 12: Enable rendering pipeline using IGL layer
 */

#include "drawing.h"
#include "warp.h"
#include "fsn_types.h"
#include "fsn_state.h"
#include "fsn_igl.h"

/**
 * checkRedrawScene - Check if redraw is needed (ported from original)
 *
 * Original (lines 39-47):
 *   if (redraw_flag != '\0') {
 *     redraw_gl_scene();
 *   }
 *   halt_baddata();  // removed
 */
void checkRedrawScene(void)
{
    if (redraw_flag != '\0') {
        redraw_gl_scene();
    }
}

/**
 * draw_scene - Main scene drawing entry point
 *
 * TODO: Port from original - currently has decompilation artifacts
 * For now, delegate to simple clear
 */
void draw_scene(void)
{
    redraw_flag = 0;
    /* TODO: Port actual scene drawing from original */
    draw_warp();  /* Temporary: just clear screen */
}

/**
 * redraw_gl_scene - Called from main loop when redraw_flag is set
 *
 * Original has unaff_gp artifacts - needs manual reconstruction
 * For now, call draw_scene which does basic clear
 */
void redraw_gl_scene(void)
{
    draw_scene();
}
