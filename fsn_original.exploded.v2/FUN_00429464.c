/**
 * FUN_00429464
 *
 * Extracted from fsn.c lines 65728-65739
 * Ghidra address: 0x00429464
 * Category: Other
 */

void FUN_00429464(void)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = blankXmString;
  local_8 = 0xe3f40b5;
  XtSetValues(*(undefined4 *)(curcontextwindows + 0x2c),&local_8,1);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00429464):
     * Function: FUN_00429464
     *
     * Looking at the GP offsets and call pattern:
     * **1. What it does:**
     * Loads a format string (offset 7501 into .rodata), gets a value from a context structure at offset 44, and calls XtVaSetValues to set a widget's XmNlabelString resource.
     * **2. C pseudocode:**
     * ```c
     * void FUN_00429464(void) {
     * Widget widget = ((Widget *)curcontext)[11];  // offset 44 = index 11 (locateHighlightName)
     * XmString label = XmStringCreateLocalized("");  // or the string at rodata+7501
     * Arg args[1];
     * XtSetArg(args[0], XmNlabelString, label);
     * XtSetValues(widget, args, 1);
     * }
     * ```
     * More likely this is `clear_highlight_label()` or similar - it sets the locateHighlightName widget's label. The `addiu t6,t6,7501` loads a string constant (likely empty or a space). GP offset -31936 (0x8340) resolves to XtVaSetValues. The function updates a Motif label widget in the current context.
     */
halt_baddata();
}
