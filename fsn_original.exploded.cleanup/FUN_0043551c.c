/**
 * FUN_0043551c
 *
 * Extracted from fsn.c lines 73571-73587
 * Ghidra address: 0x0043551c
 * Category: Other
 */

void FUN_0043551c(undefined4 *param_1)

{
  int unaff_gp;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)(**(code **)(unaff_gp + -0x7b5c) /* -> EXTERNAL_0x0f8b5990 */)(0x14), param_1 != (undefined4 *)0x0)
     ) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
