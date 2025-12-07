/**
 * status_stub.c - Minimal status/message helpers
 */

#include "fsn_types.h"
#include "rendering.h"
#include "file_ops.h"
#include <stdio.h>
#include <stdint.h>

void show_error_message(undefined4 param_1)
{
    fprintf(stderr, "FSN error: %s\n", (char *)(uintptr_t)param_1);
}

void display_scan_status(undefined4 param_1, char *param_2, undefined4 param_3)
{
    (void)param_1;
    (void)param_3;
    fprintf(stdout, "FSN status: %s\n", param_2 ? param_2 : "(null)");
}

void update_status_display(undefined4 param_1)
{
    fprintf(stdout, "FSN status update: %s\n", (char *)(uintptr_t)param_1);
}

/* Stubbed rendering helpers referenced by picking/overview */
void setup_item_render(int param_1, char param_2)
{
    (void)param_1;
    (void)param_2;
}

void draw_file_item(int param_1, char param_2, uint param_3)
{
    (void)param_1;
    (void)param_2;
    (void)param_3;
}
