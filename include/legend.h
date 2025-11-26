/**
 * legend.h - Header for legend module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_LEGEND_H
#define FSN_LEGEND_H

#include "fsn_types.h"

void toggle_legend(void);
void draw_legend_color_box(undefined4 *param_1,int param_2,uint param_3);
void create_color_legend_box(uint param_1,int param_2);
void refresh_legend_colors(void);
void update_legend_display(void);

#endif /* FSN_LEGEND_H */
