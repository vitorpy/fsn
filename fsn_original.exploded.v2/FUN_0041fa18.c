/**
 * FUN_0041fa18
 *
 * Extracted from fsn.c lines 60068-60083
 * Ghidra address: 0x0041fa18
 * Category: Filesystem
 */

void FUN_0041fa18(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  drawing_active_flag = 1;
  if (topdir != 0) {
    gl_push_state();
    set_gl_context(param_2,1);
    uVar1 = XmTextFieldGetString(param_1);
    FUN_00429bc8(uVar1);
    gl_pop_state();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041fa18):
     * Function: FUN_0041fa18
     *
     * Looking at the GP offsets and call sequence:
     * **1. What it does:**
     * Calls 4 functions via GP-relative addressing: first with args (sp+36, 1), then chains: call2(sp+32) → call3(result) → call4(). Standard MIPS PIC epilogue follows.
     * **2. C pseudocode:**
     * ```c
     * // GP offsets need resolution from GP_MAPPING.md, but pattern is:
     * func1(local_var1, 1);           // gp-30856 with (sp+36, 1)
     * temp = func2(local_var2);       // gp-32252 with (sp+32)
     * func3(temp);                    // gp-30884 with v0 from previous
     * func4();                        // gp-30860, no args
     * return;
     * ```
     * To get actual function names, resolve these GP offsets:
     * - gp-30856 (0x8778)
     * - gp-32252 (0x8204)
     * - gp-30884 (0x875c)
     * - gp-30860 (0x8774)
     * Run: `python3 analysis/resolve_got.py` with offsets 0x8778, 0x8204, 0x875c, 0x8774 to identify the actual libc/Motif/GL calls.
     */
halt_baddata();
}
