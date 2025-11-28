/**
 * fsn_stubs.h - Stub declarations for truly undefined functions
 *
 * These are either:
 * 1. Ghidra decompilation artifacts (halt_baddata)
 * 2. IRIX-specific library functions needing replacement
 * 3. Functions that don't exist in any source file
 */

#ifndef FSN_STUBS_H
#define FSN_STUBS_H

#include <stdio.h>
#include <stdlib.h>

/* Ghidra artifact - indicates bad decompilation, should never be called */
static inline void halt_baddata(void) {
    fprintf(stderr, "FATAL: halt_baddata() called - Ghidra decompilation error\n");
    abort();
}

/*=============================================================================
 * Functions defined in stubs.c or other source files (extern declarations)
 *============================================================================*/
extern void makePatterns(void);  /* fsn_igl.c - Initialize stipple patterns */
extern void gl_picking_setup_wrapper(void);
extern void init_display_lists(void);
extern void flush_rendering(int param);
extern void glx_swap_current_buffer(void);  /* Phase 11: GLX buffer swap */
extern void redraw_gl_scene(void);
extern void do_warp(int param_1);
extern void clear_current_selection(void);
extern void set_camera_lookat(double param_1, double param_2);
extern void clear_marked_state(void);
extern undefined4 eval_bytecode_instruction(int param_1, int param_2, int param_3, int param_4, int param_5);
extern void build_path_string(char *param_1, undefined4 *param_2);
extern int get_bytecode_context(int param_1, int param_2);
extern void get_item_screen_coords(undefined4 *param_1);
/* set_status_message and display_status_message declared in messages.h */

/*=============================================================================
 * IRIX stdio internals - replace with modern equivalents
 *============================================================================*/
/* __flsbuf - IRIX stdio flush buffer, use putc instead */
#define __flsbuf(c, f) putc(c, f)

/* __semputc - IRIX thread-safe putc, use putc */
#define __semputc(c, f) putc(c, f)

/*=============================================================================
 * Functions not found in any source file - need actual stubs
 *============================================================================*/

/* get_current_time - returns current time in some format */
static inline int get_current_time(void) {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return (int)(tv.tv_sec * 1000 + tv.tv_usec / 1000);
}

/* Context loading - not yet implemented */
static inline void load_context_block(void *block, unsigned int param) {
    (void)block; (void)param;
    /* TODO: Implement context block loading */
}

static inline void load_context_data(void *data, unsigned int param) {
    (void)data; (void)param;
    /* TODO: Implement context data loading */
}

static inline void parse_context_data(void *block, unsigned int param) {
    (void)block; (void)param;
    /* TODO: Implement context data parsing */
}

/* C++ mangled name stub - ByteCodedIcon::setState */
static inline void setState__13ByteCodedIconFiN41(unsigned int p1, unsigned int p2,
                                                   unsigned int p3, unsigned int p4,
                                                   unsigned int p5, unsigned int p6) {
    (void)p1; (void)p2; (void)p3; (void)p4; (void)p5; (void)p6;
    /* TODO: Implement bytecode icon state setting */
}

/*=============================================================================
 * Phase B: Forward declarations for ~110 missing functions
 * These are stub implementations to satisfy the compiler.
 * Real implementations will be extracted from disabled modules later.
 *============================================================================*/

static inline void begin_overview_render(void) { /* TODO */ }
static inline void calculate_item_params(void) { /* TODO */ }
static inline void calculate_view_params(void) { /* TODO */ }
static inline void destroy_gl_resources(void) { /* TODO */ }
static inline void draw_item_recursive(void) { /* TODO */ }
static inline void draw_overview_content(void) { /* TODO */ }
static inline void end_rendering(void) { /* TODO */ }
static inline void gl_pop_state(void) { /* TODO */ }
static inline void gl_push_state(void) { /* TODO */ }
static inline void glx_reset_context_wrapper(void) { /* TODO */ }
static inline void glx_swap_buffers_wrapper(void) { /* TODO */ }
static inline void glx_switch_context_wrapper(void) { /* TODO */ }
static inline void init_app_state(void) { /* TODO */ }
/* init_camera_state - implemented in stubs.c */
void init_camera_state(void);
static inline void init_color_menus(void) { /* TODO */ }
static inline void init_database_display(void) { /* TODO */ }
static inline void init_database_state(void) { /* TODO */ }
static inline int init_display_mode(void) { return 0; }
static inline void init_display_state(void) { /* TODO */ }
static inline void init_gl_lists(void) { makePatterns(); }
static inline void init_gl_state(void *cb, void *p) { (void)cb; (void)p; /* TODO */ }
static inline void init_icon_context(void) { /* TODO */ }
static inline void init_panel_layout(void) { /* TODO */ }
/* init_view_transform - implemented in stubs.c */
void init_view_transform(void);
static inline void process_pending_events(void) { /* TODO */ }
static inline void process_search_results(void) { /* TODO */ }
static inline void read_data_section(void) { /* TODO */ }
static inline void refresh_after_change(void) { /* TODO */ }
static inline void refresh_context_view(void) { /* TODO */ }
static inline void refresh_display(void) { /* TODO */ }
static inline void refresh_legend_colors(void) { /* TODO */ }
static inline void refresh_list_display(void) { /* TODO */ }
static inline void refresh_view(void) { /* TODO */ }
static inline void reset_list_state(void) { /* TODO */ }
static inline void save_matrix_state(void) { /* TODO */ }
/* set_main_gl_window moved to window.c */
extern void setup_context_widgets(void);  /* Implemented in stubs.c */
static inline void setup_directory_handler(void) { /* TODO */ }
static inline void setup_event_handlers(void) { /* TODO */ }
static inline void setup_fam_monitoring(void) { /* TODO */ }
static inline void setup_rendering(void) { /* TODO */ }
static inline void showOverview(void) { /* TODO */ }
static inline void show_controls(void) { /* TODO */ }
static inline void toggle_legend(void) { /* TODO */ }
static inline void ui_layout_setup_wrapper(void) { /* TODO */ }
static inline void update_display(void) { /* TODO */ }
static inline void update_legend_display(void) { /* TODO */ }
static inline void update_list_state(void) { /* TODO */ }
static inline void update_tree_bounds(void) { /* TODO */ }
static inline void update_view_recursive(void) { /* TODO */ }
static inline void update_widget_state(void) { /* TODO */ }

#endif /* FSN_STUBS_H */

