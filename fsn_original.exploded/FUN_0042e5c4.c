/**
 * FUN_0042e5c4
 *
 * Extracted from fsn.c lines 68766-68779
 * Ghidra address: 0x0042e5c4
 * Category: Other
 */

void FUN_0042e5c4(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7840))(*(int *)(unaff_gp + -0x7f94) + 0x6e50);
  if (*(char *)(**(int **)(unaff_gp + -0x7680) + 0xc51) != '\0') {
    (**(code **)(unaff_gp + -0x7894))(1);
    (**(code **)(unaff_gp + -0x7840))(*(int *)(unaff_gp + -0x7f94) + 0x6e88);
    (**(code **)(unaff_gp + -0x7894))(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
