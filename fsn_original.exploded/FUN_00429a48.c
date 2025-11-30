/**
 * FUN_00429a48
 *
 * Extracted from fsn.c lines 65981-65994
 * Ghidra address: 0x00429a48
 * Category: Other
 */

void FUN_00429a48(void)

{
  int unaff_gp;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  (**(code **)(unaff_gp + -0x7ae4))();
  (**(code **)(unaff_gp + -31000))(&local_4,&local_c,&local_8);
  (**(code **)(unaff_gp + -0x78b4))(local_4,local_c,local_8);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
