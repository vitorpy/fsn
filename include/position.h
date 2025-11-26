/**
 * position.h - Header for position module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_POSITION_H
#define FSN_POSITION_H

#include "fsn_types.h"

void calculate_layout_position(int param_1);
void draw_positioned_item(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void get_position_coords(int param_1,int *param_2,undefined4 *param_3);
void savePosition(undefined2 *param_1);
void get_view_position(undefined2 *param_1);
void savePositions(void);
void getPosition(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,float *param_4,
                float *param_5,float *param_6,int *param_7,int *param_8,int *param_9,
                undefined1 *param_10);
void extract_position_data(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,float *param_4,
                 float *param_5,float *param_6,int *param_7,int *param_8,int *param_9,
                 undefined1 *param_10);
void restorePosition(undefined4 param_1);
void restorePositions(void);
void zoomPosition(undefined4 param_1);
void equalPositions(void);
void writePosition(undefined2 *param_1,FILE *param_2);
void readPosition(undefined2 *param_1,FILE *param_2);

#endif /* FSN_POSITION_H */
