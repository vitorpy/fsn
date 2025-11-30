/**
 * toggle_legend
 *
 * Extracted from fsn.c lines 37820-37898
 * Category: UI
 */

void toggle_legend(void)

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
    local_4c = _legend_separator_data;
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
    legend_separator_widget = XmCreateSeparator(panel_widget,"legendSep",&local_50,5);
  }
  XtManageChild(legend_widget);
  XtManageChild(legend_separator_widget);
  local_44 = legend_separator_widget;
  local_50 = 0xe3f3701;
  local_48 = 0xe3f3753;
  local_4c = 3;
  XtSetValues(pane_form_widget,&local_50,2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
