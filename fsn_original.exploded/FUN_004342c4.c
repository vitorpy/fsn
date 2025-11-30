/**
 * FUN_004342c4
 *
 * Extracted from fsn.c lines 72442-72459
 * Ghidra address: 0x004342c4
 * Category: Other
 */

void FUN_004342c4(undefined4 *param_1)

{
  int unaff_gp;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)(**(code **)(unaff_gp + -0x7b5c))(0x18), param_1 != (undefined4 *)0x0)
     ) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
