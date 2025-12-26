/**
 * doneFam
 *
 * Extracted from fsn.c lines 55916-55922
 * Category: Other
 */

void doneFam(void)

{
  FUN_00417b88();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00418664):
     * Function: doneFam
     *
     * Looking at this assembly:
     * 1. **What it does:** Sets up GP (global pointer), loads a function pointer from GP offset -31284 (0xFFFF85CC), calls that function with no arguments, then returns.
     * 2. **C pseudocode:**
     * ```c
     * void doneFam(void) {
     * endpicksession();  // GP offset -31284 = endpicksession (GL picking)
     * }
     * ```
     * To verify the GP offset target, check your GP_MAPPING.md or run:
     * ```bash
     * python3 analysis/resolve_got.py <<< "-31284"
     * ```
     * The function is a simple wrapper that calls `endpicksession()` - the IrisGL function that ends a picking/selection session. This makes sense given the "Fam" (family/file manager) context - it's cleaning up after pick operations on file objects.
     */
halt_baddata();
}
