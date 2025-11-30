/**
 * FUN_004187f4
 *
 * Extracted from fsn.c lines 56050-56063
 * Ghidra address: 0x004187f4
 * Category: Other
 */

void FUN_004187f4(int param_1)

{
  int unaff_gp;
  
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 4;
  (**(code **)(unaff_gp + -0x7a18))();
  (**(code **)(unaff_gp + -0x79b8))();
  (**(code **)(unaff_gp + -0x7a78))();
  (**(code **)(unaff_gp + -0x7acc))();
  (**(code **)(unaff_gp + -0x7880))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
