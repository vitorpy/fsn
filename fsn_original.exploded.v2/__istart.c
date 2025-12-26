/**
 * __istart
 *
 * Extracted from fsn.c lines 78640-78645
 * Category: Other
 */

void __istart(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043b79c):
     * Function: __istart
     *
     * ## Analysis of `__istart` (0x43b79c - 0x43b7a8)
     * **What it does:**
     * This is an empty stub function. It executes a NOP, then returns to the caller (jr ra = jump register return address), with another NOP in the branch delay slot.
     * **C equivalent:**
     * ```c
     * void __istart(void) {
     * return;
     * }
     * ```
     * **Context:** `__istart` is a standard IRIX/MIPS runtime initialization hook. The linker expects this symbol to exist. SGI programs could define custom initialization code here, but FSN doesn't need any, so it's an empty stub. Ghidra's `halt_baddata()` was likely confused by the lack of actual code content.
     */
halt_baddata();
}
