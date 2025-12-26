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
#include "fsn_dir.h"
#include "draw_tree.h"
#include "window.h"
#include "fsn_igl.h"
#include "drawing.h"
#include "fsn_context.h"
#include "overview.h"
#include <stdio.h>
#include <math.h>
#include <Xm/Xm.h>
#include <GL/gl.h>
#include <GL/glx.h>

extern void GLXwinset(Display *dpy, Window win);

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

/**
 * glx_reset_context_wrapper - Make current GLX context current on main window
 * Wrapper for FUN_0040bc28 / FUN_0041fd70 behavior.
 */
void glx_reset_context_wrapper(void) {
    /* Reset to main GL window */
    set_main_gl_window();
}

/**
 * glx_switch_context_wrapper - Switch to alternate context (overview/overlay)
 * Minimal implementation: reuse shared context on current window.
 */
void glx_switch_context_wrapper(void) {
    /* For now, reuse main window context */
    set_main_gl_window();
}

/**
 * glx_swap_buffers_wrapper - Swap buffers with optional pre-swap flush
 * Matches FUN_0042a8e4 pattern: flush then swap if context active.
 */
void glx_swap_buffers_wrapper(void) {
    if (current_glx_display && current_glx_window) {
        glFlush();
        glXSwapBuffers(current_glx_display, current_glx_window);
    }
}

/**
 * gl_get_dimensions_wrapper - Retrieve viewport dimensions
 * Outputs width/height/depth-equivalent zmax.
 */
void gl_get_dimensions_wrapper(void *out_w, void *out_h, void *out_zmax) {
    GLint viewport[4] = {0, 0, 0, 0};
    glGetIntegerv(GL_VIEWPORT, viewport);
    if (out_w) *(int *)out_w = viewport[2];
    if (out_h) *(int *)out_h = viewport[3];
    if (out_zmax) *(int *)out_zmax = 0x7fffff; /* matches fsn_igl zmax */
}

/* Basic picking setup: depth test on, flat shading, disable blends/textures */
void gl_picking_setup_wrapper(void) {
    glDisable(GL_LIGHTING);
    glDisable(GL_TEXTURE_2D);
    glDisable(GL_BLEND);
    glShadeModel(GL_FLAT);
    glDepthMask(GL_TRUE);
    glEnable(GL_DEPTH_TEST);
    glClear(GL_DEPTH_BUFFER_BIT);
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
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    shademodel(use_gouraud_shading ? 1 : 0);
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
    FsnContext *ctx = (FsnContext *)curcontext;
    float angle = ctx->rotation_z * (M_PI / 1800.0f);
    ctx->sin_z = sinf(angle);
    ctx->cos_z = cosf(angle);
    ctx->tan_z = tanf(angle);
}

/* calc_v_angle - precompute sin/cos/tan for vertical (X) rotation
 * Context offsets:
 *   +0x0e: short rotation_x (input, tenths of degrees)
 *   +0x20: float sin_x (output)
 *   +0x24: float cos_x (output)
 *   +0x28: float tan_x (output)
 */
