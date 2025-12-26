/**
 * FUN_0041ddf8
 *
 * Extracted from fsn.c lines 59366-59382
 * Ghidra address: 0x0041ddf8
 * Category: Other
 */

void FUN_0041ddf8(int param_1,char param_2)

{
  if (param_2 == '\0') {
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xef;
    if (*(int *)(param_1 + 100) != 0) {
      XtRemoveTimeOut();
    }
    check_unmonitor_dp(param_1);
  }
  else {
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 0x10;
    FUN_00427e30();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041ddf8):
     * Function: FUN_0041ddf8
     *
     * Looking at the assembly:
     * 1. **What it does:**
     * Clears bit 4 (0x10) of the flags byte at offset 0x75. If the pointer at offset 0x64 is non-NULL, calls a free function on it. Then calls another cleanup function on the node.
     * 2. **C pseudocode:**
     * ```c
     * // At 0x41de4c - alternate path for different node type
     * node->flags_75 &= ~0x10;           // Clear bit 4 (andi with 0xffef)
     * if (node->ptr_64 != NULL) {
     * free(node->ptr_64);            // GP-0x7db4 = free
     * }
     * cleanup_node(node);                // GP-0x79cc = some cleanup function
     * return;
     * ```
     * **GP offset resolution needed:**
     * - GP-0x8714 (30956): Called at 0x41de38 - likely a free or cleanup
     * - GP-0x824c (32180): Called at 0x41de64 - free()
     * - GP-0x8634 (31180): Called at 0x41de80 - node cleanup/deallocation function
     * The pattern `andi reg, 0xffef` is clearing bit 4 (since 0xffef = ~0x0010). This looks like clearing a "selected" or "marked" flag before freeing the node's resources.
     */
halt_baddata();
}
