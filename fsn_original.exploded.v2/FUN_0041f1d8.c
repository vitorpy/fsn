/**
 * FUN_0041f1d8
 *
 * Extracted from fsn.c lines 59848-59864
 * Ghidra address: 0x0041f1d8
 * Category: UI
 */

void FUN_0041f1d8(uint param_1)

{
  undefined4 local_2c;
  undefined4 local_28;
  
  if (DAT_10006e5c == 0) {
    local_2c = 0xe3f3ae5;
    local_28 = 1;
    DAT_10006e5c = XmCreateWarningDialog(toplevel,"moveDestExists",&local_2c,1);
    XtAddCallback(DAT_10006e5c,0xe3f44b6,FUN_0041f2b4,param_1 | 0x100);
    install_help_callback(DAT_10006e5c,&moveDestHelp);
  }
  XtManageChild(DAT_10006e5c);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041f1d8):
     * Function: FUN_0041f1d8
     *
     * Looking at the GP offsets and the call sequence:
     * **1. What it does:**
     * Creates a widget (likely XmCreatePushButton or similar), passing flags with 0x100 OR'd in. Then calls XtAddCallback on the widget, followed by XtManageChild.
     * **2. C pseudocode:**
     * ```c
     * a3 |= 0x100;  // Add flag to argument
     * widget = XmCreateSomeWidget(v0, "string_8526", "string_-3404", a3);
     * DAT_10006e5c = widget;  // Store in global at gp[-32664] + 0x6e5c
     * XtAddCallback(widget, XmNactivateCallback, ...);
     * XtManageChild(widget);
     * return;
     * ```
     * The GP-relative loads are:
     * - `gp[-31828]` → widget creation function (XmCreate*)
     * - `gp[-30812]` → XtAddCallback
     * - `gp[-31864]` → XtManageChild
     * - `gp[-32664]` → base address for storing widget pointer at offset 0x6e5c
     */
halt_baddata();
}
