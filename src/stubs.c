/**
 * stubs.c - Stub implementations for undefined functions
 *
 * These provide placeholder implementations for functions that:
 * 1. Are defined in modules not yet enabled
 * 2. Need proper implementation later
 * 3. Are referenced across modules
 */

#include "fsn_types.h"
#include "fsn_state.h"
#include "window.h"
#include "fsn_igl.h"
#include "drawing.h"
#include <stdio.h>
#include <math.h>
#include <Xm/Xm.h>
#include <GL/gl.h>
#include <GL/glx.h>

/*=============================================================================
 * GLX Context Management - Phase 11 Implementation
 *============================================================================*/

/* Shared GLX context for all windows */
static GLXContext glx_shared_context = NULL;

/* Current display and window for swapbuffers() */
static Display *current_glx_display = NULL;
static Window current_glx_window = 0;

/**
 * GLXwinset - Set the current GLX rendering context for a window
 *
 * This is the critical missing function. On SGI IRIX, this was part of the
 * GL library. On modern Linux, we implement it using GLX.
 *
 * Called from: window.c, main.c, overview.c
 */
void GLXwinset(Display *dpy, Window win) {
    if (dpy == NULL || win == 0) {
        fprintf(stderr, "GLXwinset: invalid display or window\n");
        return;
    }

    /* Create shared context on first call */
    if (glx_shared_context == NULL) {
        int attribs[] = {
            GLX_RGBA,
            GLX_DEPTH_SIZE, 24,
            GLX_DOUBLEBUFFER,
            None
        };
        XVisualInfo *vi = glXChooseVisual(dpy, DefaultScreen(dpy), attribs);
        if (vi == NULL) {
            /* Fallback to simpler visual */
            int simple_attribs[] = { GLX_RGBA, GLX_DOUBLEBUFFER, None };
            vi = glXChooseVisual(dpy, DefaultScreen(dpy), simple_attribs);
        }
        if (vi == NULL) {
            fprintf(stderr, "GLXwinset: could not find suitable visual\n");
            return;
        }
        glx_shared_context = glXCreateContext(dpy, vi, NULL, GL_TRUE);
        XFree(vi);
        if (glx_shared_context == NULL) {
            fprintf(stderr, "GLXwinset: could not create GLX context\n");
            return;
        }
    }

    /* Make the context current for this window */
    if (!glXMakeCurrent(dpy, win, glx_shared_context)) {
        fprintf(stderr, "GLXwinset: glXMakeCurrent failed for window %lu\n", win);
    } else {
        /* Track current display/window for swapbuffers() */
        current_glx_display = dpy;
        current_glx_window = win;
    }
}

/**
 * glx_swap_current_buffer - Swap buffers for the current GLX window
 *
 * Called by swapbuffers() in fsn_igl.c
 */
void glx_swap_current_buffer(void) {
    if (current_glx_display && current_glx_window) {
        glXSwapBuffers(current_glx_display, current_glx_window);
    } else {
        glFlush();  /* Fallback if no context set */
    }
}

/* GL/rendering stubs */
void gl_picking_setup_wrapper(void) {
    /* TODO: Implement picking setup */
}

void init_display_lists(void) {
    /* TODO: Implement display list initialization */
}

void flush_rendering(int param) {
    (void)param;
    /* TODO: Implement rendering flush */
}

/* redraw_gl_scene and draw_scene moved to drawing.c */

/* File/directory stubs */
void update_directory_state(void *param) {
    (void)param;
    /* TODO: Implement directory state update */
}

void refresh_directory(void *param) {
    (void)param;
    /* TODO: Implement directory refresh */
}

/* Selection stubs */
void clear_selection(void) {
    /* TODO: Implement selection clear */
}

void update_selection(void) {
    /* TODO: Implement selection update */
}

/* State management stubs */
void save_state(void) {
    /* TODO: Implement state save */
}

void restore_state(void) {
    /* TODO: Implement state restore */
}

/*=============================================================================
 * Callback function stubs (Batch 4)
 *============================================================================*/

void quit_application(Widget w, XtPointer client, XtPointer call) {
    (void)w; (void)client; (void)call;
    exit(0);
}

void pref_panel_map_callback(Widget w, XtPointer client, XtPointer call) {
    (void)w; (void)client; (void)call;
}

void pref_color_callback(Widget w, XtPointer client, XtPointer call) {
    (void)w; (void)client; (void)call;
}

void toggle_pair_callback(Widget w, XtPointer client, XtPointer call) {
    (void)w; (void)client; (void)call;
}

void color_select_callback(Widget w, XtPointer client, XtPointer call) {
    (void)w; (void)client; (void)call;
}

void exec_color_toggle_callback(Widget w, XtPointer client, XtPointer call) {
    (void)w; (void)client; (void)call;
}

void file_color_toggle_callback(Widget w, XtPointer client, XtPointer call) {
    (void)w; (void)client; (void)call;
}

void link_color_toggle_callback(Widget w, XtPointer client, XtPointer call) {
    (void)w; (void)client; (void)call;
}

void dir_color_toggle_callback(Widget w, XtPointer client, XtPointer call) {
    (void)w; (void)client; (void)call;
}

void rgb_scale_callback(Widget w, XtPointer client, XtPointer call) {
    (void)w; (void)client; (void)call;
}

void hsv_scale_callback(Widget w, XtPointer client, XtPointer call) {
    (void)w; (void)client; (void)call;
}

