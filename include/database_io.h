/**
 * database_io.h - Header for database_io module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_DATABASE_IO_H
#define FSN_DATABASE_IO_H

#include "fsn_types.h"

void init_database_state(void);
void write_database_entry(undefined4 param_1);
void dumpDatabaseCB(void);
void databaseDumpTimeout(void);
void scheduleDatabaseDumpTimeout(void);
void init_database_display(void);
void scanDatabase(int param_1);
void rescanDatabase(void);
void update_database_view(void);
void readingDatabaseMessage(void);
void buildingDatabaseMessage(void);
void dump_database_file(int *param_1);
void init_database_node(int param_1);
void update_database_entry(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4);
void dump_directory_tree(FILE *param_1,undefined4 *param_2,int param_3);
void dumpMarks(FILE *param_1);

#endif /* FSN_DATABASE_IO_H */
