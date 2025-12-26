/**
 * createHelpMenu
 *
 * Extracted from fsn.c lines 67208-67249
 * Category: UI
 */

void createHelpMenu(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_2c = 0;
  FUN_00432094(display,0,&uStack_28,&uStack_2c);
  uVar1 = XmCreatePulldownMenu(param_1,"help_menu",&uStack_28,uStack_2c);
  XtAddCallback(uVar1,0xe3f41fe,overlayMenuMappedCB,0);
  XtAddCallback(uVar1,0xe3f4c38,overlayMenuUnmappedCB,0);
  uStack_2c = 0;
  uVar2 = XmCreatePushButton(uVar1,"window_help",&uStack_28,0);
  XtAddCallback(uVar2,0xe3f35b3,FUN_0042b3f4,&topHelp);
  XtManageChild(uVar2);
  uStack_2c = 0;
  uVar2 = XmCreatePushButton(uVar1,"context_help",&uStack_28,0);
  XtAddCallback(uVar2,0xe3f35b3,FUN_0042b5ac,0);
  XtManageChild(uVar2);
  uStack_2c = 0;
  uVar2 = XmCreatePushButton(uVar1,"mode_help",&uStack_28,0);
  XtAddCallback(uVar2,0xe3f35b3,FUN_0042b3f4,&modeHelp);
  XtManageChild(uVar2);
  uStack_2c = 0;
  uVar2 = XmCreatePushButton(uVar1,"version_help",&uStack_28,0);
  XtAddCallback(uVar2,0xe3f35b3,FUN_0042b3f4,&versionHelp);
  XtManageChild(uVar2);
  uStack_28 = 0xe3f4a31;
  uStack_2c = 1;
  uStack_24 = uVar1;
  uVar1 = XmCreateCascadeButton(param_1,"helpButton",&uStack_28,1);
  XtManageChild(uVar1);
  uStack_2c = 1;
  uStack_28 = 0xe3f429f;
  uStack_24 = uVar1;
  XtSetValues(param_1,&uStack_28,1);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042b0b8):
     * Function: createHelpMenu
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * 1. Calls a function (at GP-31864) with widget from previous call as argument
     * 2. Sets up parameters on stack (value=1, string at rodata+7991, widget result)
     * 3. Calls another function (at GP-31936) with parent widget, callback args, and flag=1, then returns
     * **C pseudocode:**
     * ```c
     * Widget helpMenu = XmCreatePulldownMenu(parent, "helpMenu", args, 1);  // jalr at 42b324
     * XtManageChild(helpMenu);  // GP-31864, jalr at 42b33c
     * // Setup callback data on stack
     * int flag = 1;           // sp+60
     * char *label = "Help";   // sp+64, rodata+7991
     * Widget menu = helpMenu; // sp+68
     * XtAddCallback(shell, callback_name, 1);  // GP-31936, jalr at 42b36c
     * return;
     * ```
     * The GP offsets likely resolve to:
     * - GP-31864 (0x8388): `XtManageChild`
     * - GP-31936 (0x8340): `XtAddCallback` or similar callback registration
     * - rodata+7991 (0x1f37): String constant, likely "Help" or menu label
     */
halt_baddata();
}
