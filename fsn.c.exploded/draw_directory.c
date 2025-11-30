/**
 * draw_directory
 *
 * Extracted from fsn.c lines 48006-48081
 * Category: Graphics
 */

void draw_directory(ulonglong param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint extraout_var;
  double dVar5;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  
  if (*(int *)(param_2 + 0x74) << 3 < 0) {
    uStack_18 = 0xbd4ccccd;
    if ((((*(uint *)(param_2 + 0x74) >> 0x1e & curcontextflag) != 0) ||
        ((int)(*(uint *)(param_2 + 0x74) << 2) < 0)) || ((*(ushort *)(param_2 + 0x74) & 1) != 0)) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    uStack_c = uStack_18;
    if (*(short *)(param_2 + 0x76) < 0) {
      pushmatrix();
      draw_scaled_element(param_1 & 0xffffffff00000000,
                   (double)maxy * (double)((ulonglong)extraout_var << 0x20));
      popmatrix();
    }
    iVar1 = *(int *)(param_2 + 0x14);
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        iVar3 = *(int *)(*(int *)(param_2 + 0x18) + iVar4);
        if (*(int *)(iVar3 + 0x74) << 3 < 0) {
          process_tree_node(iVar3,param_3);
          pushname((int)*(short *)(iVar3 + 0x5e));
          uVar2 = dir_type_icon;
          if ((-1 < *(int *)(iVar3 + 0x74) << 2) &&
             (uVar2 = file_type_icon, *(int *)(iVar3 + 0x74) << 0xd < 0)) {
            uVar2 = directory_color_active;
          }
          cpack(uVar2);
          dVar5 = (double)*(float *)(param_2 + 0x34) + (double)*(float *)(iVar3 + 0x4c);
          fStack_14 = (float)dVar5;
          fStack_10 = *(float *)(param_2 + 0x38) + *(float *)(iVar3 + 0x50);
          uStack_20 = *(undefined4 *)(iVar3 + 0x34);
          fStack_1c = (float)((double)*(float *)(iVar3 + 0x38) -
                             (double)*(float *)(iVar3 + 0x3c) /
                             (double)((ulonglong)dVar5 & 0xffffffff00000000));
          if (*(int *)(iVar3 + 0x74) << 2 < 0) {
            linewidth(3);
          }
          bgnline();
          v3f(&fStack_14);
          v3f(&uStack_20);
          endline();
          if (*(int *)(iVar3 + 0x74) << 2 < 0) {
            linewidth(1);
          }
          if ((param_3 == '\0') &&
             ((*(int *)(param_2 + 0x74) << 2 < 0 || (*(int *)(iVar3 + 0x74) << 2 < 0)))) {
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          }
          popname();
          iVar1 = *(int *)(param_2 + 0x14);
        }
        iVar4 = iVar4 + 4;
      } while (iVar4 < iVar1 << 2);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
