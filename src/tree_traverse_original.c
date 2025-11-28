/**
 * tree_traverse_original.c - ORIGINAL FSN tree traversal code
 *
 * RESTORATION: This file contains code extracted AS-IS from fsn.c
 * Ghidra artifacts preserved. GP-indirect calls need decoding.
 *
 * Source: fsn.c lines 42502-42543, 48734-48824
 */

#include "fsn_types.h"
#include "fsn_state.h"
#include "fsn_dir.h"
#include "fsn_igl.h"
#include "gp_mapping.h"
#include <math.h>

/*
 * ORIGINAL: fsn.c:42502-42543
 * process_pick_item - Ternary tree layout with CENTER/LEFT/RIGHT children
 *
 * Key structure offsets (32-bit):
 *   param_1 + 0x14: num_files
 *   param_1 + 0x18: files_array
 *   param_1 + 0x28: child_center
 *   param_1 + 0x2c: child_left
 *   param_1 + 0x30: child_right
 *   param_1 + 0x3c: height
 */

/* Original globals referenced */
extern float layout_base_height;
extern float item_spacing_x;
extern undefined child_dir_index_1;
extern undefined child_dir_index_2;
extern undefined child_dir_index_3;

/* Forward declaration */
void render_item_recursive(DirectoryNode *node);
void draw_directory_recursive_original(DirectoryNode *node, void *index_ptr,
                                       float x_offset, float z_offset);

/*
 * ORIGINAL CODE from fsn.c:42502-42543
 * Converted from 32-bit pointer arithmetic to 64-bit struct access
 */
void process_pick_item(DirectoryNode *node)
{
    int iVar1;
    int iVar2;
    float height_offset;

    pushmatrix();

    /* Translate by negative height: -(node->height) */
    height_offset = -node->height;
    translate(0.0f, height_offset);

    /* Render files within this directory */
    iVar1 = 0;
    iVar2 = 0;
    if (0 < node->num_files) {
        do {
            /* Original: render_item_recursive(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2)); */
            render_item_recursive(node->files_array[iVar1]);
            iVar1 = iVar1 + 1;
            iVar2 = iVar2 + 4;  /* Original 32-bit pointer increment */
        } while (iVar1 < node->num_files);
    }

    popmatrix();

    /* Process CENTER child at x=0 */
    if (node->child_center != NULL) {
        /* Original: draw_directory_recursive(*(int *)(param_1 + 0x28), &child_dir_index_1, 0, 0, ...,
         *           (height / scale) + layout_base_height) */
        draw_directory_recursive_original(node->child_center, &child_dir_index_1,
                                          0.0f,  /* x = 0 for center */
                                          node->height + layout_base_height);
    }

    /* Process LEFT child at x = -item_spacing_x */
    if (node->child_left != NULL) {
        /* Original: draw_directory_recursive(*(int *)(param_1 + 0x2c), &child_dir_index_2, ...,
         *           -item_spacing_x, ..., height + layout_base_height) */
        draw_directory_recursive_original(node->child_left, &child_dir_index_2,
                                          -item_spacing_x,  /* x = negative for left */
                                          node->height + layout_base_height);
    }

    /* Process RIGHT child at x = +item_spacing_x */
    if (node->child_right != NULL) {
        /* Original: draw_directory_recursive(*(int *)(param_1 + 0x30), &child_dir_index_3, ...,
         *           +item_spacing_x, ..., height + layout_base_height) */
        draw_directory_recursive_original(node->child_right, &child_dir_index_3,
                                          item_spacing_x,  /* x = positive for right */
                                          node->height + layout_base_height);
    }

    /* Original ended with halt_baddata() - Ghidra artifact */
}


/*
 * ORIGINAL CODE from fsn.c:48802-48824
 * traverse_directories - Recursive tree traversal
 *
 * Key structure offsets:
 *   param_1 + 0x74: render_flags (visibility check: (flags << 3) < 0)
 *   param_1 + 0x14: num_files
 *   param_1 + 0x18: files_array
 */
void traverse_directories(DirectoryNode *node)
{
    int iVar1;
    int iVar2;

    /* Original: if (*(int *)(param_1 + 0x74) << 3 < 0) */
    /* This checks bit 28 (visibility flag) */
    if ((node->render_flags & DIR_FLAG_VISIBLE) != 0) {

        /* Original condition for render_tree_level call:
         * if ((*(int *)(param_1 + 0x74) << 2 < 0) || ((*(ushort *)(param_1 + 0x74) & 1) != 0))
         * This checks bit 29 OR bit 0
         */
        if ((node->render_flags & DIR_FLAG_DIRECTORY) != 0 ||
            (node->render_flags & 1) != 0) {
            render_tree_level(node);
        }

        /* Iterate through files/subdirectories */
        iVar1 = 0;
        iVar2 = 0;
        if (0 < node->num_files) {
            do {
                /* Original: traverse_directories(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2)); */
                traverse_directories(node->files_array[iVar1]);
                iVar1 = iVar1 + 1;
                iVar2 = iVar2 + 4;  /* Original 32-bit increment preserved */
            } while (iVar1 < node->num_files);
        }
    }

    /* Original: halt_baddata(); - Ghidra artifact, removed */
}


