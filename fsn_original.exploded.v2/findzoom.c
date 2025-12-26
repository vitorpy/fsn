/**
 * findzoom
 *
 * Extracted from fsn.c lines 63969-63980
 * Category: Other
 */

void findzoom(void)

{
  if (curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */ == 0) {
    FUN_004268e0();
  }
  else {
    FUN_0041a648();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00426d10):
     * Function: findzoom
     *
     * Looking at this assembly:
     * 1. **What it does**: Two code paths that call different functions via GP-indirect jumps. Path 1 calls function at gp-31008 with args from sp+64,68,72,76. Path 2 calls function at gp-31220 with similar args, masks result to byte, returns it.
     * 2. **C pseudocode**:
     * ```c
     * // Path 1 (from 426d3c):
     * return func_gp_minus_31008(sp[64], sp[68], sp[72], sp[76]);
     * // Path 2 (from 426d74):
     * int result = func_gp_minus_31220(t2_val, sp[68], sp[72], sp[76]);
     * return (unsigned char)(result & 0xff);
     * ```
     * To resolve the GP offsets, run:
     * ```bash
     * echo "-31008" > /tmp/off.txt && echo "-31220" >> /tmp/off.txt && python3 analysis/resolve_got.py /tmp/off.txt
     * ```
     * This will tell you which functions are actually being called (likely something like `zoomnode` or similar zoom-related helpers).
     */
halt_baddata();
}
