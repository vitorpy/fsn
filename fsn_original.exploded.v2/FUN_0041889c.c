/**
 * FUN_0041889c
 *
 * Extracted from fsn.c lines 56085-56097
 * Ghidra address: 0x0041889c
 * Category: Other
 */

void FUN_0041889c(int param_1)

{
  int unaff_gp;
  
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xfb;
  (**(code **)(unaff_gp + -0x7a34) /* -> FUN_00417b88 */)() /* =FUN_00417b88 */;
  (**(code **)(unaff_gp + -0x7a78) /* -> FUN_00411ea4 */)() /* =FUN_00411ea4 */;
  (**(code **)(unaff_gp + -0x7acc) /* -> FUN_0040cad0 */)() /* =FUN_0040cad0 */;
  (**(code **)(unaff_gp + -0x7880) /* -> FUN_0042a8e4 */)() /* =FUN_0042a8e4 */;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041889c):
     * Function: FUN_0041889c
     *
     * Looking at the assembly:
     * 1. **What it does:** Clears bit 2 of byte at offset 117 (0x75) in a structure pointed to by a0, then calls 4 functions via GP-indirect calls (likely IrisGL state management functions like popmatrix, lmbind, etc.).
     * 2. **C pseudocode:**
     * ```c
     * void FUN_0041889c(void *param1) {
     * // Clear bit 2 of flags byte at offset 0x75
     * ((unsigned char *)param1)[0x75] &= ~0x04;
     * // Call 4 GP-indirect functions (resolve via GP offsets)
     * // GP-0x85cc: likely popmatrix or similar
     * func_gp_85cc();
     * // GP-0x8588:
     * func_gp_8588();
     * // GP-0x8534:
     * func_gp_8534();
     * // GP-0x8780:
     * func_gp_8780();
     * }
     * ```
     * To get actual function names, resolve GP offsets:
     * - GP offset -31284 (0x85cc)
     * - GP offset -31352 (0x8588)
     * - GP offset -31436 (0x8534)
     * - GP offset -30848 (0x8780)
     * Run: `python3 analysis/resolve_got.py` with these offsets to identify the actual functions.
     */
halt_baddata();
}
