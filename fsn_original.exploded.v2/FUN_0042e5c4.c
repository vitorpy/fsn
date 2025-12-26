/**
 * FUN_0042e5c4
 *
 * Extracted from fsn.c lines 68766-68779
 * Ghidra address: 0x0042e5c4
 * Category: Other
 */

void FUN_0042e5c4(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7840) /* -> FUN_0042e3bc */)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6e50) /* =FUN_0042e3bc */;
  if (*(char *)(*altcontext /* was: *(int **)(unaff_gp + -0x7680) */ /* -> altcontext */ + 0xc51) != '\0') {
    (**(code **)(unaff_gp + -0x7894) /* -> FUN_0042a788 */)(1) /* =FUN_0042a788 */;
    (**(code **)(unaff_gp + -0x7840) /* -> FUN_0042e3bc */)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6e88) /* =FUN_0042e3bc */;
    (**(code **)(unaff_gp + -0x7894) /* -> FUN_0042a788 */)(1) /* =FUN_0042a788 */;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042e5c4):
     * Function: FUN_0042e5c4
     *
     * Looking at this assembly with GP offset resolution:
     * **1. What it does:**
     * Loads a pointer from t6, checks byte at offset 0xC51 (3153). If non-zero, calls a function twice with arg=1 (likely `swapbuffers` at GP-30868), and calls another function (GP-30784, likely `XFlush` or similar) with a string at offset 28296 from a base pointer.
     * **2. C pseudocode:**
     * ```c
     * // t6 contains a pointer (likely curcontext or similar)
     * void *ptr = *(void **)t6;
     * if (((unsigned char *)ptr)[0xC51] != 0) {
     * swapbuffers(1);           // GP-30868 = swapbuffers
     * some_flush(base + 28296); // GP-30784, string param
     * swapbuffers(1);           // called again
     * }
     * // function epilogue: restore ra, sp += 32, return
     * ```
     * The pattern of swapbuffers(1) -> flush -> swapbuffers(1) suggests this is ensuring a display update is visible - possibly part of restorePositions forcing a redraw to show restored state. The byte at offset 0xC51 is likely a "needs_redraw" or "is_visible" flag in the context structure.
     */
halt_baddata();
}
