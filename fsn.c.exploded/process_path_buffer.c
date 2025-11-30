/**
 * process_path_buffer
 *
 * Extracted from fsn.c lines 62072-62173
 * Category: Filesystem
 */

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
