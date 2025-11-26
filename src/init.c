/**
 * init.c
 *
 * Application initialization for FSN.
 * Based on decompiled main() from original SGI binary.
 *
 * Note: Original used Xt/Motif widget toolkit. This implementation
 * aims to recreate the functionality with proper modern code.
 */

#include "init.h"
#include "fsn_state.h"
#include "fam_monitor.h"
#include "color.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* X11/Motif headers */
#include <X11/Xlib.h>
#include <X11/Intrinsic.h>
#include <X11/StringDefs.h>
#include <Xm/Xm.h>
#include <Xm/MainW.h>
#include <Xm/Form.h>
#include <Xm/Label.h>
#include <Xm/Separator.h>
#include <Xm/DrawingA.h>
#include <Xm/Protocols.h>

/* OpenGL/GLX headers */
#include <GL/gl.h>
#include <GL/glx.h>

/*=============================================================================
 * Static Configuration
 *============================================================================*/

static const char *app_class = "Fsn";
static const char *app_name = "fsn";

/* Fallback resources */
static String fallback_resources[] = {
    "*title: FSN - File System Navigator",
    "*background: gray75",
    "*foreground: black",
    NULL
};

/* Command line options */
static XrmOptionDescRec options[] = {
    {"-landscape", "*landscape", XrmoptionSepArg, NULL},
    {"-relative", "*relative", XrmoptionNoArg, "True"},
    {"-db", "*database", XrmoptionSepArg, NULL},
    {"-dbdir", "*databaseDir", XrmoptionSepArg, NULL},
    {"-noscan", "*noscan", XrmoptionNoArg, "True"},
};

/*=============================================================================
 * Forward Declarations
 *============================================================================*/

static void quit_callback(Widget w, XtPointer client_data, XtPointer call_data);
static void expose_callback(Widget w, XtPointer client_data, XtPointer call_data);
static void resize_callback(Widget w, XtPointer client_data, XtPointer call_data);
static void input_callback(Widget w, XtPointer client_data, XtPointer call_data);

/*=============================================================================
 * Application Initialization
 *============================================================================*/

int fsn_app_init(int *argc, char **argv) {
    /* Store command line args */
    __Argc = *argc;
    __Argv = argv;

    /* Initialize Xt */
    toplevel = XtAppInitialize(
        &app_context,
        app_class,
        options,
        XtNumber(options),
        argc,
        argv,
        fallback_resources,
        NULL, 0
    );

    if (!toplevel) {
        fprintf(stderr, "Error: Could not initialize X toolkit\n");
        return -1;
    }

    /* Get display */
    display = XtDisplay(toplevel);
    if (!display) {
        fprintf(stderr, "Error: Could not open display\n");
        return -1;
    }

    /* Get home directory */
    home_directory = getenv("HOME");
    if (!home_directory) {
        home_directory = ".";
    }

    return 0;
}

int fsn_resources_init(void) {
    /* TODO: Load application resources from Xrdb */
    /* Original had landscape themes: grass, ocean, desert, space, indigo */
    return 0;
}

int fsn_database_init(void) {
    /* Initialize database state */
    database_root_node = NULL;
    database_loaded_flag = 0;
    directory_pool_index = 0;
    directory_pool_capacity = 1024;

    /* Initialize FAM for file monitoring */
    if (fsn_fam_init() < 0) {
        fprintf(stderr, "Warning: File monitoring unavailable\n");
        /* Non-fatal - continue without FAM */
    }

    return 0;
}

int fsn_events_init(void) {
    /* Register WM_DELETE_WINDOW protocol */
    Atom wm_protocols = XInternAtom(display, "WM_PROTOCOLS", False);
    Atom wm_delete = XInternAtom(display, "WM_DELETE_WINDOW", False);

    XmAddProtocolCallback(toplevel, wm_protocols, wm_delete,
                          quit_callback, NULL);

    return 0;
}

/*=============================================================================
 * Widget Initialization
 *============================================================================*/

int fsn_create_main_window(void) {
    Arg args[10];
    int n;

    /* Create main window */
    n = 0;
    Widget main_window = XmCreateMainWindow(toplevel, "mainw", args, n);
    XtManageChild(main_window);

    /* Create panel (form for controls) */
    n = 0;
    panel_widget = XmCreateForm(main_window, "panel", args, n);
    XtManageChild(panel_widget);

    /* Create separator */
    n = 0;
    XtSetArg(args[n], XmNtopAttachment, XmATTACH_FORM); n++;
    XtSetArg(args[n], XmNbottomAttachment, XmATTACH_FORM); n++;
    XtSetArg(args[n], XmNorientation, XmVERTICAL); n++;
    panel_vsep_widget = XmCreateSeparator(panel_widget, "panelvsep", args, n);
    XtManageChild(panel_vsep_widget);

    /* Create message label */
    n = 0;
    XtSetArg(args[n], XmNtopAttachment, XmATTACH_FORM); n++;
    XtSetArg(args[n], XmNleftAttachment, XmATTACH_WIDGET); n++;
    XtSetArg(args[n], XmNleftWidget, panel_vsep_widget); n++;
    message_widget = XmCreateLabel(panel_widget, "message", args, n);
    XtManageChild(message_widget);

    /* Set initial message */
    XmString msg = XmStringCreateSimple("FSN - 3D File System Navigator");
    XtVaSetValues(message_widget, XmNlabelString, msg, NULL);
    XmStringFree(msg);

    /* Create pane form for main content */
    n = 0;
    XtSetArg(args[n], XmNtopAttachment, XmATTACH_WIDGET); n++;
    XtSetArg(args[n], XmNtopWidget, message_widget); n++;
    XtSetArg(args[n], XmNbottomAttachment, XmATTACH_FORM); n++;
    XtSetArg(args[n], XmNleftAttachment, XmATTACH_WIDGET); n++;
    XtSetArg(args[n], XmNleftWidget, panel_vsep_widget); n++;
    XtSetArg(args[n], XmNrightAttachment, XmATTACH_FORM); n++;
    pane_form_widget = XmCreateForm(panel_widget, "paneForm", args, n);
    XtManageChild(pane_form_widget);

    /* Set main window areas */
    XmMainWindowSetAreas(main_window, NULL, NULL, NULL, NULL, panel_widget);

    return 0;
}

