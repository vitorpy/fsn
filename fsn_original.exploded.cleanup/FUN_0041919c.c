/**
 * FUN_0041919c
 *
 * Extracted from fsn.c lines 56481-56522
 * Ghidra address: 0x0041919c
 * Category: Graphics
 */

void FUN_0041919c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_f5;
  undefined4 uVar3;
  undefined4 in_f11;
  uint unaff_000010c0;
  
  pushmatrix();
  translate(0,(float)((double)-*(float *)(param_1 + 0x3c) /
                     (double)((ulonglong)unaff_000010c0 << 0x20)));
  uVar3 = 0x3fe00000;
  iVar1 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      FUN_00418f50(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
  popmatrix();
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00418c30(*(int *)(param_1 + 0x28),&DAT_1000ae90,0,0,in_f11,
                 SUB84((double)*(float *)(param_1 + 0x3c) /
                       (double)((ulonglong)unaff_000010c0 << 0x20) + (double)DAT_1001756c,0));
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_00418c30(*(int *)(param_1 + 0x2c),&DAT_1000ae94,in_f5,SUB84((double)-DAT_10017570,0),in_f5,
                 SUB84((double)*(float *)(param_1 + 0x3c) /
                       (double)((ulonglong)unaff_000010c0 << 0x20) + (double)DAT_1001756c,0));
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00418c30(*(int *)(param_1 + 0x30),&DAT_1000ae98,uVar3,SUB84((double)DAT_10017570,0),uVar3,
                 SUB84((double)*(float *)(param_1 + 0x3c) /
                       (double)((ulonglong)unaff_000010c0 << 0x20) + (double)DAT_1001756c,0));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
