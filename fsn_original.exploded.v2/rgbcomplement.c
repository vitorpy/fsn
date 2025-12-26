/**
 * rgbcomplement
 *
 * Extracted from fsn.c lines 77248-77261
 * Category: Other
 */

void rgbcomplement(undefined4 param_1,undefined4 param_2)

{
  undefined8 in_f4;
  undefined8 in_f8;
  undefined4 local_14;
  undefined4 local_10;
  
  rgb_to_hsv((double)(float)(double)CONCAT44((int)((ulonglong)in_f4 >> 0x20),param_1),
             (double)(float)(double)CONCAT44((int)((ulonglong)in_f8 >> 0x20),param_2));
  hsv_to_rgb((double)local_10,(double)local_14);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00439974):
     * Function: rgbcomplement
     *
     * Looking at this assembly:
     * 1. **What it does:** Performs floating-point arithmetic on f2 (adds 0.0, subtracts 0.0 - effectively a no-op conversion dance), loads parameters from stack (t9, t0, t1 from offsets 112, 116, 120), then calls a function via GP-relative address (-30532 = 0x88bc) with double-precision args in f12/f14.
     * 2. **C pseudocode:**
     * ```c
     * // f2 already contains a float value from earlier code
     * float result = f2;  // the add.d/sub.d with zero are no-ops, just format conversions
     * // Load callback/function pointer and extra params from stack args
     * void *callback = stack[112];
     * int param1 = stack[116];
     * int param2 = stack[120];
     * // GP offset -30532 (0x88bc) - likely hls_to_rgb or similar color function
     * // Call with double args (f6 converted to f12, f8 converted to f14)
     * hls_to_rgb((double)stack[72], (double)stack[68], result, callback, param1, param2);
     * ```
     * The GP offset 0x88bc should be checked against your GP_MAPPING.md - it's likely `hls_to_rgb` or a color conversion routine since this is `rgbcomplement`. The float manipulations with zero are MIPS ABI quirks for passing double-precision values to the function call.
     */
halt_baddata();
}
