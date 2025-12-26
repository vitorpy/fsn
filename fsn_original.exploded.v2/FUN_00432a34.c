/**
 * FUN_00432a34
 *
 * Extracted from fsn.c lines 71431-71447
 * Ghidra address: 0x00432a34
 * Category: Other
 */

void FUN_00432a34(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char *local_408;
  char *local_404;
  char acStack_400 [1024];
  
  local_404 = "UNKNOWN PROGRAM";
  local_408 = "UNKNOWN CLASS";
  XtGetApplicationNameAndClass(param_1,&local_404,&local_408);
  sprintf(acStack_400,param_2,param_3,param_4,param_5,param_6);
  fprintf((FILE *)0xfb52904,(char *)_imsgs._176_4_,local_404,local_408,acStack_400);
  fflush((FILE *)0xfb52904);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00432a34):
     * Function: FUN_00432a34
     *
     * Looking at this assembly snippet:
     * **1. What it does:**
     * Calls sprintf() to format a string into a stack buffer, then calls XtVaSetValues() to set a widget's XmNlabelString to that formatted string, finally calls XmStringFree() to free the temporary XmString.
     * **2. C pseudocode:**
     * ```c
     * char buffer[48];  // at sp+48
     * sprintf(buffer, format_string, arg1, arg2, arg3, arg4);  // gp-31772 = sprintf
     * XmString label = XmStringCreateLocalized(buffer);  // implicit or inline
     * XtVaSetValues(some_widget + 32,                    // gp-32616 + 32
     * XmNlabelString, global_data[0xb0/4], // gp-30104 offset 176
     * XmNsomething, stack_arg,             // sp+40
     * buffer_ptr,                          // sp+48
     * NULL);                               // gp-31752 = XtVaSetValues
     * XmStringFree(some_widget + 32);                    // gp-31512 = XmStringFree (or similar cleanup)
     * ```
     * **GP offsets resolved:**
     * - gp-31772 (0x83e4): sprintf
     * - gp-31752 (0x83f8): XtVaSetValues
     * - gp-30104 (0x8a68): likely XmN resource name table
     * - gp-32616 (0x8098): widget or context structure base
     * - gp-31512 (0x84e8): XmStringFree or cleanup function
     */
halt_baddata();
}
