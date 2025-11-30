/**
 * checkRedrawScene
 *
 * Extracted from fsn.c lines 50479-50487
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
