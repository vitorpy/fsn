/**
 * FUN_0043b1c8
 *
 * Extracted from fsn.c lines 78255-78295
 * Ghidra address: 0x0043b1c8
 * Category: Other
 */

void FUN_0043b1c8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int unaff_gp;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  int local_4;
  
  piVar1 = (int *)(**(code **)(unaff_gp + -0x7b5c) /* -> EXTERNAL_0x0f8b5990 */)(0x17a0);
  local_18 = 2;
  local_14 = param_2;
  iVar2 = (**(code **)(unaff_gp + -0x7c88) /* -> EXTERNAL_0x0fad6288 */)(&local_18,param_3,param_4,6);
  local_16 = (undefined2)iVar2;
  if ((iVar2 != 0) && (local_4 = (**(code **)(unaff_gp + -0x7c6c) /* -> EXTERNAL_0x0fad32d8 */)(2,2,0), -1 < local_4)) {
    iVar2 = (**(code **)(unaff_gp + -0x7c50) /* -> EXTERNAL_0x0fad548c */)(local_4,&local_18,0x10);
    if (iVar2 < 0) {
      (**(code **)(unaff_gp + -0x7da4) /* -> EXTERNAL_0x0facb588 */)(local_4);
    }
    else {
      iVar2 = *param_1;
      *param_1 = (int)piVar1;
      piVar1[5] = (int)(piVar1 + 7);
      piVar1[6] = (int)(piVar1 + 7);
      *piVar1 = local_4;
      piVar1[3] = 0;
      piVar1[4] = 0;
      piVar1[0x2f7] = (int)(piVar1 + 0x2f9);
      piVar1[0x2f8] = (int)(piVar1 + 0x2f9);
      piVar1[0x2f6] = 0;
      piVar1[0x2f5] = 1;
      piVar1[2] = 0;
      piVar1[0x5e7] = 0;
      piVar1[1] = iVar2;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
