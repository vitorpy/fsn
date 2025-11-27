/**
 * block_render.c - Box rendering with extracted geometry data
 *
 * Decoded from fsn.c GP-indirect calls:
 * - GP - 0x7b9c = cpack (set packed color)
 * - GP - 0x7d54 = bgnpolygon
 * - GP - 0x7d3c = endpolygon
 * - GP - 0x7dc0 = v3f
 * - GP - 0x7d24 = bgnline
 * - GP - 0x7d20 = endline
 * - GP - 0x7b7c = bgnpoint
 * - GP - 0x7b94 = endpoint
 *
 * Geometry data extracted from MIPS binary at ~/Downloads/fsn
 */

#include "block_render.h"
#include "box_geometry.h"
#include "fsn_types.h"
#include "fsn_state.h"
#include "fsn_igl.h"
#include <stdio.h>

/**
 * draw_legend_color_box - Draw a 3D box with specified faces
 *
 * @param_1: Color array pointer (4 packed colors for different faces)
 *           [0] = top color, [1] = front color, [2] = back color, [3] = side color
 * @param_2: Render mode
 *           0 = wireframe with different face colors
 *           1 = wireframe outline
 *           2 = single quad (front face variant using alt indices 0)
 *           3 = center line (point to point)
 *           4 = single quad (diagonal face using alt indices 1)
 * @param_3: Face bitmask (which faces to draw, for modes 0 and 1)
 *           bit 0 (0x01) = front face
 *           bit 1 (0x02) = left face
 *           bit 2 (0x04) = right face
 *           bit 3 (0x08) = back face
 *           bit 4 (0x10) = top face
 *           bit 5 (0x20) = bottom face
 */
