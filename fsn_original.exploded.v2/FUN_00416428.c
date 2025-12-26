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
        /*
     * BADDATA ANALYSIS (from binary @ 0x00416428):
     * Function: FUN_00416428
     *
     * Looking at this assembly:
     * **1. What it does:**
     * Compares v0 against a length field at offset 0x66a6 (26278) in a global struct. If not equal, calls sprintf (t9 at -31752) then exit(1). Finally null-terminates a string buffer at position [sp+36] + length, and returns pointer to offset 0x6698 (26264) in that struct.
     * **2. C pseudocode:**
     * ```c
     * // gp-32660 = some global struct pointer (likely topdir or similar database struct)
     * struct_ptr = *(global_struct**)(gp - 32660);
     * if (v0 != struct_ptr->field_66a6) {  // length/count mismatch
     * sprintf((char*)(*(gp - 32616) + 32),   // destination buffer
     * *(char**)(gp - 32676) - 21744); // format string (error msg)
     * exit(1);
     * }
     * // Null-terminate string at buffer[length]
     * struct_ptr = *(global_struct**)(gp - 32660);
     * buffer = *(char**)(sp + 36);
     * buffer[struct_ptr->field_66a6] = '\0';
     * return &struct_ptr->field_6698;  // return pointer to string/data at offset 26264
     * ```
     * **GP offsets to resolve:**
     * - gp-32660 (0x806c): Global struct pointer (database/directory related)
     * - gp-32616 (0x8098): Output buffer base
     * - gp-32676 (0x805c): String table base (format string at -21744 offset)
     * - gp-31752 (0x83f8): sprintf
     * - gp-31840 (0x83a0): exit
     * This appears to be validation/finalization code at the end of a database scan function - validates a count matches expected, null-terminates a result string, returns pointer to data within the struct.
     */
halt_baddata();
  }
  fprintf((FILE *)0xfb52904,"syntax error 2 in reading file from database\n");
                    // WARNING: Subroutine does not return
  exit(1);
}
