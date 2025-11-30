/**
 * highlightDirLandscape
 *
 * Extracted from fsn.c lines 64090-64142
 * Category: Filesystem
 */

void highlightDirLandscape(int param_1)

{
  int iVar1;
  double dVar2;
  float fVar3;
  uint in_register_00001080;
  undefined4 uStack_18;
  float fStack_14;
  undefined4 uStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  if (param_1 != *(int *)(curcontext + 0x44)) {
    pushmatrix();
    translate(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
    scale(*(undefined4 *)(param_1 + 0x58));
    if (-1 < *(int *)(param_1 + 0x74) << 0xd) {
      scale(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x3c));
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    fVar3 = (float)((double)-*(float *)(param_1 + 0x3c) /
                   (double)((ulonglong)in_register_00001080 << 0x20));
    rect(fVar3,fVar3);
    popmatrix();
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 != 0) {
      fStack_c = *(float *)(iVar1 + 0x34) + *(float *)(param_1 + 0x4c);
      uStack_10 = 0xbd4ccccd;
      dVar2 = (double)*(float *)(iVar1 + 0x38) + (double)*(float *)(param_1 + 0x50);
      fStack_8 = (float)dVar2;
      uStack_18 = *(undefined4 *)(param_1 + 0x34);
      fStack_14 = (float)((double)*(float *)(param_1 + 0x38) -
                         (double)*(float *)(param_1 + 0x3c) /
                         (double)((ulonglong)dVar2 & 0xffffffff00000000));
      uStack_4 = uStack_10;
      bgnline();
      v3f(&fStack_c);
      v3f(&uStack_18);
      endline();
      color(0);
      pushmatrix();
      translate(*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(iVar1 + 0x38));
      scale(*(float *)(iVar1 + 0x3c) * *(float *)(iVar1 + 0x58));
      FUN_00422284(0,0,0x1f);
      popmatrix();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
