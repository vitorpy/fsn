/**
 * FUN_0041da44
 *
 * Extracted from fsn.c lines 59244-59275
 * Ghidra address: 0x0041da44
 * Category: Other
 */

void FUN_0041da44(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_gp;
  int local_30;
  uint local_2c;
  
  iVar1 = *(int *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x48);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) & 0xef;
  }
  (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b9c),1);
  (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b94),1);
  piVar2 = *(int **)(unaff_gp + -0x7684) /* -> curcontext */;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  *(undefined4 **)(*piVar2 + 0x48) = param_1;
  iVar1 = *piVar2;
  (**(code **)(unaff_gp + -0x7ecc) /* -> EXTERNAL_0x0fabf7b8 */)(iVar1 + 0x44c,iVar1 + 0x4c);
  (**(code **)(unaff_gp + -0x7ce4) /* -> EXTERNAL_0x0fac11fc */)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x44c,*param_1);
  (**(code **)(unaff_gp + -0x79d4) /* -> FUN_0041c720 */)();
  local_30 = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x2589;
  local_2c = (uint)(param_1[10] << 9) >> 0x1f;
  (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b84),&local_30,1);
  (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b88),&local_30,1);
  (**(code **)(unaff_gp + -0x79d0) /* -> FUN_0041c9e8 */)();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
