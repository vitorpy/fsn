/**
 * fileStoppedExecuting
 *
 * Extracted from fsn.c lines 55897-55910
 * Category: Filesystem
 */

void fileStoppedExecuting(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00413580();
  if ((iVar1 != 0) && (iVar1->_field_20 /* was: *(int *)(iVar1 + 0x20) */ != 0)) {
    FUN_00433e24(iVar1->_field_20 /* was: *(undefined4 *)(iVar1 + 0x20) */,0,0,0,0,0);
    *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) & 0xf7;
  }
  FUN_004184c8(param_1);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004185cc):
     * Function: fileStoppedExecuting
     *
     * Looking at the assembly:
     * 1. **What it does:** If `v0` (likely a file node) is non-NULL and has a non-NULL widget at offset 32, calls XtVaSetValues on that widget with 5 zero args, then clears bit 3 of byte at offset 41 (flags). Finally calls a function via GOT at the original `a0` parameter.
     * 2. **C pseudocode:**
     * ```c
     * void fileStoppedExecuting(void *param) {
     * FileNode *node = /* v0 from prior code */;
     * if (node != NULL && node->widget != NULL) {
     * XtVaSetValues(node->widget, NULL, NULL, NULL, NULL, NULL);
     * node->flags &= ~0x08;  // clear "executing" bit at offset 41
     * }
     * some_callback(param);  // GOT[-32740] + (-31544) = likely a cleanup/notify function
     * }
     * ```
     * The `& 0xfff7` clears bit 3 (0x08), suggesting this flag indicates "file is executing" state. The XtVaSetValues with all zeros likely resets widget appearance (removing highlight/animation for running process).
     */
halt_baddata();
}
