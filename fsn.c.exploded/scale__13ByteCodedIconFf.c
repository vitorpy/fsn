/**
 * scale__13ByteCodedIconFf
 *
 * Extracted from fsn.c lines 57748-57764
 * Category: Other
 */

void scale__13ByteCodedIconFf(int param_1,float param_2)

{
  *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) * param_2;
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) * param_2;
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) * param_2;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) * param_2;
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) * param_2;
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) * param_2;
  *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) * param_2;
  *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) * param_2;
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) * param_2;
  *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) * param_2;
  *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) * param_2;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
