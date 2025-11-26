/**
 * pathutil.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "pathutil.h"
#include "fsn_types.h"
#include "fsn_state.h"

void build_path_string(char *param_1,undefined4 *param_2)

{
  size_t sVar1;
  
  if (param_2[10] != 0) {
    build_path_string(param_1,param_2[10]);
  }
  strcat(param_1,(char *)*param_2);
  sVar1 = strlen(param_1);
  param_1 = param_1 + sVar1;
  if (param_1[-1] != '/') {
    *param_1 = '/';
    param_1[1] = '\0';
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void dirToPath(undefined1 *param_1,int param_2)

{
  if (param_1 == (undefined1 *)0x0) {
    param_1 = &default_byte_value;
  }
  *param_1 = 0;
  if (param_2 != 0) {
    build_path_string();
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

void get_path_entry(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int *piVar7;
  int unaff_gp;
  
  uVar2 = (**(code **)(unaff_gp + -0x7c20))();
  piVar7 = *(int **)(unaff_gp + -0x76d4);
  puVar5 = (undefined4 *)*piVar7;
  if (((uint)puVar5[1] < uVar2) &&
     (iVar3 = (**(code **)(unaff_gp + -0x7f10))(param_1,*puVar5), iVar3 == 0)) {
    iVar3 = *piVar7;
    pcVar6 = (char *)(param_1 + *(int *)(iVar3 + 4));
    cVar1 = *pcVar6;
    while (cVar1 == '/') {
      pcVar4 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar4;
    }
    pcVar4 = (char *)(**(code **)(unaff_gp + -0x7f18))(pcVar6,0x2f);
    while (pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
      iVar3 = (**(code **)(unaff_gp + -0x7a58))(iVar3,pcVar6);
      if (iVar3 == 0) {
        *pcVar4 = '/';
        halt_baddata();
      }
      cVar1 = pcVar4[1];
      while (pcVar6 = pcVar4 + 1, cVar1 == '/') {
        cVar1 = pcVar4[2];
        pcVar4 = pcVar6;
      }
      pcVar4 = (char *)(**(code **)(unaff_gp + -0x7f18))(pcVar6,0x2f);
    }
    if (*pcVar6 != '\0') {
      (**(code **)(unaff_gp + -0x7a58))(iVar3,pcVar6);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void expand_path(undefined4 param_1)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x77ac))(*(int *)(unaff_gp + -0x7f94) + 0x6f50,param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void process_path_buffer(undefined4 param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_6c;
  undefined1 auStack_68 [102];
  char local_2 [2];
  
  sscanf(param_2,&format_str_2,local_2);
  if (local_2[0] == 'c') {
    sscanf(param_2,s__c_d__s_10009f24,local_2,&local_6c,auStack_68);
    pcVar2 = strchr(param_2,0x20);
    pcVar3 = strchr(pcVar2 + 1,0x20);
    iVar5 = 0;
    pcVar2 = pcVar3 + 1;
    if (pcVar3 != (char *)0x0) {
      cVar1 = *pcVar2;
      while (cVar1 != '\0') {
        *(char *)(param_3 + iVar5 + 0xc) = *pcVar2;
        pcVar3 = pcVar2 + 1;
        iVar5 = iVar5 + 1;
        pcVar2 = pcVar2 + 1;
        cVar1 = *pcVar3;
      }
      *(undefined1 *)(param_3 + iVar5 + 0xb) = 0;
    }
  }
  else {
    sscanf(param_2,&format_str_3,local_2,&local_6c);
    pcVar3 = strchr(param_2,0x20);
    iVar5 = 0;
    pcVar2 = pcVar3 + 1;
    if (pcVar3 != (char *)0x0) {
      cVar1 = *pcVar2;
      while (cVar1 != '\0') {
        *(char *)(param_3 + iVar5 + 0xc) = *pcVar2;
        pcVar3 = pcVar2 + 1;
        iVar5 = iVar5 + 1;
        pcVar2 = pcVar2 + 1;
        cVar1 = *pcVar3;
      }
      *(undefined1 *)(param_3 + iVar5 + 0xb) = 0;
    }
  }
  *(undefined4 *)(param_3 + 4) = local_6c;
  uVar4 = lookup_buffer_index(local_6c);
  *(undefined4 *)(param_3 + 0x40c) = uVar4;
  if (local_2[0] == 'e') {
    iVar5 = find_string_index(local_6c);
    if (*(char *)(path_buffer + iVar5) == '\0') {
      *(undefined4 *)(param_3 + 0x410) = 8;
    }
    else {
      *(undefined4 *)(param_3 + 0x410) = 5;
    }
  }
  else if (local_2[0] == 'F') {
    iVar5 = find_string_index(local_6c);
    if (*(char *)(path_buffer + iVar5) == '\0') {
      *(undefined4 *)(param_3 + 0x410) = 8;
    }
    else {
      *(undefined4 *)(param_3 + 0x410) = 5;
    }
  }
  else if (local_2[0] == 'D') {
    iVar5 = find_string_index(local_6c);
    if (*(char *)(path_buffer + iVar5) == '\0') {
      *(undefined4 *)(param_3 + 0x410) = 8;
    }
    else {
      *(undefined4 *)(param_3 + 0x410) = 1;
    }
  }
  else if ((local_2[0] == 'C') || (local_2[0] == 'c')) {
    *(undefined4 *)(param_3 + 0x410) = 1;
  }
  else if ((local_2[0] == 'A') || (local_2[0] == 'n')) {
    *(undefined4 *)(param_3 + 0x410) = 2;
  }
  else if ((local_2[0] == 'X') || (local_2[0] == 'x')) {
    *(undefined4 *)(param_3 + 0x410) = 3;
  }
  else if ((local_2[0] == 'Q') || (local_2[0] == 'q')) {
    *(undefined4 *)(param_3 + 0x410) = 4;
  }
  else if (local_2[0] == 'P') {
    *(undefined4 *)(param_3 + 0x410) = 9;
    iVar5 = find_string_index(local_6c);
    *(undefined1 *)(path_buffer + iVar5) = 1;
  }
  else if (local_2[0] == 'G') {
    close_file_handle(local_6c);
    *(undefined4 *)(param_3 + 0x410) = 7;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
