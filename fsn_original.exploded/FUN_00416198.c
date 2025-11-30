/**
 * FUN_00416198
 *
 * Extracted from fsn.c lines 54609-54620
 * Ghidra address: 0x00416198
 * Category: Other
 */

void FUN_00416198(void)

{
  if (topdir != 0) {
    fprintf((FILE *)0xfb52904,"mutiple hierarchies in database; exiting\n");
                    // WARNING: Subroutine does not return
    exit(1);
  }
  FUN_00415dec(0,0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
