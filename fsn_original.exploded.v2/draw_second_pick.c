/**
 * draw_second_pick
 *
 * Extracted from fsn.c lines 63371-63432
 * Category: Graphics
 */

void draw_second_pick(undefined8 param_1,undefined8 param_2,int param_3)

{
  uint extraout_var;
  undefined4 uVar1;
  uint uVar2;
  double dVar3;
  undefined8 uVar4;
  undefined4 uStack_18;
  float fStack_14;
  undefined4 uStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  uVar1 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (param_3->render_flags /* was: *(int *)(param_3 + 0x74) */ << 3 < 0) {
    loadname(2);
    pushname((int)param_3->name_index /* was: *(short *)(param_3 + 0x5e) */);
    if (param_3->depth_indicator /* was: *(short *)(param_3 + 0x76) */ < 0) {
      dVar3 = (double)maxy * (double)((ulonglong)extraout_var << 0x20);
      FUN_00427a3c(0,dVar3);
      uVar1 = (undefined4)((ulonglong)dVar3 >> 0x20);
    }
    pushmatrix();
    uVar4 = CONCAT44(uVar1,param_3->pos_y /* was: *(undefined4 *)(param_3 + 0x38) */);
    translate(param_3->pos_x /* was: *(undefined4 *)(param_3 + 0x34) */,uVar4);
    uVar1 = (undefined4)((ulonglong)uVar4 >> 0x20);
    scale(param_3->scale /* was: *(undefined4 *)(param_3 + 0x58) */);
    pushmatrix();
    uVar4 = CONCAT44(uVar1,param_3->height /* was: *(undefined4 *)(param_3 + 0x3c) */);
    scale(param_3->height /* was: *(undefined4 *)(param_3 + 0x3c) */,uVar4);
    uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
    FUN_00422284(0,0,0x1f);
    popmatrix();
    translate(0,(ulonglong)uVar2 << 0x20);
    FUN_00423b3c(param_3,1,7,0x1f);
    popname();
    popmatrix();
    if (param_3->child_center /* was: *(int *)(param_3 + 0x28) */ != 0) {
      loadname(1);
      pushname((int)param_3->name_index /* was: *(short *)(param_3 + 0x5e) */);
      fStack_c = *(float *)(param_3->child_center /* was: *(int *)(param_3 + 0x28) */ + 0x34) + param_3->offset_x /* was: *(float *)(param_3 + 0x4c) */;
      uStack_10 = 0xbd4ccccd;
      fStack_8 = (float)((double)*(float *)(param_3->child_center /* was: *(int *)(param_3 + 0x28) */ + 0x38) +
                        (double)param_3->offset_y /* was: *(float *)(param_3 + 0x50) */);
      uStack_18 = param_3->pos_x /* was: *(undefined4 *)(param_3 + 0x34) */;
      fStack_14 = (float)((double)param_3->pos_y /* was: *(float *)(param_3 + 0x38) */ -
                         (double)param_3->height /* was: *(float *)(param_3 + 0x3c) */ /
                         (double)((ulonglong)(double)*(float *)(param_3 + 0x50) & 0xffffffff00000000
                                 ));
      uStack_4 = uStack_10;
      bgnline();
      v3f(&fStack_c);
      v3f(&uStack_18);
      endline();
      popname();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00425ed8):
     * Function: draw_second_pick
     *
     * [Claude timeout after 120s]
     */
halt_baddata();
}
