/**
 * widgetHelp
 *
 * Extracted from fsn.c lines 67402-67408
 * Category: UI
 */

void widgetHelp(undefined4 param_1,undefined4 param_2)

{
  XtAddCallback(param_1,0xe3f3e9f,FUN_0042b3f4,param_2);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042b6b4):
     * Function: widgetHelp
     *
     * ## Analysis
     * **What it does:**
     * Sets up GP-relative addressing, then calls a function (likely `XmStringCreateLocalized` or similar) with the original first arg (`a0` = widget), a string from `.rodata` offset, and another string/value. The `a3 = a1` saves the original second parameter to pass as fourth arg.
     * **Key GP loads:**
     * - `gp-32608` (0x80a0): String pointer base
     * - `gp-32736` (0x8020): Another string pointer base
     * - `gp-31828` (0x83ac): Function pointer (likely `XmStringCreateLocalized` or help display func)
     * **C pseudocode:**
     * ```c
     * void widgetHelp(Widget w, XtPointer client_data, XtPointer call_data) {
     * // client_data becomes 4th arg, strings from GOT
     * some_help_function(w, help_string_1, help_string_2, client_data);
     * }
     * ```
     * Given the function name "widgetHelp" and context (Motif app), this is likely a help callback that displays context-sensitive help text. The two string offsets (+6967 and -19468 from base pointers) point to help topic strings in .rodata.
     */
halt_baddata();
}
