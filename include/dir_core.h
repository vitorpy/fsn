/**
 * dir_core.h - Header for dir_core module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_DIR_CORE_H
#define FSN_DIR_CORE_H

#include "fsn_types.h"

void validate_directory(int param_1);
void index_to_dir(void);
void update_directory_bounds(int param_1);
void compare_dirs(undefined4 *param_1,undefined4 *param_2);
void validate_directory_access(int param_1,undefined4 param_2);
void finddir(int param_1,undefined4 param_2);
void check_directory_flags(undefined4 *param_1,char *param_2,char *param_3,char param_4);
void cleanup_directory(int param_1);
void create_root_directory(char *param_1);
void get_directory_info(uint param_1,undefined4 param_2);
void updateDir(int param_1);
void add_directory_monitor(int param_1);

#endif /* FSN_DIR_CORE_H */
