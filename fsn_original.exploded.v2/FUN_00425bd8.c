/**
 * FUN_00425bd8
 *
 * Extracted from fsn.c lines 63224-63245
 * Ghidra address: 0x00425bd8
 * Category: Other
 */

void FUN_00425bd8(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_gp;
  
  param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ =
       (byte)((param_1->render_flags /* was: *(uint *)(param_1 + 0x74) */ >> 0x1e | **(uint **)(unaff_gp + -0x7670) /* -> curcontextflag */) << 6) |
       param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ & 0x3f;
  iVar1 = 0;
  if (0 < param_1->child_count /* was: *(int *)(param_1 + 0x14) */) {
    iVar2 = 0;
    do {
      (**(code **)(unaff_gp + -0x7930) /* -> FUN_00425bd8 */)(*(undefined4 *)(param_1->child_array /* was: *(int *)(param_1 + 0x18) */ + iVar2)) /* =FUN_00425bd8 */;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < param_1->child_count /* was: *(int *)(param_1 + 0x14) */);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00425bd8):
     * Function: FUN_00425bd8
     *
     * ## Analysis
     * **What it does:**
     * 1. Modifies byte at offset 116 of struct: clears bits 6-7 (mask 0xFF3F), then ORs in a 2-bit value (from t9) shifted left 6 positions
     * 2. Loops through children array (offset 18h) calling a function recursively on each child, count at offset 14h
     * **C pseudocode:**
     * ```c
     * void markAllVisible(DirNode *node, int flags) {
     * // flags passed in via t9 after earlier processing (2-bit value)
     * node->flags_74 = (node->flags_74 & 0xFF3F) | ((flags & 0x3) << 6);
     * for (int i = 0; i < node->child_count; i++) {  // child_count at offset 0x14
     * DirNode *child = node->children[i];        // children array at offset 0x18
     * markAllVisible(child);                      // recursive call via GP-31024
     * }
     * }
     * ```
     * The GP-31024 (`-0x7930`) call is the recursive self-call to `markAllVisible`. The bit manipulation sets a 2-bit visibility/mark state in the node's flags byte at offset 116 (0x74).
     */
halt_baddata();
}
