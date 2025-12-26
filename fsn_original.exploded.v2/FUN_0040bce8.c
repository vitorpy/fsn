/**
 * FUN_0040bce8
 *
 * Extracted from fsn.c lines 50105-50117
 * Ghidra address: 0x0040bce8
 * Category: Filesystem
 */

void FUN_0040bce8(undefined4 param_1)

{
  gl_push_state();
  set_gl_context(param_1,1);
  FUN_0040bc28();
  color(0);
  clear();
  gflush();
  gl_pop_state();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040bce8):
     * Function: FUN_0040bce8
     *
     * [Claude timeout after 120s]
     */
halt_baddata();
}
