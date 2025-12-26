/**
 * FUN_004187f4
 *
 * Extracted from fsn.c lines 56050-56063
 * Ghidra address: 0x004187f4
 * Category: Other
 */

void FUN_004187f4(int param_1)

{
  int unaff_gp;
  
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 4;
  (**(code **)(unaff_gp + -0x7a18) /* -> FUN_004186a0 */)() /* =FUN_004186a0 */;
  (**(code **)(unaff_gp + -0x79b8) /* -> FUN_0041dba0 */)() /* =FUN_0041dba0 */;
  (**(code **)(unaff_gp + -0x7a78) /* -> FUN_00411ea4 */)() /* =FUN_00411ea4 */;
  (**(code **)(unaff_gp + -0x7acc) /* -> FUN_0040cad0 */)() /* =FUN_0040cad0 */;
  (**(code **)(unaff_gp + -0x7880) /* -> FUN_0042a8e4 */)() /* =FUN_0042a8e4 */;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004187f4):
     * Function: FUN_004187f4
     *
     * Looking at the GP offsets and the call sequence:
     * **1. What the assembly does:**
     * Five consecutive function calls via GP-relative indirect jumps (offsets -31160, -31352, -31436, -30848), then function epilogue (restore ra, gp, return). This is a cleanup/teardown sequence calling graphics state reset functions.
     * **2. C pseudocode:**
     * ```c
     * // GP offset resolution needed - likely candidates based on typical FSN patterns:
     * // -31160 (0x8648): popmatrix or similar
     * // -31352 (0x8588): endline/endpolygon
     * // -31436 (0x8534): popattributes
     * // -30848 (0x8780): swapbuffers or flush
     * void FUN_004187f4_tail(void) {
     * func_gp_8648();  // GP[-31160]
     * func_gp_8588();  // GP[-31352]
     * func_gp_8534();  // GP[-31436]
     * func_gp_8780();  // GP[-30848]
     * return;
     * }
     * ```
     * To get actual function names, run:
     * ```bash
     * python3 analysis/resolve_got.py <<< "-31160
     * -31352
     * -31436
     * -30848"
     * ```
     * This will resolve the GP offsets to their actual symbol names from the binary's GOT.
     */
halt_baddata();
}
