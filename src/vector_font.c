/**
 * vector_font.c - FSN Vector Stroked Font Renderer
 *
 * Phase 18: Text rendering restoration
 *
 * ORIGINAL: fsn.c:42223-42283 (draw_file_icon)
 *
 * The original FSN used a stroked vector font stored in 'chrtbl'.
 * Each character is 216 bytes: 18 drawing commands of 3 int32s each.
 *
 * Command types:
 *   0 = end of character (stop processing)
 *   1 = move pen position (translate)
 *   2 = begin line + first vertex
 *   3 = continue line (add vertex)
 *   4 = end line + final vertex
 *
 * The coordinates are in font units (roughly 0-10 range).
 */

#include "vector_font.h"
#include "fsn_igl.h"

/* Font data from vector_font_data.c */
extern const int32_t chrtbl[128][54];

/* Character width for spacing (approximate) */
#define CHAR_ADVANCE 8

void draw_file_icon(const char *str)
{
    if (!str) return;

    while (*str) {
        unsigned char c = (unsigned char)*str++;
        const int32_t *glyph;
        int i;
        int in_line = 0;

        /* Clamp to valid range */
        if (c >= 128) c = '?';

        glyph = chrtbl[c];

        /* Check first command - if 0, skip this character */
        if (glyph[0] == 0) continue;

        /* Process up to 18 commands for this character */
        for (i = 0; i < 18; i++) {
            int32_t cmd = glyph[i * 3];
            int32_t x = glyph[i * 3 + 1];
            int32_t y = glyph[i * 3 + 2];

            if (cmd == 0) {
                /* End of character */
                if (in_line) {
                    endline();
                    in_line = 0;
                }
                break;
            }
            else if (cmd == 1) {
                /*
                 * ORIGINAL: translate((float)x, (float)y)
                 * Move to next character position using matrix translate
                 */
                if (in_line) {
                    endline();
                    in_line = 0;
                }
                translate((float)x, (float)y);
            }
            else if (cmd == 2) {
                /* Begin line + first vertex */
                if (in_line) {
                    endline();
                }
                bgnline();
                in_line = 1;
                {
                    int32_t v[2];
                    v[0] = x;
                    v[1] = y;
                    v2i(v);
                }
            }
            else if (cmd == 3) {
                /* Continue line - add vertex */
                if (in_line) {
                    int32_t v[2];
                    v[0] = x;
                    v[1] = y;
                    v2i(v);
                }
            }
            else if (cmd == 4) {
                /* End line + final vertex */
                if (in_line) {
                    int32_t v[2];
                    v[0] = x;
                    v[1] = y;
                    v2i(v);
                    endline();
                    in_line = 0;
                }
            }
            /* Unknown commands are ignored */
        }
    }
}

int get_string_width(const char *str)
{
    int width = 0;

    if (!str) return 0;

    while (*str) {
        unsigned char c = (unsigned char)*str++;
        const int32_t *glyph;
        int i;

        if (c >= 128) c = '?';

        glyph = chrtbl[c];

        /* Find move command (type 1) which gives character width */
        for (i = 0; i < 18; i++) {
            int32_t cmd = glyph[i * 3];
            int32_t x = glyph[i * 3 + 1];

            if (cmd == 0) break;  /* End of char */
            if (cmd == 1) {
                width += x;  /* Move command gives advance width */
                break;
            }
        }

        /* If no move found, use default advance */
        if (i >= 18 || glyph[i * 3] != 1) {
            width += CHAR_ADVANCE;
        }
    }

    return width;
}
