/**
 * FUN_00414be4
 *
 * Extracted from fsn.c lines 54018-54047
 * Ghidra address: 0x00414be4
 * Category: Other
 */

void FUN_00414be4(FILE *param_1)

{
  int iVar1;
  undefined1 auStack_3c [56];
  undefined2 local_4;
  undefined1 local_2;
  
  if (_DAT_0fb51f00 == 0) {
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
  FUN_0042dc64(auStack_3c);
  FUN_0042e9b4(auStack_3c,param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
