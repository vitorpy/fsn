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
  curcontext->rotation_z /* was: *(undefined2 *)(curcontext + 0xc) */ = 0;
  curcontext->rotation_x /* was: *(short *)(curcontext + 0xe) */ = (short)DAT_100174b8;
  curcontext->fov /* was: *(short *)(curcontext + 0x10) */ = (short)DAT_100174e0;
  FUN_0040bfec();
  FUN_0040c0cc();
  curcontext[0xc51] = 0;
  curcontext[0xc53] = 0;
  FUN_0042a898();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040a704):
     * Function: FUN_0040a704
     *
     * Looking at the assembly:
     * 1. **What it does**: Stores halfword to offset 16 of t3, calls two functions via GP (offsets -31448 and -31444), clears two bytes at offsets 3153 and 3155 of curcontext structure, then calls a third function (offset -30852) before returning.
     * 2. **C pseudocode**:
     * ```c
     * ((short *)t3)[8] = t2;           // sh t2,16(t3) - store halfword
     * func_gp_8528();                   // GP-31448: likely endpoly() or similar
     * func_gp_852c();                   // GP-31444: likely popmatrix() or similar
     * curcontext->field_0c51 = 0;       // clear byte at offset 3153
     * curcontext->field_0c53 = 0;       // clear byte at offset 3155
     * func_gp_877c();                   // GP-30852: likely a cleanup/flush call
     * ```
     * The GP offsets need resolution against your GP_MAPPING.md to get actual function names. The offsets 0xc51 (3153) and 0xc53 (3155) into curcontext are likely boolean flags being cleared at end of some drawing operation.
     */
halt_baddata();
}
