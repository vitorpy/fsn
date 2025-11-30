/**
 * FUN_00411114
 *
 * Extracted from fsn.c lines 52220-52227
 * Ghidra address: 0x00411114
 * Category: Other
 */

void FUN_00411114(undefined4 param_1,undefined4 param_2)

{
  set_gl_context(param_1,0);
  FUN_0040f080(param_2,&DAT_1001662c,&DAT_10016630);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
