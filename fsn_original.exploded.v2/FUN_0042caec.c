/**
 * FUN_0042caec
 *
 * Extracted from fsn.c lines 67844-67851
 * Ghidra address: 0x0042caec
 * Category: Other
 */

void FUN_0042caec(undefined4 param_1,int param_2,int param_3)

{
  **(undefined4 **)(param_2 + 4) = *(undefined4 *)(param_3 + 8);
  FUN_0042c970(*(undefined4 *)(param_2 + 8));
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042caec):
     * Function: FUN_0042caec
     *
     * Looking at this assembly:
     * 1. **What it does:**
     * Loads a value from offset 8 of arg2 (a2), stores it at the location pointed to by offset 4 of arg1 (a1). Then calls a function (resolved via GP-0x8020 + offset -13968) with arg1's offset 8 as the argument.
     * 2. **C pseudocode:**
     * ```c
     * void FUN_0042caec(void *a0, void **a1, void **a2) {
     * // a1[1] = a2[2]  (store a2's 3rd word into a1's 2nd word)
     * *(int *)((char *)a1 + 4) = *(int *)((char *)a2 + 8);
     * // Call function at GP[-0x8020] - 13968 with a1[2] as argument
     * // GP offset -0x8020 (decimal -32736) likely points to a GOT entry
     * some_function(*(void **)((char *)a1 + 8));
     * }
     * ```
     * To resolve the actual function being called, you'd need to check GP offset -0x8020 in the GOT, then add -13968 (0xffffc970) to that base. The pattern suggests this is calling a function like `free()` or a cleanup routine, passing a pointer stored at a1+8. The first parameter `a0` is saved but unused in this snippet.
     */
halt_baddata();
}
