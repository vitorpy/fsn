/**
 * FUN_0042caa0
 *
 * Extracted from fsn.c lines 67831-67838
 * Ghidra address: 0x0042caa0
 * Category: Other
 */

void FUN_0042caa0(undefined4 param_1,int param_2,int param_3)

{
  **(undefined1 **)(param_2 + 4) = (char)*(undefined4 *)(param_3 + 8);
  FUN_0042c970(*(undefined4 *)(param_2 + 8));
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042caa0):
     * Function: FUN_0042caa0
     *
     * Looking at the assembly:
     * **What it does:**
     * 1. Extracts a byte from `a2[8]` and stores it at the address pointed to by `a1[4]`
     * 2. Calls a function (resolved via GP at offset -32736 + adjustment -13968) with `a1[8]` as argument
     * **C pseudocode:**
     * ```c
     * void FUN_0042caa0(void *a0, void **a1, int *a2) {
     * char *dest = (char *)a1[1];  // a1 + 4 in 32-bit = a1[1]
     * int val = a2[2];             // a2 + 8 in 32-bit = a2[2]
     * *dest = (char)val;           // sb - store byte
     * some_function(a1[2]);        // a1 + 8 = a1[2], call via GP
     * }
     * ```
     * **GP resolution:** The target function is at GP offset -32736 (0x8020) then adjusted by -13968 (0xc970). You'd need to check `resolve_got.py` or `GP_MAPPING.md` to identify the actual function being called. The pattern suggests it's likely a string/memory function like `strcpy` or similar given it's passing what looks like a pointer from a1[2].
     */
halt_baddata();
}
