/**
 * FUN_00415550
 *
 * Extracted from fsn.c lines 54267-54276
 * Ghidra address: 0x00415550
 * Category: Other
 */

void FUN_00415550(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7e94))
            (**(undefined4 **)(unaff_gp + -0x7600),900000,*(undefined4 *)(unaff_gp + -0x7a4c),0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
