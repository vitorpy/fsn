/**
 * checkValidSelections
 *
 * Extracted from fsn.c lines 59281-59316
 * Category: Input
 */

void checkValidSelections(void)

{
  if ((curcontext->current_file /* was: *(int *)(curcontext + 0x48) */ != 0) && (-1 < *(int *)(curcontext->current_file /* was: *(int *)(curcontext + 0x48) */ + 0x28) << 5)
     ) {
    FUN_0041d920();
  }
  if ((curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */ != 0) && (-1 < *(int *)(curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */ + 0x74) << 3)
     ) {
    FUN_0041d54c();
  }
  if ((curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */ != 0) && (-1 < *(int *)(curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */ + 0x74) << 3)
     ) {
    reset_eye();
  }
  if (altcontext[0xc51] != '\0') {
    gl_swap_buffers(1);
    if ((curcontext->current_file /* was: *(int *)(curcontext + 0x48) */ != 0) &&
       (-1 < *(int *)(curcontext->current_file /* was: *(int *)(curcontext + 0x48) */ + 0x28) << 5)) {
      FUN_0041d920();
    }
    if ((curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */ != 0) &&
       (-1 < *(int *)(curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */ + 0x74) << 3)) {
      FUN_0041d54c();
    }
    if ((curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */ != 0) &&
       (-1 < *(int *)(curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */ + 0x74) << 3)) {
      reset_eye();
    }
    gl_swap_buffers(1);
  }
  FUN_0041c9e8();
  FUN_0041c3e4();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041db94):
     * Function: checkValidSelections
     *
     * **Refined answer for code comment:**
     * ```
     * Assembly 0x41dd80-0x41ddf4:
     * - Checks bit 28 of flags (t3<<3 sign test), conditionally calls one function
     * - Then calls setMoveAndCopyButtons(1), redrawSelectionNames(), and a static callback
     * - Standard function epilogue (restore ra, gp, return)
     * C equivalent:
     * if (!(flags & 0x10000000))
     * FUN_00418540();  // GP-31424, likely clear highlight
     * setMoveAndCopyButtons(1);
     * redrawSelectionNames();
     * (*static_callback)();  // GP-32740 + offset
     * return;
     * ```
     */
halt_baddata();
}
