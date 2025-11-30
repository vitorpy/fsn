/**
 * FUN_00411b84
 *
 * Extracted from fsn.c lines 52539-52550
 * Ghidra address: 0x00411b84
 * Category: Memory
 */

void FUN_00411b84(void)

{
  void *pvVar1;
  
  if ((DAT_100001f0 == 0) || (DAT_10016b10 <= DAT_100001f0)) {
    pvVar1 = calloc(100,0x2c);
    DAT_10016b10 = (int)pvVar1 + 0x1130;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
