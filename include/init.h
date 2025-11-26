/**
 * init.h
 *
 * Application initialization for FSN.
 * Handles X11/Motif setup, widget creation, and GL context initialization.
 */

#ifndef FSN_INIT_H
#define FSN_INIT_H

#include "fsn_types.h"
#include <X11/Intrinsic.h>

/*=============================================================================
 * Application Initialization
 *============================================================================*/

/**
 * Initialize the FSN application.
 * Creates X11 connection, toplevel widget, and application context.
 *
 * @param argc Pointer to argument count
 * @param argv Argument vector
 * @return 0 on success, -1 on error
 */
int fsn_app_init(int *argc, char **argv);

/**
 * Initialize application resources.
 * Loads configuration, sets up resource database.
 *
 * @return 0 on success, -1 on error
 */
int fsn_resources_init(void);

/**
 * Initialize the database subsystem.
 * Sets up file/directory tracking, memory pools.
 *
 * @return 0 on success, -1 on error
 */
int fsn_database_init(void);

/**
 * Initialize event handlers.
 * Registers callbacks for X events, input handling.
 *
 * @return 0 on success, -1 on error
 */
int fsn_events_init(void);

/*=============================================================================
 * Widget Initialization
 *============================================================================*/

/**
 * Create the main window widget hierarchy.
 * Creates MainWindow, MenuBar, PanedWindow, DrawingArea.
 *
 * @return 0 on success, -1 on error
 */
int fsn_create_main_window(void);

/**
 * Create the panel widget with controls.
 * Creates the side panel with zoom, rotation controls.
 *
 * @return 0 on success, -1 on error
 */
int fsn_create_panel(void);

/**
 * Create the context widget for 3D rendering.
 * Creates the GL drawing area widget.
 *
 * @return 0 on success, -1 on error
 */
int fsn_create_context(void);

/**
 * Create the legend widget.
 * Shows color coding for file types.
 *
 * @return 0 on success, -1 on error
 */
int fsn_create_legend(void);

/**
 * Create the overview widget.
 * Shows minimap of directory structure.
 *
 * @return 0 on success, -1 on error
 */
int fsn_create_overview(void);

/*=============================================================================
 * GL Initialization
 *============================================================================*/

/**
 * Initialize OpenGL context.
 * Sets up GLX context, visual, drawing buffers.
 *
 * @return 0 on success, -1 on error
 */
int fsn_gl_init(void);

/**
 * Initialize display lists for rendering.
 * Creates display lists for common shapes (boxes, icons).
 *
 * @return 0 on success, -1 on error
 */
int fsn_display_lists_init(void);

/**
 * Set the main GL window for rendering.
 * Makes the GL context current for the main view.
 */
void fsn_set_main_gl_window(void);

/*=============================================================================
 * Cleanup
 *============================================================================*/

/**
 * Cleanup and shutdown FSN.
 * Releases resources, closes connections.
 */
void fsn_shutdown(void);

/*=============================================================================
 * Main Event Loop
 *============================================================================*/

/**
 * Run the main event loop.
 * Processes X events until application exit.
 */
void fsn_main_loop(void);

#endif /* FSN_INIT_H */