void draw_legend_color_box(undefined4 *param_1, int param_2, uint param_3)
{
    int i;
    float v[3];
    static int debug_count = 0;

    (void)debug_count;  /* Debug removed - rendering confirmed working */

    if (param_2 == 4) {
        /* Mode 4: Draw diagonal quad using alt_faces[1] = {0,1,6,7} */
        if (param_1 != NULL) {
            cpack((uint32_t)*param_1);
        }
        bgnpolygon();
        v3f((float *)fsn_box_vertices[fsn_box_alt_faces[1][0]]);
        v3f((float *)fsn_box_vertices[fsn_box_alt_faces[1][1]]);
        v3f((float *)fsn_box_vertices[fsn_box_alt_faces[1][3]]);
        v3f((float *)fsn_box_vertices[fsn_box_alt_faces[1][2]]);
        endpolygon();
    }
    else if (param_2 == 3) {
        /* Mode 3: Draw center vertical line */
        if (param_1 != NULL) {
            cpack((uint32_t)*param_1);
        }
        bgnpoint();
        v3f((float *)fsn_box_center_line[0]);
        v3f((float *)fsn_box_center_line[1]);
        endpoint();
    }
    else if (param_2 == 2) {
        /* Mode 2: Draw front quad using alt_faces[0] = {0,1,4,5} */
        if (param_1 != NULL) {
            cpack((uint32_t)*param_1);
        }
        bgnpolygon();
        v3f((float *)fsn_box_vertices[fsn_box_alt_faces[0][0]]);
        v3f((float *)fsn_box_vertices[fsn_box_alt_faces[0][1]]);
        v3f((float *)fsn_box_vertices[fsn_box_alt_faces[0][3]]);
        v3f((float *)fsn_box_vertices[fsn_box_alt_faces[0][2]]);
        endpolygon();
    }
    else {
        /* Mode 0 or 1: Draw box faces based on bitmask */
        bool use_face_colors = (param_2 != 1 && param_1 != NULL);

        /* For mode 1, set initial color from param_1[1] (front color) */
        if (param_2 == 1 && param_1 != NULL) {
            cpack((uint32_t)param_1[1]);
        }

        /* Front face (bit 0) */
        if ((param_3 & FSN_FACE_FRONT) != 0) {
            if (use_face_colors) {
                cpack((uint32_t)param_1[1]);  /* front color */
            }
            if (param_2 == 1) {
                /* Wireframe */
                bgnline();
                for (i = 0; i < 4; i++) {
                    v3f((float *)fsn_box_vertices[fsn_box_faces[0][i]]);
                }
                endline();
            } else {
                /* Filled */
                bgnpolygon();
                v3f((float *)fsn_box_vertices[fsn_box_faces[0][0]]);
                v3f((float *)fsn_box_vertices[fsn_box_faces[0][1]]);
                v3f((float *)fsn_box_vertices[fsn_box_faces[0][3]]);
                v3f((float *)fsn_box_vertices[fsn_box_faces[0][2]]);
                endpolygon();
            }
        }

        /* Left face (bit 1) */
        if (use_face_colors) {
            cpack((uint32_t)param_1[3]);  /* side color */
        }
        if ((param_3 & FSN_FACE_LEFT) != 0) {
            if (param_2 == 1) {
                bgnline();
                for (i = 0; i < 4; i++) {
                    v3f((float *)fsn_box_vertices[fsn_box_faces[1][i]]);
                }
                endline();
            } else {
                bgnpolygon();
                v3f((float *)fsn_box_vertices[fsn_box_faces[1][0]]);
                v3f((float *)fsn_box_vertices[fsn_box_faces[1][1]]);
                v3f((float *)fsn_box_vertices[fsn_box_faces[1][3]]);
                v3f((float *)fsn_box_vertices[fsn_box_faces[1][2]]);
                endpolygon();
            }
        }

        /* Right face (bit 2) */
        if ((param_3 & FSN_FACE_RIGHT) != 0) {
            if (param_2 == 1) {
                bgnline();
                for (i = 0; i < 4; i++) {
                    v3f((float *)fsn_box_vertices[fsn_box_faces[2][i]]);
                }
                endline();
            } else {
                bgnpolygon();
                v3f((float *)fsn_box_vertices[fsn_box_faces[2][0]]);
                v3f((float *)fsn_box_vertices[fsn_box_faces[2][1]]);
                v3f((float *)fsn_box_vertices[fsn_box_faces[2][3]]);
                v3f((float *)fsn_box_vertices[fsn_box_faces[2][2]]);
                endpolygon();
            }
        }

        /* Back face (bit 3) */
        if ((param_3 & FSN_FACE_BACK) != 0) {
            if (use_face_colors) {
                cpack((uint32_t)param_1[2]);  /* back color */
            }
            if (param_2 == 1) {
                bgnline();
                for (i = 0; i < 4; i++) {
                    v3f((float *)fsn_box_vertices[fsn_box_faces[3][i]]);
                }
                endline();
            } else {
                bgnpolygon();
                v3f((float *)fsn_box_vertices[fsn_box_faces[3][0]]);
                v3f((float *)fsn_box_vertices[fsn_box_faces[3][1]]);
                v3f((float *)fsn_box_vertices[fsn_box_faces[3][3]]);
                v3f((float *)fsn_box_vertices[fsn_box_faces[3][2]]);
                endpolygon();
            }
        }

        /* Top face (bit 4) */
        if ((param_3 & FSN_FACE_TOP) != 0) {
            if (use_face_colors) {
                cpack((uint32_t)*param_1);  /* top color */
            }
            if (param_2 == 1) {
                bgnline();
                for (i = 0; i < 4; i++) {
                    v3f((float *)fsn_box_vertices[fsn_box_faces[4][i]]);
                }
                endline();
            } else {
                bgnpolygon();
                v3f((float *)fsn_box_vertices[fsn_box_faces[4][0]]);
                v3f((float *)fsn_box_vertices[fsn_box_faces[4][1]]);
                v3f((float *)fsn_box_vertices[fsn_box_faces[4][3]]);
                v3f((float *)fsn_box_vertices[fsn_box_faces[4][2]]);
                endpolygon();
            }
        }

        /* Bottom face (bit 5) */
        if ((param_3 & FSN_FACE_BOTTOM) != 0) {
            if (param_2 == 1) {
                bgnline();
                for (i = 0; i < 4; i++) {
                    v3f((float *)fsn_box_vertices[fsn_box_faces[5][i]]);
                }
                endline();
            } else {
                bgnpolygon();
                v3f((float *)fsn_box_vertices[fsn_box_faces[5][0]]);
                v3f((float *)fsn_box_vertices[fsn_box_faces[5][1]]);
                v3f((float *)fsn_box_vertices[fsn_box_faces[5][3]]);
                v3f((float *)fsn_box_vertices[fsn_box_faces[5][2]]);
                endpolygon();
            }
        }
    }
    /* Note: Original had halt_baddata() here due to decompilation artifact - removed */
}
