/**
 * FUN_0041f2b4
 *
 * Extracted from fsn.c lines 59870-60062
 * Ghidra address: 0x0041f2b4
 * Category: Filesystem
 */

void FUN_0041f2b4(undefined4 param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  int iVar6;
  uint local_res4;
  bool local_14aa;
  stat sStack_14a8;
  size_t local_1420;
  undefined1 auStack_141c [4096];
  int local_41c;
  int local_418;
  char *local_414;
  char acStack_410 [1024];
  int local_10;
  undefined4 *local_c;
  int local_8;
  int local_4;
  
  local_10 = 0;
  bVar1 = (param_2 & 0x100) != 0;
  local_14aa = false;
  local_res4 = param_2;
  if (bVar1) {
    local_res4 = param_2 & 0xfffffeff;
  }
  iVar6 = *(int *)(curcontext + 0x44);
  if (iVar6 == 0) {
    halt_baddata();
  }
  iVar4 = 0;
  cVar2 = altcontext[0xc51];
  if (cVar2 != '\0') {
    iVar4 = *(int *)(altcontext + 0x44);
  }
  if (iVar4 == 0) {
    halt_baddata();
  }
  local_c = *(undefined4 **)(curcontext + 0x48);
  if (local_c != (undefined4 *)0x0) {
    iVar4 = 0;
    if (cVar2 != '\0') {
      iVar4 = *(int *)(altcontext + 0x48);
    }
    if (iVar4 == 0) {
      if (cVar2 == '\0') {
        local_8 = 0;
      }
      else {
        local_8 = *(int *)(altcontext + 0x44);
      }
      bVar3 = true;
      local_4 = iVar6;
      goto LAB_0041f400;
    }
  }
  iVar4 = 0;
  if (cVar2 != '\0') {
    iVar4 = *(int *)(altcontext + 0x48);
  }
  if (iVar4 == 0) {
    halt_baddata();
  }
  if (local_c != (undefined4 *)0x0) {
    halt_baddata();
  }
  if (cVar2 == '\0') {
    local_4 = 0;
    local_c = (undefined4 *)0x0;
  }
  else {
    local_4 = *(int *)(altcontext + 0x44);
    local_c = *(undefined4 **)(altcontext + 0x48);
  }
  bVar3 = false;
  local_8 = iVar6;
LAB_0041f400:
  if (local_4 == local_8) {
    FUN_00410f74("source and destination are the same");
  }
  else {
    build_path_string(acStack_410,local_4);
    local_414 = (char *)build_path_string(0,local_8);
    strcat(acStack_410,(char *)*local_c);
    strcat(local_414,(char *)*local_c);
    if ((bVar1) || (iVar6 = access(local_414,0), iVar6 < 0)) {
      *(byte *)((int)local_c + 0x29) = *(byte *)((int)local_c + 0x29) | 0x20;
      FUN_004292c4();
      if (local_res4 == 1) {
        iVar6 = rename(acStack_410,local_414);
        if (-1 < iVar6) {
          *(byte *)((int)local_c + 0x29) = *(byte *)((int)local_c + 0x29) | 0x10;
        }
        else {
          show_error_dialog("can\'t move",*local_c);
        }
        local_14aa = -1 >= iVar6;
      }
      if ((local_res4 == 3) && (iVar6 = link(acStack_410,local_414), iVar6 < 0)) {
        local_14aa = true;
        show_error_dialog("can\'t link",*local_c);
      }
      if (local_res4 == 2) {
        iVar6 = stat(acStack_410,&sStack_14a8);
        if (iVar6 < 0) {
          show_error_dialog("cannot stat",acStack_410);
          local_14aa = true;
        }
        else {
          local_418 = open(acStack_410,0);
          if (local_418 < 0) {
            show_error_dialog("can\'t open",*local_c);
            local_14aa = true;
          }
          else {
            local_41c = open(local_414,0x301,sStack_14a8.st_nlink);
            if (local_41c < 0) {
              local_14aa = true;
              show_error_dialog("can\'t create",*local_c);
              close(local_418);
            }
          }
        }
      }
      if (!local_14aa) {
        FUN_00417e28(local_8,*local_c);
        update_display();
        local_10 = FUN_00413580(local_8,*local_c);
        if (local_10 != 0) {
          if (bVar3) {
            gl_swap_buffers(1);
          }
          FUN_0041da44(local_10);
          if (bVar3) {
            gl_swap_buffers(1);
          }
        }
        *(byte *)(local_10 + 0x29) = *(byte *)(local_10 + 0x29) | 0x20;
        if (local_res4 == 2) {
          sVar5 = read(local_418,auStack_141c,0x1000);
          while (0 < (int)sVar5) {
            local_1420 = sVar5;
            sVar5 = write(local_41c,auStack_141c,sVar5);
            if (sVar5 != local_1420) {
              show_error_dialog("write error",*local_c);
              unlink(local_414);
              sVar5 = 0;
              break;
            }
            FUN_00411998();
            sVar5 = read(local_418,auStack_141c,0x1000);
          }
          if ((int)sVar5 < 0) {
            show_error_dialog("read error",*local_c);
            unlink(local_414);
          }
          close(local_418);
          close(local_41c);
        }
      }
      FUN_0042935c();
      if (local_10 != 0) {
        *(byte *)(local_10 + 0x29) = *(byte *)(local_10 + 0x29) & 0xdf;
      }
      *(byte *)((int)local_c + 0x29) = *(byte *)((int)local_c + 0x29) & 0xdf;
      if (local_10 != 0) {
        if (bVar3) {
          gl_swap_buffers(1);
        }
        FUN_0041d920();
        if (bVar3) {
          gl_swap_buffers(1);
        }
      }
      if (local_res4 == 1) {
        FUN_00418340(local_4,*local_c);
        *(byte *)((int)local_c + 0x29) = *(byte *)((int)local_c + 0x29) & 0xef;
        update_display();
      }
      redraw_gl_scene();
      FUN_0042a8e4();
    }
    else {
      FUN_0041f1d8(local_res4);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
