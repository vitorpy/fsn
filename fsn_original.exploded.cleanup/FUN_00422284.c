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
      (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(*param_1);
    }
    (**(code **)(unaff_gp + -0x7d54) /* -> EXTERNAL_0x0f124d00 */)();
    iVar2 = *(int *)(unaff_gp + -0x7f98) /* -> small */;
    iVar4 = *(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6f40;
    (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar4 + *(int *)(iVar2 + 0x7010) * 0xc);
    (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar4 + *(int *)(iVar2 + 0x7014) * 0xc);
    (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar4 + *(int *)(iVar2 + 0x701c) * 0xc);
    (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar4 + *(int *)(iVar2 + 0x7018) * 0xc);
    (**(code **)(unaff_gp + -0x7d3c) /* -> EXTERNAL_0x0f124ab4 */)();
  }
  else if (param_2 == 3) {
    if (param_1 != (undefined4 *)0x0) {
      (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(*param_1);
    }
    (**(code **)(unaff_gp + -0x7b7c) /* -> EXTERNAL_0x0f1247c0 */)();
    (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x7020);
    (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x702c);
    (**(code **)(unaff_gp + -0x7b94) /* -> EXTERNAL_0x0f124574 */)();
  }
  else if (param_2 == 2) {
    if (param_1 != (undefined4 *)0x0) {
      (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(*param_1);
    }
    (**(code **)(unaff_gp + -0x7d54) /* -> EXTERNAL_0x0f124d00 */)();
    iVar2 = *(int *)(unaff_gp + -0x7f98) /* -> small */;
    iVar4 = *(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6f40;
    (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar4 + *(int *)(iVar2 + 0x7000) * 0xc);
    (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar4 + *(int *)(iVar2 + 0x7004) * 0xc);
    (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar4 + *(int *)(iVar2 + 0x700c) * 0xc);
    (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar4 + *(int *)(iVar2 + 0x7008) * 0xc);
    (**(code **)(unaff_gp + -0x7d3c) /* -> EXTERNAL_0x0f124ab4 */)();
  }
  else {
    bVar1 = param_2 != 1 && param_1 != (undefined4 *)0x0;
    if ((param_2 == 1) && (param_1 != (undefined4 *)0x0)) {
      (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(param_1[1]);
    }
    if ((param_3 & 1) != 0) {
      if (bVar1) {
        (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(param_1[1]);
      }
      if (param_2 == 1) {
        (**(code **)(unaff_gp + -0x7d24) /* -> EXTERNAL_0x0f124088 */)();
        iVar2 = *(int *)(unaff_gp + -0x7f98) /* -> small */;
        piVar3 = (int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fa0);
        do {
          (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar2 + 0x6f40 + *piVar3 * 0xc);
          piVar3 = piVar3 + 1;
        } while (piVar3 != (int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fb0));
        (**(code **)(unaff_gp + -0x7d20) /* -> EXTERNAL_0x0f124718 */)();
      }
      else {
        (**(code **)(unaff_gp + -0x7d54) /* -> EXTERNAL_0x0f124d00 */)();
        iVar2 = *(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6f40;
        (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fa0) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fa4) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fac) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fa8) * 0xc);
        (**(code **)(unaff_gp + -0x7d3c) /* -> EXTERNAL_0x0f124ab4 */)();
      }
    }
    iVar2 = *(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6f40;
    if (bVar1) {
      (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(param_1[3]);
    }
    if ((param_3 & 2) != 0) {
      if (param_2 == 1) {
        (**(code **)(unaff_gp + -0x7d24) /* -> EXTERNAL_0x0f124088 */)();
        iVar4 = *(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fa0;
        do {
          (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar2 + *(int *)(iVar4 + 0x10) * 0xc);
          iVar4 = iVar4 + 4;
        } while (iVar4 != *(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fb0);
        (**(code **)(unaff_gp + -0x7d20) /* -> EXTERNAL_0x0f124718 */)();
      }
      else {
        (**(code **)(unaff_gp + -0x7d54) /* -> EXTERNAL_0x0f124d00 */)();
        (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fb0) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fb4) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fbc) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fb8) * 0xc);
        (**(code **)(unaff_gp + -0x7d3c) /* -> EXTERNAL_0x0f124ab4 */)();
      }
    }
    if ((param_3 & 4) != 0) {
      if (param_2 == 1) {
        (**(code **)(unaff_gp + -0x7d24) /* -> EXTERNAL_0x0f124088 */)();
        iVar4 = *(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fa0;
        do {
          (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar2 + *(int *)(iVar4 + 0x20) * 0xc);
          iVar4 = iVar4 + 4;
        } while (iVar4 != *(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fb0);
        (**(code **)(unaff_gp + -0x7d20) /* -> EXTERNAL_0x0f124718 */)();
      }
      else {
        (**(code **)(unaff_gp + -0x7d54) /* -> EXTERNAL_0x0f124d00 */)();
        (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fc0) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fc4) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fcc) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fc8) * 0xc);
        (**(code **)(unaff_gp + -0x7d3c) /* -> EXTERNAL_0x0f124ab4 */)();
      }
    }
    if ((param_3 & 8) != 0) {
      if (bVar1) {
        (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(param_1[2]);
      }
      if (param_2 == 1) {
        (**(code **)(unaff_gp + -0x7d24) /* -> EXTERNAL_0x0f124088 */)();
        iVar4 = *(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fa0;
        do {
          (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar2 + *(int *)(iVar4 + 0x30) * 0xc);
          iVar4 = iVar4 + 4;
        } while (iVar4 != *(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fb0);
        (**(code **)(unaff_gp + -0x7d20) /* -> EXTERNAL_0x0f124718 */)();
      }
      else {
        (**(code **)(unaff_gp + -0x7d54) /* -> EXTERNAL_0x0f124d00 */)();
        (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fd0) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fd4) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fdc) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fd8) * 0xc);
        (**(code **)(unaff_gp + -0x7d3c) /* -> EXTERNAL_0x0f124ab4 */)();
      }
    }
    if ((param_3 & 0x10) != 0) {
      if (bVar1) {
        (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(*param_1);
      }
      if (param_2 == 1) {
        (**(code **)(unaff_gp + -0x7d24) /* -> EXTERNAL_0x0f124088 */)();
        iVar4 = *(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fa0;
        do {
          (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar2 + *(int *)(iVar4 + 0x40) * 0xc);
          iVar4 = iVar4 + 4;
        } while (iVar4 != *(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fb0);
        (**(code **)(unaff_gp + -0x7d20) /* -> EXTERNAL_0x0f124718 */)();
      }
      else {
        (**(code **)(unaff_gp + -0x7d54) /* -> EXTERNAL_0x0f124d00 */)();
        (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fe0) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fe4) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fec) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fe8) * 0xc);
        (**(code **)(unaff_gp + -0x7d3c) /* -> EXTERNAL_0x0f124ab4 */)();
      }
    }
    if ((param_3 & 0x20) != 0) {
      if (param_2 == 1) {
        (**(code **)(unaff_gp + -0x7d24) /* -> EXTERNAL_0x0f124088 */)();
        iVar4 = *(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fa0;
        do {
          (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(iVar2 + *(int *)(iVar4 + 0x50) * 0xc);
          iVar4 = iVar4 + 4;
        } while (iVar4 != *(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6fb0);
        (**(code **)(unaff_gp + -0x7d20) /* -> EXTERNAL_0x0f124718 */)();
      }
      else {
        (**(code **)(unaff_gp + -0x7d54) /* -> EXTERNAL_0x0f124d00 */)();
        (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6ff0) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6ff4) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6ffc) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6ff8) * 0xc);
        (**(code **)(unaff_gp + -0x7d3c) /* -> EXTERNAL_0x0f124ab4 */)();
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
