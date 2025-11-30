/**
 * FUN_00427e30
 *
 * Extracted from fsn.c lines 64740-64753
 * Ghidra address: 0x00427e30
 * Category: Other
 */

void FUN_00427e30(int param_1)

{
  undefined4 uVar1;
  int unaff_gp;
  
  if ((**(char **)(unaff_gp + -0x75dc) /* -> fsn_resources */ == '\0') && (-1 < *(int *)(param_1 + 0x74) << 10)) {
    uVar1 = (**(code **)(unaff_gp + -0x7a84) /* -> FUN_00411b30 */)(0,param_1);
    (**(code **)(unaff_gp + -0x7718) /* -> FUN_00439eec */)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6c70,uVar1,param_1 + 0x60);
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 0x20;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
