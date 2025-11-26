/**
 * rendering.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "rendering.h"
#include "fsn_types.h"
#include "fsn_state.h"

void render_item_recursive(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 char param_5)

{
  undefined4 uVar1;
  int unaff_gp;
  undefined8 in_f4;
  
  uVar1 = (undefined4)((ulonglong)in_f4 >> 0x20);
  if ((int)(param_1[0x1d] << 3) < 0) {
    (**(code **)(unaff_gp + -0x7e1c))((int)*(short *)((int)param_1 + 0x5e));
    (**(code **)(unaff_gp + -0x7b48))();
    (**(code **)(unaff_gp + -0x7b60))((float)(double)CONCAT44(uVar1,param_4));
    if ((int)(param_1[0x1d] << 0xd) < 0) {
      uVar1 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x168);
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x16c);
    }
    (**(code **)(unaff_gp + -0x7b9c))(uVar1);
    (**(code **)(unaff_gp + -0x7b48))();
    (**(code **)(unaff_gp + -0x7b68))(0xfffffc7c,0x7a);
    (**(code **)(unaff_gp + -0x7b60))
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x5104),
               *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x5100));
    if (param_5 == '\0') {
      uVar1 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x50e8);
      (**(code **)(unaff_gp + -0x7df0))(uVar1,uVar1);
      uVar1 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x50d0);
      (**(code **)(unaff_gp + -0x7b6c))(uVar1,uVar1);
      (**(code **)(unaff_gp + -0x7a08))(*param_1);
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x50fc);
      (**(code **)(unaff_gp + -0x7e20))(uVar1,uVar1);
    }
    (**(code **)(unaff_gp + -0x7b28))();
    (**(code **)(unaff_gp + -0x7b28))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void begin_overview_render(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7d0c))
            (**(undefined4 **)(unaff_gp + -0x75fc),
             *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c04));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void render_overview_frame(void)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  int unaff_gp;
  double dVar6;
  uint uVar7;
  undefined8 in_f18;
  uint in_fcsr;
  int local_b8;
  undefined4 local_b4 [3];
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  undefined4 *local_9c;
  int local_98;
  int *local_94;
  int local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  
  uVar7 = (uint)((ulonglong)in_f18 >> 0x20);
  if (*(char *)(*(int *)(unaff_gp + -0x7f98) + 0x6ebc) == '\0') {
    (**(code **)(unaff_gp + -0x7c3c))
              (**(undefined4 **)(unaff_gp + -0x7600),*(int *)(unaff_gp + -0x7f98) + 0x6e94,4);
    *(undefined1 *)(*(int *)(unaff_gp + -0x7f98) + 0x6ebc) = 1;
  }
  local_9c = local_b4;
  local_a0 = *(int *)(unaff_gp + -0x7f5c) + 0x9a;
  iVar2 = (**(code **)(unaff_gp + -0x7960))();
  local_94 = &local_b8;
  if (iVar2 == 0) {
    local_98 = *(int *)(unaff_gp + -0x7fa4) + -0x469c;
  }
  else {
    local_98 = *(int *)(unaff_gp + -0x7fa4) + -0x46ac;
  }
  (**(code **)(unaff_gp + -0x7c9c))(*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 8),&local_a0,2)
  ;
  local_a0 = *(int *)(unaff_gp + -0x7f80) + 0x118;
  local_9c = (undefined4 *)0x1;
  uVar3 = (**(code **)(unaff_gp + -0x7df4))
                    (*(int *)(unaff_gp + -0x7fa4) + -0x468c,**(undefined4 **)(unaff_gp + -0x7f74),
                     **(undefined4 **)(unaff_gp + -0x75f0),&local_a0,1);
  iVar2 = *(int *)(unaff_gp + -0x7f5c);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x6eb4) = uVar3;
  (**(code **)(unaff_gp + -0x7c54))(uVar3,iVar2 + 0xa9,*(int *)(unaff_gp + -0x7fe4) + 0x1180,0);
  local_a8 = (**(code **)(unaff_gp + -0x7c84))
                       (*(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x6eb4),
                        *(int *)(unaff_gp + -0x7fa4) + -0x4680,&local_a0,0);
  (**(code **)(unaff_gp + -0x7c78))(local_a8);
  (**(code **)(unaff_gp + -0x785c))(local_a8,*(undefined4 *)(unaff_gp + -0x76c0));
  iVar2 = (**(code **)(unaff_gp + -0x7960))();
  if (iVar2 != 0) {
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x6e64) = 0x3000;
  }
  local_9c = (undefined4 *)0x1;
  local_a0 = *(int *)(unaff_gp + -0x7f60) + 0x27b5;
  local_98 = *(int *)(unaff_gp + -0x7f60) + 0x1d63;
  local_90 = *(int *)(unaff_gp + -0x7f60) + 0x2375;
  local_88 = *(int *)(unaff_gp + -0x7f60) + 0x1399;
  local_80 = *(int *)(unaff_gp + -0x7fa4) + -0x4670;
  local_7c = *(int *)(unaff_gp + -0x7f98) + 0x6e64;
  local_94 = (int *)0x1;
  local_8c = 1;
  local_84 = 1;
  iVar2 = (**(code **)(unaff_gp + -0x7960))();
  if (iVar2 == 0) {
    local_78 = *(int *)(unaff_gp + -0x7fa4) + -0x4658;
  }
  else {
    local_78 = *(int *)(unaff_gp + -0x7fa4) + -0x4664;
  }
  local_74 = 1;
  local_70 = *(int *)(unaff_gp + -0x7f5c) + 0x368;
  dVar6 = ((double)**(float **)(unaff_gp + -0x75d0) - (double)**(float **)(unaff_gp + -0x75d4)) *
          (double)((ulonglong)uVar7 << 0x20);
  local_68 = *(int *)(unaff_gp + -0x7f5c) + 0xea;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    dVar6 = ROUND(dVar6);
  }
  else {
    dVar6 = FLOOR(dVar6);
  }
  local_6c = (int)dVar6;
  fVar1 = **(float **)(unaff_gp + -0x75c8) - **(float **)(unaff_gp + -0x75cc);
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(fVar1);
  }
  else {
    fVar1 = FLOOR(fVar1);
  }
  local_64 = (int)fVar1;
  local_a4 = 8;
  iVar2 = (**(code **)(unaff_gp + -0x7960))();
  if (iVar2 == 0) {
    piVar4 = &local_a0 + local_a4 * 2;
    *piVar4 = *(int *)(unaff_gp + -0x7fa4) + -0x463c;
  }
  else {
    piVar4 = &local_a0 + local_a4 * 2;
    *piVar4 = *(int *)(unaff_gp + -0x7fa4) + -0x464c;
  }
  iVar2 = *(int *)(unaff_gp + -0x7fa4);
  pcVar5 = *(code **)(unaff_gp + -0x7e04);
  piVar4[1] = local_b8;
  uVar3 = (*pcVar5)(local_a8,iVar2 + -0x462c,&local_a0,local_a4 + 1);
  iVar2 = *(int *)(unaff_gp + -0x7fa4);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c0c) = uVar3;
  (**(code **)(unaff_gp + -0x7c54))(uVar3,iVar2 + -0x4620,*(int *)(unaff_gp + -0x7fe4) + 0xbfc,0);
  iVar2 = (**(code **)(unaff_gp + -0x7960))();
  if (iVar2 == 0) {
    iVar2 = *(int *)(unaff_gp + -0x7fa4) + -0x45fc;
  }
  else {
    iVar2 = *(int *)(unaff_gp + -0x7fa4) + -0x4610;
  }
  (**(code **)(unaff_gp + -0x7c54))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c0c),iVar2,
             *(int *)(unaff_gp + -0x7fe4) + 0xc50,0);
  (**(code **)(unaff_gp + -0x7c54))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c0c),
             *(int *)(unaff_gp + -0x7fa4) + -0x45e8,*(int *)(unaff_gp + -0x7fe4) + 0xca4,0);
  (**(code **)(unaff_gp + -0x7c54))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c0c),
             *(int *)(unaff_gp + -0x7fa4) + -0x45d8,*(int *)(unaff_gp + -0x7fe4) + 0xe74,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c0c));
  iVar2 = *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6e60);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(unaff_gp + -0x7c10))(*(undefined4 *)(unaff_gp + -0x76ac));
    iVar2 = *(int *)(unaff_gp + -0x7f98);
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x6e60) = uVar3;
    iVar2 = *(int *)(iVar2 + 0x6e60);
  }
  (**(code **)(unaff_gp + -0x7c58))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c0c),iVar2);
  local_a0 = *(int *)(unaff_gp + -0x7f5c) + 0x9a;
  local_9c = (undefined4 *)local_b4[0];
  (**(code **)(unaff_gp + -0x7cc0))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c0c),&local_a0,1);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x6eb4));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void setup_item_render(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_gp;
  double dVar7;
  uint unaff_000010a0;
  undefined4 local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if (*(int *)(param_1 + 0x74) << 3 < 0) {
    (**(code **)(unaff_gp + -0x7e1c))((int)*(short *)(param_1 + 0x5e));
    if (*(int *)(param_1 + 0x74) << 2 < 0) {
      uVar3 = *(undefined4 *)(**(int **)(unaff_gp + -0x768c) + 0x10);
    }
    else {
      uVar3 = *(undefined4 *)**(undefined4 **)(unaff_gp + -0x768c);
    }
    (**(code **)(unaff_gp + -0x7b9c))(uVar3);
    if (*(int *)(param_1 + 0x74) << 0xd < 0) {
      dVar7 = (double)*(float *)(param_1 + 0x3c) / (double)((ulonglong)unaff_000010a0 << 0x20);
      (**(code **)(unaff_gp + -0x7df0))
                ((float)((double)*(float *)(param_1 + 0x34) -
                        dVar7 * (double)*(float *)(param_1 + 0x58)),
                 (float)((double)*(float *)(param_1 + 0x38) - dVar7));
      iVar2 = *(int *)(param_1 + 0x14);
    }
    else {
      dVar7 = (double)*(float *)(param_1 + 0x3c) / (double)((ulonglong)unaff_000010a0 << 0x20);
      (**(code **)(unaff_gp + -0x7e20))
                ((float)((double)*(float *)(param_1 + 0x34) -
                        dVar7 * (double)*(float *)(param_1 + 0x58)),
                 (float)((double)*(float *)(param_1 + 0x38) - dVar7));
      iVar2 = *(int *)(param_1 + 0x14);
    }
    iVar5 = 0;
    if (0 < iVar2) {
      iVar6 = *(int *)(unaff_gp + -0x75dc);
      do {
        iVar4 = *(int *)(*(int *)(param_1 + 0x18) + iVar5);
        iVar1 = *(int *)(iVar4 + 0x74);
        if (iVar1 << 3 < 0) {
          if (param_2 != '\0') {
            (**(code **)(unaff_gp + -0x7990))(iVar4,1);
            (**(code **)(unaff_gp + -0x7e1c))((int)*(short *)(iVar4 + 0x5e));
            iVar1 = *(int *)(iVar4 + 0x74);
          }
          if (iVar1 << 2 < 0) {
            uVar3 = *(undefined4 *)(iVar6 + 0x178);
          }
          else {
            uVar3 = *(undefined4 *)(iVar6 + 0x17c);
          }
          (**(code **)(unaff_gp + -0x7b9c))(uVar3);
          local_10 = *(float *)(param_1 + 0x34) +
                     *(float *)(iVar4 + 0x4c) * *(float *)(param_1 + 0x58);
          local_c = *(float *)(param_1 + 0x38) + *(float *)(iVar4 + 0x50);
          local_18 = *(undefined4 *)(iVar4 + 0x34);
          local_14 = (float)((double)*(float *)(iVar4 + 0x38) +
                            (double)-*(float *)(iVar4 + 0x3c) /
                            (double)((ulonglong)unaff_000010a0 << 0x20));
          (**(code **)(unaff_gp + -0x7b7c))();
          (**(code **)(unaff_gp + -0x7e08))(&local_10);
          (**(code **)(unaff_gp + -0x7e08))(&local_18);
          (**(code **)(unaff_gp + -0x7b94))();
          if (param_2 == '\0') {
            (**(code **)(unaff_gp + -0x7990))(iVar4,0);
          }
          iVar2 = *(int *)(param_1 + 0x14);
        }
        iVar5 = iVar5 + 4;
      } while (iVar5 < iVar2 << 2);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void begin_rendering(void)

{
  float *pfVar1;
  float fVar2;
  int unaff_gp;
  uint extraout_var;
  uint extraout_var_00;
  uint uVar3;
  
  (**(code **)(unaff_gp + -0x7cfc))(*(undefined2 *)(**(int **)(unaff_gp + -0x767c) + 0x32));
  (**(code **)(unaff_gp + -0x7b48))();
  pfVar1 = (float *)**(int **)(unaff_gp + -0x7684);
  fVar2 = pfVar1[0xf];
  if (fVar2 == 0.0) {
    (**(code **)(unaff_gp + -0x7b60))
              (*pfVar1 - pfVar1[5] * pfVar1[8] * pfVar1[2],
               pfVar1[1] - pfVar1[6] * pfVar1[8] * pfVar1[2]);
    uVar3 = extraout_var_00;
  }
  else {
    (**(code **)(unaff_gp + -0x7b60))
              (*(undefined4 *)((int)fVar2 + 0x34),*(undefined4 *)((int)fVar2 + 0x38));
    uVar3 = extraout_var;
  }
  (**(code **)(unaff_gp + -0x7b6c))
            ((float)((double)((ulonglong)uVar3 << 0x20) /
                    (double)*(float *)(*(int *)(unaff_gp + -0x7f94) + 0x6bf0)),
             (float)((double)((ulonglong)uVar3 << 0x20) /
                    (double)*(float *)(*(int *)(unaff_gp + -0x7f94) + 0x6bf4)));
  (**(code **)(unaff_gp + -0x7e0c))(3);
  (**(code **)(unaff_gp + -0x7b7c))();
  (**(code **)(unaff_gp + -0x7c68))(*(int *)(unaff_gp + -0x7f98) + 0x6ecc);
  (**(code **)(unaff_gp + -0x7c68))(*(int *)(unaff_gp + -0x7f98) + 0x6ed4);
  (**(code **)(unaff_gp + -0x7b94))();
  (**(code **)(unaff_gp + -0x7b7c))();
  (**(code **)(unaff_gp + -0x7c68))(*(int *)(unaff_gp + -0x7f98) + 0x6edc);
  (**(code **)(unaff_gp + -0x7c68))(*(int *)(unaff_gp + -0x7f98) + 0x6ee4);
  (**(code **)(unaff_gp + -0x7b94))();
  (**(code **)(unaff_gp + -0x7e0c))(1);
  (**(code **)(unaff_gp + -0x7b28))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void end_rendering(void)

{
  if (altcontext[0xc51] != '\0') {
    gl_swap_buffers(1);
    begin_rendering();
    gl_swap_buffers(1);
  }
  begin_rendering();
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

void set_render_flag(char param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  int unaff_gp;
  float fVar5;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = *(int *)(unaff_gp + -0x7f94);
  piVar4 = *(int **)(unaff_gp + -0x7684);
  iVar2 = *piVar4;
  *(undefined4 *)(iVar1 + 0x6c60) = 0;
  *(undefined4 *)(iVar1 + 0x6c64) = 0;
  if (*(int *)(iVar2 + 0x3c) == 0) {
    iVar1 = **(int **)(unaff_gp + -0x76d4);
    if (iVar1 != 0) {
      if (param_1 == '\0') {
        iVar1 = *(int *)(unaff_gp + -0x75dc);
        fVar5 = (float)(**(code **)(unaff_gp + -0x7b64))
                                 (*(undefined4 *)(iVar1 + 0x104),
                                  (*(float *)(iVar2 + 4) -
                                  *(float *)(iVar2 + 0x18) * *(float *)(iVar2 + 0x20) *
                                  *(float *)(iVar2 + 8)) / *(float *)(iVar1 + 0x108));
        fVar5 = (*(float *)(iVar1 + 0x110) * *(float *)(*piVar4 + 0x34)) / fVar5;
        if (*(char *)(iVar1 + 4) == '\0') {
          (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(iVar1 + 0x148));
          (**(code **)(unaff_gp + -0x7dc4))();
          local_c = *(float *)*piVar4 - fVar5;
          local_8 = ((float *)*piVar4)[1] + *(float *)(iVar1 + 0x114);
          local_4 = -0.5;
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          local_c = *(float *)*piVar4 + fVar5;
          local_8 = ((float *)*piVar4)[1] + *(float *)(iVar1 + 0x114);
          local_4 = -0.5;
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          pfVar3 = (float *)*piVar4;
          local_c = *pfVar3 + fVar5;
          local_8 = (float)((double)pfVar3[1] + (double)*(float *)(iVar1 + 0x114));
          local_4 = (float)((double)pfVar3[2] +
                           (double)CONCAT44((int)((ulonglong)(double)pfVar3[1] >> 0x20),
                                            *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x448c))
                           );
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          pfVar3 = (float *)*piVar4;
          local_c = *pfVar3 - fVar5;
          local_8 = (float)((double)pfVar3[1] + (double)*(float *)(iVar1 + 0x114));
          local_4 = (float)((double)pfVar3[2] +
                           (double)CONCAT44((int)((ulonglong)(double)pfVar3[1] >> 0x20),
                                            *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x4484))
                           );
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          (**(code **)(unaff_gp + -0x7dbc))();
          iVar1 = **(int **)(unaff_gp + -0x76d4);
        }
        else {
          (**(code **)(unaff_gp + -0x7cc8))(1);
          (**(code **)(unaff_gp + -0x7dc4))();
          (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(iVar1 + 0x150));
          local_c = *(float *)*piVar4 - fVar5;
          local_8 = ((float *)*piVar4)[1] + *(float *)(iVar1 + 0x114);
          local_4 = -0.5;
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          local_c = *(float *)*piVar4 + fVar5;
          local_8 = ((float *)*piVar4)[1] + *(float *)(iVar1 + 0x114);
          local_4 = -0.5;
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(iVar1 + 0x14c));
          pfVar3 = (float *)*piVar4;
          local_c = *pfVar3 + fVar5;
          local_8 = pfVar3[1] + *(float *)(iVar1 + 0x114);
          local_4 = pfVar3[2] + *(float *)(iVar1 + 0x10c);
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          pfVar3 = (float *)*piVar4;
          local_c = *pfVar3 - fVar5;
          local_8 = pfVar3[1] + *(float *)(iVar1 + 0x114);
          local_4 = pfVar3[2] + *(float *)(iVar1 + 0x10c);
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          (**(code **)(unaff_gp + -0x7dbc))();
          (**(code **)(unaff_gp + -0x7cc8))(0);
          (**(code **)(unaff_gp + -0x7dc4))();
          (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(iVar1 + 0x14c));
          pfVar3 = (float *)*piVar4;
          local_c = *pfVar3 + fVar5;
          local_8 = pfVar3[1] + *(float *)(iVar1 + 0x114);
          local_4 = pfVar3[2] + *(float *)(iVar1 + 0x10c);
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          pfVar3 = (float *)*piVar4;
          local_c = *pfVar3 + fVar5;
          local_8 = (float)((double)pfVar3[1] + (double)*(float *)(iVar1 + 0x114));
          local_4 = (float)((double)pfVar3[2] +
                           (double)CONCAT44((int)((ulonglong)(double)pfVar3[1] >> 0x20),
                                            *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x449c))
                           );
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          pfVar3 = (float *)*piVar4;
          local_c = *pfVar3 - fVar5;
          local_8 = (float)((double)pfVar3[1] + (double)*(float *)(iVar1 + 0x114));
          local_4 = (float)((double)pfVar3[2] +
                           (double)CONCAT44((int)((ulonglong)(double)pfVar3[1] >> 0x20),
                                            *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x4494))
                           );
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          pfVar3 = (float *)*piVar4;
          local_c = *pfVar3 - fVar5;
          local_8 = pfVar3[1] + *(float *)(iVar1 + 0x114);
          local_4 = pfVar3[2] + *(float *)(iVar1 + 0x10c);
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          (**(code **)(unaff_gp + -0x7dbc))();
          (**(code **)(unaff_gp + -0x7cc8))(1);
          (**(code **)(unaff_gp + -0x7dc4))();
          (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(iVar1 + 0x15c));
          local_c = *(float *)*piVar4 - fVar5;
          local_8 = ((float *)*piVar4)[1] - *(float *)(iVar1 + 0x118);
          local_4 = -0.5;
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          local_c = *(float *)*piVar4 + fVar5;
          local_8 = ((float *)*piVar4)[1] - *(float *)(iVar1 + 0x118);
          local_4 = -0.5;
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(iVar1 + 0x158));
          local_c = *(float *)*piVar4 + fVar5;
          local_8 = ((float *)*piVar4)[1] + *(float *)(iVar1 + 0x114);
          local_4 = -0.5;
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          local_c = *(float *)*piVar4 - fVar5;
          local_8 = ((float *)*piVar4)[1] + *(float *)(iVar1 + 0x114);
          local_4 = -0.5;
          (**(code **)(unaff_gp + -0x7dc0))(&local_c);
          (**(code **)(unaff_gp + -0x7dbc))();
          (**(code **)(unaff_gp + -0x7cc8))(0);
          iVar1 = **(int **)(unaff_gp + -0x76d4);
        }
      }
      (**(code **)(unaff_gp + -0x793c))(iVar1,param_1);
    }
  }
  else {
    (**(code **)(unaff_gp + -0x79fc))(*(int *)(iVar2 + 0x3c),param_1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void render_directory(int param_1)

{
  int unaff_gp;
  
  if ((int)(*(uint *)(param_1 + 0x74) << 3) < 0) {
    *(byte *)(param_1 + 0x74) =
         (byte)((*(uint *)(param_1 + 0x74) >> 0x1e & ~**(uint **)(unaff_gp + -0x7670)) << 6) |
         *(byte *)(param_1 + 0x74) & 0x3f;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void render_tree_level(undefined8 param_1,undefined8 param_2,int param_3)

{
  int unaff_gp;
  uint extraout_var;
  undefined4 uVar1;
  uint uVar2;
  double dVar3;
  undefined8 uVar4;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  uVar1 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (*(int *)(param_3 + 0x74) << 3 < 0) {
    (**(code **)(unaff_gp + -0x7e1c))(2);
    (**(code **)(unaff_gp + -0x7db0))((int)*(short *)(param_3 + 0x5e));
    if (*(short *)(param_3 + 0x76) < 0) {
      dVar3 = (double)**(float **)(unaff_gp + -0x75c8) * (double)((ulonglong)extraout_var << 0x20);
      (**(code **)(unaff_gp + -0x78f8))(0,dVar3);
      uVar1 = (undefined4)((ulonglong)dVar3 >> 0x20);
    }
    (**(code **)(unaff_gp + -0x7b48))();
    uVar4 = CONCAT44(uVar1,*(undefined4 *)(param_3 + 0x38));
    (**(code **)(unaff_gp + -0x7b60))(*(undefined4 *)(param_3 + 0x34),uVar4);
    uVar1 = (undefined4)((ulonglong)uVar4 >> 0x20);
    (**(code **)(unaff_gp + -0x7b6c))(*(undefined4 *)(param_3 + 0x58));
    (**(code **)(unaff_gp + -0x7b48))();
    uVar4 = CONCAT44(uVar1,*(undefined4 *)(param_3 + 0x3c));
    (**(code **)(unaff_gp + -0x7b6c))(*(undefined4 *)(param_3 + 0x3c),uVar4);
    uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
    (**(code **)(unaff_gp + -0x794c))(0,0,0x1f);
    (**(code **)(unaff_gp + -0x7b28))();
    (**(code **)(unaff_gp + -0x7b60))(0,(ulonglong)uVar2 << 0x20);
    (**(code **)(unaff_gp + -0x7940))(param_3,1,7,0x1f);
    (**(code **)(unaff_gp + -0x7de8))();
    (**(code **)(unaff_gp + -0x7b28))();
    if (*(int *)(param_3 + 0x28) != 0) {
      (**(code **)(unaff_gp + -0x7e1c))(1);
      (**(code **)(unaff_gp + -0x7db0))((int)*(short *)(param_3 + 0x5e));
      local_c = *(float *)(*(int *)(param_3 + 0x28) + 0x34) + *(float *)(param_3 + 0x4c);
      local_10 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x4480);
      local_8 = (float)((double)*(float *)(*(int *)(param_3 + 0x28) + 0x38) +
                       (double)*(float *)(param_3 + 0x50));
      local_18 = *(undefined4 *)(param_3 + 0x34);
      local_14 = (float)((double)*(float *)(param_3 + 0x38) -
                        (double)*(float *)(param_3 + 0x3c) /
                        (double)((ulonglong)(double)*(float *)(param_3 + 0x50) & 0xffffffff00000000)
                        );
      local_4 = local_10;
      (**(code **)(unaff_gp + -0x7b7c))();
      (**(code **)(unaff_gp + -0x7dc0))(&local_c);
      (**(code **)(unaff_gp + -0x7dc0))(&local_18);
      (**(code **)(unaff_gp + -0x7b94))();
      (**(code **)(unaff_gp + -0x7de8))();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_rendering(void)

{
  int unaff_gp;
  
  if (**(char **)(unaff_gp + -0x75dc) == '\0') {
    (**(code **)(unaff_gp + -0x7720))(*(int *)(unaff_gp + -0x7f94) + 0x6c70);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void flush_rendering(int param_1)

{
  int unaff_gp;
  
  if ((**(char **)(unaff_gp + -0x75dc) == '\0') && (*(int *)(param_1 + 0x74) << 10 < 0)) {
    (**(code **)(unaff_gp + -0x7a84))(0,param_1);
    (**(code **)(unaff_gp + -0x7714))(*(int *)(unaff_gp + -0x7f94) + 0x6c70,param_1 + 0x60);
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xdf;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void setup_rendering(void)

{
  int iVar1;
  int unaff_gp;
  
  if (*(char *)(*(int *)(unaff_gp + -0x7f98) + 0x7904) == '\0') {
    (*(code *)(*(int *)(unaff_gp + -0x7fe0) + -0x7d78))(**(undefined4 **)(unaff_gp + -0x75f0));
    *(undefined1 *)(*(int *)(unaff_gp + -0x7f98) + 0x7904) = 1;
  }
  iVar1 = *(int *)(unaff_gp + -0x75dc);
  (**(code **)(unaff_gp + -0x78d8))
            (*(undefined4 *)(iVar1 + 0x164),**(undefined4 **)(unaff_gp + -0x768c),7);
  (**(code **)(unaff_gp + -0x78d8))
            (*(undefined4 *)(iVar1 + 0x18c),**(undefined4 **)(unaff_gp + -0x76a8),0);
  (**(code **)(unaff_gp + -0x78d8))
            (*(undefined4 *)(iVar1 + 400),**(undefined4 **)(unaff_gp + -0x76a4),1);
  (**(code **)(unaff_gp + -0x78d8))
            (*(undefined4 *)(iVar1 + 0x194),**(undefined4 **)(unaff_gp + -0x76a0),2);
  (**(code **)(unaff_gp + -0x78d8))
            (*(undefined4 *)(iVar1 + 0x198),**(undefined4 **)(unaff_gp + -0x769c),3);
  (**(code **)(unaff_gp + -0x78d8))
            (*(undefined4 *)(iVar1 + 0x19c),**(undefined4 **)(unaff_gp + -0x7698),4);
  (**(code **)(unaff_gp + -0x78d8))
            (*(undefined4 *)(iVar1 + 0x1a0),**(undefined4 **)(unaff_gp + -0x7694),5);
  (**(code **)(unaff_gp + -0x78d8))
            (*(undefined4 *)(iVar1 + 0x1a4),**(undefined4 **)(unaff_gp + -0x7690),6);
  (**(code **)(unaff_gp + -0x78d0))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_render_state(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_gp;
  undefined4 local_30 [2];
  int local_28;
  undefined4 *local_24;
  int local_20;
  undefined4 local_1c;
  
  local_24 = local_30;
  local_28 = *(int *)(unaff_gp + -0x7f5c) + 0x9a;
  (**(code **)(unaff_gp + -0x7c9c))(**(undefined4 **)(unaff_gp + -0x75f0),&local_28,1);
  puVar1 = *(undefined4 **)(unaff_gp + -0x75e8);
  piVar2 = *(int **)(unaff_gp + -0x7688);
  iVar3 = *(int *)(unaff_gp + -0x75c4);
  puVar4 = puVar1 + 7;
  do {
    (*(code *)(*(int *)(unaff_gp + -0x7fe0) + -0x7340))
              (*(undefined4 *)(*piVar2 + 4),iVar3,*puVar1,local_30[0]);
    puVar1 = puVar1 + 1;
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + 0x10;
  } while (puVar1 != puVar4);
  iVar3 = *(int *)(unaff_gp + -0x75dc);
  if (*(char *)(iVar3 + 4) == '\0') {
    puVar1 = *(undefined4 **)(unaff_gp + -0x75d8);
    (*(code *)(*(int *)(unaff_gp + -0x7fe0) + -0x7340))
              (*(undefined4 *)(iVar3 + 0x148),puVar1,
               *(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x2c),local_30[0]);
  }
  else {
    puVar1 = *(undefined4 **)(unaff_gp + -0x75d8);
    (*(code *)(*(int *)(unaff_gp + -0x7fe0) + -0x7340))
              (*(undefined4 *)(iVar3 + 0x14c),puVar1,
               *(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x2c),local_30[0]);
  }
  if (*(int *)(**(int **)(unaff_gp + -0x7678) + 0x2c) != 0) {
    local_24 = (undefined4 *)puVar1[1];
    local_1c = *puVar1;
    local_28 = *(int *)(unaff_gp + -0x7f5c) + 0xd6;
    local_20 = *(int *)(unaff_gp + -0x7f5c) + 0x34;
    (**(code **)(unaff_gp + -0x7cc0))
              (*(undefined4 *)(**(int **)(unaff_gp + -0x7678) + 0x2c),&local_28,2);
  }
  (*(code *)(*(int *)(unaff_gp + -0x7fe0) + -0x7340))
            (*(undefined4 *)(iVar3 + 0x174),*(undefined4 *)(unaff_gp + -0x75c0),
             **(undefined4 **)(unaff_gp + -0x75ec),local_30[0]);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
