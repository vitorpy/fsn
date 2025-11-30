/**
 * FUN_0040c0cc
 *
 * Extracted from fsn.c lines 50258-50280
 * Ghidra address: 0x0040c0cc
 * Category: Other
 */

void FUN_0040c0cc(void)

{
  int unaff_gp;
  undefined4 uVar1;
  undefined4 in_register_00001040;
  float fVar2;
  undefined4 in_register_00001080;
  
  fVar2 = (float)(((double)(int)*(short *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0xe) /
                  (double)CONCAT44(in_register_00001040,
                                   *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x58d4))) *
                 (double)CONCAT44(in_register_00001080,
                                  *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x58cc)));
  uVar1 = (**(code **)(unaff_gp + -0x7ca4) /* -> EXTERNAL_0x0f895020 */)();
  *(undefined4 *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x20) = uVar1;
  uVar1 = (**(code **)(unaff_gp + -0x7ca0) /* -> EXTERNAL_0x0f895190 */)(fVar2);
  *(undefined4 *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x24) = uVar1;
  uVar1 = (**(code **)(unaff_gp + -0x7c90) /* -> EXTERNAL_0x0f895660 */)(fVar2);
  *(undefined4 *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x28) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
