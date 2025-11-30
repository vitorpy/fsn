/**
 * FUN_00433e24
 *
 * Extracted from fsn.c lines 72092-72101
 * Ghidra address: 0x00433e24
 * Category: Other
 */

void FUN_00433e24(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7798) /* -> setState__13ByteCodedIconFiN41 */)(param_1,param_2,param_3,param_4,param_5,param_6);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
