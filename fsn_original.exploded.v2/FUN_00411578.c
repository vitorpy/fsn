/**
 * FUN_00411578
 *
 * Extracted from fsn.c lines 52308-52316
 * Ghidra address: 0x00411578
 * Category: Other
 */

void FUN_00411578(void)

{
  XtUnmanageChild(*(undefined4 *)(altcontextwindows + 0xc));
  XtUnmanageChild(*(undefined4 *)(curcontextwindows + 0x24));
  altcontext[0xc51] = 0;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00411578):
     * Function: FUN_00411578
     *
     * Looking at the GP offsets and structure:
     * **What it does:**
     * 1. Calls a function (at GP-31600) with argument from `curcontext[3]` (offset 12)
     * 2. Calls the same function with argument from `topdir[9]` (offset 36)
     * 3. Sets byte at offset 0xC51 (3153) in a global structure to 0
     * **GP offset resolution:**
     * - GP-30328 (0x8988) = curcontext
     * - GP-30332 (0x8984) = topdir
     * - GP-30336 (0x8980) = likely another global struct pointer
     * - GP-31600 (0x8490) = function pointer (probably XtUnmanageChild or similar widget function)
     * **C pseudocode:**
     * ```c
     * void FUN_00411578(void) {
     * Widget w1 = ((Widget *)curcontext)[3];  // offset 12 / 4
     * XtUnmanageChild(w1);
     * DirNode *top = topdir;
     * Widget w2 = ((Widget *)top)[9];  // offset 36 / 4
     * XtUnmanageChild(w2);
     * ((char *)some_global)[0xC51] = 0;
     * }
     * ```
     * This appears to be a cleanup/hide function - unmanages two widgets (one from current context, one from top directory node) and clears a flag byte. The 0xC51 offset suggests a large state structure, possibly clearing a visibility or active flag.
     */
halt_baddata();
}
