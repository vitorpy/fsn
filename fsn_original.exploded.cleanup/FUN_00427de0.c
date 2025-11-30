/**
 * FUN_00427de0
 *
 * Extracted from fsn.c lines 64706-64716
 * Ghidra address: 0x00427de0
 * Category: Other
 */

void FUN_00427de0(void)

{
  int unaff_gp;
  
  if (**(char **)(unaff_gp + -0x75dc) /* -> fsn_resources */ == '\0') {
    (**(code **)(unaff_gp + -0x7720) /* -> FUN_00439c0c */)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6c70);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
