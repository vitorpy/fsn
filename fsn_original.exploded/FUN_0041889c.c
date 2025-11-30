/**
 * FUN_0041889c
 *
 * Extracted from fsn.c lines 56085-56097
 * Ghidra address: 0x0041889c
 * Category: Other
 */

void FUN_0041889c(int param_1)

{
  int unaff_gp;
  
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xfb;
  (**(code **)(unaff_gp + -0x7a34))();
  (**(code **)(unaff_gp + -0x7a78))();
  (**(code **)(unaff_gp + -0x7acc))();
  (**(code **)(unaff_gp + -0x7880))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
