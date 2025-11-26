/**
 * window.h - Header for window module
 *
 * Clean declarations for implemented window functions.
 * Original declarations preserved in src/original/window.c
 */

#ifndef FSN_WINDOW_H
#define FSN_WINDOW_H

#include "fsn_types.h"

/* GL context switching functions (Phase 13) */
void setMainWindow(void);
void set_main_gl_window(void);
void setOverlayWindow(void);
void setOverviewWindow(void);
void setOverviewOverlayWindow(void);

/* TODO: Add more as they are ported from original */

#endif /* FSN_WINDOW_H */
