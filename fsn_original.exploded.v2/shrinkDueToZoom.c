/**
 * shrinkDueToZoom
 *
 * Extracted from fsn.c lines 51860-51866
 * Category: Other
 */

void shrinkDueToZoom(void)

{
  FUN_0040f150(FUN_00410858,0);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004108ac):
     * Function: shrinkDueToZoom
     *
     * Now I have full context. Here's the concise analysis:
     * ---
     * **shrinkDueToZoom (0x004108ac - 0x004108ec)**
     * **What it does:**
     * Registers an Xt work procedure callback. Calls `FUN_0040f150` (a work proc manager) with `FUN_00410858` as the callback and 0 (NULL) as client data. The work proc will trigger a GL scene redraw.
     * **Corrected C code:**
     * ```c
     * void shrinkDueToZoom(void)
     * {
     * // FUN_0040f150 = setWorkProc: removes existing work proc, adds new one
     * // FUN_00410858 = shrinkZoomWorkProc: sets curcontext[0xc50]=1, calls redraw_gl_scene()
     * setWorkProc(shrinkZoomWorkProc, NULL);
     * }
     * ```
     * **Assembly breakdown:**
     * - `lw t9,-32744(gp)` / `lw a0,-32744(gp)` - Load GOT base twice
     * - `addiu t9,t9,-3760` - t9 = FUN_0040f150 (setWorkProc)
     * - `addiu a0,a0,2136` - a0 = FUN_00410858 (callback function address)
     * - `move a1,zero` - a1 = 0 (NULL client data)
     * - `jalr t9` - Call setWorkProc(callback, NULL)
     * The `halt_baddata()` in Ghidra is spurious - the assembly shows a clean function epilogue (restore ra/gp, jr ra).
     */
halt_baddata();
}
