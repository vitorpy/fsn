/**
 * persistence.h - Header for persistence module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_PERSISTENCE_H
#define FSN_PERSISTENCE_H

#include "fsn_types.h"

void savecontext(void);
void restorecontext(void);
void savePosition(undefined2 *param_1);
void savePositions(void);
void restorePosition(undefined4 param_1);
void restorePositions(void);

#endif /* FSN_PERSISTENCE_H */
