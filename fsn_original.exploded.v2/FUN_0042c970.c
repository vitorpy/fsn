/**
 * FUN_0042c970
 *
 * Extracted from fsn.c lines 67804-67825
 * Ghidra address: 0x0042c970
 * Category: Other
 */

void FUN_0042c970(uint param_1)

{
  if ((param_1 & 1) != 0) {
    update_display();
  }
  if ((param_1 & 4) != 0) {
    FUN_00428b6c();
  }
  if ((param_1 & 0x10) != 0) {
    set_main_gl_window();
    curcontext->fov /* was: *(short *)(curcontext + 0x10) */ = (short)DAT_100174e0;
    FUN_0040bfa0();
  }
  if ((param_1 & 2) != 0) {
    redraw_gl_scene();
    FUN_0042a8e4();
    FUN_004207b4();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042c970):
     * Function: FUN_0042c970
     *
     * Looking at this assembly:
     * 1. **What it does:** Checks if bit 1 (0x2) is set in a flag variable at sp+32. If set, calls three functions via GP-indirect calls (offsets -31436, -30848, -31116) before returning. If not set, skips directly to return.
     * 2. **C pseudocode:**
     * ```c
     * int flags = *(int*)(sp + 32);  // local variable or parameter
     * if (flags & 0x2) {
     * func_gp_8534();   // GP offset -31436 (0x8534)
     * func_gp_8780();   // GP offset -30848 (0x8780)
     * func_gp_8674();   // GP offset -31116 (0x8674)
     * }
     * return;
     * ```
     * To identify the actual functions, resolve those GP offsets:
     * ```bash
     * python3 analysis/resolve_got.py <<< $'-31436\n-30848\n-31116'
     * ```
     * Or check `fsn_original.exploded.cleanup/GP_MAPPING.md` for the symbol names at those offsets.
     */
halt_baddata();
}
