/**
 * FUN_0040bfa0
 *
 * Extracted from fsn.c lines 50164-50174
 * Ghidra address: 0x0040bfa0
 * Category: Other
 */

void FUN_0040bfa0(void)

{
  int unaff_gp;
  
  /* TODO: GP:-0x7ca8 */ (**(code **)(unaff_gp + -0x7ca8) /* -> EXTERNAL_0x0f121378 */)
            ((int)*(short *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x10),0x3f800000,0x3d4ccccd,0x43fa0000
            );
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040bfa0):
     * Function: FUN_0040bfa0
     *
     * Looking at this assembly:
     * 1. **What it does:**
     * Loads curcontext pointer, gets int16 at offset 16 (likely a count/size), then calls a function with that value and three float constants: 0.05 (0x3D4CCCCD), 1.0 (0x3F800000), and 500.0 (0x43FA0000).
     * 2. **C pseudocode:**
     * ```c
     * void FUN_0040bfa0(void) {
     * short param = ((short *)curcontext)[8];  // offset 16 = index 8 for int16
     * some_function(param, 1.0f, 0.05f, 500.0f);  // GP offset -31912 (0x8358)
     * }
     * ```
     * GP offset resolution:
     * - `-30340 (0x897c)` → curcontext pointer
     * - `-31912 (0x8358)` → called function (check GP_MAPPING.md, likely a scaling/range setup function given the float args pattern: value, scale, min?, max?)
     * The float constants suggest this might be setting up some kind of normalized range or animation parameter - 0.05 as a step/rate, 1.0 as base, 500.0 as maximum.
     */
halt_baddata();
}
