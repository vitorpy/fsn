/**
 * FUN_00435938
 *
 * Extracted from fsn.c lines 73896-73913
 * Ghidra address: 0x00435938
 * Category: Other
 */

void FUN_00435938(int param_1)

{
  int unaff_gp;
  
  if (*(int *)(param_1 + 0x23c) != 0) {
    (**(code **)(unaff_gp + -0x7da4) /* -> EXTERNAL_0x0facb588 */)(*(undefined4 *)(param_1 + 0x238));
  }
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
