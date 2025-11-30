/**
 * FUN_004101e4
 *
 * Extracted from fsn.c lines 51644-51655
 * Ghidra address: 0x004101e4
 * Category: Other
 */

void FUN_004101e4(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x180));
  (**(code **)(unaff_gp + -0x7cf8) /* -> EXTERNAL_0x0f128324 */)();
  (**(code **)(unaff_gp + -0x7b54) /* -> EXTERNAL_0x0f125eb8 */)();
  (**(code **)(unaff_gp + -0x7cd0) /* -> EXTERNAL_0x0f1210f8 */)();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
