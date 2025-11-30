/**
 * pickWarp
 *
 * Extracted from fsn.c lines 57012-57074
 * Category: Input
 */

void pickWarp(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint in_register_00001020;
  int iStack_40c;
  short asStack_3f0 [500];
  undefined4 uStack_8;
  int iStack_4;
  
  iStack_4 = 0;
  uStack_8 = 0;
  iVar5 = -1;
  iStack_40c = -1;
  pushmatrix();
  initnames();
  picksize(10,10);
  pick(asStack_3f0,500);
  FUN_0040bfa0();
  scale((float)((double)((ulonglong)in_register_00001020 << 0x20) /
               (double)*(float *)(curcontext + 0x34)));
  rotate((int)*(short *)(curcontext + 0xe),0x78);
  rotate((int)*(short *)(curcontext + 0xc),0x7a);
  translate(-*(float *)curcontext,-*(float *)(curcontext + 4));
  FUN_00419424(*(undefined4 *)(curcontext + 0x3c),1);
  iVar1 = endpick(asStack_3f0);
  popmatrix();
  iVar3 = 0;
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = (int)asStack_3f0[iVar3];
      if ((iVar2 == 1) && (iVar5 < 0)) {
        iVar5 = (int)asStack_3f0[iVar3 + 1];
      }
      iVar4 = iVar4 + 1;
      if (iVar2 == 2) {
        iStack_40c = (int)asStack_3f0[iVar3 + 2];
        iVar5 = (int)asStack_3f0[iVar3 + 1];
        break;
      }
      iVar3 = iVar3 + 1 + iVar2;
    } while (iVar4 != iVar1);
  }
  if ((-1 < iVar5) && (iStack_4 = FUN_00411e68(iVar5), -1 < iStack_40c)) {
    if (iStack_4 == *(int *)(curcontext + 0x3c)) {
      uStack_8 = *(undefined4 *)(*(int *)(iStack_4 + 0x10) + iStack_40c * 4);
    }
    else {
      fprintf((FILE *)0xfb52904,"found file in another dir\n");
      iStack_4 = 0;
    }
  }
  *param_1 = iStack_4;
  *param_2 = uStack_8;
  *param_3 = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
