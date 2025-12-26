/**
 * FUN_0041dff4
 *
 * Extracted from fsn.c lines 59429-59440
 * Ghidra address: 0x0041dff4
 * Category: Other
 */

void FUN_0041dff4(undefined4 param_1,undefined1 param_2)

{
  if (curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */ != 0) {
    FUN_0041df54(curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */,param_2);
    FUN_0041c3e4();
    redraw_gl_scene();
    FUN_0042a8e4();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041dff4):
     * Function: FUN_0041dff4
     *
     * [Claude timeout after 120s]
     */
halt_baddata();
}
