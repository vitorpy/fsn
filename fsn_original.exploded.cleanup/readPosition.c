/**
 * readPosition
 *
 * Extracted from fsn.c lines 69049-69139
 * Category: Filesystem
 */

void readPosition(undefined2 *param_1,FILE *param_2)

{
  size_t sVar1;
  undefined4 uVar2;
  undefined1 auStack_430 [1024];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined2 uStack_c;
  undefined2 uStack_a;
  ushort uStack_8;
  ushort uStack_6;
  ushort uStack_4;
  undefined1 uStack_2;
  
  sVar1 = fread(&uStack_30,0x30,1,param_2);
  if (sVar1 != 1) {
    fprintf((FILE *)0xfb52904,"syntax error in reading position from database\n");
                    // WARNING: Subroutine does not return
    exit(1);
  }
  *(undefined4 *)(param_1 + 4) = uStack_30;
  *(undefined4 *)(param_1 + 6) = uStack_2c;
  *(undefined4 *)(param_1 + 8) = uStack_28;
  *(undefined4 *)(param_1 + 0xc) = uStack_24;
  *(undefined4 *)(param_1 + 0xe) = uStack_20;
  *(undefined4 *)(param_1 + 0x10) = uStack_1c;
  *(undefined4 *)(param_1 + 0x14) = uStack_18;
  *(undefined4 *)(param_1 + 0x16) = uStack_14;
  *(undefined4 *)(param_1 + 0x18) = uStack_10;
  *param_1 = uStack_c;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[1] = uStack_a;
  *(undefined1 *)(param_1 + 0x1a) = uStack_2;
  if (uStack_8 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    sVar1 = fread(auStack_430,1,(uint)uStack_8,param_2);
    if (sVar1 != uStack_8) {
      fprintf((FILE *)0xfb52904,"syntax error in reading position warpdp from database\n");
                    // WARNING: Subroutine does not return
      exit(1);
    }
    uVar2 = FUN_004136a0(auStack_430);
    *(undefined4 *)(param_1 + 2) = uVar2;
    auStack_430[uStack_8] = 0;
  }
  if (uStack_6 == 0) {
    *(undefined4 *)(param_1 + 10) = 0;
  }
  else {
    sVar1 = fread(auStack_430,1,(uint)uStack_6,param_2);
    if (sVar1 != uStack_6) {
      fprintf((FILE *)0xfb52904,"syntax error in reading position selecteddp from database\n");
                    // WARNING: Subroutine does not return
      exit(1);
    }
    auStack_430[uStack_6] = 0;
    uVar2 = FUN_004136a0();
    *(undefined4 *)(param_1 + 10) = uVar2;
  }
  if (uStack_4 == 0) {
    *(undefined4 *)(param_1 + 0x12) = 0;
  }
  else {
    sVar1 = fread(auStack_430,1,(uint)uStack_4,param_2);
    if (sVar1 != uStack_4) {
      fprintf((FILE *)0xfb52904,"syntax error in reading position selectedfp from database\n");
                    // WARNING: Subroutine does not return
      exit(1);
    }
    auStack_430[uStack_4] = 0;
    if (*(int *)(param_1 + 10) == 0) {
      *(undefined4 *)(param_1 + 0x12) = 0;
    }
    else {
      uVar2 = FUN_00413580(*(int *)(param_1 + 10),auStack_430);
      *(undefined4 *)(param_1 + 0x12) = uVar2;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
