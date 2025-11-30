/**
 * FUN_00420c50
 *
 * Extracted from fsn.c lines 60969-60976
 * Ghidra address: 0x00420c50
 * Category: Other
 */

void FUN_00420c50(void)

{
  FUN_00420b70();
  gflush();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
