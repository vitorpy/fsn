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
#include "fsn_types.h"
#include "fsn_state.h"
#include "fsn_igl.h"
#include "fsn_dir.h"
#include "gp_mapping.h"
#include <math.h>
#include <string.h>
#include <stdio.h>

/* Forward declarations */
static void process_tree_node_impl(DirectoryNode *node, char param_3);
static void draw_file_icon_impl(const char *name);
static void draw_directory_block(DirectoryNode *node);

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
 * process_tree_node_impl - Process and draw directory tree node
 *
 * Updated to use DirectoryNode struct for 64-bit compatibility.
 */
static void process_tree_node_impl(DirectoryNode *node, char param_3)
{
    int i;
    undefined4 color;
    float parent_pos[3];
    float child_pos[3];

    (void)param_3;  /* unused */

    /* Check visibility flag */
    if (!DIR_IS_VISIBLE(node)) {
        return;
    }

    /* If depth indicator is negative, draw scaled element */
    if (node->depth_indicator < 0) {
        pushmatrix();
        /* draw_scaled_element stubbed */
        popmatrix();
    }

    /* Process children */
    if (node->child_count > 0 && node->children != NULL) {
        for (i = 0; i < node->child_count; i++) {
            DirectoryNode *child = node->children[i];

            /* Check child visibility */
            if (!DIR_IS_VISIBLE(child)) {
                continue;
            }

            /* Recursive call */
            process_tree_node_impl(child, param_3);

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
            parent_pos[0] = node->pos_x + child->offset_x;
            parent_pos[1] = node->pos_y + child->offset_y;
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

            /*
             * Draw 3D block at child position using extracted box geometry
             * draw_legend_color_box uses unit cube at origin, scaled/translated
             * Cube spans (-0.5,-0.5,0) to (0.5,0.5,1) - see box_geometry.c
             */
            {
                static int block_debug_count = 0;
                float block_width = 0.6f;   /* Full width of block */
                float block_depth = 0.6f;   /* Full depth of block */
                float block_height = child->height;
                uint32_t colors[4];

                if (block_debug_count < 5) {
                    fprintf(stderr, "  BLOCK[%d]: pos=(%.2f,%.2f) height=%.2f name=%s\n",
                            block_debug_count, child->pos_x, child->pos_y,
                            block_height, child->name ? child->name : "(null)");
                    block_debug_count++;
                }

                /* Set up color array: [top, front, back, side] */
                colors[0] = color;          /* top - same as line color */
                colors[1] = color;          /* front */
                colors[2] = (color & 0x00FFFFFF) | 0x80000000;  /* back - darker */
                colors[3] = (color & 0x00FFFFFF) | 0xC0000000;  /* side - medium */

                pushmatrix();
                /* Position at child location - TODO: fix coordinate transform */
                translate(child->pos_x, child->pos_y, -0.4f);
                /* Scale: cube is unit size, scale to desired dimensions */
                scale(block_width, block_depth, block_height);
                /* Draw all faces (0x3F = FSN_FACE_ALL) with filled mode (0) */
                draw_legend_color_box((undefined4 *)colors, 0, FSN_FACE_ALL);
                popmatrix();
            }

            /* Pop selection name */
            popname();
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
        pushmatrix();
        draw_scaled_element(0, (int)maxy);
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
        charstr(node->name);
    }
    popmatrix();

    /* Draw full path if provided */
    if (dir_name) {
        pushmatrix();
        name_len = strlen(dir_name);
        translate((float)name_len * 0.1f, 0.15f);
        scale(0.08f, 0.08f);
        charstr(dir_name);
        popmatrix();
    }

    popmatrix();
}
