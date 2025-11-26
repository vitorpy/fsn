/**
 * preferences.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "preferences.h"
#include "fsn_types.h"
#include "fsn_state.h"
#include "fsn_igl.h"

void showPreferencePanel(void)

{
  float fVar1;
  undefined **ppuVar2;
  Widget uVar3;
  Widget uVar4;
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
  Widget local_40;
  Widget local_38;
  Widget local_34;
  Widget local_8;
  Widget local_4;
  
  if (preference_panel_shell == 0) {
    local_98 = 0xf662094;
    local_94 = 1;
    preference_panel_shell = XtCreatePopupShell("preferencePanel",topLevelShellWidgetClass,toplevel,(Arg*)&local_98,1);
    XtAddCallback(preference_panel_shell,(char*)0xf6615c9,pref_panel_map_callback,0);
    local_4 = XmCreatePanedWindow(preference_panel_shell,"preferencePane",(Arg*)&local_98,0);
    XtManageChild(local_4);
    install_help_callback(local_4,&prefPanelHelp);
    local_8 = XmCreateRowColumn(local_4,"preferenceHeader",(Arg*)&local_98,0);
    XtManageChild(local_8);
    uVar3 = XmCreateLabel(local_8,"preferenceHeaderLabel",(Arg*)&local_98,0);
    XtManageChild(uVar3);
    uVar3 = XmCreateRowColumn(local_8,"preferenceHeaderButtons",(Arg*)&local_98,0);
    XtManageChild(uVar3);
    uVar4 = XmCreatePushButton(uVar3,"preferenceQuit",(Arg*)&local_98,0);
    XtAddCallback(uVar4,(char*)0xe3f35b3,hidePreferencePanel,0);
    XtManageChild(uVar4);
    uVar4 = XmCreatePushButton(uVar3,"preferenceUndo",(Arg*)&local_98,0);
    XtAddCallback(uVar4,(char*)0xe3f35b3,pref_color_callback,0);
    XtManageChild(uVar4);
    uVar4 = XmCreatePushButton(uVar3,"preferenceSaveChanges",(Arg*)&local_98,0);
    XtAddCallback(uVar4,(char*)0xe3f35b3,toggle_pair_callback,0);
    XtManageChild(uVar4);
    uVar3 = XmCreatePushButton(uVar3,"preferenceSaveAll",(Arg*)&local_98,0);
    XtAddCallback(uVar3,(char*)0xe3f35b3,toggle_pair_callback,1);
    XtManageChild(uVar3);
    uVar3 = XmCreateRowColumn(local_8,"preferenceHeaderButtons2",(Arg*)&local_98,0);
    XtManageChild(uVar3);
    uVar4 = XmCreatePushButton(uVar3,"preferenceSelect",(Arg*)&local_98,0);
    XtAddCallback(uVar4,(char*)0xe3f35b3,color_select_callback,0);
    XtManageChild(uVar4);
    pref_filename_field = XmCreateTextField(uVar3,"preferenceFileName",(Arg*)&local_98,0);
    __src = getenv("HOME");
    if (__src != (char *)0x0) {
      strcpy(acStack_4b0,__src);
      strcat(acStack_4b0,"/.Xdefaults");
      XmTextFieldSetString(pref_filename_field,acStack_4b0);
    }
    XtManageChild(pref_filename_field);
    uVar3 = XmCreateRowColumn(local_4,"preferenceBooleans",(Arg*)&local_98,0);
    XtManageChild(uVar3);
    ppuVar2 = &PTR_s_shrinkOnZoom_10008950;
    puVar5 = PTR_s_shrinkOnZoom_10008950;
    while (puVar5 != (undefined *)0x0) {
      uVar4 = XmStringCreateSimple(puVar5);
      local_98 = 0xe3f40b5;
      local_90 = 0xe3f48f1;
      local_8c = (uint)(byte)*ppuVar2[1];
      local_94 = uVar4;
      puVar5 = (undefined *)XmCreateToggleButton(uVar3,"preferenceBoolean",(Arg*)&local_98,2);
      ppuVar2[4] = puVar5;
      XtAddCallback(puVar5,(char*)0xe3f4ca5,link_color_toggle_callback,ppuVar2);
      XtManageChild(ppuVar2[4]);
      XmStringFree(uVar4);
      puVar5 = ppuVar2[5];
      *(undefined *)(ppuVar2 + 3) = *ppuVar2[1];
      ppuVar2 = ppuVar2 + 5;
    }
    uVar3 = XmCreateScrolledWindow(local_4,"preferenceScaleScroll",(Arg*)&local_98,0);
    XtManageChild(uVar3);
    local_34 = XmCreateRowColumn(uVar3,"preferenceScales",(Arg*)&local_98,0);
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
      puVar5 = (undefined *)XmCreateScale(local_34,"preferenceScale",(Arg*)&local_98,uVar4);
      ppuVar2[6] = puVar5;
      XtAddCallback(puVar5,(char*)0xe3f4ca5,exec_color_toggle_callback,ppuVar2);
      XtManageChild(ppuVar2[6]);
      XmStringFree(uVar3);
      puVar5 = ppuVar2[7];
      ppuVar2[5] = *(undefined **)ppuVar2[1];
      ppuVar2 = ppuVar2 + 7;
    }
    ppuVar2 = &PTR_s_mouseSpeed_10008b5c;
    puVar5 = PTR_s_mouseSpeed_10008b5c;
    while (puVar5 != (undefined *)0x0) {
      fVar6 = *(float *)(&pref_float_array + (int)ppuVar2[5] * 4);
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
      puVar5 = (undefined *)XmCreateScale(local_34,"preferenceScale",(Arg*)&local_98,uVar4);
      ppuVar2[7] = puVar5;
      XtAddCallback(puVar5,(char*)0xe3f4ca5,file_color_toggle_callback,ppuVar2);
      XtManageChild(ppuVar2[7]);
      XmStringFree(uVar3);
      puVar5 = ppuVar2[8];
      ppuVar2[6] = *(undefined **)ppuVar2[1];
      ppuVar2 = ppuVar2 + 8;
    }
    local_38 = XmCreateForm(local_4,"preferenceColorForm",(Arg*)&local_98,0);
    XtManageChild(local_38);
    local_98 = 0xe3f40cb;
    local_90 = 0xe3f46dd;
    local_88 = 0xe3f3701;
    local_94 = 1;
    local_8c = 1;
    local_84 = (undefined *)0x1;
    uVar3 = XmCreateRowColumn(local_38,"preferenceColorScales",(Arg*)&local_98,3);
    XtManageChild(uVar3);
    pref_red_scale = XmCreateScale(uVar3,"preferenceRedScale",(Arg*)&local_98,0);
    XtManageChild(pref_red_scale);
    XtAddCallback(pref_red_scale,(char*)0xe3f4ca5,rgb_scale_callback,0);
    pref_hue_scale = XmCreateScale(uVar3,"preferenceHueScale",(Arg*)&local_98,0);
    XtManageChild(pref_hue_scale);
    XtAddCallback(pref_hue_scale,(char*)0xe3f4ca5,hsv_scale_callback,0);
    pref_green_scale = XmCreateScale(uVar3,"preferenceGreenScale",(Arg*)&local_98,0);
    XtManageChild(pref_green_scale);
    XtAddCallback(pref_green_scale,(char*)0xe3f4ca5,rgb_scale_callback,0);
    pref_sat_scale = XmCreateScale(uVar3,"preferenceSatScale",(Arg*)&local_98,0);
    XtManageChild(pref_sat_scale);
    XtAddCallback(pref_sat_scale,(char*)0xe3f4ca5,hsv_scale_callback,0);
    pref_blue_scale = XmCreateScale(uVar3,"preferenceBlueScale",(Arg*)&local_98,0);
    XtManageChild(pref_blue_scale);
    XtAddCallback(pref_blue_scale,(char*)0xe3f4ca5,rgb_scale_callback,0);
    pref_val_scale = XmCreateScale(uVar3,"preferenceValScale",(Arg*)&local_98,0);
    XtManageChild(pref_val_scale);
    XtAddCallback(pref_val_scale,(char*)0xe3f4ca5,hsv_scale_callback,0);
    refresh_legend_colors();
    update_legend_display();
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
    uVar3 = XmCreateScrolledWindow(local_38,"preferenceColorScroll",(Arg*)&local_98,5);
    XtManageChild(uVar3);
    local_40 = XmCreateRadioBox(uVar3,"preferenceColors",(Arg*)&local_98,0);
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
      puVar5 = (undefined *)XmCreateToggleButton(local_40,"preferenceColor",(Arg*)&local_98,uVar4);
      ppuVar2[3] = puVar5;
      XtAddCallback(puVar5,(char*)0xe3f4ca5,dir_color_toggle_callback,ppuVar2);
      XtManageChild(ppuVar2[3]);
      XmStringFree(uVar3);
      puVar5 = ppuVar2[4];
      ppuVar2[2] = *(undefined **)ppuVar2[1];
      ppuVar2 = ppuVar2 + 4;
    }
    XtManageChild(preference_panel_shell);
  }
  else {
    XtManageChild(preference_panel_shell);
    uVar3 = XtDisplay(preference_panel_shell);
    uVar4 = XtWindow(preference_panel_shell);
    XMapWindow(uVar3,uVar4);
    uVar3 = XtWindow(preference_panel_shell);
    XRaiseWindow(display,uVar3);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void hidePreferencePanel(void)

{
  if (preference_panel_shell != 0) {
    XtUnmanageChild(preference_panel_shell);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
