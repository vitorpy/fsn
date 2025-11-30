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
  
  (**(code **)(unaff_gp + -0x7874) /* -> FUN_0042ab1c */)(param_1,&local_4,&local_8);
  if (local_4 != 0) {
    (**(code **)(unaff_gp + -0x79c4) /* -> FUN_0041d69c */)();
    if (local_8 != 0) {
      (**(code **)(unaff_gp + -0x79bc) /* -> FUN_0041da44 */)();
    }
    (**(code **)(unaff_gp + -0x79a8) /* -> FUN_0041fbb4 */)();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
