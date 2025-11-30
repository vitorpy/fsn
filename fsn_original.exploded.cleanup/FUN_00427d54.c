/**
 * FUN_00427d54
 *
 * Extracted from fsn.c lines 64672-64686
 * Ghidra address: 0x00427d54
 * Category: Other
 */

void FUN_00427d54(void)

{
  int iVar1;
  
  if ((fsn_resources == '\0') && (iVar1 = FUN_00439bd8(&DAT_10016c70), iVar1 < 0)) {
    fprintf((FILE *)0xfb52904,
            "Could not run FAM.  This program requires FAM to be installed.\nYou may need to install eoe2.sw.envm to obtain FAM\n"
           );
                    // WARNING: Subroutine does not return
    exit(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
