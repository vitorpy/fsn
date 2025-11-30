/**
 * beamup
 *
 * Extracted from fsn.c lines 50853-50867
 * Category: Other
 */

void beamup(void)

{
  if (render_mode_flag != '\0') {
    redraw_counter = 1;
    do {
      redraw_gl_scene();
      glx_swap_buffers_wrapper();
      redraw_counter = redraw_counter + 1;
    } while (redraw_counter < 4);
    redraw_counter = 3;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
