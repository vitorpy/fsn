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
      /*
     * BADDATA ANALYSIS (from binary @ 0x00414be4):
     * Function: FUN_00414be4
     *
     * Looking at the GP offsets and call sequence:
     * **1. What it does:**
     * Loads two global values, stores them to a stack struct (short at offset 92, byte at offset 94 from a pointer dereference), calls a function with that struct (likely fwrite with size=4, count=1, file=s0), then calls two more functions on a stack buffer at offset 36 (likely string formatting + file write).
     * **2. C pseudocode:**
     * ```c
     * // GP offsets need resolution, but pattern is clear:
     * short *val1_ptr = *global_898c;  // gp-30324
     * char *val2_ptr = *global_897c;   // gp-30340
     * struct { short s; char c; } temp;
     * temp.s = *val1_ptr;              // sh at sp+92
     * temp.c = val2_ptr[0xc51];        // lbu offset 3153, sb at sp+94
     * // gp-32116 = likely fwrite
     * fwrite(&temp, 4, 1, s0);         // a0=&temp, a1=4, a2=1, a3=s0(file)
     * // gp-30796 = some formatting function on stack buffer at sp+36
     * func_87b4(sp+36);
     * // gp-30768 = likely fputs or fprintf
     * func_87d0(sp+36, s0);            // buffer, file
     * ```
     * The pattern suggests this is writing a small binary record (4 bytes: 2-byte short + 1 byte from offset 0xc51 of some structure + padding), then writing a formatted string to the same file handle (s0).
     */
halt_baddata();
}
