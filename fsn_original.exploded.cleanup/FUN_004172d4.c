/**
 * FUN_004172d4
 *
 * Extracted from fsn.c lines 55078-55096
 * Ghidra address: 0x004172d4
 * Category: Other
 */

void FUN_004172d4(void)

{
  int iVar1;
  
  FUN_00415b48();
  iVar1 = (*(code *)*vinfop)();
  if (iVar1 == -1) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (iVar1 - 1U < 8) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  fprintf((FILE *)0xfb52904,"garbage in database, quitting\n");
                    // WARNING: Subroutine does not return
  exit(1);
}
