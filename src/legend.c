/**
 * legend.c - File age legend bar
 *
 * Phase 17: Clean reimplementation for modern Motif
 * Widget names match resources/Fsn for labels and colors
 */

#include "legend.h"
#include "fsn_types.h"
#include "fsn_state.h"
#include <Xm/RowColumn.h>
#include <Xm/Label.h>
#include <Xm/Separator.h>
#include <stdio.h>

/* File age colors from resources/Fsn */
static const unsigned long fileColors[7] = {
    0xff0000,  /* color0: 1 wk - red */
    0xff8400,  /* color1: 2 wk - orange */
    0xfffc00,  /* color2: 1 mo - yellow */
    0x20a098,  /* color3: 3 mo - teal */
    0x0047ff,  /* color4: 6 mo - blue */
    0xa800ff,  /* color5: 1 yr - purple */
    0x9a2667   /* color6: > 1 yr - magenta */
};

/**
 * toggle_legend - Show/hide the file age legend bar
 *
 * Creates legend widget on first call, then toggles visibility.
 * Widget names (colorslabel, color0-color6, monitorLabel) get
 * labels from resources/Fsn automatically.
 */
void toggle_legend(void)
{
    Widget label;
    Arg args[4];
    int n, i;
    char widgetName[16];

    /* Toggle visibility if already created */
    if (legend_widget != NULL) {
        if (legendShowing) {
            XtUnmanageChild(legend_widget);
            if (legend_separator_widget)
                XtUnmanageChild(legend_separator_widget);
            legendShowing = 0;
        } else {
            XtManageChild(legend_widget);
            if (legend_separator_widget)
                XtManageChild(legend_separator_widget);
            legendShowing = 1;
        }
        return;
    }

    /* First call - create the legend bar */
    legendShowing = 1;

    /* Create horizontal RowColumn for legend */
    n = 0;
    XtSetArg(args[n], XmNorientation, XmHORIZONTAL); n++;
    XtSetArg(args[n], XmNpacking, XmPACK_TIGHT); n++;
    legend_widget = XmCreateRowColumn(panel_widget, "legend", args, n);

    /* "ages:" label */
    label = XmCreateLabel(legend_widget, "colorslabel", NULL, 0);
    XtManageChild(label);

    /* Color labels (color0 through color6) - labels from resources */
    for (i = 0; i < 7; i++) {
        Pixel bg;
        sprintf(widgetName, "color%d", i);

        /* Convert RGB to Pixel (simplified - assumes TrueColor) */
        bg = fileColors[i];

        n = 0;
        XtSetArg(args[n], XmNbackground, bg); n++;
        label = XmCreateLabel(legend_widget, widgetName, args, n);
        XtManageChild(label);
    }

    /* Separator before monitor label */
    label = XmCreateSeparator(legend_widget, "monitorSep", NULL, 0);
    XtManageChild(label);

    /* Monitor label */
    n = 0;
    XtSetArg(args[n], XmNbackground, 0xc67171); n++;  /* dirMonColor */
    monitorLabelWidget = XmCreateLabel(legend_widget, "monitorLabel", args, n);
    XtManageChild(monitorLabelWidget);

    /* Create separator between legend and main area */
    legend_separator_widget = XmCreateSeparator(panel_widget, "legendSep", NULL, 0);
    XtManageChild(legend_separator_widget);

    /* Show the legend */
    XtManageChild(legend_widget);

    fprintf(stderr, "toggle_legend: Created legend bar\n");
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
