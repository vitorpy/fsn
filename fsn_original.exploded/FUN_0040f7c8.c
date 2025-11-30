/**
 * FUN_0040f7c8
 *
 * Extracted from fsn.c lines 51357-51389
 * Ghidra address: 0x0040f7c8
 * Category: Other
 */

void FUN_0040f7c8(undefined4 param_1,undefined4 param_2)

{
  double dVar1;
  uint in_fcsr;
  float local_8;
  float local_4;
  
  set_gl_context(param_1,0);
  FUN_0040f080(param_2,&local_4,&local_8);
  local_4 = local_4 - DAT_10000158;
  local_8 = local_8 - DAT_1000015c;
  DAT_100165c4 = local_8 * *(float *)(curcontext + 8) * DAT_100174a0;
  DAT_100165cc = (float)((double)-DAT_100165c4 * (double)*(float *)(curcontext + 0x24));
  if (curcontext[0x38] == '\0') {
    DAT_100165c0 = local_4 * *(float *)(curcontext + 8) * DAT_100174a0;
    DAT_100165c8 = 0;
  }
  else {
    dVar1 = (double)local_4 * (double)((ulonglong)(double)-DAT_100165c4 & 0xffffffff00000000);
    if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
      dVar1 = ROUND(dVar1);
    }
    else {
      dVar1 = FLOOR(dVar1);
    }
    DAT_100165c8 = (undefined2)(int)dVar1;
    DAT_100165c0 = 0.0;
  }
  FUN_0040f150(FUN_0040f20c,&DAT_100165c0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
