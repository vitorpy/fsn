/**
 * drawing.c - Core rendering functions
 *
 * REWRITTEN from binary disassembly analysis (Phase 18).
 * See analysis/draw_scene.annotated.asm for verification.
 *
 * Original decompiled code preserved in src/original/drawing.c
 */

#include "drawing.h"
#include "draw_tree.h"
#include "fsn_stubs.h"
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

#include "fsn_context.h"
/* Forward declarations - stubs until extracted from binary */
static void update_camera_state(void);   /* FUN_004294cc at GP-0x78bc */
static void update_visibility(void);     /* FUN_0040bbe0 at GP-0x7ae4 */
static void setup_zoom_context(void);    /* FUN_0040ca58 at GP-0x7ad0 */
static void finalize_frame(void);        /* FUN_00420b70 at GP-0x797c */
static void update_frame_timing(void);   /* FUN_0040d804 at GP-0x7abc */
static void FUN_0042425c(void *dir, char param_1); /* Alias for process_tree_node_impl */
static void FUN_00419424(int zoom_mode, int param_1); /* Alias for apply_context_changes */
static void FUN_004294cc(void);          /* Binary alias for update_camera_state */
static void FUN_0040bbe0(void);          /* Binary alias for update_visibility */
static void FUN_0040ca58(void);          /* Binary alias for setup_zoom_context */
static void FUN_00420b70(void);          /* Binary alias for finalize_frame */
static void FUN_0040d804(void);          /* Binary alias for update_frame_timing */
static void draw_directories(char param_1); /* Forward decl for alias */
static void FUN_0042510c(char param_1);  /* Binary alias for draw_directories */

/**
 * Stub implementations
 *
 * These functions are called from draw_scene but FSN renders correctly
 * without them. They handle UI polish features:
 *
 * - update_camera_state (FUN_004294cc/locateClear): Clear selection highlight,
 *   calls setOverlayWindow, clears small[31120/4] and small[31124/4]
 *
 * - update_visibility (FUN_0040bbe0): Calls XRaiseWindow(display, curcontextwindows[0])
 *
 * - setup_zoom_context (FUN_0040ca58/check_visibility): pushmatrix, setup transforms,
 *   calls FUN_0040bfa0 and FUN_00425c80 (visibility culling), popmatrix
 *
 * - finalize_frame (FUN_00420b70/drawOverviewOverlay): If overviewActive, draws
 *   overview minimap overlay
 *
 * - update_frame_timing (FUN_0040d804/setScales): Updates UI scale widgets when
 *   controlsShowing, uses curcontext offsets +12, +14, +8
 */
static void update_camera_state(void) { /* FUN_004294cc - clear selection */ }
static void update_visibility(void) { /* FUN_0040bbe0 - XRaiseWindow */ }
static void setup_zoom_context(void) { /* FUN_0040ca58 - visibility culling */ }
static void finalize_frame(void) { /* FUN_00420b70 - overview overlay */ }
static void update_frame_timing(void) { /* FUN_0040d804 - UI scale update */ }
static void FUN_004294cc(void) { update_camera_state(); }
static void FUN_0040bbe0(void) { update_visibility(); }
static void FUN_0040ca58(void) { setup_zoom_context(); }
static void FUN_00420b70(void) { finalize_frame(); }
static void FUN_0040d804(void) { update_frame_timing(); }

/* Forward declaration */
struct DirectoryNode;

/* Wrapper for process_tree_node */
static void process_tree_node(void *dir, char param_1) {
    if (dir != NULL) {
        process_tree_node_impl((struct DirectoryNode *)dir, param_1);
    }
}
static void FUN_0042425c(void *dir, char param_1) {
    process_tree_node_impl((struct DirectoryNode *)dir, param_1);
}
static void FUN_00419424(int zoom_mode, int param_1) {
    apply_context_changes((void *)(intptr_t)zoom_mode, param_1);
}
static void FUN_0042510c(char param_1) { draw_directories(param_1); }

/**
 * draw_directories - Draw ground plane, sky gradient, and directory tree
 *
 * Called from draw_scene at GP-0x7938 (address 0x00425100).
 * FIXED: Ghidra decompilation bugs corrected via binary analysis.
 *
 * param_1: 0 = draw ground plane, non-0 = skip ground
 */
