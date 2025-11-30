/**
 * cleanup_before_exit
 *
 * Extracted from fsn.c lines 42140-42152
 * Category: Other
 */

void cleanup_before_exit(void)

{
  int unaff_gp;
  
  if (**(char **)(unaff_gp + -0x75dc) == '\0') {
    (**(code **)(unaff_gp + -0x7818))(**(undefined4 **)(unaff_gp + -0x75f0));
    (**(code **)(unaff_gp + -0x78f0))();
    (*(code *)(*(int *)(unaff_gp + -0x7fe8) + 0x4da4))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
