/**
 * FUN_0041fb20
 *
 * Extracted from fsn.c lines 60102-60115
 * Ghidra address: 0x0041fb20
 * Category: Other
 */

void FUN_0041fb20(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (drawing_active_flag != '\0') {
    set_gl_context(param_2);
    DAT_10006e24 = 1;
    uVar1 = XmTextFieldGetString(param_1);
    FUN_00429bc8(uVar1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041fb20):
     * Function: FUN_0041fb20
     *
     * Looking at the assembly and resolving the GP offsets:
     * **What it does:**
     * Checks a global flag (at gp-base + 0x6bc8). If set: calls free() on arg2 (a1), sets another flag to 1, calls a function on arg1 (a0), then calls free() on that result.
     * **C pseudocode:**
     * ```c
     * void FUN_0041fb20(void *a0, void *a1, void *a2) {
     * if (g_cleanup_enabled != 0) {   // DAT at offset 0x6bc8
     * free(a1);
     * g_cleanup_in_progress = 1;  // DAT at offset 0x6e24
     * void *result = some_func(a0);  // GP-0x8204
     * free(result);
     * }
     * }
     * ```
     * **GP offset resolution:**
     * - `lw t9,-30856(gp)` → 0x8778 → likely `free`
     * - `lw t9,-32252(gp)` → 0x8204 → unknown function (returns pointer to free)
     * - `lw t9,-30884(gp)` → 0x875c → likely `free` again
     * - Flag check at `t6+0x6bc8`, flag set at `at+0x6e24`
     * This appears to be a cleanup/destructor helper that conditionally frees resources associated with some object.
     */
halt_baddata();
}
