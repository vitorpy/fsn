/**
 * items.h - Header for items module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_ITEMS_H
#define FSN_ITEMS_H

#include "fsn_types.h"

void count_directory_items(void);
void get_item_by_index(void);
void mark_directory_item(int param_1);
void handle_item_action(int param_1,undefined4 param_2);
void process_pick_item(int param_1);
void calculate_item_params(float *param_1,float *param_2,float *param_3,undefined2 *param_4,
                 undefined2 *param_5,int *param_6,undefined1 *param_7,undefined1 *param_8);
void lookup_context_item(uint param_1);
void update_marked_item(int param_1);
void get_item_screen_coords(undefined4 *param_1);
void set_items_flag(int param_1,char param_2);
void update_items_recursive(int param_1,undefined4 param_2);
void pick_file_item(int param_1,undefined4 *param_2,undefined4 param_3,char param_4,undefined4 param_5
                 ,undefined4 param_6);
void unmark_items_recursive(int param_1);
void mark_items_recursive(int param_1);

#endif /* FSN_ITEMS_H */
