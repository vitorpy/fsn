/**
 * file_ops.h - Header for file_ops module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_FILE_OPS_H
#define FSN_FILE_OPS_H

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
void pick_file_item(int param_1,undefined4 *param_2,undefined4 param_3,char param_4,undefined4 param_5
                 ,undefined4 param_6);
void gotoFileName(undefined4 param_1);
void draw_file(int param_1,undefined4 *param_2,char param_3,char param_4,undefined4 param_5,
              undefined4 param_6);
void draw_file_pointers(int param_1,int param_2,int param_3);
void draw_files(int param_1,char param_2,uint param_3);
void draw_file_item(int param_1,char param_2,uint param_3);
void checkPointerFile(int param_1,undefined4 param_2);
void highlightFileLandscape(int param_1,int param_2);
void highlightFile(void);
void landscapeZoomToFile(int param_1,int param_2);
void viewFile(undefined4 param_1,undefined4 *param_2);
void copy_file_item(undefined4 param_1,undefined4 *param_2);
void load_filetype_rules_wrapper(undefined4 param_1);

#endif /* FSN_FILE_OPS_H */
