/**
 * FUN_0041eaf8
 *
 * Extracted from fsn.c lines 59621-59665
 * Ghidra address: 0x0041eaf8
 * Category: Other
 */

void FUN_0041eaf8(int param_1)

{
  char *__dest;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 0xc < 0) {
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xf7;
    if (0 < param_1->file_count /* was: *(int *)(param_1 + 0xc) */) {
      iVar3 = 0;
      do {
        puVar2 = *(undefined4 **)(param_1->file_array /* was: *(int *)(param_1 + 0x10) */ + iVar3);
        if ((int)(puVar2[10] << 9) < 0) {
          __dest = (char *)build_path_string(0,param_1);
          strcat(__dest,(char *)*puVar2);
          iVar1 = unlink(__dest);
          if (iVar1 < 0) {
            show_error_dialog("cannot delete",__dest);
            *(byte *)((int)puVar2 + 0x29) = *(byte *)((int)puVar2 + 0x29) & 0xbf;
          }
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < param_1->file_count /* was: *(int *)(param_1 + 0xc) */);
    }
    if (-1 < param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 10) {
      FUN_00417b88(param_1);
    }
  }
  iVar3 = 0;
  iVar4 = 0;
  if (0 < param_1->child_count /* was: *(int *)(param_1 + 0x14) */) {
    do {
      FUN_0041eaf8(*(undefined4 *)(param_1->child_array /* was: *(int *)(param_1 + 0x18) */ + iVar4));
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < param_1->child_count /* was: *(int *)(param_1 + 0x14) */);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041eaf8):
     * Function: FUN_0041eaf8
     *
     * ## Analysis
     * **1. What it does:**
     * This is a loop that iterates over an array of pointers at s4+24, calling a recursive function (FUN_0041eaf8 itself, based on the -5384 offset matching the function start) on each element. The count is at s4+20. This is a recursive tree traversal - processing all children of a node.
     * **2. C pseudocode:**
     * ```c
     * // s4 = node structure pointer
     * // s4+20 (offset 0x14) = child_count
     * // s4+24 (offset 0x18) = children array (pointer to array of node pointers)
     * int child_count = node->child_count;  // lw t3,20(s4)
     * int i = 0;                            // move s3,zero
     * int offset = 0;                       // move s1,zero
     * if (child_count > 0) {                // blez t3, skip
     * do {
     * void **children = node->children;           // lw t4,24(s4)
     * void *child = *(void**)((char*)children + offset);  // lw a0,0(t5)
     * FUN_0041eaf8(child);                        // jalr t9 (recursive call)
     * i++;                                        // addiu s3,s3,1
     * offset += 4;                                // addiu s1,s1,4
     * } while (i < node->child_count);                // slt + bnez
     * }
     * // epilogue: restore s0-s5, ra, return
     * ```
     * **Comment-ready version:**
     * ```c
     * // Loop over children array: for each child pointer at node->children[i],
     * // recursively call this function. child_count at offset 0x14, children at 0x18.
     * for (int i = 0; i < node->child_count; i++) {
     * FUN_0041eaf8(node->children[i]);
     * }
     * ```
     */
halt_baddata();
}
