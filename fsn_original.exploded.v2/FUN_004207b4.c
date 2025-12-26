/**
 * FUN_004207b4
 *
 * Extracted from fsn.c lines 60787-60803
 * Ghidra address: 0x004207b4
 * Category: Other
 */

void FUN_004207b4(void)

{
  int unaff_gp;
  
  if (*overviewActive /* was: *(char **)(unaff_gp + -0x76c4) */ /* -> overviewActive */ != '\0') {
    (**(code **)(unaff_gp + -0x79a0) /* -> FUN_0041fd70 */)() /* =FUN_0041fd70 */;
    /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x160));
    /* TODO: GP:-0x7cf8 */ (**(code **)(unaff_gp + -0x7cf8) /* -> EXTERNAL_0x0f128324 */)();
    if (*topdir /* was: *(int **)(unaff_gp + -0x76d4) */ /* -> topdir */ != 0) {
      (**(code **)(unaff_gp + -0x7990) /* -> FUN_00420408 */)(**(int **)(unaff_gp + -0x76d4) /* -> topdir */,0) /* =FUN_00420408 */;
    }
    /* TODO: GP:-0x7b54 */ (**(code **)(unaff_gp + -0x7b54) /* -> EXTERNAL_0x0f125eb8 */)();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004207b4):
     * Function: FUN_004207b4
     *
     * Looking at the GP-relative offsets and call pattern:
     * **1. What it does:**
     * Calls an unknown function at GP-0x8308, then loads a global pointer (GP-0x892c), dereferences it, and if non-NULL calls another function at GP-0x8670 with args (ptr, 0). Finally calls function at GP-0x84ac before returning.
     * **2. C pseudocode:**
     * ```c
     * void drawOverview_tail(void) {
     * func_8308();                          // GP-0x8308: unknown call
     * void *ptr = *global_892c;             // GP-0x892c: dereference global pointer
     * if (ptr != NULL) {
     * func_8670(ptr, 0);                // GP-0x8670: conditional call with (ptr, 0)
     * }
     * func_84ac();                          // GP-0x84ac: final call before return
     * }
     * ```
     * To resolve the actual function names, run:
     * ```
     * python3 analysis/resolve_got.py <<< "-0x8308
     * -0x892c
     * -0x8670
     * -0x84ac"
     * ```
     * This will map the GP offsets to their actual symbol names from the binary's GOT.
     */
halt_baddata();
}
