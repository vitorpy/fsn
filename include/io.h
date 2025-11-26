/**
 * io.h - Header for io module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_IO_H
#define FSN_IO_H

#include "fsn_types.h"

void write_database_entry(undefined4 param_1);
void writePosition(undefined2 *param_1,FILE *param_2);
void readingDatabaseMessage(void);
void readPosition(undefined2 *param_1,FILE *param_2);
void readMark(FILE *param_1);
void read_data_section(int param_1,int param_2,int *param_3,int param_4);
void read_context_value(int *param_1,undefined4 param_2);
void apply_context_changes(undefined8 param_1,undefined8 param_2,undefined4 *param_3,char param_4);
void apply_label_color(uint param_1,undefined4 *param_2,int param_3,undefined4 param_4);
void apply_pending_updates(void);

#endif /* FSN_IO_H */
