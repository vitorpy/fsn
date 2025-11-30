/**
 * init_directory_state
 *
 * Extracted from fsn.c lines 41059-41093
 * Category: Filesystem
 */

void init_directory_state(void)

{
  size_t sVar1;
  int iVar2;
  char acStack_8 [8];
  
  sVar1 = fread(acStack_8,1,6,current_file);
  if ((sVar1 == 6) && (iVar2 = strncmp(acStack_8,"FuSioN",6), iVar2 == 0)) {
    if (__iob_func_result == 0) {
      current_file->_flags = current_file->_flags + -1;
      if (current_file->_flags < 0) {
        current_input_byte = __filbuf();
      }
      else {
        current_input_byte = (uint)(byte)*current_file->_IO_read_ptr;
        current_file->_IO_read_ptr = current_file->_IO_read_ptr + 1;
      }
    }
    else {
      current_input_byte = __semgetc(current_file);
    }
    if ((2 < (int)current_input_byte) || ((int)current_input_byte < 0)) {
      fprintf((FILE *)0xfb52904,"unknown database version %d, quitting\n");
                    // WARNING: Subroutine does not return
      exit(1);
    }
  }
  else {
    rewind(current_file);
    current_input_byte = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
