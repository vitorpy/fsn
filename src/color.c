/**
 * color.c - Color space conversion functions
 *
 * Reimplemented from SGI IrisGL color system.
 * Supports RGB, CMY, HSV, HLS, and YIQ color spaces.
 */

#include "color.h"
#include "fsn_types.h"
#include <stdio.h>
#include <math.h>

/* SGI GL Color System Constants */
#define COLORSYS_RGB 1
#define COLORSYS_CMY 2
#define COLORSYS_HSV 3
#define COLORSYS_HLS 4
#define COLORSYS_YIQ 5

/* Current color system (default RGB) */
static int current_color_system = COLORSYS_RGB;

/*=============================================================================
 * RGB Identity
 *============================================================================*/

void rgb_to_rgb(float r, float g, float b, float *or, float *og, float *ob)
{
    *or = r;
    *og = g;
    *ob = b;
}

/*=============================================================================
 * CMY <-> RGB Conversion
 * CMY is subtractive color model: C = 1-R, M = 1-G, Y = 1-B
 *============================================================================*/

void cmy_to_rgb(float c, float m, float y, float *r, float *g, float *b)
{
    *r = 1.0f - c;
    *g = 1.0f - m;
    *b = 1.0f - y;
}

void rgb_to_cmy(float r, float g, float b, float *c, float *m, float *y)
{
    *c = 1.0f - r;
    *m = 1.0f - g;
    *y = 1.0f - b;
}

/*=============================================================================
 * HSV <-> RGB Conversion
 * H: 0-360 degrees, S: 0-1, V: 0-1
 *============================================================================*/

void hsv_to_rgb(float h, float s, float v, float *r, float *g, float *b)
{
    if (s == 0.0f) {
        /* Achromatic (gray) */
        *r = *g = *b = v;
        return;
    }

    h = fmodf(h, 360.0f);
    if (h < 0) h += 360.0f;
    h /= 60.0f;

    int i = (int)h;
    float f = h - i;
    float p = v * (1.0f - s);
    float q = v * (1.0f - s * f);
    float t = v * (1.0f - s * (1.0f - f));

    switch (i) {
        case 0:  *r = v; *g = t; *b = p; break;
        case 1:  *r = q; *g = v; *b = p; break;
        case 2:  *r = p; *g = v; *b = t; break;
        case 3:  *r = p; *g = q; *b = v; break;
        case 4:  *r = t; *g = p; *b = v; break;
        default: *r = v; *g = p; *b = q; break;
    }
}

void rgb_to_hsv(float r, float g, float b, float *h, float *s, float *v)
{
    float max = fmaxf(fmaxf(r, g), b);
    float min = fminf(fminf(r, g), b);
    float delta = max - min;

    *v = max;

    if (max == 0.0f) {
        *s = 0.0f;
        *h = 0.0f;
        return;
    }

    *s = delta / max;

    if (delta == 0.0f) {
        *h = 0.0f;
        return;
    }

    if (r == max) {
        *h = (g - b) / delta;
    } else if (g == max) {
        *h = 2.0f + (b - r) / delta;
    } else {
        *h = 4.0f + (r - g) / delta;
    }

    *h *= 60.0f;
    if (*h < 0.0f) *h += 360.0f;
}

/* HSB is an alias for HSV */
void hsb_to_rgb(float h, float s, float b, float *r, float *g, float *ob)
{
    hsv_to_rgb(h, s, b, r, g, ob);
}

void rgb_to_hsb(float r, float g, float b, float *h, float *s, float *ob)
{
    rgb_to_hsv(r, g, b, h, s, ob);
}

/*=============================================================================
 * HLS <-> RGB Conversion
 * H: 0-360 degrees, L: 0-1, S: 0-1
 *============================================================================*/

static float hls_value(float n1, float n2, float hue)
{
    hue = fmodf(hue, 360.0f);
    if (hue < 0) hue += 360.0f;

    if (hue < 60.0f)
        return n1 + (n2 - n1) * hue / 60.0f;
    if (hue < 180.0f)
        return n2;
    if (hue < 240.0f)
        return n1 + (n2 - n1) * (240.0f - hue) / 60.0f;
    return n1;
}

void hls_to_rgb(float h, float l, float s, float *r, float *g, float *b)
{
    if (s == 0.0f) {
        *r = *g = *b = l;
        return;
    }

    float m2 = (l <= 0.5f) ? l * (1.0f + s) : l + s - l * s;
    float m1 = 2.0f * l - m2;

    *r = hls_value(m1, m2, h + 120.0f);
    *g = hls_value(m1, m2, h);
    *b = hls_value(m1, m2, h - 120.0f);
}

