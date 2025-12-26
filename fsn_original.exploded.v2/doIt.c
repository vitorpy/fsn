/**
 * doIt
 *
 * Extracted from fsn.c lines 59791-59812
 * Category: Other
 */

void doIt(char param_1)

{
  undefined4 uVar1;
  
  if (curcontext->current_file /* was: *(int *)(curcontext + 0x48) */ == 0) {
    if ((curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */ != 0) &&
       (curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */ != curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */)) {
      do_warp();
    }
  }
  else {
    uVar1 = 4;
    if (param_1 != '\0') {
      uVar1 = 5;
    }
    FUN_0041e260(curcontext->current_dir /* was: *(undefined4 *)(curcontext + 0x44) */,curcontext->current_file /* was: *(int *)(curcontext + 0x48) */,uVar1,
                 param_1 == '\0',&DAT_1000b4a0,"opening");
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041f10c):
     * Function: doIt
     *
     * Looking at this assembly:
     * **1. What it does:**
     * First path (from 0x41f160): Calls a function via GP-0x801c with address adjustment, passing inverted boolean from stack byte 43. Second path (from 0x41f190): If v0->field_0x44 is non-null AND differs from v0->field_0x3c, calls function via GP-0x855c with v0->field_0x44 as arg.
     * **2. C pseudocode:**
     * ```c
     * /* Path 1: after halt_baddata at 0x41f160 */
     * {
     * char flag = *(char*)(sp + 43);  /* local boolean */
     * void (*func)() = (void*)(*GP_MINUS_801C - 7584);  /* likely XtSetSensitive or similar */
     * void *widget = (void*)(*GP_MINUS_805C - 19296);   /* widget address */
     * func(widget, !flag);  /* a3 = (flag < 1), i.e. !flag */
     * goto epilogue;
     * }
     * /* Path 2: from 0x41f190 - likely selection change handling */
     * {
     * void *new_sel = obj->field_0x44;  /* offset 68: new selection */
     * if (new_sel != NULL) {
     * void *old_sel = obj->field_0x3c;  /* offset 60: old selection */
     * if (old_sel != new_sel) {
     * (*GP_MINUS_855C)(new_sel);  /* likely selectItem() or similar */
     * }
     * }
     * }
     * epilogue:
     * return;
     * ```
     * GP offsets to resolve: -0x801c (XtSetSensitive?), -0x805c (widget ptr), -0x855c (selection handler). The `sltiu t7,a3,1` idiom converts boolean to inverted boolean (0→1, non-zero→0).
     */
halt_baddata();
}
