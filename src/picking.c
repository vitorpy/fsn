/**
 * picking.c - Minimal picking stubs
 *
 * These functions satisfy linker/compilation for the picking pipeline.
 * Full implementations should mirror the original SGI GL selection logic.
 */

#include "picking.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "fsn_state.h"
#include "fsn_igl.h"
#include "messages.h"
#include "draw_tree.h"
#include "rendering.h"
#include "fsn_dir.h"
#include "pathutil.h"
#include "file_ops.h"

/* Forward declarations for status helpers and drawing helpers */
void display_scan_status(undefined4 param_1, char *param_2, undefined4 param_3);
void update_status_display(undefined4 param_1);
void copy_file_item(undefined4 param_1, undefined4 *param_2);
void draw_legend_color_box(int x, int y, int color);

/* TODO(fsn-picking): Reimplement full picking traversal and file actions */

void process_pick_item(int param_1)
{
    DirectoryNode *node = (DirectoryNode *)(uintptr_t)param_1;
    float denom = (view_scale_factor != 0.0f) ? view_scale_factor : 1.0f;

    if (node == NULL) {
        return;
    }

    /*
     * The original function applies a slight vertical translation based on
     * the node height before traversing children for picking. Reuse the
     * restored draw_tree traversal to drive name stack setup.
     */
    pushmatrix();
    translate(0.0f, -(node->height / denom));
    process_tree_node_impl(node, 0);
    popmatrix();
}

void pickWarp(int *param_1, undefined4 *param_2, undefined4 *param_3)
{
    short hits[500];
    int hit_count;
    int name_count = 0;
    int dir_id = -1;
    int file_index = -1;
    int dir_ptr = 0;

    if (param_1) *param_1 = 0;
    if (param_2) *param_2 = 0;
    if (param_3) *param_3 = 0;

    pushmatrix();
    initnames();
    picksize(10, 10);
    pick(hits, 500);
    gl_picking_setup_wrapper();

    /* Match binary: scale/rotate by current view, translate to camera origin */
    if (*(float *)(curcontext + 0x34) != 0.0f) {
        float inv_scale = 1.0f / *(float *)(curcontext + 0x34);
        scale(inv_scale);
    }
    rotate((int)*(short *)(curcontext + 0xe), 0x78);
    rotate((int)*(short *)(curcontext + 0xc), 0x7a);
    translate(-*(float *)curcontext, -(float)*(float *)(curcontext + 4));
    apply_context_changes((void *)(uintptr_t)*(int *)(curcontext + 0x3c), 1);

    hit_count = endpick(hits);
    popmatrix();

    /* Parse the pick buffer: name count followed by IDs */
    for (int i = 0, seen = 0; seen < hit_count; seen++) {
        name_count = hits[i];
        if (name_count == 1 && dir_id < 0) {
            dir_id = hits[i + 1];
        } else if (name_count == 2) {
            file_index = hits[i + 2];
            dir_id = hits[i + 1];
            break;
        }
        i += 1 + name_count;
    }

    if (dir_id >= 0) {
        dir_ptr = get_item_by_index(dir_id);
        if (file_index >= 0 && dir_ptr == *(int *)(curcontext + 0x3c)) {
            DirectoryNode *dir = (DirectoryNode *)(uintptr_t)dir_ptr;
            if (dir && dir->files_array && file_index < dir->num_files && param_2) {
                *param_2 = (undefined4)(uintptr_t)dir->files_array[file_index];
            }
        } else if (file_index >= 0) {
            fprintf(stderr, "pickWarp: found file in another dir\n");
            dir_ptr = 0;
        }
        if (param_1) {
            *param_1 = dir_ptr;
        }
    }
}

void pick_file_item(int param_1, undefined4 *param_2, undefined4 param_3, char param_4, undefined4 param_5,
                    undefined4 param_6)
{
    (void)param_3;
    (void)param_4;
    (void)param_6;

    const char *action = (const char *)(uintptr_t)param_5;
    char dir_path[512];
    char full_path[1024];
    char status_buf[256];

    if (param_1 == 0 || param_2 == NULL || *param_2 == 0) {
        snprintf(status_buf, sizeof(status_buf), "Don't know how to %s current selection", action);
        show_error_message((undefined4)(uintptr_t)status_buf);
        return;
    }

    /* Build directory path (stub currently returns root) */
    memset(dir_path, 0, sizeof(dir_path));
    build_path_string(dir_path, (undefined4 *)(uintptr_t)param_1);

    snprintf(full_path, sizeof(full_path), "%s%s", dir_path, (char *)(uintptr_t)*param_2);

    /* For now, copy the file as the action */
    copy_file_item((undefined4)(uintptr_t)param_1, param_2);

    display_scan_status(param_6, full_path, 2000);
    snprintf(status_buf, sizeof(status_buf), "%s %s", action ? action : "selected", full_path);
    update_status_display((undefined4)(uintptr_t)status_buf);
}

void overviewPickPointer(void)
{
    short hits[500];
    int hit_count;

    picksize(2, 2);
    pushmatrix();
    initnames();
    pick(hits, 500);
    ortho2((float)minx, (float)maxx, (float)miny, (float)maxy);
    setup_item_render((int)(uintptr_t)topdir, 1);
    hit_count = endpick(hits);
    popmatrix();

    for (int i = 0, seen = 0; seen < hit_count; seen++) {
        int name_count = hits[i];
        if (name_count == 1) {
            (void)get_item_by_index(hits[i + 1]);
            break;
        }
        i += 1 + name_count;
    }
}

void draw_second_pick(undefined8 param_1, undefined8 param_2, int param_3)
{
    (void)param_1;
    (void)param_2;

    /* Mimic minimal picking overlay for legend + file item */
    if (*(int *)(param_3 + 0x74) << 3 < 0) {
        loadname(2);
        pushname((int)*(short *)(param_3 + 0x5e));

        pushmatrix();
        translate(*(undefined4 *)(param_3 + 0x34), *(undefined4 *)(param_3 + 0x38));
        scale(*(undefined4 *)(param_3 + 0x58));
        pushmatrix();
        scale(*(undefined4 *)(param_3 + 0x3c), *(undefined4 *)(param_3 + 0x3c));
        draw_legend_color_box(0, 0, 0x1f);
        popmatrix();
        translate(0, *(undefined4 *)(param_3 + 0x3c));
        draw_file_item(param_3, 1, 7);
        popname();
        popmatrix();

        if (*(int *)(param_3 + 0x28) != 0) {
            loadname(1);
            pushname((int)*(short *)(param_3 + 0x5e));
            /* Draw a simple line to the child directory anchor */
            float v1[3] = {
                *(float *)(*(int *)(param_3 + 0x28) + 0x34) + *(float *)(param_3 + 0x4c),
                *(float *)(*(int *)(param_3 + 0x28) + 0x38) + *(float *)(param_3 + 0x50),
                -0.3f};
            float v2[3] = {
                *(float *)(param_3 + 0x34),
                *(float *)(param_3 + 0x38) - (*(float *)(param_3 + 0x3c) / 2.0f),
                -0.3f};
            bgnline();
            v3f(v1);
            v3f(v2);
            endline();
            popname();
        }
    }
}

void pickPointer(void)
{
    if (*(int *)(curcontext + 0x3c) == 0) {
        get_cursor_state(NULL, NULL, NULL);
    } else {
        get_selection_params(NULL, NULL, 0);
    }
}
