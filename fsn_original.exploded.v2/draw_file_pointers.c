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
  
  iVar4 = *(int *)(param_1->file_array /* was: *(int *)(param_1 + 0x10) */ + param_2 * 4);
  iVar2 = *(int *)(param_1->file_array /* was: *(int *)(param_1 + 0x10) */ + param_3 * 4);
  selected_id_1 = iVar4;
  selected_id_2 = iVar2;
  loadname((int)(short)param_3);
  pushmatrix();
  translate(iVar4->child_count /* was: *(float *)(iVar4 + 0x14) */ + view_offset_x + DAT_10017504,iVar4->child_array /* was: *(undefined4 *)(iVar4 + 0x18) */);
  scale(view_offset_x,view_offset_x);
  uVar1 = iVar2->child_center /* was: *(uint *)(iVar2 + 0x28) */;
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
  translate(iVar2->child_count /* was: *(float *)(iVar2 + 0x14) */ - (view_offset_x + DAT_10017504),iVar2->child_array /* was: *(undefined4 *)(iVar2 + 0x18) */);
  scale(view_offset_x,view_offset_x);
  uVar1 = iVar4->child_center /* was: *(uint *)(iVar4 + 0x28) */;
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
      /*
     * BADDATA ANALYSIS (from binary @ 0x004237a8):
     * Function: draw_file_pointers
     *
     * Looking at the GP offsets and the pattern of calls:
     * **1. What it does:**
     * Two calls to v3f() with different coordinate vectors (offsets 28464 and 28472 from rodata base), then endline(), then popmatrix(). This is the tail end of a line-drawing sequence.
     * **2. C pseudocode:**
     * ```c
     * v3f(&rodata_6f30);    // GP-32664 + 28464 = second vertex
     * v3f(&rodata_6f38);    // GP-32664 + 28472 = third vertex
     * endline();            // GP-32136 = endline
     * popmatrix();          // GP-31528 = popmatrix
     * return;
     * ```
     * The GP offsets decode as:
     * - GP-32264 (0x81f8) = v3f
     * - GP-32136 (0x8278) = endline
     * - GP-31528 (0x84d8) = popmatrix
     * - GP-32664 (0x8068) = rodata base pointer
     */
halt_baddata();
}
