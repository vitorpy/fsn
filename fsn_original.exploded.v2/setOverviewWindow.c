/**
 * setOverviewWindow
 *
 * Extracted from fsn.c lines 60226-60232
 * Category: Other
 */

void setOverviewWindow(void)

{
  GLXwinset(display,DAT_10016c00);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041fd64):
     * Function: setOverviewWindow
     *
     * [Claude timeout after 120s]
     */
halt_baddata();
}
