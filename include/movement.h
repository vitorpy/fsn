/**
 * movement.h - Header for movement module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_MOVEMENT_H
#define FSN_MOVEMENT_H

#include "fsn_types.h"

/* movehoriz - Move camera horizontally based on mouse delta
 * Cleaned up from original MIPS artifacts to use float params
 */
void movehoriz(float delta_x, float delta_y);

#endif /* FSN_MOVEMENT_H */
