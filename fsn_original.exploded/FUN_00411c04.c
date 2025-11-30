/**
 * FUN_00411c04
 *
 * Extracted from fsn.c lines 52556-52577
 * Ghidra address: 0x00411c04
 * Category: Memory
 */

void FUN_00411c04(void)

{
  if ((DAT_100001f4 == (void *)0x0) || (DAT_10016b14 <= DAT_100001f4)) {
    DAT_100001f4 = calloc(0x40,0x78);
    DAT_10016b14 = (void *)((int)DAT_100001f4 + 0x1e00);
    if (DAT_100001f8 == 0) {
      dir_index = malloc(0x40);
      DAT_10016b18 = 0x10;
    }
    else if (DAT_100001f8 == DAT_10016b18) {
      DAT_10016b18 = DAT_10016b18 + 0x10;
      dir_index = realloc(dir_index,DAT_10016b18 * 4);
    }
    *(void **)((int)dir_index + DAT_100001f8 * 4) = DAT_100001f4;
    DAT_100001f8 = DAT_100001f8 + 1;
  }
  *(undefined4 *)((int)DAT_100001f4 + 0x5c) = DAT_100001fc;
  DAT_100001f4 = (void *)((int)DAT_100001f4 + 0x78);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
