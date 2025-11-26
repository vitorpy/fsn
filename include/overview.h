/**
 * overview.h - Header for overview module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_OVERVIEW_H
#define FSN_OVERVIEW_H

#include "fsn_types.h"

void setOverviewWindow(void);
void setOverviewOverlayWindow(void);
void begin_overview_render(void);
void createOverview(void);
void render_overview_frame(void);
void showOverview(void);
void drawOverviewDirectory(int param_1,char param_2);
void drawOverview(void);
void drawOverviewOverlayCursor(void);
void drawOverviewOverlay(void);
void draw_overview_content(void);
void hideOverview(void);
void overviewPickPointer(void);
void rescaleOverview(void);
void highlightOverviewDir(int param_1);
void overviewLocateHighlight(void);

#endif /* FSN_OVERVIEW_H */
