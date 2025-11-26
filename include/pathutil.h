/**
 * pathutil.h - Header for pathutil module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_PATHUTIL_H
#define FSN_PATHUTIL_H

#include "fsn_types.h"

void build_path_string(char *param_1,undefined4 *param_2);
void dirToPath(undefined1 *param_1,int param_2);
void find_directory_by_path(int param_1,undefined4 param_2);
void get_path_entry(int param_1);
void expand_path(undefined4 param_1);
void process_path_buffer(undefined4 param_1,char *param_2,int param_3);

#endif /* FSN_PATHUTIL_H */
