/**
 * FUN_004220f0
 *
 * Extracted from fsn.c lines 61904-61932
 * Ghidra address: 0x004220f0
 * Category: Other
 */

void FUN_004220f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_gp;
  undefined1 auStack_70 [12];
  undefined1 local_64 [12];
  undefined4 local_58 [2];
  int local_50;
  undefined4 *local_4c;
  
  iVar1 = (**(code **)(unaff_gp + -0x7960) /* -> FUN_00421f10 */)();
  local_4c = local_58;
  if (iVar1 == 0) {
    local_50 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4528;
  }
  else {
    local_50 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4538;
  }
  (**(code **)(unaff_gp + -0x7c9c) /* -> EXTERNAL_0x0f672b80 */)(param_1,&local_50,1);
  iVar1 = (**(code **)(unaff_gp + -0x7d44) /* -> EXTERNAL_0x0f53fd3c */)
                    (**(undefined4 **)(unaff_gp + -0x75fc) /* -> display */,local_58[0],param_2,local_64,auStack_70);
  if (iVar1 == 0) {
    (**(code **)(unaff_gp + -0x7c08) /* -> EXTERNAL_0x0fac7f1c */)
              (*(int *)(unaff_gp + -0x7f68) /* -> EXTERNAL_0x0fb528e4 */ + 0x20,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4518,param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
