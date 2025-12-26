/**
 * restorePosition
 *
 * Extracted from fsn.c lines 68635-68679
 * Category: Other
 */

void restorePosition(undefined4 param_1)

{
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  short sStack_4;
  short sStack_2;
  
  FUN_0042dfb4(param_1,&sStack_2,&sStack_4,&uStack_8,&uStack_c,&uStack_10,&uStack_14,&iStack_18,
               &iStack_1c,(int)curcontext + 0xc50);
  if (sStack_2 != curcontext->rotation_z /* was: *(short *)(curcontext + 0xc) */) {
    curcontext->rotation_z /* was: *(short *)(curcontext + 0xc) */ = sStack_2;
    FUN_0040bfec();
  }
  if (sStack_4 != curcontext->rotation_x /* was: *(short *)(curcontext + 0xe) */) {
    curcontext->rotation_x /* was: *(short *)(curcontext + 0xe) */ = sStack_4;
    FUN_0040c0cc();
  }
  *(undefined4 *)curcontext = uStack_8;
  *(undefined4 *)(curcontext + 4) = uStack_c;
  *(undefined4 *)(curcontext + 8) = uStack_10;
  curcontext->zoom_mode /* was: *(undefined4 *)(curcontext + 0x3c) */ = uStack_14;
  if (iStack_18 != curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */) {
    if (iStack_18 == 0) {
      FUN_0041d54c(0);
    }
    else {
      FUN_0041d69c();
    }
  }
  if (iStack_1c != curcontext->current_file /* was: *(int *)(curcontext + 0x48) */) {
    if (iStack_1c == 0) {
      FUN_0041d920(0);
    }
    else {
      FUN_0041da44();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042e3b0):
     * Function: restorePosition
     *
     * Looking at this assembly:
     * 1. **What it does:** Compares a local variable (sp+60) against curcontext[18] (offset 72). If not equal, calls either selectDir(t4) if t4 is non-null, or clearSelection() if t4 is null. Then returns.
     * 2. **C pseudocode:**
     * ```c
     * // At end of restorePosition, after halt_baddata:
     * void *saved_dir = local_60;  // sp+60
     * void *current_selected = curcontext[18];  // offset 0x48 = 72
     * if (saved_dir != current_selected) {
     * if (saved_dir != NULL) {
     * selectDir(saved_dir);      // gp-31164 = 0x8644
     * } else {
     * clearSelection();          // gp-31168 = 0x8640
     * }
     * }
     * return;
     * ```
     * GP offsets: -30340 (0x897c) = curcontext, -31164 (0x8644) = selectDir, -31168 (0x8640) = clearSelection
     */
halt_baddata();
}
