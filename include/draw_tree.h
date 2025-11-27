/**
 * draw_tree.h - Header for draw_tree module
 *
 * Extracted from fsn.c using tree-sitter
 * Phase 15: 3D File Block Rendering
 *
 * NOTE: Some declarations may already exist in fsn_forward.h
 * This header provides the module-specific interface.
 */

#ifndef FSN_DRAW_TREE_H
#define FSN_DRAW_TREE_H

#include "fsn_types.h"

/* These are the primary entry points from draw_tree.c */
/* draw_tree_content: renders the directory tree nodes (files and folders) */
void draw_tree_content(char param_1);

/* Other declarations are in fsn_forward.h */

#endif /* FSN_DRAW_TREE_H */
