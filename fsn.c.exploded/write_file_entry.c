/**
 * write_file_entry
 *
 * Extracted from fsn.c lines 40635-40664
 * Category: Filesystem
 */

void write_file_entry(FILE *param_1)

{
  int iVar1;
  undefined1 auStack_3c [56];
  undefined2 local_4;
  undefined1 local_2;
  
  if (__iob_func_result == 0) {
    iVar1 = param_1->_flags + -1;
    param_1->_flags = iVar1;
    if (iVar1 < 0) {
      __flsbuf(5,param_1);
    }
    else {
      *param_1->_IO_read_ptr = '\x05';
      param_1->_IO_read_ptr = param_1->_IO_read_ptr + 1;
    }
  }
  else {
    __semputc(5,param_1);
  }
  local_4 = (undefined2)curcontextid;
  local_2 = curcontext[0xc51];
  fwrite(&local_4,4,1,param_1);
  get_view_position(auStack_3c);
  copy_selection_data(auStack_3c,param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
