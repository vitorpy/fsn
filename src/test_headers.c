/**
 * test_headers.c
 *
 * Simple test to verify fsn headers compile correctly.
 */

#include "fsn_types.h"
#include "fsn_state.h"
#include "color.h"
#include "fam_monitor.h"
#include "init.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
    (void)argc;
    (void)argv;

    /* Test that we can access globals */
    __Argc = 0;
    __Argv = NULL;

    /* Test context globals */
    curcontext = NULL;
    context_count = 0;

    /* Test view globals */
    view_init_x = 0.0f;
    camera_lookat_x = 0.0f;

    /* Test color globals */
    colormap_factor = 1.0f;
    legend_color_red = 0;

    /* Test database globals */
    database_root_node = NULL;
    database_loaded_flag = 0;

    /* Test color module */
    ColorRGB rgb = {1.0f, 0.0f, 0.0f};  /* Red */
    ColorHSV hsv;

    rgb_to_hsv(&rgb, &hsv);
    printf("Red RGB(1,0,0) -> HSV(%.1f, %.1f, %.1f)\n", hsv.h, hsv.s, hsv.v);

    ColorRGB rgb2;
    hsv_to_rgb(&hsv, &rgb2);
    printf("Back to RGB(%.2f, %.2f, %.2f)\n", rgb2.r, rgb2.g, rgb2.b);

    PackedColor packed = rgb_to_packed(&rgb);
    printf("Packed: 0x%08X\n", packed);

    /* Test FAM module */
    printf("\n--- FAM Module Test ---\n");
    if (fsn_fam_init() == 0) {
        printf("FAM initialized successfully\n");
        int reqnum = fsn_fam_monitor_directory("/tmp", NULL);
        if (reqnum > 0) {
            printf("Monitoring /tmp (request %d)\n", reqnum);
            fsn_fam_unmonitor(reqnum);
            printf("Stopped monitoring\n");
        }
        fsn_fam_shutdown();
        printf("FAM shutdown\n");
    } else {
        printf("FAM init failed (expected if no inotify)\n");
    }

    return 0;
}
