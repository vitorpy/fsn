/**
 * FUN_00433f74
 *
 * Extracted from fsn.c lines 72261-72366
 * Ghidra address: 0x00433f74
 * Category: Other
 */

void FUN_00433f74(void)

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
