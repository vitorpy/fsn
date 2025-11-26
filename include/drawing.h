/**
 * drawing.h - Header for drawing module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_DRAWING_H
#define FSN_DRAWING_H

#include "fsn_types.h"

void draw2(void);
void draw_scene(void);
void redraw_gl_scene(void);
void checkRedrawScene(void);
void draw_warp(void);
void draw_file_icon(byte *param_1);
void draw_special(undefined4 *param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6);
void draw_directory_recursive(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6);
void draw_dir(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             char param_5);
void draw_warp_directory(undefined8 param_1,undefined8 param_2,undefined4 *param_3,char param_4);
void draw_positioned_item(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void draw_item_recursive(undefined8 param_1,undefined8 param_2,int param_3);
void prepare_draw_frame(void);
void redrawSelectionNames(void);
void draw_mark_overlay(void);
void set_draw_mode(char param_1);
void finalize_draw_frame(void);
void draw_box(undefined4 *param_1,int param_2,uint param_3);
void draw_legend_color_box(undefined4 *param_1,int param_2,uint param_3);
void draw_file(int param_1,undefined4 *param_2,char param_3,char param_4,undefined4 param_5,
              undefined4 param_6);
void draw_file_pointers(int param_1,int param_2,int param_3);
void draw_files(int param_1,char param_2,uint param_3);
void draw_file_item(int param_1,char param_2,uint param_3);
void draw_directory(ulonglong param_1,int param_2,char param_3);
void draw_directories(char param_1);
void draw_visible_directory(int param_1);
void draw_directory_tree(int param_1);
void draw_visibility(void);
void draw_second_pick(undefined8 param_1,undefined8 param_2,int param_3);
void draw_entry(int param_1,undefined4 param_2);
void draw_scaled_element(double param_1,double param_2);
void draw_alt(void);
void cIconDraw(int param_1);

#endif /* FSN_DRAWING_H */
