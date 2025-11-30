/**
 * beamdown
 *
 * Extracted from fsn.c lines 50878-50892
 * Category: Other
 */

void beamdown(void)

{
  if (render_mode_flag != '\0') {
    redraw_counter = 3;
    do {
      redraw_gl_scene();
      glx_swap_buffers_wrapper();
      redraw_counter = redraw_counter + -1;
    } while (-1 < redraw_counter);
    redraw_counter = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
