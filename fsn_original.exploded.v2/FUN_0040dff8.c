/**
 * FUN_0040dff8
 *
 * Extracted from fsn.c lines 50933-51096
 * Ghidra address: 0x0040dff8
 * Category: UI
 */

void FUN_0040dff8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_78 = 0;
  local_4 = XmCreateMenuBar(param_1,"menuBar",&local_74,0);
  XtManageChild(local_4);
  local_78 = 0;
  FUN_00432094(display,0,&local_74,&local_78);
  local_c = XmCreatePulldownMenu(local_4,"session_pane",&local_74,local_78);
  XtAddCallback(local_c,0xe3f41fe,overlayMenuMappedCB,0);
  XtAddCallback(local_c,0xe3f4c38,overlayMenuUnmappedCB,0);
  install_help_callback(local_c,&sessionHelp);
  local_78 = 0;
  DAT_10016668 = XmCreateToggleButton(local_c,"menuSplit",&local_74,0);
  XtManageChild(DAT_10016668);
  XtAddCallback(DAT_10016668,0xe3f4ca5,FUN_004115f8,0);
  local_78 = 0;
  local_24 = XmCreatePushButton(local_c,"menuRescan",&local_74,0);
  XtManageChild(local_24);
  XtAddCallback(local_24,0xe3f35b3,rescanDatabase,0);
  local_78 = 0;
  local_24 = XmCreatePushButton(local_c,"menuSave",&local_74,0);
  XtManageChild(local_24);
  XtAddCallback(local_24,0xe3f35b3,dumpDatabaseCB,0);
  FUN_0041bd0c(local_c);
  local_78 = 0;
  local_24 = XmCreatePushButton(local_c,"menuQuit",&local_74,0);
  XtManageChild(local_24);
  XtAddCallback(local_24,0xe3f35b3,quit_application,0);
  local_74 = 0xe3f4a31;
  local_78 = 1;
  local_70 = local_c;
  local_8 = XmCreateCascadeButton(local_4,"menuSession",&local_74,1);
  XtManageChild(local_8);
  install_help_callback(local_8,&sessionHelp);
  local_78 = 0;
  FUN_00432094(display,0,&local_74,&local_78);
  local_14 = XmCreatePulldownMenu(local_4,"show_pane",&local_74,local_78);
  XtAddCallback(local_14,0xe3f41fe,overlayMenuMappedCB,0);
  XtAddCallback(local_14,0xe3f4c38,overlayMenuUnmappedCB,0);
  XtManageChild(local_14);
  install_help_callback(local_14,&showHelp);
  local_78 = 0;
  local_24 = XmCreatePushButton(local_14,"menuOverview",&local_74,0);
  XtManageChild(local_24);
  XtAddCallback(local_24,0xe3f35b3,showOverview,0);
  local_78 = 0;
  local_24 = XmCreatePushButton(local_14,"menuControls",&local_74,0);
  XtManageChild(local_24);
  XtAddCallback(local_24,0xe3f35b3,FUN_0040dee0,0);
  local_78 = 0;
  local_24 = XmCreatePushButton(local_14,"menuLegend",&local_74,0);
  XtManageChild(local_24);
  XtAddCallback(local_24,0xe3f35b3,FUN_0040da94,0);
  local_78 = 0;
  local_24 = XmCreatePushButton(local_14,"menuPreferences",&local_74,0);
  XtManageChild(local_24);
  XtAddCallback(local_24,0xe3f35b3,showPreferencePanel,0);
  local_78 = 0;
  FUN_00432094(display,0,&local_74,&local_78);
  local_18 = XmCreatePulldownMenu(local_14,"hide_pane",&local_74,local_78);
  local_78 = 0;
  local_24 = XmCreatePushButton(local_18,"menuOverview",&local_74,0);
  XtManageChild(local_24);
  XtAddCallback(local_24,0xe3f35b3,hideOverview,0);
  local_78 = 0;
  local_24 = XmCreatePushButton(local_18,"menuControls",&local_74,0);
  XtManageChild(local_24);
  XtAddCallback(local_24,0xe3f35b3,FUN_0040df80,0);
  local_78 = 0;
  local_24 = XmCreatePushButton(local_18,"menuLegend",&local_74,0);
  XtManageChild(local_24);
  XtAddCallback(local_24,0xe3f35b3,FUN_0040de38,0);
  local_78 = 0;
  local_24 = XmCreatePushButton(local_18,"menuPreferences",&local_74,0);
  XtManageChild(local_24);
  XtAddCallback(local_24,0xe3f35b3,hidePreferencePanel,0);
  local_74 = 0xe3f4a31;
  local_78 = 1;
  local_70 = local_18;
  uVar1 = XmCreateCascadeButton(local_14,"menuHide",&local_74,1);
  XtManageChild(uVar1);
  local_74 = 0xe3f4a31;
  local_78 = 1;
  local_70 = local_14;
  local_8 = XmCreateCascadeButton(local_4,"menuShow",&local_74,1);
  XtManageChild(local_8);
  install_help_callback(local_8,&showHelp);
  local_78 = 0;
  FUN_00432094(display,0,&local_74,&local_78);
  local_10 = XmCreatePulldownMenu(local_4,"display_pane",&local_74,local_78);
  XtAddCallback(local_10,0xe3f41fe,overlayMenuMappedCB,0);
  XtAddCallback(local_10,0xe3f4c38,overlayMenuUnmappedCB,0);
  XtManageChild(local_10);
  install_help_callback(local_10,&displayHelp);
  local_74 = 0xe3f4a31;
  local_78 = 1;
  local_70 = local_10;
  local_8 = XmCreateCascadeButton(local_4,"menuDisplay",&local_74,1);
  XtManageChild(local_8);
  install_help_callback(local_8,&displayHelp);
  local_70 = 1;
  local_74 = 0xe3f464e;
  local_78 = 1;
  FUN_00432094(display,0,&local_74,&local_78);
  local_70 = XmCreatePulldownMenu(local_10,"dheight_pane",&local_74,local_78);
  local_74 = 0xe3f4a31;
  local_78 = 1;
  local_1c = local_70;
  uVar1 = XmCreateCascadeButton(local_10,"menuHeight",&local_74,1);
  XtManageChild(uVar1);
  local_78 = 0;
  DAT_10016670 = XmCreateToggleButton(local_1c,"menuHeightNone",&local_74,0);
  XtManageChild(DAT_10016670);
  XtAddCallback(DAT_10016670,0xe3f4ca5,FUN_0040ef44,0);
  local_78 = 0;
  DAT_10016674 = XmCreateToggleButton(local_1c,"menuHeightLinear",&local_74,0);
  XtManageChild(DAT_10016674);
  XtAddCallback(DAT_10016674,0xe3f4ca5,FUN_0040ef44,1);
  local_78 = 0;
  DAT_10016678 = XmCreateToggleButton(local_1c,"menuHeightExaggerated",&local_74,0);
  XtManageChild(DAT_10016678);
  XtAddCallback(DAT_10016678,0xe3f4ca5,FUN_0040ef44,2);
  local_74 = 0xe3f464e;
  local_78 = 1;
  local_70 = 1;
  FUN_00432094(display,0,&local_74,&local_78);
  local_70 = XmCreatePulldownMenu(local_10,"ddir_pane",&local_74,local_78);
  local_74 = 0xe3f4a31;
  local_78 = 1;
  local_20 = local_70;
  DAT_1001666c = XmCreateCascadeButton(local_10,"menuDirectoryHeight",&local_74,1);
  XtManageChild(DAT_1001666c);
  local_78 = 0;
  DAT_1001667c = XmCreateToggleButton(local_20,"menuDirectoryFlat",&local_74,0);
  XtManageChild(DAT_1001667c);
  XtAddCallback(DAT_1001667c,0xe3f4ca5,FUN_0040eff8,0);
  local_78 = 0;
  DAT_10016680 = XmCreateToggleButton(local_20,"menuDirectoryFilesOnly",&local_74,0);
  XtManageChild(DAT_10016680);
  XtAddCallback(DAT_10016680,0xe3f4ca5,FUN_0040eff8,1);
  local_78 = 0;
  DAT_10016684 = XmCreateToggleButton(local_20,"menuDirectoryChildren",&local_74,0);
  XtManageChild(DAT_10016684);
  XtAddCallback(DAT_10016684,0xe3f4ca5,FUN_0040eff8,2);
  FUN_0041b040(local_4,param_1);
  FUN_0042b0c4(local_4);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040dff8):
     * Function: FUN_0040dff8
     *
     * Looking at the GP offsets and call pattern:
     * **1. What the assembly does:**
     * Calls an unknown function (gp-31864), then calls XtVaSetValues on s0[0] with a string resource (gp-32608+10557), stack param, and value 2. Then calls two widget functions on stack variables at sp+156/sp+160. Returns sp+156.
     * **2. C pseudocode:**
     * ```c
     * // After halt_baddata region:
     * unknown_func();                              // gp-31864
     * XtVaSetValues(node->widget,                  // s0[0] = first field of node
     * XmNsomeResource,               // string at gp-32608+10557
     * stack_param,                   // sp+36
     * 2,                             // a3 = 2
     * NULL);
     * XtManageChild(temp_widget, temp_widget2);    // gp-31200, sp+156/sp+160
     * XtRealizeWidget(temp_widget);                // gp-30816, sp+156
     * return temp_widget;                          // sp+156 -> v0
     * ```
     * **GP offset resolution (from your GP_MAPPING.md pattern):**
     * - gp-31864 (0x8388): likely popmatrix or endgroup
     * - gp-31828 (0x83ac): XtVaSetValues
     * - gp-31200 (0x8620): XtManageChild
     * - gp-30816 (0x87a0): XtRealizeWidget
     * - gp-32608+10557 (0x80a0+0x293d): rodata string, likely "labelString" or similar XmN resource
     * This is widget creation/finalization code - creates a widget, sets a label property, manages and realizes it, then returns the widget pointer.
     */
halt_baddata();
}
