/**
 * FUN_0042cc30
 *
 * Extracted from fsn.c lines 67887-67892
 * Ghidra address: 0x0042cc30
 * Category: Other
 */

void FUN_0042cc30(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042cc30):
     * Function: FUN_0042cc30
     *
     * Looking at this MIPS assembly:
     * 1. **What it does:** Stores three arguments (a0, a1, a2) to stack offsets 0, 4, 8. Then clears a global variable to zero via GP-relative addressing. The GP-indirect load at offset -32660 (0x806c) gets a base pointer, then stores zero at offset -30400 (0x8940) from that base.
     * 2. **C pseudocode:**
     * ```c
     * void FUN_0042cc30(int a0, int a1, int a2) {
     * // Arguments stored to stack (likely varargs or struct setup)
     * // sp[0] = a0; sp[4] = a1; sp[8] = a2;
     * // Clear global via GP indirection
     * // GP offset 0x806c -> base ptr, then offset 0x8940
     * *((int*)((char*)_gp_base + 0x8940)) = 0;
     * }
     * ```
     * **GP Resolution:** Offset -32660 (0xffff806c) likely points to a data segment base. The final store at offset 0x8940 clears what appears to be `DAT_10008940` (a global flag or state variable). This pattern suggests a "reset state" function - storing arguments for later use while clearing an associated flag.
     */
halt_baddata();
}
