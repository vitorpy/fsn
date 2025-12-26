/**
 * FUN_0040cf50
 *
 * Extracted from fsn.c lines 50493-50503
 * Ghidra address: 0x0040cf50
 * Category: Other
 */

void FUN_0040cf50(void)

{
  int unaff_gp;
  
  if (*(char *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */ + 0x6688) != '\0') {
    (**(code **)(unaff_gp + -0x7acc) /* -> FUN_0040cad0 */)() /* =FUN_0040cad0 */;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040cf50):
     * Function: FUN_0040cf50
     *
     * Looking at this assembly:
     * 1. **What it does:** Loads a global pointer, checks a byte flag at offset 0x6688 from that pointer. If non-zero, calls a function via GP-relative indirect call. Then returns.
     * 2. **C pseudocode:**
     * ```c
     * void checkRedrawScene(void) {
     * // GP offset -32660 (0x806c) = curcontext
     * // GP offset -31436 (0x8534) = redraw_gl_scene
     * if (curcontext->needs_redraw) {  // offset 0x6688 = byte flag
     * redraw_gl_scene();
     * }
     * }
     * ```
     * The key offsets:
     * - `gp-32660` → likely `curcontext` pointer
     * - Byte at `curcontext+0x6688` → redraw needed flag
     * - `gp-31436` → function pointer to `redraw_gl_scene`
     */
halt_baddata();
}
