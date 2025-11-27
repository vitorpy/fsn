/**
 * drawing.c - Core rendering functions
 *
 * Extracted from fsn2.c (fresh Ghidra decompile at line 49266).
 * Original decompiled code preserved in src/original/drawing.c
 *
 * Phase 14: Proper draw_scene implementation
 */

#include "drawing.h"
#include "draw_tree.h"
#include "block_render.h"
#include "box_geometry.h"
#include "window.h"
#include "warp.h"
#include "fsn_types.h"
#include "fsn_state.h"
#include "fsn_igl.h"
#include <sys/time.h>
#include <math.h>
#include <stdio.h>
#include <GL/gl.h>
#include <GL/glu.h>

/* Forward declarations for functions we haven't extracted yet */
static void update_camera_state(void);
static void update_visibility(void);
static void setup_zoom_context(void);
static void finalize_frame(void);
static void update_frame_timing(void);

/* Stub implementations */
static void update_camera_state(void) { /* TODO: FUN_004294cc */ }
static void update_visibility(void) { /* TODO: FUN_0040bbe0 */ }
static void setup_zoom_context(void) { /* TODO: FUN_0040ca58 */ }
static void finalize_frame(void) { /* TODO: FUN_00420b70 */ }
static void update_frame_timing(void) { /* TODO: FUN_0040d804 */ }

/**
 * draw_directories - Draw the ground plane and sky gradient
 *
 * Extracted from fsn2.c line 62810 (clean, no halt_baddata).
 * Draws the iconic FSN landscape using Gouraud shading.
 *
 * param_1: char mode flag (0 = draw ground plane, non-0 = skip)
 */
