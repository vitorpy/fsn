/**
 * GlobMatch__FPcT1
 *
 * Extracted from fsn.c lines 76603-76763
 * Category: Other
 */

void GlobMatch__FPcT1(byte *param_1,byte *param_2)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  byte bVar7;
  byte *pbVar6;
  byte *pbVar8;
  byte *pbStack_78;
  undefined1 uStack_6c;
  undefined1 auStack_6b [107];
  
  bVar7 = *param_2;
  do {
    while( true ) {
      while (bVar7 == 0x7b) {
        puVar4 = auStack_6b;
        uStack_6c = 0x7b;
        pbStack_78 = param_2 + 1;
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                bVar7 = *pbStack_78;
                if (bVar7 == 0) {
                  halt_baddata();
                }
                if (bVar7 != 0x7b) break;
                if (puVar4[-1] != '[') {
                  *puVar4 = 0x7b;
                  puVar4 = puVar4 + 1;
                }
                pbStack_78 = pbStack_78 + 1;
              }
              if (bVar7 == 0x7d) break;
              if (bVar7 == 0x5b) {
                if (puVar4[-1] != '[') {
                  *puVar4 = 0x5b;
                  puVar4 = puVar4 + 1;
                }
                pbStack_78 = pbStack_78 + 1;
              }
              else if (bVar7 == 0x5d) {
                pcVar1 = puVar4 + -1;
                puVar4 = puVar4 + -1;
                if (*pcVar1 != '[') {
                  halt_baddata();
                }
                pbStack_78 = pbStack_78 + 1;
              }
              else if (bVar7 == 0x5c) {
                if (pbStack_78[1] == 0) {
                  halt_baddata();
                }
                pbStack_78 = pbStack_78 + 2;
              }
              else {
                pbStack_78 = pbStack_78 + 1;
              }
            }
            pcVar1 = puVar4 + -1;
            puVar4 = puVar4 + -1;
            if (*pcVar1 != '[') break;
            pbStack_78 = pbStack_78 + 2;
          }
          if (puVar4 == &uStack_6c) break;
          pbStack_78 = pbStack_78 + 1;
        }
        bVar7 = *param_2;
      }
      pbVar8 = param_2 + 1;
      pbVar5 = pbVar8;
      if (bVar7 == 0x5b) break;
      if (bVar7 == 0x2a) {
        do {
          pbVar5 = param_2 + 1;
          param_2 = param_2 + 1;
        } while (*pbVar5 == 0x2a);
        for (; (iVar3 = FUN_004382f4(param_1,param_2), iVar3 == 0 && (*param_1 != 0));
            param_1 = param_1 + 1) {
        }
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      if (bVar7 == 0x3f) {
        bVar7 = *param_1;
        param_1 = param_1 + 1;
        if (bVar7 == 0) {
          halt_baddata();
        }
        bVar7 = param_2[1];
        param_2 = param_2 + 1;
      }
      else {
        if (bVar7 == 0) {
          halt_baddata();
        }
        if (bVar7 == 0x5c) {
          param_2 = param_2 + 1;
          if (*pbStack_78 == 0) {
            halt_baddata();
          }
          bVar7 = *param_2;
          bVar2 = *param_1;
        }
        else {
          bVar2 = *param_1;
        }
        param_1 = param_1 + 1;
        if (bVar7 != bVar2) {
          halt_baddata();
        }
        bVar7 = param_2[1];
        param_2 = param_2 + 1;
      }
    }
    while( true ) {
      bVar7 = *pbVar5;
      if (bVar7 == 0) {
        halt_baddata();
      }
      if (bVar7 == 0x5d) break;
      if (bVar7 == 0x5c) {
        if (pbVar5[1] == 0) {
          halt_baddata();
        }
        pbVar5 = pbVar5 + 2;
      }
      else {
        pbVar5 = pbVar5 + 1;
      }
    }
    pbVar6 = pbVar8;
    if (pbVar8 < pbVar5) {
      bVar7 = *param_1;
      do {
        if (((*pbVar6 == 0x2d) && (pbVar6 != pbVar8)) && (pbVar6 + 1 != pbVar5)) {
          if ((pbVar6[-1] <= bVar7) && (bVar7 <= pbVar6[1])) {
            param_2 = pbVar5 + 1;
            param_1 = param_1 + 1;
            break;
          }
        }
        else if (*pbVar6 == bVar7) {
          param_2 = pbVar5 + 1;
          param_1 = param_1 + 1;
          break;
        }
        pbVar6 = pbVar6 + 1;
      } while (pbVar6 != pbVar5);
    }
    if (pbVar6 == pbVar5) {
      halt_baddata();
    }
    bVar7 = *param_2;
    pbStack_78 = pbVar5;
  } while( true );
}
