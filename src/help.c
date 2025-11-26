/**
 * help.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "help.h"
#include "fsn_types.h"
#include "fsn_state.h"

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

void widgetHelp(undefined4 param_1,undefined4 param_2)

{
  XtAddCallback(param_1,0xe3f3e9f,help_callback,param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void install_help_callback(undefined4 param_1,undefined4 param_2)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7c54))
            (param_1,*(int *)(unaff_gp + -0x7f60) + 0x1b37,*(int *)(unaff_gp + -0x7fe0) + -0x4c0c,
             param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
