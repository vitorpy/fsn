/**
 * FUN_0040a7ec
 *
 * Extracted from fsn.c lines 49435-49578
 * Ghidra address: 0x0040a7ec
 * Category: UI
 */

void FUN_0040a7ec(void)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  char *local_78;
  undefined4 local_74;
  char *local_70;
  undefined4 *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  uVar1 = XtCreateWidget("contextTopWidget",_DAT_0e3d331c,DAT_1001664c,&local_a0,0);
  *(undefined4 *)(curcontextwindows + 0xc) = uVar1;
  install_help_callback(*(undefined4 *)(curcontextwindows + 0xc),&infoHelp);
  local_9c = 1;
  local_a0 = 0xe3f4b1d;
  local_98 = 0xe3f40cb;
  local_90 = 0xe3f46dd;
  local_94 = 1;
  local_8c = 1;
  local_94 = FUN_0041be40(*(undefined4 *)(curcontextwindows + 0xc),&local_a0,3);
  local_8c = 1;
  local_a0 = 0xe3f4b1d;
  local_98 = 0xe3f4ba9;
  local_90 = 0xe3f40cb;
  local_88 = 0xe3f46dd;
  local_9c = 3;
  local_84 = 1;
  local_94 = XtCreateManagedWidget
                       ("panelhsep",_DAT_0e3d8f04,*(undefined4 *)(curcontextwindows + 0xc),&local_a0
                        ,4);
  local_7c = blankXmString;
  local_a0 = 0xe3f4b1d;
  local_98 = 0xe3f4ba9;
  local_90 = 0xe3f40cb;
  local_88 = 0xe3f46dd;
  local_80 = 0xe3f40b5;
  local_9c = 3;
  local_8c = 1;
  local_84 = 1;
  uVar1 = 5;
  if (DAT_10017658 != 0) {
    local_74 = DAT_10017654;
    local_78 = (char *)0xf6615f6;
    local_6c = (undefined4 *)lhLabelColor;
    local_70 = (char *)0xf661554;
    uVar1 = 7;
  }
  uVar1 = XtCreateManagedWidget
                    ("locateHighlightName",_DAT_0e3d4160,*(undefined4 *)(curcontextwindows + 0xc),
                     &local_a0,uVar1);
  *(undefined4 *)(curcontextwindows + 0x2c) = uVar1;
  local_a0 = 0xe3f4b1d;
  local_98 = 0xe3f4ba9;
  local_9c = 3;
  local_94 = *(undefined4 *)(curcontextwindows + 0x2c);
  local_84 = 1;
  local_90 = 0xe3f3701;
  local_88 = 0xe3f40cb;
  local_80 = 0xe3f46dd;
  local_8c = 1;
  local_7c = 1;
  iVar2 = init_display_mode();
  if (iVar2 == 0) {
    local_78 = "useOverlay";
  }
  else {
    local_78 = "usePopup";
  }
  local_74 = 1;
  local_70 = "glxConfig";
  local_6c = &DAT_100000a4;
  uVar1 = XtCreateManagedWidget
                    ("glwidget",_DAT_0e210e90,*(undefined4 *)(curcontextwindows + 0xc),&local_a0,7);
  *(undefined4 *)(curcontextwindows + 8) = uVar1;
  XtAddCallback(*(undefined4 *)(curcontextwindows + 8),"exposeCallback",FUN_0040bc64,0);
  iVar2 = init_display_mode();
  if (iVar2 == 0) {
    pcVar3 = "overlayExposeWindow";
  }
  else {
    pcVar3 = "popupExposeWindow";
  }
  XtAddCallback(*(undefined4 *)(curcontextwindows + 8),pcVar3,FUN_0040bce8,0);
  XtAddCallback(*(undefined4 *)(curcontextwindows + 8),"resizeCallback",FUN_0040bdb4,0);
  XtAddCallback(*(undefined4 *)(curcontextwindows + 8),"ginitCallback",FUN_0040c1a0,0);
  XtOverrideTranslations(*(undefined4 *)(curcontextwindows + 8),DAT_10016634);
  install_help_callback(*(undefined4 *)(curcontextwindows + 8),&glHelp);
  local_a0 = 0xe3f4b1d;
  local_98 = 0xe3f4ba9;
  local_9c = 4;
  local_94 = *(undefined4 *)(curcontextwindows + 0x2c);
  local_90 = 0xe3f3701;
  local_88 = 0xe3f3753;
  local_8c = 4;
  local_84 = *(undefined4 *)(curcontextwindows + 8);
  local_80 = 0xe3f40cb;
  local_78 = (char *)0xe3f40f2;
  local_7c = 4;
  local_74 = *(undefined4 *)(curcontextwindows + 8);
  local_70 = (char *)0xe3f46dd;
  local_68 = 0xe3f4707;
  local_6c = (undefined4 *)0x4;
  local_64 = *(undefined4 *)(curcontextwindows + 8);
  FUN_00429c44(*(undefined4 *)(curcontextwindows + 0xc),&local_a0,8);
  local_a0 = 0xe3f4b1d;
  local_98 = 0xe3f4ba9;
  local_9c = 4;
  local_94 = *(undefined4 *)(curcontextwindows + 8);
  local_90 = 0xe3f40cb;
  local_88 = 0xe3f40f2;
  local_8c = 4;
  local_84 = *(undefined4 *)(curcontextwindows + 8);
  if (curcontextid == 0) {
    pcVar3 = "activeButton0";
  }
  else {
    pcVar3 = "activeButton1";
  }
  uVar1 = XmCreateForm(*(undefined4 *)(curcontextwindows + 0xc),pcVar3,&local_a0,4);
  *(undefined4 *)(curcontextwindows + 0x24) = uVar1;
  uVar1 = XmCreateBulletinBoard
                    (*(undefined4 *)(curcontextwindows + 0x24),"activeButtonMask",&local_a0,0);
  *(undefined4 *)(curcontextwindows + 0x28) = uVar1;
  XtManageChild(*(undefined4 *)(curcontextwindows + 0x28));
  XtAddEventHandler(*(undefined4 *)(curcontextwindows + 0x24),4,0,myContext,
                    *(undefined4 *)(curcontextwindows + 8));
  XtAddEventHandler(*(undefined4 *)(curcontextwindows + 0x28),4,0,myContext,
                    *(undefined4 *)(curcontextwindows + 8));
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040a7ec):
     * Function: FUN_0040a7ec
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls a function via t9 twice (same GP offset -31860 = XtVaSetValues). First call sets widget at offset 36 with arg1=4, arg2=0, and passes value from offset 8 as stack arg. Second call does the same for widget at offset 40.
     * 2. **C pseudocode:**
     * ```c
     * // s0 points to a structure, v1 = *s0
     * node = *s0;
     * XtVaSetValues(node->widget_at_36,   // offset 0x24
     * XmNsomething, 4,       // a1=4
     * NULL,                  // a2=0
     * node->value_at_8,      // stack arg at sp+16
     * a3_resource, ...);     // a3 from GP-30844
     * XtVaSetValues(node->widget_at_40,   // offset 0x28
     * XmNsomething, 4,
     * NULL,
     * node->value_at_8,
     * a3_resource, ...);
     * // epilogue: restore ra, gp, s0, s1, return
     * ```
     * GP offset -31860 (0x838c) = XtVaSetValues. GP offset -30844 (0x8784) is likely an Xt resource constant like XmNvalue or XmNwidth being passed in a3.
     */
halt_baddata();
}
