/**
 * FUN_0042935c
 *
 * Extracted from fsn.c lines 65682-65702
 * Ghidra address: 0x0042935c
 * Category: Other
 */

void FUN_0042935c(void)

{
  int *piVar1;
  int iVar2;
  int unaff_gp;
  
  if (*(char *)(fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ + 1) != '\0') {
    piVar1 = (int *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x7988);
    *piVar1 = 3;
    do {
      (**(code **)(unaff_gp + -0x7acc) /* -> FUN_0040cad0 */)() /* =FUN_0040cad0 */;
      (**(code **)(unaff_gp + -0x7880) /* -> FUN_0042a8e4 */)() /* =FUN_0042a8e4 */;
      iVar2 = *piVar1;
      *piVar1 = iVar2 + -1;
    } while (-1 < iVar2 + -1);
    *piVar1 = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042935c):
     * Function: FUN_0042935c
     *
     * Looking at this assembly:
     * 1. **What it does:** Checks if a flag byte is non-zero; if so, loops 4 times (counter 3→0) calling two functions (likely IrisGL graphics functions via GP-relative calls), then clears the counter.
     * 2. **C pseudocode:**
     * ```c
     * void beamdown(char *param) {
     * if (param[1] == 0) return;
     * static int *counter = &DAT_10007988;  // gp-0x8068 + 0x7988
     * *counter = 3;
     * while (*counter >= 0) {
     * func_at_gp_8534();  // likely bgnline() or similar
     * func_at_gp_8780();  // likely endline() or similar
     * (*counter)--;
     * }
     * *counter = 0;
     * }
     * ```
     * GP offsets to resolve: -31436 (0x8534) and -30848 (0x8780) - check your GP_MAPPING.md for the actual IrisGL function names. The loop runs exactly 4 iterations (3,2,1,0 then exits when -1 < 0).
     */
halt_baddata();
}
