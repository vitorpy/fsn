/**
 * overview.h - Overview/Minimap System
 *
 * The overview provides a birds-eye 2D minimap of the entire directory tree
 * with a cursor showing the current camera position.
 *
 * Extracted from fsn_original.exploded.v2/ during Phase 21.
 */

#ifndef FSN_OVERVIEW_H
#define FSN_OVERVIEW_H

#include "fsn_types.h"

/* Forward declaration */
struct DirectoryNode;

/* GLX context management */
void setOverviewWindow(void);
void setOverviewOverlayWindow(void);
void set_overview_gl_context(void);
void set_overlay_gl_context(void);

/* Overview window management */
void createOverview(void);
void showOverview(void);
void hideOverview(void);
void rescaleOverview(void);

/* Main rendering entry points */
void drawOverview(void);
void drawOverviewOverlay(void);
void drawOverviewOverlayCursor(void);
void begin_overview_render(void);
void render_overview_frame(void);

/* Overview content helper (used by highlight.c) */
void draw_overview_content(void);

/* Directory tree rendering in overview */
void drawOverviewDirectory(struct DirectoryNode *node, char pick_mode);
void draw_overview_tree_recursive(struct DirectoryNode *node, char pick_mode);

/* Picking and highlighting */
void overviewPickPointer(void);
void overviewLocateHighlight(void);
void highlightOverviewDir(struct DirectoryNode *node);

#endif /* FSN_OVERVIEW_H */
