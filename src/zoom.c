/**
 * zoom.c - Basic zoom pipeline restoration
 *
 * This implementation restores practical zoom behavior using the decoded
 * state fields. It is intentionally minimal but functional: push/pop save
 * camera state, zoomto updates the camera and triggers redraw, and findzoom
 * routes to view/item parameter calculators depending on zoom mode.
 */

#include "zoom.h"
#include "fsn_state.h"
#include "fsn_context.h"
#include "fsn_stubs.h"
#include "fsn_stubs_generated.h"
#include "window.h"
#include <stddef.h>
#include <stdint.h>
#include <sys/time.h>

typedef struct {
    float camera_x;
    float camera_y;
    float camera_z;
    float scale_factor;
    int32_t zoom_mode;
    int16_t rotation_z;
    int16_t rotation_x;
} ZoomSnapshot;

static ZoomSnapshot zoom_stack[10];
static int zoom_sp = 0;

void pushzoom(void)
{
    FsnContext *ctx = (FsnContext *)curcontext;
    if (!ctx || zoom_sp >= (int)(sizeof(zoom_stack) / sizeof(zoom_stack[0]))) {
        return;
    }

    zoom_stack[zoom_sp].camera_x = ctx->camera_x;
    zoom_stack[zoom_sp].camera_y = ctx->camera_y;
    zoom_stack[zoom_sp].camera_z = ctx->camera_z;
    zoom_stack[zoom_sp].scale_factor = ctx->scale_factor;
    zoom_stack[zoom_sp].zoom_mode = ctx->zoom_mode;
    zoom_stack[zoom_sp].rotation_z = ctx->rotation_z;
    zoom_stack[zoom_sp].rotation_x = ctx->rotation_x;
    zoom_sp++;
}

void popzoom(void)
{
    FsnContext *ctx = (FsnContext *)curcontext;
    if (!ctx || zoom_sp <= 0) {
        return;
    }

    zoom_sp--;
    ctx->camera_x = zoom_stack[zoom_sp].camera_x;
    ctx->camera_y = zoom_stack[zoom_sp].camera_y;
    ctx->camera_z = zoom_stack[zoom_sp].camera_z;
    ctx->scale_factor = zoom_stack[zoom_sp].scale_factor;
    ctx->zoom_mode = zoom_stack[zoom_sp].zoom_mode;
    ctx->rotation_z = zoom_stack[zoom_sp].rotation_z;
    ctx->rotation_x = zoom_stack[zoom_sp].rotation_x;

    init_view_transform();
    init_camera_state();
    recalc_layout(0, 0);
    redraw_flag = 1;
}

void zoomto(double param_1, double param_2, double param_3,
            short param_4, short param_5, int param_6,
            undefined4 param_7, undefined4 param_8)
{
    FsnContext *ctx = (FsnContext *)curcontext;
    if (!ctx) return;

    init_gl_state(0, 0);
    set_main_gl_window();

    if (param_6 == ctx->zoom_mode) {
        zoom_stack_pointer = (int)param_1;
        zoom_stack_size = (float)param_2;
        zoom_stack_capacity = (float)param_3;
        camera_position_x = param_4;
        camera_position_y = param_5;
        camera_position_z = (param_4 != ctx->rotation_z);
        camera_rotation_changed = (param_5 != ctx->rotation_x);

        /* Guard against null context id: original halts, we no-op */
        if (param_6 != 0) {
            zoom_active_flag = 0;
            gettimeofday(&zoom_start_time, NULL);
            zoom_param_x = param_7;
            zoom_param_y = param_8;
            zoom_saved_state = zoom_init_state;
            init_gl_state(zoom_gl_init_callback, &zoom_stack_pointer);
        }
    } else {
        if (search_results_pending != '\0') {
            process_search_results();
        }

        *(int *)(curcontext + 0x3c) = param_6;
        if (param_6 != 0) {
            update_marked_item(param_6);
        }

        ctx->camera_x = (float)param_1;
        ctx->camera_y = (float)param_2;
        ctx->camera_z = (float)param_3;
        ctx->rotation_z = param_4;
        init_view_transform();
        ctx->rotation_x = param_5;
        init_camera_state();
        redraw_gl_scene();
    }
}

void shrinkDueToZoom(void)
{
    /* Original adjusts search zoom; keep as no-op for now */
}

void zoomToSelection(void)
{
    if (*(int *)(curcontext + 0x3c) == 0) {
        update_context_bounds((void *)(uintptr_t)*(int *)(curcontext + 0x44),
                              (void *)(uintptr_t)*(int *)(curcontext + 0x48));
    } else {
        update_context_display((void *)(uintptr_t)*(int *)(curcontext + 0x44),
                               (void *)(uintptr_t)*(int *)(curcontext + 0x48));
    }
}

void findzoom(void)
{
    if (*(int *)(curcontext + 0x3c) == 0) {
        calculate_view_params();
    } else {
        calculate_item_params();
    }
}

void zoomPosition(undefined4 param_1)
{
    (void)param_1;
}
