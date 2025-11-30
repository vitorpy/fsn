/**
 * draw_visibility
 *
 * Extracted from fsn.c lines 48547-48596
 * Category: Graphics
 */

void draw_visibility(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  uint uVar7;
  undefined8 in_f4;
  short asStack_1000 [2048];
  
  uVar7 = (uint)((ulonglong)in_f4 >> 0x20);
  if (topdir != 0) {
    initnames();
    gselect(asStack_1000,0x800);
    scale((float)((double)((ulonglong)uVar7 << 0x20) / (double)*(float *)(curcontext + 0x34)));
    rotate((int)*(short *)(curcontext + 0xe),0x78);
    rotate((int)*(short *)(curcontext + 0xc),0x7a);
    fVar6 = powf(zoom_base_factor,
                 (*(float *)(curcontext + 4) -
                 *(float *)(curcontext + 0x18) * *(float *)(curcontext + 0x20) *
                 *(float *)(curcontext + 8)) / zoom_reference_height);
    scale(fVar6);
    translate(-*(float *)curcontext,-*(float *)(curcontext + 4));
    render_directory(topdir);
    iVar1 = endselect(asStack_1000);
    if (iVar1 < 0) {
      draw_directory_tree(topdir);
    }
    iVar3 = 0;
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        iVar4 = (int)asStack_1000[iVar3];
        if (iVar4 == 1) {
          iVar2 = get_item_by_index((int)asStack_1000[iVar3 + 1]);
          *(byte *)(iVar2 + 0x74) =
               (byte)((*(uint *)(iVar2 + 0x74) >> 0x1e | curcontextflag) << 6) |
               *(byte *)(iVar2 + 0x74) & 0x3f;
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 1 + iVar4;
      } while (iVar5 != iVar1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
