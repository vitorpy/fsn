/**
 * FUN_00411114
 *
 * Extracted from fsn.c lines 52220-52227
 * Ghidra address: 0x00411114
 * Category: Other
 */

void FUN_00411114(undefined4 param_1,undefined4 param_2)

{
  set_gl_context(param_1,0);
  FUN_0040f080(param_2,&DAT_1001662c,&DAT_10016630);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00411114):
     * Function: FUN_00411114
     *
     * Looking at this assembly:
     * **1. What it does:**
     * Calls a function at GP-30856 with (a0, 0), then calls a function at (GP-32744 - 3968) with (original_a1, GP-32660+26156, GP-32660+26160). This is a wrapper that first does something with a0, then calls another function with string arguments from .rodata.
     * **2. C pseudocode:**
     * ```c
     * void FUN_00411114(void *a0, char *a1, char *a2, void *a3) {
     * // GP-30856 (0x8778) = likely XtSetArg or similar setup
     * some_setup_func(a0, NULL);
     * // GP-32744 (0x8018) offset by -3968 = target function
     * // GP-32660 (0x806c) + 26156/26160 = string pointers in .rodata
     * // Likely XtVaSetValues or resource setting call
     * target_func(a1, rodata_string_1, rodata_string_2);
     * }
     * ```
     * To identify the actual functions, run:
     * ```
     * python3 analysis/resolve_got.py <<< "-30856
     * -32744
     * -32660"
     * ```
     * The pattern (setup + call with rodata strings) suggests this is an Xt/Motif resource configuration wrapper, possibly setting widget values with string resource names.
     */
halt_baddata();
}
