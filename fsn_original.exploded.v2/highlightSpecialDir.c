/**
 * highlightSpecialDir
 *
 * Extracted from fsn.c lines 57285-57302
 * Category: Filesystem
 */

void highlightSpecialDir(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                        )

{
  undefined8 in_f4;
  undefined8 in_f6;
  float fVar1;
  uint in_register_00001080;
  
  translate((float)(double)CONCAT44((int)((ulonglong)in_f4 >> 0x20),param_1),
            (float)(double)CONCAT44((int)((ulonglong)in_f6 >> 0x20),param_2),param_3,param_4,0);
  rotate((int)-curcontext->rotation_x /* was: *(short *)(curcontext + 0xe) */,0x78);
  translate(0,DAT_10017578);
  fVar1 = (float)((double)-DAT_10017574 / (double)((ulonglong)in_register_00001080 << 0x20));
  rect(fVar1,fVar1);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041a8fc):
     * Function: highlightSpecialDir
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls a function with $f12 and curcontext[58] (offset 0xe8=232). Then computes ortho bounds from curcontext[57] (offset 0xe4=228): divides by 2.0, negates for min, and calls ortho2(min, max, min, max) with symmetric bounds.
     * 2. **C pseudocode:**
     * ```c
     * // First call (likely translate or similar) with f12 arg and curcontext[58]
     * some_func(f12_arg, curcontext[58]);  // GP[-31584] with curcontext[58]
     * // Compute ortho bounds from curcontext[57] (view size)
     * float size = curcontext[57];         // offset 0xe4 = 228
     * float half = size / 2.0f;
     * float neg_half = -size / 2.0f;
     * // ortho2(left, right, bottom, top) - symmetric ortho projection
     * ortho2(half, half, neg_half, neg_half);  // GP[-32240] = ortho2
     * ```
     * Wait, looking more carefully at the register usage: a2=half, a3=half, $f14=neg_half. So it's actually:
     * ```c
     * ortho2(half, half, neg_half, neg_half);  // or ortho2(half, half, -half, -half)
     * ```
     * This sets up a symmetric 2D orthographic projection centered at origin, sized by curcontext[57].
     */
halt_baddata();
}
