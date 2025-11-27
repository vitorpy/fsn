/**
 * box_geometry.c - Box vertex data extracted from original FSN binary
 *
 * Data extracted from ~/Downloads/fsn MIPS binary at:
 * - Vertices: .data + 0x6f40 (fsn_resources + 0x6f40)
 * - Face indices: .data + 0x6fa0 through 0x7020
 *
 * Original FSN used this pre-computed unit cube for all 3D blocks.
 */

#include "box_geometry.h"

/* Unit cube vertices - extracted from binary at 0x10006f40
 * Cube spans (-0.5, -0.5, 0) to (0.5, 0.5, 1)
 * Bottom face at z=0, top face at z=1
 */
const float fsn_box_vertices[8][3] = {
    { -0.5f, -0.5f, 0.0f },  /* v0: bottom-left-front */
    {  0.5f, -0.5f, 0.0f },  /* v1: bottom-right-front */
    {  0.5f,  0.5f, 0.0f },  /* v2: bottom-right-back */
    { -0.5f,  0.5f, 0.0f },  /* v3: bottom-left-back */
    { -0.5f, -0.5f, 1.0f },  /* v4: top-left-front */
    {  0.5f, -0.5f, 1.0f },  /* v5: top-right-front */
    {  0.5f,  0.5f, 1.0f },  /* v6: top-right-back */
    { -0.5f,  0.5f, 1.0f },  /* v7: top-left-back */
};

/* Face indices - extracted from binary at 0x10006fa0
 * Each face has 4 vertex indices forming a quad
 * Order: front, left, right, back, top, bottom
 */
const int fsn_box_faces[6][4] = {
    { 0, 1, 5, 4 },  /* front face  (0x6fa0) - facing -Y */
    { 3, 0, 4, 7 },  /* left face   (0x6fb0) - facing -X */
    { 1, 2, 6, 5 },  /* right face  (0x6fc0) - facing +X */
    { 2, 3, 7, 6 },  /* back face   (0x6fd0) - facing +Y */
    { 4, 5, 6, 7 },  /* top face    (0x6fe0) - facing +Z */
    { 0, 1, 2, 3 },  /* bottom face (0x6ff0) - facing -Z */
};

/* Alternative face indices at 0x7000-0x701c */
const int fsn_box_alt_faces[2][4] = {
    { 0, 1, 4, 5 },  /* 0x7000: front face variant */
    { 0, 1, 6, 7 },  /* 0x7010: diagonal face */
};

/* Center line vertices at 0x7020, 0x702c - for type 3 rendering */
const float fsn_box_center_line[2][3] = {
    { 0.0f, 0.0f, 0.0f },  /* bottom center */
    { 0.0f, 0.0f, 1.0f },  /* top center */
};

/* Face bit flags matching param_3 in draw_legend_color_box */
/* bit 0 (0x01): front face
 * bit 1 (0x02): left face
 * bit 2 (0x04): right face
 * bit 3 (0x08): back face
 * bit 4 (0x10): top face
 * bit 5 (0x20): bottom face
 */
