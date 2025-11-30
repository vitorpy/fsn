/**
 * draw_visible_directory
 *
 * Extracted from fsn.c lines 48456-48468
 * Category: Graphics
 */

void draw_visible_directory(int param_1)

{
  if ((int)(*(uint *)(param_1 + 0x74) << 3) < 0) {
    *(byte *)(param_1 + 0x74) =
         (byte)((*(uint *)(param_1 + 0x74) >> 0x1e & ~curcontextflag) << 6) |
         *(byte *)(param_1 + 0x74) & 0x3f;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
