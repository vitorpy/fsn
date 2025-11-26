/**
 * context.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "context.h"
#include "fsn_types.h"
#include "fsn_state.h"

void setup_context_widgets(void)

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
  
  uVar1 = XtCreateWidget("contextTopWidget",xmFormWidgetClass,context_top_widget,&local_a0,0);
  *(undefined4 *)(curcontextwindows + 0xc) = uVar1;
  install_help_callback(*(undefined4 *)(curcontextwindows + 0xc),&infoHelp);
  local_9c = 1;
  local_a0 = 0xe3f4b1d;
  local_98 = 0xe3f40cb;
  local_90 = 0xe3f46dd;
  local_94 = 1;
  local_8c = 1;
  local_94 = create_context_widget(*(undefined4 *)(curcontextwindows + 0xc),&local_a0,3);
  local_8c = 1;
  local_a0 = 0xe3f4b1d;
  local_98 = 0xe3f4ba9;
  local_90 = 0xe3f40cb;
  local_88 = 0xe3f46dd;
  local_9c = 3;
  local_84 = 1;
  local_94 = XtCreateManagedWidget
                       ("panelhsep",xmSeparatorWidgetClass,*(undefined4 *)(curcontextwindows + 0xc),&local_a0
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
  if (context_count != 0) {
    local_74 = cached_context_ptr;
    local_78 = (char *)0xf6615f6;
    local_6c = (undefined4 *)lhLabelColor;
    local_70 = (char *)0xf661554;
    uVar1 = 7;
  }
  uVar1 = XtCreateManagedWidget
                    ("locateHighlightName",xmLabelWidgetClass,*(undefined4 *)(curcontextwindows + 0xc),
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
  local_6c = &display_mode_flags;
  uVar1 = XtCreateManagedWidget
                    ("glwidget",glxMDrawWidgetClass,*(undefined4 *)(curcontextwindows + 0xc),&local_a0,7);
  *(undefined4 *)(curcontextwindows + 8) = uVar1;
  XtAddCallback(*(undefined4 *)(curcontextwindows + 8),"exposeCallback",glwidget_expose_callback,0);
  iVar2 = init_display_mode();
  if (iVar2 == 0) {
    pcVar3 = "overlayExposeWindow";
  }
  else {
    pcVar3 = "popupExposeWindow";
  }
  XtAddCallback(*(undefined4 *)(curcontextwindows + 8),pcVar3,gl_input_callback,0);
  XtAddCallback(*(undefined4 *)(curcontextwindows + 8),"resizeCallback",glwidget_resize_callback,0);
  XtAddCallback(*(undefined4 *)(curcontextwindows + 8),"ginitCallback",glwidget_init_callback,0);
  XtOverrideTranslations(*(undefined4 *)(curcontextwindows + 8),glwidget_translations);
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
  get_window_properties(*(undefined4 *)(curcontextwindows + 0xc),&local_a0,8);
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
  halt_baddata();
}

void glx_reset_context_wrapper(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7d0c))
            (**(undefined4 **)(unaff_gp + -0x75fc),
             *(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 4));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void apply_context_changes(undefined8 param_1,undefined8 param_2,undefined4 *param_3,char param_4)

{
  float *pfVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int unaff_gp;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 uVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  double dVar16;
  double unaff_f20;
  double dVar17;
  uint unaff_000010b0;
  undefined4 uVar18;
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float fVar10;
  
  uVar11 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar7 = (uint)((ulonglong)param_1 >> 0x20);
  if (param_4 == '\0') {
    piVar6 = *(int **)(unaff_gp + -0x7684);
    iVar4 = *(int *)(unaff_gp + -0x75dc);
    fVar10 = *(float *)(iVar4 + 0x110) * *(float *)(*piVar6 + 0x34);
    if (*(char *)(iVar4 + 4) == '\0') {
      (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(iVar4 + 0x148));
      (**(code **)(unaff_gp + -0x7dc4))();
      unaff_f20 = (double)fVar10;
      local_28 = (float)((double)*(float *)*piVar6 - unaff_f20);
      local_24 = ((float *)*piVar6)[1] + *(float *)(iVar4 + 0x114);
      local_20 = -0.5;
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      local_28 = (float)((double)*(float *)*piVar6 + unaff_f20);
      local_24 = ((float *)*piVar6)[1] + *(float *)(iVar4 + 0x114);
      local_20 = -0.5;
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      pfVar1 = (float *)*piVar6;
      local_28 = (float)((double)*pfVar1 + unaff_f20);
      local_24 = pfVar1[1] + *(float *)(iVar4 + 0x114);
      uVar18 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x50bc);
      local_20 = (float)((double)pfVar1[2] + (double)CONCAT44(unaff_000010b0,uVar18));
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      pfVar1 = (float *)*piVar6;
      local_28 = (float)((double)*pfVar1 - unaff_f20);
      local_24 = pfVar1[1] + *(float *)(iVar4 + 0x114);
      local_20 = (float)((double)pfVar1[2] + (double)CONCAT44(unaff_000010b0,uVar18));
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      (**(code **)(unaff_gp + -0x7dbc))();
    }
    else {
      (**(code **)(unaff_gp + -0x7cc8))(1);
      (**(code **)(unaff_gp + -0x7dc4))();
      (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(iVar4 + 0x150));
      unaff_f20 = (double)fVar10;
      local_28 = (float)((double)*(float *)*piVar6 - unaff_f20);
      local_24 = ((float *)*piVar6)[1] + *(float *)(iVar4 + 0x114);
      local_20 = -0.5;
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      local_28 = (float)((double)*(float *)*piVar6 + unaff_f20);
      local_24 = ((float *)*piVar6)[1] + *(float *)(iVar4 + 0x114);
      local_20 = -0.5;
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(iVar4 + 0x14c));
      pfVar1 = (float *)*piVar6;
      local_28 = (float)((double)*pfVar1 + unaff_f20);
      local_24 = pfVar1[1] + *(float *)(iVar4 + 0x114);
      local_20 = pfVar1[2] + *(float *)(iVar4 + 0x10c);
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      pfVar1 = (float *)*piVar6;
      local_28 = (float)((double)*pfVar1 - unaff_f20);
      local_24 = pfVar1[1] + *(float *)(iVar4 + 0x114);
      local_20 = pfVar1[2] + *(float *)(iVar4 + 0x10c);
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      (**(code **)(unaff_gp + -0x7dbc))();
      (**(code **)(unaff_gp + -0x7cc8))(0);
      (**(code **)(unaff_gp + -0x7dc4))();
      (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(iVar4 + 0x14c));
      pfVar1 = (float *)*piVar6;
      local_28 = (float)((double)*pfVar1 + unaff_f20);
      local_24 = pfVar1[1] + *(float *)(iVar4 + 0x114);
      local_20 = pfVar1[2] + *(float *)(iVar4 + 0x10c);
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      pfVar1 = (float *)*piVar6;
      local_28 = (float)((double)*pfVar1 + unaff_f20);
      local_24 = pfVar1[1] + *(float *)(iVar4 + 0x114);
      uVar18 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x50c4);
      local_20 = (float)((double)pfVar1[2] + (double)CONCAT44(unaff_000010b0,uVar18));
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      pfVar1 = (float *)*piVar6;
      local_28 = (float)((double)*pfVar1 - unaff_f20);
      local_24 = pfVar1[1] + *(float *)(iVar4 + 0x114);
      local_20 = (float)((double)pfVar1[2] + (double)CONCAT44(unaff_000010b0,uVar18));
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      pfVar1 = (float *)*piVar6;
      local_28 = (float)((double)*pfVar1 - unaff_f20);
      local_24 = pfVar1[1] + *(float *)(iVar4 + 0x114);
      local_20 = pfVar1[2] + *(float *)(iVar4 + 0x10c);
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      (**(code **)(unaff_gp + -0x7dbc))();
      (**(code **)(unaff_gp + -0x7cc8))(1);
      (**(code **)(unaff_gp + -0x7dc4))();
      (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(iVar4 + 0x15c));
      local_28 = (float)((double)*(float *)*piVar6 - unaff_f20);
      local_24 = ((float *)*piVar6)[1] - *(float *)(iVar4 + 0x118);
      local_20 = -0.5;
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      local_28 = (float)((double)*(float *)*piVar6 + unaff_f20);
      local_24 = ((float *)*piVar6)[1] - *(float *)(iVar4 + 0x118);
      local_20 = -0.5;
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(iVar4 + 0x158));
      local_28 = (float)((double)*(float *)*piVar6 + unaff_f20);
      local_24 = ((float *)*piVar6)[1] + *(float *)(iVar4 + 0x114);
      local_20 = -0.5;
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      local_28 = (float)((double)*(float *)*piVar6 - unaff_f20);
      local_24 = ((float *)*piVar6)[1] + *(float *)(iVar4 + 0x114);
      local_20 = -0.5;
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      (**(code **)(unaff_gp + -0x7dbc))();
      (**(code **)(unaff_gp + -0x7cc8))(0);
    }
  }
  piVar6 = *(int **)(unaff_gp + -0x7684);
  iVar4 = *piVar6;
  iVar5 = *(int *)(unaff_gp + -0x75dc);
  local_18 = *(float *)(iVar4 + 4) -
             *(float *)(iVar4 + 0x18) * *(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 8);
  (**(code **)(unaff_gp + -0x7e1c))((int)*(short *)((int)param_3 + 0x5e));
  (**(code **)(unaff_gp + -0x7b48))();
  dVar17 = (double)((ulonglong)unaff_f20 & 0xffffffff00000000);
  lVar8 = (ulonglong)uVar7 << 0x20;
  uVar9 = CONCAT44(uVar11,(float)((double)(float)param_3[0xf] / dVar17));
  (**(code **)(unaff_gp + -0x7b60))(lVar8,uVar9);
  uVar12 = (uint)((ulonglong)uVar9 >> 0x20);
  uVar7 = (uint)((ulonglong)lVar8 >> 0x20);
  if ((int)(param_3[0x1d] << 0xb) < 0) {
    (**(code **)(unaff_gp + -0x7b48))();
    (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(iVar5 + 0x174));
    lVar8 = (ulonglong)uVar7 << 0x20;
    lVar13 = (ulonglong)uVar12 << 0x20;
    (**(code **)(unaff_gp + -0x7b60))(lVar8,lVar13);
    fVar10 = (float)((double)-(float)param_3[0xf] / dVar17 - (double)*(float *)(iVar5 + 0x60));
    uVar9 = CONCAT44((int)((ulonglong)lVar8 >> 0x20),fVar10);
    uVar14 = CONCAT44((int)((ulonglong)lVar13 >> 0x20),fVar10);
    (**(code **)(unaff_gp + -0x7e20))(uVar9,uVar14);
    uVar12 = (uint)((ulonglong)uVar14 >> 0x20);
    uVar7 = (uint)((ulonglong)uVar9 >> 0x20);
    (**(code **)(unaff_gp + -0x7b28))();
  }
  (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(**(int **)(unaff_gp + -0x768c) + 0x10));
  if ((int)(param_3[0x1d] << 0xd) < 0) {
    dVar16 = (double)-(float)param_3[0xf] / dVar17;
    uVar9 = CONCAT44(uVar7,(float)dVar16);
    uVar14 = CONCAT44(uVar12,(float)dVar16);
    (**(code **)(unaff_gp + -0x7df0))(uVar9,uVar14);
    uVar18 = (undefined4)((ulonglong)uVar14 >> 0x20);
    uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar15 = (undefined4)((ulonglong)dVar16 >> 0x20);
  }
  else {
    dVar16 = (double)-(float)param_3[0xf] / dVar17;
    uVar9 = CONCAT44(uVar7,(float)dVar16);
    uVar14 = CONCAT44(uVar12,(float)dVar16);
    (**(code **)(unaff_gp + -0x7e20))(uVar9,uVar14);
    uVar18 = (undefined4)((ulonglong)uVar14 >> 0x20);
    uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar15 = (undefined4)((ulonglong)dVar16 >> 0x20);
  }
  (**(code **)(unaff_gp + -0x7b48))();
  dVar16 = (double)(int)param_3[1] *
           (double)CONCAT44(uVar15,*(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x50b4));
  uVar9 = CONCAT44(uVar11,(float)dVar16);
  uVar14 = CONCAT44(uVar18,(float)((double)-(float)param_3[0xf] / dVar17 -
                                  (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                                   *(undefined4 *)
                                                    (*(int *)(unaff_gp + -0x7fa4) + -0x50ac))));
  (**(code **)(unaff_gp + -0x7b60))(uVar9,uVar14);
  uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
  uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
  (**(code **)(unaff_gp + -0x7b68))((int)-*(short *)(*piVar6 + 0xe),0x78);
  uVar18 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x50a8);
  lVar8 = CONCAT44(uVar11,uVar18);
  dVar16 = (double)CONCAT44(uVar15,uVar18);
  (**(code **)(unaff_gp + -0x7b6c))(lVar8,dVar16);
  (**(code **)(unaff_gp + -0x7a08))(*param_3);
  (**(code **)(unaff_gp + -0x7b28))();
  iVar4 = 0;
  if (0 < (int)param_3[3]) {
    iVar5 = 0;
    do {
      iVar3 = *(int *)(param_3[4] + iVar5);
      (**(code **)(unaff_gp + -0x7db0))((int)(short)iVar4);
      if (param_4 == '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      if (param_4 == '\0') {
        uVar2 = *(int *)(iVar3 + 0x28) << 9 < 0;
      }
      else {
        uVar2 = 4;
      }
      (**(code **)(unaff_gp + -0x7948))(param_3,iVar3,0,param_4 == '\0',uVar2,0x1f);
      uVar11 = (undefined4)((ulonglong)dVar16 >> 0x20);
      uVar7 = (uint)((ulonglong)lVar8 >> 0x20);
      if (*(int *)(iVar3 + 0x28) << 3 < 0) {
        (**(code **)(unaff_gp + -0x7b48))();
        (**(code **)(unaff_gp + -0x7b60))
                  ((ulonglong)uVar7 << 0x20,
                   CONCAT44(uVar11,(float)((double)-(float)param_3[0xf] / dVar17)));
        dVar16 = (double)(float)param_3[0xf] * dVar17;
        lVar8 = (ulonglong)unaff_000010b0 << 0x20;
        (**(code **)(unaff_gp + -0x78f8))(lVar8,dVar16);
        (**(code **)(unaff_gp + -0x7b28))();
        if (0 < iVar4) {
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        if (iVar4 < param_3[3] + -1) {
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
      }
      iVar4 = iVar4 + 1;
      (**(code **)(unaff_gp + -0x7de8))();
      iVar5 = iVar5 + 4;
    } while (iVar4 < (int)param_3[3]);
  }
  (*(code *)(*(int *)(unaff_gp + -0x7fe4) + -0x6e64))(param_3,param_4);
  (**(code **)(unaff_gp + -0x7b28))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void refresh_context_view(int param_1,int param_2)

{
  int unaff_gp;
  uint in_register_00001040;
  undefined4 uVar1;
  
  if (param_1 == *(int *)(**(int **)(unaff_gp + -0x7684) + 0x3c)) {
    (**(code **)(unaff_gp + -0x7b48))();
    (**(code **)(unaff_gp + -0x7b60))
              (0,(float)((double)*(float *)(param_1 + 0x3c) /
                        (double)((ulonglong)in_register_00001040 << 0x20)));
    (**(code **)(unaff_gp + -0x7908))(param_2);
    (**(code **)(unaff_gp + -0x7b60))
              (*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18));
    if ((*(char *)(**(int **)(unaff_gp + -0x7684) + 0xc50) == '\0') ||
       (*(char *)(*(int *)(unaff_gp + -0x75dc) + 5) == '\0')) {
      uVar1 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x70);
      (**(code **)(unaff_gp + -0x7b6c))(uVar1,uVar1);
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x70);
      (**(code **)(unaff_gp + -0x7b6c))(uVar1,uVar1);
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void update_context_display(int param_1,int param_2)

{
  int iVar1;
  int unaff_gp;
  float fVar2;
  uint uVar3;
  undefined8 in_f18;
  
  uVar3 = (uint)((ulonglong)in_f18 >> 0x20);
  if (param_1 != 0) {
    if (param_1 != *(int *)(**(int **)(unaff_gp + -0x7684) + 0x3c)) {
      (**(code **)(unaff_gp + -0x7aa4))();
    }
    if (param_2 != 0) {
      iVar1 = *(int *)(unaff_gp + -0x75dc);
      if (*(char *)(iVar1 + 5) == '\0') {
        fVar2 = *(float *)(iVar1 + 0xa0);
      }
      else {
        fVar2 = *(float *)(iVar1 + 0xa0);
      }
      (**(code **)(unaff_gp + -0x7aa8))
                ((double)*(float *)(param_2 + 0x14) -
                 (double)*(float *)(**(int **)(unaff_gp + -0x7684) + 0x14) * (double)fVar2,
                 ((double)*(float *)(param_2 + 0x18) +
                 (double)*(float *)(param_1 + 0x3c) / (double)((ulonglong)uVar3 << 0x20)) -
                 (double)*(float *)(**(int **)(unaff_gp + -0x7684) + 0x18) * (double)fVar2);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_context_menus(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  code *pcVar9;
  int unaff_gp;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  local_6c = 0;
  (**(code **)(unaff_gp + -0x77f4))(**(undefined4 **)(unaff_gp + -0x75fc),0,&local_68,&local_6c);
  local_4 = (**(code **)(unaff_gp + -0x7bcc))
                      (param_1,*(int *)(unaff_gp + -0x7fa4) + -0x4fa8,&local_68,local_6c);
  uVar4 = *(undefined4 *)(unaff_gp + -0x7950);
  (**(code **)(unaff_gp + -0x7c54))(local_4,*(int *)(unaff_gp + -0x7f60) + 0x1e96,uVar4,0);
  uVar5 = *(undefined4 *)(unaff_gp + -0x7954);
  (**(code **)(unaff_gp + -0x7c54))(local_4,*(int *)(unaff_gp + -0x7f60) + 0x28d0,uVar5,0);
  (**(code **)(unaff_gp + -0x785c))(local_4,*(undefined4 *)(unaff_gp + -0x7650));
  local_6c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7bc4))
                    (local_4,*(int *)(unaff_gp + -0x7fa4) + -0x4fa0,&local_68,0);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b54) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x293d,*(int *)(unaff_gp + -0x7fe4) + -0x215c,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b54));
  local_6c = 0;
  local_10 = (**(code **)(unaff_gp + -0x7b20))
                       (local_4,*(int *)(unaff_gp + -0x7fa4) + -0x4f88,&local_68,0);
  iVar3 = *(int *)(unaff_gp + -0x7fe4) + -0x200c;
  (**(code **)(unaff_gp + -0x7c54))(local_10,*(int *)(unaff_gp + -0x7f60) + 0x124b,iVar3,1);
  (**(code **)(unaff_gp + -0x7c78))(local_10);
  local_6c = 0;
  local_10 = (**(code **)(unaff_gp + -0x7b20))
                       (local_4,*(int *)(unaff_gp + -0x7fa4) + -0x4f78,&local_68,0);
  (**(code **)(unaff_gp + -0x7c54))(local_10,*(int *)(unaff_gp + -0x7f60) + 0x124b,iVar3,0);
  (**(code **)(unaff_gp + -0x7c78))(local_10);
  local_6c = 0;
  local_10 = (**(code **)(unaff_gp + -0x7b20))
                       (local_4,*(int *)(unaff_gp + -0x7fa4) + -0x4f64,&local_68,0);
  (**(code **)(unaff_gp + -0x7c54))
            (local_10,*(int *)(unaff_gp + -0x7f60) + 0x124b,*(int *)(unaff_gp + -0x7fe4) + -0x1f58,0
            );
  (**(code **)(unaff_gp + -0x7c78))(local_10);
  local_6c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7bc4))
                    (local_4,*(int *)(unaff_gp + -0x7fa4) + -0x4f50,&local_68,0);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b58) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x293d,*(int *)(unaff_gp + -0x7fe4) + -0x10d0,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b58));
  local_6c = 2;
  local_68 = *(int *)(unaff_gp + -0x7f60) + 0x26c9;
  local_60 = *(int *)(unaff_gp + -0x7f5c) + 0x2c7;
  local_5c = 0;
  local_64 = local_4;
  uVar1 = (**(code **)(unaff_gp + -0x7bf8))
                    (param_1,*(int *)(unaff_gp + -0x7fa4) + -0x4f3c,&local_68,2);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b98) = uVar1;
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  (**(code **)(unaff_gp + -0x785c))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b98),
             *(undefined4 *)(unaff_gp + -0x7650));
  (**(code **)(unaff_gp + -0x7c74))(param_2,4,0,*(undefined4 *)(unaff_gp + -0x79b0),0);
  local_6c = 0;
  (**(code **)(unaff_gp + -0x77f4))(**(undefined4 **)(unaff_gp + -0x75fc),0,&local_68,&local_6c);
  (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b98),0);
  uVar1 = (**(code **)(unaff_gp + -0x7ddc))
                    (param_2,*(int *)(unaff_gp + -0x7fa4) + -0x4f2c,&local_68,local_6c);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b94) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x28d0,uVar5,0);
  (**(code **)(unaff_gp + -0x785c))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b94),
             *(undefined4 *)(unaff_gp + -0x764c));
  local_6c = 0;
  (**(code **)(unaff_gp + -0x77f4))(**(undefined4 **)(unaff_gp + -0x75fc),0,&local_68,&local_6c);
  local_8 = (**(code **)(unaff_gp + -0x7bcc))
                      (param_1,*(int *)(unaff_gp + -0x7fa4) + -0x4f20,&local_68,local_6c);
  (**(code **)(unaff_gp + -0x7c54))(local_8,*(int *)(unaff_gp + -0x7f60) + 0x1e96,uVar4,0);
  (**(code **)(unaff_gp + -0x7c54))(local_8,*(int *)(unaff_gp + -0x7f60) + 0x28d0,uVar5,0);
  (**(code **)(unaff_gp + -0x785c))(local_8,*(undefined4 *)(unaff_gp + -0x764c));
  local_6c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7c28))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b94),
                     *(int *)(unaff_gp + -0x7fa4) + -0x4f14,&local_68,0);
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  local_6c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7b04))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b94),
                     *(int *)(unaff_gp + -0x7fa4) + -0x4f08,&local_68,0);
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  local_6c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b94),
                     *(int *)(unaff_gp + -0x7fa4) + -0x4efc,&local_68,0);
  iVar6 = *(int *)(unaff_gp + -0x7fe4);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b5c) = uVar1;
  iVar6 = iVar6 + -0x1758;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,*(int *)(unaff_gp + -0x7f60) + 0x124b,iVar6,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b5c));
  piVar2 = (int *)(*(int *)(unaff_gp + -0x7f98) + 0x6e20);
  iVar3 = *piVar2;
  *(undefined4 *)(iVar3 * 4 + *(int *)(unaff_gp + -0x7f94) + 0x6ba0) =
       *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b5c);
  *piVar2 = iVar3 + 1;
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (local_8,*(int *)(unaff_gp + -0x7fa4) + -0x4eec,&local_68,local_6c);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b60) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x124b,iVar6,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b60));
  piVar2 = (int *)(*(int *)(unaff_gp + -0x7f98) + 0x6e20);
  iVar3 = *piVar2;
  *(undefined4 *)(iVar3 * 4 + *(int *)(unaff_gp + -0x7f94) + 0x6ba0) =
       *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b60);
  iVar6 = *(int *)(unaff_gp + -0x7f94);
  *piVar2 = iVar3 + 1;
  local_6c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (*(undefined4 *)(iVar6 + 0x6b94),*(int *)(unaff_gp + -0x7fa4) + -0x4edc,
                     &local_68,0);
  iVar6 = *(int *)(unaff_gp + -0x7fe4);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b64) = uVar1;
  iVar6 = iVar6 + -0x16e8;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,*(int *)(unaff_gp + -0x7f60) + 0x124b,iVar6,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b64));
  piVar2 = (int *)(*(int *)(unaff_gp + -0x7f98) + 0x6e20);
  iVar3 = *piVar2;
  *(undefined4 *)(iVar3 * 4 + *(int *)(unaff_gp + -0x7f94) + 0x6ba0) =
       *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b64);
  *piVar2 = iVar3 + 1;
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (local_8,*(int *)(unaff_gp + -0x7fa4) + -0x4ecc,&local_68,local_6c);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b68) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x124b,iVar6,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b68));
  piVar2 = (int *)(*(int *)(unaff_gp + -0x7f98) + 0x6e20);
  iVar3 = *piVar2;
  *(undefined4 *)(iVar3 * 4 + *(int *)(unaff_gp + -0x7f94) + 0x6ba0) =
       *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b68);
  iVar6 = *(int *)(unaff_gp + -0x7f94);
  *piVar2 = iVar3 + 1;
  local_6c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7bc4))
                    (*(undefined4 *)(iVar6 + 0x6b94),*(int *)(unaff_gp + -0x7fa4) + -0x4ebc,
                     &local_68,0);
  iVar7 = *(int *)(unaff_gp + -0x7fe4);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b84) = uVar1;
  iVar7 = iVar7 + -0x1678;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,*(int *)(unaff_gp + -0x7f60) + 0x293d,iVar7,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b84));
  iVar3 = *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6e20);
  *(undefined4 *)(iVar3 * 4 + *(int *)(unaff_gp + -0x7f94) + 0x6ba0) =
       *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b84);
  pcVar9 = *(code **)(unaff_gp + -0x7bc4);
  iVar6 = *(int *)(unaff_gp + -0x7fa4);
  *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6e20) = iVar3 + 1;
  uVar1 = (*pcVar9)(local_8,iVar6 + -0x4eac,&local_68,local_6c);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b88) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x293d,iVar7,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b88));
  iVar3 = *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6e20);
  *(undefined4 *)(iVar3 * 4 + *(int *)(unaff_gp + -0x7f94) + 0x6ba0) =
       *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b88);
  iVar7 = *(int *)(unaff_gp + -0x7f94);
  local_68 = *(int *)(unaff_gp + -0x7f60);
  local_60 = *(int *)(unaff_gp + -0x7f5c);
  iVar6 = *(int *)(unaff_gp + -0x7f94);
  *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6e20) = iVar3 + 1;
  local_64 = *(undefined4 *)(iVar7 + 0x6b30);
  local_68 = local_68 + 0x1d4d;
  local_60 = local_60 + 0x2c7;
  local_6c = 2;
  local_5c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (*(undefined4 *)(iVar6 + 0x6b94),*(int *)(unaff_gp + -0x7fa4) + -0x4e9c,
                     &local_68,2);
  iVar6 = *(int *)(unaff_gp + -0x7fe4);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b6c) = uVar1;
  iVar6 = iVar6 + -0xd4c;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,*(int *)(unaff_gp + -0x7f60) + 0x124b,iVar6,1);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b6c));
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (local_8,*(int *)(unaff_gp + -0x7fa4) + -0x4e8c,&local_68,local_6c);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b70) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x124b,iVar6,1);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b70));
  local_64 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b3c);
  local_68 = *(int *)(unaff_gp + -0x7f60) + 0x1d4d;
  local_60 = *(int *)(unaff_gp + -0x7f5c) + 0x2c7;
  local_6c = 2;
  local_5c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b94),
                     *(int *)(unaff_gp + -0x7fa4) + -0x4e7c,&local_68,2);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b74) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x124b,iVar6,2);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b74));
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (local_8,*(int *)(unaff_gp + -0x7fa4) + -0x4e6c,&local_68,local_6c);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b78) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x124b,iVar6,2);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b78));
  local_64 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b48);
  local_68 = *(int *)(unaff_gp + -0x7f60) + 0x1d4d;
  local_60 = *(int *)(unaff_gp + -0x7f5c) + 0x2c7;
  local_6c = 2;
  local_5c = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b94),
                     *(int *)(unaff_gp + -0x7fa4) + -0x4e5c,&local_68,2);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b7c) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x124b,iVar6,3);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b7c));
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (local_8,*(int *)(unaff_gp + -0x7fa4) + -0x4e4c,&local_68,local_6c);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b80) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar3 + 0x124b,iVar6,3);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b80));
  local_68 = *(int *)(unaff_gp + -0x7f60) + 0x26c9;
  local_60 = *(int *)(unaff_gp + -0x7f5c) + 0x2c7;
  local_6c = 2;
  local_5c = 0;
  local_64 = local_8;
  uVar1 = (**(code **)(unaff_gp + -0x7bf8))
                    (param_1,*(int *)(unaff_gp + -0x7fa4) + -0x4e3c,&local_68,2);
  puVar8 = (undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b9c);
  *puVar8 = uVar1;
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  (**(code **)(unaff_gp + -0x785c))(*puVar8,*(undefined4 *)(unaff_gp + -0x764c));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void configure_context_widget(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_gp;
  undefined1 auStack_50 [80];
  
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (param_1,*(int *)(unaff_gp + -0x7fa4) + -0x4e30,auStack_50,0);
  iVar2 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b8c) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar2 + 0x124b,*(int *)(unaff_gp + -0x7fe4) + -0x1368,0);
  (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b8c),0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b8c));
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (param_1,*(int *)(unaff_gp + -0x7fa4) + -0x4e1c,auStack_50,0);
  iVar2 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b90) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar2 + 0x124b,*(int *)(unaff_gp + -0x7fe4) + -0x1180,0);
  (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b90),0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b90));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void create_context_widget(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  int unaff_gp;
  
  uVar4 = *(undefined4 *)(unaff_gp + -0x7f60);
  uVar1 = (**(code **)(unaff_gp + -0x7c24))(*(int *)(unaff_gp + -0x7fa4) + -0x4e0c,uVar4);
  iVar2 = *(int *)(unaff_gp + -0x7fa4);
  pcVar8 = *(code **)(unaff_gp + -0x7c24);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b30) = uVar1;
  uVar1 = (*pcVar8)(iVar2 + -0x4e00,uVar4);
  iVar2 = *(int *)(unaff_gp + -0x7fa4);
  pcVar8 = *(code **)(unaff_gp + -0x7c24);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b34) = uVar1;
  uVar1 = (*pcVar8)(iVar2 + -0x4df0,uVar4);
  iVar2 = *(int *)(unaff_gp + -0x7fa4);
  pcVar8 = *(code **)(unaff_gp + -0x7c24);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b38) = uVar1;
  uVar1 = (*pcVar8)(iVar2 + -0x4de0,uVar4);
  iVar2 = *(int *)(unaff_gp + -0x7fa4);
  pcVar8 = *(code **)(unaff_gp + -0x7c24);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b3c) = uVar1;
  uVar1 = (*pcVar8)(iVar2 + -0x4dd4,uVar4);
  iVar2 = *(int *)(unaff_gp + -0x7fa4);
  pcVar8 = *(code **)(unaff_gp + -0x7c24);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b40) = uVar1;
  uVar1 = (*pcVar8)(iVar2 + -0x4dc4,uVar4);
  iVar2 = *(int *)(unaff_gp + -0x7fa4);
  pcVar8 = *(code **)(unaff_gp + -0x7c24);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b44) = uVar1;
  uVar1 = (*pcVar8)(iVar2 + -0x4db4,uVar4);
  iVar2 = *(int *)(unaff_gp + -0x7fa4);
  pcVar8 = *(code **)(unaff_gp + -0x7c24);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b48) = uVar1;
  uVar1 = (*pcVar8)(iVar2 + -0x4da8,uVar4);
  iVar2 = *(int *)(unaff_gp + -0x7fa4);
  pcVar8 = *(code **)(unaff_gp + -0x7c24);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b4c) = uVar1;
  uVar1 = (*pcVar8)(iVar2 + -0x4d98,uVar4);
  iVar2 = *(int *)(unaff_gp + -0x7fa4);
  pcVar8 = *(code **)(unaff_gp + -0x7c84);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b50) = uVar1;
  uVar1 = (*pcVar8)(param_1,iVar2 + -0x4d88,param_2,param_3);
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  iVar2 = *(int *)(unaff_gp + -0x7f60);
  iVar6 = *(int *)(unaff_gp + -0x7f60);
  *param_2 = *(int *)(unaff_gp + -0x7f60) + 0x27b5;
  param_2[1] = 1;
  param_2[2] = iVar2 + 0x1d63;
  param_2[3] = 1;
  param_2[4] = iVar6 + 0x2375;
  param_2[5] = 1;
  uVar4 = (**(code **)(unaff_gp + -0x7de4))(uVar1,*(int *)(unaff_gp + -0x7fa4) + -0x4d78,param_2,3);
  piVar5 = *(int **)(unaff_gp + -0x767c);
  iVar2 = *(int *)(unaff_gp + -0x7f60);
  iVar6 = *(int *)(unaff_gp + -0x7fe4);
  *(undefined4 *)(*piVar5 + 0x1c) = uVar4;
  (**(code **)(unaff_gp + -0x7c54))
            (*(undefined4 *)(*piVar5 + 0x1c),iVar2 + 0x293d,iVar6 + -0x4e0,
             *(undefined4 *)(*piVar5 + 0xc));
  (**(code **)(unaff_gp + -0x7c54))
            (*(undefined4 *)(*piVar5 + 0x1c),*(int *)(unaff_gp + -0x7f60) + 0x124b,
             *(int *)(unaff_gp + -0x7fe4) + -0x340,*(undefined4 *)(*piVar5 + 0xc));
  (**(code **)(unaff_gp + -0x7c74))
            (*(undefined4 *)(*piVar5 + 0x1c),0x10,0,*(int *)(unaff_gp + -0x7fe4) + -0x5e8,
             *(undefined4 *)(*piVar5 + 0xc));
  (**(code **)(unaff_gp + -0x7c74))
            (*(undefined4 *)(*piVar5 + 0x1c),0x20,0,*(int *)(unaff_gp + -0x7fe4) + -0x524,0);
  (**(code **)(unaff_gp + -0x7c74))
            (*(undefined4 *)(*piVar5 + 0x1c),4,0,*(undefined4 *)(unaff_gp + -0x787c),
             *(undefined4 *)(*piVar5 + 0xc));
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*piVar5 + 0x1c));
  iVar2 = *(int *)(unaff_gp + -0x7f60);
  *param_2 = *(int *)(unaff_gp + -0x7f60) + 0x27b5;
  param_2[1] = 3;
  param_2[2] = iVar2 + 0x2841;
  iVar7 = *(int *)(*piVar5 + 0x1c);
  iVar2 = *(int *)(unaff_gp + -0x7f60);
  iVar6 = *(int *)(unaff_gp + -0x7f60);
  piVar3 = *(int **)(unaff_gp + -0x75f8);
  param_2[4] = *(int *)(unaff_gp + -0x7f60) + 0x1d63;
  param_2[5] = 1;
  param_2[6] = iVar2 + 0x2375;
  param_2[7] = 1;
  param_2[8] = iVar6 + 0x1d4d;
  param_2[3] = iVar7;
  iVar2 = *(int *)(unaff_gp + -0x7fa4);
  param_2[9] = *piVar3;
  uVar1 = (**(code **)(unaff_gp + -0x7c28))(uVar1,iVar2 + -0x4d6c,param_2,5);
  *(undefined4 *)(*piVar5 + 0x20) = uVar1;
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*piVar5 + 0x20));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void lookup_context_item(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xf000;
  if (uVar1 == 0x1000) {
    file_type_char = 0x70;
  }
  else if (uVar1 == 0x2000) {
    file_type_char = 99;
  }
  else if (uVar1 == 0x4000) {
    file_type_char = 100;
  }
  else if (uVar1 == 0x6000) {
    file_type_char = 0x62;
  }
  else if (uVar1 == 0x8000) {
    file_type_char = 0x2d;
  }
  else if (uVar1 == 0xa000) {
    file_type_char = 0x6c;
  }
  else if (uVar1 == 0xc000) {
    file_type_char = 0x73;
  }
  else {
    file_type_char = 0x3f;
  }
  strcpy(&perm_owner_str,(&permission_string_table)[param_1 >> 6 & 7]);
  strcpy(&perm_group_str,(&permission_string_table)[param_1 >> 3 & 7]);
  strcpy(&perm_other_str,(&permission_string_table)[param_1 & 7]);
  if ((param_1 & 0x800 | 0x600) != 0) {
    if ((param_1 & 0x800) != 0) {
      if ((param_1 & 0x40) == 0) {
        perm_setuid_char = 0x53;
      }
      else {
        perm_setuid_char = 0x73;
      }
    }
    if ((param_1 & 0x400) != 0) {
      if ((param_1 & 8) == 0) {
        perm_setgid_char = 0x6c;
      }
      else {
        perm_setgid_char = 0x73;
      }
    }
    if ((param_1 & 0x200) != 0) {
      if ((param_1 & 1) == 0) {
        perm_sticky_char = 0x54;
      }
      else {
        perm_sticky_char = 0x74;
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void update_gl_context(void)

{
  int iVar1;
  int unaff_gp;
  
  iVar1 = **(int **)(unaff_gp + -0x7684);
  if (*(int *)(iVar1 + 0x3c) == 0) {
    (**(code **)(unaff_gp + -0x78fc))(*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x48));
  }
  else {
    (**(code **)(unaff_gp + -0x79e4))(*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x48));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void glx_switch_context_wrapper(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7d0c))
            (**(undefined4 **)(unaff_gp + -0x75fc),
             *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c00));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void update_context_bounds(int param_1,int param_2)

{
  int unaff_gp;
  double dVar1;
  ulonglong in_f4;
  float fVar2;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      dVar1 = (double)*(float *)(param_1 + 0x3c) / (double)(in_f4 & 0xffffffff00000000) +
              (double)*(float *)(*(int *)(unaff_gp + -0x75dc) + 0x88);
      (**(code **)(unaff_gp + -0x7aa8))
                ((double)*(float *)(param_1 + 0x34) -
                 (double)*(float *)(**(int **)(unaff_gp + -0x7684) + 0x14) * dVar1,
                 (double)*(float *)(param_1 + 0x38) -
                 (double)*(float *)(**(int **)(unaff_gp + -0x7684) + 0x18) * dVar1);
    }
    else {
      if (*(char *)(*(int *)(unaff_gp + -0x75dc) + 5) == '\0') {
        fVar2 = *(float *)(param_2 + 0x14);
      }
      else {
        fVar2 = *(float *)(param_2 + 0x14);
      }
      dVar1 = (double)*(float *)(*(int *)(unaff_gp + -0x75dc) + 0x94);
      (**(code **)(unaff_gp + -0x7aa8))
                (((double)*(float *)(param_1 + 0x34) +
                 (double)fVar2 * (double)*(float *)(param_1 + 0x58)) -
                 (double)*(float *)(**(int **)(unaff_gp + -0x7684) + 0x14) * dVar1,
                 ((double)*(float *)(param_1 + 0x38) + (double)*(float *)(param_2 + 0x18)) -
                 (double)*(float *)(**(int **)(unaff_gp + -0x7684) + 0x18) * dVar1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void newcontext(uint param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 != curcontextid) {
    iVar1 = *(int *)(curcontext + 0x44);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x74) = *(byte *)(iVar1 + 0x74) & 0xdf;
    }
    iVar1 = *(int *)(curcontext + 0x48);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) & 0xef;
    }
    curcontext = context + param_1 * 0xc54;
    curcontextwindows = contextwindows + param_1 * 0x38;
    altcontext = context + (1 - param_1) * 0xc54;
    altcontextwindows = contextwindows + (1 - param_1) * 0x38;
    curcontextflag = 1 << (param_1 & 0x1f);
    iVar1 = *(int *)(context + param_1 * 0xc54 + 0x44);
    curcontextid = param_1;
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x74) = *(byte *)(iVar1 + 0x74) | 0x20;
    }
    iVar1 = *(int *)(curcontext + 0x48);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x10;
    }
    if (param_2 == '\0') {
      uVar2 = XtDisplay(*(undefined4 *)(altcontextwindows + 0x28));
      uVar3 = XtWindow(*(undefined4 *)(altcontextwindows + 0x28));
      XMapWindow(uVar2,uVar3);
      uVar2 = XtDisplay(*(undefined4 *)(curcontextwindows + 0x28));
      uVar3 = XtWindow(*(undefined4 *)(curcontextwindows + 0x28));
      XUnmapWindow(uVar2,uVar3);
      update_widget_state();
      refresh_display();
      curcontext[0xc53] = 0;
      altcontext[0xc53] = 1;
      ui_layout_setup_wrapper();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void set_context_state(uint param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  int *piVar8;
  int unaff_gp;
  
  puVar6 = *(uint **)(unaff_gp + -0x7674);
  if (param_1 != *puVar6) {
    piVar7 = *(int **)(unaff_gp + -0x7684);
    iVar5 = *piVar7;
    iVar2 = *(int *)(iVar5 + 0x44);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 0x74) = *(byte *)(iVar2 + 0x74) & 0xdf;
      iVar5 = *piVar7;
    }
    iVar2 = *(int *)(iVar5 + 0x48);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) & 0xef;
    }
    iVar2 = *(int *)(unaff_gp + -0x75a8);
    iVar5 = *(int *)(unaff_gp + -0x75a4);
    piVar1 = *(int **)(unaff_gp + -0x767c);
    *piVar7 = iVar2 + param_1 * 0xc54;
    *piVar1 = iVar5 + param_1 * 0x38;
    **(int **)(unaff_gp + -0x7680) = iVar2 + (1 - param_1) * 0xc54;
    piVar8 = *(int **)(unaff_gp + -0x7678);
    piVar1 = *(int **)(unaff_gp + -0x7670);
    *puVar6 = param_1;
    *piVar8 = iVar5 + (1 - param_1) * 0x38;
    *piVar1 = 1 << (param_1 & 0x1f);
    iVar5 = *piVar7;
    iVar2 = *(int *)(iVar5 + 0x44);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 0x74) = *(byte *)(iVar2 + 0x74) | 0x20;
      iVar5 = *piVar7;
    }
    iVar2 = *(int *)(iVar5 + 0x48);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x10;
    }
    if (param_2 == '\0') {
      uVar3 = (**(code **)(unaff_gp + -0x7c04))(*(undefined4 *)(*piVar8 + 0x28));
      uVar4 = (**(code **)(unaff_gp + -0x7c98))
                        (*(undefined4 *)(**(int **)(unaff_gp + -0x7678) + 0x28));
      (**(code **)(unaff_gp + -0x7ebc))(uVar3,uVar4);
      uVar3 = (**(code **)(unaff_gp + -0x7c04))
                        (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x28));
      uVar4 = (**(code **)(unaff_gp + -0x7c98))
                        (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x28));
      (**(code **)(unaff_gp + -0x7e50))(uVar3,uVar4);
      (**(code **)(unaff_gp + -0x79d0))();
      (**(code **)(unaff_gp + -0x798c))();
      piVar7 = *(int **)(unaff_gp + -0x7680);
      *(undefined1 *)(**(int **)(unaff_gp + -0x7684) + 0xc53) = 0;
      *(undefined1 *)(*piVar7 + 0xc53) = 1;
      (**(code **)(unaff_gp + -0x7abc))();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void swapcontext(undefined1 param_1)

{
  set_context_state(1 - curcontextid,param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void savecontext(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void restorecontext(void)

{
  set_context_state(saved_context_state,1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void setcontext(int param_1,undefined1 param_2)

{
  if ((param_1 == *(int *)(altcontextwindows + 8)) || (param_1 == *(int *)(altcontextwindows + 0xc))
     ) {
    gl_swap_buffers(param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void set_gl_context(int param_1,undefined1 param_2)

{
  int unaff_gp;
  
  if ((param_1 == *(int *)(**(int **)(unaff_gp + -0x7678) + 8)) ||
     (param_1 == *(int *)(**(int **)(unaff_gp + -0x7678) + 0xc))) {
    (**(code **)(unaff_gp + -0x7894))(param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void copycontext(void)

{
  pointer_____offset_0x10017720___ puVar1;
  pointer_____offset_0x10018374___ puVar2;
  pointer_____offset_0x10017720___ puVar3;
  pointer_____offset_0x10017720___ puVar4;
  
  puVar1 = curcontext + 0xc54;
  puVar2 = altcontext;
  puVar3 = curcontext;
  do {
    puVar4 = puVar3 + 0xc;
    *(undefined4 *)puVar2 = *(undefined4 *)puVar3;
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
    *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(puVar3 + 8);
    puVar2 = puVar2 + 0xc;
    puVar3 = puVar4;
  } while (puVar4 != puVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_context_windows(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int unaff_gp;
  
  puVar2 = (undefined4 *)**(undefined4 **)(unaff_gp + -0x7684);
  puVar1 = (undefined4 *)**(undefined4 **)(unaff_gp + -0x7680);
  puVar3 = puVar2;
  do {
    puVar4 = puVar3 + 3;
    *puVar1 = *puVar3;
    puVar1[1] = puVar3[1];
    puVar1[2] = puVar3[2];
    puVar1 = puVar1 + 3;
    puVar3 = puVar4;
  } while (puVar4 != puVar2 + 0x315);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void myContext(undefined4 param_1,undefined4 param_2)

{
  set_gl_context(param_2,0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void get_bytecode_context(int param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_40 [4];
  int local_3c;
  int local_38 [2];
  undefined1 auStack_30 [8];
  int local_28;
  undefined4 *local_8;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 0x84);
    }
    if (active_item_list != (undefined4 *)0x0) {
      bVar1 = active_item_list != (undefined4 *)0x0;
      puVar2 = active_item_list;
      while (bVar1) {
        if ((param_1 == puVar2[1]) && (param_2 == puVar2[2])) {
          halt_baddata();
        }
        puVar2 = (undefined4 *)*puVar2;
        if (puVar2 == (undefined4 *)0x0) break;
        bVar1 = puVar2 != (undefined4 *)0x0;
      }
    }
    local_8 = (undefined4 *)XtCalloc(0x78,1);
    local_8[1] = param_1;
    local_8[2] = param_2;
    uVar3 = XInternAtom(param_1,"SERVER_OVERLAY_VISUALS",0);
    iVar13 = param_2 * 0x50;
    iVar4 = XGetWindowProperty(param_1,*(undefined4 *)(*(int *)(param_1 + 0x8c) + iVar13 + 8),uVar3,
                               0,1000000,0,0,local_38,&local_3c,local_8 + 4,auStack_40,local_8 + 3);
    if ((((iVar4 == 0) && (local_38[0] != 0)) && (local_3c == 0x20)) && (3 < (uint)local_8[4])) {
      local_8[4] = (uint)local_8[4] >> 2;
    }
    else {
      local_8[4] = 0;
      local_8[3] = 0;
    }
    local_28 = param_2;
    uVar3 = XGetVisualInfo(param_1,2,auStack_30,local_8 + 6);
    local_8[5] = uVar3;
    uVar3 = XtCalloc(local_8[6] << 2,1);
    local_8[7] = uVar3;
    uVar3 = XtCalloc(local_8[6] << 2,1);
    local_8[0x1a] = "UNDERLAY";
    bVar1 = false;
    iVar4 = 0;
    local_8[8] = uVar3;
    local_8[0x1b] = "NORMAL";
    local_8[0x1c] = "OVERLAY";
    local_8[0x1d] = "POPUP";
    if (0 < (int)local_8[6]) {
      iVar12 = 0;
      iVar11 = 0;
      do {
        uVar8 = local_8[4];
        piVar10 = (int *)(local_8[8] + iVar12);
        if (uVar8 == 0) {
          *piVar10 = 2;
          piVar10 = (int *)(local_8[8] + iVar12);
        }
        else {
          uVar6 = 0;
          if (uVar8 != 0) {
            piVar9 = (int *)local_8[3];
            iVar5 = local_8[5] + iVar11;
            do {
              if (*(int *)(iVar5 + 4) == *piVar9) {
                if (((*(int *)(iVar5 + 0xc) != 2) || (*(int *)(iVar5 + 0x10) != 3)) || (bVar1)) {
                  *piVar10 = 3;
                }
                else {
                  *piVar10 = 4;
                  bVar1 = true;
                }
                uVar8 = local_8[4];
                piVar10 = (int *)(local_8[8] + iVar12);
                break;
              }
              uVar6 = uVar6 + 1;
              piVar9 = piVar9 + 4;
            } while (uVar6 < uVar8);
          }
          if (uVar6 == uVar8) {
            *piVar10 = 2;
            piVar10 = (int *)(local_8[8] + iVar12);
          }
        }
        piVar9 = (int *)(local_8[5] + iVar11);
        iVar5 = *piVar10;
        iVar4 = iVar4 + 1;
        if (*(int *)(*(int *)(param_1 + 0x8c) + iVar13 + 0x28) == *piVar9) {
          local_8[9] = iVar5;
          local_8[iVar5 + 10] = local_8[5] + iVar11;
          local_8[iVar5 + 0xf] = *(undefined4 *)(local_8[5] + iVar11 + 0x10);
          local_8[iVar5 + 0x14] = *(undefined4 *)(*(int *)(param_1 + 0x8c) + iVar13 + 0x24);
        }
        else if ((local_8[9] != iVar5) && (iVar7 = piVar9[3], (int)local_8[iVar5 + 0x14] < iVar7)) {
          local_8[iVar5 + 0x14] = iVar7;
          local_8[iVar5 + 10] = local_8[5] + iVar11;
          local_8[iVar5 + 0xf] = *(undefined4 *)(local_8[5] + iVar11 + 0x10);
        }
        iVar12 = iVar12 + 4;
        iVar11 = iVar11 + 0x28;
      } while (iVar4 < (int)local_8[6]);
    }
    if (active_item_list == (undefined4 *)0x0) {
      *local_8 = 0;
    }
    else {
      *local_8 = active_item_list;
    }
    active_item_list = local_8;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
