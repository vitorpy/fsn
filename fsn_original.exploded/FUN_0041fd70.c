/**
 * FUN_0041fd70
 *
 * Extracted from fsn.c lines 60238-60248
 * Ghidra address: 0x0041fd70
 * Category: Other
 */

void FUN_0041fd70(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7d0c))
            (**(undefined4 **)(unaff_gp + -0x75fc),
             *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c00));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
