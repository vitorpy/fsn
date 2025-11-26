/**
 * display.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "display.h"
#include "fsn_types.h"
#include "fsn_state.h"

void update_display(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int unaff_gp;
  float fVar4;
  undefined4 uVar5;
  uint in_register_00001010;
  double dVar6;
  double in_f6;
  float fVar7;
  undefined4 in_f11;
  
  (**(code **)(unaff_gp + -0x7848))();
  (**(code **)(unaff_gp + -0x7f20))(*(int *)(unaff_gp + -0x7f94) + 0x66ac);
  piVar1 = *(int **)(unaff_gp + -0x76dc);
  **(undefined4 **)(unaff_gp + -0x75cc) = 0;
  iVar2 = *piVar1;
  **(undefined4 **)(unaff_gp + -0x75c8) = 0;
  **(undefined4 **)(unaff_gp + -0x75d4) = 0;
  **(undefined4 **)(unaff_gp + -0x75d0) = 0;
  if (iVar2 == 0) {
    in_f6 = (double)CONCAT44((int)((ulonglong)in_f6 >> 0x20),0x3f800000);
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x66b0) = 0x3f800000;
  }
  else {
    fVar4 = (float)(*(code *)(*(int *)(unaff_gp + -0x7fe8) + 0x1774))
                             (*(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x184));
    *(float *)(*(int *)(unaff_gp + -0x7f94) + 0x66b0) =
         *(float *)(*(int *)(unaff_gp + -0x75dc) + 0x68) / fVar4;
  }
  piVar1 = *(int **)(unaff_gp + -0x76d4);
  *(undefined4 *)(*piVar1 + 0x2c) = 0;
  *(undefined4 *)(*piVar1 + 0x30) = 0;
  (**(code **)(unaff_gp + -0x7a70))(*piVar1);
  uVar5 = (undefined4)((ulonglong)in_f6 >> 0x20);
  if (**(int **)(unaff_gp + -0x76dc) == 0) {
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x66b0) = 0x3f800000;
  }
  else {
    iVar2 = **(int **)(unaff_gp + -0x76d8);
    if (iVar2 == 0) {
      *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x66b4) = 0x3f800000;
    }
    else if ((iVar2 == 1) || (iVar2 != 2)) {
      fVar4 = (float)(*(code *)(*(int *)(unaff_gp + -0x7fe8) + 0x1774))
                               (*(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x18c));
      fVar7 = *(float *)(*(int *)(unaff_gp + -0x75dc) + 0x6c);
      in_f6 = (double)CONCAT44(uVar5,fVar7);
      *(float *)(*(int *)(unaff_gp + -0x7f94) + 0x66b4) = fVar7 / fVar4;
    }
    else {
      fVar4 = (float)(*(code *)(*(int *)(unaff_gp + -0x7fe8) + 0x1774))
                               (*(undefined4 *)(*piVar1 + 0x20));
      in_f6 = (double)*(float *)(*(int *)(unaff_gp + -0x75dc) + 0x6c);
      *(float *)(*(int *)(unaff_gp + -0x7f94) + 0x66b4) = (float)(in_f6 / (double)fVar4);
    }
  }
  dVar6 = (double)*(float *)(*piVar1 + 0x3c);
  fVar4 = (float)(**(code **)(unaff_gp + -0x7b64))
                           (*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x104),
                            (float)((dVar6 / (double)((ulonglong)in_f6 & 0xffffffff00000000)) /
                                   (double)*(float *)(*(int *)(unaff_gp + -0x75dc) + 0x108)));
  (**(code **)(unaff_gp + -0x7a6c))
            (*piVar1,param_2,0,0,in_f11,
             SUB84((double)((ulonglong)dVar6 & 0xffffffff00000000) / (double)fVar4,0));
  (**(code **)(unaff_gp + -0x7a68))(*piVar1,param_2,0,0);
  uVar5 = (**(code **)(unaff_gp + -0x7b64))
                    (*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x104),
                     **(float **)(unaff_gp + -0x75c8) /
                     *(float *)(*(int *)(unaff_gp + -0x75dc) + 0x108));
  **(undefined4 **)(unaff_gp + -0x75b8) = uVar5;
  pcVar3 = *(code **)(unaff_gp + -0x783c);
  **(float **)(unaff_gp + -0x75d0) =
       (float)((double)**(float **)(unaff_gp + -0x75d0) +
              (double)((ulonglong)in_register_00001010 << 0x20));
  **(float **)(unaff_gp + -0x75d4) =
       (float)((double)**(float **)(unaff_gp + -0x75d4) -
              (double)((ulonglong)in_register_00001010 << 0x20));
  dVar6 = (double)**(float **)(unaff_gp + -0x75c8);
  **(float **)(unaff_gp + -0x75c8) =
       (float)(dVar6 + (double)((ulonglong)in_register_00001010 << 0x20));
  **(float **)(unaff_gp + -0x75cc) =
       (float)((double)-*(float *)(*piVar1 + 0x3c) / (double)((ulonglong)dVar6 & 0xffffffff00000000)
              - (double)((ulonglong)in_register_00001010 << 0x20));
  (*pcVar3)();
  (**(code **)(unaff_gp + -0x7978))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_database_display(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7e94))
            (**(undefined4 **)(unaff_gp + -0x7600),900000,*(undefined4 *)(unaff_gp + -0x7a4c),0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void update_context_display(int param_1,int param_2)

{
  int iVar1;
  int unaff_gp;
  float fVar2;
  uint uVar3;
  undefined8 in_f18;
  
  uVar3 = (uint)((ulonglong)in_f18 >> 0x20);
  if (param_1 != 0) {
    if (param_1 != *(int *)(**(int **)(unaff_gp + -0x7684) + 0x3c)) {
      (**(code **)(unaff_gp + -0x7aa4))();
    }
    if (param_2 != 0) {
      iVar1 = *(int *)(unaff_gp + -0x75dc);
      if (*(char *)(iVar1 + 5) == '\0') {
        fVar2 = *(float *)(iVar1 + 0xa0);
      }
      else {
        fVar2 = *(float *)(iVar1 + 0xa0);
      }
      (**(code **)(unaff_gp + -0x7aa8))
                ((double)*(float *)(param_2 + 0x14) -
                 (double)*(float *)(**(int **)(unaff_gp + -0x7684) + 0x14) * (double)fVar2,
                 ((double)*(float *)(param_2 + 0x18) +
                 (double)*(float *)(param_1 + 0x3c) / (double)((ulonglong)uVar3 << 0x20)) -
                 (double)*(float *)(**(int **)(unaff_gp + -0x7684) + 0x18) * (double)fVar2);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void refresh_display(void)

{
  int unaff_gp;
  
  if (**(char **)(unaff_gp + -0x76c4) != '\0') {
    (**(code **)(unaff_gp + -0x79a0))();
    (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x160));
    (**(code **)(unaff_gp + -0x7cf8))();
    if (**(int **)(unaff_gp + -0x76d4) != 0) {
      (**(code **)(unaff_gp + -0x7990))(**(int **)(unaff_gp + -0x76d4),0);
    }
    (**(code **)(unaff_gp + -0x7b54))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void update_fam_display(void)

{
  float fVar1;
  int unaff_gp;
  byte in_fcsr;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  
  if (**(char **)(unaff_gp + -0x76c4) != '\0') {
    local_48 = *(int *)(unaff_gp + -0x7f5c) + 0xea;
    fVar1 = (**(float **)(unaff_gp + -0x75d0) - **(float **)(unaff_gp + -0x75d4)) *
            *(float *)(*(int *)(unaff_gp + -0x7f94) + 0x6bf0);
    local_50 = *(int *)(unaff_gp + -0x7f5c) + 0x368;
    if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
      fVar1 = ROUND(fVar1);
    }
    else {
      fVar1 = FLOOR(fVar1);
    }
    local_4c = (int)fVar1;
    fVar1 = (**(float **)(unaff_gp + -0x75c8) - **(float **)(unaff_gp + -0x75cc)) *
            *(float *)(*(int *)(unaff_gp + -0x7f94) + 0x6bf4);
    if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
      fVar1 = ROUND(fVar1);
    }
    else {
      fVar1 = FLOOR(fVar1);
    }
    local_44 = (int)fVar1;
    (**(code **)(unaff_gp + -0x7cc0))
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c0c),&local_50,2);
    (**(code **)(unaff_gp + -0x79a0))();
    (**(code **)(unaff_gp + -0x7b78))
              (**(undefined4 **)(unaff_gp + -0x75d4),**(undefined4 **)(unaff_gp + -0x75d0));
    (**(code **)(unaff_gp + -0x798c))();
    (**(code **)(unaff_gp + -0x799c))();
    (**(code **)(unaff_gp + -0x7b78))
              (**(undefined4 **)(unaff_gp + -0x75d4),**(undefined4 **)(unaff_gp + -0x75d0));
    (**(code **)(unaff_gp + -0x7984))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_display_mode(void)

{
  int iVar1;
  int unaff_gp;
  
  if (*(char *)(*(int *)(unaff_gp + -0x7f98) + 0x6f04) == '\0') {
    iVar1 = (**(code **)(unaff_gp + -0x7cbc))(0x11);
    if (iVar1 < 2) {
      *(undefined1 *)(*(int *)(unaff_gp + -0x7f98) + 0x6f00) = 1;
    }
    *(undefined1 *)(*(int *)(unaff_gp + -0x7f98) + 0x6f04) = 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_display_lists(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int unaff_gp;
  undefined4 uVar9;
  uint uVar10;
  undefined8 in_f4;
  short local_1000 [2048];
  
  uVar10 = (uint)((ulonglong)in_f4 >> 0x20);
  piVar5 = *(int **)(unaff_gp + -0x76d4);
  if (*piVar5 != 0) {
    (**(code **)(unaff_gp + -0x7de0))();
    (**(code **)(unaff_gp + -0x7d70))(local_1000,0x800);
    piVar3 = *(int **)(unaff_gp + -0x7684);
    (**(code **)(unaff_gp + -0x7b6c))
              ((float)((double)((ulonglong)uVar10 << 0x20) / (double)*(float *)(*piVar3 + 0x34)));
    (**(code **)(unaff_gp + -0x7b68))((int)*(short *)(*piVar3 + 0xe),0x78);
    (**(code **)(unaff_gp + -0x7b68))((int)*(short *)(*piVar3 + 0xc),0x7a);
    iVar1 = *piVar3;
    uVar9 = (**(code **)(unaff_gp + -0x7b64))
                      (*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x104),
                       (*(float *)(iVar1 + 4) -
                       *(float *)(iVar1 + 0x18) * *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 8))
                       / *(float *)(*(int *)(unaff_gp + -0x75dc) + 0x108));
    (**(code **)(unaff_gp + -0x7b6c))(uVar9);
    (**(code **)(unaff_gp + -0x7b60))(-*(float *)*piVar3,-((float *)*piVar3)[1]);
    (**(code **)(unaff_gp + -0x7934))(*piVar5);
    iVar1 = (**(code **)(unaff_gp + -0x7d6c))(local_1000);
    if (iVar1 < 0) {
      (**(code **)(unaff_gp + -0x7930))(*piVar5);
    }
    iVar4 = 0;
    iVar7 = 0;
    if (0 < iVar1) {
      puVar8 = *(uint **)(unaff_gp + -0x7670);
      do {
        iVar6 = (int)local_1000[iVar4];
        if (iVar6 == 1) {
          iVar2 = (**(code **)(unaff_gp + -0x7a7c))((int)local_1000[iVar4 + 1]);
          *(byte *)(iVar2 + 0x74) =
               (byte)((*(uint *)(iVar2 + 0x74) >> 0x1e | *puVar8) << 6) |
               *(byte *)(iVar2 + 0x74) & 0x3f;
        }
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + 1 + iVar6;
      } while (iVar7 != iVar1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void refresh_list_display(void)

{
  code *pcVar1;
  int unaff_gp;
  
  if (*(int *)(*(int *)(unaff_gp + -0x7f98) + 0x7990) != 0) {
    (*(code *)(*(int *)(unaff_gp + -0x7fe0) + -0x6b9c))();
    (**(code **)(unaff_gp + -0x7ae0))();
    (**(code **)(unaff_gp + -0x7cfc))(0);
    (**(code **)(unaff_gp + -0x7cf8))();
    pcVar1 = *(code **)(unaff_gp + -0x7984);
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x7990) = 0;
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x7994) = 0;
    (*pcVar1)();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void update_legend_display(void)

{
  uint in_register_00001000;
  uint extraout_var;
  double dVar1;
  double dVar2;
  double dVar3;
  uint in_fcsr;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_8;
  int local_4;
  
  rgb_to_hsv((double)(float)((double)(**(uint **)(PTR_PTR_100094ec + 4) & 0xff) /
                            (double)((ulonglong)in_register_00001000 << 0x20)),
             (double)(float)((double)((int)**(uint **)(PTR_PTR_100094ec + 4) >> 8 & 0xff) /
                            (double)((ulonglong)in_register_00001000 << 0x20)));
  dVar1 = (double)local_38 * (double)((ulonglong)extraout_var << 0x20);
  local_8 = 0xf66187b;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    dVar1 = ROUND(dVar1);
  }
  else {
    dVar1 = FLOOR(dVar1);
  }
  dVar3 = (double)local_3c * (double)((ulonglong)extraout_var << 0x20);
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    dVar3 = ROUND(dVar3);
  }
  else {
    dVar3 = FLOOR(dVar3);
  }
  dVar2 = (double)local_34 * (double)((ulonglong)extraout_var << 0x20);
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    dVar2 = ROUND(dVar2);
  }
  else {
    dVar2 = FLOOR(dVar2);
  }
  local_4 = (int)dVar2;
  XtSetValues(pref_hue_scale,&local_8,1);
  local_8 = 0xf66187b;
  local_4 = (int)dVar1;
  XtSetValues(pref_sat_scale,&local_8,1);
  local_8 = 0xf66187b;
  local_4 = (int)dVar3;
  XtSetValues(pref_val_scale,&local_8,1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void displayHourglass(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 auStack_20 [3];
  undefined4 auStack_14 [3];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (busy_cursor == 0) {
    uVar1 = XtWindow();
    uStack_4 = XCreateBitmapFromData(display,uVar1,&cursor_buffer,0x20,0x20);
    uVar1 = XtWindow(param_1);
    uStack_8 = XCreateBitmapFromData(display,uVar1,&shell_arg_buffer,0x20,0x20);
    iVar2 = XtScreen(param_1);
    auStack_20[0] = *(undefined4 *)(iVar2 + 0x38);
    iVar2 = XtScreen(param_1);
    auStack_14[0] = *(undefined4 *)(iVar2 + 0x34);
    iVar2 = XtScreen(param_1);
    XQueryColors(display,*(undefined4 *)(iVar2 + 0x30),auStack_20,2);
    busy_cursor = XCreatePixmapCursor(display,uStack_4,uStack_8,auStack_20,auStack_14,0xf,0xf);
    XFreePixmap(display,uStack_4);
    XFreePixmap(display,uStack_8);
  }
  uVar1 = XtWindow(param_1);
  XDefineCursor(display,uVar1,busy_cursor);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void undisplayHourglass(void)

{
  undefined4 uVar1;
  
  uVar1 = XtWindow();
  XUndefineCursor(display,uVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
