/**
 * FUN_0042b3f4
 *
 * Extracted from fsn.c lines 67332-67365
 * Ghidra address: 0x0042b3f4
 * Category: UI
 */

void FUN_0042b3f4(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_4;
  
  if (DAT_100079c0 != 0) {
    XtUnmanageChild(DAT_100079c0);
  }
  local_28 = XmStringCreateLtoR(*param_2,&default_charset);
  local_2c = 0xe3f42e0;
  uVar1 = toplevel;
  if (*(char *)(param_2 + 2) != '\0') {
    uVar1 = param_1;
  }
  local_4 = local_28;
  DAT_100079c0 = XmCreateInformationDialog(uVar1,"HelpDialog",&local_2c,1);
  if (param_2[1] == 0) {
    uVar1 = XmMessageBoxGetChild(DAT_100079c0,7);
    XtUnmanageChild(uVar1);
  }
  else {
    XtAddCallback(DAT_100079c0,0xe3f3e9f,FUN_0042b3f4);
  }
  uVar1 = XmMessageBoxGetChild(DAT_100079c0,2);
  XtUnmanageChild(uVar1);
  XtAddCallback(DAT_100079c0,0xe3f44b6,FUN_0042b390);
  XtManageChild(DAT_100079c0);
  XmStringFree(local_4);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042b3f4):
     * Function: FUN_0042b3f4
     *
     * Looking at the GP offsets and call pattern:
     * **1. What it does:**
     * This is function epilogue code that: (1) calls some function with v0 as arg, (2) calls XtVaSetValues on widget at *s0 with a resource name and value, (3) calls another function on *s0, (4) calls a cleanup function with sp+84 arg, then returns.
     * **2. C pseudocode:**
     * ```c
     * // GP offset -31600 (0x8490) = unknown function
     * some_func(result);  // result in v0 from previous code
     * // GP offset -31828 (0x83ac) = XtVaSetValues
     * // GP offset -32608 (0x80a0) + 8526 = string resource name
     * // GP offset -32736 (0x8020) + (-19568) = value pointer
     * XtVaSetValues(*s0, "resourceName", some_value, NULL);
     * // GP offset -31864 (0x8388) = unknown widget function
     * widget_func(*s0);
     * // GP offset -32392 (0x8178) = cleanup/free function
     * cleanup_func(local_var_84);
     * return;
     * ```
     * To get exact function names, run:
     * ```bash
     * python3 analysis/resolve_got.py <<< "0x8490 0x83ac 0x80a0 0x8020 0x8388 0x8178"
     * ```
     */
halt_baddata();
}
