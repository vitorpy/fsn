/**
 * FUN_0042f66c
 *
 * Extracted from fsn.c lines 69566-69586
 * Ghidra address: 0x0042f66c
 * Category: Memory
 */

void FUN_0042f66c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  undefined1 auStack_3c [56];
  char *local_4;
  
  iVar1 = XmStringGetLtoR(*(undefined4 *)(param_3 + 8),&default_charset,&local_4);
  if (iVar1 != 0) {
    sVar2 = strlen(local_4);
    if (sVar2 != 0) {
      FUN_0042dc64(auStack_3c);
      FUN_0042ef04(local_4,auStack_3c);
      XmListSetBottomPos(mark_selector_list,0);
    }
    XtFree(local_4);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042f66c):
     * Function: FUN_0042f66c
     *
     * Looking at the GP offsets and call sequence:
     * **1. What it does:**
     * Calls stat() on a path buffer at sp+36, then calls XtSetSensitive() on a widget from curcontext[0x6ec4], then calls a final function with the original a0 parameter.
     * **2. C pseudocode:**
     * ```c
     * struct stat statbuf;  // at sp+36
     * stat(&statbuf);  // gp-30796 = stat
     * XtSetSensitive(param, &statbuf);  // gp-30760, param from sp+92
     * // gp-32660 = curcontext, offset 0x6ec4 = widget
     * XtSetSensitive(curcontext->widget_6ec4, 0);  // gp-31656 = XtSetSensitive, disable widget
     * some_cleanup_func(param);  // gp-32396, param from sp+92
     * return;
     * ```
     * The pattern suggests: stat a file, update sensitivity of some widget based on result (disabled=0), then cleanup. This is likely checking if a file/directory exists and disabling a menu item or button accordingly.
     */
halt_baddata();
}
