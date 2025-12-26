/**
 * FUN_0040da94
 *
 * Extracted from fsn.c lines 50784-50862
 * Ghidra address: 0x0040da94
 * Category: UI
 */

void FUN_0040da94(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char acStack_68 [24];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  
  legendShowing = 1;
  if (legend_widget == 0) {
    local_48 = 0xe3f40f2;
    local_44 = panel_vsep_widget;
    local_50 = 0xe3f40cb;
    local_40 = 0xe3f46dd;
    local_38 = 0xe3f3701;
    local_4c = 3;
    local_3c = 1;
    local_34 = 1;
    legend_widget = XmCreateRowColumn(panel_widget,"legend",&local_50,4);
    install_help_callback(legend_widget,&legendHelp);
    uVar1 = XmCreateLabel(legend_widget,"colorslabel",&local_50,0);
    XtManageChild(uVar1);
    iVar2 = 0;
    puVar3 = &labelColors;
    puVar4 = &legendLabel;
    do {
      sprintf(acStack_68,"color%d",iVar2);
      local_4c = puVar3[1];
      local_44 = *puVar3;
      local_50 = 0xf6615f6;
      local_48 = 0xf661554;
      uVar1 = XmCreateLabel(legend_widget,acStack_68,&local_50,2);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 4;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
    } while (iVar2 != 7);
    XtManageChildren(&legendLabel,7);
    uVar1 = XmCreateSeparator(legend_widget,"monitorSep",&local_50,0);
    XtManageChild(uVar1);
    local_4c = _DAT_100176e4;
    local_44 = monitorLabelColor;
    local_50 = 0xf6615f6;
    local_48 = 0xf661554;
    monitorLabelWidget = XmCreateLabel(legend_widget,"monitorLabel",&local_50,2);
    XtManageChild(monitorLabelWidget);
    local_2c = legend_widget;
    local_50 = 0xe3f40cb;
    local_44 = panel_vsep_widget;
    local_48 = 0xe3f40f2;
    local_40 = 0xe3f46dd;
    local_38 = 0xe3f3701;
    local_30 = 0xe3f3753;
    local_4c = 3;
    local_3c = 1;
    local_34 = 3;
    DAT_10016658 = XmCreateSeparator(panel_widget,"legendSep",&local_50,5);
  }
  XtManageChild(legend_widget);
  XtManageChild(DAT_10016658);
  local_44 = DAT_10016658;
  local_50 = 0xe3f3701;
  local_48 = 0xe3f3753;
  local_4c = 3;
  XtSetValues(pane_form_widget,&local_50,2);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040da94):
     * Function: FUN_0040da94
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * Builds an XtVaTypedArg array on the stack with 4 elements (resource name, type XtRString, value string, length), then calls XtVaSetValues to set a widget resource. This is the function epilogue that restores saved registers and returns.
     * **C pseudocode:**
     * ```c
     * // GP offsets resolved:
     * // -32608 (0x80a0) = XmNlabelString or similar string constant base
     * // -32660 (0x806c) = curcontextwindows
     * // -31936 (0x8340) = XtVaSetValues
     * Widget widget = curcontextwindows[0x6650/4];  // offset 26192 = widget at index ~6612
     * XtVaTypedArgList args[4];
     * args[0] = (void*)(XmNlabelString_base + 5017);  // resource name string
     * args[1] = (void*)3;                              // XtRString type?
     * args[2] = (void*)(XmNlabelString_base + 5099);  // value string
     * args[3] = (void*)s0_value;                       // string length from s0
     * XtVaSetValues(widget, args, 2);  // 2 = arg count
     * return;
     * ```
     * **Compact comment form:**
     * ```c
     * // Build XtVaTypedArg: {resource_name+5017, 3, value_string+5099, len}
     * // Call XtVaSetValues(curcontextwindows[6612], args, 2) then return
     * ```
     */
halt_baddata();
}
