/**
 * check_visibility
 *
 * Extracted from fsn.c lines 50431-50440
 * Category: Graphics
 */

void check_visibility(void)

{
  pushmatrix();
  FUN_0040bfa0();
  FUN_00425c80();
  popmatrix();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040ca4c):
     * Function: check_visibility
     *
     * [Claude timeout after 120s]
     */
halt_baddata();
}
