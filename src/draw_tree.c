/**
 * draw_tree.c - Directory tree rendering functions
 *
 * Phase 15: 3D File Block Rendering
 * Phase 18: Updated to use 64-bit DirectoryNode struct
 *
 * GP-indirect calls have been decoded to named IGL functions.
 */

#include "draw_tree.h"
#include "block_render.h"
#include "box_geometry.h"
#include "spotlight.h"
#include "vector_font.h"
#include "fsn_types.h"
#include "fsn_state.h"
#include "fsn_igl.h"
#include "fsn_dir.h"
#include "gp_mapping.h"
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <GL/gl.h>

/* Forward declarations */
static void process_tree_node_impl(DirectoryNode *node, char param_3);
static void draw_file_icon_impl(const char *name);
static void draw_directory_block(DirectoryNode *node);

/*
 * ORIGINAL: fsn.c:42680 - Scale factor for text label projection
 * Computed once per frame in draw_tree_content(), used for 2D text overlay.
 *
 * Formula: scale = (icon_size_multiplier * context_scale) / zoom_factor
 * Used for: screen_y = -height / current_label_scale - layout_z_offset
 */
static float current_label_scale = 1.0f;

void draw_tree_content(char param_1)
{
    float fVar1;
    float fStack_c;
    float fStack_8;
    float fStack_4;
    DirectoryNode *root = (DirectoryNode *)topdir;

    selected_id_1 = 0;
    selected_id_2 = 0;

    if (*(int *)(curcontext + 0x3c) == 0) {
        if (root != NULL) {
            if (param_1 == '\0') {
                fVar1 = powf(zoom_base_factor,
                             (*(float *)(curcontext + 4) -
                              *(float *)(curcontext + 0x18) * *(float *)(curcontext + 0x20) *
                              *(float *)(curcontext + 8)) / zoom_reference_height);
                fVar1 = (icon_size_multiplier * *(float *)(curcontext + 0x34)) / fVar1;

                /* Store scale factor for text label projection */
                current_label_scale = fVar1;

                if (grid_display_flag == '\0') {
                    cpack(highlight_packed_color);
                    bgnpolygon();
                    fStack_c = *(float *)curcontext - fVar1;
                    fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
                    fStack_4 = -0.5;
                    v3f(&fStack_c);
                    fStack_c = *(float *)curcontext + fVar1;
                    fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
                    fStack_4 = -0.5;
                    v3f(&fStack_c);
                    fStack_c = *(float *)curcontext + fVar1;
                    fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
                    fStack_4 = *(float *)(curcontext + 8);
                    v3f(&fStack_c);
                    fStack_c = *(float *)curcontext - fVar1;
                    fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
                    fStack_4 = *(float *)(curcontext + 8);
                    v3f(&fStack_c);
                    endpolygon();
                } else {
                    /* Gradient shading mode */
                    shademodel(1);
                    bgnpolygon();
                    cpack(graphics_state_mode);
                    fStack_c = *(float *)curcontext - fVar1;
                    fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
                    fStack_4 = -0.5;
                    v3f(&fStack_c);
                    fStack_c = *(float *)curcontext + fVar1;
                    fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
                    fStack_4 = -0.5;
                    v3f(&fStack_c);
                    cpack(current_packed_color);
                    fStack_c = *(float *)curcontext + fVar1;
                    fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
                    fStack_4 = *(float *)(curcontext + 8) + view_offset_z;
                    v3f(&fStack_c);
                    fStack_c = *(float *)curcontext - fVar1;
                    fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
                    fStack_4 = *(float *)(curcontext + 8) + view_offset_z;
                    v3f(&fStack_c);
                    endpolygon();
                    shademodel(0);
                }
            }
            process_tree_node_impl(root, param_1);
        }
    } else {
        apply_context_changes((void *)(intptr_t)*(int *)(curcontext + 0x3c), (int)param_1);
    }
}

/**
 * draw_child_node - Draw a single child directory/file node
 */
