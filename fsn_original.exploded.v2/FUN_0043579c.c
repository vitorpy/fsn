/**
 * FUN_0043579c
 *
 * Extracted from fsn.c lines 73737-73747
 * Ghidra address: 0x0043579c
 * Category: Other
 */

void FUN_0043579c(int param_1,uint param_2)

{
  int unaff_gp;
  
  if ((param_1 != 0) && ((param_2 & 1) != 0)) {
    /* TODO: GP:-0x7b34 */ (**(code **)(unaff_gp + -0x7b34) /* -> EXTERNAL_0x0f8b5a50 */)();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043579c):
     * Function: FUN_0043579c
     *
     * Looking at this assembly:
     * 1. **What it does:** This is a C++ destructor for `FileIconInterpreter` class. It checks if `this` (a0) is non-null, then if bit 0 of the second argument (a1) is set, calls `operator delete` (via GP offset -31540/0x84cc) to free the object.
     * 2. **C pseudocode:**
     * ```c
     * void FileIconInterpreter_destructor(void *this, int flags) {
     * if (this == NULL) return;
     * if (flags & 1) {
     * operator_delete(this);  // GP[-31540] = delete
     * }
     * }
     * ```
     * The `flags & 1` pattern is standard SGI C++ ABI - bit 0 indicates "also deallocate memory" vs just running destructor logic. The function name from symbols confirms this: `__dt__19FileIconInterpreterFv` = destructor for FileIconInterpreter.
     */
halt_baddata();
}
