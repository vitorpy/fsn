/**
 * dumpMarks
 *
 * Extracted from fsn.c lines 69631-69669
 * Category: Other
 */

void dumpMarks(FILE *param_1)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short asStack_8 [4];
  
  iVar3 = 0;
  if (0 < selection_count) {
    iVar2 = 0;
    do {
      if (_DAT_0fb51f00 == 0) {
        iVar4 = param_1->_flags + -1;
        param_1->_flags = iVar4;
        if (iVar4 < 0) {
          __flsbuf(7,param_1);
        }
        else {
          *param_1->_IO_read_ptr = '\a';
          param_1->_IO_read_ptr = param_1->_IO_read_ptr + 1;
        }
      }
      else {
        __semputc(7,param_1);
      }
      sVar1 = strlen(*(char **)(selection_buffer + iVar2 + 0x38));
      asStack_8[0] = (short)sVar1;
      fwrite(asStack_8,2,1,param_1);
      fwrite(*(void **)(selection_buffer + iVar2 + 0x38),1,(int)asStack_8[0],param_1);
      FUN_0042e9b4(iVar3 * 0x40 + selection_buffer,param_1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x40;
    } while (iVar3 < selection_count);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042f8b0):
     * Function: dumpMarks
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls a function via t9 with args (t7[56], 1, sp[72], s0), then calls another function at GP-30768 with args (s3[0] + s2*64, s0). Increments s2, loops back to 0x42f918 while s2 < s7[0]. Finally restores s0-s7, ra from stack and returns.
     * 2. **C pseudocode:**
     * ```c
     * // ... continuing from earlier in function
     * (*func_ptr)(t7->field_56, 1, (short)local_72, s0_ptr);
     * // GP-30768 = strcpy (offset 0x87d0)
     * strcpy(s3_array[s2], s0_ptr);  // s3_array has 64-byte elements
     * s2++;
     * if (s2 < *s7_count) goto loop_start;  // branch to 0x42f918
     * // epilogue - restore saved registers and return
     * ```
     * The key insight: `sll t8,s2,0x6` (shift left 6 = multiply by 64) combined with `addu a0,t8,t9` shows array indexing with 64-byte stride, likely iterating through mark entries and copying strings into them.
     */
halt_baddata();
}
