/**
 * FUN_0042d28c
 *
 * Extracted from fsn.c lines 68054-68067
 * Ghidra address: 0x0042d28c
 * Category: Memory
 */

void FUN_0042d28c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 local_c [3];
  
  iVar1 = XmStringGetLtoR(*(undefined4 *)(param_3 + 8),&default_charset,local_c);
  if (iVar1 != 0) {
    XmTextFieldSetString(DAT_10016e48,local_c[0]);
    XtFree(local_c[0]);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042d28c):
     * Function: FUN_0042d28c
     *
     * Looking at this assembly:
     * **What it does:**
     * Calls a lookup function (likely XrmGetResource or similar) with a resource name from param3[2] and a class string. If found, calls set_status_message() with the result, then calls XtFree() to free the returned string.
     * **C pseudocode:**
     * ```c
     * void FUN_0042d28c(void *param1, void *param2, int *param3) {
     * char *value;
     * // GP-32428 = XrmGetResource or similar lookup
     * // GP-32608 = resource class string constant
     * if (XrmGetResource(param3[2], resource_class, &value)) {
     * // GP-32660 + 28232 = curcontextwindows[index] (status widget)
     * // GP-32236 = set_status_message
     * set_status_message(curcontextwindows[7060], value);
     * // GP-32396 = XtFree
     * XtFree(value);
     * }
     * }
     * ```
     * The function retrieves a resource/preference value by name and displays it in the status bar, then frees the temporary string.
     */
halt_baddata();
}
