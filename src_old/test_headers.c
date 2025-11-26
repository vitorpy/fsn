/**
 * test_headers.c
 *
 * Simple test to verify FSN headers compile correctly.
 * This file will be removed after Phase 2.
 */

#include "fsn.h"

int main(int argc, char **argv) {
    /* Test basic types */
    undefined4 test_u4 = 0x12345678;
    byte test_byte = 0xFF;

    /* Test that Motif types are available */
    Display *display = NULL;
    Widget widget = NULL;

    /* Test that OpenGL types are available */
    GLint viewport[4];
    GLfloat color[4] = {1.0f, 0.0f, 0.0f, 1.0f};

    printf("FSN Headers Test v%s\n", FSN_VERSION_STRING);
    printf("All headers included successfully!\n");
    printf("Test values: u4=0x%x, byte=0x%x\n", test_u4, test_byte);

    (void)display;  /* Suppress unused warnings */
    (void)widget;
    (void)viewport;
    (void)color;
    (void)argc;
    (void)argv;

    return 0;
}
