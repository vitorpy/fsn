/**
 * add_directory_monitor
 *
 * Extracted from fsn.c lines 50022-50035
 * Category: Filesystem
 */

void add_directory_monitor(int param_1)

{
  undefined4 uVar1;
  int unaff_gp;
  
  if ((**(char **)(unaff_gp + -0x75dc) == '\0') && (-1 < *(int *)(param_1 + 0x74) << 10)) {
    uVar1 = (**(code **)(unaff_gp + -0x7a84))(0,param_1);
    (**(code **)(unaff_gp + -0x7718))(*(int *)(unaff_gp + -0x7f94) + 0x6c70,uVar1,param_1 + 0x60);
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 0x20;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
