/**
 * visibility.h - Header for visibility module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_VISIBILITY_H
#define FSN_VISIBILITY_H

#include "fsn_types.h"

void show_controls(void);
void show_error_message(undefined4 param_1);
void show_error_dialog(undefined4 param_1,undefined4 param_2);
void showOverview(void);
void hideOverview(void);
void close_connections(int *param_1,int param_2);
void close_file_handle(int param_1);

#endif /* FSN_VISIBILITY_H */
