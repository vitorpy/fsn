/**
 * draw_scene
 *
 * Extracted from fsn.c lines 37571-37580
 * Category: Graphics
 */

void draw_scene(void)

{
  timeval tStack_8;
  
  redraw_flag = 0;
  gettimeofday(&tStack_8,(__timezone_ptr_t)0x0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
