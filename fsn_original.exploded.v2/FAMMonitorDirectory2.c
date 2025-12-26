/**
 * FAMMonitorDirectory2
 *
 * Extracted from fsn.c lines 77562-77568
 * Category: Filesystem
 */

void FAMMonitorDirectory2(void)

{
  FUN_00439c48();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00439fb8):
     * Function: FAMMonitorDirectory2
     *
     * ## Analysis
     * **What it does:**
     * Loads a3 = *a2 (dereferences 3rd argument), pushes 77 ('M') onto stack as 5th argument, then calls a GOT function (likely FAMMonitorDirectory or similar FAM function). Returns 0.
     * **C pseudocode:**
     * ```c
     * int FAMMonitorDirectory2(FAMConnection *fc, char *filename, FAMRequest *fr, void *userData) {
     * // Dereference userData to get actual pointer, add request code 'M' (77)
     * return _FAMMonitorDirectory_internal(fc, filename, fr, *userData, 'M');
     * // Note: function always returns 0 per assembly (move v0,zero)
     * }
     * ```
     * **Key observations:**
     * - GP offset -30492 (0x88e4) → resolves to a FAM library function
     * - The 'M' (77) is likely a FAM request type code for "Monitor"
     * - This is a thin wrapper that dereferences the 4th arg and adds a type code
     * - Unconditionally returns 0 regardless of callee result
     */
halt_baddata();
}
