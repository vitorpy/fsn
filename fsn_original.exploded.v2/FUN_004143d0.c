/**
 * FUN_004143d0
 *
 * Extracted from fsn.c lines 53711-53750
 * Ghidra address: 0x004143d0
 * Category: Memory
 */

void FUN_004143d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1->file_count /* was: *(int *)(param_1 + 0xc) */;
  param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ = param_1->render_flags /* was: *(byte *)(param_1 + 0x74) */ & 0xef;
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
    free(param_1->file_array /* was: *(void **)(param_1 + 0x10) */);
  }
  iVar1 = param_1->child_count /* was: *(int *)(param_1 + 0x14) */;
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_004143d0(*(undefined4 *)(param_1->child_array /* was: *(int *)(param_1 + 0x18) */ + iVar2));
      iVar1 = param_1->child_count /* was: *(int *)(param_1 + 0x14) */;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < iVar1);
  }
  if (iVar1 != 0) {
    free(param_1->child_array /* was: *(void **)(param_1 + 0x18) */);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004143d0):
     * Function: FUN_004143d0
     *
     * Looking at the assembly:
     * 1. **What it does:** Loop iterates s1 from 0 to s2[0x14]-1, calling a recursive function (at gp-32744+17360, which is this same function FUN_004143d0) on each child pointer from array at s2[0x18]. After the loop, if count was non-zero, frees the children array via free() (gp-32576).
     * 2. **C pseudocode:**
     * ```c
     * // s2 = directory node, s2[0x14] = child count, s2[0x18] = children array
     * int count = node->num_children;  // offset 0x14
     * void **children = node->children; // offset 0x18
     * for (int i = 0; i < count; i++) {
     * FUN_004143d0(children[i]);  // recursive call on each child
     * }
     * if (count != 0) {
     * free(children);
     * }
     * // epilogue: restore s0,s1,s2,ra and return
     * ```
     * This is a recursive tree traversal that processes all children then frees the children array - classic recursive directory tree cleanup/deletion pattern.
     */
halt_baddata();
}
