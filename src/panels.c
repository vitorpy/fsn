/**
 * panels.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "panels.h"
#include "fsn_types.h"
#include "fsn_state.h"

void create_panel_component(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = XmCreateRowColumn(param_1,"controls",param_2,param_3);
  XtManageChild(uVar1);
  install_help_callback(uVar1,&controlHelp);
  uVar2 = XmCreatePushButton(uVar1,"reset",param_2,0);
  XtManageChild(uVar2);
  XtAddCallback(uVar2,0xe3f35b3,reset_eye,0);
  uVar2 = XmCreatePushButton(uVar1,&search_button_name,param_2,0);
  XtManageChild(uVar2);
  XtAddCallback(uVar2,0xe3f35b3,search_button_callback,0);
  uVar2 = XmCreatePushButton(uVar1,&scale_button_name,param_2,0);
  XtManageChild(uVar2);
  XtAddCallback(uVar2,0xe3f35b3,height_scale_callback,0);
  uVar2 = XmCreatePushButton(uVar1,"front",param_2,0);
  XtManageChild(uVar2);
  XtAddCallback(uVar2,0xe3f35b3,layout_scale_callback,0);
  uVar2 = XmCreateSeparator(uVar1,"control_sep",param_2,0);
  XtManageChild(uVar2);
  uVar2 = XmCreateRowColumn(uVar1,"control_scales",param_2,0);
  XtManageChild(uVar2);
  vertical_scale_widget = XmCreateScale(uVar2,"v_scale",param_2,0);
  XtAddCallback(vertical_scale_widget,0xe3f4ca5,vertical_scale_callback,0);
  XtAddCallback(vertical_scale_widget,0xe3f3b93,vertical_scale_callback,0);
  XtManageChild(vertical_scale_widget);
  zoom_scale_widget = XmCreateScale(uVar2,"z_scale",param_2,0);
  XtAddCallback(zoom_scale_widget,0xe3f4ca5,zoom_scale_callback,0);
  XtAddCallback(zoom_scale_widget,0xe3f3b93,zoom_scale_callback,0);
  XtManageChild(zoom_scale_widget);
  uVar2 = XmCreateSeparator(uVar1,"control_sep",param_2,0);
  XtManageChild(uVar2);
  init_search_panel(uVar1);
  uVar2 = XmCreateSeparator(uVar1,"control_sep",param_2,0);
  XtManageChild(uVar2);
  init_mark_panel(uVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_panel_layout(void)

{
  undefined4 local_50;
  undefined4 local_4c;
  
  local_50 = 0xe3f40cb;
  local_4c = 1;
  controlsShowing = 0;
  XtSetValues(panel_vsep_widget,&local_50,1);
  XtUnmanageChild(copy_button_widget);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void get_panel_value(undefined4 param_1)

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
  setup_menu_resources(display,0,&local_74,&local_78);
  local_c = XmCreatePulldownMenu(local_4,"session_pane",&local_74,local_78);
  XtAddCallback(local_c,0xe3f41fe,overlayMenuMappedCB,0);
  XtAddCallback(local_c,0xe3f4c38,overlayMenuUnmappedCB,0);
  install_help_callback(local_c,&sessionHelp);
  local_78 = 0;
  autoscan_split_toggle = XmCreateToggleButton(local_c,"menuSplit",&local_74,0);
  XtManageChild(autoscan_split_toggle);
  XtAddCallback(autoscan_split_toggle,0xe3f4ca5,autoscan_toggle_callback,0);
  local_78 = 0;
  local_24 = XmCreatePushButton(local_c,"menuRescan",&local_74,0);
  XtManageChild(local_24);
  XtAddCallback(local_24,0xe3f35b3,rescanDatabase,0);
  local_78 = 0;
  local_24 = XmCreatePushButton(local_c,"menuSave",&local_74,0);
  XtManageChild(local_24);
  XtAddCallback(local_24,0xe3f35b3,dumpDatabaseCB,0);
  configure_context_widget(local_c);
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
  setup_menu_resources(display,0,&local_74,&local_78);
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
  XtAddCallback(local_24,0xe3f35b3,show_controls,0);
  local_78 = 0;
  local_24 = XmCreatePushButton(local_14,"menuLegend",&local_74,0);
  XtManageChild(local_24);
  XtAddCallback(local_24,0xe3f35b3,toggle_legend,0);
  local_78 = 0;
  local_24 = XmCreatePushButton(local_14,"menuPreferences",&local_74,0);
  XtManageChild(local_24);
  XtAddCallback(local_24,0xe3f35b3,showPreferencePanel,0);
  local_78 = 0;
  setup_menu_resources(display,0,&local_74,&local_78);
  local_18 = XmCreatePulldownMenu(local_14,"hide_pane",&local_74,local_78);
  local_78 = 0;
  local_24 = XmCreatePushButton(local_18,"menuOverview",&local_74,0);
  XtManageChild(local_24);
  XtAddCallback(local_24,0xe3f35b3,hideOverview,0);
  local_78 = 0;
  local_24 = XmCreatePushButton(local_18,"menuControls",&local_74,0);
  XtManageChild(local_24);
  XtAddCallback(local_24,0xe3f35b3,init_panel_layout,0);
  local_78 = 0;
  local_24 = XmCreatePushButton(local_18,"menuLegend",&local_74,0);
  XtManageChild(local_24);
  XtAddCallback(local_24,0xe3f35b3,controls_button_callback,0);
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
  setup_menu_resources(display,0,&local_74,&local_78);
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
  setup_menu_resources(display,0,&local_74,&local_78);
  local_70 = XmCreatePulldownMenu(local_10,"dheight_pane",&local_74,local_78);
  local_74 = 0xe3f4a31;
  local_78 = 1;
  local_1c = local_70;
  uVar1 = XmCreateCascadeButton(local_10,"menuHeight",&local_74,1);
  XtManageChild(uVar1);
  local_78 = 0;
  file_height_none_toggle = XmCreateToggleButton(local_1c,"menuHeightNone",&local_74,0);
  XtManageChild(file_height_none_toggle);
  XtAddCallback(file_height_none_toggle,0xe3f4ca5,file_height_mode_callback,0);
  local_78 = 0;
  file_height_linear_toggle = XmCreateToggleButton(local_1c,"menuHeightLinear",&local_74,0);
  XtManageChild(file_height_linear_toggle);
  XtAddCallback(file_height_linear_toggle,0xe3f4ca5,file_height_mode_callback,1);
  local_78 = 0;
  file_height_exag_toggle = XmCreateToggleButton(local_1c,"menuHeightExaggerated",&local_74,0);
  XtManageChild(file_height_exag_toggle);
  XtAddCallback(file_height_exag_toggle,0xe3f4ca5,file_height_mode_callback,2);
  local_74 = 0xe3f464e;
  local_78 = 1;
  local_70 = 1;
  setup_menu_resources(display,0,&local_74,&local_78);
  local_70 = XmCreatePulldownMenu(local_10,"ddir_pane",&local_74,local_78);
  local_74 = 0xe3f4a31;
  local_78 = 1;
  local_20 = local_70;
  dir_height_menu_button = XmCreateCascadeButton(local_10,"menuDirectoryHeight",&local_74,1);
  XtManageChild(dir_height_menu_button);
  local_78 = 0;
  dir_flat_toggle = XmCreateToggleButton(local_20,"menuDirectoryFlat",&local_74,0);
  XtManageChild(dir_flat_toggle);
  XtAddCallback(dir_flat_toggle,0xe3f4ca5,dir_height_mode_callback,0);
  local_78 = 0;
  dir_files_only_toggle = XmCreateToggleButton(local_20,"menuDirectoryFilesOnly",&local_74,0);
  XtManageChild(dir_files_only_toggle);
  XtAddCallback(dir_files_only_toggle,0xe3f4ca5,dir_height_mode_callback,1);
  local_78 = 0;
  dir_children_toggle = XmCreateToggleButton(local_20,"menuDirectoryChildren",&local_74,0);
  XtManageChild(dir_children_toggle);
  XtAddCallback(dir_children_toggle,0xe3f4ca5,dir_height_mode_callback,2);
  init_context_menus(local_4,param_1);
  finalize_menu_setup(local_4);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

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
  
  if (preference_panel_shell == 0) {
    local_98 = 0xf662094;
    local_94 = 1;
    preference_panel_shell = XtCreatePopupShell("preferencePanel",topLevelShellWidgetClass,toplevel,&local_98,1);
    XtAddCallback(preference_panel_shell,0xf6615c9,pref_panel_map_callback,0);
    local_4 = XmCreatePanedWindow(preference_panel_shell,"preferencePane",&local_98,0);
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
    XtAddCallback(uVar4,0xe3f35b3,pref_color_callback,0);
    XtManageChild(uVar4);
    uVar4 = XmCreatePushButton(uVar3,"preferenceSaveChanges",&local_98,0);
    XtAddCallback(uVar4,0xe3f35b3,toggle_pair_callback,0);
    XtManageChild(uVar4);
    uVar3 = XmCreatePushButton(uVar3,"preferenceSaveAll",&local_98,0);
    XtAddCallback(uVar3,0xe3f35b3,toggle_pair_callback,1);
    XtManageChild(uVar3);
    uVar3 = XmCreateRowColumn(local_8,"preferenceHeaderButtons2",&local_98,0);
    XtManageChild(uVar3);
    uVar4 = XmCreatePushButton(uVar3,"preferenceSelect",&local_98,0);
    XtAddCallback(uVar4,0xe3f35b3,color_select_callback,0);
    XtManageChild(uVar4);
    pref_filename_field = XmCreateTextField(uVar3,"preferenceFileName",&local_98,0);
    __src = getenv("HOME");
    if (__src != (char *)0x0) {
      strcpy(acStack_4b0,__src);
      strcat(acStack_4b0,"/.Xdefaults");
      XmTextFieldSetString(pref_filename_field,acStack_4b0);
    }
    XtManageChild(pref_filename_field);
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
      XtAddCallback(puVar5,0xe3f4ca5,link_color_toggle_callback,ppuVar2);
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
      XtAddCallback(puVar5,0xe3f4ca5,exec_color_toggle_callback,ppuVar2);
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
      puVar5 = (undefined *)XmCreateScale(local_34,"preferenceScale",&local_98,uVar4);
      ppuVar2[7] = puVar5;
      XtAddCallback(puVar5,0xe3f4ca5,file_color_toggle_callback,ppuVar2);
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
    XtAddCallback(pref_red_scale,0xe3f4ca5,rgb_scale_callback,0);
    pref_hue_scale = XmCreateScale(uVar3,"preferenceHueScale",&local_98,0);
    XtManageChild(pref_hue_scale);
    XtAddCallback(pref_hue_scale,0xe3f4ca5,hsv_scale_callback,0);
    pref_green_scale = XmCreateScale(uVar3,"preferenceGreenScale",&local_98,0);
    XtManageChild(pref_green_scale);
    XtAddCallback(pref_green_scale,0xe3f4ca5,rgb_scale_callback,0);
    pref_sat_scale = XmCreateScale(uVar3,"preferenceSatScale",&local_98,0);
    XtManageChild(pref_sat_scale);
    XtAddCallback(pref_sat_scale,0xe3f4ca5,hsv_scale_callback,0);
    pref_blue_scale = XmCreateScale(uVar3,"preferenceBlueScale",&local_98,0);
    XtManageChild(pref_blue_scale);
    XtAddCallback(pref_blue_scale,0xe3f4ca5,rgb_scale_callback,0);
    pref_val_scale = XmCreateScale(uVar3,"preferenceValScale",&local_98,0);
    XtManageChild(pref_val_scale);
    XtAddCallback(pref_val_scale,0xe3f4ca5,hsv_scale_callback,0);
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
      XtAddCallback(puVar5,0xe3f4ca5,dir_color_toggle_callback,ppuVar2);
      XtManageChild(ppuVar2[3]);
      XmStringFree(uVar3);
      puVar5 = ppuVar2[4];
      ppuVar2[2] = *(undefined **)ppuVar2[1];
      ppuVar2 = ppuVar2 + 4;
    }
    XtManageChild(preference_panel_shell);
  }
  else {
    XtManageChild();
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
    XtUnmanageChild();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_mark_panel(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int unaff_gp;
  int local_54 [21];
  
  local_54[0] = *(int *)(unaff_gp + -0x7f5c) + 0x2c7;
  local_54[1] = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7ba4))
                    (param_1,*(int *)(unaff_gp + -0x7fa4) + 0x3c30,local_54,1);
  puVar4 = (undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ec0);
  *puVar4 = uVar1;
  uVar1 = (**(code **)(unaff_gp + -0x7ba0))(uVar1,7);
  (**(code **)(unaff_gp + -0x7b70))(uVar1);
  uVar1 = (**(code **)(unaff_gp + -0x7ba0))(*puVar4,0xd);
  (**(code **)(unaff_gp + -0x7b70))(uVar1);
  uVar1 = (**(code **)(unaff_gp + -0x7ba0))(*puVar4,0xb);
  (**(code **)(unaff_gp + -0x7b70))(uVar1);
  uVar1 = (**(code **)(unaff_gp + -0x7ba0))(*puVar4,0xe);
  (**(code **)(unaff_gp + -0x7b70))(uVar1);
  uVar1 = (**(code **)(unaff_gp + -0x7ba0))(*puVar4,8);
  iVar2 = *(int *)(unaff_gp + -0x7f60);
  iVar3 = *(int *)(unaff_gp + -0x7fe0);
  pcVar5 = *(code **)(unaff_gp + -0x7c54);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ec4) = uVar1;
  (*pcVar5)(*puVar4,iVar2 + 0x214e,iVar3 + -0xb28,0);
  (**(code **)(unaff_gp + -0x7c54))
            (*puVar4,*(int *)(unaff_gp + -0x7f60) + 0x14a5,*(int *)(unaff_gp + -0x7fe0) + -0xa30,0);
  (**(code **)(unaff_gp + -0x7c78))(*puVar4);
  (**(code **)(unaff_gp + -0x785c))(*puVar4,*(undefined4 *)(unaff_gp + -0x7644));
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (param_1,*(int *)(unaff_gp + -0x7fa4) + 0x3c40,local_54,0);
  (**(code **)(unaff_gp + -0x7c54))
            (uVar1,*(int *)(unaff_gp + -0x7f60) + 0x124b,*(int *)(unaff_gp + -0x7fe0) + -0x8c4,0);
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  (**(code **)(unaff_gp + -0x785c))(uVar1,*(undefined4 *)(unaff_gp + -0x7644));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_search_panel(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  int unaff_gp;
  int local_28;
  undefined4 local_24;
  
  uVar1 = (**(code **)(unaff_gp + -0x7e90))(*(int *)(unaff_gp + -0x7fa4) + 0x3d24);
  iVar5 = *(int *)(unaff_gp + -0x7fa4);
  pcVar6 = *(code **)(unaff_gp + -0x7e90);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ed0) = uVar1;
  uVar1 = (*pcVar6)(iVar5 + 0x3d2c);
  iVar5 = *(int *)(unaff_gp + -0x7fa4);
  pcVar6 = *(code **)(unaff_gp + -0x7e90);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ed4) = uVar1;
  uVar1 = (*pcVar6)(iVar5 + 0x3d30);
  iVar5 = *(int *)(unaff_gp + -0x7fa4);
  pcVar6 = *(code **)(unaff_gp + -0x7ba4);
  local_28 = *(int *)(unaff_gp + -0x7f60) + 0x1795;
  local_24 = 1;
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ed8) = uVar1;
  uVar1 = (*pcVar6)(param_1,iVar5 + 0x3d34,&local_28,1);
  uVar2 = (**(code **)(unaff_gp + -0x7ba0))(uVar1,7);
  (**(code **)(unaff_gp + -0x7b70))(uVar2);
  uVar2 = (**(code **)(unaff_gp + -0x7ba0))(uVar1,0xe);
  (**(code **)(unaff_gp + -0x7b70))(uVar2);
  uVar2 = (**(code **)(unaff_gp + -0x7ba0))(uVar1,0xb);
  (**(code **)(unaff_gp + -0x7b70))(uVar2);
  uVar2 = (**(code **)(unaff_gp + -0x7ba0))(uVar1,0xd);
  (**(code **)(unaff_gp + -0x7b70))(uVar2);
  uVar2 = (**(code **)(unaff_gp + -0x7ba0))(uVar1,1);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ef8) = uVar2;
  (**(code **)(unaff_gp + -0x7ce8))(uVar2,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ef8));
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  (**(code **)(unaff_gp + -0x7c54))
            (uVar1,*(int *)(unaff_gp + -0x7f60) + 0x214e,*(int *)(unaff_gp + -0x7fe0) + 0x448,0);
  (**(code **)(unaff_gp + -0x7c54))
            (uVar1,*(int *)(unaff_gp + -0x7f60) + 0x12d9,*(int *)(unaff_gp + -0x7fe0) + 0x8ec,0);
  (**(code **)(unaff_gp + -0x7c54))
            (uVar1,*(int *)(unaff_gp + -0x7f60) + 0x14a5,*(int *)(unaff_gp + -0x7fe0) + 0x7bc,0);
  local_24 = 1;
  local_28 = *(int *)(unaff_gp + -0x7f5c) + 0x1f9;
  uVar2 = (**(code **)(unaff_gp + -0x7af8))(uVar1,*(int *)(unaff_gp + -0x7fa4) + 0x3d3c,&local_28,1)
  ;
  (**(code **)(unaff_gp + -0x7c78))(uVar2);
  local_24 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ed0);
  local_28 = *(int *)(unaff_gp + -0x7f60) + 0x1d4d;
  uVar3 = (**(code **)(unaff_gp + -0x7c28))(uVar2,*(int *)(unaff_gp + -0x7fa4) + 0x3d44,&local_28,1)
  ;
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ee0) = uVar3;
  (**(code **)(unaff_gp + -0x7c78))(uVar3);
  local_28 = *(int *)(unaff_gp + -0x7f5c) + 0x1f9;
  local_24 = 2;
  uVar3 = (**(code **)(unaff_gp + -0x7af8))(uVar2,*(int *)(unaff_gp + -0x7fa4) + 0x3d50,&local_28,1)
  ;
  (**(code **)(unaff_gp + -0x7c78))(uVar3);
  uVar4 = (**(code **)(unaff_gp + -0x7c28))(uVar3,*(int *)(unaff_gp + -0x7fa4) + 0x3d5c,&local_28,0)
  ;
  (**(code **)(unaff_gp + -0x7c78))(uVar4);
  uVar3 = (**(code **)(unaff_gp + -0x7de4))(uVar3,*(int *)(unaff_gp + -0x7fa4) + 0x3d64,&local_28,0)
  ;
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ee4) = uVar3;
  (**(code **)(unaff_gp + -0x7c78))(uVar3);
  local_28 = *(int *)(unaff_gp + -0x7f5c) + 0x1f9;
  local_24 = 2;
  uVar3 = (**(code **)(unaff_gp + -0x7af8))(uVar2,*(int *)(unaff_gp + -0x7fa4) + 0x3d70,&local_28,1)
  ;
  (**(code **)(unaff_gp + -0x7c78))(uVar3);
  uVar4 = (**(code **)(unaff_gp + -0x7c28))(uVar3,*(int *)(unaff_gp + -0x7fa4) + 0x3d7c,&local_28,0)
  ;
  (**(code **)(unaff_gp + -0x7c78))(uVar4);
  local_24 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ed8);
  local_28 = *(int *)(unaff_gp + -0x7f60) + 0x1d4d;
  uVar4 = (**(code **)(unaff_gp + -0x7b20))(uVar3,*(int *)(unaff_gp + -0x7fa4) + 0x3d84,&local_28,1)
  ;
  iVar5 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ef0) = uVar4;
  (**(code **)(unaff_gp + -0x7c54))(uVar4,iVar5 + 0x124b,*(int *)(unaff_gp + -0x7fe0) + 0xb70,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ef0));
  iVar5 = *(int *)(unaff_gp + -0x7fa4);
  pcVar6 = *(code **)(unaff_gp + -0x7de4);
  *(undefined1 *)(*(int *)(unaff_gp + -0x7f94) + 0x6f04) = 0;
  uVar3 = (*pcVar6)(uVar3,iVar5 + 0x3d94,&local_28,0);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ee8) = uVar3;
  (**(code **)(unaff_gp + -0x7c78))(uVar3);
  local_24 = 2;
  local_28 = *(int *)(unaff_gp + -0x7f5c) + 0x1f9;
  uVar2 = (**(code **)(unaff_gp + -0x7af8))(uVar2,*(int *)(unaff_gp + -0x7fa4) + 0x3da0,&local_28,1)
  ;
  (**(code **)(unaff_gp + -0x7c78))(uVar2);
  uVar3 = (**(code **)(unaff_gp + -0x7c28))(uVar2,*(int *)(unaff_gp + -0x7fa4) + 0x3dac,&local_28,0)
  ;
  (**(code **)(unaff_gp + -0x7c78))(uVar3);
  local_24 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ed8);
  local_28 = *(int *)(unaff_gp + -0x7f60) + 0x1d4d;
  uVar3 = (**(code **)(unaff_gp + -0x7b20))(uVar2,*(int *)(unaff_gp + -0x7fa4) + 0x3db0,&local_28,1)
  ;
  iVar5 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ef4) = uVar3;
  (**(code **)(unaff_gp + -0x7c54))(uVar3,iVar5 + 0x124b,*(int *)(unaff_gp + -0x7fe0) + 0xc0c,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ef4));
  iVar5 = *(int *)(unaff_gp + -0x7fa4);
  pcVar6 = *(code **)(unaff_gp + -0x7de4);
  *(undefined1 *)(*(int *)(unaff_gp + -0x7f94) + 0x6f05) = 0;
  uVar2 = (*pcVar6)(uVar2,iVar5 + 0x3dc0,&local_28,0);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6eec) = uVar2;
  (**(code **)(unaff_gp + -0x7c78))(uVar2);
  (**(code **)(unaff_gp + -0x785c))(uVar1,*(undefined4 *)(unaff_gp + -0x7640));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
