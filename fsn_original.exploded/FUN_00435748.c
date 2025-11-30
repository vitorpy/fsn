/**
 * FUN_00435748
 *
 * Extracted from fsn.c lines 73705-73717
 * Ghidra address: 0x00435748
 * Category: Other
 */

void FUN_00435748(int param_1)

{
  int unaff_gp;
  
  if ((param_1 != 0) || (param_1 = (**(code **)(unaff_gp + -0x7b5c))(0x2d0), param_1 != 0)) {
    *(undefined4 *)(param_1 + 0x220) = 0;
    *(undefined4 *)(param_1 + 0x228) = 0;
    *(undefined4 *)(param_1 + 0x22c) = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
