/**
 * FUN_0041e0a8
 *
 * Extracted from fsn.c lines 59446-59455
 * Ghidra address: 0x0041e0a8
 * Category: Other
 */

void FUN_0041e0a8(void)

{
  if ((curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */ != 0) &&
     (-1 < *(int *)(curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */ + 0x74) << 0xd)) {
    FUN_00415598();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041e0a8):
     * Function: FUN_0041e0a8
     *
     * Looking at this assembly:
     * 1. **What it does:** Checks if `curcontext->node` (offset 0x44) exists and if a specific flag bit (bit 18) in `node->flags` (offset 0x74) is clear. If both conditions met, calls a function via GP offset -31300.
     * 2. **C pseudocode:**
     * ```c
     * void FUN_0041e0a8(int a0, int a1, int a2) {
     * node_t *node = curcontext->node;  // offset 0x44
     * if (node != NULL) {
     * uint flags = node->flags;     // offset 0x74
     * // Extract bit 18: (flags << 13) >> 31 = bit 18
     * if (!(flags & 0x00040000)) {  // bit 18 clear
     * some_function();          // GP[-31300]
     * }
     * }
     * }
     * ```
     * The bit extraction `(flags << 13) >> 31` isolates bit 18 (0x00040000). The function only calls the target if `curcontext->node` exists AND bit 18 is NOT set in the node's flags field.
     */
halt_baddata();
}
