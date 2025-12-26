/**
 * FUN_00415550
 *
 * Extracted from fsn.c lines 54267-54276
 * Ghidra address: 0x00415550
 * Category: Other
 */

void FUN_00415550(void)

{
  int unaff_gp;
  
  /* TODO: GP:-0x7e94 */ (**(code **)(unaff_gp + -0x7e94) /* -> EXTERNAL_0x0f677aac */)
            (**(undefined4 **)(unaff_gp + -0x7600) /* -> app_context */,900000,*(undefined4 *)(unaff_gp + -0x7a4c) /* -> databaseDumpTimeout */,0);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00415550):
     * Function: FUN_00415550
     *
     * Looking at this MIPS assembly:
     * **1. What it does:**
     * Calls a function (via GP offset -32404/0x816c) with 4 arguments: a dereferenced global pointer, the constant 0xDBBA0 (900000 decimal), another global, and zero.
     * **2. C pseudocode:**
     * ```c
     * void FUN_00415550(void) {
     * // GP offsets: -30208=0x8a00, -32404=0x816c, -31308=0x85b4
     * Widget shell = *(Widget *)DAT_xxxxx;  // gp-0x8a00, dereferenced
     * func_at_gp_816c(shell, 0xDBBA0, global_at_gp_85b4, 0);
     * }
     * ```
     * To identify the actual function and globals, run:
     * ```bash
     * python3 analysis/resolve_got.py <<< "-30208
     * -32404
     * -31308"
     * ```
     * The constant 0xDBBA0 = 900000 looks like a timeout value in milliseconds (15 minutes), suggesting this might be `XtAppAddTimeOut()` or similar timer registration.
     */
halt_baddata();
}
