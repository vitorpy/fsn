/**
 * FUN_0040a704
 *
 * Extracted from fsn.c lines 49412-49428
 * Ghidra address: 0x0040a704
 * Category: Other
 */

void FUN_0040a704(void)

{
  *(undefined4 *)curcontext = view_init_x;
  *(undefined4 *)(curcontext + 4) = view_init_y;
  *(undefined4 *)(curcontext + 8) = view_init_z;
  *(undefined2 *)(curcontext + 0xc) = 0;
  *(short *)(curcontext + 0xe) = (short)DAT_100174b8;
  *(short *)(curcontext + 0x10) = (short)DAT_100174e0;
  FUN_0040bfec();
  FUN_0040c0cc();
  curcontext[0xc51] = 0;
  curcontext[0xc53] = 0;
  FUN_0042a898();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
