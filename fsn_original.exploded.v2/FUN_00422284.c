/**
 * FUN_00422284
 *
 * Extracted from fsn.c lines 62146-62351
 * Ghidra address: 0x00422284
 * Category: Other
 */

void FUN_00422284(undefined4 *param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int unaff_gp;
  
  if (param_2 == 4) {
    if (param_1 != (undefined4 *)0x0) {
      /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(*param_1);
    }
    /* TODO: GP:-0x7d54 */ (**(code **)(unaff_gp + -0x7d54) /* -> EXTERNAL_0x0f124d00 */)();
    iVar2 = small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */;
    iVar4 = small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6f40;
    /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar4 + *(int *)(iVar2 + 0x7010) * 0xc);
    /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar4 + *(int *)(iVar2 + 0x7014) * 0xc);
    /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar4 + *(int *)(iVar2 + 0x701c) * 0xc);
    /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar4 + *(int *)(iVar2 + 0x7018) * 0xc);
    /* TODO: GP:-0x7d3c */ (**(code **)(unaff_gp + -0x7d3c) /* -> EXTERNAL_0x0f124ab4 */)();
  }
  else if (param_2 == 3) {
    if (param_1 != (undefined4 *)0x0) {
      /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(*param_1);
    }
    /* TODO: GP:-0x7b7c */ (**(code **)(unaff_gp + -0x7b7c) /* -> EXTERNAL_0x0f1247c0 */)();
    /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x7020);
    /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x702c);
    /* TODO: GP:-0x7b94 */ (**(code **)(unaff_gp + -0x7b94) /* -> EXTERNAL_0x0f124574 */)();
  }
  else if (param_2 == 2) {
    if (param_1 != (undefined4 *)0x0) {
      /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(*param_1);
    }
    /* TODO: GP:-0x7d54 */ (**(code **)(unaff_gp + -0x7d54) /* -> EXTERNAL_0x0f124d00 */)();
    iVar2 = small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */;
    iVar4 = small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6f40;
    /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar4 + *(int *)(iVar2 + 0x7000) * 0xc);
    /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar4 + *(int *)(iVar2 + 0x7004) * 0xc);
    /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar4 + *(int *)(iVar2 + 0x700c) * 0xc);
    /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar4 + *(int *)(iVar2 + 0x7008) * 0xc);
    /* TODO: GP:-0x7d3c */ (**(code **)(unaff_gp + -0x7d3c) /* -> EXTERNAL_0x0f124ab4 */)();
  }
  else {
    bVar1 = param_2 != 1 && param_1 != (undefined4 *)0x0;
    if ((param_2 == 1) && (param_1 != (undefined4 *)0x0)) {
      /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(param_1[1]);
    }
    if ((param_3 & 1) != 0) {
      if (bVar1) {
        /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(param_1[1]);
      }
      if (param_2 == 1) {
        /* TODO: GP:-0x7d24 */ (**(code **)(unaff_gp + -0x7d24) /* -> EXTERNAL_0x0f124088 */)();
        iVar2 = small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */;
        piVar3 = (int *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6fa0);
        do {
          /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar2 + 0x6f40 + *piVar3 * 0xc);
          piVar3 = piVar3 + 1;
        } while (piVar3 != (int *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6fb0));
        /* TODO: GP:-0x7d20 */ (**(code **)(unaff_gp + -0x7d20) /* -> EXTERNAL_0x0f124718 */)();
      }
      else {
        /* TODO: GP:-0x7d54 */ (**(code **)(unaff_gp + -0x7d54) /* -> EXTERNAL_0x0f124d00 */)();
        iVar2 = small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6f40;
        /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fa0) * 0xc);
        /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fa4) * 0xc);
        /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fac) * 0xc);
        /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fa8) * 0xc);
        /* TODO: GP:-0x7d3c */ (**(code **)(unaff_gp + -0x7d3c) /* -> EXTERNAL_0x0f124ab4 */)();
      }
    }
    iVar2 = small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6f40;
    if (bVar1) {
      /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(param_1[3]);
    }
    if ((param_3 & 2) != 0) {
      if (param_2 == 1) {
        /* TODO: GP:-0x7d24 */ (**(code **)(unaff_gp + -0x7d24) /* -> EXTERNAL_0x0f124088 */)();
        iVar4 = small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6fa0;
        do {
          /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar2 + iVar4->file_array /* was: *(int *)(iVar4 + 0x10) */ * 0xc);
          iVar4 = iVar4 + 4;
        } while (iVar4 != small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6fb0);
        /* TODO: GP:-0x7d20 */ (**(code **)(unaff_gp + -0x7d20) /* -> EXTERNAL_0x0f124718 */)();
      }
      else {
        /* TODO: GP:-0x7d54 */ (**(code **)(unaff_gp + -0x7d54) /* -> EXTERNAL_0x0f124d00 */)();
        /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fb0) * 0xc);
        /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fb4) * 0xc);
        /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fbc) * 0xc);
        /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fb8) * 0xc);
        /* TODO: GP:-0x7d3c */ (**(code **)(unaff_gp + -0x7d3c) /* -> EXTERNAL_0x0f124ab4 */)();
      }
    }
    if ((param_3 & 4) != 0) {
      if (param_2 == 1) {
        /* TODO: GP:-0x7d24 */ (**(code **)(unaff_gp + -0x7d24) /* -> EXTERNAL_0x0f124088 */)();
        iVar4 = small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6fa0;
        do {
          /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar2 + iVar4->_field_20 /* was: *(int *)(iVar4 + 0x20) */ * 0xc);
          iVar4 = iVar4 + 4;
        } while (iVar4 != small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6fb0);
        /* TODO: GP:-0x7d20 */ (**(code **)(unaff_gp + -0x7d20) /* -> EXTERNAL_0x0f124718 */)();
      }
      else {
        /* TODO: GP:-0x7d54 */ (**(code **)(unaff_gp + -0x7d54) /* -> EXTERNAL_0x0f124d00 */)();
        /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fc0) * 0xc);
        /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fc4) * 0xc);
        /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fcc) * 0xc);
        /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fc8) * 0xc);
        /* TODO: GP:-0x7d3c */ (**(code **)(unaff_gp + -0x7d3c) /* -> EXTERNAL_0x0f124ab4 */)();
      }
    }
    if ((param_3 & 8) != 0) {
      if (bVar1) {
        /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(param_1[2]);
      }
      if (param_2 == 1) {
        /* TODO: GP:-0x7d24 */ (**(code **)(unaff_gp + -0x7d24) /* -> EXTERNAL_0x0f124088 */)();
        iVar4 = small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6fa0;
        do {
          /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar2 + iVar4->child_right /* was: *(int *)(iVar4 + 0x30) */ * 0xc);
          iVar4 = iVar4 + 4;
        } while (iVar4 != small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6fb0);
        /* TODO: GP:-0x7d20 */ (**(code **)(unaff_gp + -0x7d20) /* -> EXTERNAL_0x0f124718 */)();
      }
      else {
        /* TODO: GP:-0x7d54 */ (**(code **)(unaff_gp + -0x7d54) /* -> EXTERNAL_0x0f124d00 */)();
        /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fd0) * 0xc);
        /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fd4) * 0xc);
        /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fdc) * 0xc);
        /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fd8) * 0xc);
        /* TODO: GP:-0x7d3c */ (**(code **)(unaff_gp + -0x7d3c) /* -> EXTERNAL_0x0f124ab4 */)();
      }
    }
    if ((param_3 & 0x10) != 0) {
      if (bVar1) {
        /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(*param_1);
      }
      if (param_2 == 1) {
        /* TODO: GP:-0x7d24 */ (**(code **)(unaff_gp + -0x7d24) /* -> EXTERNAL_0x0f124088 */)();
        iVar4 = small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6fa0;
        do {
          /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar2 + iVar4->_field_40 /* was: *(int *)(iVar4 + 0x40) */ * 0xc);
          iVar4 = iVar4 + 4;
        } while (iVar4 != small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6fb0);
        /* TODO: GP:-0x7d20 */ (**(code **)(unaff_gp + -0x7d20) /* -> EXTERNAL_0x0f124718 */)();
      }
      else {
        /* TODO: GP:-0x7d54 */ (**(code **)(unaff_gp + -0x7d54) /* -> EXTERNAL_0x0f124d00 */)();
        /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fe0) * 0xc);
        /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fe4) * 0xc);
        /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fec) * 0xc);
        /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fe8) * 0xc);
        /* TODO: GP:-0x7d3c */ (**(code **)(unaff_gp + -0x7d3c) /* -> EXTERNAL_0x0f124ab4 */)();
      }
    }
    if ((param_3 & 0x20) != 0) {
      if (param_2 == 1) {
        /* TODO: GP:-0x7d24 */ (**(code **)(unaff_gp + -0x7d24) /* -> EXTERNAL_0x0f124088 */)();
        iVar4 = small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6fa0;
        do {
          /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar2 + iVar4->offset_y /* was: *(int *)(iVar4 + 0x50) */ * 0xc);
          iVar4 = iVar4 + 4;
        } while (iVar4 != small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6fb0);
        /* TODO: GP:-0x7d20 */ (**(code **)(unaff_gp + -0x7d20) /* -> EXTERNAL_0x0f124718 */)();
      }
      else {
        /* TODO: GP:-0x7d54 */ (**(code **)(unaff_gp + -0x7d54) /* -> EXTERNAL_0x0f124d00 */)();
        /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6ff0) * 0xc);
        /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6ff4) * 0xc);
        /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6ffc) * 0xc);
        /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6ff8) * 0xc);
        /* TODO: GP:-0x7d3c */ (**(code **)(unaff_gp + -0x7d3c) /* -> EXTERNAL_0x0f124ab4 */)();
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00422284):
     * Function: FUN_00422284
     *
     * Looking at this assembly snippet:
     * **1. What it does:**
     * Calls a function via GP-relative pointer with `base + (index * stride)` as argument, then calls another function the same way using a value loaded from a global struct, then calls a third function (no args) before restoring registers and returning.
     * **2. C pseudocode:**
     * ```c
     * // t9 = function pointer from GP (offset -32192, likely XtFree or similar)
     * // s1 = base pointer, s2 = element size/stride
     * func1(s1 + (t1 * s2));  // first call with computed offset
     * // Load t3 from *(*(gp[-32664]) + 28664) - likely curcontext->some_field
     * t3 = curcontext->field_6ff8;  // offset 0x6ff8 = 28664
     * func2(s1 + (t3 * s2));  // second call with different index
     * func3();  // GP offset -32060, possibly endpupmode or similar cleanup
     * // epilogue: restore s0,s1,s2,ra; return
     * ```
     * This appears to be array element access where `s1` is an array base, `s2` is element size, and two different indices are used - one from register `t1` and one from a context structure field. The pattern suggests freeing or processing array elements at specific indices.
     */
halt_baddata();
}
