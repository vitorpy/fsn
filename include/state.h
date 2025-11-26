/**
 * state.h - Header for state module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_STATE_H
#define FSN_STATE_H

#include "fsn_types.h"

void init_app_state(void);
void init_camera_state(void);
void reset_view_state(void);
void init_gl_state(int param_1,undefined4 param_2);
void save_matrix_state(void);
void init_database_state(void);
void init_directory_state(void);
void reset_display_state(void);
void update_item_state(int param_1);
void clear_marked_state(void);
void get_cursor_state(int *param_1,undefined4 *param_2,undefined4 *param_3);
void init_render_state(void);
void update_list_state(void);
void reset_list_state(void);
void set_context_state(uint param_1,char param_2);
void gl_push_state(void);
void gl_pop_state(void);
void init_display_state(void);
void clear_selection_state(void);
void sync_fam_state(undefined4 param_1);
void refresh_fam_state(void);
void init_network_state(void);

#endif /* FSN_STATE_H */
