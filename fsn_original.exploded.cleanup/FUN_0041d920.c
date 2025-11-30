/**
 * FUN_0041d920
 *
 * Extracted from fsn.c lines 59181-59207
 * Ghidra address: 0x0041d920
 * Category: Other
 */

void FUN_0041d920(void)

{
  int iVar1;
  int *piVar2;
  int unaff_gp;
  int local_2c [11];
  
  if (*(int *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x48) != 0) {
    (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b9c),0);
    (**(code **)(unaff_gp + -0x7ce8) /* -> EXTERNAL_0x0f682980 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b94),0);
    piVar2 = *(int **)(unaff_gp + -0x7684) /* -> curcontext */;
    iVar1 = *(int *)(*piVar2 + 0x48);
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) & 0xef;
    *(undefined4 *)(*piVar2 + 0x48) = 0;
    (**(code **)(unaff_gp + -0x79d4) /* -> FUN_0041c720 */)();
    local_2c[1] = 0;
    local_2c[0] = *(int *)(unaff_gp + -0x7f60) /* -> EXTERNAL_0x0e3f2368 */ + 0x2589;
    (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b84),local_2c,1);
    (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6b88),local_2c,1);
    (**(code **)(unaff_gp + -0x79d0) /* -> FUN_0041c9e8 */)();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
