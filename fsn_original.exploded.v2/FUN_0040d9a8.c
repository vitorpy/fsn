/**
 * FUN_0040d9a8
 *
 * Extracted from fsn.c lines 50749-50757
 * Ghidra address: 0x0040d9a8
 * Category: Other
 */

void FUN_0040d9a8(undefined4 param_1,undefined4 param_2,int param_3)

{
  curcontext->rotation_x /* was: *(short *)(curcontext + 0xe) */ = (short)*(undefined4 *)(param_3 + 8);
  FUN_0040c0cc();
  redraw_gl_scene();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040d9a8):
     * Function: FUN_0040d9a8
     *
     * Looking at the assembly:
     * 1. **What it does:** Reads a value from offset 8 of param3 (a2), stores it as a short at offset 14 of a global pointer (curcontext), then calls two functions in sequence (likely redraw-related functions based on GP offsets -31444 and -31436).
     * 2. **C pseudocode:**
     * ```c
     * void FUN_0040d9a8(void *param1, void *param2, void *param3) {
     * int value = *(int *)((char *)param3 + 8);
     * *(short *)((char *)curcontext + 14) = (short)value;
     * /* GP offset -31444 = 0x852c */ some_redraw_func1();
     * /* GP offset -31436 = 0x8534 */ some_redraw_func2();
     * }
     * ```
     * To identify the actual functions, resolve GP offsets:
     * - GP base would be ~0x10017730 (typical for FSN)
     * - Offset -31444 (0x852c): 0x10017730 - 0x7AD4 = check your GP_MAPPING.md
     * - Offset -31436 (0x8534): similar calculation
     * The curcontext+14 offset likely corresponds to a short field in the context structure (possibly a flag or small counter that triggers redraws).
     */
halt_baddata();
}
