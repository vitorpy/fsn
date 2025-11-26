/**
 * directory.h - Header for directory module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_DIRECTORY_H
#define FSN_DIRECTORY_H

#include "fsn_types.h"

void setup_directory_handler(void);
void process_directory_data(int param_1);
void validate_directory(int param_1);
void create_directory_entry(void);
void allocate_directory_entry(void);
void count_directory_items(void);
void update_directory_layout(int param_1);
void update_directory_bounds(int param_1);
void init_directory_layout(int param_1);
void validate_directory_access(int param_1,undefined4 param_2);
void find_directory_by_path(int param_1,undefined4 param_2);
void mark_directory_item(int param_1);
void check_directory_flags(undefined4 *param_1,char *param_2,char *param_3,char param_4);
void process_child_directory(int param_1);
void cleanup_directory(int param_1);
void create_root_directory(char *param_1);
void init_directory_state(void);
void get_directory_info(uint param_1,undefined4 param_2);
void refresh_directory_view(int param_1);
void draw_directory(ulonglong param_1,int param_2,char param_3);
void draw_visible_directory(int param_1);
void render_directory(int param_1);
void draw_directory_tree(int param_1);

#endif /* FSN_DIRECTORY_H */
