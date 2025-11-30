/**
 * FUN_00411804
 *
 * Extracted from fsn.c lines 52382-52392
 * Ghidra address: 0x00411804
 * Category: Other
 */

void FUN_00411804(int param_1)

{
  if (displayHeight == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  FUN_00411774(*(undefined4 *)(param_1 + 0xc));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
