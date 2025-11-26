/**
 * marks.h - Header for marks module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_MARKS_H
#define FSN_MARKS_H

#include "fsn_types.h"

void mark_directory_item(int param_1);
void draw_mark_overlay(void);
void clear_marked_state(void);
void update_marked_item(int param_1);
void unmark_items_recursive(int param_1);
void mark_items_recursive(int param_1);
void markAllVisible(int param_1);
void addMark(char *param_1,undefined4 *param_2);
void createMarkControls(undefined4 param_1);
void init_mark_panel(undefined4 param_1);
void dumpMarks(FILE *param_1);
void readMark(FILE *param_1);

#endif /* FSN_MARKS_H */
