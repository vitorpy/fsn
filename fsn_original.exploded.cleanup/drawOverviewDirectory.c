/**
 * drawOverviewDirectory
 *
 * Extracted from fsn.c lines 60598-60672
 * Category: Graphics
 */

void drawOverviewDirectory(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  uint unaff_000010a0;
  undefined4 uStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if (*(int *)(param_1 + 0x74) << 3 < 0) {
    loadname((int)*(short *)(param_1 + 0x5e));
    if (*(int *)(param_1 + 0x74) << 2 < 0) {
      uVar3 = *(undefined4 *)(boxDir + 0x10);
    }
    else {
      uVar3 = *(undefined4 *)boxDir;
    }
    cpack(uVar3);
    if (*(int *)(param_1 + 0x74) << 0xd < 0) {
      dVar6 = (double)*(float *)(param_1 + 0x3c) / (double)((ulonglong)unaff_000010a0 << 0x20);
      rect((float)((double)*(float *)(param_1 + 0x34) - dVar6 * (double)*(float *)(param_1 + 0x58)),
           (float)((double)*(float *)(param_1 + 0x38) - dVar6));
      iVar2 = *(int *)(param_1 + 0x14);
    }
    else {
      dVar6 = (double)*(float *)(param_1 + 0x3c) / (double)((ulonglong)unaff_000010a0 << 0x20);
      rectf((float)((double)*(float *)(param_1 + 0x34) - dVar6 * (double)*(float *)(param_1 + 0x58))
            ,(float)((double)*(float *)(param_1 + 0x38) - dVar6));
      iVar2 = *(int *)(param_1 + 0x14);
    }
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        iVar4 = *(int *)(*(int *)(param_1 + 0x18) + iVar5);
        iVar1 = *(int *)(iVar4 + 0x74);
        if (iVar1 << 3 < 0) {
          if (param_2 != '\0') {
            FUN_00420408(iVar4,1);
            loadname((int)*(short *)(iVar4 + 0x5e));
            iVar1 = *(int *)(iVar4 + 0x74);
          }
          uVar3 = DAT_1001760c;
          if (iVar1 << 2 < 0) {
            uVar3 = DAT_10017608;
          }
          cpack(uVar3);
          fStack_10 = *(float *)(param_1 + 0x34) +
                      *(float *)(iVar4 + 0x4c) * *(float *)(param_1 + 0x58);
          fStack_c = *(float *)(param_1 + 0x38) + *(float *)(iVar4 + 0x50);
          uStack_18 = *(undefined4 *)(iVar4 + 0x34);
          fStack_14 = (float)((double)*(float *)(iVar4 + 0x38) +
                             (double)-*(float *)(iVar4 + 0x3c) /
                             (double)((ulonglong)unaff_000010a0 << 0x20));
          bgnline();
          v2f(&fStack_10);
          v2f(&uStack_18);
          endline();
          if (param_2 == '\0') {
            FUN_00420408(iVar4,0);
          }
          iVar2 = *(int *)(param_1 + 0x14);
        }
        iVar5 = iVar5 + 4;
      } while (iVar5 < iVar2 << 2);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
