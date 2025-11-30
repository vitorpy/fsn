/**
 * rgb_to_irgb
 *
 * Extracted from fsn.c lines 77083-77113
 * Category: Other
 */

void rgb_to_irgb(double param_1,double param_2)

{
  uint in_register_00001000;
  uint in_register_00001010;
  double dVar1;
  byte in_fcsr;
  int *in_stack_00000018;
  int *in_stack_0000001c;
  
  dVar1 = (double)(float)param_1 * (double)((ulonglong)in_register_00001000 << 0x20) +
          (double)((ulonglong)in_register_00001010 << 0x20);
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    dVar1 = ROUND(dVar1);
  }
  else {
    dVar1 = FLOOR(dVar1);
  }
  *in_stack_00000018 = (int)dVar1;
  dVar1 = (double)(float)param_2 * (double)((ulonglong)in_register_00001000 << 0x20) +
          (double)((ulonglong)in_register_00001010 << 0x20);
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    dVar1 = ROUND(dVar1);
  }
  else {
    dVar1 = FLOOR(dVar1);
  }
  *in_stack_0000001c = (int)dVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
