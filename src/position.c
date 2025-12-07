/**
 * position.c - Minimal stubs for position persistence and layout helpers
 *
 * TODO(fsn-position): Recreate original logic for saving/restoring view and item positions.
 */

#include "position.h"
#include <stdio.h>
#include <string.h>

void calculate_layout_position(int param_1)
{
    (void)param_1;
}

void draw_positioned_item(undefined4 param_1, undefined4 param_2)
{
    (void)param_1;
    (void)param_2;
}

void get_position_coords(int param_1, int *param_2, undefined4 *param_3)
{
    (void)param_1;
    if (param_2) *param_2 = 0;
    if (param_3) *param_3 = 0;
}

void getPosition(void *param_1, void *param_2, void *param_3, void *param_4,
                 void *param_5, void *param_6, void *param_7, void *param_8, void *param_9,
                 void *param_10)
{
    extract_position_data(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10);
}

void extract_position_data(void *param_1, void *param_2, void *param_3, void *param_4,
                           void *param_5, void *param_6, void *param_7, void *param_8, void *param_9,
                           void *param_10)
{
    if (param_2) *(undefined2 *)param_2 = 0;
    if (param_3) *(undefined2 *)param_3 = 0;
    if (param_4) *(float *)param_4 = 0.0f;
    if (param_5) *(float *)param_5 = 0.0f;
    if (param_6) *(float *)param_6 = 0.0f;
    if (param_7) *(int *)param_7 = 0;
    if (param_8) *(int *)param_8 = 0;
    if (param_9) *(int *)param_9 = 0;
    if (param_10) *(undefined1 *)param_10 = 0;

    if (!param_1) {
        return;
    }

    /* Interpret buffer written by savePosition (undefined2* layout) */
    undefined2 *buf16 = (undefined2 *)param_1;
    if (param_2) *(undefined2 *)param_2 = buf16[0];        /* rotation_z */
    if (param_3) *(undefined2 *)param_3 = buf16[1];        /* rotation_x */
    if (param_7) *(int *)param_7 = *(int *)(buf16 + 2);    /* zoom_mode */
    if (param_4) *(float *)param_4 = *(float *)(buf16 + 4);/* camera_x */
    if (param_5) *(float *)param_5 = *(float *)(buf16 + 6);/* camera_y */
    if (param_6) *(float *)param_6 = *(float *)(buf16 + 8);/* camera_z */
    if (param_8) *(int *)param_8 = *(int *)(buf16 + 10);   /* curcontext+0x44 */
    if (param_9) *(int *)param_9 = *(int *)(buf16 + 0x12); /* curcontext+0x48 */
    if (param_10) *(undefined1 *)param_10 = *(undefined1 *)(buf16 + 0x1a);
}

void equalPositions(void)
{
}

void get_view_position(void *param_1)
{
    if (!param_1) return;
    memset(param_1, 0, sizeof(undefined2) * 0x1a);
}

void writePosition(undefined2 *param_1, FILE *param_2)
{
    (void)param_1;
    (void)param_2;
}

void readPosition(undefined2 *param_1, FILE *param_2)
{
    (void)param_1;
    (void)param_2;
}
