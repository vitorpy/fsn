/**
 * network.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "network.h"
#include "fsn_types.h"
#include "fsn_state.h"

void connect_network(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int unaff_gp;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  int local_4;
  
  piVar1 = (int *)(**(code **)(unaff_gp + -0x7b5c))(0x17a0);
  local_18 = 2;
  local_14 = param_2;
  iVar2 = (**(code **)(unaff_gp + -0x7c88))(&local_18,param_3,param_4,6);
  local_16 = (undefined2)iVar2;
  if ((iVar2 != 0) && (local_4 = (**(code **)(unaff_gp + -0x7c6c))(2,2,0), -1 < local_4)) {
    iVar2 = (**(code **)(unaff_gp + -0x7c50))(local_4,&local_18,0x10);
    if (iVar2 < 0) {
      (**(code **)(unaff_gp + -0x7da4))(local_4);
    }
    else {
      iVar2 = *param_1;
      *param_1 = (int)piVar1;
      piVar1[5] = (int)(piVar1 + 7);
      piVar1[6] = (int)(piVar1 + 7);
      *piVar1 = local_4;
      piVar1[3] = 0;
      piVar1[4] = 0;
      piVar1[0x2f7] = (int)(piVar1 + 0x2f9);
      piVar1[0x2f8] = (int)(piVar1 + 0x2f9);
      piVar1[0x2f6] = 0;
      piVar1[0x2f5] = 1;
      piVar1[2] = 0;
      piVar1[0x5e7] = 0;
      piVar1[1] = iVar2;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void __ct__6ClientFv(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)__nw__FUi(4), param_1 != (undefined4 *)0x0)) {
    *param_1 = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void AddServer__6ClientFliT2(int *param_1,in_addr_t param_2,u_long param_3,u_long param_4)

{
  undefined2 extraout_var;
  int *piVar1;
  int iVar2;
  sockaddr_in sStack_18;
  int iStack_4;
  
  piVar1 = (int *)__nw__FUi(0x17a0);
  sStack_18.sin_family = 2;
  sStack_18.sin_addr.s_addr = param_2;
  sStack_18.sin_port = pmap_getport(&sStack_18,param_3,param_4,6);
  if ((CONCAT22(extraout_var,sStack_18.sin_port) != 0) && (iStack_4 = socket(2,2,0), -1 < iStack_4))
  {
    iVar2 = connect(iStack_4,(sockaddr *)&sStack_18,0x10);
    if (iVar2 < 0) {
      close(iStack_4);
    }
    else {
      iVar2 = *param_1;
      *param_1 = (int)piVar1;
      piVar1[5] = (int)(piVar1 + 7);
      piVar1[6] = (int)(piVar1 + 7);
      *piVar1 = iStack_4;
      piVar1[3] = 0;
      piVar1[4] = 0;
      piVar1[0x2f7] = (int)(piVar1 + 0x2f9);
      piVar1[0x2f8] = (int)(piVar1 + 0x2f9);
      piVar1[0x2f6] = 0;
      piVar1[0x2f5] = 1;
      piVar1[2] = 0;
      piVar1[0x5e7] = 0;
      piVar1[1] = iVar2;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void WriteToServer__6ClientFiPcT1(undefined4 param_1,int param_2,void *param_3,size_t param_4)

{
  ssize_t sVar1;
  size_t sStackX_c;
  undefined1 auStack_4 [4];
  
  sStackX_c = param_4;
  putword__FPcPl(auStack_4,&sStackX_c);
  sVar1 = write(param_2,auStack_4,4);
  if (sVar1 == 4) {
    write(param_2,param_3,sStackX_c);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void DoClientIn__6ClientFP11ServerEntry(undefined4 param_1,int *param_2)

{
  ssize_t sVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iStack_4;
  
  if (param_2[4] == 0) {
    piVar2 = (int *)param_2[5];
    piVar4 = param_2 + 7;
    if (piVar4 != piVar2) {
      piVar3 = piVar4;
      if (piVar2 < (int *)param_2[6]) {
        do {
          *(undefined1 *)piVar3 = *(undefined1 *)piVar2;
          piVar2 = (int *)((int)piVar2 + 1);
          piVar3 = (int *)((int)piVar3 + 1);
        } while (piVar2 < (int *)param_2[6]);
      }
      param_2[5] = (int)piVar4;
      param_2[6] = (int)piVar3;
    }
    sVar1 = read(*param_2,(void *)param_2[6],(int)param_2 + (0xbd4 - param_2[6]));
    if (sVar1 != -1) {
      if (sVar1 == 0) {
        param_2[0x5e7] = 1;
      }
      else {
        iVar5 = param_2[6];
        param_2[6] = iVar5 + sVar1;
        if (((iVar5 + sVar1) - (int)param_2) + -0x1c < 3000) {
          param_2[4] = 0;
        }
        else {
          param_2[4] = 1;
        }
        if ((uint)(param_2[6] - param_2[5]) < 4) {
          param_2[3] = 0;
        }
        else {
          getword__FPcPl(param_2[5],&iStack_4);
          if ((uint)(param_2[6] - param_2[5]) < iStack_4 + 4U) {
            param_2[3] = 0;
          }
          else {
            param_2[3] = 1;
          }
        }
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void ReadFromServer__6ClientFiPcT1(int *param_1,int param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  int iStack_14;
  int aiStack_10 [4];
  
  for (piVar4 = (int *)*param_1; (piVar4 != (int *)0x0 && (param_2 != *piVar4));
      piVar4 = (int *)piVar4[1]) {
  }
  if (piVar4 == (int *)0x0) {
    _operation_type_code = 2;
  }
  else {
    if (piVar4[3] == 0) {
      search_file_entry(param_1,piVar4);
    }
    if ((uint)(piVar4[6] - piVar4[5]) < 4) {
      iStack_14 = 0;
      iVar2 = piVar4[5];
    }
    else {
      getword__FPcPl(piVar4[5],&iStack_14);
      iVar2 = piVar4[5];
    }
    if ((uint)(piVar4[6] - iVar2) < iStack_14 + 4U) {
      _operation_type_code = 0x43;
    }
    else {
      iVar1 = 0;
      if (iStack_14 < param_4) {
        param_4 = iStack_14;
      }
      piVar4[5] = iVar2 + 4;
      if (0 < param_4) {
        do {
          puVar3 = (undefined1 *)(piVar4[5] + iVar1);
          iVar1 = iVar1 + 1;
          *param_3 = *puVar3;
          param_3 = param_3 + 1;
        } while (iVar1 < param_4);
      }
      iVar2 = piVar4[5] + iStack_14;
      piVar4[5] = iVar2;
      if ((uint)(piVar4[6] - iVar2) < 4) {
        piVar4[3] = 0;
      }
      else {
        getword__FPcPl(iVar2,aiStack_10);
        if ((uint)(piVar4[6] - piVar4[5]) < aiStack_10[0] + 4U) {
          piVar4[3] = 0;
        }
        else {
          piVar4[3] = 1;
        }
      }
      piVar4[4] = 0;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void create_socket(undefined4 *param_1)

{
  int unaff_gp;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)(**(code **)(unaff_gp + -0x7b5c))(4), param_1 != (undefined4 *)0x0)) {
    *param_1 = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
