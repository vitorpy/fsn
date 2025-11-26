/**
 * search.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "search.h"
#include "fsn_types.h"
#include "fsn_state.h"

void process_search_results(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x180));
  (**(code **)(unaff_gp + -0x7cf8))();
  (**(code **)(unaff_gp + -0x7b54))();
  (**(code **)(unaff_gp + -0x7cd0))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void bsearch2(undefined4 param_1,uint param_2,int param_3,int param_4,undefined4 param_5,
             uint *param_6)

{
  uint uVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar1 = param_2 + param_4 * (param_3 + -1);
  if (param_2 <= uVar1) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (0 < uStack_14) {
    uStack_10 = uStack_10 + param_4;
  }
  if (uVar1 < uStack_10) {
    uStack_10 = 0;
  }
  *param_6 = uStack_10;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void createSearch(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  search_xmstring_1 = XmStringCreateSimple("Search");
  search_xmstring_2 = XmStringCreateSimple(&search_label_cancel);
  search_xmstring_3 = XmStringCreateSimple(&search_label_all);
  uStack_28 = 0xe3f3afd;
  uStack_24 = 1;
  uVar1 = XmCreateSelectionBox(param_1,"search",&uStack_28,1);
  uVar2 = XmSelectionBoxGetChild(uVar1,7);
  XtUnmanageChild(uVar2);
  uVar2 = XmSelectionBoxGetChild(uVar1,0xe);
  XtUnmanageChild(uVar2);
  uVar2 = XmSelectionBoxGetChild(uVar1,0xb);
  XtUnmanageChild(uVar2);
  uVar2 = XmSelectionBoxGetChild(uVar1,0xd);
  XtUnmanageChild(uVar2);
  search_dialog_child = XmSelectionBoxGetChild(uVar1,1);
  XtSetSensitive(search_dialog_child,0);
  XtManageChild(search_dialog_child);
  XtManageChild(uVar1);
  XtAddCallback(uVar1,0xe3f44b6,search_value_callback,0);
  XtAddCallback(uVar1,0xe3f3641,search_activate_callback,0);
  XtAddCallback(uVar1,0xe3f380d,search_focus_callback,0);
  uStack_24 = 1;
  uStack_28 = 0xf661719;
  uVar2 = XmCreateRowColumn(uVar1,"search",&uStack_28,1);
  XtManageChild(uVar2);
  uStack_24 = search_xmstring_1;
  uStack_28 = 0xe3f40b5;
  search_count_label = XmCreateLabel(uVar2,"searchCount",&uStack_28,1);
  XtManageChild(search_count_label);
  uStack_28 = 0xf661719;
  uStack_24 = 2;
  uVar3 = XmCreateRowColumn(uVar2,"searchname",&uStack_28,1);
  XtManageChild(uVar3);
  uVar4 = XmCreateLabel(uVar3,&search_label_name,&uStack_28,0);
  XtManageChild(uVar4);
  search_name_field = XmCreateTextField(uVar3,"nametext",&uStack_28,0);
  XtManageChild(search_name_field);
  uStack_28 = 0xf661719;
  uStack_24 = 2;
  uVar3 = XmCreateRowColumn(uVar2,"searchsize",&uStack_28,1);
  XtManageChild(uVar3);
  uVar4 = XmCreateLabel(uVar3,&search_label_size,&uStack_28,0);
  XtManageChild(uVar4);
  uStack_24 = search_xmstring_3;
  uStack_28 = 0xe3f40b5;
  search_size_comp_button = XmCreatePushButton(uVar3,"searchSizeComp",&uStack_28,1);
  XtAddCallback(search_size_comp_button,0xe3f35b3,search_size_callback,0);
  XtManageChild(search_size_comp_button);
  search_age_mode = 0;
  search_size_field = XmCreateTextField(uVar3,"sizetext",&uStack_28,0);
  XtManageChild(search_size_field);
  uStack_24 = 2;
  uStack_28 = 0xf661719;
  uVar2 = XmCreateRowColumn(uVar2,"searchage",&uStack_28,1);
  XtManageChild(uVar2);
  uVar3 = XmCreateLabel(uVar2,&search_label_age,&uStack_28,0);
  XtManageChild(uVar3);
  uStack_24 = search_xmstring_3;
  uStack_28 = 0xe3f40b5;
  search_age_comp_button = XmCreatePushButton(uVar2,"searchAgeComp",&uStack_28,1);
  XtAddCallback(search_age_comp_button,0xe3f35b3,search_age_callback,0);
  XtManageChild(search_age_comp_button);
  search_size_mode = 0;
  search_age_field = XmCreateTextField(uVar2,"agetext",&uStack_28,0);
  XtManageChild(search_age_field);
  install_help_callback(uVar1,&searchHelp);
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

void search_file_entry(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int unaff_gp;
  int local_4;
  
  if (param_2[4] == 0) {
    puVar2 = (undefined4 *)param_2[5];
    puVar4 = param_2 + 7;
    if (puVar4 != puVar2) {
      puVar3 = puVar4;
      if (puVar2 < (undefined4 *)param_2[6]) {
        do {
          *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + 1);
        } while (puVar2 < (undefined4 *)param_2[6]);
      }
      param_2[5] = puVar4;
      param_2[6] = puVar3;
    }
    iVar1 = (**(code **)(unaff_gp + -0x7e14))
                      (*param_2,param_2[6],(int)param_2 + (0xbd4 - param_2[6]));
    if (iVar1 != -1) {
      if (iVar1 == 0) {
        param_2[0x5e7] = 1;
      }
      else {
        iVar5 = param_2[6];
        param_2[6] = iVar5 + iVar1;
        if (((iVar5 + iVar1) - (int)param_2) + -0x1c < 3000) {
          param_2[4] = 0;
        }
        else {
          param_2[4] = 1;
        }
        if ((uint)(param_2[6] - param_2[5]) < 4) {
          param_2[3] = 0;
        }
        else {
          (**(code **)(unaff_gp + -0x76f4))(param_2[5],&local_4);
          if ((uint)(param_2[6] - param_2[5]) < local_4 + 4U) {
            param_2[3] = 0;
          }
          else {
            param_2[3] = 1;
          }
        }
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void findfile(int param_1,undefined4 param_2)

{
  undefined4 auStack_34 [11];
  undefined4 *apuStack_8 [2];
  
  if (*(int *)(param_1 + 0xc) != 0) {
    apuStack_8[0] = auStack_34;
    auStack_34[0] = param_2;
    bsearch(apuStack_8,*(void **)(param_1 + 0x10),*(size_t *)(param_1 + 0xc),4,compare_files);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void finddir(int param_1,undefined4 param_2)

{
  undefined4 auStack_80 [30];
  undefined4 *apuStack_8 [2];
  
  if (*(int *)(param_1 + 0x14) != 0) {
    apuStack_8[0] = auStack_80;
    auStack_80[0] = param_2;
    bsearch(apuStack_8,*(void **)(param_1 + 0x18),*(size_t *)(param_1 + 0x14),4,compare_dirs);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void find_directory_by_path(int param_1,undefined4 param_2)

{
  int unaff_gp;
  undefined4 local_80 [30];
  undefined4 *local_8 [2];
  
  if (*(int *)(param_1 + 0x14) != 0) {
    local_8[0] = local_80;
    local_80[0] = param_2;
    (**(code **)(unaff_gp + -0x7f08))
              (local_8,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x14),4,
               *(undefined4 *)(unaff_gp + -0x7a60));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void findDirByFullName(char *param_1)

{
  char cVar1;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  
  sVar2 = strlen(param_1);
  if (((uint)topdir[1] < sVar2) &&
     (iVar3 = strncmp(param_1,(char *)*topdir,topdir[1]), puVar5 = topdir, iVar3 == 0)) {
    param_1 = param_1 + topdir[1];
    cVar1 = *param_1;
    while (cVar1 == '/') {
      pcVar4 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar1 = *pcVar4;
    }
    pcVar4 = strchr(param_1,0x2f);
    while (pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
      puVar5 = (undefined4 *)find_directory_by_path(puVar5,param_1);
      if (puVar5 == (undefined4 *)0x0) {
        *pcVar4 = '/';
        halt_baddata();
      }
      cVar1 = pcVar4[1];
      while (param_1 = pcVar4 + 1, cVar1 == '/') {
        cVar1 = pcVar4[2];
        pcVar4 = param_1;
      }
      pcVar4 = strchr(param_1,0x2f);
    }
    if (*param_1 != '\0') {
      find_directory_by_path(puVar5,param_1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void findbestfile(char *param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puStack_110;
  int *piStack_10c;
  char *apcStack_108 [30];
  char **ppcStack_90;
  char *apcStack_8c [30];
  char **appcStack_14 [5];
  
  *param_2 = 0;
  *param_3 = 0;
  sVar2 = strlen(param_1);
  if (sVar2 <= (uint)topdir[1]) {
    sVar2 = strlen(param_1);
    iVar3 = strncmp(param_1,(char *)*topdir,sVar2);
    if (iVar3 != 0) {
      halt_baddata();
    }
    *param_2 = (int)topdir;
    halt_baddata();
  }
  iVar3 = strncmp(param_1,(char *)*topdir,topdir[1]);
  puVar5 = topdir;
  if (iVar3 != 0) {
    halt_baddata();
  }
  param_1 = param_1 + topdir[1];
  cVar1 = *param_1;
  while (cVar1 == '/') {
    pcVar4 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar1 = *pcVar4;
  }
  pcVar4 = strchr(param_1,0x2f);
  while (pcVar4 != (char *)0x0) {
    *pcVar4 = '\0';
    puVar5 = (undefined4 *)find_directory_by_path(puVar5,param_1);
    if (puVar5 == (undefined4 *)0x0) {
      *pcVar4 = '/';
      halt_baddata();
    }
    cVar1 = pcVar4[1];
    while (param_1 = pcVar4 + 1, cVar1 == '/') {
      cVar1 = pcVar4[2];
      pcVar4 = param_1;
    }
    pcVar4 = strchr(param_1,0x2f);
  }
  if (*param_1 == '\0') {
    *param_2 = (int)puVar5;
    halt_baddata();
  }
  if (puVar5[3] != 0) {
    ppcStack_90 = apcStack_108;
    apcStack_108[0] = param_1;
    iVar3 = sort_entries(&ppcStack_90,puVar5[4],puVar5[3],4,compare_files,&puStack_110);
    if (iVar3 != 0) {
      *param_2 = (int)puVar5;
      *param_3 = *puStack_110;
      halt_baddata();
    }
    if (puStack_110 != (undefined4 *)0x0) {
      puVar7 = (undefined4 *)*puStack_110;
      iVar3 = puVar5[5];
      goto LAB_0042ad4c;
    }
  }
  puVar7 = (undefined4 *)0x0;
  iVar3 = puVar5[5];
LAB_0042ad4c:
  if (iVar3 == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    apcStack_8c[0] = param_1;
    appcStack_14[0] = apcStack_8c;
    iVar3 = sort_entries(appcStack_14,puVar5[6],puVar5[5],4,compare_dirs,&piStack_10c);
    if (iVar3 != 0) {
      *param_2 = *piStack_10c;
      halt_baddata();
    }
    puVar6 = (undefined4 *)0x0;
    if (piStack_10c != (int *)0x0) {
      puVar6 = (undefined4 *)*piStack_10c;
    }
  }
  if ((puVar6 != (undefined4 *)0x0) && (puVar7 != (undefined4 *)0x0)) {
    iVar3 = strcmp((char *)*puVar7,(char *)*puVar6);
    if (iVar3 < 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)0x0;
    }
  }
  if (puVar7 == (undefined4 *)0x0) {
    if (puVar6 != (undefined4 *)0x0) {
      sVar2 = strlen(param_1);
      iVar3 = strncmp((char *)*puVar6,param_1,sVar2);
      if (iVar3 == 0) {
        *param_2 = (int)puVar6;
      }
    }
  }
  else {
    sVar2 = strlen(param_1);
    iVar3 = strncmp((char *)*puVar7,param_1,sVar2);
    if (iVar3 == 0) {
      *param_2 = (int)puVar5;
      *param_3 = puVar7;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void find_string_index(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = string_buffer;
  if (0 < buffer_size) {
    do {
      if (param_1 == *piVar2) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < buffer_size);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
