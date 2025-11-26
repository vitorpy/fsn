/**
 * refresh.h - Header for refresh module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_REFRESH_H
#define FSN_REFRESH_H

#include "fsn_types.h"

void refresh_after_change(void);
void refresh_directory_view(int param_1);
void refresh_context_view(int param_1,int param_2);
void refresh_view(void);
void refresh_view_recursive(void);
void refresh_legend_colors(void);
void refresh_toplevel(void);

#endif /* FSN_REFRESH_H */
