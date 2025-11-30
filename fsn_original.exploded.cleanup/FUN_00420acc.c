/**
 * FUN_00420acc
 *
 * Extracted from fsn.c lines 60903-60914
 * Ghidra address: 0x00420acc
 * Category: Other
 */

void FUN_00420acc(void)

{
  if (altcontext[0xc51] != '\0') {
    gl_swap_buffers(1);
    FUN_0042087c();
    gl_swap_buffers(1);
  }
  FUN_0042087c();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