void zoom_gl_init_callback(Widget w, XtPointer client, XtPointer call) {
    (void)w; (void)client; (void)call;
}

void search_gl_init_callback(Widget w, XtPointer client, XtPointer call) {
    (void)w; (void)client; (void)call;
}

/*=============================================================================
 * Phase 14: GL Widget Callbacks
 * These trigger rendering when the GL drawing area receives events
 *============================================================================*/

/**
 * glwidget_expose_callback - Called when GL widget needs redraw
 * Performs actual rendering when expose event received
 */
void glwidget_expose_callback(Widget w, XtPointer client, XtPointer call) {
    (void)w; (void)client; (void)call;
    draw_scene();
}

/**
 * glwidget_resize_callback - Called when GL widget is resized
 * Updates viewport and triggers redraw
 */
void glwidget_resize_callback(Widget w, XtPointer client, XtPointer call) {
    Dimension width, height;
    (void)client; (void)call;

    XtVaGetValues(w, XmNwidth, &width, XmNheight, &height, NULL);
    set_main_gl_window();
    viewport(0, (short)(width - 1), 0, (short)(height - 1));
    redraw_flag = 1;
}

/**
 * glwidget_init_callback - Called when GL widget is first realized
 * Note: For xmDrawingAreaWidgetClass this won't be called automatically,
 * we trigger it manually after XtRealizeWidget
 */
void glwidget_init_callback(Widget w, XtPointer client, XtPointer call) {
    (void)w; (void)client; (void)call;
    set_main_gl_window();
    zbuffer(1);  /* Enable depth testing */
    makePatterns();  /* Initialize original FSN stipple patterns */
    redraw_flag = 1;
}

/**
 * gl_input_callback - Called for mouse/keyboard input on GL widget
 */
void gl_input_callback(Widget w, XtPointer client, XtPointer call) {
    (void)w; (void)client; (void)call;
    /* TODO: Handle mouse/keyboard input */
}

/* deleteMessage - implemented in delete.c */

/*=============================================================================
 * Phase 9: Missing function implementations
 *============================================================================*/

/*-----------------------------------------------------------------------------
 * SGI Bytecode System Stubs
 * These are SGI-specific visual configuration functions.
 * On modern Linux with standard X11/GLX, we don't need the bytecode system.
 *-----------------------------------------------------------------------------*/

/* get_bytecode_context - returns pointer to bytecode context structure
 * Return 0 (NULL) to indicate no bytecode context available.
 * Callers check for NULL and skip bytecode processing.
 */
int get_bytecode_context(int param_1, int param_2) {
    (void)param_1;
    (void)param_2;
    return 0;  /* NULL - no bytecode context on modern Linux */
}

/* eval_bytecode_instruction - evaluate SGI visual bytecode
 * Return 0 as a safe default value.
 */
undefined4 eval_bytecode_instruction(int param_1, int param_2, int param_3, int param_4, int param_5) {
    (void)param_1;
    (void)param_2;
    (void)param_3;
    (void)param_4;
    (void)param_5;
    return 0;  /* No-op on modern Linux */
}

/*-----------------------------------------------------------------------------
 * Status Message Functions
 * Signatures must match messages.h declarations
 *-----------------------------------------------------------------------------*/

/* set_status_message - display message in status bar
 * param_1: message string
 * param_2: message type/priority (unused for now)
 * returns: 0 on success
 */
undefined4 set_status_message(const char *param_1, int param_2) {
    (void)param_2;
    if (param_1 && message_widget) {
        XmString xms = XmStringCreateLocalized((char *)param_1);
        XtVaSetValues(message_widget, XmNlabelString, xms, NULL);
        XmStringFree(xms);
    }
    return 0;
}

/* display_status_message - variant of set_status_message */
void display_status_message(char *param_1) {
    set_status_message(param_1, 0);
}

/*-----------------------------------------------------------------------------
 * Selection Functions
 *-----------------------------------------------------------------------------*/

/* clear_current_selection - clear the current file/directory selection */
void clear_current_selection(void) {
    current_picked_item = 0;
    selected_id_1 = 0;
    selected_id_2 = 0;
    selection_count = 0;
    redraw_flag = 1;
}

/* clear_marked_state - clear file marking state */
void clear_marked_state(void) {
    /* Reset mark-related globals */
    mark_selector_list = 0;
    redraw_flag = 1;
}

/*-----------------------------------------------------------------------------
 * Path Building
 *-----------------------------------------------------------------------------*/

/* build_path_string - construct full path from directory node
 * param_1: output buffer for path string
 * param_2: directory/file node pointer
 */
void build_path_string(char *param_1, undefined4 *param_2) {
    if (param_1 == NULL) return;

    if (param_2 == NULL) {
        param_1[0] = '/';
        param_1[1] = '\0';
        return;
    }

    /* TODO: Walk up the directory tree to build full path */
    /* For now, just return root path as placeholder */
    param_1[0] = '/';
    param_1[1] = '\0';
}

/*-----------------------------------------------------------------------------
 * Screen Coordinate Functions
 *-----------------------------------------------------------------------------*/

/* get_item_screen_coords - get screen position of a file/directory item
 * param_1: pointer to item node (stores results in node structure)
 */
void get_item_screen_coords(undefined4 *param_1) {
    (void)param_1;
    /* TODO: Calculate screen coordinates based on 3D position and camera */
    /* This requires the full transformation pipeline */
}

