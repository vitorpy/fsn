/**
 * picking.h - Header for picking module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_PICKING_H
#define FSN_PICKING_H

#include "fsn_types.h"

void gl_picking_setup_wrapper(void);
void process_pick_item(int param_1);
void pickWarp(int *param_1,undefined4 *param_2,undefined4 *param_3);
void pick_file_item(int param_1,undefined4 *param_2,undefined4 param_3,char param_4,undefined4 param_5
                 ,undefined4 param_6);
void overviewPickPointer(void);
void draw_second_pick(undefined8 param_1,undefined8 param_2,int param_3);
void pickLandscape(int *param_1,undefined4 *param_2,undefined4 *param_3);
void pickPointer(void);

#endif /* FSN_PICKING_H */
