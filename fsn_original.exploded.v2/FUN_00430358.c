/**
 * FUN_00430358
 *
 * Extracted from fsn.c lines 70066-70095
 * Ghidra address: 0x00430358
 * Category: Other
 */

void FUN_00430358(void)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  
  visitedSearchDp = 0;
  visitedSearchFp = 0;
  lastSearchDir = 0;
  bVar2 = firstSearchDir != 0;
  while (bVar2) {
    iVar3 = *(int *)(firstSearchDir + 0x70);
    while (iVar3 != 0) {
      iVar3->child_center /* was: *(byte *)(iVar3 + 0x28) */ = iVar3->child_center /* was: *(byte *)(iVar3 + 0x28) */ & 0xf7;
      iVar3 = *(int *)(firstSearchDir + 0x70);
      *(undefined4 *)(firstSearchDir + 0x70) = iVar3->_field_24 /* was: *(undefined4 *)(iVar3 + 0x24) */;
      iVar3->_field_24 /* was: *(undefined4 *)(iVar3 + 0x24) */ = 0;
      iVar3 = *(int *)(firstSearchDir + 0x70);
    }
    *(byte *)(firstSearchDir + 0x76) = *(byte *)(firstSearchDir + 0x76) & 0x7f;
    *(byte *)(firstSearchDir + 0x75) = *(byte *)(firstSearchDir + 0x75) & 0xfe;
    puVar1 = (undefined4 *)(firstSearchDir + 0x6c);
    firstSearchDir = *(int *)(firstSearchDir + 0x6c);
    *puVar1 = 0;
    bVar2 = firstSearchDir != 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00430358):
     * Function: FUN_00430358
     *
     * ## Analysis
     * **What it does:**
     * Traverses a linked list of nodes. For each node: clears a flag at offset 112 (next_ptr), clears bit 7 of byte at offset 118, clears bit 0 of byte at offset 117, then advances to the next node via pointer at offset 108.
     * **C pseudocode:**
     * ```c
     * // a1 points to a pointer-to-node (NodeType **iter = a1)
     * // Loop processes linked list, clearing flags on each node
     * while (*iter != NULL) {
     * NodeType *node = *iter;
     * // Clear some linking pointer at offset 112
     * node->field_70 = 0;  // offset 112 = 0x70
     * // Clear bit 7 of flags byte at offset 118
     * node->flags_76 &= 0xFF7F;  // offset 118 = 0x76
     * // Clear bit 0 of flags byte at offset 117
     * node->flags_75 &= 0xFFFE;  // offset 117 = 0x75
     * // Advance: *iter = node->next, node->next = NULL
     * *iter = node->field_6c;   // offset 108 = 0x6c (next pointer)
     * node->field_6c = NULL;
     * }
     * return;
     * ```
     * **Structure hint:** This appears to be cleanup/unlinking code for a linked list, possibly file/directory nodes. Offset 108 (0x6c) is the "next" pointer, offsets 117-118 contain status flags (selected? visible? marked?).
     */
halt_baddata();
}
