/**
 * FUN_00415b48
 *
 * Extracted from fsn.c lines 54442-54476
 * Ghidra address: 0x00415b48
 * Category: Other
 */

void FUN_00415b48(void)

{
  size_t sVar1;
  int iVar2;
  char acStack_8 [8];
  
  sVar1 = fread(acStack_8,1,6,current_file);
  if ((sVar1 == 6) && (iVar2 = strncmp(acStack_8,"FuSioN",6), iVar2 == 0)) {
    if (_DAT_0fb51f00 == 0) {
      current_file->_flags = current_file->_flags + -1;
      if (current_file->_flags < 0) {
        DAT_100166cc = __filbuf();
      }
      else {
        DAT_100166cc = (uint)(byte)*current_file->_IO_read_ptr;
        current_file->_IO_read_ptr = current_file->_IO_read_ptr + 1;
      }
    }
    else {
      DAT_100166cc = __semgetc(current_file);
    }
    if ((2 < (int)DAT_100166cc) || ((int)DAT_100166cc < 0)) {
      fprintf((FILE *)0xfb52904,"unknown database version %d, quitting\n");
                    // WARNING: Subroutine does not return
      exit(1);
    }
  }
  else {
    rewind(current_file);
    DAT_100166cc = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
