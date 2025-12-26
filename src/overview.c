/**
 * overview.c - Overview/Minimap System
 *
 * The overview provides a birds-eye 2D minimap of the entire directory tree
 * with a cursor showing the current camera position.
 *
 * Extracted from fsn_original.exploded.v2/ during Phase 21.
 */

#include "overview.h"
#include "fsn_dir.h"
#include "fsn_state.h"
#include "fsn_context.h"
#include "fsn_igl.h"
#include "window.h"
#include <stdio.h>
#include <math.h>
#include <X11/Xlib.h>
#include <Xm/Xm.h>

/* Overview cursor crosshair endpoints */
static int overview_cursor_h1[2] = {-10, 0};
static int overview_cursor_h2[2] = {10, 0};
static int overview_cursor_v1[2] = {0, -10};
static int overview_cursor_v2[2] = {0, 10};

/* Overview colors (from binary data section) */
static unsigned int overview_local_bg_color = 0x00000000;      /* DAT_100175f0 */
static unsigned int overview_child_color = 0x00808080;         /* DAT_1001760c */
static unsigned int overview_child_sel = 0x00FFFFFF;           /* DAT_10017608 */

/*=============================================================================
 * GLX Context Management for Overview Windows
 *============================================================================*/

/**
 * set_overview_gl_context - Make overview window GLX context current
 */
void set_overview_gl_context(void)
{
    set_main_gl_window();
}

/**
 * set_overlay_gl_context - Make overlay window GLX context current
 */
void set_overlay_gl_context(void)
{
    set_main_gl_window();
}

void setOverviewWindow(void) { set_overview_gl_context(); }
void setOverviewOverlayWindow(void) { set_overlay_gl_context(); }

/*=============================================================================
 * Overview Content Drawing
 *============================================================================*/

/**
 * draw_overview_content - Draw overview content after clearing
 * Called by highlight.c and overview rendering functions.
 */
void draw_overview_content(void)
{
    drawOverviewOverlayCursor();
}

/*=============================================================================
 * Main Overview Rendering
 *============================================================================*/

/**
 * drawOverview - Main overview rendering entry point
 */
void drawOverview(void)
{
    if (overviewActive == '\0') {
        return;
    }

    set_overview_gl_context();
    cpack(overview_local_bg_color);
    clear();

    if (topdir != 0) {
        draw_overview_tree_recursive((DirectoryNode *)topdir, 0);
    }

    swapbuffers();
}

/**
 * draw_overview_tree_recursive - Recursively draw directory tree
 *
 * Draws a directory node and its children as 2D rectangles with connecting lines.
 */
void draw_overview_tree_recursive(DirectoryNode *node, char pick_mode)
{
    int i;
    DirectoryNode *child;
    unsigned int color_val;
    float half_height;
    float line_start[2], line_end[2];

    if (node == NULL) return;

    /* Check visibility using macro */
    if (!DIR_IS_VISIBLE(node)) {
        return;
    }

    /* Load name for picking */
    loadname((int)node->name_index);

    /* Select color based on selection state */
    if (DIR_IS_SELECTED(node)) {
        color_val = (boxDir != NULL) ? (unsigned int)(intptr_t)((int*)boxDir)[4] : 0xFFFFFF;
    } else {
        color_val = (boxDir != NULL) ? (unsigned int)(intptr_t)((int*)boxDir)[0] : 0x808080;
    }
    cpack(color_val);

    /* Calculate half height for positioning */
    half_height = node->height / 2.0f;

    /* Draw directory rectangle (filled) */
    rectf(node->pos_x - half_height,
          node->pos_y - half_height);

    /* Draw children using the ternary child pointers */
    DirectoryNode *children[3] = {
        node->child_center,
        node->child_left,
        node->child_right
    };

    for (i = 0; i < 3; i++) {
        child = children[i];
        if (child == NULL) continue;

        if (!DIR_IS_VISIBLE(child)) {
            continue;
        }

        if (pick_mode != '\0') {
            draw_overview_tree_recursive(child, 1);
            loadname((int)child->name_index);
        }

        /* Select child color */
        if (DIR_IS_SELECTED(child)) {
            color_val = overview_child_sel;
        } else {
            color_val = overview_child_color;
        }
        cpack(color_val);

        /* Draw connecting line from parent to child */
        line_start[0] = node->pos_x + child->offset_x;
        line_start[1] = node->pos_y + child->offset_y;
        line_end[0] = child->pos_x;
        line_end[1] = child->pos_y - child->height / 2.0f;

        bgnline();
        v2f(line_start);
        v2f(line_end);
        endline();

        if (pick_mode == '\0') {
            draw_overview_tree_recursive(child, 0);
        }
    }

    /* Also draw files if present */
    if (node->files_array != NULL && node->num_files > 0) {
        for (i = 0; i < node->num_files; i++) {
            child = node->files_array[i];
            if (child == NULL) continue;
            if (!DIR_IS_VISIBLE(child)) continue;

            if (pick_mode != '\0') {
                loadname((int)child->name_index);
            }

            if (DIR_IS_SELECTED(child)) {
                color_val = overview_child_sel;
            } else {
                color_val = overview_child_color;
            }
            cpack(color_val);

            line_start[0] = node->pos_x + child->offset_x;
            line_start[1] = node->pos_y + child->offset_y;
            line_end[0] = child->pos_x;
            line_end[1] = child->pos_y - child->height / 2.0f;

            bgnline();
            v2f(line_start);
            v2f(line_end);
            endline();
        }
    }
}

/**
 * drawOverviewDirectory - Draw a single directory in overview
 */
void drawOverviewDirectory(DirectoryNode *node, char pick_mode)
{
    draw_overview_tree_recursive(node, pick_mode);
}

