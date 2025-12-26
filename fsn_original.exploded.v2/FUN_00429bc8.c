/**
 * FUN_00429bc8
 *
 * Extracted from fsn.c lines 66055-66071
 * Ghidra address: 0x00429bc8
 * Category: Other
 */

void FUN_00429bc8(undefined4 param_1)

{
  int unaff_gp;
  undefined4 local_8;
  int local_4;
  
  (**(code **)(unaff_gp + -0x7874) /* -> FUN_0042ab1c */)(param_1,&local_4,&local_8) /* =FUN_0042ab1c */;
  if (local_4 == 0) {
    (**(code **)(unaff_gp + -0x78bc) /* -> FUN_004294cc */)() /* =FUN_004294cc */;
  }
  else {
    (**(code **)(unaff_gp + -0x78b4) /* -> FUN_00429640 */)(local_4,local_8,0) /* =FUN_00429640 */;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00429bc8):
     * Function: FUN_00429bc8
     *
     * Looking at the assembly:
     * 1. **What it does:** Calls a function via GP-0x878c (likely `getPointerPosition` or similar) passing two stack output pointers. If first output is non-zero, calls GP-0x874c with that value, second output, and zero. If first output is zero, calls GP-0x8744 (likely a "clear highlight" function).
     * 2. **C pseudocode:**
     * ```c
     * void FUN_00429bc8(void) {
     * int result1, result2;
     * /* GP-0x878c: likely getPointerPosition or similar query */
     * gp_func_878c(&result1, &result2);
     * if (result1 != 0) {
     * /* GP-0x874c: likely highlightItem(item, position, 0) */
     * gp_func_874c(result1, result2, 0);
     * } else {
     * /* GP-0x8744: likely clearHighlight() */
     * gp_func_8744();
     * }
     * }
     * ```
     * To resolve the actual function names, check your GP_MAPPING.md for offsets -0x878c (-30836), -0x874c (-30900), and -0x8744 (-30908), or run:
     * ```bash
     * python3 analysis/resolve_got.py <<< $'-0x878c\n-0x874c\n-0x8744'
     * ```
     */
halt_baddata();
}
