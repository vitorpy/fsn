/**
 * FUN_00416da8
 *
 * Extracted from fsn.c lines 54932-54983
 * Ghidra address: 0x00416da8
 * Category: Other
 */

void FUN_00416da8(void *param_1)

{
  uint uVar1;
  size_t sVar2;
  ushort local_c;
  ushort local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined1 local_4;
  undefined1 local_3;
  
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
  sVar2 = fread(&local_c,10,1,current_file);
  if (sVar2 != 1) {
    fprintf((FILE *)0xfb52904,"syntax error in reading dir from database\n");
                    // WARNING: Subroutine does not return
    exit(1);
  }
  DAT_100166ec = local_a;
  DAT_100166ee = local_8;
  DAT_100166f0 = local_6;
  DAT_100166f2 = local_4;
  DAT_100166f3 = local_3;
  DAT_100166e8 = (uint)local_c;
  sVar2 = fread(param_1,1,(uint)local_a,current_file);
  if (sVar2 == DAT_100166ec) {
    *(undefined1 *)((int)param_1 + (uint)DAT_100166ec) = 0;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  fprintf((FILE *)0xfb52904,"syntax error 2 in reading dir from database\n");
                    // WARNING: Subroutine does not return
  exit(1);
}
