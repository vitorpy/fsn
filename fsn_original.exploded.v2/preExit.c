/**
 * preExit
 *
 * Extracted from fsn.c lines 56103-56113
 * Category: Other
 */

void preExit(void)

{
  if (fsn_resources == '\0') {
    FUN_0042fb84(toplevel);
    FUN_00427de0();
    FUN_00414da4();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00418920):
     * Function: preExit
     *
     * Looking at the GP offsets and call pattern:
     * **1. What it does:**
     * Checks a global flag byte. If zero, calls three cleanup functions in sequence: likely XtDestroyApplicationContext(app_context), then two other cleanup routines (one appears to be at a computed address with +19876 offset, possibly an atexit handler or library cleanup).
     * **2. C pseudocode:**
     * ```c
     * void preExit(void)
     * {
     * /* GP-0x75dc (-30172) = exit_flag or similar */
     * if (*exit_flag_ptr == 0) {
     * /* GP-0x75f0 (-30192) = app_context ptr */
     * /* GP-0x7818 (-30744) = XtDestroyApplicationContext */
     * XtDestroyApplicationContext(app_context);
     * /* GP-0x78f0 (-30960) = second cleanup func */
     * cleanup_func2();
     * /* GP-0x7fe8 (-32744) + 0x4da4 = computed address */
     * /* This is likely __cleanup or _exithandle from libc */
     * (*libc_cleanup_ptr)();
     * }
     * }
     * ```
     * The +19876 (0x4da4) offset addition suggests this is calling into a library function via a base pointer, common pattern for IRIX shared library calls. The three-function sequence (destroy app context, cleanup, libc exit handler) is typical shutdown code.
     */
halt_baddata();
}
