/**
 * sgi_utils.h - Header for sgi_utils module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_SGI_UTILS_H
#define FSN_SGI_UTILS_H

#include "fsn_types.h"

void SG_getDefaultDepth(int param_1,undefined4 param_2,int *param_3,int param_4);
void SG_getMatchingVisual(int param_1,int param_2,int param_3,int *param_4,int param_5,int param_6);
void SG_getMaxDepth(int param_1,int param_2,int *param_3,int param_4);
void SG_getNormalArgs(undefined4 param_1,undefined4 param_2,int param_3,int *param_4);
void SG_getOverlayArgs(undefined4 param_1,undefined4 param_2,int param_3,int *param_4);
void SG_getOverlay2Args(undefined4 param_1,undefined4 param_2,int param_3,int *param_4);
void SG_getOverlay4Args(undefined4 param_1,undefined4 param_2,int param_3,int *param_4);
void SG_getPopupArgs(undefined4 param_1,undefined4 param_2,int param_3,int *param_4);
void SG_getUnderlayArgs(undefined4 param_1,undefined4 param_2,int param_3,int *param_4);
void SG_getVisualArgs(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,int param_6,int *param_7);

#endif /* FSN_SGI_UTILS_H */
