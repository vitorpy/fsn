/**
 * FUN_0042f73c
 *
 * Extracted from fsn.c lines 69592-69624
 * Ghidra address: 0x0042f73c
 * Category: UI
 */

void FUN_0042f73c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 local_28;
  undefined4 local_24;
  
  if (mark_prompt_dialog == 0) {
    mark_prompt_dialog = XmCreatePromptDialog(param_1,"markPrompt",&local_28,0);
    XtAddCallback(mark_prompt_dialog,0xf6615c9,FUN_0042f4b4,0);
    XtAddCallback(mark_prompt_dialog,0xe3f44b6,FUN_0042f66c,0);
  }
  if (curcontext->current_file /* was: *(undefined4 **)(curcontext + 0x48) */ == (undefined4 *)0x0) {
    if (curcontext->current_dir /* was: *(undefined4 **)(curcontext + 0x44) */ == (undefined4 *)0x0) {
      puVar2 = &DAT_10013c60;
    }
    else {
      puVar2 = (undefined *)*curcontext->current_dir /* was: *(undefined4 **)(curcontext + 0x44) */;
    }
  }
  else {
    puVar2 = (undefined *)*curcontext->current_file /* was: *(undefined4 **)(curcontext + 0x48) */;
  }
  uVar1 = XmStringCreateSimple(puVar2);
  local_28 = 0xe3f4ab9;
  local_24 = uVar1;
  XtSetValues(mark_prompt_dialog,&local_28,1);
  XmStringFree(uVar1);
  XtManageChild(mark_prompt_dialog);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042f73c):
     * Function: FUN_0042f73c
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Calls a function (result stored in v0), then calls XtSetValues on a widget with an argument list containing a string resource (offset 10065 = 0x2751, likely XmNlabelString) set to the returned value, then calls XmStringFree on the return value, and finally calls another widget function.
     * **C pseudocode:**
     * ```c
     * // After previous jalr returns value in v0:
     * char *label_text = some_function(...);  // v0 from previous call
     * Widget widget = *(Widget*)s0;           // lw a0,0(s0)
     * Arg args[1];
     * args[0].name = XmNlabelString;          // gp[-32608] + 10065
     * args[0].value = (XtArgVal)label_text;
     * XtSetValues(widget, args, 1);           // gp[-31936]
     * XmStringFree(label_text);               // gp[-32392]
     * some_widget_func(*(Widget*)s0);         // gp[-31864], likely XtManageChild or similar
     * ```
     * **GP offsets resolved:**
     * - gp[-32608] (0x80a0): Likely xmLabelWidgetClass or resource base
     * - gp[-31936] (0x8340): XtSetValues
     * - gp[-32392] (0x8178): XmStringFree
     * - gp[-31864] (0x8388): Widget management function
     */
halt_baddata();
}
