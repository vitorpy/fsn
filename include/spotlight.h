/**
 * spotlight.h - Selection beam and platform rendering
 *
 * RESTORATION: Extracted from fsn.c lines 49781-49928
 * GP-indirect calls decoded to IGL function names.
 */

#ifndef SPOTLIGHT_H
#define SPOTLIGHT_H

/**
 * spotlight - Draw selection beam with circle, smooth lines, and patterned fill
 *
 * ORIGINAL: fsn.c:49781-49851
 *
 * Parameters:
 *   base_x, base_y, base_z   - Base position of beam (bottom point)
 *   top_x, top_y, top_z      - Top position (where circle is)
 *   width                     - Half-width of beam at top
 *   color                     - Packed color for beam
 *   outline_only              - If non-zero, only draw outline (no fill)
 */
void spotlight(float base_x, float base_y, float base_z,
               float top_x, float top_y, float top_z,
               float width, unsigned int color, int outline_only);

/**
 * draw_scaled_element_impl - Draw raised platform under directory
 *
 * ORIGINAL: fsn.c:49857-49928
 *
 * Similar structure to spotlight() - triangular platform with
 * circle, smooth lines, and patterned fill.
 */
void draw_scaled_element_impl(float base_x, float base_y, float base_z,
                              float top_x, float top_y, float top_z,
                              float width, unsigned int color, int outline_only);

/**
 * highlight_with_spotlight - Convenience wrapper to highlight a directory node
 */
void highlight_with_spotlight(float pos_x, float pos_y, float height,
                              unsigned int color);

#endif /* SPOTLIGHT_H */
