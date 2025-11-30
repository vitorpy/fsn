/**
 * FUN_004118b0
 *
 * Extracted from fsn.c lines 52398-52411
 * Ghidra address: 0x004118b0
 * Category: Other
 */

void FUN_004118b0(int param_1)

{
  if ((displayHeight != 0) && (displayDirectoryHeight != 0)) {
    if (displayDirectoryHeight == 2) {
      FUN_00411774(*(undefined4 *)(param_1 + 0x20));
    }
    else {
      FUN_00411774(*(undefined4 *)(param_1 + 0x1c));
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
