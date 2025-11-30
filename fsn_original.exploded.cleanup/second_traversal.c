/**
 * second_traversal
 *
 * Extracted from fsn.c lines 53055-53102
 * Category: Other
 */

void second_traversal(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  ulonglong in_f8;
  double dVar6;
  uint uVar7;
  undefined8 in_f16;
  undefined4 uVar8;
  undefined8 in_f18;
  undefined4 in_f21;
  undefined8 unaff_f22;
  double dVar9;
  
  uVar8 = (undefined4)((ulonglong)in_f18 >> 0x20);
  uVar7 = (uint)((ulonglong)in_f16 >> 0x20);
  dVar9 = (double)CONCAT44((int)((ulonglong)unaff_f22 >> 0x20),param_4) +
          (double)*(float *)(param_1 + 0x3c) / (double)(in_f8 & 0xffffffff00000000);
  uVar3 = FUN_004118b0();
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(float *)(param_1 + 0x38) = (float)dVar9;
  *(float *)(param_1 + 0x58) = (float)(double)CONCAT44(uVar8,param_6);
  *(undefined4 *)(param_1 + 0x40) = 0;
  dVar9 = (double)*(float *)(param_1 + 0x3c) / (double)((ulonglong)uVar7 << 0x20) + dVar9;
  dVar6 = dVar9 + (double)DAT_1001750c;
  fVar4 = powf(DAT_10017594,(float)((double)(float)dVar6 / (double)DAT_10017598));
  iVar1 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      fVar5 = (float)FUN_00412994(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2),param_2,in_f21,
                                  SUB84((double)(float)dVar6,0),param_3,
                                  SUB84((double)(float)((double)((ulonglong)dVar9 &
                                                                0xffffffff00000000) / (double)fVar4)
                                        ,0));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
      *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fVar5;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
