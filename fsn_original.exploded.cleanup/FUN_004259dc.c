/**
 * FUN_004259dc
 *
 * Extracted from fsn.c lines 63178-63192
 * Ghidra address: 0x004259dc
 * Category: Other
 */

void FUN_004259dc(int param_1)

{
  int unaff_gp;
  
  if ((int)(*(uint *)(param_1 + 0x74) << 3) < 0) {
    *(byte *)(param_1 + 0x74) =
         (byte)((*(uint *)(param_1 + 0x74) >> 0x1e & ~**(uint **)(unaff_gp + -0x7670) /* -> curcontextflag */) << 6) |
         *(byte *)(param_1 + 0x74) & 0x3f;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
