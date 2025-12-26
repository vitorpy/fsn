/**
 * FUN_00410b7c
 *
 * Extracted from fsn.c lines 51926-51951
 * Ghidra address: 0x00410b7c
 * Category: Filesystem
 */

void FUN_00410b7c(undefined4 param_1,int param_2)

{
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [2];
  undefined1 auStack_e [2];
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  set_gl_context(param_1,0);
  set_main_gl_window();
  save_matrix_state();
  if ((uint)(param_2->_field_1c /* was: *(int *)(param_2 + 0x1c) */ - DAT_10016628) < 300) {
    FUN_0041f118((param_2->child_right /* was: *(uint *)(param_2 + 0x30) */ & 8) != 0);
  }
  else {
    FUN_00426d1c(auStack_4,auStack_8,auStack_c,auStack_e,auStack_10,auStack_14,&uStack_15,&uStack_16
                );
    redraw_gl_scene();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00410b7c):
     * Function: FUN_00410b7c
     *
     * Looking at the assembly:
     * **GP offset resolution:**
     * - GP offset -31004 (0x86e4) = XmTextGetSelectionPosition
     * - GP offset -31436 (0x8534) = XmTextClearSelection
     * **What it does:**
     * Calls XmTextGetSelectionPosition with 6 output parameters (stored at sp+50,51,52,56,60,58), then calls XmTextClearSelection. After the branch target, loads a value from t5+28 and stores it to a global at GP-32660 offset 26152.
     * **C pseudocode:**
     * ```c
     * XmTextPosition left, right;
     * Boolean has_selection;
     * char tmp1, tmp2;
     * short tmp3;
     * XmTextGetSelectionPosition(widget, &left, &right, &tmp3, &tmp1, &tmp2);
     * XmTextClearSelection(widget, CurrentTime);
     * /* After branch target (epilogue): */
     * DAT_100066628 = param->field_0x1c;  /* t5+28 stored to global */
     * ```
     * Note: The 6-parameter XmTextGetSelectionPosition variant is unusual - standard Motif uses 3 params. This may be an SGI extension or Ghidra misidentified the function. More likely this is actually two separate calls where Ghidra merged the setup.
     */
halt_baddata();
}
