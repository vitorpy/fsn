/**
 * FUN_00415dec
 *
 * Extracted from fsn.c lines 54506-54603
 * Ghidra address: 0x00415dec
 * Category: Memory
 */

void FUN_00415dec(uint param_1,undefined4 param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_448 [52];
  undefined1 auStack_414 [1044];
  
  FUN_00411998();
  puVar3 = (undefined4 *)FUN_00411c04();
  puVar4 = (undefined4 *)(**(code **)(vinfop + 8))(auStack_414);
  if (param_1 != *(byte *)((int)puVar4 + 10)) {
    fprintf((FILE *)0xfb52904,"invalid depth: expected %d got %d: %s\n",param_1,
            (uint)*(byte *)((int)puVar4 + 10),auStack_414);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  param_1 = param_1 + 1;
  uVar5 = FUN_00411d68(auStack_414);
  *puVar3 = uVar5;
  puVar3[1] = (uint)*(ushort *)(puVar4 + 1);
  puVar3[2] = *puVar4;
  puVar3[3] = (uint)*(ushort *)(puVar4 + 2);
  uVar2 = *(ushort *)((int)puVar4 + 6);
  *(byte *)(puVar3 + 0x1d) = *(byte *)(puVar3 + 0x1d) | 2;
  puVar3[5] = (uint)uVar2;
  bVar1 = *(byte *)((int)puVar4 + 0xb);
  if ((bVar1 & 1) != 0) {
    *(byte *)((int)puVar3 + 0x75) = *(byte *)((int)puVar3 + 0x75) | 4;
    bVar1 = *(byte *)((int)puVar4 + 0xb);
  }
  if ((bVar1 & 2) != 0) {
    *(byte *)((int)puVar3 + 0x75) = *(byte *)((int)puVar3 + 0x75) | 0x10;
  }
  if (puVar3[3] == 0) {
    puVar3[4] = 0;
  }
  else {
    pvVar6 = malloc(puVar3[3] << 2);
    puVar3[4] = pvVar6;
  }
  if (puVar3[5] == 0) {
    puVar3[6] = 0;
  }
  else {
    pvVar6 = malloc(puVar3[5] << 2);
    puVar3[6] = pvVar6;
  }
  puVar3[10] = param_2;
  iVar9 = 0;
  if (0 < (int)puVar3[3]) {
    iVar8 = 0;
    do {
      puVar4 = (undefined4 *)FUN_00411b84();
      *(undefined4 **)(puVar3[4] + iVar8) = puVar4;
      puVar7 = (undefined4 *)(**(code **)(vinfop + 0xc))(auStack_414,auStack_448);
      if (param_1 != *(byte *)(puVar7 + 4)) {
        fprintf((FILE *)0xfb52904,"invalid depth: expected %d got %d: %s\n",param_1,
                (uint)*(byte *)(puVar7 + 4),auStack_414);
                    // WARNING: Subroutine does not return
        exit(1);
      }
      uVar5 = FUN_00411d68(auStack_414);
      *puVar4 = uVar5;
      puVar4[1] = (uint)*(ushort *)(puVar7 + 3);
      puVar4[2] = puVar7[2];
      puVar4[3] = *puVar7;
      puVar4[4] = puVar7[1];
      uVar5 = FUN_00433b90(auStack_448);
      puVar4[8] = uVar5;
      *(byte *)((int)puVar4 + 0x29) = *(byte *)((int)puVar4 + 0x29) | 0x80;
      if (DAT_10000184 < (int)puVar4[3]) {
        DAT_10000184 = puVar4[3];
      }
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar9 < (int)puVar3[3]);
  }
  iVar8 = 0;
  iVar9 = 0;
  if (0 < (int)puVar3[5]) {
    do {
      uVar5 = FUN_00415dec(param_1,puVar3);
      *(undefined4 *)(puVar3[6] + iVar9) = uVar5;
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar8 < (int)puVar3[5]);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
