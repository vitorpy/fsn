/**
 * selection2.h - Header for selection2 module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_SELECTION2_H
#define FSN_SELECTION2_H

#include "fsn_types.h"

void get_selection_params(int *param_1,undefined4 *param_2,undefined4 *param_3);
void CreateSelectionEntries(undefined4 param_1);
void createSelectedInfo(undefined4 param_1,undefined4 *param_2,undefined4 param_3);
void unselect_directory(void);
void select_directory(int param_1);
void unselect_file(void);
void clear_current_selection(void);
void select_file(undefined4 *param_1);
void checkValidSelections(void);
void get_selection_string(void);
void write_selection_file(undefined2 *param_1,FILE *param_2);

#endif /* FSN_SELECTION2_H */
