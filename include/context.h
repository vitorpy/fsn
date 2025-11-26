/**
 * context.h - Header for context module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_CONTEXT_H
#define FSN_CONTEXT_H

#include "fsn_types.h"

void setup_context_widgets(void);
void glx_reset_context_wrapper(void);
void apply_context_changes(undefined8 param_1,undefined8 param_2,undefined4 *param_3,char param_4);
void refresh_context_view(int param_1,int param_2);
void update_context_display(int param_1,int param_2);
void init_context_menus(undefined4 param_1,undefined4 param_2);
void configure_context_widget(undefined4 param_1);
void create_context_widget(undefined4 param_1,int *param_2,undefined4 param_3);
void lookup_context_item(uint param_1);
void update_gl_context(void);
void glx_switch_context_wrapper(void);
void update_context_bounds(int param_1,int param_2);
void newcontext(uint param_1,char param_2);
void set_context_state(uint param_1,char param_2);
void swapcontext(undefined1 param_1);
void savecontext(void);
void restorecontext(void);
void setcontext(int param_1,undefined1 param_2);
void set_gl_context(int param_1,undefined1 param_2);
void copycontext(void);
void init_context_windows(void);
void myContext(undefined4 param_1,undefined4 param_2);
void get_bytecode_context(int param_1,int param_2);

#endif /* FSN_CONTEXT_H */
