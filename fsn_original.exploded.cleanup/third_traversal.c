/**
 * third_traversal
 *
 * Extracted from fsn.c lines 53165-53176
 * Category: Other
 */

void third_traversal(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 unaff_000010a0;
  
  uVar1 = FUN_004118b0();
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(float *)(param_1 + 0x34) = (float)(double)CONCAT44(unaff_000010a0,param_4);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
