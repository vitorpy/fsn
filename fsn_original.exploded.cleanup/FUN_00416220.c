/**
 * FUN_00416220
 *
 * Extracted from fsn.c lines 54627-54666
 * Ghidra address: 0x00416220
 * Category: Other
 */

void FUN_00416220(void *param_1)

{
  uint uVar1;
  size_t sVar2;
  
  if (_DAT_0fb51f00 == 0) {
    current_file->_flags = current_file->_flags + -1;
    if (current_file->_flags < 0) {
      uVar1 = __filbuf();
    }
    else {
      uVar1 = (uint)(byte)*current_file->_IO_read_ptr;
      current_file->_IO_read_ptr = current_file->_IO_read_ptr + 1;
    }
  }
  else {
    uVar1 = __semgetc(current_file);
  }
  if (uVar1 != 2) {
    fprintf((FILE *)0xfb52904,"expected dir in database, didn\'t get one\n");
                    // WARNING: Subroutine does not return
    exit(1);
  }
  sVar2 = fread(&DAT_10016b20,0xc,1,current_file);
  if (sVar2 != 1) {
    fprintf((FILE *)0xfb52904,"syntax error in reading dir from database\n");
                    // WARNING: Subroutine does not return
    exit(1);
  }
  sVar2 = fread(param_1,1,(uint)DAT_10016b24,current_file);
  if (sVar2 == DAT_10016b24) {
    *(undefined1 *)((int)param_1 + (uint)DAT_10016b24) = 0;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  fprintf((FILE *)0xfb52904,"syntax error 2 in reading dir from database\n");
                    // WARNING: Subroutine does not return
  exit(1);
}
