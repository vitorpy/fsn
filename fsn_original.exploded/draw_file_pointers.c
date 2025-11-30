/**
 * draw_file_pointers
 *
 * Extracted from fsn.c lines 62583-62635
 * Category: Graphics
 */

void draw_file_pointers(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  short sStackX_6;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x10) + param_2 * 4);
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + param_3 * 4);
  selected_id_1 = iVar4;
  selected_id_2 = iVar2;
  loadname((int)(short)param_3);
  pushmatrix();
  translate(*(float *)(iVar4 + 0x14) + view_offset_x + DAT_10017504,*(undefined4 *)(iVar4 + 0x18));
  scale(view_offset_x,view_offset_x);
  uVar1 = *(uint *)(iVar2 + 0x28);
  if ((int)(uVar1 << 3) < 0) {
    uVar3 = *(undefined4 *)((&dcolorBoxes)[uVar1 >> 0x1d] + 0x10);
  }
  else {
    uVar3 = *(undefined4 *)(&dcolorBoxes)[uVar1 >> 0x1d];
  }
  cpack(uVar3);
  bgntmesh();
  v2f(&DAT_10006f10);
  v2f(&DAT_10006f18);
  v2f(&DAT_10006f20);
  endtmesh();
  popmatrix();
  sStackX_6 = (short)param_2;
  loadname((int)sStackX_6);
  pushmatrix();
  translate(*(float *)(iVar2 + 0x14) - (view_offset_x + DAT_10017504),*(undefined4 *)(iVar2 + 0x18));
  scale(view_offset_x,view_offset_x);
  uVar1 = *(uint *)(iVar4 + 0x28);
  if ((int)(uVar1 << 3) < 0) {
    uVar3 = *(undefined4 *)((&dcolorBoxes)[uVar1 >> 0x1d] + 0x10);
  }
  else {
    uVar3 = *(undefined4 *)(&dcolorBoxes)[uVar1 >> 0x1d];
  }
  cpack(uVar3);
  bgntmesh();
  v2f(&DAT_10006f28);
  v2f(&DAT_10006f30);
  v2f(&DAT_10006f38);
  endtmesh();
  popmatrix();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
