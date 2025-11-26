/**
 * widget.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "widget.h"
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

void update_widget_state(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int unaff_gp;
  int local_28;
  undefined4 local_24;
  
  (**(code **)(unaff_gp + -0x7ce8))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b98),
             *(int *)(**(int **)(unaff_gp + -0x7684) + 0x44) != 0);
  (**(code **)(unaff_gp + -0x7ce8))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b9c),
             *(int *)(**(int **)(unaff_gp + -0x7684) + 0x48) != 0);
  (**(code **)(unaff_gp + -0x7ce8))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b94),
             *(int *)(**(int **)(unaff_gp + -0x7684) + 0x48) != 0);
  (*(code *)(*(int *)(unaff_gp + -0x7fe4) + -0x36d8))(1);
  cVar1 = *(char *)(**(int **)(unaff_gp + -0x7680) + 0xc51);
  if (cVar1 != '\0') {
    iVar2 = *(int *)(**(int **)(unaff_gp + -0x7684) + 0x44);
    if (iVar2 != 0) {
      iVar3 = 0;
      if (cVar1 != '\0') {
        iVar3 = *(int *)(**(int **)(unaff_gp + -0x7680) + 0x44);
      }
      if (iVar3 != iVar2) {
        if (*(int *)(**(int **)(unaff_gp + -0x7684) + 0x48) != 0) {
          local_28 = *(int *)(unaff_gp + -0x7f60) + 0x1d4d;
          local_24 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b34);
          (**(code **)(unaff_gp + -0x7cc0))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b6c),&local_28,1);
          (**(code **)(unaff_gp + -0x7cc0))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b70),&local_28,1);
          iVar2 = **(int **)(unaff_gp + -0x7680);
          if (*(char *)(iVar2 + 0xc51) == '\0') {
            bVar4 = false;
          }
          else {
            bVar4 = *(int *)(iVar2 + 0x44) != 0;
          }
          if (bVar4 != false) {
            if (*(char *)(iVar2 + 0xc51) == '\0') {
              bVar4 = true;
            }
            else {
              bVar4 = *(int *)(iVar2 + 0x48) == 0;
            }
          }
          (**(code **)(unaff_gp + -0x7ce8))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b6c),bVar4);
          iVar2 = **(int **)(unaff_gp + -0x7680);
          if (*(char *)(iVar2 + 0xc51) == '\0') {
            bVar4 = false;
          }
          else {
            bVar4 = *(int *)(iVar2 + 0x44) != 0;
          }
          if (bVar4 != false) {
            if (*(char *)(iVar2 + 0xc51) == '\0') {
              bVar4 = true;
            }
            else {
              bVar4 = *(int *)(iVar2 + 0x48) == 0;
            }
          }
          (**(code **)(unaff_gp + -0x7ce8))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b70),bVar4);
          local_24 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b40);
          local_28 = *(int *)(unaff_gp + -0x7f60) + 0x1d4d;
          (**(code **)(unaff_gp + -0x7cc0))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b74),&local_28,1);
          (**(code **)(unaff_gp + -0x7cc0))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b78),&local_28,1);
          iVar2 = **(int **)(unaff_gp + -0x7680);
          if (*(char *)(iVar2 + 0xc51) == '\0') {
            bVar4 = false;
          }
          else {
            bVar4 = *(int *)(iVar2 + 0x44) != 0;
          }
          if (bVar4 != false) {
            if (*(char *)(iVar2 + 0xc51) == '\0') {
              bVar4 = true;
            }
            else {
              bVar4 = *(int *)(iVar2 + 0x48) == 0;
            }
          }
          (**(code **)(unaff_gp + -0x7ce8))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b74),bVar4);
          iVar2 = **(int **)(unaff_gp + -0x7680);
          if (*(char *)(iVar2 + 0xc51) == '\0') {
            bVar4 = false;
          }
          else {
            bVar4 = *(int *)(iVar2 + 0x44) != 0;
          }
          if (bVar4 != false) {
            if (*(char *)(iVar2 + 0xc51) == '\0') {
              bVar4 = true;
            }
            else {
              bVar4 = *(int *)(iVar2 + 0x48) == 0;
            }
          }
          (**(code **)(unaff_gp + -0x7ce8))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b78),bVar4);
          local_24 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b4c);
          local_28 = *(int *)(unaff_gp + -0x7f60) + 0x1d4d;
          (**(code **)(unaff_gp + -0x7cc0))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b7c),&local_28,1);
          (**(code **)(unaff_gp + -0x7cc0))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b80),&local_28,1);
          iVar2 = **(int **)(unaff_gp + -0x7680);
          if (*(char *)(iVar2 + 0xc51) == '\0') {
            bVar4 = false;
          }
          else {
            bVar4 = *(int *)(iVar2 + 0x44) != 0;
          }
          if (bVar4 != false) {
            if (*(char *)(iVar2 + 0xc51) == '\0') {
              bVar4 = true;
            }
            else {
              bVar4 = *(int *)(iVar2 + 0x48) == 0;
            }
          }
          (**(code **)(unaff_gp + -0x7ce8))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b7c),bVar4);
          iVar2 = **(int **)(unaff_gp + -0x7680);
          if (*(char *)(iVar2 + 0xc51) == '\0') {
            bVar4 = false;
          }
          else {
            bVar4 = *(int *)(iVar2 + 0x44) != 0;
          }
          if (bVar4 != false) {
            if (*(char *)(iVar2 + 0xc51) == '\0') {
              bVar4 = true;
            }
            else {
              bVar4 = *(int *)(iVar2 + 0x48) == 0;
            }
          }
          (**(code **)(unaff_gp + -0x7ce8))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b80),bVar4);
          halt_baddata();
        }
        if (iVar2 == 0) {
          halt_baddata();
        }
        local_24 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b38);
        local_28 = *(int *)(unaff_gp + -0x7f60) + 0x1d4d;
        (**(code **)(unaff_gp + -0x7cc0))
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b6c),&local_28,1);
        (**(code **)(unaff_gp + -0x7cc0))
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b70),&local_28,1);
        iVar2 = 0;
        if (*(char *)(**(int **)(unaff_gp + -0x7680) + 0xc51) != '\0') {
          iVar2 = *(int *)(**(int **)(unaff_gp + -0x7680) + 0x48);
        }
        (**(code **)(unaff_gp + -0x7ce8))
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b6c),iVar2 != 0);
        iVar2 = 0;
        if (*(char *)(**(int **)(unaff_gp + -0x7680) + 0xc51) != '\0') {
          iVar2 = *(int *)(**(int **)(unaff_gp + -0x7680) + 0x48);
        }
        (**(code **)(unaff_gp + -0x7ce8))
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b70),iVar2 != 0);
        local_28 = *(int *)(unaff_gp + -0x7f60) + 0x1d4d;
        local_24 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b44);
        (**(code **)(unaff_gp + -0x7cc0))
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b74),&local_28,1);
        (**(code **)(unaff_gp + -0x7cc0))
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b78),&local_28,1);
        iVar2 = 0;
        if (*(char *)(**(int **)(unaff_gp + -0x7680) + 0xc51) != '\0') {
          iVar2 = *(int *)(**(int **)(unaff_gp + -0x7680) + 0x48);
        }
        (**(code **)(unaff_gp + -0x7ce8))
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b74),iVar2 != 0);
        iVar2 = 0;
        if (*(char *)(**(int **)(unaff_gp + -0x7680) + 0xc51) != '\0') {
          iVar2 = *(int *)(**(int **)(unaff_gp + -0x7680) + 0x48);
        }
        (**(code **)(unaff_gp + -0x7ce8))
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b78),iVar2 != 0);
        local_24 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b50);
        local_28 = *(int *)(unaff_gp + -0x7f60) + 0x1d4d;
        (**(code **)(unaff_gp + -0x7cc0))
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b7c),&local_28,1);
        (**(code **)(unaff_gp + -0x7cc0))
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b80),&local_28,1);
        iVar2 = 0;
        if (*(char *)(**(int **)(unaff_gp + -0x7680) + 0xc51) != '\0') {
          iVar2 = *(int *)(**(int **)(unaff_gp + -0x7680) + 0x48);
        }
        (**(code **)(unaff_gp + -0x7ce8))
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b7c),iVar2 != 0);
        iVar2 = 0;
        if (*(char *)(**(int **)(unaff_gp + -0x7680) + 0xc51) != '\0') {
          iVar2 = *(int *)(**(int **)(unaff_gp + -0x7680) + 0x48);
        }
        (**(code **)(unaff_gp + -0x7ce8))
                  (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b80),iVar2 != 0);
        (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b9c),1);
        (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b94),1);
        (*(code *)(*(int *)(unaff_gp + -0x7fe4) + -0x36d8))(0);
        halt_baddata();
      }
    }
  }
  local_24 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b30);
  local_28 = *(int *)(unaff_gp + -0x7f60) + 0x1d4d;
  (**(code **)(unaff_gp + -0x7cc0))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b6c),&local_28,1);
  (**(code **)(unaff_gp + -0x7cc0))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b70),&local_28,1);
  (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b6c),0);
  (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b70),0);
  local_24 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b3c);
  local_28 = *(int *)(unaff_gp + -0x7f60) + 0x1d4d;
  (**(code **)(unaff_gp + -0x7cc0))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b74),&local_28,1);
  (**(code **)(unaff_gp + -0x7cc0))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b78),&local_28,1);
  (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b74),0);
  (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b78),0);
  local_24 = *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b48);
  local_28 = *(int *)(unaff_gp + -0x7f60) + 0x1d4d;
  (**(code **)(unaff_gp + -0x7cc0))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b7c),&local_28,1);
  (**(code **)(unaff_gp + -0x7cc0))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b80),&local_28,1);
  (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b7c),0);
  (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b80),0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void widgetHelp(undefined4 param_1,undefined4 param_2)

{
  XtAddCallback(param_1,0xe3f3e9f,help_callback,param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
