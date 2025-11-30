/**
 * calc_h_angle
 *
 * Extracted from fsn.c lines 50180-50199
 * Category: Other
 */

void calc_h_angle(void)

{
  float fVar1;
  uint in_register_00001040;
  float __x;
  undefined4 in_register_00001080;
  
  __x = (float)(((double)(int)*(short *)(curcontext + 0xc) /
                (double)((ulonglong)in_register_00001040 << 0x20)) *
               (double)CONCAT44(in_register_00001080,0x54442d18));
  fVar1 = sinf(__x);
  *(float *)(curcontext + 0x14) = fVar1;
  fVar1 = cosf(__x);
  *(float *)(curcontext + 0x18) = fVar1;
  fVar1 = tanf(__x);
  *(float *)(curcontext + 0x1c) = fVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
