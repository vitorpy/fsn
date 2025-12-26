/**
 * FUN_00420b70
 *
 * Extracted from fsn.c lines 60937-60950
 * Ghidra address: 0x00420b70
 * Category: Other
 */

void FUN_00420b70(void)

{
  int unaff_gp;
  
  if (*overviewActive /* was: *(char **)(unaff_gp + -0x76c4) */ /* -> overviewActive */ != '\0') {
    (**(code **)(unaff_gp + -0x799c) /* -> FUN_0041fdb0 */)() /* =FUN_0041fdb0 */;
    /* TODO: GP:-0x7cfc */ (**(code **)(unaff_gp + -0x7cfc) /* -> EXTERNAL_0x0f124670 */)(0);
    /* TODO: GP:-0x7cf8 */ (**(code **)(unaff_gp + -0x7cf8) /* -> EXTERNAL_0x0f128324 */)();
    (*(code *)(*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + 0xacc))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00420b70):
     * Function: FUN_00420b70
     *
     * Based on the analysis:
     * **Analysis of FUN_00420b70 (0x420b84-0x420bf8):**
     * 1. **What the assembly does:**
     * Calls 4 IrisGL functions in sequence: popmatrix(), setpattern(0), lsetdepth(), then an indirect call through a function pointer table at offset +0xacc (likely swapbuffers or similar end-of-frame call).
     * 2. **C pseudocode:**
     * ```c
     * void FUN_00420b70(void) {
     * popmatrix();           /* GP-0x799c (-31132) */
     * setpattern(0);         /* GP-0x7cfc (-31996), arg a0=0 */
     * lsetdepth();           /* GP-0x7cf8 (-31992) */
     * /* Indirect: *(GP-0x7fe4) + 0xacc - likely swapbuffers or gflush */
     * (*(void(**)(void))((*(int*)(gp - 0x7fe4)) + 0xacc))();
     * }
     * ```
     * The offset pattern (-31132 = popmatrix, -31996 = setpattern, -31992 = lsetdepth) matches IrisGL rendering teardown. The final indirect call through a vtable-like structure (+0xacc offset) is typical of SGI's GL context management - likely calls swapbuffers() to display the rendered frame.
     */
halt_baddata();
}
