/**
 * warp.c - Picking/zoom integration helpers
 */

#include "warp.h"
#include "fsn_state.h"
#include "fsn_stubs_generated.h"
#include "picking.h"
#include "selection.h"
#include "fsn_context.h"
#include <stdint.h>
#include <stdio.h>

void findzoom_warp(float *param_1, float *param_2, float *param_3, undefined2 *param_4,
                   undefined2 *param_5, int *param_6, undefined1 *param_7, undefined1 *param_8)
{
    FsnContext *ctx = (FsnContext *)curcontext;
    int dir = 0;
    undefined4 file = 0;
    undefined4 extra = 0;

    if (param_5) *param_5 = 0;
    if (param_7) *param_7 = 0;
    if (param_8) *param_8 = 0;

    get_selection_params(&dir, &file, &extra);
    if (dir == 0) {
        if (param_7) *param_7 = 1;
        if (param_6) *param_6 = 0;
        return;
    }

    if (file == 0) {
        if (dir == *(int *)(curcontext + 0x3c)) {
            clear_current_selection();
            if (param_1) *param_1 = camera_lookat_x;
            if (param_2) *param_2 = camera_lookat_y;
            if (param_3) *param_3 = camera_lookat_z;
            if (param_4) *param_4 = (short)camera_rotation_angle;
            if (param_6) *param_6 = *(int *)(curcontext + 0x3c);
        } else {
            if (param_7) *param_7 = 1;
            if (param_6) *param_6 = dir;
        }
        return;
    }

    int file_ptr = (int)(uintptr_t)file;
    if (dir == *(int *)(curcontext + 0x3c)) {
        get_item_screen_coords((undefined4 *)(uintptr_t)file_ptr);
        float fVar1 = *(float *)(file_ptr + 0x14);
        if (param_1) {
            *param_1 = fVar1 - ctx->sin_z * database_version;
        }
        if (param_2) {
            *param_2 = (float)(((double)*(float *)(file_ptr + 0x18) +
                               (double)*(float *)(dir + 0x3c) / (double)fVar1) -
                              (double)ctx->cos_z * database_version);
        }
        if (param_3) {
            if (overlay_mode_flag == '\0') {
                *param_3 = overlay_position_offset + *(float *)(file_ptr + 0x1c);
            } else {
                *param_3 = layout_offset_base + layout_height_adjust;
                if (param_8) *param_8 = 1;
            }
        }
        if (param_4) *param_4 = (short)layout_short_value;
        if (param_6) *param_6 = *(int *)(curcontext + 0x3c);
        if (param_8) *param_8 = 1;
    } else {
        fprintf(stderr, "found file in another dir\n");
    }
}

void warpZoomToFile(int param_1, int param_2)
{
    if (param_1 != 0 && param_2 != 0) {
        set_camera_lookat(
            (double)*(float *)(param_2 + 0x14),
            (double)*(float *)(param_2 + 0x18));
    }
}