/*-----------------------------------------------------------------------------
 * Camera Functions
 *-----------------------------------------------------------------------------*/

/* set_camera_lookat - set camera target position for smooth animation
 * param_1, param_2: target X, Y coordinates (doubles for precision)
 */
void set_camera_lookat(double param_1, double param_2) {
    camera_lookat_x = (float)param_1;
    camera_lookat_y = (float)param_2;
    redraw_flag = 1;
}

/*-----------------------------------------------------------------------------
 * Trig Precomputation Functions
 * Extracted from fsn.c lines 37445-37545.
 * These compute sin/cos/tan of camera angles and store them in curcontext.
 * Angles are stored as shorts in tenths of degrees (e.g., 450 = 45°).
 *-----------------------------------------------------------------------------*/

/* calc_h_angle - precompute sin/cos/tan for horizontal (Z) rotation
 * Context offsets:
 *   +0x0c: short rotation_z (input, tenths of degrees)
 *   +0x14: float sin_z (output)
 *   +0x18: float cos_z (output)
 *   +0x1c: float tan_z (output)
 */
void calc_h_angle(void) {
    float angle = *(short *)(curcontext + 0x0c) * (M_PI / 1800.0f);
    *(float *)(curcontext + 0x14) = sinf(angle);
    *(float *)(curcontext + 0x18) = cosf(angle);
    *(float *)(curcontext + 0x1c) = tanf(angle);
}

/* calc_v_angle - precompute sin/cos/tan for vertical (X) rotation
 * Context offsets:
 *   +0x0e: short rotation_x (input, tenths of degrees)
 *   +0x20: float sin_x (output)
 *   +0x24: float cos_x (output)
 *   +0x28: float tan_x (output)
 */
void calc_v_angle(void) {
    float angle = *(short *)(curcontext + 0x0e) * (M_PI / 1800.0f);
    *(float *)(curcontext + 0x20) = sinf(angle);
    *(float *)(curcontext + 0x24) = cosf(angle);
    *(float *)(curcontext + 0x28) = tanf(angle);
}

/* init_view_transform - alias for calc_h_angle
 * Called after changing rot_z to recompute transform matrices
 */
void init_view_transform(void) {
    calc_h_angle();
}

/* init_camera_state - recompute vertical angle transforms
 * Called after changing rot_x
 */
void init_camera_state(void) {
    calc_v_angle();
}

/*=============================================================================
 * Phase 16: Mouse camera controls
 * gl_motion_handler and gl_button_handler for camera navigation
 * movehoriz() is in movement.c
 *============================================================================*/

/* Forward declaration - implemented in movement.c */
void movehoriz(float delta_x, float delta_y);

/* gl_motion_handler - Handle mouse motion events for camera rotate/pan
 * Registered with XtAddEventHandler for PointerMotionMask
 *
 * Left drag = rotate camera (look around)
 * Right drag = pan camera position
 */
void gl_motion_handler(Widget w, XtPointer client_data, XEvent *event, Boolean *cont)
{
    (void)w; (void)client_data; (void)cont;

    if (mouse_button_down == 0) return;  /* Only when dragging */
    if (event->type != MotionNotify) return;

    int x = event->xmotion.x;
    int y = event->xmotion.y;

    float delta_x = (float)(x - mouse_last_x) * mouse_speed;
    float delta_y = (float)(y - mouse_last_y) * mouse_speed;

    mouse_last_x = x;
    mouse_last_y = y;

    if (mouse_button_down == 1) {
        /* Left button: rotate camera (look around) */
        *(short *)(curcontext + 0x0c) += (short)(delta_x * 5);  /* rot_z (yaw) */
        *(short *)(curcontext + 0x0e) += (short)(delta_y * 5);  /* rot_x (pitch) */
        init_view_transform();
        init_camera_state();
        redraw_flag = 1;
    } else if (mouse_button_down == 3) {
        /* Right button: pan camera position */
        movehoriz(delta_x, delta_y);
    }
}

/* gl_button_handler - Handle mouse button events (XtEventHandler signature)
 * Tracks which button is pressed for drag operations
 */
void gl_button_handler(Widget w, XtPointer client_data, XEvent *event, Boolean *cont)
{
    (void)w; (void)client_data; (void)cont;

    if (event->type == ButtonPress) {
        mouse_button_down = event->xbutton.button;
        mouse_last_x = event->xbutton.x;
        mouse_last_y = event->xbutton.y;
    } else if (event->type == ButtonRelease) {
        mouse_button_down = 0;
    }
}

/*=============================================================================
 * Phase 10: Widget creation functions
 *============================================================================*/

#include <Xm/Form.h>
#include <Xm/Label.h>
#include <Xm/DrawingA.h>
#include <Xm/BulletinB.h>
#include <Xm/RowColumn.h>
#include <Xm/CascadeB.h>
#include <Xm/MainW.h>
#include <Xm/PushB.h>
#include <Xm/Scale.h>
#include <Xm/Separator.h>
#include <Xm/TextF.h>
#include <Xm/SelectioB.h>
#include <Xm/List.h>
#include <Xm/Frame.h>

/*-----------------------------------------------------------------------------
 * create_fsn_menus - Populate menu bar with FSN menus
 *
 * Phase 17: Motif Menu Restoration
 * Widget names match resources/Fsn for automatic label configuration
 *-----------------------------------------------------------------------------*/
