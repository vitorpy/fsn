/**
 * newcontext
 *
 * Extracted from fsn.c lines 66400-66446
 * Category: Other
 */

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
      FUN_0041c9e8();
      FUN_004207b4();
      curcontext[0xc53] = 0;
      altcontext[0xc53] = 1;
      FUN_0040d804();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
