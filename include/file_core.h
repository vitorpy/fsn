/**
 * file_core.h - Header for file_core module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_FILE_CORE_H
#define FSN_FILE_CORE_H

#include "fsn_types.h"

void filemessage(char *param_1,char *param_2,undefined4 param_3);
void fileerror(char *param_1,char *param_2);
void hash_filename(char *param_1);
void calculate_file_view(int param_1);
void compare_files(undefined4 *param_1,undefined4 *param_2);
void findfile(int param_1,undefined4 param_2);
void write_file_entry(FILE *param_1);
void fileChanged(int param_1,char *param_2);
void fileCreated(int param_1,char *param_2);
void fileDeleted(int param_1,char *param_2);
void fileExecuting(int param_1);
void fileStoppedExecuting(undefined4 param_1);
void checkPointerFile(int param_1,undefined4 param_2);
void viewFile(undefined4 param_1,undefined4 *param_2);
void findbestfile(char *param_1,int *param_2,undefined4 *param_3);
void dump_database_file(int *param_1);

#endif /* FSN_FILE_CORE_H */
