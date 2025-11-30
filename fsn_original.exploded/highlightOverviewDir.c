/**
 * highlightOverviewDir
 *
 * Extracted from fsn.c lines 61350-61396
 * Category: Filesystem
 */

void highlightOverviewDir(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  double dVar3;
  uint uVar4;
  undefined8 in_f10;
  undefined4 uStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  uVar4 = (uint)((ulonglong)in_f10 >> 0x20);
  if (overviewActive != '\0') {
    FUN_0041fdb0();
    color(0);
    clear();
    color(overlayHighlightColor._2_2_);
    dVar3 = (double)*(float *)(param_1 + 0x3c) / (double)((ulonglong)uVar4 << 0x20);
    rectf((float)((double)*(float *)(param_1 + 0x34) - dVar3 * (double)*(float *)(param_1 + 0x58)),
          (float)((double)*(float *)(param_1 + 0x38) - dVar3));
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 != 0) {
      fStack_c = *(float *)(iVar2 + 0x34) + *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x58);
      fStack_8 = (float)((double)*(float *)(iVar2 + 0x38) + (double)*(float *)(param_1 + 0x50));
      uStack_14 = *(undefined4 *)(param_1 + 0x34);
      fStack_10 = (float)((double)*(float *)(param_1 + 0x38) +
                         (double)-*(float *)(param_1 + 0x3c) /
                         (double)((ulonglong)(double)*(float *)(iVar2 + 0x38) & 0xffffffff00000000))
      ;
      bgnline();
      v2f(&fStack_c);
      v2f(&uStack_14);
      endline();
    }
    pushmatrix();
    ortho2();
    cmov2(0xbf733333,0xbf666666);
    uVar1 = build_path_string(0,param_1);
    charstr(uVar1);
    popmatrix();
    FUN_00420acc();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
