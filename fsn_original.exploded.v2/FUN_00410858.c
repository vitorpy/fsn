/**
 * FUN_00410858
 *
 * Extracted from fsn.c lines 51847-51854
 * Ghidra address: 0x00410858
 * Category: Other
 */

void FUN_00410858(void)

{
  curcontext[0xc50] = 1;
  redraw_gl_scene();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00410858):
     * Function: FUN_00410858
     *
     * Looking at this assembly:
     * 1. **What it does:**
     * - Sets byte at `curcontext[0] + 0xC50` to 1 (a boolean flag)
     * - Calls a function via GP offset -31436 (0x8534)
     * - Clears a global at GP offset -32664 + 340 (sets to 0)
     * - Returns 1
     * 2. **C pseudocode:**
     * ```c
     * int FUN_00410858(void) {
     * unsigned char *ctx = *(unsigned char **)curcontext;
     * ctx[0xC50] = 1;                    // Set flag at offset 3152
     * func_at_gp_8534();                 // Call via GP[-31436]
     * *(int *)(&global_gp_8068 + 340) = 0;  // Clear global at offset 0x154
     * return 1;
     * }
     * ```
     * **GP offset resolution needed:**
     * - GP[-30340] (0x897c) → curcontext pointer
     * - GP[-31436] (0x8534) → unknown function call
     * - GP[-32664] (0x8068) → base of global + offset 0x154 (340)
     * The 0xC50 offset (3152) into the context structure is likely a boolean state flag. This looks like an "enable" or "start" function that sets a mode flag, calls an initialization function, clears some state, and returns success.
     */
halt_baddata();
}
