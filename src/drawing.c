/**
 * drawing.c - Core rendering functions
 *
 * Extracted from fsn2.c (fresh Ghidra decompile at line 49266).
 * Original decompiled code preserved in src/original/drawing.c
 *
 * Phase 14: Proper draw_scene implementation
 */

#include "drawing.h"
#include "window.h"
#include "warp.h"
#include "fsn_types.h"
#include "fsn_state.h"
#include "fsn_igl.h"
#include <sys/time.h>
#include <math.h>
#include <stdio.h>

/* Forward declarations for functions we haven't extracted yet */
static void update_camera_state(void);
static void update_visibility(void);
static void setup_zoom_context(void);
static void render_scene_content(int mode);
static void finalize_frame(void);
static void update_frame_timing(void);

/* Stub implementations */
static void update_camera_state(void) { /* TODO: FUN_004294cc */ }
static void update_visibility(void) { /* TODO: FUN_0040bbe0 */ }
static void setup_zoom_context(void) { /* TODO: FUN_0040ca58 */ }
static void render_scene_content(int mode) { /* TODO: FUN_0042510c */ }
static void finalize_frame(void) { /* TODO: FUN_00420b70 */ }
static void update_frame_timing(void) { /* TODO: FUN_0040d804 */ }

/* Zoom parameters - need to add to fsn_state.c */
static float zoom_power_base = 1.02f;
static float zoom_power_divisor = 100.0f;

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
 * Extracted from fsn2.c line 49266 (fresh Ghidra decompile).
 * Uses context structure for camera position/rotation.
 *
 * Context structure offsets (curcontext is char*):
 *   +0x00: float camera_x
 *   +0x04: float camera_y
 *   +0x08: float camera_z
 *   +0x0c: short rotation_z
 *   +0x0e: short rotation_x
 *   +0x18: float zoom_factor_1
 *   +0x20: float zoom_factor_2
 *   +0x34: float scale_factor
 *   +0x3c: int zoom_mode (0 = normal)
 *   +0xc4c: int render_time_usec
 */
void draw_scene(void)
{
    float fVar1;
    struct timeval tStack_start;
    struct timeval tStack_end;

    /* Clear redraw flag */
    redraw_flag = 0;

    /* Set GL context */
    set_main_gl_window();

    /* Get frame start time */
    gettimeofday(&tStack_start, NULL);

    /* Clamp camera X position to bounds */
    fVar1 = *(float *)curcontext;
    if (fVar1 < minx) {
        *(float *)curcontext = (float)minx;
        fVar1 = *(float *)curcontext;
    }
    if ((float)maxx < fVar1) {
        *(float *)curcontext = (float)maxx;
    }

    /* Clamp camera Y position to bounds */
    fVar1 = *(float *)(curcontext + 4);
    if (fVar1 < (float)miny - 50.0f) {
        *(float *)(curcontext + 4) = (float)miny - 50.0f;
        fVar1 = *(float *)(curcontext + 4);
    }
    if ((float)maxy < fVar1) {
        *(float *)(curcontext + 4) = (float)maxy;
    }

    /* Update camera and visibility state */
    update_camera_state();     /* TODO: FUN_004294cc */
    update_visibility();       /* TODO: FUN_0040bbe0 */

    /* Setup zoom context if not in zoom mode */
    if (*(int *)(curcontext + 0x3c) == 0) {
        setup_zoom_context();  /* TODO: FUN_0040ca58 */
    }

    /* Clear the Z-buffer and color buffer */
    if (grid_display_flag == '\0') {
        czclear(bg_color_normal, zbuffer_value);
    } else {
        czclear(bg_color_grid, zbuffer_value);
    }

    /* Setup view transformation matrix */
    pushmatrix();

    /* Apply scale from context */
    scale(1.0f / *(float *)(curcontext + 0x34));

    /* Apply rotations: rotate around X then Z */
    rotate((int)*(short *)(curcontext + 0xe), 'x');  /* 0x78 = 'x' */
    rotate((int)*(short *)(curcontext + 0xc), 'z');  /* 0x7a = 'z' */

    /* Apply zoom scaling if not in zoom mode */
    if (*(int *)(curcontext + 0x3c) == 0) {
        fVar1 = powf(zoom_power_base,
                     (*(float *)(curcontext + 4) -
                      *(float *)(curcontext + 0x18) * *(float *)(curcontext + 0x20) *
                      *(float *)(curcontext + 8)) / zoom_power_divisor);
        scale(fVar1);
    }

    /* Translate to camera position */
    translate(-*(float *)curcontext, -*(float *)(curcontext + 4));

    /* Render the scene content */
    render_scene_content(0);   /* TODO: FUN_0042510c */

    /* Restore matrix */
    popmatrix();

    /* Swap buffers */
    swapbuffers();

    /* Finalize frame */
    finalize_frame();          /* TODO: FUN_00420b70 */
    update_frame_timing();     /* TODO: FUN_0040d804 */

    /* Flush graphics */
    gflush();

    /* Calculate render time */
    gettimeofday(&tStack_end, NULL);
    *(int *)(curcontext + 0xc4c) =
        (int)((tStack_end.tv_usec - tStack_start.tv_usec) +
              (tStack_end.tv_sec - tStack_start.tv_sec) * 1000000);

    /* Clamp render time to 1 second max */
    if (1000000 < *(int *)(curcontext + 0xc4c)) {
        *(int *)(curcontext + 0xc4c) = 1000000;
    }
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
