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
        /*
     * BADDATA ANALYSIS (from binary @ 0x00416da8):
     * Function: FUN_00416da8
     *
     * Looking at the GP offsets and the assembly flow:
     * **What it does:**
     * Compares v0 (likely a count/index) against a field at offset 0x66ec in a global struct. If not equal, calls a function (likely set_status_message or similar) with a string at offset -21312, then calls another function with arg 1. Finally, null-terminates a buffer at sp+64 indexed by the struct field, and returns pointer to struct+0x66e8.
     * **C pseudocode:**
     * ```c
     * // gp-0x806c = curcontext, gp-0x8098 = some_widget, gp-0x805c = rodata base
     * // gp-0x83f8 = set_status_message(?), gp-0x83a0 = some_cleanup_func(?)
     * if (v0 != curcontext->field_66ec) {
     * set_status_message(some_widget + 32, "error string");  // rodata-21312
     * some_func(1);
     * }
     * char *buffer = (char *)sp_var_40;
     * buffer[curcontext->field_66ec] = '\0';  // null-terminate
     * return &curcontext->field_66e8;  // return pointer to struct field
     * ```
     * The 0x66e8/0x66ec offsets suggest this is near the end of a large context structure - likely related to filename/path buffer handling given the null-termination pattern.
     */
halt_baddata();
  }
  fprintf((FILE *)0xfb52904,"syntax error 2 in reading dir from database\n");
                    // WARNING: Subroutine does not return
  exit(1);
}
