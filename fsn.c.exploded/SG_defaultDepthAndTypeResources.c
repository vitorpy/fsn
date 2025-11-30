/**
 * SG_defaultDepthAndTypeResources
 *
 * Extracted from fsn.c lines 55756-56036
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