/*
 * ORIGINAL CODE from fsn.c:48734-48796
 * render_tree_level - Render a single tree node
 *
 * This function has heavy GP-indirect calls that need decoding.
 * Preserved structure for reference.
 */
void render_tree_level(DirectoryNode *node)
{
    float local_c[3];  /* Child position */
    float local_18[3]; /* Parent position */

    /* Original: if (*(int *)(param_3 + 0x74) << 3 < 0) - visibility check */
    if ((node->render_flags & DIR_FLAG_VISIBLE) == 0) {
        return;
    }

    /* Original: (**(code **)(unaff_gp + -0x7e1c))(2); -> loadname(2) */
    loadname(2);

    /* Original: (**(code **)(unaff_gp + -0x7db0))((int)*(short *)(param_3 + 0x5e)); -> pushname(name_index) */
    pushname(node->name_index);

    /* Original: check depth_indicator for color modulation
     * if (*(short *)(param_3 + 0x76) < 0) { ... color call ... }
     */
    if (node->depth_indicator < 0) {
        /* Original called a color function with depth-based value */
        /* cpack(depth_color); */
    }

    pushmatrix();

    /* Original: translate(pos_x, pos_y) from offsets 0x34, 0x38 */
    translate(node->pos_x, node->pos_y);

    /* Original: scale(node->height) from offset 0x3c */
    scale(node->height, node->height);

    pushmatrix();
    /* Another scale by height */
    scale(node->height, node->height);

    /* Original: (**(code **)(unaff_gp + -0x794c))(0,0,0x1f); -> some drawing call */
    /* This appears to be a box/rect drawing call */

    popmatrix();

    /* Original: translate(0, height) */
    translate(0.0f, node->height);

    /* Original: (**(code **)(unaff_gp + -0x7940))(param_3,1,7,0x1f); -> draw call */
    /* This draws the actual node content */

    /* Original: (**(code **)(unaff_gp + -0x7de8))(); -> endprimitive or similar */

    popmatrix();

    /* Draw connecting line to child_center if present */
    if (node->child_center != NULL) {
        loadname(1);
        pushname(node->name_index);

        /* Calculate line endpoints */
        local_c[0] = node->child_center->pos_x + node->offset_x;
        local_c[1] = node->child_center->pos_y + node->offset_y;
        local_c[2] = -0.5f;  /* Original constant */

        local_18[0] = node->pos_x;
        local_18[1] = node->pos_y - node->height;  /* Adjusted by height */
        local_18[2] = -0.5f;

        bgnline();
        v3f(local_c);
        v3f(local_18);
        endline();

        popname();
    }

    /* Original: halt_baddata(); - removed */
}


/*
 * STUB: render_item_recursive
 * Original: fsn.c:42455-42496
 * Renders individual file items within a directory
 */
void render_item_recursive(DirectoryNode *node)
{
    if (node == NULL) return;
    if ((node->render_flags & DIR_FLAG_VISIBLE) == 0) return;

    /* Original had GP-indirect calls for:
     * - loadname(name_index)
     * - pushmatrix()
     * - translate(pos_x, pos_y)
     * - color selection based on flags
     * - rotate, translate for positioning
     * - rect/rectf drawing
     * - scale, draw_file_icon
     * - popmatrix() x2
     */

    loadname(node->name_index);
    pushmatrix();
    translate(node->pos_x, node->pos_y);

    /* Color based on selection state */
    if ((node->render_flags & DIR_FLAG_SELECTED) != 0) {
        cpack(directory_color_active);
    } else {
        cpack(directory_color_normal);
    }

    pushmatrix();
    rotate(-900, 'z');  /* Original: 0xfffffc7c = -900 */
    translate(0.7f, -0.1125f);  /* Original: 0x3f333333, 0xbde66666 */

    rectf(-0.02f, -0.02f);  /* Original: 0xbca3d70a */

    popmatrix();
    popmatrix();
}


/*
 * STUB: draw_directory_recursive_original
 * Original: fsn.c:42347-42410
 * Heavy GP-indirect version - needs full decoding
 */
void draw_directory_recursive_original(DirectoryNode *node, void *index_ptr,
                                       float x_offset, float z_offset)
{
    (void)index_ptr;

    if (node == NULL) return;
    if ((node->render_flags & DIR_FLAG_VISIBLE) == 0) return;

    loadname(node->name_index);
    pushmatrix();
    translate(x_offset, z_offset);

    /* Original rotated by camera angle */
    rotate(-(*(short *)(curcontext + 0xe)), 'x');

    /* Original translated by translate_y_offset */
    translate(0.0f, translate_y_offset);

    cpack(rect_draw_color);

    /* Original: rectf(scaled_value, scaled_value) */
    rectf(-rotation_factor_y, -rotation_factor_y);

    /* Draw file icon */
    pushmatrix();
    scale(0.05f, 0.05f);  /* Original: 0x3d4ccccd */
    draw_file_icon(node->name);
    popmatrix();

    /* Draw directory name */
    pushmatrix();
    /* Position text based on name length */
    int name_len = node->name_len;
    translate((float)name_len * 0.1f, rotation_factor_y + 0.15f);
    scale(0.05f, 0.05f);
    draw_file_icon(node->name);  /* Original called draw_file_icon with name */
    popmatrix();

    popmatrix();
}
