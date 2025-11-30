/**
 * FUN_0041692c
 *
 * Extracted from fsn.c lines 54784-54799
 * Ghidra address: 0x0041692c
 * Category: Other
 */

void FUN_0041692c(void)

{
  size_t sVar1;
  undefined4 local_8 [2];
  
  sVar1 = fread(local_8,8,1,current_file);
  if (sVar1 != 1) {
    fprintf((FILE *)0xfb52904,"syntax error in reading display info from database\n");
                    // WARNING: Subroutine does not return
    exit(1);
  }
  displayHeight = local_8[0];
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
