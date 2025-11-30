/**
 * FUN_00411178
 *
 * Extracted from fsn.c lines 52233-52247
 * Ghidra address: 0x00411178
 * Category: Other
 */

void FUN_00411178(undefined4 param_1,undefined4 param_2)

{
  uint extraout_var;
  float local_8;
  float local_4;
  
  FUN_0040f080(param_2,&local_4,&local_8);
  FUN_0040cf9c(((double)local_8 - (double)DAT_10016630) * (double)((ulonglong)extraout_var << 0x20),
               ((double)local_4 - (double)DAT_1001662c) * (double)((ulonglong)extraout_var << 0x20))
  ;
  DAT_1001662c = local_4;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
