/**
 * readMark
 *
 * Extracted from fsn.c lines 54261-54286
 * Category: Filesystem
 */

void readMark(FILE *param_1)

{
  size_t sVar1;
  undefined1 auStack_43c [56];
  short local_404 [2];
  undefined1 auStack_400 [1024];
  
  sVar1 = fread(local_404,2,1,param_1);
  if (sVar1 != 1) {
    fprintf((FILE *)0xfb52904,"syntax error in reading mark from database\n");
                    // WARNING: Subroutine does not return
    exit(1);
  }
  sVar1 = fread(auStack_400,1,(int)local_404[0],param_1);
  if (sVar1 != (int)local_404[0]) {
    fprintf((FILE *)0xfb52904,"syntax error in reading mark name from database\n");
                    // WARNING: Subroutine does not return
    exit(1);
  }
  auStack_400[local_404[0]] = 0;
  write_selection_file(auStack_43c,param_1);
  copy_buffer_data(auStack_400,auStack_43c);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
