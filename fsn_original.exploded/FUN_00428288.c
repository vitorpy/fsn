/**
 * FUN_00428288
 *
 * Extracted from fsn.c lines 64895-64923
 * Ghidra address: 0x00428288
 * Category: Other
 */

void FUN_00428288(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  char *local_14 [4];
  int local_4;
  
  uVar1 = XtDisplay();
  local_4 = XInternAtom(uVar1,"_SGI_GAMMA_FLAG",1);
  if (local_4 != 0) {
    uVar1 = XtDisplay(param_1);
    iVar2 = XtDisplay(param_1);
    iVar3 = XtDisplay(param_1);
    iVar2 = XGetTextProperty(uVar1,*(undefined4 *)
                                    (*(int *)(iVar2 + 0x8c) + *(int *)(iVar3 + 0x84) * 0x50 + 8),
                             local_14,local_4);
    if (iVar2 != 0) {
      dVar4 = atof(local_14[0]);
      DAT_100078fc = (float)dVar4;
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
