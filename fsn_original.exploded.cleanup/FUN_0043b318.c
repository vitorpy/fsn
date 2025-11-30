/**
 * FUN_0043b318
 *
 * Extracted from fsn.c lines 78322-78338
 * Ghidra address: 0x0043b318
 * Category: Other
 */

void FUN_0043b318(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int unaff_gp;
  undefined4 local_resc;
  undefined1 auStack_4 [4];
  
  local_resc = param_4;
  (**(code **)(unaff_gp + -0x76f0) /* -> putword__FPcPl */)(auStack_4,&local_resc);
  iVar1 = (**(code **)(unaff_gp + -0x7e00) /* -> EXTERNAL_0x0fac388c */)(param_2,auStack_4,4);
  if (iVar1 == 4) {
    (**(code **)(unaff_gp + -0x7e00) /* -> EXTERNAL_0x0fac388c */)(param_2,param_3,local_resc);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
