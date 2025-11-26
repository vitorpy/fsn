/**
 * zoom.h - Header for zoom module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_ZOOM_H
#define FSN_ZOOM_H

#include "fsn_types.h"

void pushzoom(void);
void popzoom(void);
void zoomto(double param_1,double param_2);
void shrinkDueToZoom(void);
void findzoom_warp(float *param_1,float *param_2,float *param_3,undefined2 *param_4,
                  undefined2 *param_5,int *param_6,undefined1 *param_7,undefined1 *param_8);
void warpZoomToFile(int param_1,int param_2);
void zoomToSelection(void);
void findzoom_landscape(float *param_1,float *param_2,float *param_3,undefined2 *param_4,
                       undefined2 *param_5,undefined4 *param_6,undefined1 *param_7,
                       undefined1 *param_8);
void findzoom(void);
void landscapeZoomToFile(int param_1,int param_2);
void zoomPosition(undefined4 param_1);

#endif /* FSN_ZOOM_H */
