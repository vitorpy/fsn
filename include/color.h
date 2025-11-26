/**
 * color.h - Color space conversion functions
 *
 * Extracted from fsn.c (lines 61254-61558)
 * These appear to be IRIS GL color system functions.
 */

#ifndef FSN_COLOR_H
#define FSN_COLOR_H

#include "fsn_types.h"

/* Color space conversions */
void cmy_to_rgb(double param_1, double param_2);
void hls_to_rgb(void);
void hsv_to_rgb(void);
void hsb_to_rgb(undefined4 param_1, undefined4 param_2);
void yiq_to_rgb(double param_1, double param_2);
void rgb_to_rgb(double param_1, double param_2);
void rgb_to_cmy(double param_1, double param_2);
void rgb_to_irgb(double param_1, double param_2);
void rgb_to_hls(void);
void rgb_to_hsv(void);
void rgb_to_hsb(undefined4 param_1, undefined4 param_2);
void rgb_to_yiq(double param_1, double param_2);

/* Color system management */
void setcolorsys(int param_1);
void getcolorsys(void);
void torgb(undefined4 param_1, undefined4 param_2);
void fromrgb(undefined4 param_1, undefined4 param_2);
void rgbcomplement(undefined4 param_1, undefined4 param_2);

#endif /* FSN_COLOR_H */
