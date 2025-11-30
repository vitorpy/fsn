/**
 * FUN_00429fd4
 *
 * Extracted from fsn.c lines 66282-66342
 * Ghidra address: 0x00429fd4
 * Category: Other
 */

void FUN_00429fd4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_gp;
  undefined1 auStack_8c [48];
  int local_5c;
  int local_4;
  
  (**(code **)(unaff_gp + -0x7a84))(**(int **)(unaff_gp + -0x7684) + 0x84c,param_1);
  (**(code **)(unaff_gp + -0x7ce4))(**(int **)(unaff_gp + -0x7684) + 0x84c,*param_2);
  iVar1 = (**(code **)(unaff_gp + -0x7e30))(**(int **)(unaff_gp + -0x7684) + 0x84c,auStack_8c);
  if (iVar1 < 0) {
    (**(code **)(unaff_gp + -0x7a8c))
              (*(int *)(unaff_gp + -0x7fa4) + -0x16b0,**(int **)(unaff_gp + -0x7684) + 0x84c);
  }
  else {
    local_4 = (**(code **)(unaff_gp + -0x7b40))(local_5c + 1);
    iVar1 = (**(code **)(unaff_gp + -0x7e34))(**(int **)(unaff_gp + -0x7684) + 0x84c,0);
    if (iVar1 < 0) {
      (**(code **)(unaff_gp + -0x7a8c))
                (*(int *)(unaff_gp + -0x7fa4) + -0x16a4,**(int **)(unaff_gp + -0x7684) + 0x84c);
    }
    else {
      iVar2 = (**(code **)(unaff_gp + -0x7e14))(iVar1,local_4,local_5c);
      if (iVar2 == local_5c) {
        *(undefined1 *)(local_4 + local_5c) = 0;
        (**(code **)(unaff_gp + -0x7da4))(iVar1);
        (**(code **)(unaff_gp + -0x7eec))
                  (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x14),local_4);
        (**(code **)(unaff_gp + -0x7e8c))(local_4);
        iVar1 = (**(code **)(unaff_gp + -0x7e28))(**(int **)(unaff_gp + -0x7684) + 0x84c,2);
        if (iVar1 < 0) {
          (**(code **)(unaff_gp + -0x7ce8))
                    (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x18),0);
          (**(code **)(unaff_gp + -0x7f38))
                    (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x14),0);
        }
        else {
          (**(code **)(unaff_gp + -0x7ce8))
                    (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x18),1);
          (**(code **)(unaff_gp + -0x7f38))
                    (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x14),1);
        }
        (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x10));
        uVar3 = (**(code **)(unaff_gp + -0x7c98))
                          (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x10));
        (**(code **)(unaff_gp + -0x7e84))(**(undefined4 **)(unaff_gp + -0x75fc),uVar3);
      }
      else {
        (**(code **)(unaff_gp + -0x7a8c))
                  (*(int *)(unaff_gp + -0x7fa4) + -0x1698,**(int **)(unaff_gp + -0x7684) + 0x84c);
        (**(code **)(unaff_gp + -0x7da4))(iVar1);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
