/**
 * gl_utils.h - Header for gl_utils module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_GL_UTILS_H
#define FSN_GL_UTILS_H

#include "fsn_types.h"

void set_main_gl_window(void);
void glx_reset_context_wrapper(void);
void gl_picking_setup_wrapper(void);
void calc_h_angle(void);
void calc_v_angle(void);
void redraw_gl_scene(void);
void init_gl_state(int param_1,undefined4 param_2);
void check_gl_ready(void);
void update_gl_context(void);
void glx_switch_context_wrapper(void);
void destroy_gl_resources(int param_1);
void create_gl_window(int param_1);
void gl_get_dimensions_wrapper(void *out_w, void *out_h, void *out_zmax);
void init_gl_lists(void);
void gl_swap_buffers(undefined1 param_1);
void gl_push_state(void);
void gl_pop_state(void);
void set_gl_context(int param_1,undefined1 param_2);
void glx_swap_buffers_wrapper(void);
void set_gl_color(uint param_1);

#endif /* FSN_GL_UTILS_H */
