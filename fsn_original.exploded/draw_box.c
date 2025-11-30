/**
 * draw_box
 *
 * Extracted from fsn.c lines 61968-62140
 * Category: Graphics
 */

void draw_box(undefined4 *param_1,int param_2,uint param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  if (param_2 == 4) {
    if (param_1 != (undefined4 *)0x0) {
      cpack(*param_1);
    }
    bgnqstrip();
    v3f(DAT_10007010 * 0xc + 0x10006f40);
    v3f(DAT_10007014 * 0xc + 0x10006f40);
    v3f(DAT_1000701c * 0xc + 0x10006f40);
    v3f(DAT_10007018 * 0xc + 0x10006f40);
    endqstrip();
  }
  else if (param_2 == 3) {
    if (param_1 != (undefined4 *)0x0) {
      cpack(*param_1);
    }
    bgnline();
    v3f(&DAT_10007020);
    v3f(&DAT_1000702c);
    endline();
  }
  else if (param_2 == 2) {
    if (param_1 != (undefined4 *)0x0) {
      cpack(*param_1);
    }
    bgnqstrip();
    v3f(DAT_10007000 * 0xc + 0x10006f40);
    v3f(DAT_10007004 * 0xc + 0x10006f40);
    v3f(DAT_1000700c * 0xc + 0x10006f40);
    v3f(DAT_10007008 * 0xc + 0x10006f40);
    endqstrip();
  }
  else {
    bVar1 = param_2 != 1 && param_1 != (undefined4 *)0x0;
    if ((param_2 == 1) && (param_1 != (undefined4 *)0x0)) {
      cpack(param_1[1]);
    }
    if ((param_3 & 1) != 0) {
      if (bVar1) {
        cpack(param_1[1]);
      }
      if (param_2 == 1) {
        bgnclosedline();
        piVar2 = &DAT_10006fa0;
        do {
          v3f(*piVar2 * 0xc + 0x10006f40);
          piVar2 = piVar2 + 1;
        } while (piVar2 != &DAT_10006fb0);
        endclosedline();
      }
      else {
        bgnqstrip();
        v3f(DAT_10006fa0 * 0xc + 0x10006f40);
        v3f(DAT_10006fa4 * 0xc + 0x10006f40);
        v3f(DAT_10006fac * 0xc + 0x10006f40);
        v3f(DAT_10006fa8 * 0xc + 0x10006f40);
        endqstrip();
      }
    }
    if (bVar1) {
      cpack(param_1[3]);
    }
    if ((param_3 & 2) != 0) {
      if (param_2 == 1) {
        bgnclosedline();
        puVar3 = &DAT_10006fa0;
        do {
          v3f(puVar3[4] * 0xc + 0x10006f40);
          puVar3 = puVar3 + 1;
        } while (puVar3 != &DAT_10006fb0);
        endclosedline();
      }
      else {
        bgnqstrip();
        v3f(DAT_10006fb0 * 0xc + 0x10006f40);
        v3f(DAT_10006fb4 * 0xc + 0x10006f40);
        v3f(DAT_10006fbc * 0xc + 0x10006f40);
        v3f(DAT_10006fb8 * 0xc + 0x10006f40);
        endqstrip();
      }
    }
    if ((param_3 & 4) != 0) {
      if (param_2 == 1) {
        bgnclosedline();
        puVar3 = &DAT_10006fa0;
        do {
          v3f(puVar3[8] * 0xc + 0x10006f40);
          puVar3 = puVar3 + 1;
        } while (puVar3 != &DAT_10006fb0);
        endclosedline();
      }
      else {
        bgnqstrip();
        v3f(DAT_10006fc0 * 0xc + 0x10006f40);
        v3f(DAT_10006fc4 * 0xc + 0x10006f40);
        v3f(DAT_10006fcc * 0xc + 0x10006f40);
        v3f(DAT_10006fc8 * 0xc + 0x10006f40);
        endqstrip();
      }
    }
    if ((param_3 & 8) != 0) {
      if (bVar1) {
        cpack(param_1[2]);
      }
      if (param_2 == 1) {
        bgnclosedline();
        puVar3 = &DAT_10006fa0;
        do {
          v3f(puVar3[0xc] * 0xc + 0x10006f40);
          puVar3 = puVar3 + 1;
        } while (puVar3 != &DAT_10006fb0);
        endclosedline();
      }
      else {
        bgnqstrip();
        v3f(DAT_10006fd0 * 0xc + 0x10006f40);
        v3f(DAT_10006fd4 * 0xc + 0x10006f40);
        v3f(DAT_10006fdc * 0xc + 0x10006f40);
        v3f(DAT_10006fd8 * 0xc + 0x10006f40);
        endqstrip();
      }
    }
    if ((param_3 & 0x10) != 0) {
      if (bVar1) {
        cpack(*param_1);
      }
      if (param_2 == 1) {
        bgnclosedline();
        puVar3 = &DAT_10006fa0;
        do {
          v3f(puVar3[0x10] * 0xc + 0x10006f40);
          puVar3 = puVar3 + 1;
        } while (puVar3 != &DAT_10006fb0);
        endclosedline();
      }
      else {
        bgnqstrip();
        v3f(DAT_10006fe0 * 0xc + 0x10006f40);
        v3f(DAT_10006fe4 * 0xc + 0x10006f40);
        v3f(DAT_10006fec * 0xc + 0x10006f40);
        v3f(DAT_10006fe8 * 0xc + 0x10006f40);
        endqstrip();
      }
    }
    if ((param_3 & 0x20) != 0) {
      if (param_2 == 1) {
        bgnclosedline();
        puVar3 = &DAT_10006fa0;
        do {
          v3f(puVar3[0x14] * 0xc + 0x10006f40);
          puVar3 = puVar3 + 1;
        } while (puVar3 != &DAT_10006fb0);
        endclosedline();
      }
      else {
        bgnqstrip();
        v3f(DAT_10006ff0 * 0xc + 0x10006f40);
        v3f(DAT_10006ff4 * 0xc + 0x10006f40);
        v3f(DAT_10006ffc * 0xc + 0x10006f40);
        v3f(DAT_10006ff8 * 0xc + 0x10006f40);
        endqstrip();
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
