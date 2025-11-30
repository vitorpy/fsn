/**
 * first_traversal
 *
 * Extracted from fsn.c lines 52906-52971
 * Category: Other
 */

void first_traversal(int param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  uint unaff_000010b0;
  float fVar4;
  uint in_fcsr;
  
  *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 0x10;
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = 0;
  }
  else {
    dVar2 = sqrt((double)(*(int *)(param_1 + 0xc) + -1));
    if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
      dVar2 = ROUND(dVar2);
    }
    else {
      dVar2 = FLOOR(dVar2);
    }
    iVar1 = (int)dVar2 + 1;
  }
  if (iVar1 == 0) {
    *(float *)(param_1 + 0x3c) =
         (float)((double)view_offset_x +
                (double)((ulonglong)unaff_000010b0 << 0x20) * (double)DAT_10017504);
  }
  else {
    *(float *)(param_1 + 0x3c) =
         (float)((double)iVar1 *
                ((double)view_offset_x +
                (double)((ulonglong)unaff_000010b0 << 0x20) * (double)DAT_10017504));
  }
  dVar3 = (double)DAT_10017504;
  dVar2 = (double)view_offset_x;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  fVar4 = (float)((double)(1 - iVar1) *
                  (dVar2 + (double)((ulonglong)unaff_000010b0 << 0x20) * dVar3) *
                 (double)((ulonglong)dVar2 & 0xffffffff00000000));
  if (*(int *)(param_1 + 0xc) < 1) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
    FUN_00412234(param_1);
    if (DAT_1000018c < *(int *)(param_1 + 0x1c)) {
      DAT_1000018c = *(int *)(param_1 + 0x1c);
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      FUN_00412604(**(undefined4 **)(param_1 + 0x18));
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  iVar1 = **(int **)(param_1 + 0x10);
  *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 4;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(iVar1 + 0xc);
  *(float *)(iVar1 + 0x14) = fVar4;
  *(float *)(iVar1 + 0x18) = fVar4;
  FUN_00412400(iVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
