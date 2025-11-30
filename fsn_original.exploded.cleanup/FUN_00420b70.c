/**
 * FUN_00420b70
 *
 * Extracted from fsn.c lines 60937-60950
 * Ghidra address: 0x00420b70
 * Category: Other
 */

void FUN_00420b70(void)

{
  int unaff_gp;
  
  if (**(char **)(unaff_gp + -0x76c4) /* -> overviewActive */ != '\0') {
    (**(code **)(unaff_gp + -0x799c) /* -> FUN_0041fdb0 */)();
    (**(code **)(unaff_gp + -0x7cfc) /* -> EXTERNAL_0x0f124670 */)(0);
    (**(code **)(unaff_gp + -0x7cf8) /* -> EXTERNAL_0x0f128324 */)();
    (*(code *)(*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + 0xacc))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
