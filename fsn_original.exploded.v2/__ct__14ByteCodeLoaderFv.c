/**
 * __ct__14ByteCodeLoaderFv
 *
 * Extracted from fsn.c lines 72422-72436
 * Category: Other
 */

void __ct__14ByteCodeLoaderFv(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)__nw__FUi(0x18), param_1 != (undefined4 *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004342b8):
     * Function: __ct__14ByteCodeLoaderFv
     *
     * ## Analysis
     * **What it does:**
     * C++ constructor for ByteCodeLoader class. If `this` (a0) is NULL, allocates 24 bytes via malloc (GP offset -31580). Then zero-initializes 6 fields at offsets 0, 4, 8, 12, 16, 20. Returns the object pointer.
     * **C pseudocode:**
     * ```c
     * ByteCodeLoader* ByteCodeLoader_ctor(ByteCodeLoader* this) {
     * if (this == NULL) {
     * this = (ByteCodeLoader*)malloc(24);
     * if (this == NULL) return NULL;
     * }
     * this->field_0x00 = 0;
     * this->field_0x04 = 0;
     * this->field_0x08 = 0;
     * this->field_0x0c = 0;
     * this->field_0x14 = 0;  // note: 0x14 before 0x10
     * this->field_0x10 = 0;
     * return this;
     * }
     * ```
     * Note: The store order (0x14 then 0x10) is unusual but matches assembly exactly - likely compiler scheduling optimization.
     */
halt_baddata();
}
