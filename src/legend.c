/**
 * legend.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "legend.h"
#include "fsn_types.h"
#include "fsn_state.h"

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

void draw_legend_color_box(undefined4 *param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int unaff_gp;
  
  if (param_2 == 4) {
    if (param_1 != (undefined4 *)0x0) {
      (**(code **)(unaff_gp + -0x7b9c))(*param_1);
    }
    (**(code **)(unaff_gp + -0x7d54))();
    iVar2 = *(int *)(unaff_gp + -0x7f98);
    iVar4 = *(int *)(unaff_gp + -0x7f98) + 0x6f40;
    (**(code **)(unaff_gp + -0x7dc0))(iVar4 + *(int *)(iVar2 + 0x7010) * 0xc);
    (**(code **)(unaff_gp + -0x7dc0))(iVar4 + *(int *)(iVar2 + 0x7014) * 0xc);
    (**(code **)(unaff_gp + -0x7dc0))(iVar4 + *(int *)(iVar2 + 0x701c) * 0xc);
    (**(code **)(unaff_gp + -0x7dc0))(iVar4 + *(int *)(iVar2 + 0x7018) * 0xc);
    (**(code **)(unaff_gp + -0x7d3c))();
  }
  else if (param_2 == 3) {
    if (param_1 != (undefined4 *)0x0) {
      (**(code **)(unaff_gp + -0x7b9c))(*param_1);
    }
    (**(code **)(unaff_gp + -0x7b7c))();
    (**(code **)(unaff_gp + -0x7dc0))(*(int *)(unaff_gp + -0x7f98) + 0x7020);
    (**(code **)(unaff_gp + -0x7dc0))(*(int *)(unaff_gp + -0x7f98) + 0x702c);
    (**(code **)(unaff_gp + -0x7b94))();
  }
  else if (param_2 == 2) {
    if (param_1 != (undefined4 *)0x0) {
      (**(code **)(unaff_gp + -0x7b9c))(*param_1);
    }
    (**(code **)(unaff_gp + -0x7d54))();
    iVar2 = *(int *)(unaff_gp + -0x7f98);
    iVar4 = *(int *)(unaff_gp + -0x7f98) + 0x6f40;
    (**(code **)(unaff_gp + -0x7dc0))(iVar4 + *(int *)(iVar2 + 0x7000) * 0xc);
    (**(code **)(unaff_gp + -0x7dc0))(iVar4 + *(int *)(iVar2 + 0x7004) * 0xc);
    (**(code **)(unaff_gp + -0x7dc0))(iVar4 + *(int *)(iVar2 + 0x700c) * 0xc);
    (**(code **)(unaff_gp + -0x7dc0))(iVar4 + *(int *)(iVar2 + 0x7008) * 0xc);
    (**(code **)(unaff_gp + -0x7d3c))();
  }
  else {
    bVar1 = param_2 != 1 && param_1 != (undefined4 *)0x0;
    if ((param_2 == 1) && (param_1 != (undefined4 *)0x0)) {
      (**(code **)(unaff_gp + -0x7b9c))(param_1[1]);
    }
    if ((param_3 & 1) != 0) {
      if (bVar1) {
        (**(code **)(unaff_gp + -0x7b9c))(param_1[1]);
      }
      if (param_2 == 1) {
        (**(code **)(unaff_gp + -0x7d24))();
        iVar2 = *(int *)(unaff_gp + -0x7f98);
        piVar3 = (int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fa0);
        do {
          (**(code **)(unaff_gp + -0x7dc0))(iVar2 + 0x6f40 + *piVar3 * 0xc);
          piVar3 = piVar3 + 1;
        } while (piVar3 != (int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fb0));
        (**(code **)(unaff_gp + -0x7d20))();
      }
      else {
        (**(code **)(unaff_gp + -0x7d54))();
        iVar2 = *(int *)(unaff_gp + -0x7f98) + 0x6f40;
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fa0) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fa4) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fac) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fa8) * 0xc);
        (**(code **)(unaff_gp + -0x7d3c))();
      }
    }
    iVar2 = *(int *)(unaff_gp + -0x7f98) + 0x6f40;
    if (bVar1) {
      (**(code **)(unaff_gp + -0x7b9c))(param_1[3]);
    }
    if ((param_3 & 2) != 0) {
      if (param_2 == 1) {
        (**(code **)(unaff_gp + -0x7d24))();
        iVar4 = *(int *)(unaff_gp + -0x7f98) + 0x6fa0;
        do {
          (**(code **)(unaff_gp + -0x7dc0))(iVar2 + *(int *)(iVar4 + 0x10) * 0xc);
          iVar4 = iVar4 + 4;
        } while (iVar4 != *(int *)(unaff_gp + -0x7f98) + 0x6fb0);
        (**(code **)(unaff_gp + -0x7d20))();
      }
      else {
        (**(code **)(unaff_gp + -0x7d54))();
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fb0) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fb4) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fbc) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fb8) * 0xc);
        (**(code **)(unaff_gp + -0x7d3c))();
      }
    }
    if ((param_3 & 4) != 0) {
      if (param_2 == 1) {
        (**(code **)(unaff_gp + -0x7d24))();
        iVar4 = *(int *)(unaff_gp + -0x7f98) + 0x6fa0;
        do {
          (**(code **)(unaff_gp + -0x7dc0))(iVar2 + *(int *)(iVar4 + 0x20) * 0xc);
          iVar4 = iVar4 + 4;
        } while (iVar4 != *(int *)(unaff_gp + -0x7f98) + 0x6fb0);
        (**(code **)(unaff_gp + -0x7d20))();
      }
      else {
        (**(code **)(unaff_gp + -0x7d54))();
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fc0) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fc4) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fcc) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fc8) * 0xc);
        (**(code **)(unaff_gp + -0x7d3c))();
      }
    }
    if ((param_3 & 8) != 0) {
      if (bVar1) {
        (**(code **)(unaff_gp + -0x7b9c))(param_1[2]);
      }
      if (param_2 == 1) {
        (**(code **)(unaff_gp + -0x7d24))();
        iVar4 = *(int *)(unaff_gp + -0x7f98) + 0x6fa0;
        do {
          (**(code **)(unaff_gp + -0x7dc0))(iVar2 + *(int *)(iVar4 + 0x30) * 0xc);
          iVar4 = iVar4 + 4;
        } while (iVar4 != *(int *)(unaff_gp + -0x7f98) + 0x6fb0);
        (**(code **)(unaff_gp + -0x7d20))();
      }
      else {
        (**(code **)(unaff_gp + -0x7d54))();
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fd0) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fd4) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fdc) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fd8) * 0xc);
        (**(code **)(unaff_gp + -0x7d3c))();
      }
    }
    if ((param_3 & 0x10) != 0) {
      if (bVar1) {
        (**(code **)(unaff_gp + -0x7b9c))(*param_1);
      }
      if (param_2 == 1) {
        (**(code **)(unaff_gp + -0x7d24))();
        iVar4 = *(int *)(unaff_gp + -0x7f98) + 0x6fa0;
        do {
          (**(code **)(unaff_gp + -0x7dc0))(iVar2 + *(int *)(iVar4 + 0x40) * 0xc);
          iVar4 = iVar4 + 4;
        } while (iVar4 != *(int *)(unaff_gp + -0x7f98) + 0x6fb0);
        (**(code **)(unaff_gp + -0x7d20))();
      }
      else {
        (**(code **)(unaff_gp + -0x7d54))();
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fe0) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fe4) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fec) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fe8) * 0xc);
        (**(code **)(unaff_gp + -0x7d3c))();
      }
    }
    if ((param_3 & 0x20) != 0) {
      if (param_2 == 1) {
        (**(code **)(unaff_gp + -0x7d24))();
        iVar4 = *(int *)(unaff_gp + -0x7f98) + 0x6fa0;
        do {
          (**(code **)(unaff_gp + -0x7dc0))(iVar2 + *(int *)(iVar4 + 0x50) * 0xc);
          iVar4 = iVar4 + 4;
        } while (iVar4 != *(int *)(unaff_gp + -0x7f98) + 0x6fb0);
        (**(code **)(unaff_gp + -0x7d20))();
      }
      else {
        (**(code **)(unaff_gp + -0x7d54))();
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6ff0) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6ff4) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6ffc) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6ff8) * 0xc);
        (**(code **)(unaff_gp + -0x7d3c))();
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void create_color_legend_box(uint param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int unaff_gp;
  float fVar6;
  float fVar7;
  float fVar8;
  uint in_fcsr;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar5 = (int)param_1 >> 8 & 0xff;
  fVar8 = (float)((int)param_1 >> 0x10 & 0xff);
  fVar6 = (float)(param_1 & 0xff);
  fVar7 = (float)uVar5;
  (**(code **)(unaff_gp + -0x7730))((double)(param_1 & 0xff),(double)uVar5);
  iVar4 = *(int *)(unaff_gp + -0x75dc);
  (**(code **)(unaff_gp + -0x7744))((double)local_10,(double)(local_14 * *(float *)(iVar4 + 0x138)))
  ;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(fVar6);
  }
  else {
    fVar1 = FLOOR(fVar6);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar2 = ROUND(fVar7);
  }
  else {
    fVar2 = FLOOR(fVar7);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar3 = ROUND(fVar8);
  }
  else {
    fVar3 = FLOOR(fVar8);
  }
  (**(code **)(unaff_gp + -0x78dc))
            ((int)fVar1 + (int)fVar2 * 0x100 + (int)fVar3 * 0x10000,param_2 + 0x10);
  (**(code **)(unaff_gp + -0x7744))((double)local_10,(double)(local_14 * *(float *)(iVar4 + 0x130)))
  ;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(fVar6);
  }
  else {
    fVar1 = FLOOR(fVar6);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar2 = ROUND(fVar7);
  }
  else {
    fVar2 = FLOOR(fVar7);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar3 = ROUND(fVar8);
  }
  else {
    fVar3 = FLOOR(fVar8);
  }
  (**(code **)(unaff_gp + -0x78dc))((int)fVar1 + (int)fVar2 * 0x100 + (int)fVar3 * 0x10000,param_2);
  (**(code **)(unaff_gp + -0x7744))((double)local_10,(double)(local_14 * *(float *)(iVar4 + 0x140)))
  ;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar6 = ROUND(fVar6);
  }
  else {
    fVar6 = FLOOR(fVar6);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar7 = ROUND(fVar7);
  }
  else {
    fVar7 = FLOOR(fVar7);
  }
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar8 = ROUND(fVar8);
  }
  else {
    fVar8 = FLOOR(fVar8);
  }
  *(int *)(param_2 + 0x20) = (int)fVar6 + (int)fVar7 * 0x100 + (int)fVar8 * 0x10000;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void refresh_legend_colors(void)

{
  uint uVar1;
  undefined4 local_8;
  uint local_4;
  
  uVar1 = **(uint **)(PTR_PTR_100094ec + 4);
  local_4 = uVar1 & 0xff;
  local_8 = 0xf66187b;
  XtSetValues(pref_red_scale,&local_8,1);
  local_4 = (int)uVar1 >> 8 & 0xff;
  local_8 = 0xf66187b;
  XtSetValues(pref_green_scale,&local_8,1);
  local_4 = (int)uVar1 >> 0x10 & 0xff;
  local_8 = 0xf66187b;
  XtSetValues(pref_blue_scale,&local_8,1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void update_legend_display(void)

{
  uint in_register_00001000;
  uint extraout_var;
  double dVar1;
  double dVar2;
  double dVar3;
  uint in_fcsr;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_8;
  int local_4;
  
  rgb_to_hsv((double)(float)((double)(**(uint **)(PTR_PTR_100094ec + 4) & 0xff) /
                            (double)((ulonglong)in_register_00001000 << 0x20)),
             (double)(float)((double)((int)**(uint **)(PTR_PTR_100094ec + 4) >> 8 & 0xff) /
                            (double)((ulonglong)in_register_00001000 << 0x20)));
  dVar1 = (double)local_38 * (double)((ulonglong)extraout_var << 0x20);
  local_8 = 0xf66187b;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    dVar1 = ROUND(dVar1);
  }
  else {
    dVar1 = FLOOR(dVar1);
  }
  dVar3 = (double)local_3c * (double)((ulonglong)extraout_var << 0x20);
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    dVar3 = ROUND(dVar3);
  }
  else {
    dVar3 = FLOOR(dVar3);
  }
  dVar2 = (double)local_34 * (double)((ulonglong)extraout_var << 0x20);
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    dVar2 = ROUND(dVar2);
  }
  else {
    dVar2 = FLOOR(dVar2);
  }
  local_4 = (int)dVar2;
  XtSetValues(pref_hue_scale,&local_8,1);
  local_8 = 0xf66187b;
  local_4 = (int)dVar1;
  XtSetValues(pref_sat_scale,&local_8,1);
  local_8 = 0xf66187b;
  local_4 = (int)dVar3;
  XtSetValues(pref_val_scale,&local_8,1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
