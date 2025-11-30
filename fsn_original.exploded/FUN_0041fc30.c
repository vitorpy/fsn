/**
 * FUN_0041fc30
 *
 * Extracted from fsn.c lines 60181-60198
 * Ghidra address: 0x0041fc30
 * Category: Other
 */

void FUN_0041fc30(undefined4 param_1)

{
  int unaff_gp;
  int local_8;
  int local_4;
  
  (**(code **)(unaff_gp + -0x7874))(param_1,&local_4,&local_8);
  if (local_4 != 0) {
    (**(code **)(unaff_gp + -0x79c4))();
    if (local_8 != 0) {
      (**(code **)(unaff_gp + -0x79bc))();
    }
    (**(code **)(unaff_gp + -0x79a8))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
