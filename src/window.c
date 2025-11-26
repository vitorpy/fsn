/**
 * window.c - GL window context management
 *
 * Clean implementation of window context switching.
 * Original decompiled code preserved in src/original/window.c
 *
 * Phase 13: Wire up GL context switching
 */

#include "window.h"
#include "fsn_types.h"
#include "fsn_state.h"
#include <X11/Xlib.h>

/* GLXwinset declaration */
extern void GLXwinset(Display *dpy, Window win);

/**
 * setMainWindow - Set main GL window context
 * Original: GLXwinset(display, curcontextwindows[0])
 */
void setMainWindow(void)
{
    if (display && curcontextwindows) {
        GLXwinset(display, *(Window *)curcontextwindows);
    }
}

/**
 * set_main_gl_window - Set main GL window (called before rendering)
 * Original had unaff_gp artifacts, reconstructed to call GLXwinset
 */
void set_main_gl_window(void)
{
    if (display && curcontextwindows) {
        GLXwinset(display, *(Window *)curcontextwindows);
    }
}

/**
 * setOverlayWindow - Set overlay GL window context
 * Original: GLXwinset(display, curcontextwindows[1])
 */
void setOverlayWindow(void)
{
    if (display && curcontextwindows) {
        Window *windows = (Window *)curcontextwindows;
        GLXwinset(display, windows[1]);
    }
}

/**
 * setOverviewWindow - Set overview GL window context
 * Original: GLXwinset(display, main_gl_window)
 */
void setOverviewWindow(void)
{
    if (display && main_gl_window) {
        GLXwinset(display, (Window)main_gl_window);
    }
}

/**
 * setOverviewOverlayWindow - Set overview overlay context
 * Original: GLXwinset(display, overview_gl_context)
 */
void setOverviewOverlayWindow(void)
{
    if (display && overview_gl_context) {
        GLXwinset(display, (Window)overview_gl_context);
    }
}
