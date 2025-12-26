/**
 * fileExecuting
 *
 * Extracted from fsn.c lines 55878-55891
 * Category: Filesystem
 */

void fileExecuting(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00413580();
  if ((iVar1 != 0) && (iVar1->_field_20 /* was: *(int *)(iVar1 + 0x20) */ != 0)) {
    FUN_00433e24(iVar1->_field_20 /* was: *(undefined4 *)(iVar1 + 0x20) */,1,0,0,0,0);
    *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) & 0xf7 | 8;
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 2;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00418534):
     * Function: fileExecuting
     *
     * Looking at this assembly:
     * 1. **What it does:** Checks if a file node has a command string (offset 0x20). If so, calls a function via GP-0x8834 (likely `system()` or exec helper) with args (cmd, 1, 0, 0, 0, 0). Then sets bit 3 in node's flags byte at offset 0x29, and sets bit 1 in the directory's flags byte at offset 0x75.
     * 2. **C pseudocode:**
     * ```c
     * void fileExecuting(DirNode *dir, FileNode *file) {
     * if (file == NULL) return;
     * char *cmd = file->command;  // offset 0x20
     * if (cmd != NULL) {
     * // GP-0x8834 = likely sproc() or system() variant
     * execute_command(cmd, 1, 0, 0, 0, 0);
     * // Set "executing" flag on file (bit 3 at offset 0x29)
     * file->flags_29 = (file->flags_29 & ~0x8) | 0x8;
     * // Set "has executing child" flag on dir (bit 1 at offset 0x75)
     * dir->flags_75 |= 0x2;
     * }
     * }
     * ```
     * The `& ~0x8 | 0x8` pattern (andi 0xfff7 then ori 0x8) explicitly clears then sets bit 3 - functionally equivalent to just `|= 0x8` but matches what decompiler would emit.
     */
halt_baddata();
}