static void draw_directories(char param_1)
{
    FsnContext *ctx = (FsnContext *)curcontext;
    float fVar1;
    float coords[3];

    selected_id_1 = 0;
    selected_id_2 = 0;

    if (ctx->zoom_mode == 0) {
        if (topdir != 0) {
            if (param_1 == '\0') {
                /* Calculate view extent based on zoom */
                fVar1 = powf(zoom_base_factor,
                    (ctx->camera_y -
                     ctx->cos_z * ctx->sin_x *
                     ctx->camera_z) / zoom_reference_height);
                /* Original uses DAT_100175a0 = ground_scale_width (2000.0) */
                fVar1 = (ground_scale_width * ctx->scale_factor) / fVar1;

                if (grid_display_flag == '\0') {
                    /* Flat mode: three line quads with zbuffer toggles */
                    zbuffer(1);
                    bgnline();
                    cpack(highlight_packed_color);
                    coords[0] = ctx->camera_x - fVar1;
                    coords[1] = ctx->camera_y + view_offset_y;
                    coords[2] = -0.5f;
                    v3f(coords);
                    coords[0] = ctx->camera_x + fVar1;
                    coords[1] = ctx->camera_y + view_offset_y;
                    coords[2] = -0.5f;
                    v3f(coords);
                    cpack(bg_color_normal);
                    coords[0] = ctx->camera_x + fVar1;
                    coords[1] = ctx->camera_y + view_offset_y;
                    coords[2] = ctx->camera_z;
                    v3f(coords);
                    coords[0] = ctx->camera_x - fVar1;
                    coords[1] = ctx->camera_y + view_offset_y;
                    coords[2] = ctx->camera_z;
                    v3f(coords);
                    endline();

                    zbuffer(0);
                    bgnline();
                    cpack(bg_color_normal);
                    coords[0] = ctx->camera_x + fVar1;
                    coords[1] = ctx->camera_y + view_offset_y;
                    coords[2] = ctx->camera_z;
                    v3f(coords);
                    coords[0] = ctx->camera_x + fVar1;
                    coords[1] = ctx->camera_y + view_offset_y;
                    coords[2] = -0.5f;
                    v3f(coords);
                    coords[0] = ctx->camera_x - fVar1;
                    coords[1] = ctx->camera_y + view_offset_y;
                    coords[2] = -0.5f;
                    v3f(coords);
                    coords[0] = ctx->camera_x - fVar1;
                    coords[1] = ctx->camera_y + view_offset_y;
                    coords[2] = ctx->camera_z;
                    v3f(coords);
                    endline();

                    zbuffer(1);
                    bgnline();
                    cpack(sky_color_top);
                    coords[0] = ctx->camera_x - fVar1;
                    coords[1] = ctx->camera_y + view_offset_y;
                    coords[2] = -0.5f;
                    v3f(coords);
                    coords[0] = ctx->camera_x + fVar1;
                    coords[1] = ctx->camera_y + view_offset_y;
                    coords[2] = -0.5f;
                    v3f(coords);
                    cpack(sky_color_flat);
                    coords[0] = ctx->camera_x + fVar1;
                    coords[1] = ctx->camera_y + view_offset_y;
                    coords[2] = ctx->camera_z;
                    v3f(coords);
                    coords[0] = ctx->camera_x - fVar1;
                    coords[1] = ctx->camera_y + view_offset_y;
                    coords[2] = ctx->camera_z;
                    v3f(coords);
                    endline();

                    zbuffer(0);
                } else {
                    /* Gradient mode: sky and ground line quads */
                    float cam_x = ctx->camera_x;
                    float cam_y = ctx->camera_y;
                    float cam_z = ctx->camera_z;
                    float sky_y = cam_y + view_offset_y;

                    shademodel(1);
                    bgnline();
                    cpack(graphics_state_mode);  /* top sky */
                    coords[0] = cam_x - fVar1;
                    coords[1] = sky_y;
                    coords[2] = -0.5f;
                    v3f(coords);
                    coords[0] = cam_x + fVar1;
                    coords[1] = sky_y;
                    coords[2] = -0.5f;
                    v3f(coords);
                    cpack(current_packed_color); /* bottom sky */
                    coords[0] = cam_x + fVar1;
                    coords[1] = sky_y;
                    coords[2] = cam_z + view_offset_z;
                    v3f(coords);
                    coords[0] = cam_x - fVar1;
                    coords[1] = sky_y;
                    coords[2] = cam_z + view_offset_z;
                    v3f(coords);
                    endline();
                    shademodel(0);

                    bgnline();
                    cpack(current_packed_color);
                    coords[0] = cam_x + fVar1;
                    coords[1] = sky_y;
                    coords[2] = cam_z + view_offset_z;
                    v3f(coords);
                    coords[0] = cam_x + fVar1;
                    coords[1] = sky_y;
                    coords[2] = -0.5f;
                    v3f(coords);
                    coords[0] = cam_x - fVar1;
                    coords[1] = sky_y;
                    coords[2] = -0.5f;
                    v3f(coords);
                    coords[0] = cam_x - fVar1;
                    coords[1] = sky_y;
                    coords[2] = cam_z + view_offset_z;
                    v3f(coords);
                    endline();

                    shademodel(1);
                    bgnline();
                    cpack(graphics_render_flags);  /* ground far */
                    coords[0] = cam_x - fVar1;
                    coords[1] = cam_y - base_y_offset;
                    coords[2] = -0.5f;
                    v3f(coords);
                    coords[0] = cam_x + fVar1;
                    coords[1] = cam_y - base_y_offset;
                    coords[2] = -0.5f;
                    v3f(coords);
                    cpack(highlight_color);       /* ground near */
                    coords[0] = cam_x + fVar1;
                    coords[1] = sky_y;
                    coords[2] = -0.5f;
                    v3f(coords);
                    coords[0] = cam_x - fVar1;
                    coords[1] = sky_y;
                    coords[2] = -0.5f;
                    v3f(coords);
                    endline();
                    shademodel(0);
                }
            }
            /* Render directory tree */
            FUN_0042425c((void *)topdir, param_1);
        }
    } else {
        FUN_00419424((int)ctx->zoom_mode, (int)param_1);
    }
}