static void create_fsn_menus(Widget menuBar)
{
    Widget pane, cascade, button;
    Arg args[4];
    int n;

    /*=========================================================================
     * SESSION MENU - labels from *menuSession.*, *menuRescan.*, etc.
     *=========================================================================*/
    pane = XmCreatePulldownMenu(menuBar, "session_pane", NULL, 0);

    button = XmCreatePushButton(pane, "menuSplit", NULL, 0);
    XtManageChild(button);

    button = XmCreatePushButton(pane, "menuRescan", NULL, 0);
    XtManageChild(button);

    button = XmCreatePushButton(pane, "menuSave", NULL, 0);
    XtManageChild(button);

    button = XmCreatePushButton(pane, "menuQuit", NULL, 0);
    XtAddCallback(button, XmNactivateCallback, quit_application, NULL);
    XtManageChild(button);

    n = 0;
    XtSetArg(args[n], XmNsubMenuId, pane); n++;
    cascade = XmCreateCascadeButton(menuBar, "menuSession", args, n);
    XtManageChild(cascade);

    /*=========================================================================
     * SHOW MENU - labels from *menuShow.*, *menuOverview.*, etc.
     *=========================================================================*/
    pane = XmCreatePulldownMenu(menuBar, "show_pane", NULL, 0);

    button = XmCreatePushButton(pane, "menuOverview", NULL, 0);
    XtManageChild(button);

    button = XmCreatePushButton(pane, "menuControls", NULL, 0);
    XtManageChild(button);

    button = XmCreatePushButton(pane, "menuLegend", NULL, 0);
    XtManageChild(button);

    button = XmCreatePushButton(pane, "menuPreferences", NULL, 0);
    XtManageChild(button);

    n = 0;
    XtSetArg(args[n], XmNsubMenuId, pane); n++;
    cascade = XmCreateCascadeButton(menuBar, "menuShow", args, n);
    XtManageChild(cascade);

    /*=========================================================================
     * DISPLAY MENU - labels from *menuDisplay.*, *menuHeight.*, etc.
     *=========================================================================*/
    pane = XmCreatePulldownMenu(menuBar, "display_pane", NULL, 0);

    /* Height submenu */
    {
        Widget heightPane, heightCascade;
        heightPane = XmCreatePulldownMenu(pane, "height_pane", NULL, 0);

        button = XmCreatePushButton(heightPane, "menuHeightNone", NULL, 0);
        XtManageChild(button);

        button = XmCreatePushButton(heightPane, "menuHeightLinear", NULL, 0);
        XtManageChild(button);

        button = XmCreatePushButton(heightPane, "menuHeightExaggerated", NULL, 0);
        XtManageChild(button);

        n = 0;
        XtSetArg(args[n], XmNsubMenuId, heightPane); n++;
        heightCascade = XmCreateCascadeButton(pane, "menuHeight", args, n);
        XtManageChild(heightCascade);
    }

    n = 0;
    XtSetArg(args[n], XmNsubMenuId, pane); n++;
    cascade = XmCreateCascadeButton(menuBar, "menuDisplay", args, n);
    XtManageChild(cascade);

    /*=========================================================================
     * DIRECTORY MENU - labels from *menuDirectory.*, *menuMonitor.*, etc.
     *=========================================================================*/
    pane = XmCreatePulldownMenu(menuBar, "directory_pane", NULL, 0);

    /* Directory Height submenu */
    {
        Widget dirHeightPane, dirHeightCascade;
        dirHeightPane = XmCreatePulldownMenu(pane, "dirheight_pane", NULL, 0);

        button = XmCreatePushButton(dirHeightPane, "menuDirectoryFlat", NULL, 0);
        XtManageChild(button);

        button = XmCreatePushButton(dirHeightPane, "menuDirectoryFilesOnly", NULL, 0);
        XtManageChild(button);

        button = XmCreatePushButton(dirHeightPane, "menuDirectoryChildren", NULL, 0);
        XtManageChild(button);

        n = 0;
        XtSetArg(args[n], XmNsubMenuId, dirHeightPane); n++;
        dirHeightCascade = XmCreateCascadeButton(pane, "menuDirectoryHeight", args, n);
        XtManageChild(dirHeightCascade);
    }

    button = XmCreatePushButton(pane, "menuMonitorDirectory", NULL, 0);
    XtManageChild(button);

    button = XmCreatePushButton(pane, "menuMonitorTree", NULL, 0);
    XtManageChild(button);

    button = XmCreatePushButton(pane, "menuStopMonitorTree", NULL, 0);
    XtManageChild(button);

    button = XmCreatePushButton(pane, "menuRescanSubtree", NULL, 0);
    XtManageChild(button);

    button = XmCreatePushButton(pane, "menuPruneDirectory", NULL, 0);
    XtManageChild(button);

    n = 0;
    XtSetArg(args[n], XmNsubMenuId, pane); n++;
    cascade = XmCreateCascadeButton(menuBar, "menuDirectory", args, n);
    XtManageChild(cascade);

    /*=========================================================================
     * FILE MENU - labels from *menuFile.*, *menuOpenFile.*, etc.
     *=========================================================================*/
    pane = XmCreatePulldownMenu(menuBar, "filePane", NULL, 0);

    button = XmCreatePushButton(pane, "menuOpenFile", NULL, 0);
    XtManageChild(button);

    button = XmCreatePushButton(pane, "menuPrintFile", NULL, 0);
    XtManageChild(button);

    button = XmCreatePushButton(pane, "menuDeleteFile", NULL, 0);
    XtManageChild(button);

    n = 0;
    XtSetArg(args[n], XmNsubMenuId, pane); n++;
    cascade = XmCreateCascadeButton(menuBar, "menuFile", args, n);
    XtManageChild(cascade);

    /*=========================================================================
     * HELP MENU (right-aligned) - labels from *helpButton.*, etc.
     *=========================================================================*/
    pane = XmCreatePulldownMenu(menuBar, "help_pane", NULL, 0);

    button = XmCreatePushButton(pane, "window_help", NULL, 0);
    XtManageChild(button);

    button = XmCreatePushButton(pane, "context_help", NULL, 0);
    XtManageChild(button);

    button = XmCreatePushButton(pane, "mode_help", NULL, 0);
    XtManageChild(button);

    button = XmCreatePushButton(pane, "version_help", NULL, 0);
    XtManageChild(button);

    n = 0;
    XtSetArg(args[n], XmNsubMenuId, pane); n++;
    cascade = XmCreateCascadeButton(menuBar, "helpButton", args, n);
    XtManageChild(cascade);

    /* Set Help menu to be right-aligned (Motif convention) */
    XtVaSetValues(menuBar, XmNmenuHelpWidget, cascade, NULL);

    fprintf(stderr, "create_fsn_menus: Created all menus (labels from resources/Fsn)\n");
}

