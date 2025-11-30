/**
 * FUN_00439eec
 *
 * Extracted from fsn.c lines 77535-77556
 * Ghidra address: 0x00439eec
 * Category: Other
 */

void FUN_00439eec(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int unaff_gp;
  
  iVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fdc) /* -> EXTERNAL_0x00440000 */ + -0x5218))();
  if (iVar1 != -1) {
    *param_3 = iVar1;
    uVar2 = (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(param_2);
    if (uVar2 < 0x401) {
      (**(code **)(unaff_gp + -0x771c) /* -> FUN_00439c48 */)(param_1,param_2,param_3,param_4,0x4d);
    }
    else {
      (**(code **)(unaff_gp + -0x7c38) /* -> EXTERNAL_0x0faedc20 */)(1,*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x617c);
      **(undefined4 **)(unaff_gp + -0x7f70) /* -> EXTERNAL_0x0fb52720 */ = 0x4e;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
