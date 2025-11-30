/**
 * get_warp_entry
 *
 * Extracted from fsn.c lines 49323-49338
 * Category: Other
 */

void get_warp_entry(int param_1,float *param_2,float *param_3)

{
  uint in_register_00001000;
  
  *param_2 = (float)((double)*(float *)(param_1 + 0x34) -
                    (double)*(float *)(curcontext + 0x14) *
                    ((double)*(float *)(param_1 + 0x3c) /
                     (double)((ulonglong)in_register_00001000 << 0x20) + (double)layout_spacing_height));
  *param_3 = (float)((double)*(float *)(param_1 + 0x38) -
                    (double)*(float *)(curcontext + 0x18) *
                    ((double)*(float *)(param_1 + 0x3c) /
                     (double)((ulonglong)in_register_00001000 << 0x20) + (double)layout_spacing_height));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
