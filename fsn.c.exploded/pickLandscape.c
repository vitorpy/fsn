/**
 * pickLandscape
 *
 * Extracted from fsn.c lines 48830-48950
 * Category: Input
 */

void pickLandscape(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  uint uVar11;
  undefined8 in_f4;
  int iStack_7fc;
  short asStack_7dc [500];
  short asStack_3f4 [500];
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  uVar11 = (uint)((ulonglong)in_f4 >> 0x20);
  iStack_4 = 0;
  uStack_8 = 0;
  uStack_c = 0;
  iVar9 = -1;
  iVar8 = -1;
  iStack_7fc = -1;
  pushmatrix();
  initnames();
  picksize(5,5);
  pick(asStack_3f4,500);
  gl_picking_setup_wrapper();
  scale((float)((double)((ulonglong)uVar11 << 0x20) / (double)*(float *)(curcontext + 0x34)));
  rotate((int)*(short *)(curcontext + 0xe),0x78);
  rotate((int)*(short *)(curcontext + 0xc),0x7a);
  fVar10 = powf(zoom_base_factor,
                (*(float *)(curcontext + 4) -
                *(float *)(curcontext + 0x18) * *(float *)(curcontext + 0x20) *
                *(float *)(curcontext + 8)) / zoom_reference_height);
  scale(fVar10);
  translate(-*(float *)curcontext,-*(float *)(curcontext + 4));
  set_render_flag(1);
  iVar2 = endpick(asStack_3f4);
  popmatrix();
  pushmatrix();
  initnames();
  pick(asStack_7dc,500);
  uVar11 = 0;
  gl_picking_setup_wrapper();
  scale((float)((double)((ulonglong)uVar11 << 0x20) / (double)*(float *)(curcontext + 0x34)));
  rotate((int)*(short *)(curcontext + 0xe),0x78);
  rotate((int)*(short *)(curcontext + 0xc),0x7a);
  fVar10 = powf(zoom_base_factor,
                (*(float *)(curcontext + 4) -
                *(float *)(curcontext + 0x18) * *(float *)(curcontext + 0x20) *
                *(float *)(curcontext + 8)) / zoom_reference_height);
  scale(fVar10,0x3f800000);
  translate(-*(float *)curcontext,-*(float *)(curcontext + 4));
  iVar5 = 0;
  iVar7 = 0;
  if (0 < iVar2) {
    do {
      sVar1 = asStack_3f4[iVar5];
      if (sVar1 == 1) {
        uVar3 = get_item_by_index((int)asStack_3f4[iVar5 + 1]);
        render_tree_level(uVar3);
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 1 + (int)sVar1;
    } while (iVar7 != iVar2);
  }
  iVar7 = 0;
  iVar5 = 0;
  traverse_directories(topdir);
  iVar2 = endpick(asStack_7dc);
  popmatrix();
  if (0 < iVar2) {
    do {
      iVar6 = (int)asStack_7dc[iVar5];
      psVar4 = asStack_7dc + iVar5 + 1;
      if (iVar6 == 2) {
        if (*psVar4 == 1) {
          if (iVar9 < 0) {
            iVar9 = (int)asStack_7dc[iVar5 + 2];
          }
        }
        else if ((*psVar4 == 2) && (iVar8 < 0)) {
          iVar8 = (int)asStack_7dc[iVar5 + 2];
        }
      }
      if ((iVar6 == 3) && (*psVar4 = 2, *psVar4 != 0)) {
        iStack_7fc = (int)asStack_7dc[iVar5 + 3];
        iVar8 = (int)asStack_7dc[iVar5 + 2];
        break;
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 1 + iVar6;
    } while (iVar7 != iVar2);
  }
  if (iStack_7fc < 0) {
    if (iVar8 < 0) {
      if (-1 < iVar9) {
        uStack_c = get_item_by_index(iVar9);
      }
    }
    else {
      iStack_4 = get_item_by_index(iVar8);
    }
  }
  else {
    iStack_4 = get_item_by_index(iVar8);
    uStack_8 = *(undefined4 *)(*(int *)(iStack_4 + 0x10) + iStack_7fc * 4);
  }
  *param_1 = iStack_4;
  *param_2 = uStack_8;
  *param_3 = uStack_c;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
