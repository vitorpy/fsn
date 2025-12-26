/**
 * FUN_0041ed94
 *
 * Extracted from fsn.c lines 59690-59719
 * Ghidra address: 0x0041ed94
 * Category: Other
 */

void FUN_0041ed94(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 0xc < 0) &&
     (*(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xf7, 0 < param_1->file_count /* was: *(int *)(param_1 + 0xc) */)) {
    iVar2 = 0;
    do {
      iVar3 = iVar3 + 1;
      iVar1 = *(int *)(param_1->file_array /* was: *(int *)(param_1 + 0x10) */ + iVar2);
      iVar2 = iVar2 + 4;
      *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) & 0xbf;
    } while (iVar3 < param_1->file_count /* was: *(int *)(param_1 + 0xc) */);
  }
  iVar2 = 0;
  iVar3 = 0;
  if (0 < param_1->child_count /* was: *(int *)(param_1 + 0x14) */) {
    do {
      FUN_0041ed94(*(undefined4 *)(param_1->child_array /* was: *(int *)(param_1 + 0x18) */ + iVar3));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < param_1->child_count /* was: *(int *)(param_1 + 0x14) */);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041ed94):
     * Function: FUN_0041ed94
     *
     * Looking at this assembly:
     * **What it does:**
     * This is a nested loop epilogue. The outer loop (s1 < s2[3]) just finished. Now it iterates s1 from 0 to s2[5]-1, loading pointers from array s2[6][s1] and calling a function (resolved via GP at -32740, offset -4716 = this same function FUN_0041ed94, making it recursive). Then restores saved registers and returns.
     * **C pseudocode:**
     * ```c
     * // ... end of outer loop (s1 < s2->field_0c) ...
     * // Inner loop: recursively process children
     * for (s1 = 0; s1 < s2->num_children; s1++) {  // s2[5] = offset 20 = num_children
     * void *child = s2->children[s1];           // s2[6] = offset 24 = children array
     * FUN_0041ed94(child);                      // recursive call to self
     * }
     * return;
     * ```
     * The key insight: `lw t9,-32740(gp)` followed by `addiu t9,t9,-4716` and `jalr t9` is a recursive call back to FUN_0041ed94 itself (0x41ed94 = base + (-4716) adjustment). The structure at s2 has: offset 12 = count1, offset 20 = num_children, offset 24 = children_array_ptr.
     */
halt_baddata();
}
