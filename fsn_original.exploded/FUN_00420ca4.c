/**
 * FUN_00420ca4
 *
 * Extracted from fsn.c lines 60984-61002
 * Ghidra address: 0x00420ca4
 * Category: Other
 */

void FUN_00420ca4(undefined4 param_1,undefined4 param_2,int param_3)

{
  window_width = (uint)*(ushort *)(param_3 + 0x10);
  window_height = (uint)*(ushort *)(param_3 + 0x12);
  window_scale_x = (float)*(ushort *)(param_3 + 0x10) / (maxx - minx);
  window_scale_y = (float)*(ushort *)(param_3 + 0x12) / (maxy - miny);
  FUN_0041fd70();
  viewport(0,(*(short *)(param_3 + 0x10) + -1) * 0x10000 >> 0x10,0,
           (*(short *)(param_3 + 0x12) + -1) * 0x10000 >> 0x10);
  FUN_004207b4();
  FUN_0041fdb0();
  viewport(0,(*(short *)(param_3 + 0x10) + -1) * 0x10000 >> 0x10,0,
           (*(short *)(param_3 + 0x12) + -1) * 0x10000 >> 0x10);
  FUN_00420b70();
  gflush();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