/*-----------------------------------------------------------------------------
 * get_panel_value - Create menu bar for MainWindow
 * Returns: Widget - the menu bar widget
 *-----------------------------------------------------------------------------*/
Widget get_panel_value(Widget parent) {
    Widget menuBar;

    if (!parent) {
        fprintf(stderr, "get_panel_value: parent is NULL\n");
        return NULL;
    }

    /* Create menu bar as child of MainWindow */
    menuBar = XmCreateMenuBar(parent, "menuBar", NULL, 0);

    /* Populate with FSN menus - Phase 17 */
    create_fsn_menus(menuBar);

    XtManageChild(menuBar);

    fprintf(stderr, "get_panel_value: Created menuBar widget with menus\n");
    return menuBar;
}

/*-----------------------------------------------------------------------------
 * setup_context_widgets - Initialize the curcontextwindows widget structure
 *
 * curcontextwindows structure (56 bytes per context):
 *   0x00: Widget - GL context window (primary)
 *   0x04: Widget - GL context window (secondary)
 *   0x08: Widget - glwidget (GL drawing area)
 *   0x0c: Widget - contextTopWidget (main form container)
 *   0x10-0x20: Various file dialog widgets
 *   0x24: Widget - activeButton (drawing form)
 *   0x28: Widget - activeButtonMask (bulletin board)
 *   0x2c: Widget - locateHighlightName (label)
 *   0x30-0x34: shorts and pointers
 *-----------------------------------------------------------------------------*/
