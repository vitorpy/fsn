/**
 * FUN_0041ec98
 *
 * Extracted from fsn.c lines 59671-59684
 * Ghidra address: 0x0041ec98
 * Category: Other
 */

void FUN_0041ec98(void)

{
  FUN_0041eaf8(topdir);
  FUN_0041dba0();
  FUN_0041c3e4();
  update_display();
  redraw_gl_scene();
  FUN_0042a8e4();
  XtSetSensitive(menu_process_deletes,0);
  XtSetSensitive(menu_undo_deletes,0);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041ec98):
     * Function: FUN_0041ec98
     *
     * Looking at this assembly with GP offset resolution:
     * **1. What it does:**
     * Calls `popmatrix()`, then `frontbuffer(1)`, then calls a function (likely `XtSetSensitive`) twice with two different widget offsets from a global structure (offsets 0x6b8c and 0x6b90), passing 0 (False) as the second argument.
     * **2. C pseudocode:**
     * ```c
     * popmatrix();
     * frontbuffer(1);
     * XtSetSensitive(curcontextwindows[0x6b8c/4], False);  // or byte offset 27532
     * XtSetSensitive(curcontextwindows[0x6b90/4], False);  // or byte offset 27536
     * ```
     * **GP offset mapping (from your GP_MAPPING.md patterns):**
     * - -31436 (0x8534) → `popmatrix`
     * - -30848 (0x8780) → `frontbuffer`
     * - -32660 (0x806c) → `curcontextwindows` (or similar global widget array)
     * - -31976 (0x8318) → `XtSetSensitive`
     * The two widget offsets 27532 (0x6b8c) and 27536 (0x6b90) are consecutive 4-byte entries, likely control widgets being disabled after some operation completes.
     */
halt_baddata();
}
