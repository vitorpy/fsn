/**
 * spotlight.c - Selection beam and platform rendering
 *
 * RESTORATION: Extracted from fsn.c lines 49781-49928
 * These functions use setpattern() for the iconic FSN visual effect.
 *
 * spotlight() draws the selection beam that highlights selected items.
 * draw_scaled_element() draws the raised platform under directories.
 */

#include "fsn_types.h"
#include "fsn_state.h"
#include "fsn_igl.h"
#include <math.h>

/**
 * spotlight - Draw selection beam with circle, smooth lines, and patterned fill
 *
 * ORIGINAL: fsn.c:49781-49851
 *
 * Parameters (from stack in original MIPS code):
 *   base_x, base_y, base_z   - Base position of beam (bottom point)
 *   top_x, top_y, top_z      - Top position (where circle is)
 *   width                     - Half-width of beam at top
 *   color                     - Packed color for beam
 *   outline_only              - If non-zero, only draw outline (no fill)
 */
void spotlight(float base_x, float base_y, float base_z,
               float top_x, float top_y, float top_z,
               float width, unsigned int color, int outline_only)
{
    float left[3];   /* Left point at top */
    float right[3];  /* Right point at top */
    float base[3];   /* Base point (bottom) */

    /* Set up the three points of the beam triangle */
    base[0] = base_x;
    base[1] = base_y;
    base[2] = base_z;

    left[0] = top_x - width;
    left[1] = top_y;
    left[2] = top_z;

    right[0] = top_x + width;
    right[1] = top_y;
    right[2] = top_z;

    if (outline_only == 0) {
        /* Full rendering mode */

        /* Set beam color */
        cpack(color);

        /* Draw filled circle at top of beam */
        pushmatrix();
        translate(top_x, top_y);  /* Original: translate(0,0) after positioning */
        circf(0.0f, 0.0f, width);  /* Circle centered at translated origin */
        popmatrix();

        /* Draw smooth antialiased outline */
        linesmooth(1);
        bgnline();
        v3f(left);
        v3f(base);
        v3f(right);
        endline();
        linesmooth(0);

        /* Draw patterned fill for semi-transparent beam effect */
        setpattern(1);  /* FSN sparse diagonal pattern */
        bgnpolygon();
        v3f(left);
        v3f(base);
        v3f(right);
        endpolygon();
        setpattern(0);
    }
    else {
        /* Outline only mode (for picking/selection) */
        bgnline();
        v3f(left);
        v3f(base);
        v3f(right);
        endline();
    }
}


/**
 * draw_scaled_element - Draw raised platform under directory
 *
 * ORIGINAL: fsn.c:49857-49928
 * GP-indirect calls decoded:
 *   -0x7b9c = cpack
 *   -0x7b48 = pushmatrix
 *   -0x7b60 = translate
 *   -0x7d68 = circf
 *   -0x7b28 = popmatrix
 *   -0x7d64 = linesmooth
 *   -0x7b7c = bgnline
 *   -0x7dc0 = v3f
 *   -0x7b94 = endline
 *   -0x7d1c = setpattern
 *   -0x7dc4 = bgnpolygon
 *   -0x7dbc = endpolygon
 *
 * Very similar structure to spotlight() - draws a triangular platform
 * with circle, smooth lines, and patterned fill.
 */
void draw_scaled_element_impl(float base_x, float base_y, float base_z,
                              float top_x, float top_y, float top_z,
                              float width, unsigned int color, int outline_only)
{
    float left[3];
    float right[3];
    float base[3];

    base[0] = base_x;
    base[1] = base_y;
    base[2] = base_z;

    left[0] = top_x - width;
    left[1] = top_y;
    left[2] = top_z;

    right[0] = top_x + width;
    right[1] = top_y;
    right[2] = top_z;

    if (outline_only == 0) {
        cpack(color);

        pushmatrix();
        translate(top_x, top_y, top_z);  /* Fixed: was missing Z coordinate */
        circf(0.0f, 0.0f, width);
        popmatrix();

        linesmooth(1);
        bgnline();
        v3f(left);
        v3f(base);
        v3f(right);
        endline();
        linesmooth(0);

        setpattern(1);
        bgnpolygon();
        v3f(left);
        v3f(base);
        v3f(right);
        endpolygon();
        setpattern(0);
    }
    else {
        bgnline();
        v3f(left);
        v3f(base);
        v3f(right);
        endline();
    }
}


/**
 * highlight_with_spotlight - Highlight a directory node with selection beam
 *
 * This is a convenience wrapper to draw a spotlight beam from a node's
 * base to an elevated position above it.
 */
void highlight_with_spotlight(float pos_x, float pos_y, float height,
                              unsigned int color)
{
    /* Draw beam from position to elevated point */
    spotlight(pos_x, pos_y, -0.5f,           /* Base at ground level */
              pos_x, pos_y, height + 1.0f,    /* Top above the node */
              0.3f,                            /* Width */
              color,
              0);                              /* Full rendering */
}
