/**
 * close_connections
 *
 * Extracted from fsn.c lines 61594-61619
 * Category: Other
 */

void close_connections(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_gp;
  undefined1 auStack_cc [200];
  int local_4;
  
  (*(code *)(*(int *)(unaff_gp + -0x7fdc) + -0x531c))();
  local_4 = (**(code **)(unaff_gp + -0x7708))(0);
  param_1[1] = local_4;
  iVar1 = (**(code **)(unaff_gp + -0x7704))(local_4,0x7f000001,0x5f75a,1);
  *param_1 = iVar1;
  if ((-1 < iVar1) && (param_2 != 0)) {
    uVar2 = (**(code **)(unaff_gp + -0x7cec))();
    uVar3 = (**(code **)(unaff_gp + -0x7c30))();
    (**(code **)(unaff_gp + -0x7c1c))
              (auStack_cc,*(int *)(unaff_gp + -0x7f94) + -0x61b8,uVar2,uVar3,param_2);
    iVar1 = (**(code **)(unaff_gp + -0x7c20))(auStack_cc);
    (**(code **)(unaff_gp + -0x7700))(local_4,*param_1,auStack_cc,iVar1 + 1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
