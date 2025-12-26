/**
 * locateClear
 *
 * Extracted from fsn.c lines 65745-65759
 * Category: Other
 */

void locateClear(void)

{
  if (DAT_10007990 != 0) {
    FUN_00429464();
    FUN_0040bc28();
    color(0);
    clear();
    DAT_10007990 = 0;
    DAT_10007994 = 0;
    FUN_00420b70();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004294c0):
     * Function: locateClear
     *
     * Now I can see the pattern. Looking at the assembly after `halt_baddata()`:
     * **Summary:**
     * **1. What it does:**
     * After clearing colormap state, calls: update_list_state(), glx_reset_context(), color(0), clear(), draw_overview_content(). Then zeros two global flags (offsets 0x7990, 0x7994 from a base pointer) and calls hideOverview().
     * **2. C pseudocode (reconstructed):**
     * ```c
     * void locateClear(void)
     * {
     * if (colormap_dirty_flag != 0) {
     * update_list_state();
     * glx_reset_context_wrapper();
     * color(0);
     * clear();
     * colormap_dirty_flag = 0;
     * active_colormap_id = 0;
     * draw_overview_content();
     * }
     * /* Assembly continuation after halt_baddata: */
     * update_list_state();        /* GP-8520 */
     * glx_reset_context(0);       /* GP-8304, a0=0 */
     * some_function();            /* GP-8308 */
     * /* Zero locate highlight flags */
     * locate_highlight_active = 0;      /* base+0x7990 */
     * locate_highlight_pending = 0;     /* base+0x7994 */
     * hideOverview();             /* GP-867c */
     * }
     * ```
     * The two zeroed globals (offsets 0x7990/0x7994) likely control the "locate" highlight feature - clearing them disables the highlight display. The GP-867c call is probably `hideOverview()` based on the context (locate/highlight functions).
     */
halt_baddata();
}
