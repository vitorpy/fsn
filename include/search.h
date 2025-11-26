/**
 * search.h - Header for search module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_SEARCH_H
#define FSN_SEARCH_H

#include "fsn_types.h"

void process_search_results(void);
void bsearch2(undefined4 param_1,uint param_2,int param_3,int param_4,undefined4 param_5,
             uint *param_6);
void createSearch(undefined4 param_1);
void init_search_panel(undefined4 param_1);
void search_file_entry(undefined4 param_1,undefined4 *param_2);
void findfile(int param_1,undefined4 param_2);
void finddir(int param_1,undefined4 param_2);
void find_directory_by_path(int param_1,undefined4 param_2);
void findDirByFullName(char *param_1);
void findbestfile(char *param_1,int *param_2,undefined4 *param_3);
void find_string_index(int param_1);

#endif /* FSN_SEARCH_H */
