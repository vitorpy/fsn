/**
 * FUN_00416428
 *
 * Extracted from fsn.c lines 54673-54719
 * Ghidra address: 0x00416428
 * Category: Other
 */

void FUN_00416428(void *param_1,void *param_2)

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
  if (uVar1 != 3) {
    fprintf((FILE *)0xfb52904,"expected file in database, didn\'t get one\n");
                    // WARNING: Subroutine does not return
    exit(1);
  }
  sVar2 = fread(&DAT_10016698,0x14,1,current_file);
  if (sVar2 != 1) {
    fprintf((FILE *)0xfb52904,"syntax error in reading file from database\n");
                    // WARNING: Subroutine does not return
    exit(1);
  }
  sVar2 = fread(param_1,1,(uint)DAT_100166a4,current_file);
  if (sVar2 == DAT_100166a4) {
    *(undefined1 *)((int)param_1 + (uint)DAT_100166a4) = 0;
    if ((DAT_100166a6 != 0) &&
       (sVar2 = fread(param_2,1,(uint)DAT_100166a6,current_file), sVar2 != DAT_100166a6)) {
      fprintf((FILE *)0xfb52904,"syntax error 3 in reading file from database\n");
                    // WARNING: Subroutine does not return
      exit(1);
    }
    *(undefined1 *)((int)param_2 + (uint)DAT_100166a6) = 0;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  fprintf((FILE *)0xfb52904,"syntax error 2 in reading file from database\n");
                    // WARNING: Subroutine does not return
  exit(1);
}
