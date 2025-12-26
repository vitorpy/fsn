/**
 * FUN_00426244
 *
 * Extracted from fsn.c lines 63506-63528
 * Ghidra address: 0x00426244
 * Category: Other
 */

void FUN_00426244(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 3 < 0) {
    if ((param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 2 < 0) || ((param_1->render_flags /* was: *(ushort *)(param_1 + 0x74) */ & 1) != 0)) {
      FUN_00425ee4(param_1);
    }
    iVar1 = 0;
    iVar2 = 0;
    if (0 < param_1->child_count /* was: *(int *)(param_1 + 0x14) */) {
      do {
        FUN_00426244(*(undefined4 *)(param_1->child_array /* was: *(int *)(param_1 + 0x18) */ + iVar2));
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar1 < param_1->child_count /* was: *(int *)(param_1 + 0x14) */);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00426244):
     * Function: FUN_00426244
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls a function via GP offset -31016 with s2 as argument, then loops through an array at s2+24, calling a recursive function (FUN_00426244 itself at base+25156) for each of the s2+20 elements.
     * 2. **C pseudocode:**
     * ```c
     * some_func(s2);  // GP[-31016]
     * int count = s2->field_14;  // offset 20
     * void **children = s2->field_18;  // offset 24
     * for (int i = 0; i < count; i++) {
     * FUN_00426244(children[i]);  // recursive call
     * }
     * return;
     * ```
     * The `addiu t9,t9,25156` (0x6244) adds the function's own offset, making this a recursive traversal of a tree structure - likely walking child nodes and calling itself on each child.
     */
halt_baddata();
}
