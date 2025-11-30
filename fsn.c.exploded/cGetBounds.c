/**
 * cGetBounds
 *
 * Extracted from fsn.c lines 56308-56318
 * Category: Other
 */

void cGetBounds(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
               undefined4 *param_5)

{
  *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x38);
  *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x3c);
  *param_4 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x40);
  *param_5 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x44);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
