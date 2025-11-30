/**
 * FUN_0040fae8
 *
 * Extracted from fsn.c lines 51432-51445
 * Ghidra address: 0x0040fae8
 * Category: Other
 */

void FUN_0040fae8(undefined4 param_1,undefined4 param_2)

{
  float local_8;
  float local_4;
  
  FUN_0040f080(param_2,&local_4,&local_8);
  local_4 = local_4 - DAT_10000158;
  local_8 = local_8 - DAT_1000015c;
  DAT_100165ec = local_8;
  FUN_0040f150(FUN_0040f20c,&DAT_100165e0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