static void draw_child_node(DirectoryNode *parent, DirectoryNode *child, char param_3)
{
    undefined4 color;
    float parent_pos[3];
    float child_pos[3];
    static int block_debug_count = 0;

    if (child == NULL || !DIR_IS_VISIBLE(child)) {
        return;
    }

    /* Recursive call for directories */
    if (child->render_flags & DIR_FLAG_DIRECTORY) {
        process_tree_node_impl(child, param_3);
    }

    /* Push selection name for picking */
    pushname(child->name_index);

    /* Select color based on flags */
    if (child->render_flags & DIR_FLAG_DIRECTORY) {
        color = dir_type_icon;
    } else if (DIR_IS_SELECTED(child)) {
        color = directory_color_active;
    } else {
        color = file_type_icon;
    }
    cpack(color);

    /* Calculate line endpoints */
    parent_pos[0] = parent->pos_x + child->offset_x;
    parent_pos[1] = parent->pos_y + child->offset_y;
    parent_pos[2] = 0.0f;

    child_pos[0] = child->pos_x;
    child_pos[1] = child->pos_y - child->height;
    child_pos[2] = 0.0f;

    /* Set thick line for directories */
    if (child->render_flags & DIR_FLAG_DIRECTORY) {
        linewidth(3);
    }

    /* Draw connecting line */
    bgnline();
    v3f(parent_pos);
    v3f(child_pos);
    endline();

    /* Reset line width */
    if (child->render_flags & DIR_FLAG_DIRECTORY) {
        linewidth(1);
    }

    /* Draw 3D block at child position */
    {
        float block_width = 0.6f;
        float block_depth = 0.6f;
        float block_height = child->height;
        uint32_t colors[4];

        if (block_debug_count < 5) {
            fprintf(stderr, "  BLOCK[%d]: pos=(%.2f,%.2f) height=%.2f name=%s\n",
                    block_debug_count, child->pos_x, child->pos_y,
                    block_height, child->name ? child->name : "(null)");
            block_debug_count++;
        }

        colors[0] = color;
        colors[1] = color;
        colors[2] = (color & 0x00FFFFFF) | 0x80000000;
        colors[3] = (color & 0x00FFFFFF) | 0xC0000000;

        pushmatrix();
        translate(child->pos_x, child->pos_y, -0.4f);
        scale(block_width, block_depth, block_height);
        draw_legend_color_box((undefined4 *)colors, 0, FSN_FACE_ALL);
        popmatrix();

        /*
         * ORIGINAL: fsn.c:42317-42336 (draw_special) - Label rendering
         *
         * Labels are rendered using VECTOR STROKED FONT (draw_file_icon),
         * NOT bitmap charstr(). The original pattern is:
         *   pushmatrix → translate → rotate → scale → draw_file_icon → popmatrix
         *
         * Scale factor 0x3d4ccccd = 0.05 in IEEE 754
         */
        if (child->name) {
            pushmatrix();

            /* Position label near the block (slightly offset from block center) */
            translate(child->pos_x, child->pos_y - block_height * 0.5f, 0.0f);

            /* Rotate to face camera - original: rotate(-camera_angle, 'x') */
            rotate(-(int)*(short *)(curcontext + 0xe), 'x');

            /* Scale for label size - original: 0x3d4ccccd = 0.05 */
            scale(0.05f, 0.05f, 0.05f);

            /* White text color */
            cpack(0xFFFFFFFF);

            /* Render using original vector stroked font */
            draw_file_icon(child->name);

            popmatrix();
        }

        /*
         * ORIGINAL: fsn.c:49781 - spotlight for selected items
         * Draw selection beam when item is selected
         */
        if (DIR_IS_SELECTED(child)) {
            spotlight(
                child->pos_x, child->pos_y, -0.5f,       /* Base at ground */
                child->pos_x, child->pos_y, block_height + 1.5f, /* Top above block */
                0.3f,                                     /* Beam width */
                0xFF00FFFF,                               /* Cyan selection color */
                0                                         /* Full rendering with pattern */
            );
        }
    }

    popname();
}

/**
 * process_tree_node_impl - Process and draw directory tree node
 *
 * ORIGINAL FSN TERNARY TRAVERSAL:
 * Visits child_center, child_left, child_right instead of children array.
 * Then renders files from files_array.
 *
 * Based on: fsn.c:42502-42543 (process_pick_item)
 */
static void process_tree_node_impl(DirectoryNode *node, char param_3)
{
    int i;

    /* Check visibility flag */
    if (!DIR_IS_VISIBLE(node)) {
        return;
    }

    /* If depth indicator is negative, draw raised platform */
    if (node->depth_indicator < 0) {
        /*
         * ORIGINAL: fsn.c:42750-42757
         * Draw platform under directory node
         */
        pushmatrix();
        draw_scaled_element_impl(
            node->pos_x, node->pos_y, -0.5f,
            node->pos_x, node->pos_y, 0.0f,
            0.4f,
            dir_type_icon,
            0
        );
        popmatrix();
    }

    /*
     * ORIGINAL FSN TERNARY TRAVERSAL from fsn.c:42526-42540
     * Process three fixed child positions: CENTER, LEFT, RIGHT
     */
    draw_child_node(node, node->child_center, param_3);
    draw_child_node(node, node->child_left, param_3);
    draw_child_node(node, node->child_right, param_3);

    /*
     * Render files within this directory
     * Original: fsn.c:42518-42524
     */
    if (node->files_array != NULL) {
        for (i = 0; i < node->num_files; i++) {
            draw_child_node(node, node->files_array[i], param_3);
        }
    }
}

