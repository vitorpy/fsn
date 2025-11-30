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
  halt_baddata();
}
