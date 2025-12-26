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
#include "fsn_context.h"
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

/* Enhanced picking traversal with proper name stack management */

void process_pick_item(int param_1)
{
    DirectoryNode *node = (DirectoryNode *)(uintptr_t)param_1;
    float denom = (view_scale_factor != 0.0f) ? view_scale_factor : 1.0f;

    if (node == NULL) {
        return;
    }

    /*
     * Enhanced picking traversal with proper name stack management
     * to match original binary behavior (assembly analysis 0x00409a20)
     */
    pushmatrix();
    
    /* Apply vertical translation based on node height for proper picking alignment */
    translate(0.0f, -(node->height / denom));
    
    /* Load directory name for picking identification */
    loadname(node->depth_indicator + 1);
    pushname(node->name_index);
    
    /* Process tree node with picking context */
    process_tree_node_impl(node, 1);  /* 1 = picking mode */
    
    popname();
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

    /* Enhanced transform setup matching binary behavior */
    FsnContext *ctx = (FsnContext *)curcontext;
    if (ctx->scale_factor != 0.0f) {
        float inv_scale = 1.0f / ctx->scale_factor;
        scale(inv_scale);
    }
    rotate((int)ctx->rotation_z, 'x');
    rotate((int)ctx->rotation_x, 'z');
    translate(-ctx->camera_x, -ctx->camera_y);
    apply_context_changes((void *)(uintptr_t)*(int *)(curcontext + 0x3c), 1);

    hit_count = endpick(hits);
    popmatrix();

    /* Enhanced hit parsing with validation and error handling */
    for (int i = 0, seen = 0; seen < hit_count; seen++) {
        if (i >= 500 - 10) break;  /* Safety check */
        
        name_count = hits[i];
        if (name_count <= 0 || name_count > 10) {
            i += 1;  /* Skip invalid name counts */
            continue;
        }
        
        if (name_count == 1 && dir_id < 0) {
            /* Directory hit - store directory ID */
            dir_id = hits[i + 1];
        } else if (name_count == 2) {
            /* File hit - store directory and file IDs */
            file_index = hits[i + 2];
            dir_id = hits[i + 1];
            break;  /* Found complete selection */
        }
        
        i += 1 + name_count;
    }

    /* Enhanced selection validation and processing */
    if (dir_id >= 0) {
        dir_ptr = get_item_by_index(dir_id);
        
        if (dir_ptr != 0) {
            DirectoryNode *dir = (DirectoryNode *)(uintptr_t)dir_ptr;
            
            if (file_index >= 0) {
                /* File selection case */
                if (dir_ptr == *(int *)(curcontext + 0x3c)) {
                    /* File in current directory */
                    if (dir && dir->files_array && file_index < dir->num_files && param_2) {
                        *param_2 = (undefined4)(uintptr_t)dir->files_array[file_index];
                        if (param_1) *param_1 = dir_ptr;
                        if (param_3) *param_3 = (undefined4)(uintptr_t)dir->files_array[file_index];
                    }
                } else {
                    /* File in different directory - invalid for current context */
                    if (param_3) *param_3 = 0;
                }
            } else {
                /* Directory selection case */
                if (param_1) *param_1 = dir_ptr;
            }
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

    /* Build directory path with enhanced error handling */
    memset(dir_path, 0, sizeof(dir_path));
    build_path_string(dir_path, (undefined4 *)(uintptr_t)param_1);
    if (dir_path[0] == '\0') {
        snprintf(status_buf, sizeof(status_buf), "Cannot build path for selection");
        show_error_message((undefined4)(uintptr_t)status_buf);
        return;
    }

    /* Construct full file path with safety checks */
    const char *filename = (const char *)(uintptr_t)*param_2;
    if (strlen(dir_path) + strlen(filename) + 2 >= sizeof(full_path)) {
        snprintf(status_buf, sizeof(status_buf), "Path too long for: %s", filename);
        show_error_message((undefined4)(uintptr_t)status_buf);
        return;
    }
    snprintf(full_path, sizeof(full_path), "%s%s", dir_path, filename);

    /* Enhanced file action handling based on action type */
    if (action == NULL) {
        action = "selected";
    }

    if (strcmp(action, "copy") == 0 || strcmp(action, "Copy") == 0) {
        copy_file_item((undefined4)(uintptr_t)param_1, param_2);
    } else if (strcmp(action, "move") == 0 || strcmp(action, "Move") == 0) {
        /* TODO: Implement move functionality */
        snprintf(status_buf, sizeof(status_buf), "Move action not yet implemented for: %s", full_path);
        show_error_message((undefined4)(uintptr_t)status_buf);
    } else if (strcmp(action, "delete") == 0 || strcmp(action, "Delete") == 0) {
        /* TODO: Implement delete functionality */
        snprintf(status_buf, sizeof(status_buf), "Delete action not yet implemented for: %s", full_path);
        show_error_message((undefined4)(uintptr_t)status_buf);
    } else if (strcmp(action, "open") == 0 || strcmp(action, "Open") == 0) {
        /* TODO: Implement open functionality */
        snprintf(status_buf, sizeof(status_buf), "Open action not yet implemented for: %s", full_path);
        show_error_message((undefined4)(uintptr_t)status_buf);
    } else {
        /* Default action - just display selection */
        copy_file_item((undefined4)(uintptr_t)param_1, param_2);
    }

    /* Update status display with action result */
    display_scan_status(param_6, full_path, 2000);
    snprintf(status_buf, sizeof(status_buf), "%s %s", action, full_path);
    update_status_display((undefined4)(uintptr_t)status_buf);
}

/* overviewPickPointer - now implemented in overview.c */

void draw_second_pick(undefined8 param_1, undefined8 param_2, int param_3)
{
    (void)param_1;
    (void)param_2;

    DirectoryNode *node = (DirectoryNode *)(uintptr_t)param_3;
    if (node == NULL) return;

    /* Mimic minimal picking overlay for legend + file item */
    /* Original check: (render_flags << 3) < 0 means bit 28 is set = visible */
    if (DIR_IS_VISIBLE(node)) {
        loadname(2);
        pushname((int)node->name_index);

        pushmatrix();
        translate(node->pos_x, node->pos_y);
        scale(node->height);
        pushmatrix();
        scale(node->height, node->height);
        draw_legend_color_box(0, 0, 0x1f);
        popmatrix();
        translate(0, node->height);
        draw_file_item(param_3, 1, 7);
        popname();
        popmatrix();

        if (node->child_center != NULL) {
            loadname(1);
            pushname((int)node->name_index);
            /* Draw a simple line to the child directory anchor */
            float v1[3] = {
                node->child_center->pos_x + node->offset_x,
                node->child_center->pos_y + node->offset_y,
                -0.3f};
            float v2[3] = {
                node->pos_x,
                node->pos_y - (node->height / 2.0f),
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
    FsnContext *ctx = (FsnContext *)curcontext;

    /* Enhanced mouse pointer handling with proper state management */
    if (ctx == NULL || ctx->zoom_mode == 0) {
        /* No current directory - get cursor state for overview picking */
        int cursor_x = 0, cursor_y = 0;
        char cursor_state = 0;
        get_cursor_state(&cursor_x, &cursor_y, &cursor_state);

        /* TODO: Implement overview cursor handling */
        (void)cursor_x;
        (void)cursor_y;
        (void)cursor_state;
    } else {
        /* Current directory exists - get selection parameters */
        int dir_id = 0;
        undefined4 file_id = 0;
        undefined4 extra_param = 0;
        get_selection_params(&dir_id, &file_id, &extra_param);

        /* Enhanced selection validation */
        if (dir_id == 0) {
            /* No selection - clear any existing selection state */
            clear_current_selection();
        } else {
            /* Valid selection - process it */
            DirectoryNode *selected_dir = (DirectoryNode *)(uintptr_t)get_item_by_index(dir_id);

            if (selected_dir != NULL) {
                /* Selection found - could update cursor based on selection */
                /* TODO: Implement proper cursor positioning */
                (void)selected_dir;
            }
        }
    }
}
