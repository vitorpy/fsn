/**
 * FUN_0042a8e4
 *
 * Extracted from fsn.c lines 66702-66714
 * Ghidra address: 0x0042a8e4
 * Category: Other
 */

void FUN_0042a8e4(void)

{
  int unaff_gp;
  
  if (*(char *)(**(int **)(unaff_gp + -0x7680) + 0xc51) != '\0') {
    (**(code **)(unaff_gp + -0x7894))(1);
    (**(code **)(unaff_gp + -0x7acc))();
    (**(code **)(unaff_gp + -0x7894))(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
