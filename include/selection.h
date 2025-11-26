/**
 * selection.h - Header for selection module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_SELECTION_H
#define FSN_SELECTION_H

#include "fsn_types.h"

void gselect(void);
void endselect(void);
void get_selection_params(int *param_1,undefined4 *param_2,undefined4 *param_3);
void CreateSelectionMenus(undefined4 param_1,undefined4 param_2);
void CreateSelectionEntries(undefined4 param_1);
void createSelectedInfo(undefined4 param_1,undefined4 *param_2,undefined4 param_3);
void redrawSelectionNames(void);
void unselect_directory(void);
void select_directory(int param_1);
void unselect_file(void);
void clear_current_selection(void);
void select_file(undefined4 *param_1);
void checkValidSelections(void);
void zoomToSelection(void);
void get_selection_string(void);
void clear_selection_state(void);
void copy_selection_data(undefined2 *param_1,undefined4 param_2);
void write_selection_file(undefined2 *param_1,FILE *param_2);

#endif /* FSN_SELECTION_H */
