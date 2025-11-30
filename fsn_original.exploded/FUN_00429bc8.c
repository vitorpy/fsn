/**
 * FUN_00429bc8
 *
 * Extracted from fsn.c lines 66055-66071
 * Ghidra address: 0x00429bc8
 * Category: Other
 */

void FUN_00429bc8(undefined4 param_1)

{
  int unaff_gp;
  undefined4 local_8;
  int local_4;
  
  (**(code **)(unaff_gp + -0x7874))(param_1,&local_4,&local_8);
  if (local_4 == 0) {
    (**(code **)(unaff_gp + -0x78bc))();
  }
  else {
    (**(code **)(unaff_gp + -0x78b4))(local_4,local_8,0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
