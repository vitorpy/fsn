/**
 * items.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "items.h"
#include "fsn_types.h"
#include "fsn_state.h"

void count_directory_items(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void get_item_by_index(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void mark_directory_item(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0xc) == 0) && (*(int *)(param_1 + 0x14) == 0)) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar1 = 0;
    do {
      iVar2 = iVar2 + 1;
      iVar3 = *(int *)(*(int *)(param_1 + 0x10) + iVar1);
      iVar1 = iVar1 + 4;
      *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 1;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  iVar1 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      iVar1 = iVar1 + 1;
      iVar3 = *(int *)(*(int *)(param_1 + 0x18) + iVar2);
      iVar2 = iVar2 + 4;
      *(byte *)(iVar3 + 0x74) = *(byte *)(iVar3 + 0x74) | 4;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void handle_item_action(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_gp;
  undefined4 uVar4;
  undefined1 auStack_90 [20];
  int local_7c;
  int local_60;
  int local_50;
  undefined4 local_8;
  
  iVar1 = (**(code **)(unaff_gp + -0x7a5c))();
  if (iVar1 != 0) {
    local_8 = (**(code **)(unaff_gp + -0x7a84))(0,param_1);
    (**(code **)(unaff_gp + -0x7ce4))(local_8,param_2);
    iVar2 = (**(code **)(unaff_gp + -0x7ee0))(local_8,auStack_90);
    if (-1 < iVar2) {
      if (((local_7c != *(int *)(iVar1 + 8)) || (local_60 != *(int *)(iVar1 + 0xc))) ||
         (local_50 != *(int *)(iVar1 + 0x10))) {
        iVar2 = *(int *)(unaff_gp + -0x7fe8);
        *(int *)(param_1 + 0x1c) = (*(int *)(param_1 + 0x1c) + local_60) - *(int *)(iVar1 + 0xc);
        uVar4 = (*(code *)(iVar2 + 0x18b0))(param_1);
        *(undefined4 *)(param_1 + 0x24) = uVar4;
        *(int *)(iVar1 + 8) = local_7c;
        *(int *)(iVar1 + 0xc) = local_60;
        *(int *)(iVar1 + 0x10) = local_50;
        uVar4 = (**(code **)(unaff_gp + -0x77e8))(local_8);
        *(undefined4 *)(iVar1 + 0x20) = uVar4;
        piVar3 = (int *)(*(int *)(unaff_gp + -0x7f98) + 0x184);
        if (*piVar3 < *(int *)(iVar1 + 0xc)) {
          *piVar3 = *(int *)(iVar1 + 0xc);
        }
        piVar3 = (int *)(*(int *)(unaff_gp + -0x7f98) + 0x18c);
        if (*piVar3 < *(int *)(param_1 + 0x1c)) {
          *piVar3 = *(int *)(param_1 + 0x1c);
        }
        (**(code **)(unaff_gp + -0x7a74))(iVar1);
        (*(code *)(*(int *)(unaff_gp + -0x7fe8) + 0x2234))(param_1);
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) | 0x80;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void process_pick_item(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_f5;
  undefined4 uVar3;
  undefined4 in_f11;
  uint unaff_000010c0;
  
  pushmatrix();
  translate(0,(float)((double)-*(float *)(param_1 + 0x3c) /
                     (double)((ulonglong)unaff_000010c0 << 0x20)));
  uVar3 = 0x3fe00000;
  iVar1 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      render_item_recursive(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
  popmatrix();
  if (*(int *)(param_1 + 0x28) != 0) {
    draw_directory_recursive(*(int *)(param_1 + 0x28),&child_dir_index_1,0,0,in_f11,
                 SUB84((double)*(float *)(param_1 + 0x3c) /
                       (double)((ulonglong)unaff_000010c0 << 0x20) + (double)layout_base_height,0));
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    draw_directory_recursive(*(int *)(param_1 + 0x2c),&child_dir_index_2,in_f5,SUB84((double)-item_spacing_x,0),in_f5,
                 SUB84((double)*(float *)(param_1 + 0x3c) /
                       (double)((ulonglong)unaff_000010c0 << 0x20) + (double)layout_base_height,0));
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    draw_directory_recursive(*(int *)(param_1 + 0x30),&child_dir_index_3,uVar3,SUB84((double)item_spacing_x,0),uVar3,
                 SUB84((double)*(float *)(param_1 + 0x3c) /
                       (double)((ulonglong)unaff_000010c0 << 0x20) + (double)layout_base_height,0));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void calculate_item_params(float *param_1,float *param_2,float *param_3,undefined2 *param_4,
                 undefined2 *param_5,int *param_6,undefined1 *param_7,undefined1 *param_8)

{
  int iVar1;
  int *piVar2;
  int unaff_gp;
  float fVar3;
  undefined1 auStack_c [4];
  int local_8;
  int local_4;
  
  *param_5 = 0;
  *param_7 = 0;
  *param_8 = 0;
  (**(code **)(unaff_gp + -0x79f8))(&local_4,&local_8,auStack_c);
  if (local_4 == 0) {
    *param_7 = 1;
    *param_6 = 0;
  }
  else if (local_8 == 0) {
    if (local_4 == *(int *)(**(int **)(unaff_gp + -0x7684) + 0x3c)) {
      (**(code **)(unaff_gp + -0x79c0))();
      iVar1 = *(int *)(unaff_gp + -0x75dc);
      piVar2 = *(int **)(unaff_gp + -0x7684);
      *param_1 = *(float *)(iVar1 + 0x2c);
      *param_2 = *(float *)(iVar1 + 0x30);
      *param_3 = *(float *)(iVar1 + 0x34);
      *param_4 = (short)*(undefined4 *)(iVar1 + 0x38);
      *param_6 = *(int *)(*piVar2 + 0x3c);
    }
    else {
      *param_7 = 1;
      *param_6 = local_4;
    }
  }
  else if (local_4 == *(int *)(**(int **)(unaff_gp + -0x7684) + 0x3c)) {
    (**(code **)(unaff_gp + -0x79bc))(local_8);
    piVar2 = *(int **)(unaff_gp + -0x7684);
    iVar1 = *(int *)(unaff_gp + -0x75dc);
    fVar3 = *(float *)(local_8 + 0x14);
    *param_1 = (float)((double)fVar3 -
                      (double)*(float *)(*piVar2 + 0x14) * (double)*(float *)(iVar1 + 0xa0));
    *param_2 = (float)(((double)*(float *)(local_8 + 0x18) +
                       (double)*(float *)(local_4 + 0x3c) /
                       (double)((ulonglong)(double)fVar3 & 0xffffffff00000000)) -
                      (double)*(float *)(*piVar2 + 0x18) * (double)*(float *)(iVar1 + 0xa0));
    if (*(char *)(iVar1 + 5) == '\0') {
      *param_3 = *(float *)(iVar1 + 0x9c) + *(float *)(local_8 + 0x1c);
    }
    else {
      *param_8 = 1;
      *param_3 = *(float *)(iVar1 + 0x90) + *(float *)(iVar1 + 0x80);
    }
    *param_4 = (short)*(undefined4 *)(iVar1 + 0xa4);
    *param_6 = *(int *)(*piVar2 + 0x3c);
    *param_8 = 1;
  }
  else {
    (**(code **)(unaff_gp + -0x7c08))
              (*(int *)(unaff_gp + -0x7f68) + 0x20,*(int *)(unaff_gp + -0x7fa4) + -0x5148);
  }
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

void update_marked_item(int param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_gp;
  int local_28;
  uint local_24;
  
  iVar1 = *(int *)(**(int **)(unaff_gp + -0x7684) + 0x44);
  if (param_1 == iVar1) {
    (**(code **)(unaff_gp + -0x79c0))();
    if (*(char *)(*(int *)(unaff_gp + -0x7f98) + 0x6e24) != '\0') {
      (**(code **)(unaff_gp + -0x79d4))();
    }
  }
  else {
    if (iVar1 != 0) {
      (*(code *)(*(int *)(unaff_gp + -0x7fe4) + -0x2be8))();
      iVar1 = *(int *)(**(int **)(unaff_gp + -0x7684) + 0x44);
      *(byte *)(iVar1 + 0x74) = *(byte *)(iVar1 + 0x74) & 0xdf;
      (**(code **)(unaff_gp + -0x79c0))();
      *(undefined1 *)(**(int **)(unaff_gp + -0x7684) + 0xc50) = 0;
    }
    (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b98),1);
    piVar2 = *(int **)(unaff_gp + -0x7684);
    *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 0x20;
    *(int *)(*piVar2 + 0x44) = param_1;
    (**(code **)(unaff_gp + -0x7a84))(*piVar2 + 0x4c,param_1);
    (**(code **)(unaff_gp + -0x79d4))();
    (**(code **)(unaff_gp + -0x798c))();
    local_28 = *(int *)(unaff_gp + -0x7f60) + 0x2589;
    local_24 = (uint)(*(int *)(param_1 + 0x74) << 0xb) >> 0x1f;
    (**(code **)(unaff_gp + -0x7cc0))
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b54),&local_28,1);
    local_28 = *(int *)(unaff_gp + -0x7f60) + 0x2589;
    local_24 = (uint)(*(int *)(param_1 + 0x74) << 0xd) >> 0x1f;
    (**(code **)(unaff_gp + -0x7cc0))
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b58),&local_28,1);
    (**(code **)(unaff_gp + -0x7ce8))
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b54),
               -1 < *(int *)(param_1 + 0x74) << 0xd);
    (**(code **)(unaff_gp + -0x79d0))();
    if (*(int *)(param_1 + 100) != 0) {
      (**(code **)(unaff_gp + -0x7db4))();
      *(undefined4 *)(param_1 + 100) = 0;
    }
    if (-1 < *(int *)(param_1 + 0x74) << 10) {
      (**(code **)(unaff_gp + -0x78ec))(param_1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void get_item_screen_coords(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_gp;
  int local_30;
  uint local_2c;
  
  iVar1 = *(int *)(**(int **)(unaff_gp + -0x7684) + 0x48);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) & 0xef;
  }
  (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b9c),1);
  (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b94),1);
  piVar2 = *(int **)(unaff_gp + -0x7684);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  *(undefined4 **)(*piVar2 + 0x48) = param_1;
  iVar1 = *piVar2;
  (**(code **)(unaff_gp + -0x7ecc))(iVar1 + 0x44c,iVar1 + 0x4c);
  (**(code **)(unaff_gp + -0x7ce4))(**(int **)(unaff_gp + -0x7684) + 0x44c,*param_1);
  (**(code **)(unaff_gp + -0x79d4))();
  local_30 = *(int *)(unaff_gp + -0x7f60) + 0x2589;
  local_2c = (uint)(param_1[10] << 9) >> 0x1f;
  (**(code **)(unaff_gp + -0x7cc0))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b84),&local_30,1);
  (**(code **)(unaff_gp + -0x7cc0))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b88),&local_30,1);
  (**(code **)(unaff_gp + -0x79d0))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void set_items_flag(int param_1,char param_2)

{
  if (param_2 == '\0') {
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xef;
    if (*(int *)(param_1 + 100) != 0) {
      XtRemoveTimeOut();
    }
    check_unmonitor_dp(param_1);
  }
  else {
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 0x10;
    add_directory_monitor();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void update_items_recursive(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  set_items_flag();
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar2 = 0;
    do {
      update_items_recursive(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2),param_2);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void pick_file_item(int param_1,undefined4 *param_2,undefined4 param_3,char param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  char *pcVar1;
  char *__s1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  char acStack_464 [1124];
  
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
    sprintf(acStack_464,"Don\'t know how to %s current selection",param_5);
    show_error_message(acStack_464);
  }
  else {
    pcVar1 = (char *)build_path_string(0,param_1);
    strcat(pcVar1,(char *)*param_2);
    if (param_2[8] == 0) {
      sprintf(acStack_464,"Don\'t know how to %s %s",param_5,*param_2);
      show_error_message(acStack_464);
    }
    else {
      __s1 = (char *)get_icon_attribute(param_2[8],param_3,param_5);
      if (__s1 == (char *)0x0) {
        sprintf(acStack_464,"Don\'t know how to %s %s",param_5,*param_2);
        show_error_message(acStack_464);
      }
      else {
        if ((param_4 != '\0') && (wineditor_enabled != '\0')) {
          sVar2 = strlen("$WINEDITOR ");
          iVar3 = strncmp(__s1,"$WINEDITOR ",sVar2);
          if (iVar3 == 0) {
            copy_file_item(param_1,param_2);
            halt_baddata();
          }
        }
        display_scan_status(param_6,pcVar1,2000);
        if (rest_mode_enabled != '\0') {
          sVar2 = strlen("REST=");
          XtMalloc(sVar2 + 1);
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        sprintf(acStack_464,"LEADER=%s",pcVar1);
        sVar2 = strlen(acStack_464);
        pcVar1 = (char *)XtMalloc(sVar2 + 1);
        pcVar1 = strcpy(pcVar1,acStack_464);
        putenv(pcVar1);
        if (current_dir_path != (char *)0x0) {
          XtFree(current_dir_path);
        }
        current_dir_path = pcVar1;
        uVar4 = get_icon_string(param_2[8]);
        sprintf(acStack_464,"LEADERTYPE=%s",uVar4);
        sVar2 = strlen(acStack_464);
        pcVar1 = (char *)XtMalloc(sVar2 + 1);
        pcVar1 = strcpy(pcVar1,acStack_464);
        putenv(pcVar1);
        if (current_file_path != (char *)0x0) {
          XtFree(current_file_path);
        }
        current_file_path = pcVar1;
        sprintf(acStack_464,"%s&",__s1);
        update_status_display(acStack_464);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void unmark_items_recursive(int param_1)

{
  char *__dest;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x74) << 0xc < 0) {
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xf7;
    if (0 < *(int *)(param_1 + 0xc)) {
      iVar3 = 0;
      do {
        puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x10) + iVar3);
        if ((int)(puVar2[10] << 9) < 0) {
          __dest = (char *)build_path_string(0,param_1);
          strcat(__dest,(char *)*puVar2);
          iVar1 = unlink(__dest);
          if (iVar1 < 0) {
            show_error_dialog("cannot delete",__dest);
            *(byte *)((int)puVar2 + 0x29) = *(byte *)((int)puVar2 + 0x29) & 0xbf;
          }
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < *(int *)(param_1 + 0xc));
    }
    if (-1 < *(int *)(param_1 + 0x74) << 10) {
      refresh_directory_view(param_1);
    }
  }
  iVar3 = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      unmark_items_recursive(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar4));
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void mark_items_recursive(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((*(int *)(param_1 + 0x74) << 0xc < 0) &&
     (*(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xf7, 0 < *(int *)(param_1 + 0xc))) {
    iVar2 = 0;
    do {
      iVar3 = iVar3 + 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + iVar2);
      iVar2 = iVar2 + 4;
      *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) & 0xbf;
    } while (iVar3 < *(int *)(param_1 + 0xc));
  }
  iVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      mark_items_recursive(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar3));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < *(int *)(param_1 + 0x14));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