static void draw_directories(char param_1)
{
    float fVar1;
    double dVar2;
    float vertex[3];  /* x, y, z for v3f */
    static int call_count = 0;

    draw_count_1 = 0;
    draw_count_2 = 0;

    /* Debug output (first few calls) */
    if (call_count++ < 5) {
        int zoom_mode = *(int *)(curcontext + 0x3c);
        fprintf(stderr, "draw_directories: call %d, grid_flag=%d, zoom_mode=%d, topdir=%p\n",
                call_count, (int)grid_display_flag, zoom_mode, (void*)topdir);
    }

    /* Only draw when not in zoom mode */
    if (*(int *)(curcontext + 0x3c) == 0) {
        /* Draw test ground plane even without topdir */
        if (topdir == NULL && call_count <= 3) {
            fprintf(stderr, "  topdir is NULL - drawing test ground\n");
            /* Simple green ground plane */
            cpack(0x228822);  /* Dark green */
            bgnpolygon();
            vertex[0] = -50.0f; vertex[1] = -50.0f; vertex[2] = -0.5f;
            v3f(vertex);
            vertex[0] = 50.0f; vertex[1] = -50.0f; vertex[2] = -0.5f;
            v3f(vertex);
            vertex[0] = 50.0f; vertex[1] = 50.0f; vertex[2] = -0.5f;
            v3f(vertex);
            vertex[0] = -50.0f; vertex[1] = 50.0f; vertex[2] = -0.5f;
            v3f(vertex);
            endpolygon();

            /* Simple sky gradient - light blue quad high up */
            cpack(0xffd587);  /* Light blue (BGR) */
            bgnpolygon();
            vertex[0] = -100.0f; vertex[1] = 20.0f; vertex[2] = 50.0f;
            v3f(vertex);
            vertex[0] = 100.0f; vertex[1] = 20.0f; vertex[2] = 50.0f;
            v3f(vertex);
            vertex[0] = 100.0f; vertex[1] = 20.0f; vertex[2] = 0.0f;
            v3f(vertex);
            vertex[0] = -100.0f; vertex[1] = 20.0f; vertex[2] = 0.0f;
            v3f(vertex);
            endpolygon();
        }

        /* Only draw original ground if topdir exists (we have directory data) */
        if (topdir != NULL) {
            if (param_1 == '\0') {
                /* Calculate ground plane scale based on zoom */
                float scale_factor = *(float *)(curcontext + 0x34);
                if (scale_factor < 0.001f) scale_factor = 1.0f;  /* Guard against zero */
                fVar1 = powf(zoom_power_base,
                             (*(float *)(curcontext + 4) -
                              *(float *)(curcontext + 0x18) * *(float *)(curcontext + 0x20) *
                              *(float *)(curcontext + 8)) / zoom_power_divisor);
                if (fVar1 < 0.001f) fVar1 = 1.0f;  /* Guard against zero */
                fVar1 = (ground_scale_width * scale_factor) / fVar1;
                dVar2 = (double)fVar1;

                if (call_count <= 3) {
                    fprintf(stderr, "  ground: width=%.1f gsw=%.1f fVar1=%.1f zpb=%.1f zpd=%.1f\n",
                            dVar2, ground_scale_width, fVar1, zoom_power_base, zoom_power_divisor);
                    fprintf(stderr, "  ground: cam_x=%.1f cam_y=%.1f fwd=%.1f bwd=%.1f hz=%.1f\n",
                            *(float *)curcontext, *(float *)(curcontext + 4),
                            ground_offset_forward, ground_offset_backward, ground_horizon_z);
                }

                if (grid_display_flag == '\0') {
                    /* Flat sky mode - single color */
                    cpack(sky_color_top);  /* Use proper sky color */
                    bgnpolygon();
                    vertex[0] = (float)((double)*(float *)curcontext - dVar2);
                    vertex[1] = *(float *)(curcontext + 4) + ground_offset_forward;
                    vertex[2] = -0.5f;
                    v3f(vertex);
                    vertex[0] = (float)((double)*(float *)curcontext + dVar2);
                    vertex[1] = *(float *)(curcontext + 4) + ground_offset_forward;
                    vertex[2] = -0.5f;
                    v3f(vertex);
                    vertex[0] = (float)((double)*(float *)curcontext + dVar2);
                    vertex[1] = *(float *)(curcontext + 4) + ground_offset_forward;
                    vertex[2] = *(float *)(curcontext + 8) + 1000.0f;
                    v3f(vertex);
                    vertex[0] = (float)((double)*(float *)curcontext - dVar2);
                    vertex[1] = *(float *)(curcontext + 4) + ground_offset_forward;
                    vertex[2] = *(float *)(curcontext + 8) + 1000.0f;
                    v3f(vertex);
                    endpolygon();
                }
                else {
                    /* Gouraud shaded sky gradient */
                    shademodel(1);  /* GOURAUD */
                    bgnpolygon();
                    cpack(sky_color_top);
                    vertex[0] = (float)((double)*(float *)curcontext - dVar2);
                    vertex[1] = *(float *)(curcontext + 4) + ground_offset_forward;
                    vertex[2] = -0.5f;
                    v3f(vertex);
                    vertex[0] = (float)((double)*(float *)curcontext + dVar2);
                    vertex[1] = *(float *)(curcontext + 4) + ground_offset_forward;
                    vertex[2] = -0.5f;
                    v3f(vertex);
                    cpack(sky_color_bottom);
                    vertex[0] = (float)((double)*(float *)curcontext + dVar2);
                    vertex[1] = *(float *)(curcontext + 4) + ground_offset_forward;
                    vertex[2] = *(float *)(curcontext + 8) + ground_horizon_z;
                    v3f(vertex);
                    vertex[0] = (float)((double)*(float *)curcontext - dVar2);
                    vertex[1] = *(float *)(curcontext + 4) + ground_offset_forward;
                    vertex[2] = *(float *)(curcontext + 8) + ground_horizon_z;
                    v3f(vertex);
                    endpolygon();

                    /* Far sky (solid color) */
                    shademodel(0);  /* FLAT */
                    bgnpolygon();
                    cpack(sky_color_bottom);
                    vertex[0] = (float)((double)*(float *)curcontext + dVar2);
                    vertex[1] = *(float *)(curcontext + 4) + ground_offset_forward;
                    vertex[2] = *(float *)(curcontext + 8) + ground_horizon_z;
                    v3f(vertex);
                    vertex[0] = (float)((double)*(float *)curcontext + dVar2);
                    vertex[1] = *(float *)(curcontext + 4) + ground_offset_forward;
                    vertex[2] = *(float *)(curcontext + 8) + 1000.0f;
                    v3f(vertex);
                    vertex[0] = (float)((double)*(float *)curcontext - dVar2);
                    vertex[1] = *(float *)(curcontext + 4) + ground_offset_forward;
                    vertex[2] = *(float *)(curcontext + 8) + 1000.0f;
                    v3f(vertex);
                    vertex[0] = (float)((double)*(float *)curcontext - dVar2);
                    vertex[1] = *(float *)(curcontext + 4) + ground_offset_forward;
                    vertex[2] = *(float *)(curcontext + 8) + ground_horizon_z;
                    v3f(vertex);
                    endpolygon();

                    /* Ground plane with gradient */
                    shademodel(1);  /* GOURAUD */
                    bgnpolygon();
                    cpack(bg_color_grid);  /* far ground color */
                    vertex[0] = (float)((double)*(float *)curcontext - dVar2);
                    vertex[1] = *(float *)(curcontext + 4) - ground_offset_backward;
                    vertex[2] = -0.5f;
                    v3f(vertex);
                    vertex[0] = (float)((double)*(float *)curcontext + dVar2);
                    vertex[1] = *(float *)(curcontext + 4) - ground_offset_backward;
                    vertex[2] = -0.5f;
                    v3f(vertex);
                    cpack(ground_color_near);  /* near ground color */
                    vertex[0] = (float)((double)*(float *)curcontext + dVar2);
                    vertex[1] = *(float *)(curcontext + 4) + ground_offset_forward;
                    vertex[2] = -0.5f;
                    v3f(vertex);
                    vertex[0] = (float)((double)*(float *)curcontext - dVar2);
                    vertex[1] = *(float *)(curcontext + 4) + ground_offset_forward;
                    vertex[2] = -0.5f;
                    v3f(vertex);
                    endpolygon();
                    shademodel(0);  /* back to FLAT */
                }
            }
            /* Phase 15: Draw actual directory tree content */
            draw_tree_content(param_1);
        }
    }
    /* TODO: else FUN_00419424 for zoom mode */
}

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
    static int frame_count = 0;

    /* Clear redraw flag */
    redraw_flag = 0;

    /* Debug: show frame rendering (first few frames only) */
    if (frame_count++ < 3) {
        fprintf(stderr, "draw_scene: frame %d\n", frame_count);
    }

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

    /* Enable depth testing for proper 3D rendering */
    glDisable(GL_CULL_FACE);  /* Keep culling off - FSN draws both sides */
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);

    /* DEBUG: Removed - 3D rendering confirmed working */

    /* Setup perspective projection using IGL wrapper */
    {
        short fov = *(short *)(curcontext + 0x10);
        if (fov < 10) fov = 450;  /* Default 45 degrees (in tenths) */

        if (frame_count <= 3) {
            fprintf(stderr, "  fov=%d (%.1f deg)\n", fov, fov * 0.1);
        }

        mmode(MPROJECTION);
        perspective(fov, 1.0f, 0.1f, 2000.0f);  /* Far clip must reach ground plane */
    }

    /* Setup view transformation using FSN's transform sequence
     * But we need to understand the coordinate mapping:
     * FSN: X=left/right, Y=forward, Z=up
     * OpenGL: X=right, Y=up, -Z=forward
     *
     * The rotation around X tilts the view (looking down at ground)
     * We also need a Z offset to lift the camera above the scene
     */
    mmode(MVIEWING);

    /* CRITICAL: Reset modelview to identity before applying transforms!
     * Without this, we're transforming from whatever random state was there.
     */
    glLoadIdentity();

    pushmatrix();

    float ctx_scale = *(float *)(curcontext + 0x34);
    if (ctx_scale < 0.001f) ctx_scale = 1.0f;

    short rot_x = *(short *)(curcontext + 0xe);
    short rot_z = *(short *)(curcontext + 0xc);
    float cam_x = *(float *)curcontext;
    float cam_y = *(float *)(curcontext + 4);
    float cam_z = *(float *)(curcontext + 8);

    if (frame_count <= 3) {
        fprintf(stderr, "  FSN camera: scale=%.2f rot_x=%d rot_z=%d cam=(%.1f,%.1f,%.1f)\n",
                ctx_scale, rot_x, rot_z, cam_x, cam_y, cam_z);
    }

    /* COORDINATE SYSTEM CONVERSION:
     * FSN: X=right, Y=forward, Z=up
     * OpenGL: X=right, Y=up, Z=out (camera looks down -Z)
     *
     * -90° around X: (X,Y,Z) -> (X, Z, -Y)
     * This maps FSN Z-up to OpenGL Y-up, FSN Y-forward to OpenGL -Z
     */
    glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);  /* Map FSN coords to OpenGL */

    /* Apply FSN transforms in FSN coordinate space */
    scale(1.0f / ctx_scale);
    rotate(rot_x, 'x');
    rotate(rot_z, 'z');

    /* Zoom-based scale using precomputed trig values from calc_h_angle/calc_v_angle
     * These are stored at curcontext offsets 0x14-0x28 by setup_context_widgets()
     * cos_z at +0x18, sin_x at +0x20
     */
    {
        float cos_z = *(float *)(curcontext + 0x18);
        float sin_x = *(float *)(curcontext + 0x20);
        float zoom_height = zoom_reference_height;
        float zoom;

        /* Guard against division by zero */
        if (zoom_height < 1.0f) zoom_height = 100.0f;

        zoom = powf(zoom_base_factor,
            (cam_y - cos_z * sin_x * cam_z) / zoom_height);

        if (frame_count <= 3) {
            fprintf(stderr, "  zoom: cos_z=%.3f sin_x=%.3f zoom=%.3f ref_h=%.1f base=%.3f\n",
                    cos_z, sin_x, zoom, zoom_reference_height, zoom_base_factor);
        }

        scale(zoom);
    }

    /* Translate camera position - ORIGINAL: Only X and Y, NO Z!
     * (from pickLandscape @ fsn.c:48872)
     */
    translate(-cam_x, -cam_y);

    /* Render the scene content - draw ground plane and sky */
    draw_directories(0);

    /* DEBUG: Removed - 3D blocks now rendering correctly */

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
