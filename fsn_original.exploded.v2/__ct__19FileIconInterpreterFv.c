/**
 * __ct__19FileIconInterpreterFv
 *
 * Extracted from fsn.c lines 73689-73699
 * Category: Filesystem
 */

void __ct__19FileIconInterpreterFv(int param_1)

{
  if ((param_1 != 0) || (param_1 = __nw__FUi(0x2d0), param_1 != 0)) {
    *(undefined4 *)(param_1 + 0x220) = 0;
    *(undefined4 *)(param_1 + 0x228) = 0;
    *(undefined4 *)(param_1 + 0x22c) = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043573c):
     * Function: __ct__19FileIconInterpreterFv
     *
     * ## Analysis
     * **1. What it does:**
     * Constructor for FileIconInterpreter class (720 bytes). If `this` is NULL, allocates memory via `operator new`. Initializes three fields at offsets +544, +552, +556 to zero. Returns `this` pointer.
     * **2. C pseudocode:**
     * ```c
     * FileIconInterpreter* FileIconInterpreter_ctor(FileIconInterpreter* this) {
     * if (this == NULL) {
     * this = (FileIconInterpreter*)malloc(720);  // operator new(720)
     * if (this == NULL) {
     * return NULL;
     * }
     * }
     * this->field_544 = 0;  // offset 0x220
     * this->field_552 = 0;  // offset 0x228
     * this->field_556 = 0;  // offset 0x22c
     * return this;
     * }
     * ```
     * **GP offset resolution:** `-31580(gp)` at 0x435758 = `operator new` (memory allocation, size 720 = 0x2d0 bytes for FileIconInterpreter object)
     */
halt_baddata();
}