int fsn_create_panel(void) {
    /* TODO: Create control panel with:
     * - Zoom slider
     * - Rotation controls
     * - Height mode toggles
     * - Search button
     */
    return 0;
}

int fsn_create_context(void) {
    Arg args[10];
    int n;

    /* Create drawing area for GL rendering */
    n = 0;
    XtSetArg(args[n], XmNtopAttachment, XmATTACH_FORM); n++;
    XtSetArg(args[n], XmNbottomAttachment, XmATTACH_FORM); n++;
    XtSetArg(args[n], XmNleftAttachment, XmATTACH_FORM); n++;
    XtSetArg(args[n], XmNrightAttachment, XmATTACH_FORM); n++;
    context_top_widget = XmCreateDrawingArea(pane_form_widget, "context", args, n);

    /* Add callbacks */
    XtAddCallback(context_top_widget, XmNexposeCallback, expose_callback, NULL);
    XtAddCallback(context_top_widget, XmNresizeCallback, resize_callback, NULL);
    XtAddCallback(context_top_widget, XmNinputCallback, input_callback, NULL);

    XtManageChild(context_top_widget);

    return 0;
}

int fsn_create_legend(void) {
    /* TODO: Create color legend showing file type colors */
    legendShowing = 0;
    return 0;
}

int fsn_create_overview(void) {
    /* TODO: Create overview popup window */
    overviewActive = 0;
    overview_initialized = 0;
    return 0;
}

/*=============================================================================
 * GL Initialization
 *============================================================================*/

int fsn_gl_init(void) {
    /* Get visual info for GLX */
    int attribs[] = {
        GLX_RGBA,
        GLX_DOUBLEBUFFER,
        GLX_DEPTH_SIZE, 16,
        GLX_RED_SIZE, 8,
        GLX_GREEN_SIZE, 8,
        GLX_BLUE_SIZE, 8,
        None
    };

    XVisualInfo *vi = glXChooseVisual(display, DefaultScreen(display), attribs);
    if (!vi) {
        fprintf(stderr, "Error: No suitable GL visual found\n");
        return -1;
    }

    /* Create GL context */
    GLXContext glc = glXCreateContext(display, vi, NULL, GL_TRUE);
    if (!glc) {
        fprintf(stderr, "Error: Could not create GL context\n");
        XFree(vi);
        return -1;
    }

    myContext = glc;
    XFree(vi);

    return 0;
}

int fsn_display_lists_init(void) {
    /* TODO: Create display lists for:
     * - File box
     * - Directory box
     * - Icons
     */
    return 0;
}

void fsn_set_main_gl_window(void) {
    if (!context_top_widget || !myContext) return;

    Window win = XtWindow(context_top_widget);
    if (win) {
        glXMakeCurrent(display, win, (GLXContext)myContext);
        main_gl_window = (int)win;
    }
}

/*=============================================================================
 * Callbacks
 *============================================================================*/

static void quit_callback(Widget w, XtPointer client_data, XtPointer call_data) {
    (void)w;
    (void)client_data;
    (void)call_data;

    fsn_shutdown();
    exit(0);
}

static void expose_callback(Widget w, XtPointer client_data, XtPointer call_data) {
    (void)w;
    (void)client_data;
    (void)call_data;

    redraw_flag = 1;
    /* TODO: Trigger redraw */
}

static void resize_callback(Widget w, XtPointer client_data, XtPointer call_data) {
    (void)client_data;
    (void)call_data;

    /* Get new dimensions */
    Dimension width, height;
    XtVaGetValues(w, XmNwidth, &width, XmNheight, &height, NULL);

    window_width = width;
    window_height = height;

    /* Update GL viewport */
    fsn_set_main_gl_window();
    glViewport(0, 0, width, height);

    /* TODO: Update projection matrix */
    redraw_flag = 1;
}

static void input_callback(Widget w, XtPointer client_data, XtPointer call_data) {
    (void)w;
    (void)client_data;
    XmDrawingAreaCallbackStruct *cbs = (XmDrawingAreaCallbackStruct *)call_data;

    /* TODO: Handle mouse/keyboard input */
    if (cbs->event->type == ButtonPress) {
        /* Mouse click - do picking */
    } else if (cbs->event->type == MotionNotify) {
        /* Mouse motion - rotate/zoom view */
    }
}

/*=============================================================================
 * Cleanup
 *============================================================================*/

void fsn_shutdown(void) {
    /* Cleanup FAM */
    fsn_fam_shutdown();

    /* Cleanup GL context */
    if (myContext) {
        glXMakeCurrent(display, None, NULL);
        glXDestroyContext(display, (GLXContext)myContext);
        myContext = NULL;
    }

    /* TODO: Free other resources */
}

/*=============================================================================
 * Main Event Loop
 *============================================================================*/

void fsn_main_loop(void) {
    /* Standard Xt main loop */
    XtAppMainLoop(app_context);
}