void rgb_to_hls(float r, float g, float b, float *h, float *l, float *s)
{
    float max = fmaxf(fmaxf(r, g), b);
    float min = fminf(fminf(r, g), b);
    float delta = max - min;

    *l = (max + min) / 2.0f;

    if (delta == 0.0f) {
        *h = 0.0f;
        *s = 0.0f;
        return;
    }

    *s = (*l <= 0.5f) ? delta / (max + min) : delta / (2.0f - max - min);

    if (r == max) {
        *h = (g - b) / delta;
    } else if (g == max) {
        *h = 2.0f + (b - r) / delta;
    } else {
        *h = 4.0f + (r - g) / delta;
    }

    *h *= 60.0f;
    if (*h < 0.0f) *h += 360.0f;
}

/*=============================================================================
 * YIQ <-> RGB Conversion
 * NTSC color space used in analog TV
 *============================================================================*/

void yiq_to_rgb(float y, float i, float q, float *r, float *g, float *b)
{
    *r = y + 0.956f * i + 0.621f * q;
    *g = y - 0.272f * i - 0.647f * q;
    *b = y - 1.106f * i + 1.703f * q;

    /* Clamp to [0,1] */
    if (*r < 0.0f) *r = 0.0f; if (*r > 1.0f) *r = 1.0f;
    if (*g < 0.0f) *g = 0.0f; if (*g > 1.0f) *g = 1.0f;
    if (*b < 0.0f) *b = 0.0f; if (*b > 1.0f) *b = 1.0f;
}

void rgb_to_yiq(float r, float g, float b, float *y, float *i, float *q)
{
    *y = 0.299f * r + 0.587f * g + 0.114f * b;
    *i = 0.596f * r - 0.274f * g - 0.322f * b;
    *q = 0.211f * r - 0.523f * g + 0.312f * b;
}

/*=============================================================================
 * Float RGB to Integer RGB (0-255)
 *============================================================================*/

void rgb_to_irgb(float r, float g, float b, int *ir, int *ig, int *ib)
{
    *ir = (int)(r * 255.0f + 0.5f);
    *ig = (int)(g * 255.0f + 0.5f);
    *ib = (int)(b * 255.0f + 0.5f);

    /* Clamp to [0,255] */
    if (*ir < 0) *ir = 0; if (*ir > 255) *ir = 255;
    if (*ig < 0) *ig = 0; if (*ig > 255) *ig = 255;
    if (*ib < 0) *ib = 0; if (*ib > 255) *ib = 255;
}

/*=============================================================================
 * Color System Management
 *============================================================================*/

void setcolorsys(int system)
{
    if (system >= COLORSYS_RGB && system <= COLORSYS_YIQ) {
        current_color_system = system;
    } else {
        fprintf(stderr, "bad color system no %d\n", system);
    }
}

int getcolorsys(void)
{
    return current_color_system;
}

/*=============================================================================
 * Generic Conversion Functions
 * torgb: Convert from current color system to RGB
 * fromrgb: Convert from RGB to current color system
 *============================================================================*/

void torgb(float c1, float c2, float c3, float *r, float *g, float *b)
{
    switch (current_color_system) {
        case COLORSYS_RGB:
            rgb_to_rgb(c1, c2, c3, r, g, b);
            break;
        case COLORSYS_CMY:
            cmy_to_rgb(c1, c2, c3, r, g, b);
            break;
        case COLORSYS_HSV:
            hsv_to_rgb(c1, c2, c3, r, g, b);
            break;
        case COLORSYS_HLS:
            hls_to_rgb(c1, c2, c3, r, g, b);
            break;
        case COLORSYS_YIQ:
            yiq_to_rgb(c1, c2, c3, r, g, b);
            break;
        default:
            /* Default to identity */
            *r = c1; *g = c2; *b = c3;
            break;
    }
}

void fromrgb(float r, float g, float b, float *c1, float *c2, float *c3)
{
    switch (current_color_system) {
        case COLORSYS_RGB:
            rgb_to_rgb(r, g, b, c1, c2, c3);
            break;
        case COLORSYS_CMY:
            rgb_to_cmy(r, g, b, c1, c2, c3);
            break;
        case COLORSYS_HSV:
            rgb_to_hsv(r, g, b, c1, c2, c3);
            break;
        case COLORSYS_HLS:
            rgb_to_hls(r, g, b, c1, c2, c3);
            break;
        case COLORSYS_YIQ:
            rgb_to_yiq(r, g, b, c1, c2, c3);
            break;
        default:
            /* Default to identity */
            *c1 = r; *c2 = g; *c3 = b;
            break;
    }
}

/*=============================================================================
 * RGB Complement
 * Computes the color complement by rotating hue 180 degrees in HSV space
 *============================================================================*/

void rgbcomplement(float r, float g, float b, float *cr, float *cg, float *cb)
{
    float h, s, v;

    rgb_to_hsv(r, g, b, &h, &s, &v);
    h += 180.0f;
    if (h >= 360.0f) h -= 360.0f;
    hsv_to_rgb(h, s, v, cr, cg, cb);
}
