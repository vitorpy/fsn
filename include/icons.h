/**
 * icons.h - Header for icons module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_ICONS_H
#define FSN_ICONS_H

#include "fsn_types.h"

void draw_file_icon(byte *param_1);
void render_file_icon(int param_1,undefined4 *param_2,char param_3,char param_4,undefined4 param_5,
                 undefined4 param_6);
void init_icon_resources(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void cIconInit(undefined4 param_1);
void cFindIconByName(undefined4 param_1);
void cFindIconByType(undefined4 param_1);
void eval_icon_script(undefined4 param_1);
void cIconToTypeName(void);
void get_icon_string(void);
void cIconGetValue(void);
void get_icon_attribute(void);
void get_icon_bounds(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5);
void cIconDraw(int param_1);
void set_icon_flags(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6);
void init_icon_context(void);
void setup_icon_entry(undefined1 *param_1,int param_2);
void get_icon_result(undefined4 *param_1);
void icon_bytecode_eval_wrapper(undefined4 *param_1);

#endif /* FSN_ICONS_H */
