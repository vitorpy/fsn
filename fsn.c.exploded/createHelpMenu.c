/**
 * createHelpMenu
 *
 * Extracted from fsn.c lines 52338-52379
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
  setup_menu_resources(display,0,&uStack_28,&uStack_2c);
  uVar1 = XmCreatePulldownMenu(param_1,"help_menu",&uStack_28,uStack_2c);
  XtAddCallback(uVar1,0xe3f41fe,overlayMenuMappedCB,0);
  XtAddCallback(uVar1,0xe3f4c38,overlayMenuUnmappedCB,0);
  uStack_2c = 0;
  uVar2 = XmCreatePushButton(uVar1,"window_help",&uStack_28,0);
  XtAddCallback(uVar2,0xe3f35b3,help_callback,&topHelp);
  XtManageChild(uVar2);
  uStack_2c = 0;
  uVar2 = XmCreatePushButton(uVar1,"context_help",&uStack_28,0);
  XtAddCallback(uVar2,0xe3f35b3,quit_menu_callback,0);
  XtManageChild(uVar2);
  uStack_2c = 0;
  uVar2 = XmCreatePushButton(uVar1,"mode_help",&uStack_28,0);
  XtAddCallback(uVar2,0xe3f35b3,help_callback,&modeHelp);
  XtManageChild(uVar2);
  uStack_2c = 0;
  uVar2 = XmCreatePushButton(uVar1,"version_help",&uStack_28,0);
  XtAddCallback(uVar2,0xe3f35b3,help_callback,&versionHelp);
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