void setup_context_widgets(void) {
    Arg args[10];
    int n;
    Widget contextForm, glWidget, highlightLabel, buttonForm, buttonMask;
    Widget *cwptr;

    /* Ensure we have a parent widget */
    if (!context_top_widget) {
        fprintf(stderr, "setup_context_widgets: context_top_widget is NULL\n");
        return;
    }

    /* Initialize context pointers if not set */
    if (!curcontext) {
        curcontext = context;
        /* Initialize context structure with sensible defaults
         * Context offsets from original:
         *   +0x00: float camera_x
         *   +0x04: float camera_y
         *   +0x08: float camera_z
         *   +0x0c: short rotation_z
         *   +0x0e: short rotation_x  (0 = horizontal, -900 = looking down)
         *   +0x10: short fov (in tenths of degrees)
         *   +0x18: float zoom_factor_1
         *   +0x20: float zoom_factor_2
         *   +0x34: float scale_factor (must be > 0)
         *   +0x3c: int zoom_mode (0 = normal)
         */
        *(float *)(curcontext + 0x00) = 10.0f;    /* camera_x - center on blocks at X=8-12 */
        *(float *)(curcontext + 0x04) = -10.0f;   /* camera_y - closer to blocks at Y=0 */
        *(float *)(curcontext + 0x08) = 15.0f;    /* camera_z (height above ground) */
        *(short *)(curcontext + 0x0c) = 900;      /* rotation_z (90 degrees - face the blocks) */
        *(short *)(curcontext + 0x0e) = 0;        /* rotation_x (0 = horizontal) */
        *(short *)(curcontext + 0x10) = 450;      /* fov = 45 degrees */
        /* Note: 0x14-0x28 are populated by calc_h_angle/calc_v_angle below */
        *(float *)(curcontext + 0x34) = 1.0f;     /* scale_factor */
        *(int *)(curcontext + 0x3c) = 0;          /* zoom_mode = normal */

        /* Precompute sin/cos/tan for camera angles */
        calc_h_angle();
        calc_v_angle();

        fprintf(stderr, "setup_context_widgets: INIT camera to (%.1f, %.1f, %.1f)\n",
                *(float *)(curcontext + 0x00),
                *(float *)(curcontext + 0x04),
                *(float *)(curcontext + 0x08));
    }
    if (!altcontext) {
        altcontext = context + 0xc54;  /* Second context at offset 0xc54 */
    }
    if (!curcontextwindows) {
        curcontextwindows = contextwindows;
    }
    cwptr = (Widget *)curcontextwindows;

    /* 1. Create main form container (offset 0x0c / index 3) */
    n = 0;
    XtSetArg(args[n], XmNtopAttachment, XmATTACH_FORM); n++;
    XtSetArg(args[n], XmNbottomAttachment, XmATTACH_FORM); n++;
    XtSetArg(args[n], XmNleftAttachment, XmATTACH_FORM); n++;
    XtSetArg(args[n], XmNrightAttachment, XmATTACH_FORM); n++;
    contextForm = XtCreateWidget("contextTopWidget", xmFormWidgetClass,
                                  context_top_widget, args, n);

    /* Store at offset 0x0c (index 3 in Widget array) */
    cwptr[3] = contextForm;

    /* 2. Create GL drawing area (offset 0x08 / index 2) */
    n = 0;
    XtSetArg(args[n], XmNtopAttachment, XmATTACH_FORM); n++;
    XtSetArg(args[n], XmNbottomAttachment, XmATTACH_FORM); n++;
    XtSetArg(args[n], XmNleftAttachment, XmATTACH_FORM); n++;
    XtSetArg(args[n], XmNrightAttachment, XmATTACH_FORM); n++;
    XtSetArg(args[n], XmNwidth, 800); n++;
    XtSetArg(args[n], XmNheight, 600); n++;
    glWidget = XtCreateManagedWidget("glwidget", xmDrawingAreaWidgetClass,
                                      contextForm, args, n);
    cwptr[2] = glWidget;

    /* Register GL widget callbacks */
    XtAddCallback(glWidget, XmNexposeCallback, glwidget_expose_callback, NULL);
    XtAddCallback(glWidget, XmNresizeCallback, glwidget_resize_callback, NULL);

    /* Register mouse event handlers for camera navigation */
    XtAddEventHandler(glWidget, PointerMotionMask, False,
                      gl_motion_handler, NULL);
    XtAddEventHandler(glWidget, ButtonPressMask | ButtonReleaseMask, False,
                      gl_button_handler, NULL);

    /* 3. Create highlight label (offset 0x2c / index 11) */
    n = 0;
    highlightLabel = XtCreateManagedWidget("locateHighlightName",
                                            xmLabelWidgetClass, contextForm, args, n);
    cwptr[11] = highlightLabel;

    /* 4. Create button form (offset 0x24 / index 9) */
    buttonForm = XmCreateForm(contextForm, "activeButton0", NULL, 0);
    cwptr[9] = buttonForm;

    /* 5. Create button mask (offset 0x28 / index 10) */
    buttonMask = XmCreateBulletinBoard(buttonForm, "activeButtonMask", NULL, 0);
    XtManageChild(buttonMask);
    cwptr[10] = buttonMask;

    /* Manage the main form */
    XtManageChild(contextForm);

    /* topdir is now initialized by create_root_directory in main_entry.c */

    /* Request initial redraw */
    redraw_flag = 1;

    fprintf(stderr, "setup_context_widgets: Created widget hierarchy\n");
}

/*-----------------------------------------------------------------------------
 * Control Panel Callbacks (Phase 17)
 *-----------------------------------------------------------------------------*/

/* reset_eye - Reset camera to initial position */
void reset_eye(Widget w, XtPointer client, XtPointer call) {
    (void)w; (void)client; (void)call;
    /* Reset camera to initial position from resources */
    *(float *)(curcontext + 0x00) = 10.0f;    /* camera_x */
    *(float *)(curcontext + 0x04) = -10.0f;   /* camera_y */
    *(float *)(curcontext + 0x08) = 15.0f;    /* camera_z */
    *(short *)(curcontext + 0x0c) = 900;      /* rotation_z */
    *(short *)(curcontext + 0x0e) = 0;        /* rotation_x */
    calc_h_angle();
    calc_v_angle();
    redraw_flag = 1;
    set_status_message("View reset", 0);
}

/* go_back - Go back to previous view (stub) */
static void go_back_callback(Widget w, XtPointer client, XtPointer call) {
    (void)w; (void)client; (void)call;
    set_status_message("Go back (not implemented)", 0);
}

/* birds_eye - Switch to birds eye view */
static void birds_eye_callback(Widget w, XtPointer client, XtPointer call) {
    (void)w; (void)client; (void)call;
    /* Birds eye view: looking straight down from high up */
    *(float *)(curcontext + 0x00) = 10.0f;    /* camera_x */
    *(float *)(curcontext + 0x04) = 0.0f;     /* camera_y */
    *(float *)(curcontext + 0x08) = 100.0f;   /* camera_z (high up) */
    *(short *)(curcontext + 0x0c) = 0;        /* rotation_z */
    *(short *)(curcontext + 0x0e) = -900;     /* rotation_x (looking down) */
    calc_h_angle();
    calc_v_angle();
    redraw_flag = 1;
    set_status_message("Birds eye view", 0);
}

