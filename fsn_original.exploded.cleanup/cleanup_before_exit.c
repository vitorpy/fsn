/**
 * cleanup_before_exit
 *
 * Extracted from fsn.c lines 56119-56131
 * Category: Other
 */

void cleanup_before_exit(void)

{
  int unaff_gp;
  
  if (**(char **)(unaff_gp + -0x75dc) /* -> fsn_resources */ == '\0') {
    (**(code **)(unaff_gp + -0x7818) /* -> FUN_0042fb84 */)(**(undefined4 **)(unaff_gp + -0x75f0) /* -> toplevel */);
    (**(code **)(unaff_gp + -0x78f0) /* -> FUN_00427de0 */)();
    (*(code *)(*(int *)(unaff_gp + -0x7fe8) /* -> FUN_00410000 */ + 0x4da4))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
