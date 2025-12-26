/**
 * FUN_00411774
 *
 * Extracted from fsn.c lines 52368-52376
 * Ghidra address: 0x00411774
 * Category: Other
 */

void FUN_00411774(int param_1)

{
  if (((displayHeight != 0) && (displayHeight != 1)) && (displayHeight == 2)) {
    powf((float)param_1,DAT_100174f4);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00411774):
     * Function: FUN_00411774
     *
     * Looking at this assembly:
     * 1. **What it does:** Switch on argument `v0` (0, 1, or 2). Cases 0/1 convert integer `a0` to float. Case 2 calls a function (via GP offset -31588) with `(float)a0` and a float loaded from a global struct at offset 100.
     * 2. **C pseudocode:**
     * ```c
     * float FUN_00411774(int type, int value) {
     * switch (type) {
     * case 0:
     * return 0.0f;
     * case 1:
     * return (float)value;
     * case 2:
     * return some_func((float)value, some_global->field_100);
     * default:
     * return (float)value;
     * }
     * }
     * ```
     * The GP offsets need resolution: -31588 (0x849c) is likely `fmodf` or similar math function, and -30172 (0x8a24) points to a global struct (possibly `curcontext` or similar).
     */
halt_baddata();
}
