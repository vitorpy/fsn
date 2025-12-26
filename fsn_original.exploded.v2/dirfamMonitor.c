/**
 * dirfamMonitor
 *
 * Extracted from fsn.c lines 64793-64801
 * Category: Filesystem
 */

void dirfamMonitor(void)

{
  if ((fsn_resources == '\0') && (DAT_100078b0 == 0)) {
    DAT_100078b0 = XtAppAddInput(app_context,DAT_10016c70,1,FUN_00428044,0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00427f50):
     * Function: dirfamMonitor
     *
     * Looking at this assembly:
     * **What it does:**
     * Checks if `quit_flag` is set - if so, returns early. Otherwise checks if a work procedure is already registered (`workproc_id != 0`). If not registered, calls `XtAppAddWorkProc()` to register `dirfamScanner` as an idle callback and stores the returned ID.
     * **C pseudocode:**
     * ```c
     * void dirfamMonitor(void) {
     * if (quit_flag != 0) return;
     * if (curcontext->workproc_id != 0) return;
     * curcontext->workproc_id = XtAppAddWorkProc(
     * app_context,           // a0: from gp-30208
     * dirfamScanner,         // a1: from curcontext+27760 (offset 0x6c70)
     * some_global_ptr,       // a3: gp-32736 + (-32700) = address of callback data
     * NULL                   // stack arg: 0
     * );
     * }
     * ```
     * **GP offsets resolved:**
     * - gp-30172 → quit_flag (byte)
     * - gp-32664 → curcontext pointer, offset 30896 (0x78b0) = workproc_id
     * - gp-30208 → app_context
     * - gp-32660 → pointer, offset 27760 (0x6c70) = dirfamScanner function ptr
     * - gp-32560 → XtAppAddWorkProc
     */
halt_baddata();
}
