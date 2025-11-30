/**
 * FUN_004169cc
 *
 * Extracted from fsn.c lines 54806-54829
 * Ghidra address: 0x004169cc
 * Category: Other
 */

void FUN_004169cc(void)

{
  uint __c;
  
  if (_DAT_0fb51f00 == 0) {
    current_file->_flags = current_file->_flags + -1;
    if (current_file->_flags < 0) {
      __c = __filbuf();
    }
    else {
      __c = (uint)(byte)*current_file->_IO_read_ptr;
      current_file->_IO_read_ptr = current_file->_IO_read_ptr + 1;
    }
  }
  else {
    __c = __semgetc(current_file);
  }
  if (__c != 0xffffffff) {
    ungetc(__c,current_file);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
