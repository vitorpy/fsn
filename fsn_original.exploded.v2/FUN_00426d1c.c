/**
 * FUN_00426d1c
 *
 * Extracted from fsn.c lines 63986-63999
 * Ghidra address: 0x00426d1c
 * Category: Other
 */

void FUN_00426d1c(void)

{
  int unaff_gp;
  
  if (*(int *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0x3c) == 0) {
    (**(code **)(unaff_gp + -0x7920) /* -> FUN_004268e0 */)() /* =FUN_004268e0 */;
  }
  else {
    (**(code **)(unaff_gp + -0x79f4) /* -> FUN_0041a648 */)() /* =FUN_0041a648 */;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00426d1c):
     * Function: FUN_00426d1c
     *
     * Looking at this assembly:
     * 1. **What it does:** Two conditional paths that call different functions via GP-relative indirect calls. Path 1 calls `gp[-31008]` with args from sp+64,68,72,76. Path 2 calls `gp[-31220]` with same args plus t2, then masks return value to byte (0xff).
     * 2. **C pseudocode:**
     * ```c
     * // Path 1 (from 426d3c):
     * return func_gp_86e0(sp[64], sp[68], sp[72], sp[76]);
     * // Path 2 (from 426d74):
     * return (unsigned char)(func_gp_860c(t2, sp[68], sp[72], sp[76]) & 0xff);
     * ```
     * The GP offsets need resolution against your GP_MAPPING.md:
     * - `gp[-31008]` = `gp - 0x7920` (offset -31008 = -0x7920)
     * - `gp[-31220]` = `gp - 0x79F4` (offset -31220 = -0x79F4)
     * Check `fsn_original.exploded.cleanup/GP_MAPPING.md` for actual function names. The `& 0xff` suggests the second function returns a boolean or status byte.
     */
halt_baddata();
}
