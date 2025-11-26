/**
 * clipboard.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "clipboard.h"
#include "fsn_types.h"
#include "fsn_state.h"

void setMoveAndCopyButtons(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  XtSetSensitive(menu_directory_cascade,*(int *)(curcontext + 0x44) != 0);
  XtSetSensitive(menu_file_cascade,*(int *)(curcontext + 0x48) != 0);
  XtSetSensitive(popup_menu_widget,*(int *)(curcontext + 0x48) != 0);
  set_draw_mode(1);
  if ((altcontext[0xc51] != '\0') && (iVar1 = *(int *)(curcontext + 0x44), iVar1 != 0)) {
    iVar2 = 0;
    if (altcontext[0xc51] != '\0') {
      iVar2 = *(int *)(altcontext + 0x44);
    }
    if (iVar2 != iVar1) {
      if (*(int *)(curcontext + 0x48) != 0) {
        uStack_28 = 0xe3f40b5;
        uStack_24 = move_out_label;
        XtSetValues(menu_move_file_1,&uStack_28,1);
        XtSetValues(menu_move_file_2,&uStack_28,1);
        if (altcontext[0xc51] == '\0') {
          bVar3 = false;
        }
        else {
          bVar3 = *(int *)(altcontext + 0x44) != 0;
        }
        if (bVar3 != false) {
          if (altcontext[0xc51] == '\0') {
            bVar3 = true;
          }
          else {
            bVar3 = *(int *)(altcontext + 0x48) == 0;
          }
        }
        XtSetSensitive(menu_move_file_1,bVar3);
        if (altcontext[0xc51] == '\0') {
          bVar3 = false;
        }
        else {
          bVar3 = *(int *)(altcontext + 0x44) != 0;
        }
        if (bVar3 != false) {
          if (altcontext[0xc51] == '\0') {
            bVar3 = true;
          }
          else {
            bVar3 = *(int *)(altcontext + 0x48) == 0;
          }
        }
        XtSetSensitive(menu_move_file_2,bVar3);
        uStack_24 = copy_out_label;
        uStack_28 = 0xe3f40b5;
        XtSetValues(menu_copy_file_1,&uStack_28,1);
        XtSetValues(menu_copy_file_2,&uStack_28,1);
        if (altcontext[0xc51] == '\0') {
          bVar3 = false;
        }
        else {
          bVar3 = *(int *)(altcontext + 0x44) != 0;
        }
        if (bVar3 != false) {
          if (altcontext[0xc51] == '\0') {
            bVar3 = true;
          }
          else {
            bVar3 = *(int *)(altcontext + 0x48) == 0;
          }
        }
        XtSetSensitive(menu_copy_file_1,bVar3);
        if (altcontext[0xc51] == '\0') {
          bVar3 = false;
        }
        else {
          bVar3 = *(int *)(altcontext + 0x44) != 0;
        }
        if (bVar3 != false) {
          if (altcontext[0xc51] == '\0') {
            bVar3 = true;
          }
          else {
            bVar3 = *(int *)(altcontext + 0x48) == 0;
          }
        }
        XtSetSensitive(menu_copy_file_2,bVar3);
        uStack_24 = link_out_label;
        uStack_28 = 0xe3f40b5;
        XtSetValues(menu_link_file_1,&uStack_28,1);
        XtSetValues(menu_link_file_2,&uStack_28,1);
        if (altcontext[0xc51] == '\0') {
          bVar3 = false;
        }
        else {
          bVar3 = *(int *)(altcontext + 0x44) != 0;
        }
        if (bVar3 != false) {
          if (altcontext[0xc51] == '\0') {
            bVar3 = true;
          }
          else {
            bVar3 = *(int *)(altcontext + 0x48) == 0;
          }
        }
        XtSetSensitive(menu_link_file_1,bVar3);
        if (altcontext[0xc51] == '\0') {
          bVar3 = false;
        }
        else {
          bVar3 = *(int *)(altcontext + 0x44) != 0;
        }
        if (bVar3 != false) {
          if (altcontext[0xc51] == '\0') {
            bVar3 = true;
          }
          else {
            bVar3 = *(int *)(altcontext + 0x48) == 0;
          }
        }
        XtSetSensitive(menu_link_file_2,bVar3);
        halt_baddata();
      }
      if (iVar1 == 0) {
        halt_baddata();
      }
      uStack_24 = move_in_label;
      uStack_28 = 0xe3f40b5;
      XtSetValues(menu_move_file_1,&uStack_28,1);
      XtSetValues(menu_move_file_2,&uStack_28,1);
      iVar1 = 0;
      if (altcontext[0xc51] != '\0') {
        iVar1 = *(int *)(altcontext + 0x48);
      }
      XtSetSensitive(menu_move_file_1,iVar1 != 0);
      iVar1 = 0;
      if (altcontext[0xc51] != '\0') {
        iVar1 = *(int *)(altcontext + 0x48);
      }
      XtSetSensitive(menu_move_file_2,iVar1 != 0);
      uStack_28 = 0xe3f40b5;
      uStack_24 = copy_in_label;
      XtSetValues(menu_copy_file_1,&uStack_28,1);
      XtSetValues(menu_copy_file_2,&uStack_28,1);
      iVar1 = 0;
      if (altcontext[0xc51] != '\0') {
        iVar1 = *(int *)(altcontext + 0x48);
      }
      XtSetSensitive(menu_copy_file_1,iVar1 != 0);
      iVar1 = 0;
      if (altcontext[0xc51] != '\0') {
        iVar1 = *(int *)(altcontext + 0x48);
      }
      XtSetSensitive(menu_copy_file_2,iVar1 != 0);
      uStack_24 = link_in_label;
      uStack_28 = 0xe3f40b5;
      XtSetValues(menu_link_file_1,&uStack_28,1);
      XtSetValues(menu_link_file_2,&uStack_28,1);
      iVar1 = 0;
      if (altcontext[0xc51] != '\0') {
        iVar1 = *(int *)(altcontext + 0x48);
      }
      XtSetSensitive(menu_link_file_1,iVar1 != 0);
      iVar1 = 0;
      if (altcontext[0xc51] != '\0') {
        iVar1 = *(int *)(altcontext + 0x48);
      }
      XtSetSensitive(menu_link_file_2,iVar1 != 0);
      XtSetSensitive(menu_file_cascade,1);
      XtSetSensitive(popup_menu_widget,1);
      set_draw_mode(0);
      halt_baddata();
    }
  }
  uStack_24 = move_file_xmstring;
  uStack_28 = 0xe3f40b5;
  XtSetValues(menu_move_file_1,&uStack_28,1);
  XtSetValues(menu_move_file_2,&uStack_28,1);
  XtSetSensitive(menu_move_file_1,0);
  XtSetSensitive(menu_move_file_2,0);
  uStack_24 = copy_file_xmstring;
  uStack_28 = 0xe3f40b5;
  XtSetValues(menu_copy_file_1,&uStack_28,1);
  XtSetValues(menu_copy_file_2,&uStack_28,1);
  XtSetSensitive(menu_copy_file_1,0);
  XtSetSensitive(menu_copy_file_2,0);
  uStack_24 = link_file_xmstring;
  uStack_28 = 0xe3f40b5;
  XtSetValues(menu_link_file_1,&uStack_28,1);
  XtSetValues(menu_link_file_2,&uStack_28,1);
  XtSetSensitive(menu_link_file_1,0);
  XtSetSensitive(menu_link_file_2,0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void copy_file_item(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_gp;
  undefined1 auStack_8c [48];
  int local_5c;
  int local_4;
  
  (**(code **)(unaff_gp + -0x7a84))(**(int **)(unaff_gp + -0x7684) + 0x84c,param_1);
  (**(code **)(unaff_gp + -0x7ce4))(**(int **)(unaff_gp + -0x7684) + 0x84c,*param_2);
  iVar1 = (**(code **)(unaff_gp + -0x7e30))(**(int **)(unaff_gp + -0x7684) + 0x84c,auStack_8c);
  if (iVar1 < 0) {
    (**(code **)(unaff_gp + -0x7a8c))
              (*(int *)(unaff_gp + -0x7fa4) + -0x16b0,**(int **)(unaff_gp + -0x7684) + 0x84c);
  }
  else {
    local_4 = (**(code **)(unaff_gp + -0x7b40))(local_5c + 1);
    iVar1 = (**(code **)(unaff_gp + -0x7e34))(**(int **)(unaff_gp + -0x7684) + 0x84c,0);
    if (iVar1 < 0) {
      (**(code **)(unaff_gp + -0x7a8c))
                (*(int *)(unaff_gp + -0x7fa4) + -0x16a4,**(int **)(unaff_gp + -0x7684) + 0x84c);
    }
    else {
      iVar2 = (**(code **)(unaff_gp + -0x7e14))(iVar1,local_4,local_5c);
      if (iVar2 == local_5c) {
        *(undefined1 *)(local_4 + local_5c) = 0;
        (**(code **)(unaff_gp + -0x7da4))(iVar1);
        (**(code **)(unaff_gp + -0x7eec))
                  (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x14),local_4);
        (**(code **)(unaff_gp + -0x7e8c))(local_4);
        iVar1 = (**(code **)(unaff_gp + -0x7e28))(**(int **)(unaff_gp + -0x7684) + 0x84c,2);
        if (iVar1 < 0) {
          (**(code **)(unaff_gp + -0x7ce8))
                    (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x18),0);
          (**(code **)(unaff_gp + -0x7f38))
                    (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x14),0);
        }
        else {
          (**(code **)(unaff_gp + -0x7ce8))
                    (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x18),1);
          (**(code **)(unaff_gp + -0x7f38))
                    (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x14),1);
        }
        (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x10));
        uVar3 = (**(code **)(unaff_gp + -0x7c98))
                          (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x10));
        (**(code **)(unaff_gp + -0x7e84))(**(undefined4 **)(unaff_gp + -0x75fc),uVar3);
      }
      else {
        (**(code **)(unaff_gp + -0x7a8c))
                  (*(int *)(unaff_gp + -0x7fa4) + -0x1698,**(int **)(unaff_gp + -0x7684) + 0x84c);
        (**(code **)(unaff_gp + -0x7da4))(iVar1);
      }
    }
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

void createCopyright(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(param_2 + param_3 * 8);
  *puVar1 = 0xe3f3d1b;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)(param_2 + (param_3 + 1) * 8);
  *puVar1 = 0xe3f3d12;
  puVar1[1] = 0;
  puVar1 = (undefined4 *)(param_2 + (param_3 + 2) * 8);
  puVar1[1] = s_FSN_the_3D_File_System_Navigator_100079c4;
  *puVar1 = 0xf66187b;
  active_file_list = XmCreateText(param_1,"copyright",param_2,param_3 + 3);
  XtManageChild(active_file_list);
  uVar2 = XtWindow(active_file_list);
  XRaiseWindow(display,uVar2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void destroyCopyright(void)

{
  XtDestroyWidget(active_file_list);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void copy_selection_data(undefined2 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int unaff_gp;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  undefined1 local_2;
  
  local_30 = *(undefined4 *)(param_1 + 4);
  local_2c = *(undefined4 *)(param_1 + 6);
  local_28 = *(undefined4 *)(param_1 + 8);
  local_24 = *(undefined4 *)(param_1 + 0xc);
  local_20 = *(undefined4 *)(param_1 + 0xe);
  local_1c = *(undefined4 *)(param_1 + 0x10);
  local_18 = *(undefined4 *)(param_1 + 0x14);
  local_14 = *(undefined4 *)(param_1 + 0x16);
  local_10 = *(undefined4 *)(param_1 + 0x18);
  local_c = *param_1;
  local_a = param_1[1];
  local_2 = *(undefined1 *)(param_1 + 0x1a);
  if (*(int *)(param_1 + 2) == 0) {
    local_8 = 0;
  }
  else {
    uVar1 = (**(code **)(unaff_gp + -0x7a84))(0,*(int *)(param_1 + 2));
    local_8 = (**(code **)(unaff_gp + -0x7c20))(uVar1);
  }
  if (*(int *)(param_1 + 10) == 0) {
    local_6 = 0;
  }
  else {
    uVar1 = (**(code **)(unaff_gp + -0x7a84))(0);
    local_6 = (**(code **)(unaff_gp + -0x7c20))(uVar1);
  }
  if (*(undefined4 **)(param_1 + 0x12) == (undefined4 *)0x0) {
    local_4 = 0;
  }
  else {
    local_4 = (**(code **)(unaff_gp + -0x7c20))(**(undefined4 **)(param_1 + 0x12));
  }
  (**(code **)(unaff_gp + -0x7d74))(&local_30,0x30,1,param_2);
  if (*(int *)(param_1 + 2) != 0) {
    uVar1 = (**(code **)(unaff_gp + -0x7a84))(0,*(int *)(param_1 + 2));
    (**(code **)(unaff_gp + -0x7d74))(uVar1,1,local_8,param_2);
  }
  if (*(int *)(param_1 + 10) != 0) {
    uVar1 = (**(code **)(unaff_gp + -0x7a84))(0);
    (**(code **)(unaff_gp + -0x7d74))(uVar1,1,local_6,param_2);
  }
  if (*(undefined4 **)(param_1 + 0x12) != (undefined4 *)0x0) {
    (**(code **)(unaff_gp + -0x7d74))(**(undefined4 **)(param_1 + 0x12),1,local_4,param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void copy_buffer_data(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int unaff_gp;
  
  piVar8 = (int *)(*(int *)(unaff_gp + -0x7f94) + -0x6adc);
  piVar4 = (int *)(*(int *)(unaff_gp + -0x7f94) + -0x6ad8);
  iVar1 = *piVar4;
  iVar3 = *piVar8;
  if (iVar3 == iVar1) {
    if (iVar1 == 0) {
      *piVar4 = 8;
      uVar2 = (**(code **)(unaff_gp + -0x7b40))(0x200);
      iVar1 = *(int *)(unaff_gp + -0x7f94);
      puVar9 = (undefined4 *)(*(int *)(unaff_gp + -0x7f94) + -0x6ae0);
      *puVar9 = uVar2;
      piVar4 = (int *)(iVar1 + -0x6ad8);
    }
    else {
      iVar3 = *(int *)(unaff_gp + -0x7f94);
      *piVar4 = iVar1 + 8;
      puVar9 = (undefined4 *)(iVar3 + -0x6ae0);
    }
    uVar2 = (**(code **)(unaff_gp + -0x7ea4))(*puVar9,*piVar4 << 6);
    iVar3 = *piVar8;
    *puVar9 = uVar2;
  }
  piVar4 = (int *)(*(int *)(unaff_gp + -0x7f94) + -0x6ae0);
  puVar9 = (undefined4 *)(*piVar4 + iVar3 * 0x40);
  puVar7 = param_2;
  do {
    puVar6 = puVar7;
    puVar5 = puVar9;
    puVar7 = puVar6 + 3;
    *puVar5 = *puVar6;
    puVar5[1] = puVar6[1];
    puVar5[2] = puVar6[2];
    puVar9 = puVar5 + 3;
  } while (puVar7 != param_2 + 0xc);
  puVar5[3] = *puVar7;
  puVar5[4] = puVar6[4];
  if (param_1 == 0) {
    *(undefined4 *)(*piVar4 + *piVar8 * 0x40 + 0x38) = 0;
  }
  else {
    iVar1 = (**(code **)(unaff_gp + -0x7c20))(param_1);
    uVar2 = (**(code **)(unaff_gp + -0x7b40))(iVar1 + 1);
    uVar2 = (**(code **)(unaff_gp + -0x7ecc))(uVar2,param_1);
    *(undefined4 *)(*piVar4 + *piVar8 * 0x40 + 0x38) = uVar2;
  }
  uVar2 = (**(code **)(unaff_gp + -0x7e90))(param_1);
  *(undefined4 *)(*piVar4 + *piVar8 * 0x40 + 0x3c) = uVar2;
  (**(code **)(unaff_gp + -0x7ea0))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ec4),
             *(undefined4 *)(*piVar4 + *piVar8 * 0x40 + 0x3c),0);
  iVar1 = *piVar8;
  *piVar8 = iVar1 + 1;
  if (iVar1 + 1 == 1) {
    (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ec0),1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
