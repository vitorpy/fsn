/**
 * init_resources.c - X Resource loading for FSN
 *
 * Based on initResources() from original FSN.
 * Loads colors and parameters from X resources (Fsn app-defaults file).
 */

#include "fsn_types.h"
#include "fsn_state.h"
#include <X11/Intrinsic.h>
#include <X11/StringDefs.h>
#include <stdio.h>
#include <string.h>

/* Resource structure matching Fsn X resources file */
typedef struct {
    /* Colors - loaded as CpColor (packed RGB) */
    int groundColor;
    int skyColor;
    int farGroundColor;
    int nearGroundColor;
    int topSkyColor;
    int bottomSkyColor;
    int overviewBackgroundColor;
    int pruneColor;
    int dirColor;
    int warpDirColor;
    int specialDirColor;
    int dirMonColor;
    int selLineColor;
    int unselLineColor;
    int warpFlashColor;
    int spotlightColor;
    /* File age colors */
    int fileColor0;
    int fileColor1;
    int fileColor2;
    int fileColor3;
    int fileColor4;
    int fileColor5;
    int fileColor6;
    /* File age thresholds (days) */
    int fileAge0;
    int fileAge1;
    int fileAge2;
    int fileAge3;
    int fileAge4;
    int fileAge5;
    /* Boolean flags */
    Boolean useGouraud;
    Boolean useViewer;
    Boolean shrinkOnZoom;
    Boolean beamOnMove;
    Boolean flashOnWarp;
    /* View parameters */
    float initialX;
    float initialY;
    float initialZ;
    int initialTilt;
    float warpX;
    float warpY;
    float warpZ;
    int warpTilt;
    int viewAngle;
    /* More parameters from Fsn file... */
} FsnResources;

static FsnResources fsn_res;

/* Default color values (grass landscape) - packed as BGR for OpenGL */
/* RGB #RRGGBB -> BGR 0x00BBGGRR */
#define DEFAULT_GROUND_COLOR     0x238823  /* #238823 -> R=0x23 G=0x88 B=0x23 -> same */
#define DEFAULT_SKY_COLOR        0xffe16d  /* #6de1ff -> R=0x6d G=0xe1 B=0xff -> 0xffe16d */
#define DEFAULT_FAR_GROUND       0x598a41  /* #418a59 */
#define DEFAULT_NEAR_GROUND      0x1a4f0f  /* #0f4f1a */
#define DEFAULT_TOP_SKY          0xd58700  /* #0087d5 */
#define DEFAULT_BOTTOM_SKY       0xf0ff91  /* #91fff0 */
#define DEFAULT_DIR_COLOR        0xffffff  /* #ffffff -> same */
#define DEFAULT_SEL_LINE_COLOR   0xffffff  /* #ffffff -> same */
#define DEFAULT_UNSEL_LINE_COLOR 0xd6e0c4  /* #c4e0d6 */

/* CpColor converter - converts "#RRGGBB" to packed int */
static Boolean CpColorConverter(Display *dpy, XrmValue *args, Cardinal *num_args,
                                 XrmValue *from, XrmValue *to, XtPointer *data)
{
    static int result;
    char *str = (char *)from->addr;

    (void)dpy; (void)args; (void)num_args; (void)data;

    if (str == NULL || str[0] != '#' || strlen(str) != 7) {
        return False;
    }

    /* Parse #RRGGBB */
    unsigned int r, g, b;
    if (sscanf(str + 1, "%02x%02x%02x", &r, &g, &b) != 3) {
        return False;
    }

    result = (r) | (g << 8) | (b << 16);  /* Pack as 0x00BBGGRR for OpenGL */

    to->addr = (XtPointer)&result;
    to->size = sizeof(int);
    return True;
}

/* Resource table - maps X resource names to structure offsets */
static XtResource resources[] = {
    { "groundColor", "GroundColor", "CpColor", sizeof(int),
      XtOffsetOf(FsnResources, groundColor), XtRImmediate, (XtPointer)DEFAULT_GROUND_COLOR },
    { "skyColor", "SkyColor", "CpColor", sizeof(int),
      XtOffsetOf(FsnResources, skyColor), XtRImmediate, (XtPointer)DEFAULT_SKY_COLOR },
    { "dirColor", "DirColor", "CpColor", sizeof(int),
      XtOffsetOf(FsnResources, dirColor), XtRImmediate, (XtPointer)DEFAULT_DIR_COLOR },
    { "selLineColor", "SelLineColor", "CpColor", sizeof(int),
      XtOffsetOf(FsnResources, selLineColor), XtRImmediate, (XtPointer)DEFAULT_SEL_LINE_COLOR },
    { "unselLineColor", "UnselLineColor", "CpColor", sizeof(int),
      XtOffsetOf(FsnResources, unselLineColor), XtRImmediate, (XtPointer)DEFAULT_UNSEL_LINE_COLOR },
    { "initialX", "InitialX", XtRFloat, sizeof(float),
      XtOffsetOf(FsnResources, initialX), XtRImmediate, (XtPointer)0 },
    { "initialY", "InitialY", XtRFloat, sizeof(float),
      XtOffsetOf(FsnResources, initialY), XtRImmediate, (XtPointer)0 },
    { "initialZ", "InitialZ", XtRFloat, sizeof(float),
      XtOffsetOf(FsnResources, initialZ), XtRImmediate, (XtPointer)0 },
    { "useGouraud", "UseGouraud", XtRBoolean, sizeof(Boolean),
      XtOffsetOf(FsnResources, useGouraud), XtRImmediate, (XtPointer)True },
};

/**
 * init_toplevel_resources - Load FSN resources from X resources
 *
 * Based on original initResources() at line 67305 in fsn2.c
 * Called from main() right after XtAppInitialize().
 */
void init_toplevel_resources(Widget w)
{

    /* Register CpColor type converter */
    XtAppAddConverter(XtWidgetToApplicationContext(w),
                      XtRString, "CpColor",
                      (XtConverter)CpColorConverter, NULL, 0);

    /* Load resources */
    XtGetApplicationResources(w, &fsn_res, resources,
                              XtNumber(resources), NULL, 0);

    /* Copy loaded values to FSN globals */
    cpack_color = fsn_res.skyColor;
    bg_color_normal = fsn_res.skyColor;
    bg_color_grid = fsn_res.groundColor;
    current_packed_color = fsn_res.dirColor;
    highlight_color = fsn_res.selLineColor;
    highlight_packed_color = fsn_res.unselLineColor;

    /* Initial view position from resources */
    view_init_x = fsn_res.initialX;
    view_init_y = fsn_res.initialY;
    view_init_z = fsn_res.initialZ;

    fprintf(stderr, "initResources: skyColor=0x%06x groundColor=0x%06x\n",
            fsn_res.skyColor, fsn_res.groundColor);
}
