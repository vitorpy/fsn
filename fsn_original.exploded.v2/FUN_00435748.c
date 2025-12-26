/**
 * FUN_00435748
 *
 * Extracted from fsn.c lines 73705-73717
 * Ghidra address: 0x00435748
 * Category: Other
 */

void FUN_00435748(int param_1)

{
  int unaff_gp;
  
  if ((param_1 != 0) || (param_1 = /* TODO: GP:-0x7b5c */ (**(code **)(unaff_gp + -0x7b5c) /* -> EXTERNAL_0x0f8b5990 */)(0x2d0), param_1 != 0)) {
    *(undefined4 *)(param_1 + 0x220) = 0;
    *(undefined4 *)(param_1 + 0x228) = 0;
    *(undefined4 *)(param_1 + 0x22c) = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00435748):
     * Function: FUN_00435748
     *
     * Looking at the assembly:
     * 1. **What it does:** This is a C++ constructor for FileIconInterpreter. If passed NULL, allocates 720 bytes via malloc (GP offset -31580). Then initializes three fields at offsets 544, 552, and 556 to zero. Returns the object pointer.
     * 2. **C pseudocode:**
     * ```c
     * FileIconInterpreter *FileIconInterpreter_ctor(FileIconInterpreter *this) {
     * if (this == NULL) {
     * this = (FileIconInterpreter *)malloc(720);
     * if (this == NULL)
     * return NULL;
     * }
     * this->field_544 = 0;
     * this->field_552 = 0;
     * this->field_556 = 0;
     * return this;
     * }
     * ```
     * The mangled name `__ct__19FileIconInterpreterFv` confirms this is a default constructor (Fv = void args). The "placement new" pattern (if this==NULL, allocate) was common in old C++ implementations.
     */
halt_baddata();
}
