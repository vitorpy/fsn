/**
 * position.h - Header for position module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_POSITION_H
#define FSN_POSITION_H

#include "fsn_types.h"

void calculate_layout_position(int param_1);
void draw_positioned_item(undefined4 param_1, undefined4 param_2);
void get_position_coords(int param_1,int *param_2,undefined4 *param_3);
void savePosition(undefined2 *param_1);
void get_view_position(void *param_1);
void getPosition(void *param_1,void *param_2,void *param_3,void *param_4,
                void *param_5,void *param_6,void *param_7,void *param_8,void *param_9,
                void *param_10);
void extract_position_data(void *param_1,void *param_2,void *param_3,void *param_4,
                 void *param_5,void *param_6,void *param_7,void *param_8,void *param_9,
                 void *param_10);
void restorePosition(undefined4 param_1);
void zoomPosition(undefined4 param_1);
void equalPositions(void);
void writePosition(undefined2 *param_1,FILE *param_2);
void readPosition(undefined2 *param_1,FILE *param_2);

#endif /* FSN_POSITION_H */