/* front_view - Switch to front view */
static void front_view_callback(Widget w, XtPointer client, XtPointer call) {
    (void)w; (void)client; (void)call;
    /* Front view: horizontal view from front */
    *(float *)(curcontext + 0x00) = 10.0f;    /* camera_x */
    *(float *)(curcontext + 0x04) = -20.0f;   /* camera_y (in front) */
    *(float *)(curcontext + 0x08) = 5.0f;     /* camera_z */
    *(short *)(curcontext + 0x0c) = 900;      /* rotation_z (facing blocks) */
    *(short *)(curcontext + 0x0e) = 0;        /* rotation_x (horizontal) */
    calc_h_angle();
    calc_v_angle();
    redraw_flag = 1;
    set_status_message("Front view", 0);
}

/* tilt_scale_callback - Handle tilt slider changes */
static void tilt_scale_callback(Widget w, XtPointer client, XtPointer call) {
    XmScaleCallbackStruct *cbs = (XmScaleCallbackStruct *)call;
    (void)w; (void)client;
    *(short *)(curcontext + 0x0e) = (short)cbs->value;  /* rotation_x */
    calc_v_angle();
    redraw_flag = 1;
}

/* height_scale_callback - Handle height slider changes */
static void height_scale_callback(Widget w, XtPointer client, XtPointer call) {
    XmScaleCallbackStruct *cbs = (XmScaleCallbackStruct *)call;
    (void)w; (void)client;
    *(float *)(curcontext + 0x08) = (float)cbs->value;  /* camera_z */
    redraw_flag = 1;
}

/* mark_callback - Add current selection to marks (stub) */
static void mark_callback(Widget w, XtPointer client, XtPointer call) {
    (void)w; (void)client; (void)call;
    set_status_message("Mark (not implemented)", 0);
}

/*-----------------------------------------------------------------------------
 * create_panel_component - Create left control panel with navigation and search
 *
 * Phase 17: Full left panel implementation matching original FSN
 * Returns: Widget - the created row column widget
 *-----------------------------------------------------------------------------*/