/*=============================================================================
 * Overview Overlay (Drawn on Main View)
 *============================================================================*/

/**
 * drawOverviewOverlay - Draw overview overlay on main GL view
 */
void drawOverviewOverlay(void)
{
    if (overviewActive == '\0') {
        return;
    }

    set_overlay_gl_context();
    color(0);
    clear();
    draw_overview_content();
}

/**
 * drawOverviewOverlayCursor - Draw camera position crosshair
 */
void drawOverviewOverlayCursor(void)
{
    FsnContext *ctx = (FsnContext *)curcontext;
    float cursor_x, cursor_y;
    float scale_x, scale_y;

    if (ctx == NULL) return;

    color(0xFFFF);  /* White cursor */

    pushmatrix();

    if (ctx->zoom_mode == 0) {
        cursor_x = ctx->camera_x - ctx->sin_z * ctx->sin_x * ctx->camera_z;
        cursor_y = ctx->camera_y - ctx->cos_z * ctx->sin_x * ctx->camera_z;
    } else {
        DirectoryNode *zoom_target = (DirectoryNode *)(intptr_t)ctx->zoom_mode;
        cursor_x = zoom_target->pos_x;
        cursor_y = zoom_target->pos_y;
    }

    translate(cursor_x, cursor_y);

    scale_x = 1.0f / window_scale_x;
    scale_y = 1.0f / window_scale_y;
    scale(scale_x, scale_y);  /* 2-arg scale uses z=1.0 */

    linewidth(3);

    bgnline();
    v2i(overview_cursor_h1);
    v2i(overview_cursor_h2);
    endline();

    bgnline();
    v2i(overview_cursor_v1);
    v2i(overview_cursor_v2);
    endline();

    linewidth(1);
    popmatrix();
}

/*=============================================================================
 * Overview Picking
 *============================================================================*/

/**
 * overviewPickPointer - Handle mouse picking in overview
 */
void overviewPickPointer(void)
{
    short pick_buffer[500];
    int hit_count;
    int i, name_count;
    int hits_processed = 0;

    picksize(2, 2);
    pushmatrix();
    initnames();
    pick(pick_buffer, 500);

    ortho2((float)minx, (float)maxx, (float)miny, (float)maxy);

    draw_overview_tree_recursive((DirectoryNode *)topdir, 1);

    hit_count = endpick(pick_buffer);
    popmatrix();

    i = 0;
    while (hits_processed < hit_count) {
        name_count = pick_buffer[i];
        if (name_count == 1) {
            int node_id = pick_buffer[i + 1];
            fprintf(stderr, "Overview: picked node %d\n", node_id);
        }
        i += 1 + name_count;
        hits_processed++;
    }
}

/**
 * overviewLocateHighlight - Highlight item at cursor in overview
 */
void overviewLocateHighlight(void)
{
    set_overview_gl_context();
    overviewPickPointer();
}

/**
 * highlightOverviewDir - Highlight a specific directory in overview
 */
void highlightOverviewDir(DirectoryNode *node)
{
    float half_height;
    float line_start[2], line_end[2];
    DirectoryNode *center_child;

    if (overviewActive == '\0' || node == NULL) {
        return;
    }

    set_overlay_gl_context();
    color(0);
    clear();

    color((overlayHighlightColor >> 16) & 0xFFFF);

    half_height = node->height / 2.0f;
    rectf(node->pos_x - half_height,
          node->pos_y - half_height);

    center_child = node->child_center;
    if (center_child != NULL) {
        line_start[0] = center_child->pos_x + node->offset_x;
        line_start[1] = center_child->pos_y + node->offset_y;
        line_end[0] = node->pos_x;
        line_end[1] = node->pos_y - node->height / 2.0f;

        bgnline();
        v2f(line_start);
        v2f(line_end);
        endline();
    }

    pushmatrix();
    ortho2((float)minx, (float)maxx, (float)miny, (float)maxy);
    cmov2(-0.95f, -0.9f);

    {
        char path_buffer[1024];
        build_path_string(path_buffer, (void *)node);
        charstr(path_buffer);
    }

    popmatrix();

    draw_overview_content();
}

/*=============================================================================
 * Overview Window Management
 *============================================================================*/

/**
 * rescaleOverview - Rescale overview to fit current tree bounds
 */
void rescaleOverview(void)
{
    int width, height;
    Arg args[2];

    if (overviewActive == '\0') {
        return;
    }

    width = (int)floorf(((float)maxx - (float)minx) * window_scale_x);
    height = (int)floorf(((float)maxy - (float)miny) * window_scale_y);

    if (overview_widget != NULL) {
        XtSetArg(args[0], XmNwidth, width);
        XtSetArg(args[1], XmNheight, height);
        XtSetValues(overview_widget, args, 2);
    }

    set_overview_gl_context();
    ortho2((float)minx, (float)maxx, (float)miny, (float)maxy);
    drawOverview();

    set_overlay_gl_context();
    ortho2((float)minx, (float)maxx, (float)miny, (float)maxy);
    drawOverviewOverlay();
}

/**
 * createOverview - Create overview window and widgets
 */
void createOverview(void)
{
    fprintf(stderr, "createOverview: Overview window initialization\n");
}

/**
 * showOverview - Show the overview window
 */
void showOverview(void)
{
    overviewActive = '\x01';
    rescaleOverview();
    drawOverview();
}

/**
 * hideOverview - Hide the overview window
 */
void hideOverview(void)
{
    overviewActive = '\0';
}

/**
 * begin_overview_render - Begin overview rendering pass
 */
void begin_overview_render(void)
{
    set_overview_gl_context();
}

/**
 * render_overview_frame - Render a complete overview frame
 */
void render_overview_frame(void)
{
    drawOverview();
}
