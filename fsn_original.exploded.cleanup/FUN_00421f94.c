/**
 * FUN_00421f94
 *
 * Extracted from fsn.c lines 61819-61867
 * Ghidra address: 0x00421f94
 * Category: Other
 */

void FUN_00421f94(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  int unaff_gp;
  undefined4 *local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  undefined4 *local_4c;
  
  iVar1 = (**(code **)(unaff_gp + -0x7960) /* -> FUN_00421f10 */)();
  local_4c = &local_58;
  if (iVar1 == 0) {
    local_50 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4584;
  }
  else {
    local_50 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4590;
  }
  local_54 = 1;
  iVar1 = (**(code **)(unaff_gp + -0x7960) /* -> FUN_00421f10 */)();
  if (iVar1 == 0) {
    piVar2 = &local_50 + local_54 * 2;
    *piVar2 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4568;
  }
  else {
    piVar2 = &local_50 + local_54 * 2;
    *piVar2 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4574;
  }
  pcVar4 = *(code **)(unaff_gp + -0x7c9c) /* -> EXTERNAL_0x0f672b80 */;
  piVar2[1] = (int)&local_5c;
  (*pcVar4)(param_1,&local_50,local_54 + 1);
  uVar3 = (**(code **)(unaff_gp + -0x7d48) /* -> EXTERNAL_0x0f52d080 */)
                    (**(undefined4 **)(unaff_gp + -0x75fc) /* -> display */,local_58,*local_5c,0);
  iVar1 = (**(code **)(unaff_gp + -0x7960) /* -> FUN_00421f10 */)();
  if (iVar1 == 0) {
    local_50 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4548;
  }
  else {
    local_50 = *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4558;
  }
  local_4c = (undefined4 *)uVar3;
  (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)(param_1,&local_50,1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
