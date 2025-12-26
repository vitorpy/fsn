/**
 * redrawSelectionNames
 *
 * Extracted from fsn.c lines 58364-58394
 * Category: Graphics
 */

void redrawSelectionNames(void)

{
  size_t sVar1;
  
  if ((curcontext[0xc51] != '\0') && (curcontext[0xc52] != '\0')) {
    DAT_10006e24 = 0;
    if (curcontext->current_file /* was: *(int *)(curcontext + 0x48) */ == 0) {
      if (curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */ == 0) {
        XmTextFieldSetString(*(undefined4 *)(curcontextwindows + 0x1c),"No file");
      }
      else {
        XmTextFieldSetString(*(undefined4 *)(curcontextwindows + 0x1c),(int)curcontext + 0x4c);
        sVar1 = strlen(curcontext + 0x4c);
        XmTextFieldShowPosition(*(undefined4 *)(curcontextwindows + 0x1c),sVar1);
        sVar1 = strlen(curcontext + 0x4c);
        XmTextFieldSetInsertionPosition(*(undefined4 *)(curcontextwindows + 0x1c),sVar1);
      }
    }
    else {
      XmTextFieldSetString(*(undefined4 *)(curcontextwindows + 0x1c),(int)curcontext + 0x44c);
      sVar1 = strlen(curcontext + 0x44c);
      XmTextFieldShowPosition(*(undefined4 *)(curcontextwindows + 0x1c),sVar1);
      sVar1 = strlen(curcontext + 0x44c);
      XmTextFieldSetInsertionPosition(*(undefined4 *)(curcontextwindows + 0x1c),sVar1);
    }
    FUN_0041c3e4();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041c714):
     * Function: redrawSelectionNames
     *
     * Looking at the GP offsets and call patterns:
     * **1. What the assembly does:**
     * - Two branches: one calls a function with `curcontext->field_0x1c` (widget at offset 28), the other calls XtVaSetValues on same widget with a string from rodata (-19652 = 0xb33c offset)
     * - Both paths end by calling a function at GP-32740 with addiu -15388 (likely a cleanup/
     * refresh routine)
     * **2. C pseudocode:**
     * ```c
     * // At 41c8b0: branch taken when condition true (label not shown)
     * if (condition) {
     * // GP[-30332] = curcontext, GP[-32184] = some widget function (likely XtUnmanageChild or similar)
     * Widget w = ((Widget *)curcontext)[7];  // offset 28 = index 7 on 32-bit
     * XtUnmanageChild(w);  // or similar single-arg widget call
     * } else {
     * // GP[-30332] = curcontext, GP[-32236] = XtVaSetValues, GP[-32676] = rodata base
     * Widget w = ((Widget *)curcontext)[7];
     * XtVaSetValues(w, XmNlabelString, ..., NULL);  // string at rodata+0xb33c
     * }
     * // GP[-32740] with addiu -15388 = likely
     * glXSwapBuffers or
     * refresh_display type function
     * some_cleanup_func();
     * ```
     * To get exact function names, run:
     * ```bash
     * python3 analysis/resolve_got.py <<< "-30332
     * -32184
     * -32236
     * -32676
     * -32740"
     * ```
     * The offset 28 (0x1c) into curcontext is likely a label widget used to display selection names - this code either hides it or updates its text.
     */
halt_baddata();
}
