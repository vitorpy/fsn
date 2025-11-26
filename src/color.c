/**
 * color.c
 *
 * Color space conversion functions for FSN.
 * Clean implementations of standard algorithms.
 *
 * Note: Original decompiled functions were too corrupted (halt_baddata,
 * GP indirect calls) to extract. These are standard implementations.
 */

#include "color.h"
#include <math.h>

/*=============================================================================
 * Helper Functions
 *============================================================================*/

static float min3(float a, float b, float c) {
    float m = a;
    if (b < m) m = b;
    if (c < m) m = c;
    return m;
}

static float max3(float a, float b, float c) {
    float m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    return m;
}

float clamp_color(float value) {
    if (value < 0.0f) return 0.0f;
    if (value > 1.0f) return 1.0f;
    return value;
}

/*=============================================================================
 * RGB <-> HSV Conversion
 *============================================================================*/

void rgb_to_hsv(const ColorRGB *rgb, ColorHSV *hsv) {
    float r = rgb->r;
    float g = rgb->g;
    float b = rgb->b;

    float cmax = max3(r, g, b);
    float cmin = min3(r, g, b);
    float delta = cmax - cmin;

    /* Value */
    hsv->v = cmax;

    /* Saturation */
    if (cmax > 0.0f) {
        hsv->s = delta / cmax;
    } else {
        hsv->s = 0.0f;
    }

    /* Hue */
    if (delta < 0.00001f) {
        hsv->h = 0.0f;  /* Undefined, default to 0 */
    } else if (cmax == r) {
        hsv->h = 60.0f * fmodf((g - b) / delta, 6.0f);
    } else if (cmax == g) {
        hsv->h = 60.0f * ((b - r) / delta + 2.0f);
    } else {
        hsv->h = 60.0f * ((r - g) / delta + 4.0f);
    }

    if (hsv->h < 0.0f) {
        hsv->h += 360.0f;
    }
}

void hsv_to_rgb(const ColorHSV *hsv, ColorRGB *rgb) {
    float h = hsv->h;
    float s = hsv->s;
    float v = hsv->v;

    if (s < 0.00001f) {
        /* Achromatic (gray) */
        rgb->r = rgb->g = rgb->b = v;
        return;
    }

    /* Normalize hue to [0, 360) */
    while (h >= 360.0f) h -= 360.0f;
    while (h < 0.0f) h += 360.0f;

    h /= 60.0f;  /* sector 0 to 5 */
    int i = (int)floorf(h);
    float f = h - i;  /* factorial part of h */
    float p = v * (1.0f - s);
    float q = v * (1.0f - s * f);
    float t = v * (1.0f - s * (1.0f - f));

    switch (i) {
        case 0:
            rgb->r = v; rgb->g = t; rgb->b = p;
            break;
        case 1:
            rgb->r = q; rgb->g = v; rgb->b = p;
            break;
        case 2:
            rgb->r = p; rgb->g = v; rgb->b = t;
            break;
        case 3:
            rgb->r = p; rgb->g = q; rgb->b = v;
            break;
        case 4:
            rgb->r = t; rgb->g = p; rgb->b = v;
            break;
        default:  /* case 5 */
            rgb->r = v; rgb->g = p; rgb->b = q;
            break;
    }
}

/*=============================================================================
 * RGB <-> HLS Conversion
 *============================================================================*/

void rgb_to_hls(const ColorRGB *rgb, ColorHLS *hls) {
    float r = rgb->r;
    float g = rgb->g;
    float b = rgb->b;

    float cmax = max3(r, g, b);
    float cmin = min3(r, g, b);
    float delta = cmax - cmin;

    /* Lightness */
    hls->l = (cmax + cmin) / 2.0f;

    if (delta < 0.00001f) {
        /* Achromatic */
        hls->h = 0.0f;
        hls->s = 0.0f;
        return;
    }

    /* Saturation */
    if (hls->l < 0.5f) {
        hls->s = delta / (cmax + cmin);
    } else {
        hls->s = delta / (2.0f - cmax - cmin);
    }

    /* Hue */
    if (cmax == r) {
        hls->h = 60.0f * fmodf((g - b) / delta, 6.0f);
    } else if (cmax == g) {
        hls->h = 60.0f * ((b - r) / delta + 2.0f);
    } else {
        hls->h = 60.0f * ((r - g) / delta + 4.0f);
    }

    if (hls->h < 0.0f) {
        hls->h += 360.0f;
    }
}

static float hls_hue_to_rgb(float p, float q, float t) {
    if (t < 0.0f) t += 1.0f;
    if (t > 1.0f) t -= 1.0f;

    if (t < 1.0f/6.0f) return p + (q - p) * 6.0f * t;
    if (t < 1.0f/2.0f) return q;
    if (t < 2.0f/3.0f) return p + (q - p) * (2.0f/3.0f - t) * 6.0f;
    return p;
}

void hls_to_rgb(const ColorHLS *hls, ColorRGB *rgb) {
    float h = hls->h / 360.0f;  /* Normalize to [0, 1] */
    float l = hls->l;
    float s = hls->s;

    if (s < 0.00001f) {
        /* Achromatic */
        rgb->r = rgb->g = rgb->b = l;
        return;
    }

    float q = (l < 0.5f) ? (l * (1.0f + s)) : (l + s - l * s);
    float p = 2.0f * l - q;

    rgb->r = hls_hue_to_rgb(p, q, h + 1.0f/3.0f);
    rgb->g = hls_hue_to_rgb(p, q, h);
    rgb->b = hls_hue_to_rgb(p, q, h - 1.0f/3.0f);
}

/*=============================================================================
 * Integer RGB Conversion
 *============================================================================*/

void rgb_to_irgb(const ColorRGB *rgb, int *r, int *g, int *b) {
    *r = (int)(clamp_color(rgb->r) * 255.0f + 0.5f);
    *g = (int)(clamp_color(rgb->g) * 255.0f + 0.5f);
    *b = (int)(clamp_color(rgb->b) * 255.0f + 0.5f);
}

void irgb_to_rgb(int r, int g, int b, ColorRGB *rgb) {
    rgb->r = (float)r / 255.0f;
    rgb->g = (float)g / 255.0f;
    rgb->b = (float)b / 255.0f;
}

/*=============================================================================
 * Packed Color Conversion
 *============================================================================*/

PackedColor rgb_to_packed(const ColorRGB *rgb) {
    int r, g, b;
    rgb_to_irgb(rgb, &r, &g, &b);
    /* Format: 0xAARRGGBB (alpha = 0xFF) */
    return (PackedColor)(0xFF000000 | (r << 16) | (g << 8) | b);
}

void packed_to_rgb(PackedColor packed, ColorRGB *rgb) {
    int r = (packed >> 16) & 0xFF;
    int g = (packed >> 8) & 0xFF;
    int b = packed & 0xFF;
    irgb_to_rgb(r, g, b, rgb);
}

/*=============================================================================
 * Color Interpolation
 *============================================================================*/

void color_lerp(const ColorRGB *a, const ColorRGB *b, float t, ColorRGB *result) {
    t = clamp_color(t);
    result->r = a->r + (b->r - a->r) * t;
    result->g = a->g + (b->g - a->g) * t;
    result->b = a->b + (b->b - a->b) * t;
}
