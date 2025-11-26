/**
 * rendering.h - Header for rendering module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_RENDERING_H
#define FSN_RENDERING_H

#include "fsn_types.h"

void render_item_recursive(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 char param_5);
void begin_overview_render(void);
void render_overview_frame(void);
void setup_item_render(int param_1,char param_2);
void begin_rendering(void);
void end_rendering(void);
void render_file_icon(int param_1,undefined4 *param_2,char param_3,char param_4,undefined4 param_5,
                 undefined4 param_6);
void set_render_flag(char param_1);
void render_directory(int param_1);
void render_tree_level(undefined8 param_1,undefined8 param_2,int param_3);
void init_rendering(void);
void flush_rendering(int param_1);
void setup_rendering(void);
void init_render_state(void);

#endif /* FSN_RENDERING_H */
