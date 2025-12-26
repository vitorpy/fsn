/**
 * highlight.h - Header for highlight module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_HIGHLIGHT_H
#define FSN_HIGHLIGHT_H

#include "fsn_types.h"

/* FIXED: First two params are floats based on assembly analysis */
void highlightSpecialDir(float param_1, float param_2, undefined4 param_3, undefined4 param_4);
void highlightDirWarp(undefined8 param_1,undefined8 param_2,int param_3);
void highlightFileWarp(int param_1,int param_2);
/* highlightOverviewDir - now declared in overview.h with DirectoryNode* type */
void highlightDirLandscape(int param_1);
void highlightDir(void);
void highlightFileLandscape(int param_1,int param_2);
void highlightFile(void);
void baseLocateHighlight(int param_1,undefined4 *param_2,int param_3);
void locateHighlight(void);
void overviewLocateHighlight(void);
void locateHighlightAction(undefined4 param_1,int param_2);
void highlightByName(undefined4 param_1);
void locateClear(void);
void locateClearAction(undefined4 param_1,int param_2);

#endif /* FSN_HIGHLIGHT_H */
