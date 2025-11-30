/**
 * AddServer__6ClientFliT2
 *
 * Extracted from fsn.c lines 62473-62511
 * Category: Other
 */

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
