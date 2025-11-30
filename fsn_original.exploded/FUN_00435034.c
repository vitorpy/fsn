/**
 * FUN_00435034
 *
 * Extracted from fsn.c lines 73290-73342
 * Ghidra address: 0x00435034
 * Category: Other
 */

void FUN_00435034(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  int unaff_gp;
  
  if ((param_1 == (undefined1 *)0x0) &&
     (param_1 = (undefined1 *)(**(code **)(unaff_gp + -0x7b5c))(100), param_1 == (undefined1 *)0x0))
  {
    halt_baddata();
  }
  uVar1 = *(undefined4 *)(unaff_gp + -0x7610);
  *(int *)(param_1 + 0x14) = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffff78;
  *(undefined4 *)(param_1 + 0xc) = 0xffffff81;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  if (*(int *)(param_2 + 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    uVar1 = *(undefined4 *)(param_2 + 0x24);
  }
  else {
    uVar1 = (**(code **)(unaff_gp + -0x7b5c))(*(int *)(param_2 + 0x20));
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    (**(code **)(unaff_gp + -0x7e64))
              (*(undefined4 *)(param_2 + 0x1c),uVar1,*(undefined4 *)(param_2 + 0x20));
    uVar1 = *(undefined4 *)(param_2 + 0x24);
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
