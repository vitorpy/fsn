/**
 * FUN_0041c3e4
 *
 * Extracted from fsn.c lines 58287-58358
 * Ghidra address: 0x0041c3e4
 * Category: Memory
 */

void FUN_0041c3e4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  char *local_100;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_cc;
  char acStack_c8 [200];
  
  if (*(int *)(curcontext + 0x48) == 0) {
    iVar4 = *(int *)(curcontext + 0x44);
    if (iVar4 == 0) {
      local_f0 = blankXmString;
      local_f4 = 0xe3f40b5;
      XtSetValues(*(undefined4 *)(curcontextwindows + 0x20),&local_f4,1);
    }
    else {
      if (*(int *)(iVar4 + 0x74) << 0xd < 0) {
        sprintf(acStack_c8,"pruned");
      }
      else {
        uVar1 = FUN_0041c1c4(*(undefined4 *)(iVar4 + 8));
        iVar4 = *(int *)(curcontext + 0x44);
        if (*(int *)(iVar4 + 0x74) << 0xb < 0) {
          pcVar3 = ", monitored";
        }
        else {
          pcVar3 = "";
        }
        sprintf(acStack_c8,"%s %d directories, %d files %s",uVar1,*(undefined4 *)(iVar4 + 0x14),
                *(undefined4 *)(iVar4 + 0xc),pcVar3);
      }
      local_f0 = XmStringCreate(acStack_c8,&default_charset);
      local_f4 = 0xe3f40b5;
      local_cc = local_f0;
      XtSetValues(*(undefined4 *)(curcontextwindows + 0x20),&local_f4,1);
      XmStringFree(local_cc);
    }
  }
  else {
    uVar1 = FUN_0041c1c4(*(undefined4 *)(*(int *)(curcontext + 0x48) + 8));
    uVar2 = FUN_00411e38(*(undefined4 *)(*(int *)(curcontext + 0x48) + 0x10));
    iVar4 = *(int *)(curcontext + 0x48);
    if ((*(uint *)(iVar4 + 8) & 0xf000) == 0xa000) {
      local_100 = "link to ";
    }
    else {
      local_100 = "";
    }
    if (*(int *)(iVar4 + 0x20) == 0) {
      pcVar3 = "unknown type";
      uVar5 = *(undefined4 *)(iVar4 + 0xc);
    }
    else {
      pcVar3 = (char *)FUN_00433c08(*(int *)(iVar4 + 0x20),3);
      uVar5 = *(undefined4 *)(*(int *)(curcontext + 0x48) + 0xc);
    }
    sprintf(acStack_c8,"%s   %d bytes, %d days old, %s%s",uVar1,uVar5,uVar2,local_100,pcVar3);
    local_f0 = XmStringCreate(acStack_c8,&default_charset);
    local_f4 = 0xe3f40b5;
    local_cc = local_f0;
    XtSetValues(*(undefined4 *)(curcontextwindows + 0x20),&local_f4,1);
    XmStringFree(local_cc);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
