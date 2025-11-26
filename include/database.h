/**
 * database.h - Header for database module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_DATABASE_H
#define FSN_DATABASE_H

#include "fsn_types.h"

void update_database_view(void);
void extract_position_data(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,float *param_4,
                 float *param_5,float *param_6,int *param_7,int *param_8,int *param_9,
                 undefined1 *param_10);
void format_data_output(int param_1,int param_2,int param_3,int param_4,int *param_5);
void init_database_node(int param_1);
void update_database_entry(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4);

#endif /* FSN_DATABASE_H */
