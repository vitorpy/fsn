/**
 * cicon.h - Header for cicon module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_CICON_H
#define FSN_CICON_H

#include "fsn_types.h"

void cIconInit(undefined4 param_1);
void cIconToTypeName(void);
void cIconGetValue(void);
void cFindIconByName(undefined4 param_1);
void cFindIconByType(undefined4 param_1);
void cGetBounds(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
               undefined4 *param_5);
void cSetState(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6);

#endif /* FSN_CICON_H */
