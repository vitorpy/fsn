/**
 * draw_alt
 *
 * Extracted from fsn.c lines 66686-66696
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
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042a8d8):
     * Function: draw_alt
     *
     * Looking at the assembly:
     * **What it does:**
     * Checks a byte flag at offset 0xC51 (3153) in the current context structure. If non-zero, calls linesmooth(1), draws alt text/graphics via draw_alt_inner(), then calls linesmooth(1) again.
     * **GP offset resolution:**
     * - GP offset -30868 (0x876c) = `linesmooth` (called twice with arg=1)
     * - GP offset -31436 (0x8534) = inner draw function (likely `draw_alt_text` or similar)
     * **C pseudocode:**
     * ```c
     * void draw_alt(void) {
     * context_t *ctx = curcontext;
     * if (ctx->show_alt_flag) {  // offset 0xC51
     * linesmooth(1);         // enable line smoothing
     * draw_alt_inner();      // draw the alt text/graphics
     * linesmooth(1);         // re-enable (or confirm) line smoothing
     * }
     * }
     * ```
     * Note: The flag at offset 0xC51 (3153 decimal) is likely a boolean for whether to display alternate/info text. The double `linesmooth(1)` calls suggest the inner function may disable smoothing, so it's restored after.
     */
halt_baddata();
}
