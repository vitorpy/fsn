/**
 * FUN_00421180
 *
 * Extracted from fsn.c lines 61064-61072
 * Ghidra address: 0x00421180
 * Category: Other
 */

void FUN_00421180(void)

{
  overviewActive = 0;
  DAT_10006eb4 = 0;
  FUN_00421d3c(DAT_10016c08);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
