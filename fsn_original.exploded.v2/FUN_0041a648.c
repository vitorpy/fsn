/**
 * FUN_0041a648
 *
 * Extracted from fsn.c lines 57215-57279
 * Ghidra address: 0x0041a648
 * Category: Other
 */

void FUN_0041a648(float *param_1,float *param_2,float *param_3,undefined2 *param_4,
                 undefined2 *param_5,int *param_6,undefined1 *param_7,undefined1 *param_8)

{
  int iVar1;
  int *piVar2;
  int unaff_gp;
  float fVar3;
  undefined1 auStack_c [4];
  int local_8;
  int local_4;
  
  *param_5 = 0;
  *param_7 = 0;
  *param_8 = 0;
  (**(code **)(unaff_gp + -0x79f8) /* -> FUN_0041a358 */)(&local_4,&local_8,auStack_c) /* =FUN_0041a358 */;
  if (local_4 == 0) {
    *param_7 = 1;
    *param_6 = 0;
  }
  else if (local_8 == 0) {
    if (local_4 == *(int *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0x3c)) {
      (**(code **)(unaff_gp + -0x79c0) /* -> FUN_0041d920 */)() /* =FUN_0041d920 */;
      iVar1 = fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */;
      piVar2 = curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
      *param_1 = iVar1->child_left /* was: *(float *)(iVar1 + 0x2c) */;
      *param_2 = iVar1->child_right /* was: *(float *)(iVar1 + 0x30) */;
      *param_3 = iVar1->pos_x /* was: *(float *)(iVar1 + 0x34) */;
      *param_4 = (short)iVar1->pos_y /* was: *(undefined4 *)(iVar1 + 0x38) */;
      *param_6 = *(int *)(*piVar2 + 0x3c);
    }
    else {
      *param_7 = 1;
      *param_6 = local_4;
    }
  }
  else if (local_4 == *(int *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0x3c)) {
    (**(code **)(unaff_gp + -0x79bc) /* -> FUN_0041da44 */)(local_8) /* =FUN_0041da44 */;
    piVar2 = curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
    iVar1 = fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */;
    fVar3 = *(float *)(local_8 + 0x14);
    *param_1 = (float)((double)fVar3 -
                      (double)*(float *)(*piVar2 + 0x14) * (double)*(float *)(iVar1 + 0xa0));
    *param_2 = (float)(((double)*(float *)(local_8 + 0x18) +
                       (double)*(float *)(local_4 + 0x3c) /
                       (double)((ulonglong)(double)fVar3 & 0xffffffff00000000)) -
                      (double)*(float *)(*piVar2 + 0x18) * (double)*(float *)(iVar1 + 0xa0));
    if (*(char *)(iVar1 + 5) == '\0') {
      *param_3 = *(float *)(iVar1 + 0x9c) + *(float *)(local_8 + 0x1c);
    }
    else {
      *param_8 = 1;
      *param_3 = *(float *)(iVar1 + 0x90) + *(float *)(iVar1 + 0x80);
    }
    *param_4 = (short)*(undefined4 *)(iVar1 + 0xa4);
    *param_6 = *(int *)(*piVar2 + 0x3c);
    *param_8 = 1;
  }
  else {
    /* TODO: GP:-0x7c08 */ (**(code **)(unaff_gp + -0x7c08) /* -> EXTERNAL_0x0fac7f1c */)
              (*(int *)(unaff_gp + -0x7f68) /* -> EXTERNAL_0x0fb528e4 */ + 0x20,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x5148);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041a648):
     * Function: FUN_0041a648
     *
     * Looking at this assembly snippet from the end of `findzoom_warp`:
     * **1. What it does:**
     * Copies float values from a node structure (at v1) to output parameters passed via stack pointers. Stores X coord (offset 0x30), Y coord (offset 0x34), a short value (offset 0x38), and a zoom/scale value (offset 0x3c). There are three exit paths returning different values.
     * **2. C pseudocode:**
     * ```c
     * // Path 1: Normal success - copy node data to output params
     * *out_x = node->x;           // offset 0x30 -> stack param at sp+0x34
     * *out_y = node->y;           // offset 0x34 -> stack param at sp+0x38
     * *out_type = (short)node->type;  // offset 0x38 -> stack param at sp+0x3c
     * *out_zoom = (*a1)->zoom;    // offset 0x3c of dereferenced a1 -> stack param at sp+0x44
     * goto epilogue;
     * // Path 2: Set flag=1, use saved value
     * node->flag = 1;             // sb 1 at offset 0
     * *out_zoom = saved_zoom;     // from sp+0x2c
     * return 1;
     * // Path 3: Clear flag, zero zoom
     * node->flag = t4;            // sb t4 at offset 0
     * *out_zoom = 0;
     * return 1;
     * epilogue:
     * return v0;  // v0 set earlier in function
     * ```
     * The function signature likely includes output pointer parameters for X, Y, type, and zoom values that get populated from the found node structure.
     */
halt_baddata();
}
