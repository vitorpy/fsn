/**
 * FUN_0042b08c
 *
 * Extracted from fsn.c lines 67194-67202
 * Ghidra address: 0x0042b08c
 * Category: Other
 */

void FUN_0042b08c(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ec8) /* -> EXTERNAL_0x0f68e850 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6e10));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
