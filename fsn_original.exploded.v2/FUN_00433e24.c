/**
 * FUN_00433e24
 *
 * Extracted from fsn.c lines 72092-72101
 * Ghidra address: 0x00433e24
 * Category: Other
 */

void FUN_00433e24(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7798) /* -> setState__13ByteCodedIconFiN41 */)(param_1,param_2,param_3,param_4,param_5,param_6) /* =setState__13ByteCodedIconFiN41 */;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00433e24):
     * Function: FUN_00433e24
     *
     * ## Analysis of FUN_00433e24 (at cSetState+0x18)
     * **What it does:**
     * This is a wrapper/trampoline function that takes 6 arguments (4 in registers a0-a3, 2 on stack at sp+56 and sp+60), then calls another function via GP indirect call at offset -30616 (0x8868), passing all 6 arguments through unchanged.
     * **C pseudocode:**
     * ```c
     * void FUN_00433e24(int a0, int a1, int a2, int a3, int arg5, int arg6) {
     * // GP offset -30616 (0x8868) -> need to resolve actual function
     * return indirect_call_gp_8868(a0, a1, a2, a3, arg5, arg6);
     * }
     * ```
     * **GP offset resolution:**
     * To find what function is at GP offset -30616:
     * ```bash
     * python3 analysis/resolve_got.py 0x8868
     * ```
     * This is a simple pass-through wrapper - likely a compatibility shim or indirect call stub that Ghidra failed to inline/decompile properly. The `halt_baddata` probably triggered because Ghidra couldn't resolve the indirect call target statically.
     */
halt_baddata();
}
