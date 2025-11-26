/**
 * color.h - Color space conversion functions
 *
 * SGI IrisGL compatible color system.
 * Supports RGB, CMY, HSV, HLS, and YIQ color spaces.
 */

#ifndef FSN_COLOR_H
#define FSN_COLOR_H

/* Color system constants */
#define COLORSYS_RGB 1
#define COLORSYS_CMY 2
#define COLORSYS_HSV 3
#define COLORSYS_HLS 4
#define COLORSYS_YIQ 5

/* RGB identity */
void rgb_to_rgb(float r, float g, float b, float *or, float *og, float *ob);

/* CMY <-> RGB */
void cmy_to_rgb(float c, float m, float y, float *r, float *g, float *b);
void rgb_to_cmy(float r, float g, float b, float *c, float *m, float *y);

/* HSV <-> RGB */
void hsv_to_rgb(float h, float s, float v, float *r, float *g, float *b);
void rgb_to_hsv(float r, float g, float b, float *h, float *s, float *v);

/* HSB (alias for HSV) */
void hsb_to_rgb(float h, float s, float b, float *r, float *g, float *ob);
void rgb_to_hsb(float r, float g, float b, float *h, float *s, float *ob);

/* HLS <-> RGB */
void hls_to_rgb(float h, float l, float s, float *r, float *g, float *b);
void rgb_to_hls(float r, float g, float b, float *h, float *l, float *s);

/* YIQ <-> RGB */
void yiq_to_rgb(float y, float i, float q, float *r, float *g, float *b);
void rgb_to_yiq(float r, float g, float b, float *y, float *i, float *q);

/* Float RGB to Integer RGB (0-255) */
void rgb_to_irgb(float r, float g, float b, int *ir, int *ig, int *ib);

/* Color system management */
void setcolorsys(int system);
int getcolorsys(void);

/* Generic conversion using current color system */
void torgb(float c1, float c2, float c3, float *r, float *g, float *b);
void fromrgb(float r, float g, float b, float *c1, float *c2, float *c3);

/* RGB complement (hue rotation by 180 degrees) */
void rgbcomplement(float r, float g, float b, float *cr, float *cg, float *cb);

#endif /* FSN_COLOR_H */
