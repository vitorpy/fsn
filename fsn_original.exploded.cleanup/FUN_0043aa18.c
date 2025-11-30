/**
 * FUN_0043aa18
 *
 * Extracted from fsn.c lines 77907-77927
 * Ghidra address: 0x0043aa18
 * Category: Other
 */

void FUN_0043aa18(uint *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int unaff_gp;
  undefined1 auStack_c38 [3000];
  uint auStack_80 [32];
  
  (**(code **)(unaff_gp + -0x7ef4) /* -> EXTERNAL_0x0fac0e84 */)(auStack_80,0x80);
  auStack_80[*param_1 >> 5] = auStack_80[*param_1 >> 5] | 1 << (*param_1 & 0x1f);
  piVar2 = (int *)param_1[1];
  if (((*(int *)(*piVar2 + 0xc) != 0) ||
      (((iVar1 = (**(code **)(unaff_gp + -0x76fc) /* -> FUN_0043b3b8 */)(), iVar1 != -1 &&
        (*(int *)(*piVar2 + 0x179c) == 0)) && (*(int *)(*piVar2 + 0xc) != 0)))) &&
     (iVar1 = (**(code **)(unaff_gp + -0x76f8) /* -> FUN_0043b538 */)(piVar2,*param_1,auStack_c38,0x400), iVar1 != -1)) {
    (*(code *)(*(int *)(unaff_gp + -0x7fdc) /* -> EXTERNAL_0x00440000 */ + -0x599c))(param_1,auStack_c38,param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
