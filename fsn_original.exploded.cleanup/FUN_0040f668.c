/**
 * FUN_0040f668
 *
 * Extracted from fsn.c lines 51317-51351
 * Ghidra address: 0x0040f668
 * Category: Other
 */

void FUN_0040f668(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 in_f4;
  double dVar2;
  uint in_fcsr;
  float local_8;
  float local_4;
  
  uVar1 = (uint)((ulonglong)in_f4 >> 0x20);
  set_gl_context(param_1,0);
  FUN_0040f080(param_2,&local_4,&local_8);
  local_4 = local_4 - DAT_10000158;
  local_8 = local_8 - DAT_1000015c;
  DAT_100165b4 = local_8 * DAT_100174a0;
  if (curcontext[0x38] == '\0') {
    DAT_100165b0 = local_4 * DAT_100174a0;
    DAT_100165b8 = 0;
  }
  else {
    dVar2 = (double)local_4 * (double)((ulonglong)uVar1 << 0x20);
    if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
      dVar2 = ROUND(dVar2);
    }
    else {
      dVar2 = FLOOR(dVar2);
    }
    DAT_100165b8 = (undefined2)(int)dVar2;
    DAT_100165b0 = 0.0;
  }
  FUN_0040f150(FUN_0040f20c,&DAT_100165b0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
