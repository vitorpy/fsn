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
#include <X11/Intrinsic.h>
#include <stdio.h>

/* GLXwinset declaration */
extern void GLXwinset(Display *dpy, Window win);

/* Debug flag - set to 0 to disable debug output */
static int glx_debug = 0;

/**
 * get_gl_window - Get X Window ID from curcontextwindows
 *
 * Original structure stores Widget at offset 8 (glwidget).
 * We need to call XtWindow() to get the actual X Window ID.
 */
static Window get_gl_window(void)
{
    if (!curcontextwindows) return 0;

    /* glwidget is at offset 8 (index 2 for 32-bit, but we use byte offset) */
    Widget *widgets = (Widget *)curcontextwindows;
    Widget glwidget = widgets[2];  /* offset 8 in 32-bit = index 2 */

    if (!glwidget) return 0;
    if (!XtIsRealized(glwidget)) return 0;

    return XtWindow(glwidget);
}

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
    Window win = get_gl_window();

    if (glx_debug) {
        fprintf(stderr, "set_main_gl_window: display=%p win=%lu\n",
                (void*)display, win);
    }

    if (display && win) {
        GLXwinset(display, win);
    } else if (glx_debug) {
        fprintf(stderr, "  skipping - display or window not ready\n");
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
