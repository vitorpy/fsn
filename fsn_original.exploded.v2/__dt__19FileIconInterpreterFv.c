/**
 * __dt__19FileIconInterpreterFv
 *
 * Extracted from fsn.c lines 73723-73731
 * Category: Filesystem
 */

void __dt__19FileIconInterpreterFv(int param_1,uint param_2)

{
  if ((param_1 != 0) && ((param_2 & 1) != 0)) {
    __dl__FPv();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00435790):
     * Function: __dt__19FileIconInterpreterFv
     *
     * ## Analysis
     * **What it does:**
     * This is a C++ destructor for `FileIconInterpreter`. It checks if `this` (a0) is non-null, then if bit 0 of the second parameter (a1) is set, it calls `operator delete` via GP offset -31540 (0x84cc) to free the object.
     * **C pseudocode:**
     * ```c
     * void FileIconInterpreter_destructor(FileIconInterpreter *this, int flags) {
     * if (this == NULL) return;
     * if (flags & 1) {
     * operator_delete(this);  // GP[-31540] = __builtin_delete
     * }
     * }
     * ```
     * **Notes:**
     * - The `flags & 1` pattern is standard SGI C++ ABI for destructors - bit 0 indicates whether to deallocate memory
     * - GP offset 0x84cc (-31540) points to `__builtin_delete` or similar deallocation function
     * - This is a "deleting destructor" variant - the base destructor body appears empty (no member cleanup)
     */
halt_baddata();
}
