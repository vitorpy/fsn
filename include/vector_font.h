/**
 * vector_font.h - FSN Vector Stroked Font
 *
 * Original FSN rendered text labels using a stroked vector font,
 * NOT bitmap glyphs. This module provides the original font data
 * and rendering function.
 */

#ifndef VECTOR_FONT_H
#define VECTOR_FONT_H

#include <stdint.h>

/**
 * Original font data extracted from fsn.original binary.
 * 128 characters, 54 int32s each (18 commands of 3 values).
 */
extern const int32_t chrtbl[128][54];

/**
 * draw_file_icon - Render string using vector stroked font
 *
 * ORIGINAL: fsn.c:42223-42283
 *
 * Renders each character as a series of line segments.
 * Call after setting up transforms (translate, rotate, scale).
 *
 * @param str  Null-terminated string to render
 */
void draw_file_icon(const char *str);

/**
 * get_string_width - Get width of string in font units
 *
 * Used for centering/positioning text.
 *
 * @param str  String to measure
 * @return Width in font coordinate units
 */
int get_string_width(const char *str);

#endif /* VECTOR_FONT_H */
