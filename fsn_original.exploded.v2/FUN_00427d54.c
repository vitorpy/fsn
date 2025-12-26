/**
 * FUN_00427d54
 *
 * Extracted from fsn.c lines 64672-64686
 * Ghidra address: 0x00427d54
 * Category: Other
 */

void FUN_00427d54(void)

{
  int iVar1;
  
  if ((fsn_resources == '\0') && (iVar1 = FUN_00439bd8(&DAT_10016c70), iVar1 < 0)) {
    fprintf((FILE *)0xfb52904,
            "Could not run FAM.  This program requires FAM to be installed.\nYou may need to install eoe2.sw.envm to obtain FAM\n"
           );
                    // WARNING: Subroutine does not return
    exit(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00427d54):
     * Function: FUN_00427d54
     *
     * Looking at the assembly:
     * 1. **What it does:** Checks if a byte is zero; if zero, calls `access()` on a path. If access fails (returns < 0), calls `fprintf(stderr, ...)` then `exit(1)`.
     * 2. **C pseudocode:**
     * ```c
     * void dirfamInit(void) {
     * if (*some_flag_byte == 0) {
     * return;
     * }
     * if (access(some_path_string, F_OK) >= 0) {
     * return;
     * }
     * fprintf(stderr, error_message);
     * exit(1);
     * }
     * ```
     * The GP offsets decode to:
     * - `gp-32660` → string pointer (path at offset 27760)
     * - `gp-30500` → `access`
     * - `gp-32616` → `stderr`
     * - `gp-31752` → `fprintf`
     * - `gp-31840` → `exit`
     */
halt_baddata();
}