void draw_directory(intptr_t param_2, char param_3)
{
    DirectoryNode *node = (DirectoryNode *)param_2;

    if (!DIR_IS_VISIBLE(node)) {
        return;
    }

    /* Skip certain flag combinations */
    if (((node->render_flags >> 0x1e) & curcontextflag) != 0) {
        return;
    }
    if (node->render_flags & DIR_FLAG_DIRECTORY) {
        return;
    }
    if ((node->render_flags & 1) != 0) {
        return;
    }

    if (node->depth_indicator < 0) {
        /*
         * ORIGINAL: fsn.c:48686-48690
         * Draw raised platform under directory when depth_indicator < 0
         */
        pushmatrix();
        draw_scaled_element_impl(
            node->pos_x, node->pos_y, -0.5f,    /* Base at ground */
            node->pos_x, node->pos_y, 0.0f,     /* Top at node base */
            0.4f,                                /* Platform width */
            dir_type_icon,                       /* Directory color */
            0                                    /* Full rendering */
        );
        popmatrix();
    }

    /* Process children */
    process_tree_node_impl(node, param_3);
}

void draw_dir(DirectoryNode *node, undefined4 param_2, undefined4 param_3,
              float pos_x, char param_5)
{
    undefined4 color;
    (void)param_2;
    (void)param_3;

    if (!DIR_IS_VISIBLE(node)) {
        return;
    }

    /* Load selection name for picking */
    loadname(node->name_index);
    pushmatrix();

    /* Translate to position */
    translate(pos_x, 0.0f);

    /* Select color */
    color = directory_color_normal;
    if (DIR_IS_SELECTED(node)) {
        color = directory_color_active;
    }
    cpack(color);

    pushmatrix();
    rotate(-900, 'z');
    translate(0.7f, -0.1125f);

    if (param_5 == '\0') {
        rect(-0.02f, -0.02f);
        scale(0.025f, 0.025f);
        draw_file_icon_impl(node->name);
    } else {
        rectf(-0.02f, -0.02f);
    }
    popmatrix();
    popmatrix();
}

/**
 * draw_file_icon_impl - Draw icon placeholder
 */
static void draw_file_icon_impl(const char *name)
{
    (void)name;

    /* Draw a placeholder square */
    pushmatrix();
    {
        float v1[3] = {-0.5f, -0.5f, 0.0f};
        float v2[3] = {0.5f, -0.5f, 0.0f};
        float v3[3] = {0.5f, 0.5f, 0.0f};
        float v4[3] = {-0.5f, 0.5f, 0.0f};

        bgnline(); v3f(v1); v3f(v2); endline();
        bgnline(); v3f(v2); v3f(v3); endline();
        bgnline(); v3f(v3); v3f(v4); endline();
        bgnline(); v3f(v4); v3f(v1); endline();
    }
    popmatrix();
}

/**
 * draw_directory_recursive - Draw directory with text labels
 */
void draw_directory_recursive(DirectoryNode *node, char *dir_name, undefined4 param_3,
                              float pos_x, undefined4 param_5, float pos_z)
{
    int name_len;
    float label_scale;
    (void)param_3;
    (void)param_5;

    if (!DIR_IS_VISIBLE(node)) {
        return;
    }

    /* Load selection name for picking */
    loadname(node->name_index);

    pushmatrix();

    /* Position the directory block */
    translate(pos_x, pos_z);

    /* Rotate to face camera */
    rotate(0, 'x');

    /* Additional translation for text positioning */
    translate(0.0f, 0.5f);

    /* Set directory color */
    cpack(directory_color_normal);

    /* Scale for label */
    label_scale = 0.1f;
    scale(label_scale, label_scale);

    /* Draw directory name */
    pushmatrix();
    if (node->name) {
        cmov(0.0f, 0.0f, 0.0f);  /* Set text position at transformed origin */
        charstr(node->name);
    }
    popmatrix();

    /* Draw full path if provided */
    if (dir_name) {
        pushmatrix();
        name_len = strlen(dir_name);
        translate((float)name_len * 0.1f, 0.15f);
        scale(0.08f, 0.08f);
        cmov(0.0f, 0.0f, 0.0f);  /* Set text position */
        charstr(dir_name);
        popmatrix();
    }

    popmatrix();
}
