/**
 * FUN_0040f20c
 *
 * Extracted from fsn.c lines 51253-51264
 * Ghidra address: 0x0040f20c
 * Category: Other
 */

void FUN_0040f20c(int param_1)

{
  ulonglong in_f10;
  
  *(float *)(curcontext + 8) =
       *(float *)(curcontext + 8) +
       param_1->file_count /* was: *(float *)(param_1 + 0xc) */ *
       (float)((double)curcontext->render_time_usec /* was: *(int *)(curcontext + 0xc4c) */ / (double)(in_f10 & 0xffffffff00000000));
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040f20c):
     * Function: FUN_0040f20c
     *
     * Looking at this MIPS assembly snippet:
     * **What it does:**
     * Converts a double-precision float to integer, stores as halfword at offset 12 of v0, then calls a GP-indirect function. After return, loads two floats from a0 struct (offsets 0 and 4), converts to double, multiplies each by a scaling factor (f0), and calls another GP-indirect function with results in $f12/$f14.
     * **C pseudocode:**
     * ```c
     * // Convert double f10 to int16, store at v0->field_0c
     * ((short *)v0)[6] = (short)(int)double_val;
     * // First GP call at offset -31448 (0x8528) - likely getWindowWidth or similar
     * func_8528();
     * // Load struct floats, scale, call second function
     * float y = ((float *)a0)[1];  // offset 4
     * float x = ((float *)a0)[0];  // offset 0
     * double scaled_y = (double)y * scale_factor;
     * double scaled_x = (double)x * scale_factor;
     * func_853c(scaled_x, scaled_y);  // GP offset -31428 (0x853c)
     * return 0;
     * ```
     * **GP offsets to resolve:** -31448 (0x8528) and -31428 (0x853c) - check GP_MAPPING.md for actual function names. The pattern suggests coordinate transformation (screen coords from normalized values).
     */
halt_baddata();
}
