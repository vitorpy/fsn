/**
 * SG_getMaxDepth
 *
 * Extracted from fsn.c lines 70819-70851
 * Category: Other
 */

void SG_getMaxDepth(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 0x84);
    }
    iVar1 = FUN_004325fc(param_1,param_2);
    iVar4 = 0;
    if (param_4 == 0) {
      param_4 = iVar1->_field_24 /* was: *(int *)(iVar1 + 0x24) */;
    }
    iVar2 = 0;
    if (0 < iVar1->child_array /* was: *(int *)(iVar1 + 0x18) */) {
      do {
        if ((((param_3 == (int *)0x0) ||
             (*(int *)(iVar1->child_count /* was: *(int *)(iVar1 + 0x14) */ + iVar2 * 0x28 + 0x10) == *param_3)) &&
            (param_4 == *(int *)(iVar1->_field_20 /* was: *(int *)(iVar1 + 0x20) */ + iVar2 * 4))) &&
           (iVar3 = *(int *)(iVar1->child_count /* was: *(int *)(iVar1 + 0x14) */ + iVar2 * 0x28 + 0xc), iVar4 < iVar3)) {
          iVar4 = iVar3;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1->child_array /* was: *(int *)(iVar1 + 0x18) */);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00431a0c):
     * Function: SG_getMaxDepth
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Iterates through entries (index in v1, max in a3), checking if entry matches criteria (t9+16 == t2 AND array[v0+32][v1] == s0). If match found, gets depth value from structure at offset 0x0c and tracks maximum depth in t0. Returns max depth found.
     * **C pseudocode:**
     * ```c
     * int max_depth = t0;  // initial value from earlier code
     * for (int i = v1; i < count; i++) {
     * Entry *entry = &entries[i];  // t9 points to current entry
     * if (entry->field_10 == target_type &&
     * node->children[i] == target_node) {
     * int depth = node->depth_array[i].depth;  // offset 0x0c in sized struct
     * if (depth > max_depth)
     * max_depth = depth;
     * }
     * }
     * return max_depth;
     * ```
     * Key offsets: v0+0x20 = children array, v0+0x14 = depth/entry array base, entry stride = a1, depth at entry+0x0c.
     */
halt_baddata();
}
