/**
 * warp.h - Header for warp module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_WARP_H
#define FSN_WARP_H

#include "fsn_types.h"

void draw_warp(void);
void do_warp(int param_1);
void draw_warp_directory(undefined8 param_1,undefined8 param_2,undefined4 *param_3,char param_4);
void findzoom_warp(float *param_1,float *param_2,float *param_3,undefined2 *param_4,
                  undefined2 *param_5,int *param_6,undefined1 *param_7,undefined1 *param_8);
void highlightDirWarp(undefined8 param_1,undefined8 param_2,int param_3);
void highlightFileWarp(int param_1,int param_2);
void warpZoomToFile(int param_1,int param_2);
void get_warp_entry(int param_1,float *param_2,float *param_3);

#endif /* FSN_WARP_H */
