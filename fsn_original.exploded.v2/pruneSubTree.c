/**
 * pruneSubTree
 *
 * Extracted from fsn.c lines 55928-55974
 * Category: Memory
 */

void pruneSubTree(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xef;
  FUN_00427ec8();
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
    free(param_1->file_array /* was: *(void **)(param_1 + 0x10) */);
    param_1->file_array /* was: *(undefined4 *)(param_1 + 0x10) */ = 0;
    param_1->file_count /* was: *(undefined4 *)(param_1 + 0xc) */ = 0;
  }
  iVar1 = param_1->child_count /* was: *(int *)(param_1 + 0x14) */;
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_004186a0(*(undefined4 *)(param_1->child_array /* was: *(int *)(param_1 + 0x18) */ + iVar2));
      iVar1 = *(int *)(param_1->child_array /* was: *(int *)(param_1 + 0x18) */ + iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
      iVar1->render_flags /* was: *(byte *)(iVar1 + 0x74) */ = iVar1->render_flags /* was: *(byte *)(iVar1 + 0x74) */ & 0xef;
      iVar1 = param_1->child_count /* was: *(int *)(param_1 + 0x14) */;
    } while (iVar3 < iVar1);
  }
  if (iVar1 != 0) {
    free(param_1->child_array /* was: *(void **)(param_1 + 0x18) */);
    param_1->child_array /* was: *(undefined4 *)(param_1 + 0x18) */ = 0;
    param_1->child_count /* was: *(undefined4 *)(param_1 + 0x14) */ = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00418694):
     * Function: pruneSubTree
     *
     * Looking at this assembly:
     * **What it does:**
     * Loop through child array clearing bit 0x10 in flag byte at offset 116 of each child. After loop, if child count > 0, call free() on child array and zero out both the array pointer (offset 24) and count (offset 20).
     * **C pseudocode:**
     * ```c
     * // s2 = node, s1 = loop counter (i), s0 = array offset
     * for (i = 0; i < node->numChildren; i++) {
     * child = node->children[i];
     * child->flags &= ~0x10;  // clear PRUNED flag at offset 116
     * }
     * if (node->numChildren != 0) {
     * free(node->children);   // GP offset -32576 = free
     * node->children = NULL;  // offset 24
     * node->numChildren = 0;  // offset 20
     * }
     * ```
     * The `& 0xffef` is clearing bit 4 (0x10) - likely an "is_pruned" or "mark" flag used during tree traversal.
     */
halt_baddata();
}
