/**
 * draw_directory_tree
 *
 * Extracted from fsn.c lines 48520-48541
 * Category: Graphics
 */

void draw_directory_tree(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_gp;
  
  *(byte *)(param_1 + 0x74) =
       (byte)((*(uint *)(param_1 + 0x74) >> 0x1e | **(uint **)(unaff_gp + -0x7670)) << 6) |
       *(byte *)(param_1 + 0x74) & 0x3f;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar2 = 0;
    do {
      (**(code **)(unaff_gp + -0x7930))(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
