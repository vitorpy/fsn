/**
 * view_camera.h - Header for view_camera module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_VIEW_CAMERA_H
#define FSN_VIEW_CAMERA_H

#include "fsn_types.h"

void init_view_transform(void);
void init_camera_state(void);
void calc_v_angle(void);
void reset_view_state(void);
void reset_eye(void);
void set_camera_lookat(double param_1,double param_2);
void pushzoom(void);
void popzoom(void);
void zoomto(double param_1,double param_2);
void shrinkDueToZoom(void);
void findzoom_warp(float *param_1,float *param_2,float *param_3,undefined2 *param_4,
                  undefined2 *param_5,int *param_6,undefined1 *param_7,undefined1 *param_8);
void findzoom_landscape(float *param_1,float *param_2,float *param_3,undefined2 *param_4,
                       undefined2 *param_5,undefined4 *param_6,undefined1 *param_7,
                       undefined1 *param_8);
void findzoom(void);
void zoomPosition(undefined4 param_1);
void calculate_view_params(float *param_1,float *param_2,float *param_3,undefined2 *param_4,
                 undefined2 *param_5,undefined4 *param_6,undefined1 *param_7,undefined1 *param_8);
void get_view_extents(int param_1,float *param_2,float *param_3);
void get_view_position(undefined2 *param_1);
void refresh_view(void);
void refresh_view_recursive(void);
void update_view_recursive(int param_1,int param_2);
void configure_viewport(int param_1,undefined4 *param_2,int param_3);
void viewport(void);

#endif /* FSN_VIEW_CAMERA_H */
