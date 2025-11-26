/**
 * resources.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "resources.h"
#include "fsn_types.h"
#include "fsn_state.h"

void destroy_gl_resources(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_gp;
  double dVar3;
  uint uVar4;
  undefined8 in_f10;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  
  uVar4 = (uint)((ulonglong)in_f10 >> 0x20);
  if (**(char **)(unaff_gp + -0x76c4) != '\0') {
    (**(code **)(unaff_gp + -0x799c))();
    (**(code **)(unaff_gp + -0x7cfc))(0);
    (**(code **)(unaff_gp + -0x7cf8))();
    (**(code **)(unaff_gp + -0x7cfc))(*(undefined2 *)(*(int *)(unaff_gp + -0x7604) + 2));
    dVar3 = (double)*(float *)(param_1 + 0x3c) / (double)((ulonglong)uVar4 << 0x20);
    (**(code **)(unaff_gp + -0x7e20))
              ((float)((double)*(float *)(param_1 + 0x34) -
                      dVar3 * (double)*(float *)(param_1 + 0x58)),
               (float)((double)*(float *)(param_1 + 0x38) - dVar3));
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 != 0) {
      local_c = *(float *)(iVar2 + 0x34) + *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x58);
      local_8 = (float)((double)*(float *)(iVar2 + 0x38) + (double)*(float *)(param_1 + 0x50));
      local_14 = *(undefined4 *)(param_1 + 0x34);
      local_10 = (float)((double)*(float *)(param_1 + 0x38) +
                        (double)-*(float *)(param_1 + 0x3c) /
                        (double)((ulonglong)(double)*(float *)(iVar2 + 0x38) & 0xffffffff00000000));
      (**(code **)(unaff_gp + -0x7b7c))();
      (**(code **)(unaff_gp + -0x7e08))(&local_c);
      (**(code **)(unaff_gp + -0x7e08))(&local_14);
      (**(code **)(unaff_gp + -0x7b94))();
    }
    (**(code **)(unaff_gp + -0x7b48))();
    (**(code **)(unaff_gp + -0x7b78))();
    (**(code **)(unaff_gp + -0x7e10))
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x45a0),
               *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x459c));
    uVar1 = (**(code **)(unaff_gp + -0x7a84))(0,param_1);
    (**(code **)(unaff_gp + -0x7da8))(uVar1);
    (**(code **)(unaff_gp + -0x7b28))();
    (*(code *)(*(int *)(unaff_gp + -0x7fe4) + 0xacc))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void initResources(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  XtAppAddConverter(app_context,0xf661c25,"CpColor",cp_color_converter,0,0);
  XtGetApplicationResources(param_1,&landscape_name,&PTR_s_landscape_10008918,1,0,0);
  if (landscape_name == (char *)0x0) {
    iVar1 = getgdesc(9);
    if (iVar1 < 4) {
      landscape_name = "indigo";
    }
    else {
      landscape_name = "grass";
    }
  }
  if (landscape_name == (char *)0x0) {
    XtGetApplicationResources(param_1,&fsn_resources,&PTR_s_noscan_10007c30,0x76,0,0);
  }
  else {
    uVar2 = XtCreateWidget(landscape_name,applicationShellWidgetClass,param_1,0,0);
    XtGetApplicationResources(uVar2,&fsn_resources,&PTR_s_noscan_10007c30,0x76,0,0);
    XtDestroyWidget(uVar2);
  }
  init_icon_resources(param_1,&icon_resource_1,&icon_resource_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_toplevel_resources(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7e5c))
            (**(undefined4 **)(unaff_gp + -0x7600),*(int *)(unaff_gp + -0x7f5c) + 0x705,
             *(int *)(unaff_gp + -0x7fa4) + 0x2c2c,*(int *)(unaff_gp + -0x7fe0) + -0x4908,0,0);
  (**(code **)(unaff_gp + -0x7e54))
            (param_1,*(int *)(unaff_gp + -0x7f94) + 0x6e20,*(int *)(unaff_gp + -0x7f94) + -0x76e8,1,
             0,0);
  iVar3 = *(int *)(*(int *)(unaff_gp + -0x7f94) + 0x6e20);
  if (iVar3 == 0) {
    iVar3 = (**(code **)(unaff_gp + -0x7cbc))(9);
    piVar2 = (int *)(*(int *)(unaff_gp + -0x7f94) + 0x6e20);
    if (iVar3 < 4) {
      iVar3 = *(int *)(unaff_gp + -0x7fa4) + 0x2c34;
      *piVar2 = iVar3;
    }
    else {
      iVar3 = *(int *)(unaff_gp + -0x7fa4) + 0x2c3c;
      *piVar2 = iVar3;
    }
  }
  if (iVar3 == 0) {
    (**(code **)(unaff_gp + -0x7e54))
              (param_1,*(undefined4 *)(unaff_gp + -0x75dc),*(int *)(unaff_gp + -0x7f98) + 0x7c30,
               0x76,0,0);
  }
  else {
    uVar1 = (**(code **)(unaff_gp + -0x7c64))
                      (iVar3,**(undefined4 **)(unaff_gp + -0x7f7c),param_1,0,0);
    (**(code **)(unaff_gp + -0x7e54))
              (uVar1,*(undefined4 *)(unaff_gp + -0x75dc),*(int *)(unaff_gp + -0x7f98) + 0x7c30,0x76,
               0,0);
    (**(code **)(unaff_gp + -0x7ec8))(uVar1);
  }
  (**(code **)(unaff_gp + -0x77f0))
            (param_1,*(int *)(unaff_gp + -0x7fa4) + 0x2c44,*(int *)(unaff_gp + -0x7fa4) + 0x2c4c);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

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
      param_4 = &log_buf_0;
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
    iVar5 = get_bytecode_context();
    if ((((bVar2) || (*(uint *)(iVar5 + 0x24) == (uint)*param_4)) &&
        ((bVar1 || (*param_3 == *(uint *)(iVar5 + *(int *)(iVar5 + 0x24) * 4 + 0x3c))))) &&
       ((bVar3 || (*param_6 == *(uint *)(iVar5 + *(int *)(iVar5 + 0x24) * 4 + 0x50))))) {
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
            format_log_message(param_1,_imsgs._424_4_,param_4,*pbVar13,&log_buf_1,&log_buf_2);
            *pbVar13 = 0;
            format_log_message(param_1,_imsgs._428_4_,param_4,&log_buf_3,&log_buf_4,&log_buf_5);
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
        pcVar14 = *(char **)(iVar5 + *(uint *)(iVar5 + 0x24) * 4 + 100);
        *param_5 = *(uint *)(iVar5 + 0x24);
      }
      else {
        iVar7 = strcasecmp("UNDERLAY",(char *)local_resc);
        if (iVar7 == 0) {
          pcVar14 = *(char **)(iVar5 + *(uint *)(iVar5 + 0x24) * 4 + 100);
          *param_5 = *(uint *)(iVar5 + 0x24);
          bVar4 = true;
          format_log_message(param_1,_imsgs._432_4_,&log_buf_13,&log_buf_14,&log_buf_15,
                       &log_buf_16);
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
                pcVar14 = *(char **)(iVar5 + *(uint *)(iVar5 + 0x24) * 4 + 100);
                *param_5 = *(uint *)(iVar5 + 0x24);
                bVar4 = true;
              }
            }
          }
        }
      }
      iVar7 = 0;
      if ((bVar1) && (*(uint *)(iVar5 + 0x24) == *param_5)) {
        *param_3 = *(uint *)(iVar5 + *(uint *)(iVar5 + 0x24) * 4 + 0x3c);
      }
      iVar12 = *(int *)(iVar5 + 0x18);
      iVar11 = 0;
      iVar9 = 0;
      if (0 < iVar12) {
        puVar10 = *(uint **)(iVar5 + 0x20);
        do {
          uVar6 = *puVar10;
          if (uVar6 == *param_5) {
            if (((int)*param_3 < 0) ||
               (*(uint *)(*(int *)(iVar5 + 0x14) + iVar9 * 0x28 + 0x10) == *param_3)) break;
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
          halt_baddata();
        }
        uVar6 = *param_5;
        if (uVar6 == 1) {
          *param_5 = 2;
          bVar4 = true;
          pcVar14 = "NORMAL";
        }
        else if (uVar6 == 2) {
          pcVar14 = *(char **)(iVar5 + *(uint *)(iVar5 + 0x24) * 4 + 100);
          *param_5 = *(uint *)(iVar5 + 0x24);
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
            pcVar14 = *(char **)(iVar5 + *(uint *)(iVar5 + 0x24) * 4 + 100);
            *param_5 = *(uint *)(iVar5 + 0x24);
          }
        }
      }
      uVar6 = *param_5;
      do {
        puVar10 = param_3;
        if (bVar1) {
          puVar10 = (uint *)0x0;
        }
        local_4 = parse_data_multi(param_1,param_2,puVar10,uVar6,*param_6);
        if ((local_4 == 0) && (uVar6 < 5)) {
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
      } while (local_4 == 0);
      if (((((!bVar3) && (local_4 != *param_6)) && (*param_6 != 0)) ||
          (((!bVar2 && (uVar6 != *param_5)) || (bVar4)))) &&
         (((!bVar3 || (*param_5 != 3)) || (uVar6 != 4)))) {
        format_log_message(param_1,_imsgs._436_4_,local_resc,*param_6,&log_buf_43,&log_buf_44);
        format_log_message(param_1,_imsgs._444_4_,pcVar14,local_4,&log_buf_45,&log_buf_46);
      }
      *param_6 = local_4;
      if (param_5 != (uint *)0x0) {
        *param_5 = uVar6;
      }
      puVar10 = param_3;
      if (bVar1) {
        puVar10 = (uint *)0x0;
      }
      uVar8 = format_data_output(param_1,param_2,uVar6,local_4,puVar10);
      *param_3 = uVar8;
      if (param_7 != (int *)0x0) {
        iVar5 = read_bytecode_value(param_1,param_2,local_4,param_3,uVar6);
        *param_7 = iVar5;
        if (-1 < *param_7) {
          iVar5 = *(int *)(param_1 + 0x8c) + param_2 * 0x50;
          if (*param_7 == *(int *)(iVar5 + 0x28)) {
            if (param_8 != (int *)0x0) {
              *param_8 = *(int *)(iVar5 + 0x30);
            }
          }
          else if (param_8 != (int *)0x0) {
            iVar5 = eval_bytecode_instruction(param_1,param_2);
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
        format_log_message(param_1,_imsgs._448_4_,&log_buf_47,&log_buf_48,&log_buf_49,&log_buf_50)
        ;
        local_20 = '\x01';
      }
      if ((param_8 != (int *)0x0) && (*param_8 < 1)) {
        format_log_message(param_1,_imsgs._452_4_,&log_buf_51,&log_buf_52,&log_buf_53,&log_buf_54)
        ;
        local_20 = local_20 + '\x01';
      }
      if ((param_9 != (int *)0x0) && (*param_9 < 1)) {
        format_log_message(param_1,_imsgs._456_4_,&log_buf_55,&log_buf_56,&log_buf_57,&log_buf_58)
        ;
        local_20 = local_20 + '\x01';
      }
      if (local_20 != '\0') {
        param_2 = param_2 * 0x50;
        format_log_message(param_1,_imsgs._460_4_,&log_buf_59,&log_buf_60,&log_buf_61,&log_buf_62)
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
  halt_baddata();
}

void LoadIntlResources(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined **ppuVar1;
  undefined4 *__ptr;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  
  __ptr = (undefined4 *)malloc(0xcb0);
  iVar3 = 0;
  ppuVar7 = &PTR_s__SGI_MMX_mwm_nogrmem_10009670;
  iVar5 = 4;
  iVar6 = 8;
  iVar4 = 0xc;
  puVar2 = __ptr;
  do {
    puVar2[1] = 0;
    puVar2[2] = 0xf661c25;
    puVar2[3] = 4;
    puVar2[5] = 0xf661c25;
    puVar2[4] = iVar3;
    iVar3 = iVar3 + 0x10;
    *puVar2 = *ppuVar7;
    puVar8 = ppuVar7[1];
    puVar2[0xb] = iVar5;
    puVar2[0xc] = 0xf661c25;
    puVar2[10] = 4;
    puVar2[9] = 0xf661c25;
    puVar2[8] = 0;
    puVar2[6] = puVar8;
    iVar5 = iVar5 + 0x10;
    puVar2[7] = ppuVar7[2];
    puVar8 = ppuVar7[3];
    puVar2[0x12] = iVar6;
    puVar2[0x13] = 0xf661c25;
    puVar2[0x11] = 4;
    puVar2[0x10] = 0xf661c25;
    puVar2[0xf] = 0;
    puVar2[0xd] = puVar8;
    iVar6 = iVar6 + 0x10;
    puVar2[0xe] = ppuVar7[4];
    puVar8 = ppuVar7[5];
    puVar2[0x19] = iVar4;
    puVar2[0x1a] = 0xf661c25;
    puVar2[0x18] = 4;
    puVar2[0x17] = 0xf661c25;
    puVar2[0x16] = 0;
    puVar2[0x14] = puVar8;
    iVar4 = iVar4 + 0x10;
    puVar2[0x15] = ppuVar7[6];
    ppuVar1 = ppuVar7 + 7;
    ppuVar7 = ppuVar7 + 8;
    puVar2[0x1b] = *ppuVar1;
    puVar2 = puVar2 + 0x1c;
  } while (iVar4 != 0x1dc);
  XtGetSubresources(param_1,_imsgs,param_2,param_3,__ptr,0x74,0,0);
  free(__ptr);
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
