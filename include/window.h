/**
 * window.h - Header for window module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_WINDOW_H
#define FSN_WINDOW_H

#include "fsn_types.h"

void setMainWindow(void);
void set_main_gl_window(void);
void setOverlayWindow(void);
void setOverviewWindow(void);
void setOverviewOverlayWindow(void);
void update_colormap_windows(void);
void newTopWindow(undefined4 param_1);
void deleteTopWindow(int param_1);
void newCmapWindow(undefined4 param_1);
void setup_window_state(undefined4 param_1);
void deleteCmapWindow(int param_1);
void create_gl_window(int param_1);
void setup_toplevel_window(undefined4 param_1);
void get_window_properties(undefined4 param_1,int *param_2,undefined4 param_3);
void init_context_windows(void);
void set_window_property(undefined4 param_1,int param_2,int param_3);
void get_window_entry(undefined4 param_1);

#endif /* FSN_WINDOW_H */
