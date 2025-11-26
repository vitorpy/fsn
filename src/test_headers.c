/**
 * test_headers.c
 *
 * Simple test to verify fsn headers compile correctly.
 */

#include "fsn_types.h"
#include "fsn_state.h"
#include "fam_monitor.h"
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

    printf("fsn_state.h: OK\n");

    /* Test FAM module */
    if (fsn_fam_init() == 0) {
        printf("fam_monitor: OK\n");
        fsn_fam_shutdown();
    } else {
        printf("fam_monitor: init failed (may need inotify)\n");
    }

    return 0;
}
