/**
 * color.h
 *
 * Color space conversion functions for FSN.
 * Standard algorithms reimplemented from scratch due to decompilation issues.
 */

#ifndef FSN_COLOR_H
#define FSN_COLOR_H

#include "fsn_types.h"

/*=============================================================================
 * RGB Color Structure
 *============================================================================*/
typedef struct {
    float r;  /* Red:   0.0 - 1.0 */
    float g;  /* Green: 0.0 - 1.0 */
    float b;  /* Blue:  0.0 - 1.0 */
} ColorRGB;

/*=============================================================================
 * HSV Color Structure
 *============================================================================*/
typedef struct {
    float h;  /* Hue:        0.0 - 360.0 */
    float s;  /* Saturation: 0.0 - 1.0 */
    float v;  /* Value:      0.0 - 1.0 */
} ColorHSV;

/*=============================================================================
 * HLS Color Structure
 *============================================================================*/
typedef struct {
    float h;  /* Hue:        0.0 - 360.0 */
    float l;  /* Lightness:  0.0 - 1.0 */
    float s;  /* Saturation: 0.0 - 1.0 */
} ColorHLS;

/*=============================================================================
 * Packed Color (32-bit RGBA)
 *============================================================================*/
typedef uint32_t PackedColor;

/*=============================================================================
 * Color Conversion Functions
 *============================================================================*/

/**
 * Convert RGB to HSV color space.
 * @param rgb Input RGB color (0.0-1.0 range)
 * @param hsv Output HSV color
 */
void rgb_to_hsv(const ColorRGB *rgb, ColorHSV *hsv);

/**
 * Convert HSV to RGB color space.
 * @param hsv Input HSV color
 * @param rgb Output RGB color (0.0-1.0 range)
 */
void hsv_to_rgb(const ColorHSV *hsv, ColorRGB *rgb);

/**
 * Convert RGB to HLS color space.
 * @param rgb Input RGB color (0.0-1.0 range)
 * @param hls Output HLS color
 */
void rgb_to_hls(const ColorRGB *rgb, ColorHLS *hls);

/**
 * Convert HLS to RGB color space.
 * @param hls Input HLS color
 * @param rgb Output RGB color (0.0-1.0 range)
 */
void hls_to_rgb(const ColorHLS *hls, ColorRGB *rgb);

/**
 * Convert floating-point RGB to integer RGB (0-255 range).
 * @param rgb Input RGB color (0.0-1.0 range)
 * @param r Output red (0-255)
 * @param g Output green (0-255)
 * @param b Output blue (0-255)
 */
void rgb_to_irgb(const ColorRGB *rgb, int *r, int *g, int *b);

/**
 * Convert integer RGB (0-255 range) to floating-point RGB.
 * @param r Input red (0-255)
 * @param g Input green (0-255)
 * @param b Input blue (0-255)
 * @param rgb Output RGB color (0.0-1.0 range)
 */
void irgb_to_rgb(int r, int g, int b, ColorRGB *rgb);

/**
 * Pack RGB color into 32-bit value (0xAARRGGBB format).
 * @param rgb Input RGB color (0.0-1.0 range)
 * @return Packed 32-bit color
 */
PackedColor rgb_to_packed(const ColorRGB *rgb);

/**
 * Unpack 32-bit color to RGB (0xAARRGGBB format).
 * @param packed Input packed color
 * @param rgb Output RGB color (0.0-1.0 range)
 */
void packed_to_rgb(PackedColor packed, ColorRGB *rgb);

/**
 * Clamp a float value to [0.0, 1.0] range.
 * @param value Input value
 * @return Clamped value
 */
float clamp_color(float value);

/**
 * Linear interpolation between two colors.
 * @param a First color
 * @param b Second color
 * @param t Interpolation factor (0.0 = a, 1.0 = b)
 * @param result Output interpolated color
 */
void color_lerp(const ColorRGB *a, const ColorRGB *b, float t, ColorRGB *result);

#endif /* FSN_COLOR_H */
