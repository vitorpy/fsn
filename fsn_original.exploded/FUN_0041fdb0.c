/**
 * FUN_0041fdb0
 *
 * Extracted from fsn.c lines 60266-60276
 * Ghidra address: 0x0041fdb0
 * Category: Other
 */

void FUN_0041fdb0(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7d0c))
            (**(undefined4 **)(unaff_gp + -0x75fc),
             *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c04));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
