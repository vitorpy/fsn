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
        /*
     * BADDATA ANALYSIS (from binary @ 0x00416fec):
     * Function: FUN_00416fec
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * Compares v0 against a 16-bit value at offset 26374 (0x6706) from a global pointer (gp-32660). If not equal, calls two functions (likely sprintf at gp-31752 with string at rodata-21128, then exit(1) at gp-31840). Finally, null-terminates a buffer at sp+76 offset by that 16-bit value, and returns pointer to offset 26360 (0x66f8) from the global.
     * **C pseudocode:**
     * ```c
     * // gp-32660 is likely a struct pointer (call it dirinfo)
     * // offset 0x6706 = field holding string length
     * // offset 0x66f8 = the string buffer itself
     * if (v0 != dirinfo->strlen_field) {
     * sprintf(error_buffer + 32, format_string);  // gp-32616 + 32, gp-32676 - 21128
     * exit(1);
     * }
     * char *buf = (char *)(sp_local + 76);  // local buffer on stack
     * buf[dirinfo->strlen_field] = '\0';    // null terminate
     * return &dirinfo->string_buffer;       // return pointer to offset 0x66f8
     * ```
     * The offsets 0x66f8 and 0x6706 (diff = 14 bytes) suggest a structure with a string buffer followed by its length field. This looks like bounds checking before null-terminating a path/filename string.
     */
halt_baddata();
  }
  fprintf((FILE *)0xfb52904,"syntax error 2 in reading file from database\n");
                    // WARNING: Subroutine does not return
  exit(1);
}
