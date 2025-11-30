/**
 * FUN_0042a898
 *
 * Extracted from fsn.c lines 66658-66680
 * Ghidra address: 0x0042a898
 * Category: Other
 */

void FUN_0042a898(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int unaff_gp;
  
  puVar2 = (undefined4 *)**(undefined4 **)(unaff_gp + -0x7684);
  puVar1 = (undefined4 *)**(undefined4 **)(unaff_gp + -0x7680);
  puVar3 = puVar2;
  do {
    puVar4 = puVar3 + 3;
    *puVar1 = *puVar3;
    puVar1[1] = puVar3[1];
    puVar1[2] = puVar3[2];
    puVar1 = puVar1 + 3;
    puVar3 = puVar4;
  } while (puVar4 != puVar2 + 0x315);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
