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
  
  /* TODO: GP:-0x7ecc */ (**(code **)(unaff_gp + -0x7ecc) /* -> EXTERNAL_0x0fabf7b8 */)(auStack_434,param_1);
  /* TODO: GP:-0x7ce4 */ (**(code **)(unaff_gp + -0x7ce4) /* -> EXTERNAL_0x0fac11fc */)(auStack_434,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x592c);
  /* TODO: GP:-0x7ce4 */ (**(code **)(unaff_gp + -0x7ce4) /* -> EXTERNAL_0x0fac11fc */)(auStack_434,param_2);
  (**(code **)(unaff_gp + -0x7a90) /* -> FUN_00410f74 */)(auStack_434) /* =FUN_00410f74 */;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
