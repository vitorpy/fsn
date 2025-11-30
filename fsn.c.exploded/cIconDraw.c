/**
 * cIconDraw
 *
 * Extracted from fsn.c lines 56340-56346
 * Category: Graphics
 */

void cIconDraw(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x60) + 0xc))(*(short *)(*(int *)(param_1 + 0x60) + 8) + param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