Widget create_panel_component(Widget parent, Arg *args, int nargs) {
    Widget controls, button, sep, scaleFrame, scaleRC;
    Widget searchFrame, searchRC, searchRow;
    Widget marksFrame, marksRC;
    Arg localArgs[10];
    int n;
    (void)args; (void)nargs;

    if (!parent) {
        fprintf(stderr, "create_panel_component: parent is NULL\n");
        return NULL;
    }

    /* Create main controls RowColumn (vertical orientation) */
    n = 0;
    XtSetArg(localArgs[n], XmNorientation, XmVERTICAL); n++;
    XtSetArg(localArgs[n], XmNentryAlignment, XmALIGNMENT_CENTER); n++;
    XtSetArg(localArgs[n], XmNpacking, XmPACK_TIGHT); n++;
    controls = XtCreateManagedWidget("controls", xmRowColumnWidgetClass,
                                      parent, localArgs, n);

    /*=========================================================================
     * Navigation Buttons
     *=========================================================================*/

    /* Reset button */
    button = XmCreatePushButton(controls, "reset", NULL, 0);
    XtAddCallback(button, XmNactivateCallback, reset_eye, NULL);
    XtManageChild(button);

    /* Go back button */
    button = XmCreatePushButton(controls, "back", NULL, 0);
    XtAddCallback(button, XmNactivateCallback, go_back_callback, NULL);
    XtManageChild(button);

    /* Birds eye button */
    button = XmCreatePushButton(controls, "top", NULL, 0);
    XtAddCallback(button, XmNactivateCallback, birds_eye_callback, NULL);
    XtManageChild(button);

    /* Front view button */
    button = XmCreatePushButton(controls, "front", NULL, 0);
    XtAddCallback(button, XmNactivateCallback, front_view_callback, NULL);
    XtManageChild(button);

    /* Separator */
    sep = XmCreateSeparator(controls, "control_sep", NULL, 0);
    XtManageChild(sep);

    /*=========================================================================
     * Tilt and Height Scales
     *=========================================================================*/

    /* Scales container (horizontal) */
    n = 0;
    XtSetArg(localArgs[n], XmNorientation, XmHORIZONTAL); n++;
    scaleRC = XtCreateManagedWidget("control_scales", xmRowColumnWidgetClass,
                                     controls, localArgs, n);

    /* Tilt scale (vertical, -900 to 0) */
    n = 0;
    XtSetArg(localArgs[n], XmNorientation, XmVERTICAL); n++;
    XtSetArg(localArgs[n], XmNminimum, -900); n++;
    XtSetArg(localArgs[n], XmNmaximum, 0); n++;
    XtSetArg(localArgs[n], XmNvalue, 0); n++;
    XtSetArg(localArgs[n], XmNshowValue, True); n++;
    XtSetArg(localArgs[n], XmNprocessingDirection, XmMAX_ON_BOTTOM); n++;
    vertical_scale_widget = XmCreateScale(scaleRC, "v_scale", localArgs, n);
    XtAddCallback(vertical_scale_widget, XmNvalueChangedCallback, tilt_scale_callback, NULL);
    XtAddCallback(vertical_scale_widget, XmNdragCallback, tilt_scale_callback, NULL);
    XtManageChild(vertical_scale_widget);

    /* Height scale (vertical, 1 to 120) */
    n = 0;
    XtSetArg(localArgs[n], XmNorientation, XmVERTICAL); n++;
    XtSetArg(localArgs[n], XmNminimum, 1); n++;
    XtSetArg(localArgs[n], XmNmaximum, 120); n++;
    XtSetArg(localArgs[n], XmNvalue, 15); n++;
    XtSetArg(localArgs[n], XmNshowValue, True); n++;
    zoom_scale_widget = XmCreateScale(scaleRC, "z_scale", localArgs, n);
    XtAddCallback(zoom_scale_widget, XmNvalueChangedCallback, height_scale_callback, NULL);
    XtAddCallback(zoom_scale_widget, XmNdragCallback, height_scale_callback, NULL);
    XtManageChild(zoom_scale_widget);

    /* Separator */
    sep = XmCreateSeparator(controls, "control_sep", NULL, 0);
    XtManageChild(sep);

    /*=========================================================================
     * Search Panel (simplified)
     *=========================================================================*/

    /* Search frame */
    searchFrame = XmCreateFrame(controls, "searchFrame", NULL, 0);
    XtManageChild(searchFrame);

    n = 0;
    XtSetArg(localArgs[n], XmNorientation, XmVERTICAL); n++;
    searchRC = XtCreateManagedWidget("searchRC", xmRowColumnWidgetClass,
                                      searchFrame, localArgs, n);

    /* Search label */
    XtCreateManagedWidget("Search", xmLabelWidgetClass, searchRC, NULL, 0);

    /* Name row */
    n = 0;
    XtSetArg(localArgs[n], XmNorientation, XmHORIZONTAL); n++;
    searchRow = XtCreateManagedWidget("nameRow", xmRowColumnWidgetClass, searchRC, localArgs, n);
    XtCreateManagedWidget("name", xmLabelWidgetClass, searchRow, NULL, 0);
    search_name_field = XmCreateTextField(searchRow, "nametext", NULL, 0);
    XtManageChild(search_name_field);

    /* Size row */
    n = 0;
    XtSetArg(localArgs[n], XmNorientation, XmHORIZONTAL); n++;
    searchRow = XtCreateManagedWidget("sizeRow", xmRowColumnWidgetClass, searchRC, localArgs, n);
    XtCreateManagedWidget("size", xmLabelWidgetClass, searchRow, NULL, 0);
    search_size_comp_button = XmCreatePushButton(searchRow, ">", NULL, 0);
    XtManageChild(search_size_comp_button);
    search_size_field = XmCreateTextField(searchRow, "sizetext", NULL, 0);
    XtManageChild(search_size_field);

    /* Age row */
    n = 0;
    XtSetArg(localArgs[n], XmNorientation, XmHORIZONTAL); n++;
    searchRow = XtCreateManagedWidget("ageRow", xmRowColumnWidgetClass, searchRC, localArgs, n);
    XtCreateManagedWidget("age", xmLabelWidgetClass, searchRow, NULL, 0);
    search_age_comp_button = XmCreatePushButton(searchRow, ">", NULL, 0);
    XtManageChild(search_age_comp_button);
    search_age_field = XmCreateTextField(searchRow, "agetext", NULL, 0);
    XtManageChild(search_age_field);

    /* OK / Apply / Cancel buttons */
    n = 0;
    XtSetArg(localArgs[n], XmNorientation, XmHORIZONTAL); n++;
    searchRow = XtCreateManagedWidget("searchButtons", xmRowColumnWidgetClass, searchRC, localArgs, n);
    XtCreateManagedWidget("OK", xmPushButtonWidgetClass, searchRow, NULL, 0);
    XtCreateManagedWidget("Apply", xmPushButtonWidgetClass, searchRow, NULL, 0);
    XtCreateManagedWidget("Cancel", xmPushButtonWidgetClass, searchRow, NULL, 0);

    /* Separator */
    sep = XmCreateSeparator(controls, "control_sep", NULL, 0);
    XtManageChild(sep);

    /*=========================================================================
     * Marks Panel (simplified)
     *=========================================================================*/

    /* Marks frame */
    marksFrame = XmCreateFrame(controls, "marksFrame", NULL, 0);
    XtManageChild(marksFrame);

    n = 0;
    XtSetArg(localArgs[n], XmNorientation, XmVERTICAL); n++;
    marksRC = XtCreateManagedWidget("marksRC", xmRowColumnWidgetClass,
                                     marksFrame, localArgs, n);

    /* Marks label */
    XtCreateManagedWidget("Marks", xmLabelWidgetClass, marksRC, NULL, 0);

    /* Marks list (simple placeholder) */
    {
        Widget markList;
        n = 0;
        XtSetArg(localArgs[n], XmNvisibleItemCount, 4); n++;
        markList = XmCreateScrolledList(marksRC, "markList", localArgs, n);
        XtManageChild(markList);
        /* Note: mark_selector_list is int in original code, can't store Widget safely */
    }

    /* go to / delete buttons */
    n = 0;
    XtSetArg(localArgs[n], XmNorientation, XmHORIZONTAL); n++;
    searchRow = XtCreateManagedWidget("markButtons", xmRowColumnWidgetClass, marksRC, localArgs, n);
    XtCreateManagedWidget("go to", xmPushButtonWidgetClass, searchRow, NULL, 0);
    XtCreateManagedWidget("delete", xmPushButtonWidgetClass, searchRow, NULL, 0);

    /* Mark button */
    button = XmCreatePushButton(controls, "mark", NULL, 0);
    XtAddCallback(button, XmNactivateCallback, mark_callback, NULL);
    XtManageChild(button);

    fprintf(stderr, "create_panel_component: Created full control panel\n");
    return controls;
}
