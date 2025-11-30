/**
 * show_error_dialog
 *
 * Extracted from fsn.c lines 52202-52214
 * Category: Other
 */

void show_error_dialog(undefined4 param_1,undefined4 param_2)

{
  int unaff_gp;
  undefined1 auStack_434 [1076];
  
  (**(code **)(unaff_gp + -0x7ecc))(auStack_434,param_1);
  (**(code **)(unaff_gp + -0x7ce4))(auStack_434,*(int *)(unaff_gp + -0x7fa4) + -0x592c);
  (**(code **)(unaff_gp + -0x7ce4))(auStack_434,param_2);
  (**(code **)(unaff_gp + -0x7a90))(auStack_434);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
