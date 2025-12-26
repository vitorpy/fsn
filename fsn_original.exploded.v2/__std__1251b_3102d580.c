/**
 * __std__1251b_3102d580
 *
 * Extracted from fsn.c lines 73677-73683
 * Category: Other
 */

void __std__1251b_3102d580(void)

{
  FUN_0043579c(&TheFileIconInterpreter,2);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00435704):
     * Function: __std__1251b_3102d580
     *
     * Looking at this assembly:
     * 1. **What it does:** Sets up GP, loads a function pointer from GOT offset -30568 (0x8898), loads a global pointer from GOT offset -30228 (0x89ec) as arg1, sets arg2=2, then calls the function.
     * 2. **C pseudocode:**
     * ```c
     * void __std__1251b_3102d580(void) {
     * some_function(global_ptr, 2);  // GOT[-30568](GOT[-30228], 2)
     * }
     * ```
     * To get the actual symbols, resolve these GP offsets:
     * - GP offset 0x8898 → function being called
     * - GP offset 0x89ec → first argument (a pointer)
     * Run: `python3 analysis/resolve_got.py` with offsets 0x8898 and 0x89ec to get the real names.
     * This looks like a C++ static destructor stub (the `__std__` prefix and simple wrapper pattern are typical of cfront-era C++ destructors calling a cleanup function with a constant mode/flag argument of 2).
     */
halt_baddata();
}
