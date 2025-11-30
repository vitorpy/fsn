/**
 * FUN_00411774
 *
 * Extracted from fsn.c lines 52368-52376
 * Ghidra address: 0x00411774
 * Category: Other
 */

void FUN_00411774(int param_1)

{
  if (((displayHeight != 0) && (displayHeight != 1)) && (displayHeight == 2)) {
    powf((float)param_1,DAT_100174f4);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
