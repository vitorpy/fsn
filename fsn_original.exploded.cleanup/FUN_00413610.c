/**
 * FUN_00413610
 *
 * Extracted from fsn.c lines 53284-53300
 * Ghidra address: 0x00413610
 * Category: Other
 */

void FUN_00413610(int param_1,undefined4 param_2)

{
  int unaff_gp;
  undefined4 local_80 [30];
  undefined4 *local_8 [2];
  
  if (*(int *)(param_1 + 0x14) != 0) {
    local_8[0] = local_80;
    local_80[0] = param_2;
    (**(code **)(unaff_gp + -0x7f08) /* -> EXTERNAL_0x0fb1751c */)
              (local_8,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x14),4,
               *(undefined4 *)(unaff_gp + -0x7a60) /* -> compare_dirs */);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
