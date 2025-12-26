/**
 * dirfamUnmonitor
 *
 * Extracted from fsn.c lines 64829-64838
 * Category: Filesystem
 */

void dirfamUnmonitor(void)

{
  if ((fsn_resources == '\0') && (DAT_100078b0 != 0)) {
    XtRemoveInput();
    DAT_100078b0 = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00427fd4):
     * Function: dirfamUnmonitor
     *
     * Looking at the GP offsets and control flow:
     * **What it does:**
     * Checks a debug/monitor flag. If not set, retrieves a FAM (File Alteration Monitor) handle from a global context, calls FAMClose() on it if non-NULL, then clears the handle.
     * **C pseudocode:**
     * ```c
     * void dirfamUnmonitor(void) {
     * // GP-0x75dc = debug flag, GP-0x7f98 = app context, GP-0x7f2c = FAMClose
     * if (fam_debug_flag != 0) {
     * return;
     * }
     * FAMConnection *fam_conn = app_context->fam_connection;  // offset 0x78b0
     * if (fam_conn != NULL) {
     * FAMClose(fam_conn);
     * app_context->fam_connection = NULL;
     * }
     * }
     * ```
     * GP offsets: -30172 (0x8a24) = monitor flag, -32664 (0x8068) = app context ptr, -32556 (0x80d4) = FAMClose function
     */
halt_baddata();
}
