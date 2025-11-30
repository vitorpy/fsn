/**
 * FUN_004207b4
 *
 * Extracted from fsn.c lines 60787-60803
 * Ghidra address: 0x004207b4
 * Category: Other
 */

void FUN_004207b4(void)

{
  int unaff_gp;
  
  if (**(char **)(unaff_gp + -0x76c4) /* -> overviewActive */ != '\0') {
    (**(code **)(unaff_gp + -0x79a0) /* -> FUN_0041fd70 */)();
    (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x160));
    (**(code **)(unaff_gp + -0x7cf8) /* -> EXTERNAL_0x0f128324 */)();
    if (**(int **)(unaff_gp + -0x76d4) /* -> topdir */ != 0) {
      (**(code **)(unaff_gp + -0x7990) /* -> FUN_00420408 */)(**(int **)(unaff_gp + -0x76d4) /* -> topdir */,0);
    }
    (**(code **)(unaff_gp + -0x7b54) /* -> EXTERNAL_0x0f125eb8 */)();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
