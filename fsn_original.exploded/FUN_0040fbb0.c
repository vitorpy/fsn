/**
 * FUN_0040fbb0
 *
 * Extracted from fsn.c lines 51451-51459
 * Ghidra address: 0x0040fbb0
 * Category: Other
 */

void FUN_0040fbb0(void)

{
  timeval local_c;
  
  gettimeofday(&local_c,(__timezone_ptr_t)0x0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
