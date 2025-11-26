/**
 * icons.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "icons.h"
#include "fsn_types.h"
#include "fsn_state.h"

void draw_file_icon(byte *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int unaff_gp;
  
  uVar3 = (uint)*param_1;
  if (uVar3 != 0) {
    iVar5 = *(int *)(unaff_gp + -0x76cc);
    do {
      iVar1 = *(int *)(iVar5 + uVar3 * 0xd8);
      if ((iVar1 != 0) && (iVar1 != 0)) {
        iVar4 = 0;
        do {
          if (iVar1 == 1) {
            iVar1 = iVar5 + uVar3 * 0xd8 + iVar4;
            (**(code **)(unaff_gp + -0x7b60))((float)*(int *)(iVar1 + 4),(float)*(int *)(iVar1 + 8))
            ;
            uVar3 = (uint)*param_1;
            iVar1 = iVar5 + uVar3 * 0xd8 + iVar4;
LAB_00418bcc:
            iVar1 = *(int *)(iVar1 + 0xc);
          }
          else {
            if (iVar1 == 2) {
              (**(code **)(unaff_gp + -0x7b7c))();
              (**(code **)(unaff_gp + -0x7c68))(iVar5 + (uint)*param_1 * 0xd8 + iVar4 + 4);
              uVar3 = (uint)*param_1;
              iVar1 = iVar5 + uVar3 * 0xd8 + iVar4;
              goto LAB_00418bcc;
            }
            iVar2 = iVar5 + uVar3 * 0xd8 + iVar4;
            if (iVar1 == 3) {
              (**(code **)(unaff_gp + -0x7c68))(iVar2 + 4);
              uVar3 = (uint)*param_1;
              iVar1 = iVar5 + uVar3 * 0xd8 + iVar4;
              goto LAB_00418bcc;
            }
            if (iVar1 == 4) {
              (**(code **)(unaff_gp + -0x7c68))(iVar2 + 4);
              (**(code **)(unaff_gp + -0x7b94))();
              uVar3 = (uint)*param_1;
              iVar1 = iVar5 + uVar3 * 0xd8 + iVar4;
              goto LAB_00418bcc;
            }
            iVar1 = *(int *)(iVar2 + 0xc);
          }
          iVar4 = iVar4 + 0xc;
        } while (iVar1 != 0);
      }
      uVar3 = (uint)param_1[1];
      param_1 = param_1 + 1;
    } while (uVar3 != 0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void render_file_icon(int param_1,undefined4 *param_2,char param_3,char param_4,undefined4 param_5,
                 undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  short sVar4;
  uint uVar3;
  int iVar5;
  int unaff_gp;
  uint extraout_var;
  undefined8 in_f4;
  double dVar6;
  undefined4 uVar7;
  char cStackX_f;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  uVar7 = (undefined4)((ulonglong)in_f4 >> 0x20);
  iVar2 = param_2[10];
  if ((iVar2 << 5 < 0) && (-1 < iVar2 << 0xb)) {
    if (iVar2 << 10 < 0) {
      sVar4 = (**(code **)(unaff_gp + -0x78c8))();
      (**(code **)(unaff_gp + -0x7d1c))((int)sVar4);
    }
    bVar1 = *(char *)(**(int **)(unaff_gp + -0x7684) + 0xc50) != '\0';
    if ((bVar1) && (bVar1 = *(int *)(param_1 + 0x74) << 2 < 0, bVar1)) {
      bVar1 = *(char *)(*(int *)(unaff_gp + -0x75dc) + 5) != '\0';
    }
    cStackX_f = param_4;
    if (param_2[8] == 0) {
      cStackX_f = '\0';
    }
    (**(code **)(unaff_gp + -0x7b48))();
    (**(code **)(unaff_gp + -0x7b60))(param_2[5],param_2[6]);
    if (bVar1) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    if (param_3 != '\0') {
      (**(code **)(unaff_gp + -0x7b9c))(0);
      (**(code **)(unaff_gp + -0x7b48))();
      iVar5 = *(int *)(unaff_gp + -0x75dc);
      iVar2 = param_2[1];
      if (*(int *)(iVar5 + 0x14) < (int)param_2[1]) {
        iVar2 = *(int *)(iVar5 + 0x14);
      }
      dVar6 = (double)iVar2 *
              (double)CONCAT44(uVar7,*(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x44ec));
      (**(code **)(unaff_gp + -0x7b60))
                ((float)dVar6,
                 (float)((double)-*(float *)(iVar5 + 0x70) /
                         (double)((ulonglong)(double)iVar2 & 0xffffffff00000000) -
                        (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),
                                         *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x44e4))),
                 iVar2,iVar5,0x3cf5c28f);
      (**(code **)(unaff_gp + -0x7b68))((int)-*(short *)(**(int **)(unaff_gp + -0x7684) + 0xe),0x78)
      ;
      uVar7 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x44e0);
      (**(code **)(unaff_gp + -0x7b6c))(uVar7,uVar7);
      iVar2 = *(int *)(*(int *)(unaff_gp + -0x75dc) + 0x14);
      if (iVar2 < (int)param_2[1]) {
        (**(code **)(unaff_gp + -0x7b6c))((float)iVar2 / (float)(int)param_2[1]);
      }
      (**(code **)(unaff_gp + -0x7a08))(*param_2);
      (**(code **)(unaff_gp + -0x7b28))();
    }
    if (cStackX_f != '\0') {
      (**(code **)(unaff_gp + -0x7d30))(0);
      (**(code **)(unaff_gp + -0x7b48))();
      uVar7 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x70);
      (**(code **)(unaff_gp + -0x7b6c))(uVar7,uVar7);
      uVar3 = param_2[10];
      if ((int)(uVar3 << 3) < 0) {
        iVar2 = *(int *)((uVar3 >> 0x1d) * 4 + *(int *)(unaff_gp + -0x7688)) + 0x10;
      }
      else {
        iVar2 = *(int *)((uVar3 >> 0x1d) * 4 + *(int *)(unaff_gp + -0x7688));
      }
      (**(code **)(unaff_gp + -0x794c))(iVar2,param_5,0x10);
      (**(code **)(unaff_gp + -0x7b28))();
      (**(code **)(unaff_gp + -0x7b48))();
      (**(code **)(unaff_gp + -0x77d8))(param_2[8],&local_4,&local_8,&local_c,&local_10);
      uVar7 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x70);
      (**(code **)(unaff_gp + -0x7b6c))(uVar7,uVar7);
      (**(code **)(unaff_gp + -0x7b60))(0xbf000000,0xbf000000);
      (**(code **)(unaff_gp + -0x7b6c))
                ((float)((double)((ulonglong)extraout_var << 0x20) /
                        ((double)local_c - (double)local_4)),
                 (float)((double)((ulonglong)extraout_var << 0x20) /
                        ((double)local_10 - (double)local_8)));
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    uVar7 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x70);
    (**(code **)(unaff_gp + -0x7b6c))(uVar7,uVar7);
    uVar3 = param_2[10];
    if ((int)(uVar3 << 3) < 0) {
      iVar2 = *(int *)((uVar3 >> 0x1d) * 4 + *(int *)(unaff_gp + -0x7688)) + 0x10;
    }
    else {
      iVar2 = *(int *)((uVar3 >> 0x1d) * 4 + *(int *)(unaff_gp + -0x7688));
    }
    (**(code **)(unaff_gp + -0x794c))(iVar2,param_5,param_6);
    (**(code **)(unaff_gp + -0x7b28))();
    if ((int)(param_2[10] << 10) < 0) {
      (**(code **)(unaff_gp + -0x7d1c))(0);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_icon_resources(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int unaff_gp;
  
  puVar2 = (undefined4 *)(**(code **)(unaff_gp + -0x7c48))(0xcb0);
  iVar5 = 0;
  puVar9 = (undefined4 *)(*(int *)(unaff_gp + -0x7f94) + -0x6990);
  iVar7 = 4;
  iVar8 = 8;
  iVar6 = 0xc;
  iVar4 = *(int *)(unaff_gp + -0x7f5c) + 0x705;
  puVar3 = puVar2;
  do {
    puVar3[1] = 0;
    puVar3[2] = iVar4;
    puVar3[3] = 4;
    puVar3[5] = iVar4;
    puVar3[4] = iVar5;
    iVar5 = iVar5 + 0x10;
    *puVar3 = *puVar9;
    uVar10 = puVar9[1];
    puVar3[0xb] = iVar7;
    puVar3[0xc] = iVar4;
    puVar3[10] = 4;
    puVar3[9] = iVar4;
    puVar3[8] = 0;
    puVar3[6] = uVar10;
    iVar7 = iVar7 + 0x10;
    puVar3[7] = puVar9[2];
    uVar10 = puVar9[3];
    puVar3[0x12] = iVar8;
    puVar3[0x13] = iVar4;
    puVar3[0x11] = 4;
    puVar3[0x10] = iVar4;
    puVar3[0xf] = 0;
    puVar3[0xd] = uVar10;
    iVar8 = iVar8 + 0x10;
    puVar3[0xe] = puVar9[4];
    uVar10 = puVar9[5];
    puVar3[0x19] = iVar6;
    puVar3[0x1a] = iVar4;
    puVar3[0x18] = 4;
    puVar3[0x17] = iVar4;
    puVar3[0x16] = 0;
    puVar3[0x14] = uVar10;
    iVar6 = iVar6 + 0x10;
    puVar3[0x15] = puVar9[6];
    puVar1 = puVar9 + 7;
    puVar9 = puVar9 + 8;
    puVar3[0x1b] = *puVar1;
    puVar3 = puVar3 + 0x1c;
  } while (iVar6 != 0x1dc);
  (**(code **)(unaff_gp + -0x7af4))
            (param_1,*(undefined4 *)(unaff_gp + -0x7598),param_2,param_3,puVar2,0x74,0,0);
  (**(code **)(unaff_gp + -0x7f40))(puVar2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void cIconInit(undefined4 param_1)

{
  parse_context_data(&context_data_block,param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void cFindIconByName(undefined4 param_1)

{
  load_context_block(&context_data_block,param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void cFindIconByType(undefined4 param_1)

{
  load_context_data(&context_data_block,param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void eval_icon_script(undefined4 param_1)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x77b0))(*(int *)(unaff_gp + -0x7f94) + 0x6f50,param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void cIconToTypeName(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void get_icon_string(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void cIconGetValue(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void get_icon_attribute(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void get_icon_bounds(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x38);
  *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x3c);
  *param_4 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x40);
  *param_5 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x44);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void cIconDraw(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x60) + 0xc))(*(short *)(*(int *)(param_1 + 0x60) + 8) + param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void set_icon_flags(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7798))(param_1,param_2,param_3,param_4,param_5,param_6);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_icon_context(void)

{
  short *psVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int unaff_gp;
  
  uVar11 = 0;
  psVar10 = (short *)(*(int *)(unaff_gp + -0x7f94) + 0x6f70);
  iVar12 = *(int *)(unaff_gp + -0x7f94) + 0x6f72;
  iVar13 = *(int *)(unaff_gp + -0x7f94) + 0x6f74;
  piVar14 = (int *)(*(int *)(unaff_gp + -0x7f94) + 0x6fd0);
  do {
    (**(code **)(unaff_gp + -0x7af0))(uVar11 & 0xffff,psVar10,iVar12,iVar13);
    uVar11 = uVar11 + 1;
    *piVar14 = (int)*psVar10 + psVar10[1] * 0x100 + psVar10[2] * 0x10000;
    psVar10 = psVar10 + 3;
    iVar12 = iVar12 + 6;
    iVar13 = iVar13 + 6;
    piVar14 = piVar14 + 1;
  } while ((int)uVar11 < 0x10);
  iVar13 = *(int *)(unaff_gp + -0x7f94);
  iVar12 = *(int *)(unaff_gp + -0x7f94);
  psVar10 = (short *)(*(int *)(unaff_gp + -0x7f94) + 0x6f70);
  piVar14 = (int *)(*(int *)(unaff_gp + -0x7f94) + 0x7010);
  do {
    iVar3 = (int)*psVar10;
    iVar4 = (int)psVar10[1];
    iVar5 = (int)psVar10[2];
    psVar1 = (short *)(*(int *)(unaff_gp + -0x7f94) + 0x6f70);
    piVar2 = piVar14;
    do {
      iVar7 = iVar3 + *psVar1;
      if (iVar7 < 0) {
        iVar7 = iVar7 + 1;
      }
      iVar15 = iVar4 + psVar1[1];
      if (iVar15 < 0) {
        iVar15 = iVar15 + 1;
      }
      iVar6 = iVar5 + psVar1[2];
      if (iVar6 < 0) {
        iVar6 = iVar6 + 1;
      }
      iVar8 = iVar3 + psVar1[3];
      iVar9 = iVar4 + psVar1[4];
      *piVar2 = (iVar7 >> 1) + (iVar15 >> 1) * 0x100 + (iVar6 >> 1) * 0x10000;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 1;
      }
      if (iVar9 < 0) {
        iVar9 = iVar9 + 1;
      }
      iVar7 = iVar5 + psVar1[5];
      if (iVar7 < 0) {
        iVar7 = iVar7 + 1;
      }
      iVar15 = iVar3 + psVar1[6];
      iVar6 = iVar4 + psVar1[7];
      piVar2[1] = (iVar8 >> 1) + (iVar9 >> 1) * 0x100 + (iVar7 >> 1) * 0x10000;
      if (iVar15 < 0) {
        iVar15 = iVar15 + 1;
      }
      if (iVar6 < 0) {
        iVar6 = iVar6 + 1;
      }
      iVar7 = iVar5 + psVar1[8];
      if (iVar7 < 0) {
        iVar7 = iVar7 + 1;
      }
      iVar8 = iVar3 + psVar1[9];
      iVar9 = iVar4 + psVar1[10];
      piVar2[2] = (iVar15 >> 1) + (iVar6 >> 1) * 0x100 + (iVar7 >> 1) * 0x10000;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 1;
      }
      if (iVar9 < 0) {
        iVar9 = iVar9 + 1;
      }
      iVar7 = iVar5 + psVar1[0xb];
      if (iVar7 < 0) {
        iVar7 = iVar7 + 1;
      }
      psVar1 = psVar1 + 0xc;
      piVar2[3] = (iVar8 >> 1) + (iVar9 >> 1) * 0x100 + (iVar7 >> 1) * 0x10000;
      piVar2 = piVar2 + 4;
    } while (psVar1 != (short *)(iVar12 + 0x6fd0));
    piVar14 = piVar14 + 0x10;
    psVar10 = psVar10 + 3;
  } while (piVar14 != (int *)(iVar13 + 0x7410));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void setup_icon_entry(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  int unaff_gp;
  
  if ((param_1 == (undefined1 *)0x0) &&
     (param_1 = (undefined1 *)(**(code **)(unaff_gp + -0x7b5c))(100), param_1 == (undefined1 *)0x0))
  {
    halt_baddata();
  }
  uVar1 = *(undefined4 *)(unaff_gp + -0x7610);
  *(int *)(param_1 + 0x14) = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffff78;
  *(undefined4 *)(param_1 + 0xc) = 0xffffff81;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  if (*(int *)(param_2 + 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    uVar1 = *(undefined4 *)(param_2 + 0x24);
  }
  else {
    uVar1 = (**(code **)(unaff_gp + -0x7b5c))(*(int *)(param_2 + 0x20));
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    (**(code **)(unaff_gp + -0x7e64))
              (*(undefined4 *)(param_2 + 0x1c),uVar1,*(undefined4 *)(param_2 + 0x20));
    uVar1 = *(undefined4 *)(param_2 + 0x24);
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void get_icon_result(undefined4 *param_1)

{
  int unaff_gp;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)(**(code **)(unaff_gp + -0x7b5c))(0x6c), param_1 != (undefined4 *)0x0)
     ) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0x14] = 0;
    param_1[0x18] = 0;
    param_1[0x17] = 0;
    param_1[0x16] = 0;
    param_1[0x15] = 0;
    param_1[0x19] = 5;
    param_1[0x1a] = 0;
    param_1[0x11] = 0x42c80000;
    param_1[0x10] = 0x42c80000;
    param_1[0x13] = 0x42480000;
    param_1[0x12] = 0x42480000;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void icon_bytecode_eval_wrapper(undefined4 *param_1)

{
  int unaff_gp;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)(**(code **)(unaff_gp + -0x7b5c))(0x14), param_1 != (undefined4 *)0x0)
     ) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
