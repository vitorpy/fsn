/**
 * FUN_00434324
 *
 * Extracted from fsn.c lines 72669-72870
 * Ghidra address: 0x00434324
 * Category: Other
 */

void FUN_00434324(int *param_1,undefined4 param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int unaff_gp;
  undefined4 *local_cc;
  undefined4 *local_c0;
  undefined1 auStack_b8 [48];
  int local_88;
  undefined1 auStack_30 [4];
  int local_2c;
  undefined1 auStack_28 [24];
  int local_10;
  int local_c;
  
  iVar11 = 0;
  iVar12 = 0;
  iVar3 = /* TODO: GP:-0x7e34 */ (**(code **)(unaff_gp + -0x7e34) /* -> EXTERNAL_0x0facad64 */)(param_2,0);
  if (iVar3 != -1) {
    /* TODO: GP:-0x7b58 */ (**(code **)(unaff_gp + -0x7b58) /* -> EXTERNAL_0x0fac87b0 */)(iVar3,auStack_b8);
    if (0xc < local_88) {
      /* TODO: GP:-0x7e14 */ (**(code **)(unaff_gp + -0x7e14) /* -> EXTERNAL_0x0fac2404 */)(iVar3,auStack_30,0xc);
      iVar4 = /* TODO: GP:-0x7b50 */ (**(code **)(unaff_gp + -0x7b50) /* -> EXTERNAL_0x0fac4e38 */)(auStack_30,*(undefined4 *)(unaff_gp + -0x7620) /* -> magic1 */,4);
      if (((iVar4 == 0) &&
          (iVar4 = /* TODO: GP:-0x7b50 */ (**(code **)(unaff_gp + -0x7b50) /* -> EXTERNAL_0x0fac4e38 */)
                             (auStack_28,*(undefined4 *)(unaff_gp + -0x7618) /* -> magic3 */,4), iVar4 == 0)) &&
         (local_2c == *magic2 /* was: *(int **)(unaff_gp + -0x761c) */ /* -> magic2 */)) {
        iVar4 = local_88 + -0xc;
        piVar5 = (int *)/* TODO: GP:-0x7b5c */ (**(code **)(unaff_gp + -0x7b5c) /* -> EXTERNAL_0x0f8b5990 */)(iVar4);
        if (piVar5 == (int *)0x0) {
          /* TODO: GP:-0x7da4 */ (**(code **)(unaff_gp + -0x7da4) /* -> EXTERNAL_0x0facb588 */)(iVar3);
        }
        else {
          iVar6 = /* TODO: GP:-0x7e14 */ (**(code **)(unaff_gp + -0x7e14) /* -> EXTERNAL_0x0fac2404 */)(iVar3,piVar5,iVar4);
          if (iVar4 == iVar6) {
            puVar7 = (undefined4 *)/* TODO: GP:-0x7b5c */ (**(code **)(unaff_gp + -0x7b5c) /* -> EXTERNAL_0x0f8b5990 */)(8);
            iVar3 = param_1[4];
            piVar8 = (int *)((int)piVar5 + iVar4);
            *puVar7 = piVar5;
            puVar7[1] = iVar3;
            param_1[4] = (int)puVar7;
            for (; piVar5 < piVar8; piVar5 = (int *)((int)piVar5 + (local_10 + 3U & 0xfffffffc) + 8)
                ) {
              local_c = *piVar5;
              local_10 = piVar5[1];
              if ((local_c < 4) || (0x20 < local_c)) {
                if (local_c == 1) {
                  iVar11 = (**(code **)(unaff_gp + -0x778c) /* -> FUN_00435444 */)(0) /* =FUN_00435444 */;
                  if (*param_1 == 0) {
                    param_1[1] = iVar11;
                    *param_1 = iVar11;
                  }
                  else {
                    *(int *)(param_1[1] + 0x68) = iVar11;
                    param_1[1] = iVar11;
                  }
                  *(int **)param_1[1] = piVar5 + 2;
                }
                else if (local_c == 2) {
                  *(int **)(iVar11 + 8) = piVar5 + 2;
                  iVar11->file_count /* was: *(int *)(iVar11 + 0xc) */ = local_10;
                }
                else if (local_c == 3) {
                  iVar11->_field_1c /* was: *(int **)(iVar11 + 0x1c) */ = piVar5 + 2;
                  iVar11->_field_20 /* was: *(int *)(iVar11 + 0x20) */ = local_10;
                }
                else if (local_c == 0x21) {
                  /* TODO: GP:-0x7e64 */ (**(code **)(unaff_gp + -0x7e64) /* -> EXTERNAL_0x0fac09fc */)(piVar5 + 2,iVar11 + 0x38,4);
                  /* TODO: GP:-0x7e64 */ (**(code **)(unaff_gp + -0x7e64) /* -> EXTERNAL_0x0fac09fc */)(piVar5 + 3,iVar11 + 0x3c,4);
                  /* TODO: GP:-0x7e64 */ (**(code **)(unaff_gp + -0x7e64) /* -> EXTERNAL_0x0fac09fc */)(piVar5 + 4,iVar11 + 0x40,4);
                  /* TODO: GP:-0x7e64 */ (**(code **)(unaff_gp + -0x7e64) /* -> EXTERNAL_0x0fac09fc */)(piVar5 + 5,iVar11 + 0x44,4);
                }
                else if (local_c == 0x22) {
                  /* TODO: GP:-0x7e64 */ (**(code **)(unaff_gp + -0x7e64) /* -> EXTERNAL_0x0fac09fc */)(piVar5 + 2,iVar11 + 0x48,4);
                  /* TODO: GP:-0x7e64 */ (**(code **)(unaff_gp + -0x7e64) /* -> EXTERNAL_0x0fac09fc */)(piVar5 + 3,iVar11 + 0x4c,4);
                }
                else if (local_c == 0x23) {
                  *(int **)(iVar11 + 4) = piVar5 + 2;
                }
                else if (local_c == 0x24) {
                  iVar11->child_array /* was: *(int **)(iVar11 + 0x18) */ = piVar5 + 2;
                }
                else if (local_c == 0x25) {
                  iVar11->file_array /* was: *(int **)(iVar11 + 0x10) */ = piVar5 + 2;
                  iVar11->child_count /* was: *(int *)(iVar11 + 0x14) */ = local_10;
                }
                else if (local_c == 0x26) {
                  iVar11->_field_24 /* was: *(int **)(iVar11 + 0x24) */ = piVar5 + 2;
                  iVar11->child_center /* was: *(int *)(iVar11 + 0x28) */ = local_10;
                }
                else if (local_c == 0x2b) {
                  /* TODO: GP:-0x7e64 */ (**(code **)(unaff_gp + -0x7e64) /* -> EXTERNAL_0x0fac09fc */)(piVar5 + 2,iVar11 + 100,4);
                }
                else if (local_c == 0x2c) {
                  iVar3 = local_10 + 8;
                  local_c = 0x2c;
                  piVar10 = piVar5 + 2;
                  while (piVar10 < (int *)((int)piVar5 + iVar3)) {
                    if (iVar11->child_left /* was: *(int *)(iVar11 + 0x2c) */ == 0) {
                      puVar7 = (undefined4 *)/* TODO: GP:-0x7b5c */ (**(code **)(unaff_gp + -0x7b5c) /* -> EXTERNAL_0x0f8b5990 */)(0xc);
                      iVar11->child_left /* was: *(undefined4 **)(iVar11 + 0x2c) */ = puVar7;
                    }
                    else {
                      puVar7 = (undefined4 *)/* TODO: GP:-0x7b5c */ (**(code **)(unaff_gp + -0x7b5c) /* -> EXTERNAL_0x0f8b5990 */)(0xc);
                      local_c0[2] = puVar7;
                    }
                    puVar7[2] = 0;
                    *puVar7 = piVar10;
                    cVar2 = *(char *)piVar10;
                    while (cVar2 != '\0') {
                      pcVar9 = (char *)((int)piVar10 + 1);
                      piVar10 = (int *)((int)piVar10 + 1);
                      cVar2 = *pcVar9;
                    }
                    pcVar9 = (char *)((int)piVar10 + 1);
                    puVar7[1] = pcVar9;
                    cVar2 = *pcVar9;
                    while (cVar2 != '\0') {
                      pcVar1 = pcVar9 + 1;
                      pcVar9 = pcVar9 + 1;
                      cVar2 = *pcVar1;
                    }
                    local_c0 = puVar7;
                    piVar10 = (int *)(pcVar9 + 1);
                  }
                }
                else if (local_c == 0x2d) {
                  iVar3 = local_10 + 8;
                  local_c = 0x2d;
                  for (piVar10 = piVar5 + 2; piVar10 < (int *)((int)piVar5 + iVar3);
                      piVar10 = (int *)((int)piVar10 + 1)) {
                    if (iVar11->child_right /* was: *(int *)(iVar11 + 0x30) */ == 0) {
                      puVar7 = (undefined4 *)/* TODO: GP:-0x7b5c */ (**(code **)(unaff_gp + -0x7b5c) /* -> EXTERNAL_0x0f8b5990 */)(8);
                      iVar11->child_right /* was: *(undefined4 **)(iVar11 + 0x30) */ = puVar7;
                    }
                    else {
                      puVar7 = (undefined4 *)/* TODO: GP:-0x7b5c */ (**(code **)(unaff_gp + -0x7b5c) /* -> EXTERNAL_0x0f8b5990 */)(8);
                      local_cc[1] = puVar7;
                    }
                    puVar7[1] = 0;
                    *puVar7 = piVar10;
                    cVar2 = *(char *)piVar10;
                    while (cVar2 != '\0') {
                      pcVar9 = (char *)((int)piVar10 + 1);
                      piVar10 = (int *)((int)piVar10 + 1);
                      cVar2 = *pcVar9;
                    }
                    local_cc = puVar7;
                  }
                }
                else if (local_c == 0x2e) {
                  iVar11->pos_x /* was: *(undefined4 *)(iVar11 + 0x34) */ = 1;
                }
                else if (local_c == 0x27) {
                  iVar12 = (**(code **)(unaff_gp + -0x7788) /* -> FUN_0043551c */)(0) /* =FUN_0043551c */;
                  if (param_1[2] == 0) {
                    param_1[3] = iVar12;
                    param_1[2] = iVar12;
                  }
                  else {
                    *(int *)(param_1[3] + 0x10) = iVar12;
                    param_1[3] = iVar12;
                  }
                  *(int **)param_1[3] = piVar5 + 2;
                }
                else if (local_c == 0x28) {
                  *(int **)(iVar12 + 4) = piVar5 + 2;
                }
                else if (local_c == 0x29) {
                  /* TODO: GP:-0x7e64 */ (**(code **)(unaff_gp + -0x7e64) /* -> EXTERNAL_0x0fac09fc */)(piVar5 + 2,iVar12 + 8,4);
                }
                else if (local_c == 0x2a) {
                  iVar12->file_count /* was: *(int **)(iVar12 + 0xc) */ = piVar5 + 2;
                }
              }
              else {
                *(int **)(iVar11 + local_c * 4 + 0x40) = piVar5 + 2;
              }
            }
          }
          else {
            /* TODO: GP:-0x7b34 */ (**(code **)(unaff_gp + -0x7b34) /* -> EXTERNAL_0x0f8b5a50 */)(piVar5);
            /* TODO: GP:-0x7da4 */ (**(code **)(unaff_gp + -0x7da4) /* -> EXTERNAL_0x0facb588 */)(iVar3);
          }
        }
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00434324):
     * Function: FUN_00434324
     *
     * ## Assembly Analysis
     * **What it does:**
     * 1. After a function call (jalr t9), restores GP and branches to 43498c with v0=1 (success return). The 434988 instruction (sw t2,12(s7)) is a branch delay slot from elsewhere, likely dead code.
     * 2. At 43498c: Aligns a length value from stack to 4-byte boundary ((len+3) & ~3), advances buffer pointer s3 by aligned_len+8, checks if s3 < buffer_end (t6), loops back if more data.
     * 3. On loop exit: stores s5/s4 to stack slots, returns 0 (failure/end condition), restores all callee-saved registers, deallocates 288-byte stack frame.
     * **C pseudocode:**
     * ```c
     * // After previous call returns...
     * // Branch target from success path: return 1
     * // (unreachable: s7->field_0c = t2_value;)
     * // Loop continuation at 43498c:
     * {
     * int raw_len = stack[0x110/4];      // sp+272
     * int aligned_len = (raw_len + 3) & ~3;  // 4-byte align
     * ptr += aligned_len + 8;            // s3 = buffer cursor
     * if (ptr < buffer_end) {            // s3 < sp+76
     * goto loop_top;                 // back to 4344f4
     * }
     * }
     * // Loop exit - ran out of buffer
     * stack[0x54/4] = s5;   // sp+84
     * stack[0x60/4] = s4;   // sp+96
     * return 0;             // end of data or error
     * ```
     * **Key insight:** This is the tail of a bytecode/rule parsing loop in `LoadFileTypingRules`. It processes variable-length records: reads a length, aligns to 4 bytes, advances by aligned_len+8 (likely 8-byte header + data), and loops until buffer exhausted. The `-4` mask (0xfffffffc) for alignment is a standard (n+3)&~3 rounding-up pattern.
     */
halt_baddata();
}
