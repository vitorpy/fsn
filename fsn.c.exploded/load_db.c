/**
 * load_db
 *
 * Extracted from fsn.c lines 41268-41286
 * Category: Filesystem
 */

void load_db(void)

{
  int iVar1;
  
  init_directory_state();
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
