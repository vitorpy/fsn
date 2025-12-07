/**
 * init_resources.c - X Resource loading for FSN
 *
 * Based on initResources() from original FSN.
 * Loads colors and parameters from X resources (Fsn app-defaults file).
 */

#include "fsn_types.h"
#include "fsn_state.h"
#include <X11/Intrinsic.h>
#include <stdlib.h>
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
    /* Layout parameters - from resources/Fsn */
    float skyHeight;       /* → view_offset_z (default 75.0) */
    float skyDistance;     /* → view_offset_y (default 450.0) */
    float groundBack;      /* → base_y_offset (default 50.0) */
    float xDirMargin;      /* → item_spacing_x (default 2.0) */
    float yDirMargin;      /* → layout_base_height (default 8.0) */
    float fileMargin;      /* → icon_spacing_factor (default 0.25) */
    float fileBaseWidth;   /* → file_base_width (default 0.5) */
    float colorTopValueFactor;   /* → color_top_value_factor (default 0.8) */
    float colorSideValueFactor;  /* → color_side_value_factor (default 0.55) */
    float colorBackValueFactor;  /* → color_back_value_factor (default 0.3) */
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
    /* Gradient sky/ground colors for draw_directories() */
    { "farGroundColor", "FarGroundColor", "CpColor", sizeof(int),
      XtOffsetOf(FsnResources, farGroundColor), XtRImmediate, (XtPointer)DEFAULT_FAR_GROUND },
    { "nearGroundColor", "NearGroundColor", "CpColor", sizeof(int),
      XtOffsetOf(FsnResources, nearGroundColor), XtRImmediate, (XtPointer)DEFAULT_NEAR_GROUND },
    { "topSkyColor", "TopSkyColor", "CpColor", sizeof(int),
      XtOffsetOf(FsnResources, topSkyColor), XtRImmediate, (XtPointer)DEFAULT_TOP_SKY },
    { "bottomSkyColor", "BottomSkyColor", "CpColor", sizeof(int),
      XtOffsetOf(FsnResources, bottomSkyColor), XtRImmediate, (XtPointer)DEFAULT_BOTTOM_SKY },
    { "initialX", "InitialX", XtRFloat, sizeof(float),
      XtOffsetOf(FsnResources, initialX), XtRImmediate, (XtPointer)0 },
    { "initialY", "InitialY", XtRFloat, sizeof(float),
      XtOffsetOf(FsnResources, initialY), XtRImmediate, (XtPointer)0 },
    { "initialZ", "InitialZ", XtRFloat, sizeof(float),
      XtOffsetOf(FsnResources, initialZ), XtRImmediate, (XtPointer)0 },
    { "initialTilt", "InitialTilt", XtRInt, sizeof(int),
      XtOffsetOf(FsnResources, initialTilt), XtRImmediate, (XtPointer)-700 },
    { "useGouraud", "UseGouraud", XtRBoolean, sizeof(Boolean),
      XtOffsetOf(FsnResources, useGouraud), XtRImmediate, (XtPointer)True },
    /* Layout parameters from resources/Fsn (ORIGINAL values) */
    { "skyHeight", "SkyHeight", XtRFloat, sizeof(float),
      XtOffsetOf(FsnResources, skyHeight), XtRImmediate, (XtPointer)0 },
    { "skyDistance", "SkyDistance", XtRFloat, sizeof(float),
      XtOffsetOf(FsnResources, skyDistance), XtRImmediate, (XtPointer)0 },
    { "groundBack", "GroundBack", XtRFloat, sizeof(float),
      XtOffsetOf(FsnResources, groundBack), XtRImmediate, (XtPointer)0 },
    { "xDirMargin", "XDirMargin", XtRFloat, sizeof(float),
      XtOffsetOf(FsnResources, xDirMargin), XtRImmediate, (XtPointer)0 },
    { "yDirMargin", "YDirMargin", XtRFloat, sizeof(float),
      XtOffsetOf(FsnResources, yDirMargin), XtRImmediate, (XtPointer)0 },
    { "fileMargin", "FileMargin", XtRFloat, sizeof(float),
      XtOffsetOf(FsnResources, fileMargin), XtRImmediate, (XtPointer)0 },
    { "fileBaseWidth", "FileBaseWidth", XtRFloat, sizeof(float),
      XtOffsetOf(FsnResources, fileBaseWidth), XtRImmediate, (XtPointer)0 },
    { "colorTopValueFactor", "ColorTopValueFactor", XtRFloat, sizeof(float),
      XtOffsetOf(FsnResources, colorTopValueFactor), XtRImmediate, (XtPointer)0 },
    { "colorSideValueFactor", "ColorSideValueFactor", XtRFloat, sizeof(float),
      XtOffsetOf(FsnResources, colorSideValueFactor), XtRImmediate, (XtPointer)0 },
    { "colorBackValueFactor", "ColorBackValueFactor", XtRFloat, sizeof(float),
      XtOffsetOf(FsnResources, colorBackValueFactor), XtRImmediate, (XtPointer)0 },
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
    highlight_packed_color = fsn_res.unselLineColor;
    use_gouraud_shading = fsn_res.useGouraud ? 1 : 0;
    grid_display_flag = use_gouraud_shading ? 1 : 0;

    /* Gradient sky/ground colors for draw_directories() - ORIGINAL FSN variables
     * These are used by the restored draw_directories() from fsn.c:48177-48298
     */
    graphics_state_mode = fsn_res.topSkyColor;       /* Sky top (dark blue) */
    current_packed_color = fsn_res.bottomSkyColor;   /* Sky bottom (light cyan) */
    graphics_render_flags = fsn_res.farGroundColor;  /* Ground far (dark green) */
    highlight_color = fsn_res.nearGroundColor;       /* Ground near (light green) */

    fprintf(stderr, "initResources: sky gradient top=0x%06x bottom=0x%06x\n",
            graphics_state_mode, current_packed_color);
    fprintf(stderr, "initResources: ground gradient far=0x%06x near=0x%06x\n",
            graphics_render_flags, highlight_color);
    fprintf(stderr, "initResources: resource initial=(%.1f, %.1f, %.1f, tilt=%d)\n",
            fsn_res.initialX, fsn_res.initialY, fsn_res.initialZ, fsn_res.initialTilt);

    /*
     * Initial view position - prefer resource overrides, fallback to
     * original FSN defaults: initialX=0, initialY=-37, initialZ=34, initialTilt=-700.
     */
    view_init_x = (fsn_res.initialX != 0.0f) ? fsn_res.initialX : 0.0f;
    view_init_y = (fsn_res.initialY != 0.0f) ? fsn_res.initialY : -37.0f;
    view_init_z = (fsn_res.initialZ != 0.0f) ? fsn_res.initialZ : 34.0f;
    view_init_tilt = (fsn_res.initialTilt != 0) ? fsn_res.initialTilt : -700;

    /* Optional env overrides to quickly tune camera without rebuilding */
    const char *y_off_env = getenv("FSN_INIT_Y_OFFSET");
    const char *z_off_env = getenv("FSN_INIT_Z_OFFSET");
    if (y_off_env) {
        float dy = strtof(y_off_env, NULL);
        view_init_y += dy;
        fprintf(stderr, "initResources: applied FSN_INIT_Y_OFFSET=%.2f -> y=%.2f\n", dy, view_init_y);
    }
    if (z_off_env) {
        float dz = strtof(z_off_env, NULL);
        view_init_z += dz;
        fprintf(stderr, "initResources: applied FSN_INIT_Z_OFFSET=%.2f -> z=%.2f\n", dz, view_init_z);
    }

    /* Layout parameters from resources/Fsn (ORIGINAL values)
     * These control sky/ground positioning and directory layout spacing
     */
    view_offset_z = (fsn_res.skyHeight != 0.0f) ? fsn_res.skyHeight : 75.0f;
    view_offset_y = (fsn_res.skyDistance != 0.0f) ? fsn_res.skyDistance : 450.0f;
    base_y_offset = (fsn_res.groundBack != 0.0f) ? fsn_res.groundBack : 50.0f;
    item_spacing_x = (fsn_res.xDirMargin != 0.0f) ? fsn_res.xDirMargin : 2.0f;
    layout_base_height = (fsn_res.yDirMargin != 0.0f) ? fsn_res.yDirMargin : 8.0f;
    icon_spacing_factor = (fsn_res.fileMargin != 0.0f) ? fsn_res.fileMargin : 0.25f;
    file_base_width = (fsn_res.fileBaseWidth != 0.0f) ? fsn_res.fileBaseWidth : 0.5f;
    color_top_value_factor = (fsn_res.colorTopValueFactor != 0.0f) ? fsn_res.colorTopValueFactor : 0.8f;
    color_side_value_factor = (fsn_res.colorSideValueFactor != 0.0f) ? fsn_res.colorSideValueFactor : 0.55f;
    color_back_value_factor = (fsn_res.colorBackValueFactor != 0.0f) ? fsn_res.colorBackValueFactor : 0.3f;

    fprintf(stderr, "initResources: skyColor=0x%06x groundColor=0x%06x\n",
            fsn_res.skyColor, fsn_res.groundColor);
    fprintf(stderr, "initResources: view_init=(%.1f, %.1f, %.1f)\n",
            view_init_x, view_init_y, view_init_z);
    fprintf(stderr, "initResources: layout: skyH=%.1f skyD=%.1f gndB=%.1f xDir=%.1f yDir=%.1f fileM=%.2f baseW=%.2f\n",
            view_offset_z, view_offset_y, base_y_offset,
            item_spacing_x, layout_base_height, icon_spacing_factor, file_base_width);
    fprintf(stderr, "initResources: applied initial=(%.1f, %.1f, %.1f, tilt=%d)\n",
            view_init_x, view_init_y, view_init_z, view_init_tilt);
    fprintf(stderr, "initResources: face brightness factors top=%.2f side=%.2f back=%.2f\n",
            color_top_value_factor, color_side_value_factor, color_back_value_factor);
}
