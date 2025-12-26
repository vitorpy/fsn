/**
 * __sti__12520_3102cde5
 *
 * Extracted from fsn.c lines 72107-72113
 * Category: Other
 */

void __sti__12520_3102cde5(void)

{
  FUN_004342c4(&DAT_10016f50);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00433e88):
     * Function: __sti__12520_3102cde5
     *
     * ## Analysis
     * **1. What it does:**
     * This is a C++ static initializer function (the `__sti__` prefix is SGI's convention for "static initializer"). It loads a string pointer from GOT, adds offset 28496 (0x6f50) to get a specific string address, then calls a function through GOT offset -30648 (likely a registration or initialization function like `atexit` or a C++ stream initializer).
     * **2. C pseudocode:**
     * ```c
     * // Static initializer - called before main()
     * void __sti__12520_3102cde5(void) {
     * // GP offsets:
     * // -32660 (0x806c) -> base pointer (likely __dso_handle or string table base)
     * // -30648 (0x8848) -> function pointer (likely __cxa_atexit or iostream init)
     * char *str_base = *(char **)GOT[-32660];
     * void (*init_func)(char *) = GOT[-30648];
     * init_func(str_base + 28496);  // Register string at offset 0x6f50
     * }
     * ```
     * **For code comment:**
     * ```c
     * // __sti__12520_3102cde5: C++ static initializer (SGI convention)
     * // Calls init function at GOT[-30648] with string pointer (GOT[-32660] + 0x6f50)
     * // Likely iostream initialization or atexit registration - safe to stub as no-op
     * ```
     * This function is part of SGI's C++ runtime initialization and can be safely ignored for the restoration - it was likely initializing C++ iostream or similar runtime features that aren't needed in the C port.
     */
halt_baddata();
}
