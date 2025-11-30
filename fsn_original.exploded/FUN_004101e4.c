/**
 * FUN_004101e4
 *
 * Extracted from fsn.c lines 51644-51655
 * Ghidra address: 0x004101e4
 * Category: Other
 */

void FUN_004101e4(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x180));
  (**(code **)(unaff_gp + -0x7cf8))();
  (**(code **)(unaff_gp + -0x7b54))();
  (**(code **)(unaff_gp + -0x7cd0))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
