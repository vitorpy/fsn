/**
 * gp_globals.h - Extern declarations for GP-accessed global variables
 *
 * AUTO-GENERATED from GP_MAPPING.md by gp_cleanup.py
 * These are the global variables accessed via the MIPS global pointer (GP).
 */

#ifndef GP_GLOBALS_H
#define GP_GLOBALS_H

#include <X11/Intrinsic.h>

/* === Pointer Types (Widgets, Contexts, Strings) === */

extern void * altcontext;
extern void * altcontextwindows;
extern void * app_context;
extern void * blankXmString;
extern void * context;
extern void * contextwindows;
extern char * controlHelp;
extern void * curcontext;
extern void * curcontextflag;
extern void * curcontextid;
extern void * curcontextwindows;
extern unsigned long dcolorBoxes;
extern char * directoryHelp;
extern char * displayHelp;
extern void * emptyXmString;
extern char * fileHelp;
extern char * glHelp;
extern char * infoHelp;
extern unsigned long labelColors;
extern char * legendHelp;
extern void * legendLabel;
extern unsigned long lhLabelColor;
extern char * markHelp;
extern char * messageHelp;
extern char * modeHelp;
extern unsigned long monitorLabelColor;
extern void * monitorLabelWidget;
extern char * moveDestHelp;
extern unsigned long overlayHighlightColor;
extern char * overviewHelp;
extern char * prefPanelHelp;
extern char * searchHelp;
extern char * sessionHelp;
extern char * showHelp;
extern char * topHelp;
extern char * versionHelp;
extern char * viewerHelp;

/* === Integer Types (Flags, Counts, Indices) === */

extern int controlsShowing;
extern int dir_index;
extern int legendShowing;
extern int localFlag;

/* === Float Types (Coordinates, Scales) === */

extern float boxBlue;
extern float boxCyan;
extern float boxDir;
extern float boxGreen;
extern float boxMagenta;
extern float boxOrange;
extern float boxRed;
extern float boxYellow;
extern float display;
extern float displayDirectoryHeight;
extern float displayHeight;
extern float fstyp;
extern float maxShrinkage;
extern float maxx;
extern float maxy;
extern float minx;
extern float miny;

/* === Other Types (Unknown/Internal) === */

extern void * DAT_10010000;  /* GP data */
extern void * DAT_10010000;  /* GP data */
extern void * TheFileIconInterpreter;  /* GP data */
extern void * __Argc;  /* GP data */
extern void * __Argv;  /* GP data */
extern void * __vtbl__13ByteCodedIcon;  /* GP data */
extern void * _imsgs;  /* GP data */
extern void * chrtbl;  /* GP data */
extern void * fallback_resources;  /* GP data */
extern void * firstSearchDir;  /* GP data */
extern void * fsn_resources;  /* GP data */
extern void * glwidget_translations;  /* GP data */
extern void * initialControls;  /* GP data */
extern void * initialLegend;  /* GP data */
extern void * initialOverview;  /* GP data */
extern void * lastSearchDir;  /* GP data */
extern void * magic1;  /* GP data */
extern void * magic2;  /* GP data */
extern void * magic3;  /* GP data */
extern void * numcmap;  /* GP data */
extern void * numtop;  /* GP data */
extern void * overviewActive;  /* GP data */
extern void * overviewGlw_translations;  /* GP data */
extern void * small;  /* GP data */
extern void * small;  /* GP data */
extern void * topdir;  /* GP data */
extern void * toplevel;  /* GP data */
extern void * versionInfo;  /* GP data */
extern void * vinfop;  /* GP data */
extern void * visitedSearchDp;  /* GP data */
extern void * visitedSearchFp;  /* GP data */

#endif /* GP_GLOBALS_H */
