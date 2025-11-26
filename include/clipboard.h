/**
 * clipboard.h - Header for clipboard module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_CLIPBOARD_H
#define FSN_CLIPBOARD_H

#include "fsn_types.h"

void setMoveAndCopyButtons(void);
void copy_file_item(undefined4 param_1,undefined4 *param_2);
void copycontext(void);
void createCopyright(undefined4 param_1,int param_2,int param_3);
void destroyCopyright(void);
void copy_selection_data(undefined2 *param_1,undefined4 param_2);
void copy_buffer_data(int param_1,undefined4 *param_2);

#endif /* FSN_CLIPBOARD_H */
