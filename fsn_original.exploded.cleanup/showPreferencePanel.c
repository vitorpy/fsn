/**
 * showPreferencePanel
 *
 * Extracted from fsn.c lines 67554-67798
 * Category: UI
 */

void showPreferencePanel(void)

{
  float fVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *__src;
  undefined *puVar5;
  float fVar6;
  uint in_fcsr;
  char acStack_4b0 [1048];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined *local_84;
  undefined4 local_80;
  undefined *local_7c;
  undefined4 local_78;
  undefined *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_10008940 == 0) {
    local_98 = 0xf662094;
    local_94 = 1;
    DAT_10008940 = XtCreatePopupShell("preferencePanel",_DAT_0f6d16fc,toplevel,&local_98,1);
    XtAddCallback(DAT_10008940,0xf6615c9,FUN_0042cc30,0);
    local_4 = XmCreatePanedWindow(DAT_10008940,"preferencePane",&local_98,0);
    XtManageChild(local_4);
    install_help_callback(local_4,&prefPanelHelp);
    local_8 = XmCreateRowColumn(local_4,"preferenceHeader",&local_98,0);
    XtManageChild(local_8);
    uVar3 = XmCreateLabel(local_8,"preferenceHeaderLabel",&local_98,0);
    XtManageChild(uVar3);
    uVar3 = XmCreateRowColumn(local_8,"preferenceHeaderButtons",&local_98,0);
    XtManageChild(uVar3);
    uVar4 = XmCreatePushButton(uVar3,"preferenceQuit",&local_98,0);
    XtAddCallback(uVar4,0xe3f35b3,hidePreferencePanel,0);
    XtManageChild(uVar4);
    uVar4 = XmCreatePushButton(uVar3,"preferenceUndo",&local_98,0);
    XtAddCallback(uVar4,0xe3f35b3,FUN_0042ccac,0);
    XtManageChild(uVar4);
    uVar4 = XmCreatePushButton(uVar3,"preferenceSaveChanges",&local_98,0);
    XtAddCallback(uVar4,0xe3f35b3,FUN_0042cf60,0);
    XtManageChild(uVar4);
    uVar3 = XmCreatePushButton(uVar3,"preferenceSaveAll",&local_98,0);
    XtAddCallback(uVar3,0xe3f35b3,FUN_0042cf60,1);
    XtManageChild(uVar3);
    uVar3 = XmCreateRowColumn(local_8,"preferenceHeaderButtons2",&local_98,0);
    XtManageChild(uVar3);
    uVar4 = XmCreatePushButton(uVar3,"preferenceSelect",&local_98,0);
    XtAddCallback(uVar4,0xe3f35b3,FUN_0042d338,0);
    XtManageChild(uVar4);
    DAT_10016e48 = XmCreateTextField(uVar3,"preferenceFileName",&local_98,0);
    __src = getenv("HOME");
    if (__src != (char *)0x0) {
      strcpy(acStack_4b0,__src);
      strcat(acStack_4b0,"/.Xdefaults");
      XmTextFieldSetString(DAT_10016e48,acStack_4b0);
    }
    XtManageChild(DAT_10016e48);
    uVar3 = XmCreateRowColumn(local_4,"preferenceBooleans",&local_98,0);
    XtManageChild(uVar3);
    ppuVar2 = &PTR_s_shrinkOnZoom_10008950;
    puVar5 = PTR_s_shrinkOnZoom_10008950;
    while (puVar5 != (undefined *)0x0) {
      uVar4 = XmStringCreateSimple(puVar5);
      local_98 = 0xe3f40b5;
      local_90 = 0xe3f48f1;
      local_8c = (uint)(byte)*ppuVar2[1];
      local_94 = uVar4;
      puVar5 = (undefined *)XmCreateToggleButton(uVar3,"preferenceBoolean",&local_98,2);
      ppuVar2[4] = puVar5;
      XtAddCallback(puVar5,0xe3f4ca5,FUN_0042caa0,ppuVar2);
      XtManageChild(ppuVar2[4]);
      XmStringFree(uVar4);
      puVar5 = ppuVar2[5];
      *(undefined *)(ppuVar2 + 3) = *ppuVar2[1];
      ppuVar2 = ppuVar2 + 5;
    }
    uVar3 = XmCreateScrolledWindow(local_4,"preferenceScaleScroll",&local_98,0);
    XtManageChild(uVar3);
    local_34 = XmCreateRowColumn(uVar3,"preferenceScales",&local_98,0);
    XtManageChild(local_34);
    ppuVar2 = &PTR_s_monitorTimeout_100089f0;
    puVar5 = PTR_s_monitorTimeout_100089f0;
    while (puVar5 != (undefined *)0x0) {
      uVar4 = 4;
      uVar3 = XmStringCreateSimple(puVar5);
      local_98 = 0xe3f4adf;
      local_90 = 0xf66187b;
      local_8c = *(uint *)ppuVar2[1];
      local_88 = 0xe3f430c;
      local_84 = ppuVar2[3];
      local_80 = 0xe3f4274;
      local_7c = ppuVar2[4];
      if (((uint)ppuVar2[2] & 8) != 0) {
        local_74 = (undefined *)0x2;
        local_78 = 0xe3f45e5;
        uVar4 = 5;
      }
      local_94 = uVar3;
      puVar5 = (undefined *)XmCreateScale(local_34,"preferenceScale",&local_98,uVar4);
      ppuVar2[6] = puVar5;
      XtAddCallback(puVar5,0xe3f4ca5,FUN_0042caec,ppuVar2);
      XtManageChild(ppuVar2[6]);
      XmStringFree(uVar3);
      puVar5 = ppuVar2[7];
      ppuVar2[5] = *(undefined **)ppuVar2[1];
      ppuVar2 = ppuVar2 + 7;
    }
    ppuVar2 = &PTR_s_mouseSpeed_10008b5c;
    puVar5 = PTR_s_mouseSpeed_10008b5c;
    while (puVar5 != (undefined *)0x0) {
      fVar6 = *(float *)(&DAT_100094f0 + (int)ppuVar2[5] * 4);
      uVar4 = 5;
      uVar3 = XmStringCreateSimple(puVar5);
      local_98 = 0xe3f4adf;
      local_90 = 0xf66187b;
      local_88 = 0xe3f430c;
      local_80 = 0xe3f4274;
      if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
        fVar1 = ROUND(*(float *)ppuVar2[1] * fVar6);
      }
      else {
        fVar1 = FLOOR(*(float *)ppuVar2[1] * fVar6);
      }
      local_8c = (uint)fVar1;
      local_78 = 0xe3f3995;
      if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
        fVar1 = ROUND((float)(int)ppuVar2[3] * fVar6);
      }
      else {
        fVar1 = FLOOR((float)(int)ppuVar2[3] * fVar6);
      }
      local_84 = (undefined *)(int)fVar1;
      if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
        fVar6 = ROUND((float)(int)ppuVar2[4] * fVar6);
      }
      else {
        fVar6 = FLOOR((float)(int)ppuVar2[4] * fVar6);
      }
      local_7c = (undefined *)(int)fVar6;
      local_74 = ppuVar2[5];
      if (((uint)ppuVar2[2] & 8) != 0) {
        local_6c = 2;
        local_70 = 0xe3f45e5;
        uVar4 = 6;
      }
      local_94 = uVar3;
      puVar5 = (undefined *)XmCreateScale(local_34,"preferenceScale",&local_98,uVar4);
      ppuVar2[7] = puVar5;
      XtAddCallback(puVar5,0xe3f4ca5,FUN_0042cb38,ppuVar2);
      XtManageChild(ppuVar2[7]);
      XmStringFree(uVar3);
      puVar5 = ppuVar2[8];
      ppuVar2[6] = *(undefined **)ppuVar2[1];
      ppuVar2 = ppuVar2 + 8;
    }
    local_38 = XmCreateForm(local_4,"preferenceColorForm",&local_98,0);
    XtManageChild(local_38);
    local_98 = 0xe3f40cb;
    local_90 = 0xe3f46dd;
    local_88 = 0xe3f3701;
    local_94 = 1;
    local_8c = 1;
    local_84 = (undefined *)0x1;
    uVar3 = XmCreateRowColumn(local_38,"preferenceColorScales",&local_98,3);
    XtManageChild(uVar3);
    pref_red_scale = XmCreateScale(uVar3,"preferenceRedScale",&local_98,0);
    XtManageChild(pref_red_scale);
    XtAddCallback(pref_red_scale,0xe3f4ca5,FUN_0042d8e0,0);
    pref_hue_scale = XmCreateScale(uVar3,"preferenceHueScale",&local_98,0);
    XtManageChild(pref_hue_scale);
    XtAddCallback(pref_hue_scale,0xe3f4ca5,FUN_0042d9f8,0);
    pref_green_scale = XmCreateScale(uVar3,"preferenceGreenScale",&local_98,0);
    XtManageChild(pref_green_scale);
    XtAddCallback(pref_green_scale,0xe3f4ca5,FUN_0042d8e0,0);
    pref_sat_scale = XmCreateScale(uVar3,"preferenceSatScale",&local_98,0);
    XtManageChild(pref_sat_scale);
    XtAddCallback(pref_sat_scale,0xe3f4ca5,FUN_0042d9f8,0);
    pref_blue_scale = XmCreateScale(uVar3,"preferenceBlueScale",&local_98,0);
    XtManageChild(pref_blue_scale);
    XtAddCallback(pref_blue_scale,0xe3f4ca5,FUN_0042d8e0,0);
    pref_val_scale = XmCreateScale(uVar3,"preferenceValScale",&local_98,0);
    XtManageChild(pref_val_scale);
    XtAddCallback(pref_val_scale,0xe3f4ca5,FUN_0042d9f8,0);
    FUN_0042d618();
    FUN_0042d6f0();
    local_88 = 0xe3f46dd;
    local_98 = 0xe3f4b1d;
    local_90 = 0xe3f40cb;
    local_80 = 0xe3f3701;
    local_78 = 0xe3f3753;
    local_94 = 1;
    local_8c = 1;
    local_84 = (undefined *)0x1;
    local_7c = (undefined *)0x3;
    local_74 = (undefined *)uVar3;
    uVar3 = XmCreateScrolledWindow(local_38,"preferenceColorScroll",&local_98,5);
    XtManageChild(uVar3);
    local_40 = XmCreateRadioBox(uVar3,"preferenceColors",&local_98,0);
    XtManageChild(local_40);
    ppuVar2 = &PTR_s_groundColor_1000935c;
    puVar5 = PTR_s_groundColor_1000935c;
    while (puVar5 != (undefined *)0x0) {
      uVar4 = 1;
      uVar3 = XmStringCreateSimple(puVar5);
      local_98 = 0xe3f40b5;
      if (ppuVar2 == (undefined **)PTR_PTR_100094ec) {
        local_90 = 0xe3f48f1;
        local_8c = 1;
        uVar4 = 2;
      }
      local_94 = uVar3;
      puVar5 = (undefined *)XmCreateToggleButton(local_40,"preferenceColor",&local_98,uVar4);
      ppuVar2[3] = puVar5;
      XtAddCallback(puVar5,0xe3f4ca5,FUN_0042cbb8,ppuVar2);
      XtManageChild(ppuVar2[3]);
      XmStringFree(uVar3);
      puVar5 = ppuVar2[4];
      ppuVar2[2] = *(undefined **)ppuVar2[1];
      ppuVar2 = ppuVar2 + 4;
    }
    XtManageChild(DAT_10008940);
  }
  else {
    XtManageChild();
    uVar3 = XtDisplay(DAT_10008940);
    uVar4 = XtWindow(DAT_10008940);
    XMapWindow(uVar3,uVar4);
    uVar3 = XtWindow(DAT_10008940);
    XRaiseWindow(display,uVar3);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
