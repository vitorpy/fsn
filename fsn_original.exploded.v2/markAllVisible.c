/**
 * markAllVisible
 *
 * Extracted from fsn.c lines 63198-63218
 * Category: Other
 */

void markAllVisible(int param_1)

{
  int iVar1;
  int iVar2;
  
  param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ =
       (byte)((param_1->render_flags /* was: *(uint *)(param_1 + 0x74) */ >> 0x1e | curcontextflag) << 6) |
       param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ & 0x3f;
  iVar1 = 0;
  if (0 < param_1->child_count /* was: *(int *)(param_1 + 0x14) */) {
    iVar2 = 0;
    do {
      FUN_00425bd8(*(undefined4 *)(param_1->child_array /* was: *(int *)(param_1 + 0x18) */ + iVar2));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < param_1->child_count /* was: *(int *)(param_1 + 0x14) */);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00425bcc):
     * Function: markAllVisible
     *
     * ## Analysis
     * **What it does:**
     * Sets visibility bits in node->flags (offset 0x74): clears bits 6-7 (mask 0xff3f), then sets new bits from computed value. Then recursively calls markAllVisible on all children (count at offset 0x14, array at offset 0x18).
     * **C pseudocode:**
     * ```c
     * void markAllVisible(DirNode *node, int visibility_bits) {
     * // visibility_bits comes in via a0/a1, gets shifted/combined into bits 6-7
     * unsigned char flags = node->flags;  // offset 0x74
     * flags = (flags & 0xff3f) | ((visibility_bits & 0x3) << 6);
     * node->flags = flags;
     * // Recurse on children
     * int count = node->child_count;  // offset 0x14
     * DirNode **children = node->children;  // offset 0x18
     * for (int i = 0; i < count; i++) {
     * markAllVisible(children[i]);  // recursive call via GP-31024
     * }
     * }
     * ```
     * **Key observations:**
     * - `0xff3f` mask clears bits 6-7 of the flags byte
     * - The `sll t2,t9,0x6` shifts visibility value into position for bits 6-7
     * - GP offset -31024 (0x86d0) is the recursive call to markAllVisible itself
     * - Standard MIPS loop: s0=counter, s1=byte offset (increments by 4 for pointer array)
     */
halt_baddata();
}
