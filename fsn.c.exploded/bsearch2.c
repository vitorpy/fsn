/**
 * bsearch2
 *
 * Extracted from fsn.c lines 51862-51884
 * Category: Other
 */

void bsearch2(undefined4 param_1,uint param_2,int param_3,int param_4,undefined4 param_5,
             uint *param_6)

{
  uint uVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar1 = param_2 + param_4 * (param_3 + -1);
  if (param_2 <= uVar1) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (0 < uStack_14) {
    uStack_10 = uStack_10 + param_4;
  }
  if (uVar1 < uStack_10) {
    uStack_10 = 0;
  }
  *param_6 = uStack_10;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
