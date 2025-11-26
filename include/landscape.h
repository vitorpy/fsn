/**
 * landscape.h - Header for landscape module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_LANDSCAPE_H
#define FSN_LANDSCAPE_H

#include "fsn_types.h"

void pickLandscape(int *param_1,undefined4 *param_2,undefined4 *param_3);
void findzoom_landscape(float *param_1,float *param_2,float *param_3,undefined2 *param_4,
                       undefined2 *param_5,undefined4 *param_6,undefined1 *param_7,
                       undefined1 *param_8);
void highlightDirLandscape(int param_1);
void highlightFileLandscape(int param_1,int param_2);
void landscapeZoomToFile(int param_1,int param_2);

#endif /* FSN_LANDSCAPE_H */
