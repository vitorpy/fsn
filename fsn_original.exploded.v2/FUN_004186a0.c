/**
 * FUN_004186a0
 *
 * Extracted from fsn.c lines 55980-56027
 * Ghidra address: 0x004186a0
 * Category: Other
 */

void FUN_004186a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_gp;
  
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xef;
  (**(code **)(unaff_gp + -0x78e8) /* -> FUN_00427ec8 */)() /* =FUN_00427ec8 */;
  iVar1 = param_1->file_count /* was: *(int *)(param_1 + 0xc) */;
  iVar3 = 0;
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      iVar3 = iVar3 + 1;
      iVar1 = *(int *)(param_1->file_array /* was: *(int *)(param_1 + 0x10) */ + iVar2);
      iVar2 = iVar2 + 4;
      iVar1->child_center /* was: *(byte *)(iVar1 + 0x28) */ = iVar1->child_center /* was: *(byte *)(iVar1 + 0x28) */ & 0xfb;
      iVar1 = param_1->file_count /* was: *(int *)(param_1 + 0xc) */;
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  if (iVar1 != 0) {
    /* TODO: GP:-0x7f40 */ (**(code **)(unaff_gp + -0x7f40) /* -> EXTERNAL_0x0fabf650 */)(param_1->file_array /* was: *(undefined4 *)(param_1 + 0x10) */);
    param_1->file_array /* was: *(undefined4 *)(param_1 + 0x10) */ = 0;
    param_1->file_count /* was: *(undefined4 *)(param_1 + 0xc) */ = 0;
  }
  iVar1 = param_1->child_count /* was: *(int *)(param_1 + 0x14) */;
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      (**(code **)(unaff_gp + -0x7a18) /* -> FUN_004186a0 */)(*(undefined4 *)(param_1->child_array /* was: *(int *)(param_1 + 0x18) */ + iVar2)) /* =FUN_004186a0 */;
      iVar1 = *(int *)(param_1->child_array /* was: *(int *)(param_1 + 0x18) */ + iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
      iVar1->render_flags /* was: *(byte *)(iVar1 + 0x74) */ = iVar1->render_flags /* was: *(byte *)(iVar1 + 0x74) */ & 0xef;
      iVar1 = param_1->child_count /* was: *(int *)(param_1 + 0x14) */;
    } while (iVar3 < iVar1);
  }
  if (iVar1 != 0) {
    /* TODO: GP:-0x7f40 */ (**(code **)(unaff_gp + -0x7f40) /* -> EXTERNAL_0x0fabf650 */)(param_1->child_array /* was: *(undefined4 *)(param_1 + 0x18) */);
    param_1->child_array /* was: *(undefined4 *)(param_1 + 0x18) */ = 0;
    param_1->child_count /* was: *(undefined4 *)(param_1 + 0x14) */ = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004186a0):
     * Function: FUN_004186a0
     *
     * ## Analysis
     * **What it does:**
     * Loop iterates through an array of child pointers at offset +24, clearing bit 0x10 in byte at offset +116 (flags field). After loop, if count > 0, calls free() on the children array and zeroes out both the array pointer (+24) and count (+20).
     * **C pseudocode:**
     * ```c
     * // Clear SELECTED flag (0x10) from all children
     * for (i = 0; i < node->num_children; i++) {
     * child = node->children[i];
     * child->flags &= ~0x10;  // offset 116, clear bit 4
     * }
     * // Free children array if it existed
     * if (node->num_children != 0) {
     * free(node->children);
     * node->children = NULL;
     * node->num_children = 0;
     * }
     * ```
     * **Key offsets on s2 (directory node):**
     * - +20 (0x14): num_children (int)
     * - +24 (0x18): children array (pointer to child node pointers)
     * **Key offset on child node (v0):**
     * - +116 (0x74): flags byte, bit 0x10 = selected/marked flag
     */
halt_baddata();
}
