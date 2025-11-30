/**
 * draw_alt
 *
 * Extracted from fsn.c lines 51816-51826
 * Category: Graphics
 */

void draw_alt(void)

{
  if (altcontext[0xc51] != '\0') {
    gl_swap_buffers(1);
    redraw_gl_scene();
    gl_swap_buffers(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
