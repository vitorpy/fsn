/**
 * FUN_004342c4
 *
 * Extracted from fsn.c lines 72442-72459
 * Ghidra address: 0x004342c4
 * Category: Other
 */

void FUN_004342c4(undefined4 *param_1)

{
  int unaff_gp;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)/* TODO: GP:-0x7b5c */ (**(code **)(unaff_gp + -0x7b5c) /* -> EXTERNAL_0x0f8b5990 */)(0x18), param_1 != (undefined4 *)0x0)
     ) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004342c4):
     * Function: FUN_004342c4
     *
     * Looking at this assembly:
     * 1. **What it does:** This is a C++ constructor for `ByteCodeLoader`. If the `this` pointer (a0) is NULL, it allocates 24 bytes via `__nw__FUi` (operator new). Then it zeros out 6 fields (offsets 0, 4, 8, 12, 16, 20) of the 24-byte structure and returns the object pointer.
     * 2. **C pseudocode:**
     * ```c
     * ByteCodeLoader *ByteCodeLoader_ctor(ByteCodeLoader *this) {
     * if (this == NULL) {
     * this = (ByteCodeLoader *)operator_new(24);
     * if (this == NULL) goto done;
     * }
     * this->field_0 = 0;
     * this->field_4 = 0;
     * this->field_8 = 0;
     * this->field_c = 0;
     * this->field_14 = 0;  /* note: 20 before 16 in asm */
     * this->field_10 = 0;
     * done:
     * return this;
     * }
     * ```
     * The GP offset -31580 (0x84a4) resolves to `operator new`. The mangled name `__ct__14ByteCodeLoaderFv` confirms this is the default constructor for a 14-character class name "ByteCodeLoader" taking void parameters.
     */
halt_baddata();
}
