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
      /*
     * BADDATA ANALYSIS (from binary @ 0x00415b48):
     * Function: FUN_00415b48
     *
     * Looking at the GP offsets and assembly flow:
     * **1. What it does:**
     * Calls a function via GP-31840 with arg 1, loads a pointer from (GP-32660)+26316, then at 415d04 computes `result = table[a2*32]` where table is at GP-30416, and stores to GP-30124.
     * **2. C pseudocode:**
     * ```c
     * // At 415cac: after halt_baddata recovery
     * func_gp_31840(1);                          // GP-31840 call with a0=1
     * a2 = *(int*)((char*)DAT_gp_32660 + 26316); // 0x66cc offset into structure
     * // branch to 415d04
     * // At 415d04: epilogue/result computation
     * t2 = DAT_gp_30416;                         // base table pointer
     * t1 = a2 << 5;                              // a2 * 32 (struct size 32 bytes)
     * t3 = t1 + t2;                              // &table[a2]
     * *DAT_gp_30124 = t3;                        // store result pointer
     * return;
     * ```
     * The alternate path (415cdc) calls GP-32024 with `*v1` as arg, zeros a2, and clears the pointer at offset 26316 before joining the common epilogue.
     * This appears to be selecting or clearing an entry from a 32-byte-stride array based on an index stored in a structure.
     */
halt_baddata();
}
