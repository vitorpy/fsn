/**
 * FUN_00416fec
 *
 * Extracted from fsn.c lines 54990-55048
 * Ghidra address: 0x00416fec
 * Category: Other
 */

void FUN_00416fec(void *param_1,void *param_2)

{
  uint uVar1;
  size_t sVar2;
  undefined4 local_10;
  undefined4 local_c;
  ushort local_8;
  ushort local_6;
  ushort local_4;
  undefined1 local_2;
  
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
  sVar2 = fread(&local_10,0x10,1,current_file);
  if (sVar2 != 1) {
    fprintf((FILE *)0xfb52904,"syntax error in reading file from database\n");
                    // WARNING: Subroutine does not return
    exit(1);
  }
  DAT_100166f8 = local_10;
  DAT_10016700 = (uint)local_8;
  DAT_100166fc = local_c;
  DAT_10016704 = local_6;
  DAT_10016706 = local_4;
  DAT_10016708 = local_2;
  sVar2 = fread(param_1,1,(uint)local_6,current_file);
  if (sVar2 == DAT_10016704) {
    *(undefined1 *)((int)param_1 + (uint)DAT_10016704) = 0;
    if ((DAT_10016706 != 0) &&
       (sVar2 = fread(param_2,1,(uint)DAT_10016706,current_file), sVar2 != DAT_10016706)) {
      fprintf((FILE *)0xfb52904,"syntax error 3 in reading file from database\n");
                    // WARNING: Subroutine does not return
      exit(1);
    }
    *(undefined1 *)((int)param_2 + (uint)DAT_10016706) = 0;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  fprintf((FILE *)0xfb52904,"syntax error 2 in reading file from database\n");
                    // WARNING: Subroutine does not return
  exit(1);
}
