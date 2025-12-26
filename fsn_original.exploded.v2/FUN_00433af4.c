/**
 * FUN_00433af4
 *
 * Extracted from fsn.c lines 71895-71903
 * Ghidra address: 0x00433af4
 * Category: Other
 */

void FUN_00433af4(undefined4 param_1)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x77b4) /* -> FUN_00434324 */)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6f50,param_1) /* =FUN_00434324 */;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00433af4):
     * Function: FUN_00433af4
     *
     * Looking at this assembly:
     * 1. **What it does:** Loads a string from .rodata (gp-32660 + 28496), passes it along with the function argument to a function loaded via GOT (gp-30644). This is a simple wrapper that calls another function with a format string or resource name prefix.
     * 2. **C pseudocode:**
     * ```c
     * void FUN_00433af4(char *arg) {
     * some_function(rodata_string + 28496, arg);  // likely XtVaGetValues or similar Xt call
     * }
     * ```
     * Based on the symbol hint `cIconInit` in the branch target, this is likely an icon initialization helper that passes a resource string (like "iconName" or similar X resource) along with the provided argument to an Xt/Motif function. The GP offsets would resolve to something like `XtVaSetValues(widget, "resourceName", arg, NULL)` or a string formatting function.
     */
halt_baddata();
}
