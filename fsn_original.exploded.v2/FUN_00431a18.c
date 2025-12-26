/**
 * FUN_00431a18
 *
 * Extracted from fsn.c lines 70857-70890
 * Ghidra address: 0x00431a18
 * Category: Other
 */

void FUN_00431a18(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_gp;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 0x84);
    }
    iVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + 0x25fc))(param_1,param_2);
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
     * BADDATA ANALYSIS (from binary @ 0x00431a18):
     * Function: FUN_00431a18
     *
     * Looking at this assembly:
     * 1. **What it does:** Loop iterating v1 from 0 to a3. For each iteration, checks if t9[4] == t2 AND v0[8][v1] == s0. If both match, reads v0[5][v1*a1 + 3] and tracks the maximum value in t0. Returns max.
     * 2. **C pseudocode:**
     * ```c
     * int max_depth = t0;  // initial value from earlier code
     * for (int i = 0; i < count; i++) {
     * if (node->field_16 == target_type &&
     * node->children[i] == target_node) {
     * int depth = node->depth_array[i * stride + 3];
     * if (depth > max_depth)
     * max_depth = depth;
     * }
     * }
     * return max_depth;
     * ```
     * Key offsets: v0+0x20 = children array, v0+0x14 = depth/data array, t9+0x10 = type field, stride in a1, count in a3.
     */
halt_baddata();
}
