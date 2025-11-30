/**
 * text
 *
 * Extracted from fsn.c lines 56137-56196
 * Category: Other
 */

void text(byte *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  
  bVar1 = *param_1;
  do {
    uVar5 = (uint)bVar1;
    if (uVar5 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    iVar3 = *(int *)(&chrtbl + uVar5 * 0xd8);
    if ((iVar3 != 0) && (iVar3 != 0)) {
      iVar6 = 0;
      do {
        if (iVar3 == 1) {
          iVar3 = iVar6 + uVar5 * 0xd8;
          translate((float)*(int *)(&chrtbl + iVar3 + 4),(float)*(int *)(&chrtbl + iVar3 + 8));
          uVar5 = (uint)*param_1;
          puVar4 = &chrtbl + iVar6 + uVar5 * 0xd8;
LAB_00418bcc:
          iVar3 = *(int *)(puVar4 + 0xc);
        }
        else {
          if (iVar3 == 2) {
            bgnline();
            v2i((uint)*param_1 * 0xd8 + iVar6 + 0x10000218);
            uVar5 = (uint)*param_1;
            puVar4 = &chrtbl + iVar6 + uVar5 * 0xd8;
            goto LAB_00418bcc;
          }
          iVar2 = iVar6 + uVar5 * 0xd8;
          if (iVar3 == 3) {
            v2i(&chrtbl + iVar2 + 4);
            uVar5 = (uint)*param_1;
            puVar4 = &chrtbl + iVar6 + uVar5 * 0xd8;
            goto LAB_00418bcc;
          }
          if (iVar3 == 4) {
            v2i(&chrtbl + iVar2 + 4);
            endline();
            uVar5 = (uint)*param_1;
            puVar4 = &chrtbl + iVar6 + uVar5 * 0xd8;
            goto LAB_00418bcc;
          }
          iVar3 = *(int *)(&chrtbl + iVar2 + 0xc);
        }
        iVar6 = iVar6 + 0xc;
      } while (iVar3 != 0);
    }
    bVar1 = param_1[1];
    param_1 = param_1 + 1;
  } while( true );
}
