/**
 * FUN_004166c8
 *
 * Extracted from fsn.c lines 54725-54755
 * Ghidra address: 0x004166c8
 * Category: Filesystem
 */

void FUN_004166c8(void)

{
  size_t sVar1;
  undefined1 auStack_3c [56];
  short local_4;
  char local_2;
  
  sVar1 = fread(&local_4,4,1,current_file);
  if (sVar1 != 1) {
    fprintf((FILE *)0xfb52904,"syntax error in reading window info from database\n");
                    // WARNING: Subroutine does not return
    exit(1);
  }
  gl_push_state();
  if (local_2 == '\0') {
    FUN_0042a4d4(1,1);
  }
  else if (context[0xc51] == '\0') {
    FUN_0042a4d4(0,1);
  }
  else {
    FUN_0042a4d4((int)local_4,1);
  }
  FUN_0042ec00(auStack_3c,current_file);
  FUN_0042e3bc(auStack_3c);
  curcontext[0xc51] = local_2;
  gl_pop_state();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004166c8):
     * Function: FUN_004166c8
     *
     * [Claude timeout after 120s]
     */
halt_baddata();
}
