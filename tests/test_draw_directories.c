/**
 * test_draw_directories.c
 *
 * Unit test for draw_directories() to verify call sequence against binary.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "../include/fsn_context.h"
#include "../include/fsn_dir.h" /* For DirectoryNode */

/* Externs from fsn_state.c */
extern char context[];
extern char grid_display_flag;
extern int bg_color_normal;
extern int bg_color_grid;
extern float ground_scale_width;
extern float view_offset_y;
extern float view_offset_z;
extern float base_y_offset;
extern int graphics_state_mode;
extern int current_packed_color;
extern int graphics_render_flags;
extern int highlight_color;
extern int highlight_packed_color;
/* topdir is declared in fsn_state.h included by draw_tree.c */

/* Mocks for dependencies */
/* We can't override static inline apply_context_changes from fsn_stubs_generated.h */
/* But we can override process_tree_node_impl if it's not static inline */

void draw_legend_color_box(unsigned int *colors, int mode, unsigned int faces) {
    printf("call draw_legend_color_box colors=%p mode=%d faces=%u\n", (void*)colors, mode, faces);
}

void draw_file_icon(const char *name) {
    printf("call draw_file_icon \"%s\"\n", name);
}

void spotlight(float base_x, float base_y, float base_z,
               float top_x, float top_y, float top_z,
               float width, unsigned int color, int mode) {
    printf("call spotlight from (%.1f,%.1f,%.1f) to (%.1f,%.1f,%.1f) width=%.1f color=0x%x mode=%d\n",
           base_x, base_y, base_z, top_x, top_y, top_z, width, color, mode);
}

void draw_scaled_element_impl(float base_x, float base_y, float base_z,
                              float top_x, float top_y, float top_z,
                              float width, unsigned int color, int mode) {
    printf("call draw_scaled_element_impl from (%.1f,%.1f,%.1f) to (%.1f,%.1f,%.1f) width=%.1f color=0x%x mode=%d\n",
           base_x, base_y, base_z, top_x, top_y, top_z, width, color, mode);
}

/* Include source under test */
#include "../src/draw_tree.c"

/* We need to override the implementation of process_tree_node_impl inside draw_tree.c 
   But we can't because we just included the file that defines it.
   
   Solution: We define a preprocessor macro to rename the real function in the source,
   then provide our mock.
*/

int main() {
    printf("TEST: draw_tree_content (was draw_directories)\n");
    
    /* Setup Context */
    curcontext = context;
    FsnContext *ctx = (FsnContext *)curcontext;
    
    ctx->camera_x = 100.0f;
    ctx->camera_y = 200.0f;
    ctx->camera_z = 50.0f;
    ctx->scale_factor = 1.0f;
    ctx->zoom_mode = 0;
    
    /* Trig values */
    ctx->sin_x = 0.0f;
    ctx->cos_z = 1.0f;
    
    /* Globals */
    ground_scale_width = 2000.0f;
    view_offset_y = 500.0f;
    view_offset_z = 500.0f;
    base_y_offset = 200.0f;
    
    /* Mock topdir */
    static DirectoryNode root_node = { 0 };
    root_node.name = "ROOT";
    topdir = (undefined4*)&root_node;

    /* Test 1: Grid Mode (Gradient Sky) */
    printf("\n--- Test 1: Grid Mode (Gradient) ---\n");
    grid_display_flag = 1;
    graphics_state_mode = 0x111111;    /* top sky */
    current_packed_color = 0x222222;   /* bottom sky */
    graphics_render_flags = 0x333333;  /* far ground */
    highlight_color = 0x444444;        /* near ground */
    
    draw_tree_content(0);

    /* Test 2: Flat Mode */
    printf("\n--- Test 2: Flat Mode ---\n");
    grid_display_flag = 0;
    highlight_packed_color = 0x555555; /* flat ground color */
    
    draw_tree_content(0);

    return 0;
}
