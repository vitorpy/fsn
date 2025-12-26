/**
 * SG_defaultDepthAndTypeResources
 *
 * Extracted from fsn.c lines 71453-71733
 * Category: Other
 */

void SG_defaultDepthAndTypeResources
               (int param_1,int param_2,uint *param_3,byte *param_4,uint *param_5,uint *param_6,
               int *param_7,int *param_8,int *param_9)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  char *pcVar14;
  byte *local_resc;
  char local_20;
  uint local_14 [4];
  uint local_4;
  
  local_14[2] = 0xffffffff;
  local_14[1] = 0;
  local_14[0] = 0;
  local_20 = '\0';
  bVar4 = false;
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 0x84);
    }
    bVar1 = param_3 == (uint *)0x0;
    if (bVar1) {
      param_3 = local_14 + 2;
    }
    bVar2 = param_4 == (byte *)0x0;
    if (bVar2) {
      param_4 = &DAT_10013e50;
    }
    bVar3 = param_6 == (uint *)0x0;
    if (bVar3) {
      param_6 = local_14 + 1;
    }
    if (param_5 == (uint *)0x0) {
      param_5 = local_14;
    }
    if (param_7 == (int *)0x0) {
      param_9 = (int *)0x0;
      param_8 = (int *)0x0;
    }
    iVar5 = FUN_004325fc();
    if ((((bVar2) || (iVar5->_field_24 /* was: *(uint *)(iVar5 + 0x24) */ == (uint)*param_4)) &&
        ((bVar1 || (*param_3 == *(uint *)(iVar5 + iVar5->_field_24 /* was: *(int *)(iVar5 + 0x24) */ * 4 + 0x3c))))) &&
       ((bVar3 || (*param_6 == *(uint *)(iVar5 + iVar5->_field_24 /* was: *(int *)(iVar5 + 0x24) */ * 4 + 0x50))))) {
      param_2 = param_2 * 0x50;
      *param_6 = *(uint *)(*(int *)(param_1 + 0x8c) + param_2 + 0x24);
      if (param_5 != (uint *)0x0) {
        *param_5 = 2;
      }
      if (param_9 != (int *)0x0) {
        *param_9 = *(int *)(*(int *)(param_1 + 0x8c) + param_2 + 8);
      }
      if (param_7 != (int *)0x0) {
        *param_7 = *(int *)(*(int *)(param_1 + 0x8c) + param_2 + 0x28);
      }
      if (param_8 != (int *)0x0) {
        *param_8 = *(int *)(*(int *)(param_1 + 0x8c) + param_2 + 0x30);
      }
    }
    else {
      uVar6 = (uint)*param_4;
      if ((uVar6 != 0) && (pbVar13 = param_4, uVar6 != 0)) {
        do {
          iVar7 = isalpha(uVar6);
          if (iVar7 == 0) {
            FUN_00432a34(param_1,_imsgs._424_4_,param_4,*pbVar13,&DAT_10013e54,&DAT_10013e58);
            *pbVar13 = 0;
            FUN_00432a34(param_1,_imsgs._428_4_,param_4,&DAT_10013e5c,&DAT_10013e60,&DAT_10013e64);
            uVar6 = (uint)*param_4;
            goto LAB_00432e34;
          }
          uVar6 = (uint)pbVar13[1];
          pbVar13 = pbVar13 + 1;
        } while (uVar6 != 0);
        uVar6 = (uint)*param_4;
      }
LAB_00432e34:
      local_resc = param_4;
      if (uVar6 == 0) {
        local_resc = (byte *)0x10013e68;
      }
      iVar7 = strcasecmp("DEFAULT",(char *)local_resc);
      if (iVar7 == 0) {
        pcVar14 = *(char **)(iVar5 + iVar5->_field_24 /* was: *(uint *)(iVar5 + 0x24) */ * 4 + 100);
        *param_5 = iVar5->_field_24 /* was: *(uint *)(iVar5 + 0x24) */;
      }
      else {
        iVar7 = strcasecmp("UNDERLAY",(char *)local_resc);
        if (iVar7 == 0) {
          pcVar14 = *(char **)(iVar5 + iVar5->_field_24 /* was: *(uint *)(iVar5 + 0x24) */ * 4 + 100);
          *param_5 = iVar5->_field_24 /* was: *(uint *)(iVar5 + 0x24) */;
          bVar4 = true;
          FUN_00432a34(param_1,_imsgs._432_4_,&DAT_10013e84,&DAT_10013e88,&DAT_10013e8c,
                       &DAT_10013e90);
        }
        else {
          iVar7 = strcasecmp("NORMAL",(char *)local_resc);
          pcVar14 = (char *)local_resc;
          if (iVar7 == 0) {
            *param_5 = 2;
          }
          else {
            iVar7 = strcasecmp("OVERLAY",(char *)local_resc);
            if (iVar7 == 0) {
              *param_5 = 3;
            }
            else {
              iVar7 = strcasecmp("POPUP",(char *)local_resc);
              if (iVar7 == 0) {
                *param_5 = 4;
              }
              else {
                pcVar14 = *(char **)(iVar5 + iVar5->_field_24 /* was: *(uint *)(iVar5 + 0x24) */ * 4 + 100);
                *param_5 = iVar5->_field_24 /* was: *(uint *)(iVar5 + 0x24) */;
                bVar4 = true;
              }
            }
          }
        }
      }
      iVar7 = 0;
      if ((bVar1) && (iVar5->_field_24 /* was: *(uint *)(iVar5 + 0x24) */ == *param_5)) {
        *param_3 = *(uint *)(iVar5 + iVar5->_field_24 /* was: *(uint *)(iVar5 + 0x24) */ * 4 + 0x3c);
      }
      iVar12 = iVar5->child_array /* was: *(int *)(iVar5 + 0x18) */;
      iVar11 = 0;
      iVar9 = 0;
      if (0 < iVar12) {
        puVar10 = iVar5->_field_20 /* was: *(uint **)(iVar5 + 0x20) */;
        do {
          uVar6 = *puVar10;
          if (uVar6 == *param_5) {
            if (((int)*param_3 < 0) ||
               (*(uint *)(iVar5->child_count /* was: *(int *)(iVar5 + 0x14) */ + iVar9 * 0x28 + 0x10) == *param_3)) break;
            iVar11 = iVar11 + 1;
          }
          iVar9 = iVar9 + 1;
          if ((((uVar6 != 1) && (uVar6 != 2)) && (uVar6 != 3)) && (uVar6 == 4)) {
            iVar7 = iVar7 + 1;
          }
          puVar10 = puVar10 + 1;
        } while (iVar9 < iVar12);
      }
      if (iVar9 == iVar12) {
        if (iVar11 != 0) {
              /*
     * BADDATA ANALYSIS (from binary @ 0x00432b04):
     * Function: SG_defaultDepthAndTypeResources
     *
     * Looking at this assembly:
     * **What it does:**
     * 1. Standard MIPS function prologue (save ra, gp, s0-s2, allocate 144 bytes stack)
     * 2. Initialize local variables: sp+132=-1, sp+128/124/120/112/111=0
     * 3. Early return -2 if a0 (first arg) is NULL; if a1 is NULL, load a1 from a0->offset_132
     * **C pseudocode:**
     * ```c
     * int SG_defaultDepthAndTypeResources(void *widget, int *depth, int *type, ...) {
     * int local_84 = -1;      // sp+132
     * int local_80 = 0;       // sp+128
     * int local_7c = 0;       // sp+124
     * int local_78 = 0;       // sp+120
     * char local_70 = 0;      // sp+112
     * char local_6f = 0;      // sp+111
     * if (widget == NULL) {
     * return -2;
     * }
     * // arg from sp+164 is 5th parameter (after a0-a3)
     * // t8 = &local_80, t6 = &local_7c (pointers to locals for output)
     * if (depth == NULL) {
     * depth = (int *)((char *)widget + 132);  // widget->defaultDepth
     * }
     * if (type == NULL) {
     * v0 = 1;  // continues...
     * }
     * // ... rest of function
     * }
     * ```
     * This appears to be an Xt/Motif resource query function - gets default visual depth and type from a widget, with NULL parameters meaning "use widget's stored defaults".
     */
halt_baddata();
        }
        uVar6 = *param_5;
        if (uVar6 == 1) {
          *param_5 = 2;
          bVar4 = true;
          pcVar14 = "NORMAL";
        }
        else if (uVar6 == 2) {
          pcVar14 = *(char **)(iVar5 + iVar5->_field_24 /* was: *(uint *)(iVar5 + 0x24) */ * 4 + 100);
          *param_5 = iVar5->_field_24 /* was: *(uint *)(iVar5 + 0x24) */;
          bVar4 = true;
        }
        else if (uVar6 == 3) {
          if (iVar7 == 0) {
            *param_5 = 2;
            bVar4 = true;
            pcVar14 = "NORMAL";
          }
          else {
            *param_5 = 4;
            pcVar14 = &UNK_10013eb4;
          }
        }
        else {
          bVar4 = true;
          if (uVar6 == 4) {
            *param_5 = 2;
            pcVar14 = "NORMAL";
          }
          else {
            pcVar14 = *(char **)(iVar5 + iVar5->_field_24 /* was: *(uint *)(iVar5 + 0x24) */ * 4 + 100);
            *param_5 = iVar5->_field_24 /* was: *(uint *)(iVar5 + 0x24) */;
          }
        }
      }
      uVar6 = *param_5;
      do {
        puVar10 = param_3;
        if (bVar1) {
          puVar10 = (uint *)0x0;
        }
        local_4 = FUN_00431788(param_1,param_2,puVar10,uVar6,*param_6);
        if ((local_4 == 0) && (uVar6 < 5)) {
                    // WARNING: Bad instruction - Truncating control flow here
              /*
     * BADDATA ANALYSIS (from binary @ 0x00432b04):
     * Function: SG_defaultDepthAndTypeResources
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls a function via GP-relative indirect call (likely strcmp or string lookup at gp-31484). If result is zero, stores 4 to output and sets flags. Otherwise, loads an array element at offset 0x64 from base+index*4, stores the index, and sets a byte flag.
     * 2. **C pseudocode:**
     * ```c
     * // GP-31484 is likely strcmp or XrmStringToQuark
     * result = func_gp_31484(string_0x3ea4, param_156);
     * if (result == 0) {
     * *output_ptr = 4;      // default depth type
     * flag_ra = 3;
     * flag_t5 = 4;
     * } else {
     * index = t2->field_0x24;
     * s2 = t2->array_0x64[index];  // array at offset 0x64, indexed by field at 0x24
     * *output_ptr = index;
     * local_111 = 1;        // byte flag at sp+111
     * flag_ra = 3;
     * flag_t5 = 4;
     * }
     * if (local_114 == 0) {    // byte at sp+114
     * a3 = 0;
     * // continues with t2->field_0x24 access...
     * }
     * ```
     * The pattern `t2 + (field * 4) + 0x64` suggests an array of 4-byte elements (likely pointers or ints) at offset 0x64 in a structure, indexed by a count/index field at offset 0x24. This is typical X resource lookup - checking a string against known values and returning corresponding depth/type enum.
     */
halt_baddata();
        }
      } while (local_4 == 0);
      if (((((!bVar3) && (local_4 != *param_6)) && (*param_6 != 0)) ||
          (((!bVar2 && (uVar6 != *param_5)) || (bVar4)))) &&
         (((!bVar3 || (*param_5 != 3)) || (uVar6 != 4)))) {
        FUN_00432a34(param_1,_imsgs._436_4_,local_resc,*param_6,&DAT_10013efc,&DAT_10013f00);
        FUN_00432a34(param_1,_imsgs._444_4_,pcVar14,local_4,&DAT_10013f04,&DAT_10013f08);
      }
      *param_6 = local_4;
      if (param_5 != (uint *)0x0) {
        *param_5 = uVar6;
      }
      puVar10 = param_3;
      if (bVar1) {
        puVar10 = (uint *)0x0;
      }
      uVar8 = FUN_00431630(param_1,param_2,uVar6,local_4,puVar10);
      *param_3 = uVar8;
      if (param_7 != (int *)0x0) {
        iVar5 = FUN_00432370(param_1,param_2,local_4,param_3,uVar6);
        *param_7 = iVar5;
        if (-1 < *param_7) {
          iVar5 = *(int *)(param_1 + 0x8c) + param_2 * 0x50;
          if (*param_7 == iVar5->child_center /* was: *(int *)(iVar5 + 0x28) */) {
            if (param_8 != (int *)0x0) {
              *param_8 = iVar5->child_right /* was: *(int *)(iVar5 + 0x30) */;
            }
          }
          else if (param_8 != (int *)0x0) {
            iVar5 = FUN_00431354(param_1,param_2);
            *param_8 = iVar5;
          }
          if (param_9 != (int *)0x0) {
            iVar5 = XCreatePixmap(param_1,*(undefined4 *)
                                           (*(int *)(param_1 + 0x8c) + param_2 * 0x50 + 8),1,1,
                                  local_4);
            *param_9 = iVar5;
          }
        }
      }
      if ((param_7 != (int *)0x0) && (*param_7 < 1)) {
        FUN_00432a34(param_1,_imsgs._448_4_,&DAT_10013f0c,&DAT_10013f10,&DAT_10013f14,&DAT_10013f18)
        ;
        local_20 = '\x01';
      }
      if ((param_8 != (int *)0x0) && (*param_8 < 1)) {
        FUN_00432a34(param_1,_imsgs._452_4_,&DAT_10013f1c,&DAT_10013f20,&DAT_10013f24,&DAT_10013f28)
        ;
        local_20 = local_20 + '\x01';
      }
      if ((param_9 != (int *)0x0) && (*param_9 < 1)) {
        FUN_00432a34(param_1,_imsgs._456_4_,&DAT_10013f2c,&DAT_10013f30,&DAT_10013f34,&DAT_10013f38)
        ;
        local_20 = local_20 + '\x01';
      }
      if (local_20 != '\0') {
        param_2 = param_2 * 0x50;
        FUN_00432a34(param_1,_imsgs._460_4_,&DAT_10013f3c,&DAT_10013f40,&DAT_10013f44,&DAT_10013f48)
        ;
        *param_6 = *(uint *)(*(int *)(param_1 + 0x8c) + param_2 + 0x24);
        if (param_5 != (uint *)0x0) {
          *param_5 = 2;
        }
        if (param_9 != (int *)0x0) {
          *param_9 = *(int *)(*(int *)(param_1 + 0x8c) + param_2 + 8);
        }
        if (param_7 != (int *)0x0) {
          *param_7 = *(int *)(*(int *)(param_1 + 0x8c) + param_2 + 0x28);
        }
        if (param_8 != (int *)0x0) {
          *param_8 = *(int *)(*(int *)(param_1 + 0x8c) + param_2 + 0x30);
        }
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00432b04):
     * Function: SG_defaultDepthAndTypeResources
     *
     * Looking at this assembly:
     * 1. **What it does:** Conditional check on two byte flags at sp+113 and sp+111. If sp+111 is non-zero and additional conditions pass (comparing pointers), calls a function via GP-30104 offset (likely XtSetValues or similar Xt function) with widget, resource name, and value arguments.
     * 2. **C pseudocode:**
     * ```c
     * unsigned char flag113 = *(unsigned char*)(sp + 113);
     * unsigned char flag111 = *(unsigned char*)(sp + 111);
     * if (flag111 != 0) {
     * if (flag113 == 0 || *(void**)(sp+160) != ra || s1 != t5) {
     * Widget w = *(Widget*)(sp + 144);
     * void *val = *(void**)(sp + 156);
     * void *arg7 = **(void***)(sp + 164);
     * // XtVaSetValues(w, resourceName, val, arg7, ...) or similar
     * // GP offsets: -30104=app resources, -32736=func ptr, -32676=XtN string constants
     * (*gp_func)(w, app->resource_436, val, arg7, XtNsomething, XtNsomethingElse);
     * }
     * }
     * ```
     * The GP offsets suggest this is setting X toolkit resources - the pattern of loading string constants (addiu with offsets like 10804, 16124, 16128) and a function pointer is classic XtVaSetValues argument setup.
     */
halt_baddata();
}
