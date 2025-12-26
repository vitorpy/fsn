/**
 * hsb_to_rgb
 *
 * Extracted from fsn.c lines 77003-77013
 * Category: Other
 */

void hsb_to_rgb(undefined4 param_1,undefined4 param_2)

{
  undefined8 in_f4;
  undefined4 in_register_00001040;
  
  hsv_to_rgb((double)(float)(double)CONCAT44((int)((ulonglong)in_f4 >> 0x20),param_1),
             (double)(float)(double)CONCAT44(in_register_00001040,param_2));
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00438dd8):
     * Function: hsb_to_rgb
     *
     * Looking at this assembly:
     * 1. **What it does**: Converts three double-precision arguments (h, s, b) to single-precision, loads three pointer arguments from stack, then calls an external function via GP-relative lookup at offset -30532 (0x88bc). This is a wrapper/thunk that adapts double args to the actual hsb_to_rgb implementation.
     * 2. **C pseudocode**:
     * ```c
     * void hsb_to_rgb(double h, double s, double b, float *r, float *g, float *b_out) {
     * // GP offset 0x88bc -> likely hsvtorgb or similar library function
     * float h_f = (float)h;
     * float s_f = (float)s;
     * float b_f = (float)b;
     * _hsvtorgb(h_f, s_f, b_f, r, g, b_out);  // actual implementation
     * }
     * ```
     * The GP offset -30532 (0x88bc) needs lookup via `resolve_got.py` to identify the actual callee - likely an SGI GL library HSV/HSB conversion routine.
     */
halt_baddata();
}
