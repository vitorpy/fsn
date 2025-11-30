/**
 * calc_v_angle
 *
 * Extracted from fsn.c lines 50233-50252
 * Category: Other
 */

void calc_v_angle(void)

{
  float fVar1;
  uint in_register_00001040;
  float __x;
  undefined4 in_register_00001080;
  
  __x = (float)(((double)(int)*(short *)(curcontext + 0xe) /
                (double)((ulonglong)in_register_00001040 << 0x20)) *
               (double)CONCAT44(in_register_00001080,0x54442d18));
  fVar1 = sinf(__x);
  *(float *)(curcontext + 0x20) = fVar1;
  fVar1 = cosf(__x);
  *(float *)(curcontext + 0x24) = fVar1;
  fVar1 = tanf(__x);
  *(float *)(curcontext + 0x28) = fVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
