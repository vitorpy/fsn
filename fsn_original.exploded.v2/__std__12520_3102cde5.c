/**
 * __std__12520_3102cde5
 *
 * Extracted from fsn.c lines 72119-72125
 * Category: Other
 */

void __std__12520_3102cde5(void)

{
  FUN_00434f0c(&DAT_10016f50,2);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00433ed0):
     * Function: __std__12520_3102cde5
     *
     * Looking at this assembly:
     * 1. **What it does**: This is a C++ static destructor stub. It loads a string address from .rodata (gp-relative), loads the `atexit` or `__cxa_atexit` function pointer, then calls it with the string and argument 2. This registers a cleanup function to run at program exit.
     * 2. **C pseudocode**:
     * ```c
     * void __std__12520_3102cde5(void) {
     * __cxa_atexit(/* destructor_func */, &some_static_object, __dso_handle);
     * // or: atexit(cleanup_func);
     * }
     * ```
     * The `__std__` prefix and hex suffix are typical of compiler-generated static destructor registration functions in SGI's MIPSpro C++ compiler. The function at GOT offset -30624 is likely `atexit` or `__cxa_atexit`, and the data at -32660 + 28496 points to either a static object or its destructor. Argument `a1=2` suggests a priority or type flag.
     * **TL;DR**: Static destructor registration - safe to stub as empty `void __std__12520_3102cde5(void) { }` since we're not using C++ static objects.
     */
halt_baddata();
}