/**
 * checkRedrawScene - Check if redraw is needed
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
 * REWRITTEN from binary disassembly (0x0040cac4).
 * See analysis/draw_scene.annotated.asm for complete verification.
 *
 * Assembly-verified transform sequence:
 *   1. pushmatrix
 *   2. scale(1/ctx_scale, 1.0, 1.0)
 *   3. rotate(rot_x, 'x')
 *   4. rotate(rot_z, 'z')
 *   5. powf zoom calculation
 *   6. scale(zoom, 1.0, 1.0)
 *   7. translate(-cam_x, -cam_y, -cam_z)  ← 3 args!
 *   8. draw_directories(0)
 *   9. popmatrix
 */
void draw_scene(void)
{
    FsnContext *ctx = (FsnContext *)curcontext;
    struct timeval tStack_start;
    struct timeval tStack_end;
    float cam_x, cam_y, cam_z;
    float ctx_scale, zoom;
    float cos_z, sin_x, zoom_height;
    short rot_x, rot_z;
    static int frame_count = 0;

    /*=========================================================================
     * Step 1: Clear redraw flag (asm line 19: sb zero,26248(at))
     *=========================================================================*/
    redraw_flag = 0;

    /* Frame counter retained for potential timing; no debug print */
    frame_count++;

    /*=========================================================================
     * Step 2: Get frame start time (asm lines 12-18: jalr gettimeofday)
     *=========================================================================*/
    gettimeofday(&tStack_start, NULL);

    /*=========================================================================
     * Step 3-4: Clamp camera X to [minx, maxx] (asm lines 22-54)
     *=========================================================================*/
    cam_x = ctx->camera_x;
    if (cam_x < minx) {
        ctx->camera_x = (float)minx;
        cam_x = ctx->camera_x;
    }
    if (cam_x > (float)maxx) {
        ctx->camera_x = (float)maxx;
        cam_x = ctx->camera_x;
    }

    /*=========================================================================
     * Step 5-6: Clamp camera Y to [miny-50, maxy] (asm lines 55-85)
     *=========================================================================*/
    cam_y = ctx->camera_y;
    if (cam_y < (float)miny - 50.0f) {
        ctx->camera_y = (float)miny - 50.0f;
        cam_y = ctx->camera_y;
    }
    if (cam_y > (float)maxy) {
        ctx->camera_y = (float)maxy;
        cam_y = ctx->camera_y;
    }

    /* Read cam_z after clamping */
    cam_z = ctx->camera_z;

    /*=========================================================================
     * Step 7-8: Update camera and visibility (asm lines 86-95)
     *=========================================================================*/
    FUN_004294cc();     /* GP-0x78bc = FUN_004294cc */
    FUN_0040bbe0();       /* GP-0x7ae4 = FUN_0040bbe0 */

    /*=========================================================================
     * Step 9: Setup zoom context if not in zoom mode (asm lines 98-111)
     *=========================================================================*/
    if (ctx->zoom_mode == 0) {
        FUN_0040ca58();  /* GP-0x7ad0 = FUN_0040ca58 */
    }

    /*=========================================================================
     * Step 10: Clear Z-buffer and color buffer (asm lines 112-133)
     * Uses fsn_resources+0x154 (bg_color_normal) or +0x15c (bg_color_grid)
     *=========================================================================*/
    if (grid_display_flag == '\0') {
        czclear(bg_color_normal, zbuffer_value);
    } else {
        czclear(bg_color_grid, zbuffer_value);
    }

    /*=========================================================================
     * Step 11: Projection setup (OpenGL compatibility)
     *=========================================================================*/
    mmode(MPROJECTION);
    {
        short fov = ctx->fov;
        if (fov < 10) fov = 450;  /* Default 45 degrees (tenths) */

        perspective(fov, 1.0f, 0.1f, 10000.0f);
    }

    /* IRIS GL → OpenGL coordinate fix (our addition for modern GL) */
    fix_irisgl_coordinate_mismatch();

    /* Switch to MODELVIEW for subsequent transforms (matches IrisGL viewing) */
    mmode(MVIEWING);

    /*=========================================================================
     * Step 12: pushmatrix (asm line 135: GP-0x7b48)
     *=========================================================================*/
    pushmatrix();

    /* Apply default shading mode from resources (use_gouraud_shading) */
    shademodel(use_gouraud_shading ? 1 : 0);

    /* Read transform parameters */
    ctx_scale = ctx->scale_factor;
    if (ctx_scale < 0.001f) ctx_scale = 1.0f;

    rot_x = ctx->rotation_x;
    rot_z = ctx->rotation_z;

    /*=========================================================================
     * Step 13: scale(1/ctx_scale, 1.0, 1.0) (asm lines 140-154)
     * Assembly shows: mfc1 a2,$f14 where $f14=1.0 → 3-arg scale
     *=========================================================================*/
    scale(1.0f / ctx_scale, 1.0f, 1.0f);

    /*=========================================================================
     * Step 14: rotate(rot_x, 'x') (asm lines 156-163)
     * li a1,120 = 'x' (ASCII 120)
     *=========================================================================*/
    rotate(rot_x, 'x');

    /*=========================================================================
     * Step 15: rotate(rot_z, 'z') (asm lines 165-172)
     * li a1,122 = 'z' (ASCII 122)
     *=========================================================================*/
    rotate(rot_z, 'z');

    /*=========================================================================
     * Step 16-17: Zoom calculation and scale (asm lines 175-208)
     * Uses powf at GP-0x7b64, result passed to scale at GP-0x7b6c
     *=========================================================================*/
    cos_z = ctx->cos_z;
    sin_x = ctx->sin_x;
    zoom_height = zoom_reference_height;
    if (zoom_height < 1.0f) zoom_height = 100.0f;

    zoom = powf(zoom_base_factor,
                (cam_y - cos_z * sin_x * cam_z) / zoom_height);

    scale(zoom, 1.0f, 1.0f);

    /*=========================================================================
     * Step 18: translate(-cam_x, -cam_y, -cam_z) (asm lines 215-224)
     *
     * VERIFIED from assembly:
     *   lwc1 $f18,8(v0)      # cam_z
     *   lwc1 $f12,0(v0)      # cam_x
     *   lwc1 $f14,4(v0)      # cam_y
     *   neg.s $f4,$f18       # -cam_z → a2
     *   neg.s $f12,$f12      # -cam_x
     *   neg.s $f14,$f14      # -cam_y (delay slot)
     *   jalr translate
     *=========================================================================*/
    translate(-cam_x, -cam_y, -cam_z);

    /*=========================================================================
     * Step 19: draw_directories(0) (asm lines 226-229: GP-0x7938)
     *=========================================================================*/
    FUN_0042510c(0);

    /*=========================================================================
     * Step 20: popmatrix (asm line 232: GP-0x7b28)
     *=========================================================================*/
    popmatrix();

    /*=========================================================================
     * Step 21: swapbuffers (asm line 238: GP-0x7b54)
     *=========================================================================*/
    swapbuffers();

    /*=========================================================================
     * Step 22-24: Finalize frame (asm lines 244-259)
     *=========================================================================*/
    FUN_00420b70();        /* GP-0x797c = FUN_00420b70 */
    FUN_0040d804();   /* GP-0x7abc = FUN_0040d804 */
    gflush();                /* GP-0x7cd0 */

    /*=========================================================================
     * Step 25-26: Calculate and store render time (asm lines 261-291)
     * Stored at curcontext + 0xc4c
     *=========================================================================*/
    gettimeofday(&tStack_end, NULL);
    ctx->render_time_usec =
        (int)((tStack_end.tv_usec - tStack_start.tv_usec) +
              (tStack_end.tv_sec - tStack_start.tv_sec) * 1000000);

    /* Clamp to 1 second max (asm lines 279-291: compare with 0xf4241) */
    if (ctx->render_time_usec > 1000000) {
        ctx->render_time_usec = 1000000;
    }
}

/**
 * redraw_gl_scene - Called from main loop when redraw_flag is set
 */
void redraw_gl_scene(void)
{
    draw_scene();
}
