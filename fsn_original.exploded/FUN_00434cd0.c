/**
 * FUN_00434cd0
 *
 * Extracted from fsn.c lines 73074-73088
 * Ghidra address: 0x00434cd0
 * Category: Other
 */

void FUN_00434cd0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_gp;
  
  puVar2 = (undefined4 *)*param_1;
  while ((puVar2 != (undefined4 *)0x0 &&
         (iVar1 = (**(code **)(unaff_gp + -0x7f34))(param_2,*puVar2), iVar1 != 0))) {
    puVar2 = (undefined4 *)puVar2[0x1a];
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
