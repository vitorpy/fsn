/**
 * FUN_0040da14
 *
 * Extracted from fsn.c lines 50763-50775
 * Ghidra address: 0x0040da14
 * Category: Other
 */

void FUN_0040da14(undefined4 param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  uint in_register_00001050;
  
  fVar1 = (float)((double)*(int *)(param_3 + 8) / (double)((ulonglong)in_register_00001050 << 0x20))
  ;
  *(float *)(curcontext + 8) = fVar1 * fVar1;
  redraw_gl_scene();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040da14):
     * Function: FUN_0040da14
     *
     * Looking at this assembly:
     * 1. **What it does:** Takes param `a2`, loads int at offset 8, converts to float, divides by 10.0, squares the result, stores to `curcontext[2]` (offset 8), then calls a function via GP.
     * 2. **C pseudocode:**
     * ```c
     * void FUN_0040da14(void *a0, void *a1, int *a2) {
     * float val = (float)a2[2];        // load int at a2+8
     * val = val / 10.0f;               // 0x4024... = 10.0 in IEEE754
     * val = val * val;                 // square it
     * curcontext[2] = val;             // store to curcontext+8
     * some_gp_function();              // call at GP-31436
     * }
     * ```
     * Key observations:
     * - `0x40240000` in `$f11` paired with zero in `$f10` = double 10.0
     * - GP-30340 resolves to `curcontext` pointer
     * - GP-31436 is likely a redraw/update function
     * - The division converts an integer pixel/unit count to a normalized scale factor, then squares it (possibly for area or intensity calculation)
     */
halt_baddata();
}