void calc_v_angle(void) {
    FsnContext *ctx = (FsnContext *)curcontext;
    float angle = ctx->rotation_x * (M_PI / 1800.0f);
    ctx->sin_x = sinf(angle);
    ctx->cos_x = cosf(angle);
    ctx->tan_x = tanf(angle);
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

/* setScales - Sync scale widget values to curcontext angles
 * ORIGINAL: fsn.c:37740-37764
 * Called after camera changes to update the UI sliders to reflect new values.
 * Uses cached values to avoid unnecessary XtSetValues calls.
 *
 * Resource constant 0xf66187b = XmNvalue
 */
void setScales(void) {
    FsnContext *ctx = (FsnContext *)curcontext;
    Arg args[1];

    /* Only update if controls are visible and not in special mode */
    if (controlsShowing == '\0') return;
    if (ctx->special_mode_flag != '\0') return;  /* Special mode flag */

    /* Update horizontal angle widget (view_angle_widget) */
    if (cached_view_angle_1 != ctx->rotation_z) {
        cached_view_angle_1 = ctx->rotation_z;
        if (view_angle_widget != NULL) {
            XtSetArg(args[0], XmNvalue, (int)cached_view_angle_1);
            XtSetValues(view_angle_widget, args, 1);
        }
    }

    /* Update vertical angle widget (vertical_scale_widget) */
    if (cached_view_angle_2 != ctx->rotation_x) {
        cached_view_angle_2 = ctx->rotation_x;
        if (vertical_scale_widget != NULL) {
            XtSetArg(args[0], XmNvalue, (int)cached_view_angle_2);
            XtSetValues(vertical_scale_widget, args, 1);
        }
    }
}

/*=============================================================================
 * Phase 16: Mouse camera controls
 * gl_motion_handler and gl_button_handler for camera navigation
 * movehoriz() is in movement.c
 *============================================================================*/

/* Forward declaration - implemented in movement.c */
void movehoriz(float delta_x, float delta_y);

/* Forward declarations for picking and selection (Phase 20) */
static void do_pick_at_mouse(void);
static void parse_pick_buffer(short *buffer, int hit_count, int *dir_id, int *file_id);
static void select_node_by_id(int node_id);
static DirectoryNode *find_node_by_name_index(int name_index);
static DirectoryNode *find_node_recursive(DirectoryNode *node, int name_index);
static void zoom_in_step(void);
static void zoom_out_step(void);
static void postMenu(Widget w, XtPointer client, XEvent *event);

/* Track if mouse was dragged (for click vs drag detection) */
static int mouse_was_dragged = 0;
static int mouse_press_x = 0;
static int mouse_press_y = 0;

/* gl_motion_handler - Handle mouse motion events for camera rotate/pan
 * Registered with XtAddEventHandler for PointerMotionMask
 *
 * Left drag = rotate camera (look around)
 * Right drag = pan camera position
 */
void gl_motion_handler(Widget w, XtPointer client_data, XEvent *event, Boolean *cont)
{
    FsnContext *ctx = (FsnContext *)curcontext;
    (void)w; (void)client_data; (void)cont;

    if (mouse_button_down == 0) return;  /* Only when dragging */
    if (event->type != MotionNotify) return;

    int x = event->xmotion.x;
    int y = event->xmotion.y;

    float delta_x = (float)(x - mouse_last_x) * mouse_speed;
    float delta_y = (float)(y - mouse_last_y) * mouse_speed;

    /* Detect drag (more than 5 pixels from press point) */
    int drag_dist_sq = (x - mouse_press_x) * (x - mouse_press_x) +
                       (y - mouse_press_y) * (y - mouse_press_y);
    if (drag_dist_sq > 25) {  /* 5 pixel threshold */
        mouse_was_dragged = 1;
    }

    mouse_last_x = x;
    mouse_last_y = y;

    if (mouse_button_down == 1) {
        /* Left button: rotate camera (look around) */
        ctx->rotation_z += (short)(delta_x * 5);  /* rot_z (yaw) */
        ctx->rotation_x += (short)(delta_y * 5);  /* rot_x (pitch) */
        init_view_transform();
        init_camera_state();
        redraw_flag = 1;
    } else if (mouse_button_down == 3) {
        /* Right button: pan camera position */
        movehoriz(delta_x, delta_y);
    }
}

/* gl_button_handler - Handle mouse button events (XtEventHandler signature)
 *
 * ORIGINAL: fsn.c button handling
 * Button 1 (left):   Drag = rotate camera
 * Button 2 (middle): Reserved
 * Button 3 (right):  Click = context menu, Drag = pan camera
 * Button 4/5:        Scroll wheel zoom (modern addition)
 */
void gl_button_handler(Widget w, XtPointer client_data, XEvent *event, Boolean *cont)
{
    (void)w; (void)client_data; (void)cont;

    if (event->type == ButtonPress) {
        fprintf(stderr, "gl_button_handler: ButtonPress button=%u at (%d, %d)\n",
                event->xbutton.button, event->xbutton.x, event->xbutton.y);

        mouse_button_down = event->xbutton.button;
        mouse_last_x = event->xbutton.x;
        mouse_last_y = event->xbutton.y;
        mouse_press_x = event->xbutton.x;
        mouse_press_y = event->xbutton.y;
        mouse_was_dragged = 0;

        switch (event->xbutton.button) {
            case 1:  /* Left press - start rotate drag */
                /* Picking happens on release if no drag */
                break;

            case 2:  /* Middle click - reserved */
                break;

            case 3:  /* Right press - start pan drag */
                /* Context menu shown on release if no drag */
                break;

            case 4:  /* Scroll up - zoom in (lower camera) */
                zoom_in_step();
                break;

            case 5:  /* Scroll down - zoom out (raise camera) */
                zoom_out_step();
                break;
        }
    } else if (event->type == ButtonRelease) {
        int button = event->xbutton.button;

        fprintf(stderr, "gl_button_handler: ButtonRelease button=%u dragged=%d\n",
                button, mouse_was_dragged);

        if (!mouse_was_dragged) {
            /* This was a click, not a drag */
            if (button == 1) {
                /* Left click - pick/select file */
                set_pick_coords(event->xbutton.x, event->xbutton.y);
                do_pick_at_mouse();
            } else if (button == 3) {
                /* Right click - context menu */
                postMenu(w, client_data, event);
            }
        }

        mouse_button_down = 0;
    }
}

/*=============================================================================
 * Phase 20: Picking and Selection
 *============================================================================*/

/**
 * do_pick_at_mouse - Perform GL picking at current mouse position
 *
 * ORIGINAL: pickWarp (fsn.c:43033-43095)
 * Uses GL selection mode to find what object is under the cursor.
 */
static void do_pick_at_mouse(void)
{
    short pick_buffer[500];
    int hit_count;
    int node_id = -1;
    int secondary_id = -1;

    /* Save current matrix */
    pushmatrix();

    /* Initialize name stack */
    initnames();

    /* Set pick region size */
    picksize(10, 10);

    /* Enter selection mode */
    pick(pick_buffer, 500);

    /* Render scene with names - this pushes name indices onto the stack */
    draw_tree_content('\x01');  /* Pick mode flag */

    /* End selection and get hit count */
    hit_count = endpick(pick_buffer);

    /* Restore matrix */
    popmatrix();

    /* Parse hit buffer for selection */
    if (hit_count > 0) {
        parse_pick_buffer(pick_buffer, hit_count, &node_id, &secondary_id);

        if (node_id >= 0) {
            select_node_by_id(node_id);
        }
    } else {
        /* Clicked empty space - clear selection */
        clear_current_selection();
    }

    redraw_flag = 1;
}

/**
 * parse_pick_buffer - Extract node IDs from OpenGL hit records
 *
 * ORIGINAL: fsn.c:43064-43089
 * Hit record format: [name_count, z_min, z_max, name1, name2, ...]
 */
static void parse_pick_buffer(short *buffer, int hit_count, int *dir_id, int *file_id)
{
    int i = 0;
    int hits_processed = 0;

    *dir_id = -1;
    *file_id = -1;

    while (hits_processed < hit_count) {
        int name_count = buffer[i];

        if (name_count >= 1) {
            /* First name is the node ID */
            *dir_id = buffer[i + 1];
        }
        if (name_count >= 2) {
            /* Second name if present */
            *file_id = buffer[i + 2];
        }

        /* Skip to next hit record */
        i += 1 + name_count;
        hits_processed++;
    }
}

/**
 * select_node_by_id - Set a node as selected by its name_index
 *
 * Finds the node, clears previous selection, sets new selection.
 */
static void select_node_by_id(int node_id)
{
    DirectoryNode *node = find_node_by_name_index(node_id);
    if (node == NULL) return;

    /* Clear previous selection */
    clear_current_selection();

    /* Set new selection */
    node->render_flags |= DIR_FLAG_SELECTED;
    selected_id_1 = node_id;

    /* Update status bar with node name */
    if (node->name) {
        set_status_message(node->name, 0);
    }
}

/**
 * find_node_by_name_index - Find a node in the tree by its name_index
 */
static DirectoryNode *find_node_by_name_index(int name_index)
{
    if (topdir == NULL) return NULL;
    return find_node_recursive((DirectoryNode *)topdir, name_index);
}

static DirectoryNode *find_node_recursive(DirectoryNode *node, int name_index)
{
    int i;
    DirectoryNode *found;

    if (node == NULL) return NULL;
    if (node->name_index == name_index) return node;

    /* Check ternary children */
    if ((found = find_node_recursive(node->child_center, name_index))) return found;
    if ((found = find_node_recursive(node->child_left, name_index))) return found;
    if ((found = find_node_recursive(node->child_right, name_index))) return found;

    /* Check files array */
    if (node->files_array) {
        for (i = 0; i < node->num_files; i++) {
            if ((found = find_node_recursive(node->files_array[i], name_index)))
                return found;
        }
    }

    return NULL;
}

/*=============================================================================
 * Phase 20: Scroll Wheel Zoom
 *============================================================================*/

/**
 * zoom_in_step - Decrease camera Z for closer view
 *
 * Modern enhancement - original FSN used slider only.
 * Scroll up = zoom in = lower camera height.
 */
static void zoom_in_step(void)
{
    FsnContext *ctx = (FsnContext *)curcontext;
    float current_z = ctx->camera_z;
    float new_z = current_z * 0.9f;  /* 10% closer */

    if (new_z < 1.0f) new_z = 1.0f;  /* Minimum height */

    fprintf(stderr, "zoom_in_step: z %.2f -> %.2f\n", current_z, new_z);
    ctx->camera_z = new_z;
    redraw_flag = 1;
}

/**
 * zoom_out_step - Increase camera Z for wider view
 *
 * Scroll down = zoom out = raise camera height.
 */
static void zoom_out_step(void)
{
    FsnContext *ctx = (FsnContext *)curcontext;
    float current_z = ctx->camera_z;
    float new_z = current_z * 1.1f;  /* 10% further */

    if (new_z > 120.0f) new_z = 120.0f;  /* Maximum height */

    fprintf(stderr, "zoom_out_step: z %.2f -> %.2f\n", current_z, new_z);
    ctx->camera_z = new_z;
    redraw_flag = 1;
}

/*=============================================================================
 * Phase 20: Right-Click Context Menu
 *============================================================================*/

/**
 * postMenu - Show context menu at mouse position
 *
 * ORIGINAL: fsn.c:45663-45676
 */
static void postMenu(Widget w, XtPointer client, XEvent *event)
{
    XButtonEvent *bevent = (XButtonEvent *)event;
    (void)w; (void)client;

    if (popup_menu_widget == NULL) {
        set_status_message("No context menu", 0);
        return;
    }
    if (bevent->button != 3) return;  /* Only right-click */

    /* Position menu at mouse cursor */
    XmMenuPosition(popup_menu_widget, bevent);
    XtManageChild(popup_menu_widget);
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

/* Forward declarations for height mode callbacks */
static void file_height_mode_callback(Widget w, XtPointer client, XtPointer call);
static void dir_height_mode_callback(Widget w, XtPointer client, XtPointer call);
static void toggle_overview_callback(Widget w, XtPointer client, XtPointer call);

/**
 * toggle_overview_callback - Toggle overview minimap visibility
 *
 * ORIGINAL: Part of fsn.c Show menu handling
 * Toggles overviewActive flag and triggers initial overview draw.
 */
static void toggle_overview_callback(Widget w, XtPointer client, XtPointer call)
{
    (void)w; (void)client; (void)call;

    if (overviewActive == '\0') {
        showOverview();
        set_status_message("Overview shown", 0);
    } else {
        hideOverview();
        set_status_message("Overview hidden", 0);
    }
    redraw_flag = 1;
}

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
    XtAddCallback(button, XmNactivateCallback, toggle_overview_callback, NULL);
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

    /* Height submenu - file height modes (ORIGINAL: fsn.c:958-969) */
    {
        Widget heightPane, heightCascade;
        heightPane = XmCreatePulldownMenu(pane, "height_pane", NULL, 0);

        /* None mode (0) - all files same height */
        file_height_none_toggle = XmCreatePushButton(heightPane, "menuHeightNone", NULL, 0);
        XtAddCallback(file_height_none_toggle, XmNactivateCallback,
                      file_height_mode_callback, (XtPointer)0);
        XtManageChild(file_height_none_toggle);

        /* Linear mode (1) - height proportional to log(size) */
        file_height_linear_toggle = XmCreatePushButton(heightPane, "menuHeightLinear", NULL, 0);
        XtAddCallback(file_height_linear_toggle, XmNactivateCallback,
                      file_height_mode_callback, (XtPointer)1);
        XtManageChild(file_height_linear_toggle);

        /* Exaggerated mode (2) - height = size^exponent */
        file_height_exag_toggle = XmCreatePushButton(heightPane, "menuHeightExaggerated", NULL, 0);
        XtAddCallback(file_height_exag_toggle, XmNactivateCallback,
                      file_height_mode_callback, (XtPointer)2);
        XtManageChild(file_height_exag_toggle);

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

    /* Directory Height submenu - directory visualization modes (ORIGINAL: fsn.c:961) */
    {
        Widget dirHeightPane, dirHeightCascade;
        dirHeightPane = XmCreatePulldownMenu(pane, "dirheight_pane", NULL, 0);

        /* Flat mode (0) */
        dir_flat_toggle = XmCreatePushButton(dirHeightPane, "menuDirectoryFlat", NULL, 0);
        XtAddCallback(dir_flat_toggle, XmNactivateCallback,
                      dir_height_mode_callback, (XtPointer)0);
        XtManageChild(dir_flat_toggle);

        /* Files Only mode (1) */
        dir_files_only_toggle = XmCreatePushButton(dirHeightPane, "menuDirectoryFilesOnly", NULL, 0);
        XtAddCallback(dir_files_only_toggle, XmNactivateCallback,
                      dir_height_mode_callback, (XtPointer)1);
        XtManageChild(dir_files_only_toggle);

        /* Children mode (2) */
        dir_children_toggle = XmCreatePushButton(dirHeightPane, "menuDirectoryChildren", NULL, 0);
        XtAddCallback(dir_children_toggle, XmNactivateCallback,
                      dir_height_mode_callback, (XtPointer)2);
        XtManageChild(dir_children_toggle);

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
    FsnContext *ctx = (FsnContext *)curcontext;
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
        ctx = (FsnContext *)curcontext; /* UPDATE LOCAL POINTER */
        /* Initialize context structure with sensible defaults
         * Context offsets from original:
         *   +0x00: float camera_x
         *   +0x04: float camera_y
         *   +0x08: float camera_z
         *   +0x0c: short rotation_z (yaw in tenths of degrees, 0 = looking +Y)
         *   +0x0e: short rotation_x (pitch in tenths of degrees, 0 = horizontal)
         *   +0x10: short fov (in tenths of degrees)
         *   +0x14: float sin_z (computed by calc_h_angle)
         *   +0x18: float cos_z (computed by calc_h_angle)
         *   +0x34: float scale_factor (must be > 0)
         *   +0x3c: int zoom_mode (0 = normal)
         *
         * Use view_init values from resources (or defaults from init_resources.c)
         */
        ctx->camera_x = view_init_x;   /* camera_x */
        ctx->camera_y = view_init_y;   /* camera_y */
        ctx->camera_z = view_init_z;   /* camera_z (height) */
        ctx->rotation_z = 0;             /* rotation_z (0 = looking +Y toward files) */
        ctx->rotation_x = (short)view_init_tilt;  /* rotation_x from initialTilt resource (-70 deg) */
        ctx->fov = 450;           /* fov = 45 degrees */
        ctx->scale_factor = 1.0f;          /* scale_factor */
        ctx->zoom_mode = 0;               /* zoom_mode = normal */

        /* Precompute sin/cos/tan for camera angles - CRITICAL for panning */
        calc_h_angle();
        calc_v_angle();

        fprintf(stderr, "setup_context_widgets: INIT camera pos=(%.1f, %.1f, %.1f) rot_z=%d rot_x=%d\n",
                ctx->camera_x,
                ctx->camera_y,
                ctx->camera_z,
                ctx->rotation_z,
                ctx->rotation_x);
        fprintf(stderr, "setup_context_widgets: sin_z=%.3f cos_z=%.3f\n",
                ctx->sin_z,
                ctx->cos_z);
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

    /* Create popup context menu for right-click (Phase 20)
     * ORIGINAL: fsn.c popup_menu_widget
     */
    {
        Widget popup_pane, btn;

        popup_pane = XmCreatePopupMenu(glWidget, "popupMenu", NULL, 0);
        popup_menu_widget = popup_pane;

        btn = XmCreatePushButton(popup_pane, "Open", NULL, 0);
        XtManageChild(btn);

        XtManageChild(XmCreateSeparator(popup_pane, "sep1", NULL, 0));

        btn = XmCreatePushButton(popup_pane, "Copy", NULL, 0);
        XtManageChild(btn);

        btn = XmCreatePushButton(popup_pane, "Move", NULL, 0);
        XtManageChild(btn);

        btn = XmCreatePushButton(popup_pane, "Delete", NULL, 0);
        XtManageChild(btn);
    }

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

/* reset_eye - Reset camera to initial position
 * ORIGINAL: fsn.c:37668-37675
 * Original called save_matrix_state() then set_camera_lookat(view_init_x, view_init_y)
 * We use the resource-defined view_init_x/y/z values.
 */
void reset_eye(Widget w, XtPointer client, XtPointer call) {
    FsnContext *ctx = (FsnContext *)curcontext;
    (void)w; (void)client; (void)call;

    /* Reset to initial position from resources */
    ctx->camera_x = view_init_x;   /* camera_x */
    ctx->camera_y = view_init_y;   /* camera_y */
    ctx->camera_z = view_init_z;   /* camera_z (height) */
    ctx->rotation_z = 0;             /* rotation_z (0 = looking +Y) */
    ctx->rotation_x = (short)view_init_tilt;  /* rotation_x from initialTilt resource */

    calc_h_angle();
    calc_v_angle();
    setScales();  /* Sync scale widgets to new values */
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
    FsnContext *ctx = (FsnContext *)curcontext;
    (void)w; (void)client; (void)call;
    /* Birds eye view: looking straight down from high up */
    ctx->camera_x = 10.0f;    /* camera_x */
    ctx->camera_y = 0.0f;     /* camera_y */
    ctx->camera_z = 100.0f;   /* camera_z (high up) */
    ctx->rotation_z = 0;        /* rotation_z */
    ctx->rotation_x = -900;     /* rotation_x (looking down) */
    calc_h_angle();
    calc_v_angle();
    redraw_flag = 1;
    set_status_message("Birds eye view", 0);
}

/* front_view - Switch to front view */
static void front_view_callback(Widget w, XtPointer client, XtPointer call) {
    FsnContext *ctx = (FsnContext *)curcontext;
    (void)w; (void)client; (void)call;
    /* Front view: horizontal view from front */
    ctx->camera_x = 10.0f;    /* camera_x */
    ctx->camera_y = -20.0f;   /* camera_y (in front) */
    ctx->camera_z = 5.0f;     /* camera_z */
    ctx->rotation_z = 900;      /* rotation_z (facing blocks) */
    ctx->rotation_x = 0;        /* rotation_x (horizontal) */
    calc_h_angle();
    calc_v_angle();
    redraw_flag = 1;
    set_status_message("Front view", 0);
}

/* tilt_scale_callback - Handle tilt slider changes */
static void tilt_scale_callback(Widget w, XtPointer client, XtPointer call) {
    FsnContext *ctx = (FsnContext *)curcontext;
    XmScaleCallbackStruct *cbs = (XmScaleCallbackStruct *)call;
    (void)w; (void)client;
    ctx->rotation_x = (short)cbs->value;  /* rotation_x */
    calc_v_angle();
    redraw_flag = 1;
}

/* height_scale_callback - Handle height slider changes */
static void height_scale_callback(Widget w, XtPointer client, XtPointer call) {
    FsnContext *ctx = (FsnContext *)curcontext;
    XmScaleCallbackStruct *cbs = (XmScaleCallbackStruct *)call;
    (void)w; (void)client;
    ctx->camera_z = (float)cbs->value;  /* camera_z */
    redraw_flag = 1;
}

/**
 * file_height_mode_callback - Handle height mode menu selection
 *
 * ORIGINAL: fsn.c:958 (forward declaration)
 * client_data: 0=None, 1=Linear, 2=Exaggerated
 */
static void file_height_mode_callback(Widget w, XtPointer client, XtPointer call) {
    int mode = (int)(intptr_t)client;
    const char *mode_names[] = {"None", "Linear", "Exaggerated"};
    (void)w; (void)call;

    if (displayHeight == mode) return;  /* No change */

    displayHeight = mode;

    /* Recalculate all file heights */
    recalculate_tree_heights();

    /* Trigger redraw */
    redraw_flag = 1;

    set_status_message(mode_names[mode], 0);
}

/**
 * dir_height_mode_callback - Handle directory height mode menu selection
 *
 * ORIGINAL: fsn.c:961 (forward declaration)
 * client_data: 0=Flat, 1=FilesOnly, 2=Children
 */
static void dir_height_mode_callback(Widget w, XtPointer client, XtPointer call) {
    int mode = (int)(intptr_t)client;
    const char *mode_names[] = {"Flat", "Files Only", "Children"};
    (void)w; (void)call;

    if (displayDirectoryHeight == mode) return;  /* No change */

    displayDirectoryHeight = mode;

    /* Recalculate heights if needed */
    recalculate_tree_heights();

    /* Trigger redraw */
    redraw_flag = 1;

    set_status_message(mode_names[mode], 0);
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

    /* Mark controls as showing for setScales() sync */
    controlsShowing = 1;

    fprintf(stderr, "create_panel_component: Created full control panel\n");
    return controls;
}

/*=============================================================================
 * File Drawing Stubs - Added for draw_file fix (Phase 18)
 *============================================================================*/

/**
 * draw_spotlight_effect - Draw selection spotlight for file icon
 *
 * Called from draw_file() when item has spotlight enabled.
 * Original: Part of FUN_00422f58 spotlight rendering section.
 *
 * param_1: Icon pointer for bounds calculation
 */
void draw_spotlight_effect(undefined4 icon_ptr) {
    /* Stub - spotlight rendering handled in draw_tree.c:spotlight() */
    (void)icon_ptr;
}
