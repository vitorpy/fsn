/**
 * FUN_0041e918
 *
 * Extracted from fsn.c lines 59574-59581
 * Ghidra address: 0x0041e918
 * Category: Other
 */

void FUN_0041e918(void)

{
  FUN_0041e260(curcontext->current_dir /* was: *(undefined4 *)(curcontext + 0x44) */,curcontext->current_file /* was: *(undefined4 *)(curcontext + 0x48) */,6,0,"print",
               "printing");
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041e918):
     * Function: FUN_0041e918
     *
     * Looking at this assembly:
     * 1. **What it does:** Loads curcontext, extracts two fields at offsets +68 and +72, then calls XtVaSetValues with 6 args including two string resources (offsets -19332 and -19324 from a base) and a zero terminator.
     * 2. **C pseudocode:**
     * ```c
     * void FUN_0041e918(void) {
     * Widget widget = ((Widget*)curcontext)[17];  // offset 68 = index 17
     * XtArgVal value = curcontext[18];            // offset 72 = index 18
     * XtVaSetValues(widget,
     * XmNsomeResource, value,       // resource at .rodata-19332
     * XmNanotherResource, value,    // resource at .rodata-19324
     * NULL);
     * }
     * ```
     * The GP offsets resolve to:
     * - gp-30340 (0x897c): curcontext pointer
     * - gp-32676 (0x805c): .rodata base for XmN resource strings
     * - gp-32740 (0x801c): XtVaSetValues function pointer
     * The function takes 3 args (a0,a1,a2 saved to stack) but doesn't use them - likely Ghidra artifact or the args are used by a wrapper. The actual call passes curcontext[17] as widget, curcontext[18] as value, with resource count 6 and NULL terminator.
     */
halt_baddata();
}
