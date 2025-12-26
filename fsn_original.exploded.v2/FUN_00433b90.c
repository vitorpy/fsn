/**
 * FUN_00433b90
 *
 * Extracted from fsn.c lines 71947-71955
 * Ghidra address: 0x00433b90
 * Category: Other
 */

void FUN_00433b90(undefined4 param_1)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x77b0) /* -> FUN_004349f8 */)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6f50,param_1) /* =FUN_004349f8 */;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00433b90):
     * Function: FUN_00433b90
     *
     * Looking at this assembly:
     * 1. **What it does**: Loads a string pointer from GOT (-32660(gp) → rodata base, +28496 offset), loads a function pointer from GOT (-30640(gp)), then calls that function with the string and the original argument (a0→a1).
     * 2. **C pseudocode**:
     * ```c
     * // FUN_00433b90 - wrapper that calls string lookup function
     * // GP offset -32660 (0x806c) = rodata base, +0x6f50 = string at 0x4426f0
     * // GP offset -30640 (0x8850) = likely XmGetPixmap or similar
     * void* FUN_00433b90(int type) {
     * return some_lookup_func(rodata_string, type);
     * }
     * ```
     * The function name `cFindIconByType` (from the symbol hint in the branch target) suggests this finds an icon resource by type ID, passing a format string or resource path as the first argument.
     */
halt_baddata();
}
