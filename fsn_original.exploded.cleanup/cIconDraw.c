/**
 * cIconDraw
 *
 * Extracted from fsn.c lines 72037-72043
 * Category: Graphics
 */

void cIconDraw(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x60) + 0xc))(*(short *)(*(int *)(param_1 + 0x60) + 8) + param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
