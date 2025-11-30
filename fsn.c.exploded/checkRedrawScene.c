/**
 * checkRedrawScene
 *
 * Extracted from fsn.c lines 37604-37612
 * Category: Graphics
 */

void checkRedrawScene(void)

{
  if (redraw_flag != '\0') {
    redraw_gl_scene();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
