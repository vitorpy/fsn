/**
 * FUN_00411178
 *
 * Extracted from fsn.c lines 52233-52247
 * Ghidra address: 0x00411178
 * Category: Other
 */

void FUN_00411178(undefined4 param_1,undefined4 param_2)

{
  uint extraout_var;
  float local_8;
  float local_4;
  
  FUN_0040f080(param_2,&local_4,&local_8);
  FUN_0040cf9c(((double)local_8 - (double)DAT_10016630) * (double)((ulonglong)extraout_var << 0x20),
               ((double)local_4 - (double)DAT_1001662c) * (double)((ulonglong)extraout_var << 0x20))
  ;
  DAT_1001662c = local_4;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00411178):
     * Function: FUN_00411178
     *
     * Looking at this assembly:
     * 1. **What it does:** Computes interpolated camera/view position. Takes two floats from stack (new X,Y), subtracts current stored values, multiplies differences by an interpolation factor (0.0 in upper reg, implying t value elsewhere), calls a function (likely atan2 or similar at gp-31428), then stores the new X,Y values to the global storage.
     * 2. **C pseudocode:**
     * ```c
     * // gp-32660 offset 26160 = view_x, offset 26156 = view_y (likely DAT_10006630, DAT_1000662c)
     * float new_x = *(float*)(sp+32);  // param or local
     * float new_y = *(float*)(sp+36);
     * double dx = (double)new_x - (double)view_x;
     * double dy = (double)new_y - (double)view_y;
     * double t = 0.0;  // interpolation factor (or loaded elsewhere)
     * // jalr to function at gp-31428 with args: dx*t, dy*t (in $f12,$f14)
     * some_func(dx * t, dy * t);
     * view_y = new_y;  // store back
     * view_x = new_x;
     * ```
     * The `0x4024` in lui suggests this might be loading 2.5 (IEEE 0x40240000) as the interpolation constant rather than 0.0 - the mtc1 zero sets low word while lui sets high word of a double. This looks like smooth camera panning with easing factor ~2.5.
     */
halt_baddata();
}
