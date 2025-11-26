/**
 * display.h - Header for display module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_DISPLAY_H
#define FSN_DISPLAY_H

#include "fsn_types.h"

void update_display(undefined4 param_1,undefined4 param_2);
void init_database_display(void);
void update_context_display(int param_1,int param_2);
void refresh_display(void);
void update_fam_display(void);
void init_display_mode(void);
void init_display_lists(void);
void refresh_list_display(void);
void update_legend_display(void);
void displayHourglass(undefined4 param_1);
void undisplayHourglass(void);

#endif /* FSN_DISPLAY_H */
