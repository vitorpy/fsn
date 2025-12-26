/**
 * highlightFile
 *
 * Extracted from fsn.c lines 64383-64394
 * Category: Filesystem
 */

void highlightFile(void)

{
  if (curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */ == 0) {
    FUN_0042757c();
  }
  else {
    FUN_0041ac8c();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004277f0):
     * Function: highlightFile
     *
     * [Claude timeout after 120s]
     */
halt_baddata();
}
