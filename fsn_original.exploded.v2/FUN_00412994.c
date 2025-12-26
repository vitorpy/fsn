/**
 * FUN_00412994
 *
 * Extracted from fsn.c lines 53108-53159
 * Ghidra address: 0x00412994
 * Category: Other
 */

void FUN_00412994(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int unaff_gp;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  ulonglong in_f8;
  uint uVar6;
  undefined8 in_f16;
  undefined4 uVar7;
  undefined8 in_f18;
  double dVar8;
  undefined4 in_f21;
  undefined8 unaff_f22;
  double dVar9;
  
  uVar7 = (undefined4)((ulonglong)in_f18 >> 0x20);
  uVar6 = (uint)((ulonglong)in_f16 >> 0x20);
  dVar9 = (double)CONCAT44((int)((ulonglong)unaff_f22 >> 0x20),param_4) +
          (double)param_1->height /* was: *(float *)(param_1 + 0x3c) */ / (double)(in_f8 & 0xffffffff00000000);
  uVar3 = (*(code *)(*(int *)(unaff_gp + -0x7fe8) /* -> FUN_00410000 */ + 0x18b0))();
  param_1->_field_24 /* was: *(undefined4 *)(param_1 + 0x24) */ = uVar3;
  param_1->pos_y /* was: *(float *)(param_1 + 0x38) */ = (float)dVar9;
  iVar1 = fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */;
  param_1->scale /* was: *(float *)(param_1 + 0x58) */ = (float)(double)CONCAT44(uVar7,param_6);
  param_1->_field_40 /* was: *(undefined4 *)(param_1 + 0x40) */ = 0;
  dVar9 = (double)param_1->height /* was: *(float *)(param_1 + 0x3c) */ / (double)((ulonglong)uVar6 << 0x20) + dVar9;
  dVar8 = (double)(float)(dVar9 + (double)*(float *)(iVar1 + 0x7c));
  fVar4 = (float)/* TODO: GP:-0x7b64 */ (**(code **)(unaff_gp + -0x7b64) /* -> EXTERNAL_0x0f898750 */)
                           (*(undefined4 *)(iVar1 + 0x104),
                            (float)(dVar8 / (double)*(float *)(iVar1 + 0x108)));
  iVar1 = 0;
  iVar2 = 0;
  if (0 < param_1->child_count /* was: *(int *)(param_1 + 0x14) */) {
    do {
      fVar5 = (float)(**(code **)(unaff_gp + -0x7a6c) /* -> FUN_00412994 */)
                               (*(undefined4 *)(param_1->child_array /* was: *(int *)(param_1 + 0x18) */ + iVar2),param_2,in_f21,
                                SUB84(dVar8,0),param_3,
                                SUB84((double)(float)((double)((ulonglong)dVar9 & 0xffffffff00000000
                                                              ) / (double)fVar4),0)) /* =FUN_00412994 */;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
      param_1->_field_40 /* was: *(float *)(param_1 + 0x40) */ = param_1->_field_40 /* was: *(float *)(param_1 + 0x40) */ + fVar5;
    } while (iVar1 < param_1->child_count /* was: *(int *)(param_1 + 0x14) */);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00412994):
     * Function: FUN_00412994
     *
     * Looking at this assembly:
     * 1. **What it does**: Computes a scaled offset value: `temp = (base + global_offset) * node->scale_factor`. If `node->current_value < temp`, updates `node->current_value = temp`. Then restores registers and returns.
     * 2. **C pseudocode**:
     * ```c
     * // s2 = node pointer, gp-30172 = global config struct
     * float scale = node->scale_factor;        // offset 0x58 (88)
     * float global_off = config->offset_val;   // offset 0x78 (120)
     * float base = /* $f2 from earlier calc */;
     * float temp = (base + global_off) * scale;
     * float current = node->field_0x40;        // offset 0x40 (64)
     * node->field_0x44 = current;              // copy to offset 0x44 (68)
     * if (current < temp) {
     * node->field_0x44 = temp;
     * }
     * return node->field_0x44;  // return value in $f0
     * ```
     * The structure offsets: 0x40=current_pos, 0x44=target_pos, 0x58=scale_factor. This appears to be animation/interpolation logic clamping a position value to a minimum threshold based on scale.
     */
halt_baddata();
}
