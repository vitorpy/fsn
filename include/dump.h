/**
 * dump.h - Header for dump module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_DUMP_H
#define FSN_DUMP_H

#include "fsn_types.h"

void dumpDatabaseCB(void);
void databaseDumpTimeout(void);
void scheduleDatabaseDumpTimeout(void);
void dumpMarks(FILE *param_1);

#endif /* FSN_DUMP_H */
