/**
 * FUN_0042d314
 *
 * Extracted from fsn.c lines 68073-68078
 * Ghidra address: 0x0042d314
 * Category: Other
 */

void FUN_0042d314(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042d314):
     * Function: FUN_0042d314
     *
     * Looking at this MIPS assembly:
     * 1. **What it does:** Sets up GP register (standard PIC prologue), stores three arguments (a0, a1, a2) to stack at offsets 0, 4, 8, then clears a global variable to zero via GP-relative addressing (offset -32660 → 0x6e4c from that base).
     * 2. **C pseudocode:**
     * ```c
     * void FUN_0042d314(int a0, int a1, int a2) {
     * // Args stored to stack (unused - likely varargs setup or debug)
     * *(int*)((char*)sp + 0) = a0;
     * *(int*)((char*)sp + 4) = a1;
     * *(int*)((char*)sp + 8) = a2;
     * // Clear global at GP offset -32660 (0x806c), then write 0 to offset 0x6e4c from that pointer
     * extern int *gp_minus_806c;  // DAT at GP-0x806c
     * gp_minus_806c[0x6e4c/4] = 0;  // or: *(gp_minus_806c + 0x1b93) = 0
     * }
     * ```
     * The key operation is zeroing a global variable. The GP offset -32660 (0xffff806c signed) loads a base pointer, then offset 28236 (0x6e4c) indexes into it. This is likely `some_struct->field = 0` or clearing a flag/counter. The stack stores are probably ABI compliance for varargs or just dead code from optimization.
     */
halt_baddata();
}
