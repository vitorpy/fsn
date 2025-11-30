/**
 * Test harness for draw_child_node in src/draw_tree.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

/* Mocks for dependencies */
/* undefined4 is typically uint32_t or unsigned int */
typedef unsigned int undefined4;
typedef unsigned int uint;

void draw_legend_color_box(undefined4 *colors, int mode, uint faces) {
    printf("call draw_legend_color_box colors=%p mode=%d faces=%u\n", colors, mode, faces);
}

void spotlight(float x1, float y1, float z1, float x2, float y2, float z2, float width, unsigned int color, int mode) {
    printf("call spotlight (%.1f,%.1f,%.1f) -> (%.1f,%.1f,%.1f) color=0x%x\n", x1, y1, z1, x2, y2, z2, color);
}

void draw_file_icon(const char *name) {
    printf("call draw_file_icon \"%s\"\n", name);
}

void draw_scaled_element_impl(float x1, float y1, float z1, float x2, float y2, float z2, float width, unsigned int color, int mode) {
    printf("call draw_scaled_element_impl ...\n");
}

/* Include source under test */
/* We define FSN_IGL_H to prevent re-inclusion issues if mocks conflict, 
   but since we use fsn_igl.h for types, we need it. 
   Our mock_fsn_igl.c implements the functions. */
#include "../src/draw_tree.c"

/* Extern from fsn_state.c */
extern char context[];

int main() {
    printf("TEST: draw_child_node\n");
    
    /* Setup Context */
    curcontext = context;
    
    /* Offsets: 0xe = rotation_x */
    *(short *)(curcontext + 0xe) = -450; /* -45 degrees */

    /* Setup Data */
    DirectoryNode parent = {0};
    parent.pos_x = 0.0f;
    parent.pos_y = 0.0f;

    DirectoryNode child = {0};
    child.render_flags = DIR_FLAG_VISIBLE; // Visible (File by default)
    child.pos_x = 10.0f;
    child.pos_y = 10.0f;
    child.offset_x = 10.0f;
    child.offset_y = 10.0f;
    child.height = 2.0f;
    child.name = "test_file";
    child.name_index = 123;

    /* Run Function */
    printf("--- Calling draw_child_node ---\\n");
    draw_child_node(&parent, &child, 0);
    printf("--- Done ---\\n");

    return 0;
}
