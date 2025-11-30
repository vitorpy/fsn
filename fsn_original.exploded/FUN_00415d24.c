/**
 * FUN_00415d24
 *
 * Extracted from fsn.c lines 54483-54500
 * Ghidra address: 0x00415d24
 * Category: Other
 */

void FUN_00415d24(void)

{
  if (_DAT_0fb51f00 == 0) {
    *current_file = *current_file + -1;
    if (*current_file < 0) {
      __filbuf();
    }
    else {
      current_file[1] = current_file[1] + 1;
    }
  }
  else {
    __semgetc(current_file);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
