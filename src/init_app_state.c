/**
 * init_app_state - Initialize application state
 *
 * Extracted core behavior: set DISPLAY environment variable to current display.
 * Original: fsn.c lines 36896-36910.
 */

#include "fsn_state.h"
#include <X11/Xlib.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void init_app_state(void)
{
    const char *display_str = NULL;
    char *env_buf;
    size_t len;

    if (display == NULL) {
        return;
    }

    /* On Xlib, Display struct holds string at display->display_name (offset 0x80 on IRIX);
     * use DisplayString() for portability.
     */
    display_str = DisplayString((Display *)display);
    if (display_str == NULL) {
        return;
    }

    len = strlen(display_str);
    env_buf = (char *)malloc(len + 9); /* "DISPLAY=" + NUL */
    if (env_buf == NULL) {
        return;
    }

    sprintf(env_buf, "DISPLAY=%s", display_str);
    putenv(env_buf);
}
