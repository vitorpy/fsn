/**
 * FUN_00416834
 *
 * Extracted from fsn.c lines 54761-54778
 * Ghidra address: 0x00416834
 * Category: Other
 */

void FUN_00416834(void)

{
  size_t sVar1;
  ushort local_4 [2];
  
  sVar1 = fread(local_4,2,1,current_file);
  if (sVar1 != 1) {
    fprintf((FILE *)0xfb52904,"syntax error in reading showing info from database\n");
                    // WARNING: Subroutine does not return
    exit(1);
  }
  initialOverview = (local_4[0] & 1) != 0;
  initialLegend = (local_4[0] & 2) != 0;
  initialControls = (local_4[0] & 4) != 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
