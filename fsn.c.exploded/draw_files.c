/**
 * draw_files
 *
 * Extracted from fsn.c lines 47937-47965
 * Category: Graphics
 */

void draw_files(int param_1,char param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar3 = 0;
    do {
      if (((param_2 != '\0') ||
          (uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 0x10) + iVar3) + 0x28),
          param_3 != uVar1 >> 0x1d)) || (-1 < (int)(uVar1 << 0xd))) {
        pushname((int)(short)iVar2);
        if (param_2 != '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
