/**
 * run_icon_interpreter
 *
 * Extracted from fsn.c lines 59572-60900
 * Category: Other
 */

void run_icon_interpreter(float *param_1,char *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  char cVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float fVar14;
  char *pcVar15;
  int iVar16;
  float fVar17;
  code *pcVar18;
  int unaff_gp;
  uint in_fcsr;
  undefined1 auStack_197c [136];
  undefined1 auStack_18f4 [272];
  float *local_17e4;
  float local_17e0;
  ushort local_17dc;
  byte local_17d9;
  float local_17d8;
  short local_17d4;
  byte local_17d1;
  float local_17d0;
  int local_17cc;
  float local_17c8;
  float local_17c4;
  float local_17bc [511];
  float local_fc0;
  float local_fbc;
  float local_fb8;
  float local_fb4;
  float local_fa8 [1002];
  
  local_17cc = 0;
  cVar8 = *param_2;
  pfVar13 = local_fa8;
  iVar16 = 0;
  fVar17 = local_fc0;
  pcVar15 = param_2;
joined_r0x00435ac4:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while( true ) {
                      while( true ) {
                        while( true ) {
                          while( true ) {
                            while( true ) {
                              while( true ) {
                                while( true ) {
                                  while( true ) {
                                    while( true ) {
                                      while( true ) {
                                        while( true ) {
                                          while( true ) {
                                            while( true ) {
                                              while( true ) {
                                                while( true ) {
                                                  while( true ) {
                                                    while( true ) {
                                                      while( true ) {
                                                        while( true ) {
                                                          while( true ) {
                                                            while( true ) {
                                                              while( true ) {
                                                                while( true ) {
                                                                  while( true ) {
                                                                    while( true ) {
                                                                      while( true ) {
                                                                        while( true ) {
                                                                          while( true ) {
                                                                            while( true ) {
                                                                              while( true ) {
                                                                                while( true ) {
                                                                                  while( true ) {
                                                                                    while( true ) {
                                                                                      while( true )
                                                                                      {
                                                                                        while( true 
                                                  ) {
                                                    while( true ) {
                                                      while( true ) {
                                                        while( true ) {
                                                          while( true ) {
                                                            while( true ) {
                                                              while( true ) {
                                                                while( true ) {
                                                                  while( true ) {
                                                                    while( true ) {
                                                                      while( true ) {
                                                                        if (cVar8 == '\x1b') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                                          halt_baddata();
                                                                        }
                                                                        if (cVar8 != '\x1c') break;
                                                                        fVar17 = pfVar13[-1];
                                                                        if (fVar17 == pfVar13[-2]) {
                                                                          pfVar13[-2] = 1.4013e-45;
                                                                        }
                                                                        else {
                                                                          pfVar13[-2] = 0.0;
                                                                        }
                                                                        pfVar13 = pfVar13 + -1;
                                                                        cVar8 = pcVar15[1];
                                                                        pcVar15 = pcVar15 + 1;
                                                                      }
                                                                      if (cVar8 == '\x10') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                                        halt_baddata();
                                                                      }
                                                                      if (cVar8 != '\x11') break;
                                                                      fVar17 = pfVar13[-1];
                                                                      if (fVar17 == 0.0) {
                                                                        pfVar13[-1] = 1.4013e-45;
                                                                      }
                                                                      else {
                                                                        pfVar13[-1] = 0.0;
                                                                      }
                                                                      cVar8 = pcVar15[1];
                                                                      pcVar15 = pcVar15 + 1;
                                                                    }
                                                                    if (cVar8 == '\"') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                                      halt_baddata();
                                                                    }
                                                                    if (cVar8 != '#') break;
                                                                    fVar17 = pfVar13[-2];
                                                                    if ((int)pfVar13[-1] <
                                                                        (int)fVar17) {
                                                                      pfVar13[-2] = 1.4013e-45;
                                                                    }
                                                                    else {
                                                                      pfVar13[-2] = 0.0;
                                                                    }
                                                                    pfVar13 = pfVar13 + -1;
                                                                    cVar8 = pcVar15[1];
                                                                    pcVar15 = pcVar15 + 1;
                                                                  }
                                                                  if (cVar8 == '\x1f') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                                    halt_baddata();
                                                                  }
                                                                  if (cVar8 != ' ') break;
                                                                  fVar17 = pfVar13[-2];
                                                                  if ((int)fVar17 < (int)pfVar13[-1]
                                                                     ) {
                                                                    pfVar13[-2] = 0.0;
                                                                  }
                                                                  else {
                                                                    pfVar13[-2] = 1.4013e-45;
                                                                  }
                                                                  pfVar13 = pfVar13 + -1;
                                                                  cVar8 = pcVar15[1];
                                                                  pcVar15 = pcVar15 + 1;
                                                                }
                                                                if (cVar8 == '.') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                                  halt_baddata();
                                                                }
                                                                if (cVar8 != '/') break;
                                                                fVar17 = pfVar13[-2];
                                                                if ((int)fVar17 < (int)pfVar13[-1])
                                                                {
                                                                  pfVar13[-2] = 1.4013e-45;
                                                                }
                                                                else {
                                                                  pfVar13[-2] = 0.0;
                                                                }
                                                                pfVar13 = pfVar13 + -1;
                                                                cVar8 = pcVar15[1];
                                                                pcVar15 = pcVar15 + 1;
                                                              }
                                                              if (cVar8 == '&') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                                halt_baddata();
                                                              }
                                                              if (cVar8 != '\'') break;
                                                              fVar17 = pfVar13[-2];
                                                              if ((int)pfVar13[-1] < (int)fVar17) {
                                                                pfVar13[-2] = 0.0;
                                                              }
                                                              else {
                                                                pfVar13[-2] = 1.4013e-45;
                                                              }
                                                              pfVar13 = pfVar13 + -1;
                                                              cVar8 = pcVar15[1];
                                                              pcVar15 = pcVar15 + 1;
                                                            }
                                                            if (cVar8 == '6') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                              halt_baddata();
                                                            }
                                                            if (cVar8 != '7') break;
                                                            fVar17 = pfVar13[-2];
                                                            if (fVar17 == pfVar13[-1]) {
                                                              pfVar13[-2] = 0.0;
                                                            }
                                                            else {
                                                              pfVar13[-2] = 1.4013e-45;
                                                            }
                                                            pfVar13 = pfVar13 + -1;
                                                            cVar8 = pcVar15[1];
                                                            pcVar15 = pcVar15 + 1;
                                                          }
                                                          if (cVar8 != '?') break;
                                                          pfVar13[-2] = pfVar13[-2] + pfVar13[-1];
                                                          cVar8 = pcVar15[1];
                                                          pcVar15 = pcVar15 + 1;
                                                          pfVar13 = pfVar13 + -1;
                                                        }
                                                        if (cVar8 != '@') break;
                                                        fVar17 = pfVar13[-2];
                                                        pfVar13[-2] = (float)((int)fVar17 +
                                                                             (int)pfVar13[-1]);
                                                        cVar8 = pcVar15[1];
                                                        pcVar15 = pcVar15 + 1;
                                                        pfVar13 = pfVar13 + -1;
                                                      }
                                                      if (cVar8 != '0') break;
                                                      pfVar13[-2] = pfVar13[-2] - pfVar13[-1];
                                                      cVar8 = pcVar15[1];
                                                      pcVar15 = pcVar15 + 1;
                                                      pfVar13 = pfVar13 + -1;
                                                    }
                                                    if (cVar8 != '1') break;
                                                    fVar17 = pfVar13[-2];
                                                    pfVar13[-2] = (float)((int)fVar17 -
                                                                         (int)pfVar13[-1]);
                                                    cVar8 = pcVar15[1];
                                                    pcVar15 = pcVar15 + 1;
                                                    pfVar13 = pfVar13 + -1;
                                                  }
                                                  if (cVar8 != 'X') break;
                                                  pfVar4 = pfVar13 + -1;
                                                  pfVar12 = pfVar13 + -2;
                                                  pfVar11 = pfVar13 + -2;
                                                  pfVar13 = pfVar13 + -1;
                                                  *pfVar11 = *pfVar12 * *pfVar4;
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  }
                                                  if (cVar8 != 'Y') break;
                                                  pfVar4 = pfVar13 + -1;
                                                  fVar17 = pfVar13[-2];
                                                  pfVar12 = pfVar13 + -2;
                                                  pfVar13 = pfVar13 + -1;
                                                  *pfVar12 = (float)((int)fVar17 * (int)*pfVar4);
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  }
                                                  if (cVar8 != 'L') break;
                                                  pfVar4 = pfVar13 + -1;
                                                  pfVar12 = pfVar13 + -2;
                                                  pfVar11 = pfVar13 + -2;
                                                  pfVar13 = pfVar13 + -1;
                                                  *pfVar11 = *pfVar12 / *pfVar4;
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  }
                                                  if (cVar8 == 'M') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                    halt_baddata();
                                                  }
                                                  if (cVar8 == '3') {
                                                    fVar17 = pfVar13[-2];
                                                    (**(code **)(unaff_gp + -0x777c))(pfVar13[-1]);
                                                    (**(code **)(unaff_gp + -0x777c))(fVar17);
                    // WARNING: Bad instruction - Truncating control flow here
                                                    halt_baddata();
                                                  }
                                                  if (cVar8 == '4') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                    halt_baddata();
                                                  }
                                                  if (cVar8 != '\x02') break;
                                                  pfVar4 = pfVar13 + -1;
                                                  pfVar12 = pfVar13 + -2;
                                                  fVar14 = *pfVar12;
                                                  pfVar13 = pfVar13 + -1;
                                                  uVar2 = (**(code **)(unaff_gp + -0x777c))(*pfVar4)
                                                  ;
                                                  uVar3 = (**(code **)(unaff_gp + -0x777c))(fVar14);
                                                  *pfVar12 = (float)(int)(uVar3 & uVar2);
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  }
                                                  if (cVar8 != '\x03') break;
                                                  fVar17 = pfVar13[-2];
                                                  pfVar13[-2] = (float)((uint)fVar17 &
                                                                       (uint)pfVar13[-1]);
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  pfVar13 = pfVar13 + -1;
                                                  }
                                                  if (cVar8 != ':') break;
                                                  pfVar4 = pfVar13 + -1;
                                                  pfVar12 = pfVar13 + -2;
                                                  fVar14 = *pfVar12;
                                                  pfVar13 = pfVar13 + -1;
                                                  uVar2 = (**(code **)(unaff_gp + -0x777c))(*pfVar4)
                                                  ;
                                                  uVar3 = (**(code **)(unaff_gp + -0x777c))(fVar14);
                                                  *pfVar12 = (float)(int)(uVar3 | uVar2);
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  }
                                                  if (cVar8 != ';') break;
                                                  fVar17 = pfVar13[-2];
                                                  pfVar13[-2] = (float)((uint)fVar17 |
                                                                       (uint)pfVar13[-1]);
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  pfVar13 = pfVar13 + -1;
                                                  }
                                                  if (cVar8 != '_') break;
                                                  pfVar4 = pfVar13 + -1;
                                                  pfVar12 = pfVar13 + -2;
                                                  fVar14 = *pfVar12;
                                                  pfVar13 = pfVar13 + -1;
                                                  uVar2 = (**(code **)(unaff_gp + -0x777c))(*pfVar4)
                                                  ;
                                                  uVar3 = (**(code **)(unaff_gp + -0x777c))(fVar14);
                                                  *pfVar12 = (float)(int)(uVar3 ^ uVar2);
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  }
                                                  if (cVar8 != '`') break;
                                                  fVar17 = pfVar13[-2];
                                                  pfVar13[-2] = (float)((uint)fVar17 ^
                                                                       (uint)pfVar13[-1]);
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  pfVar13 = pfVar13 + -1;
                                                  }
                                                  if (cVar8 != '5') break;
                                                  local_17c8 = pfVar13[-1];
                                                  pcVar15 = pcVar15 + 1;
                                                  local_17c4 = pfVar13[-2];
                                                  pfVar13 = pfVar13 + -2;
                                                  cVar8 = *pcVar15;
                                                  iVar16 = 0;
                                                  }
                                                  if (cVar8 != '\x13') break;
                                                  fVar14 = pfVar13[-2];
                                                  fVar9 = pfVar13[-1];
                                                  pfVar13 = pfVar13 + -2;
                                                  iVar16 = 0;
                                                  (**(code **)(unaff_gp + -0x77bc))(local_17cc);
                                                  (**(code **)(unaff_gp + -0x7b44))
                                                            (local_17c4,local_17c8);
                                                  (**(code **)(unaff_gp + -0x7b3c))(fVar14,fVar9);
                                                  cVar8 = pcVar15[1];
                                                  local_17c4 = fVar14;
                                                  local_17c8 = fVar9;
                                                  pcVar15 = pcVar15 + 1;
                                                  }
                                                  if (cVar8 != '\x0f') break;
                                                  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
                                                    fVar14 = ROUND(pfVar13[-1]);
                                                  }
                                                  else {
                                                    fVar14 = FLOOR(pfVar13[-1]);
                                                  }
                                                  local_17cc = (int)fVar14;
                                                  pfVar13 = pfVar13 + -1;
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  }
                                                  if (cVar8 != '\n') break;
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  iVar16 = 0;
                                                  }
                                                  if (cVar8 != 'A') break;
                                                  local_17bc[1] = pfVar13[-1];
                                                  pcVar15 = pcVar15 + 1;
                                                  local_17bc[0] = pfVar13[-2];
                                                  pfVar13 = pfVar13 + -2;
                                                  cVar8 = *pcVar15;
                                                  iVar16 = 1;
                                                  }
                                                  if ((cVar8 != '>') && (cVar8 != ']')) break;
                                                  if (iVar16 < 0xff) {
                                                    local_17bc[iVar16 * 2] = pfVar13[-2];
                                                    pfVar4 = pfVar13 + -1;
                                                    iVar6 = iVar16 * 2;
                                                    iVar16 = iVar16 + 1;
                                                    pfVar13 = pfVar13 + -2;
                                                    local_17bc[iVar6 + 1] = *pfVar4;
                                                  }
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  }
                                                  if (cVar8 != '=') break;
                                                  iVar6 = 1;
                                                  (**(code **)(unaff_gp + -0x77bc))(local_17cc);
                                                  if (iVar16 != 0) {
                                                    (**(code **)(unaff_gp + -0x7cb4))
                                                              (local_17bc[0],local_17bc[1]);
                                                  }
                                                  pfVar4 = local_17bc;
                                                  if (1 < iVar16) {
                                                    do {
                                                      pfVar4 = pfVar4 + 2;
                                                      (**(code **)(unaff_gp + -0x7cb8))
                                                                (*pfVar4,pfVar4[1]);
                                                      iVar6 = iVar6 + 1;
                                                    } while (iVar6 != iVar16);
                                                  }
                                                  iVar16 = 0;
                                                  (**(code **)(unaff_gp + -0x7c00))();
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  }
                                                  if (cVar8 != '\x14') break;
                                                  iVar6 = 0;
                                                  (**(code **)(unaff_gp + -0x77bc))(local_17cc);
                                                  (**(code **)(unaff_gp + -0x7d24))();
                                                  pfVar4 = local_17bc;
                                                  if (0 < iVar16) {
                                                    do {
                                                      (**(code **)(unaff_gp + -0x7e08))(pfVar4);
                                                      iVar6 = iVar6 + 1;
                                                      pfVar4 = pfVar4 + 2;
                                                    } while (iVar6 != iVar16);
                                                  }
                                                  iVar16 = 0;
                                                  (**(code **)(unaff_gp + -0x7d20))();
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  }
                                                  if (cVar8 != '\x15') break;
                                                  iVar6 = 0;
                                                  (**(code **)(unaff_gp + -0x77bc))(local_17cc);
                                                  (**(code **)(unaff_gp + -0x7b7c))();
                                                  pfVar4 = local_17bc;
                                                  if (0 < iVar16) {
                                                    do {
                                                      (**(code **)(unaff_gp + -0x7e08))(pfVar4);
                                                      iVar6 = iVar6 + 1;
                                                      pfVar4 = pfVar4 + 2;
                                                    } while (iVar6 != iVar16);
                                                  }
                                                  iVar16 = 0;
                                                  (**(code **)(unaff_gp + -0x7b94))();
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  }
                                                  if (cVar8 != '\x18') break;
                                                  iVar6 = 0;
                                                  (**(code **)(unaff_gp + -0x77bc))(local_17cc);
                                                  (**(code **)(unaff_gp + -0x7c94))();
                                                  pfVar4 = local_17bc;
                                                  if (0 < iVar16) {
                                                    do {
                                                      (**(code **)(unaff_gp + -0x7e08))(pfVar4);
                                                      iVar6 = iVar6 + 1;
                                                      pfVar4 = pfVar4 + 2;
                                                    } while (iVar6 != iVar16);
                                                  }
                                                  iVar16 = 0;
                                                  (**(code **)(unaff_gp + -32000))();
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  }
                                                  if (cVar8 != '\x19') break;
                                                  iVar6 = 0;
                                                  (**(code **)(unaff_gp + -0x77bc))(local_17cc);
                                                  (**(code **)(unaff_gp + -0x7dc4))();
                                                  pfVar4 = local_17bc;
                                                  if (0 < iVar16) {
                                                    do {
                                                      (**(code **)(unaff_gp + -0x7e08))(pfVar4);
                                                      iVar6 = iVar6 + 1;
                                                      pfVar4 = pfVar4 + 2;
                                                    } while (iVar6 != iVar16);
                                                  }
                                                  iVar16 = 0;
                                                  (**(code **)(unaff_gp + -0x7dbc))();
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                }
                                                if (cVar8 != '\x17') break;
                                                if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
                                                  fVar17 = ROUND(pfVar13[-1]);
                                                }
                                                else {
                                                  fVar17 = FLOOR(pfVar13[-1]);
                                                }
                                                fVar17 = (float)(int)fVar17;
                                                pfVar13 = pfVar13 + -1;
                                                iVar6 = 0;
                                                (**(code **)(unaff_gp + -0x77bc))(local_17cc);
                                                (**(code **)(unaff_gp + -0x7dc4))();
                                                pfVar4 = local_17bc;
                                                if (0 < iVar16) {
                                                  do {
                                                    (**(code **)(unaff_gp + -0x7e08))(pfVar4);
                                                    iVar6 = iVar6 + 1;
                                                    pfVar4 = pfVar4 + 2;
                                                  } while (iVar6 != iVar16);
                                                }
                                                iVar6 = 0;
                                                (**(code **)(unaff_gp + -0x7dbc))();
                                                (**(code **)(unaff_gp + -0x77bc))(fVar17);
                                                (**(code **)(unaff_gp + -0x7d24))();
                                                pfVar4 = local_17bc;
                                                if (0 < iVar16) {
                                                  do {
                                                    (**(code **)(unaff_gp + -0x7e08))(pfVar4);
                                                    iVar6 = iVar6 + 1;
                                                    pfVar4 = pfVar4 + 2;
                                                  } while (iVar6 != iVar16);
                                                }
                                                iVar16 = 0;
                                                (**(code **)(unaff_gp + -0x7d20))();
                                                cVar8 = pcVar15[1];
                                                pcVar15 = pcVar15 + 1;
                                              }
                                              if (cVar8 != '\a') break;
                                              pfVar13 = pfVar13 + -1;
                                              if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
                                                fVar17 = ROUND(*pfVar13);
                                              }
                                              else {
                                                fVar17 = FLOOR(*pfVar13);
                                              }
                                              fVar17 = (float)(int)fVar17;
                                              iVar6 = 1;
                                              (**(code **)(unaff_gp + -0x77bc))(local_17cc);
                                              if (iVar16 != 0) {
                                                (**(code **)(unaff_gp + -0x7cb4))
                                                          (local_17bc[0],local_17bc[1]);
                                              }
                                              pfVar4 = local_17bc;
                                              if (1 < iVar16) {
                                                do {
                                                  pfVar4 = pfVar4 + 2;
                                                  (**(code **)(unaff_gp + -0x7cb8))
                                                            (*pfVar4,pfVar4[1]);
                                                  iVar6 = iVar6 + 1;
                                                } while (iVar6 != iVar16);
                                              }
                                              iVar6 = 1;
                                              (**(code **)(unaff_gp + -0x7c00))();
                                              (**(code **)(unaff_gp + -0x77bc))(fVar17);
                                              if (iVar16 != 0) {
                                                (**(code **)(unaff_gp + -0x7b44))
                                                          (local_17bc[0],local_17bc[1]);
                                              }
                                              pfVar4 = local_17bc;
                                              if (1 < iVar16) {
                                                do {
                                                  pfVar4 = pfVar4 + 2;
                                                  (**(code **)(unaff_gp + -0x7b3c))
                                                            (*pfVar4,pfVar4[1]);
                                                  iVar6 = iVar6 + 1;
                                                } while (iVar6 != iVar16);
                                              }
                                              iVar16 = 0;
                                              (**(code **)(unaff_gp + -0x7b3c))
                                                        (local_17bc[0],local_17bc[1]);
                                              cVar8 = pcVar15[1];
                                              pcVar15 = pcVar15 + 1;
                                            }
                                            if (cVar8 != '\x04') break;
                                            local_fbc = pfVar13[-1];
                                            local_fb8 = pfVar13[-2];
                                            local_fb4 = pfVar13[-3];
                                            fVar9 = pfVar13[-4];
                                            fVar14 = pfVar13[-5];
                                            pfVar13 = pfVar13 + -5;
                                            (**(code **)(unaff_gp + -0x77bc))(local_17cc);
                                            (**(code **)(unaff_gp + -0x7d04))(fVar14,fVar9);
                                            cVar8 = pcVar15[1];
                                            pcVar15 = pcVar15 + 1;
                                          }
                                          if (cVar8 != '\x05') break;
                                          local_fbc = pfVar13[-1];
                                          local_fb8 = pfVar13[-2];
                                          local_fb4 = pfVar13[-3];
                                          fVar9 = pfVar13[-4];
                                          fVar14 = pfVar13[-5];
                                          pfVar13 = pfVar13 + -5;
                                          (**(code **)(unaff_gp + -0x77bc))(local_17cc);
                                          (**(code **)(unaff_gp + -0x7d08))(fVar14,fVar9);
                                          cVar8 = pcVar15[1];
                                          pcVar15 = pcVar15 + 1;
                                        }
                                        if (cVar8 == '\x1a') {
                    // WARNING: Bad instruction - Truncating control flow here
                                          halt_baddata();
                                        }
                                        if (cVar8 == '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
                                          halt_baddata();
                                        }
                                        if (cVar8 != '\x01') break;
                                        fVar17 = pfVar13[-2];
                                        if ((fVar17 == 0.0) || (pfVar13[-1] == 0.0)) {
                                          pfVar13[-2] = 0.0;
                                        }
                                        else {
                                          pfVar13[-2] = 1.4013e-45;
                                        }
                                        pfVar13 = pfVar13 + -1;
                                        cVar8 = pcVar15[1];
                                        pcVar15 = pcVar15 + 1;
                                      }
                                      if (cVar8 == '8') {
                    // WARNING: Bad instruction - Truncating control flow here
                                        halt_baddata();
                                      }
                                      if (cVar8 != '9') break;
                                      fVar17 = pfVar13[-2];
                                      if ((fVar17 == 0.0) && (pfVar13[-1] == 0.0)) {
                                        pfVar13[-2] = 0.0;
                                      }
                                      else {
                                        pfVar13[-2] = 1.4013e-45;
                                      }
                                      pfVar13 = pfVar13 + -1;
                                      cVar8 = pcVar15[1];
                                      pcVar15 = pcVar15 + 1;
                                    }
                                    if (cVar8 != 'B') break;
                                    cVar8 = pcVar15[1];
                                    pcVar15 = pcVar15 + 1;
                                    pfVar13 = pfVar13 + -1;
                                  }
                                  if (cVar8 != 'C') break;
                                  cVar8 = pcVar15[1];
                                  pcVar15 = pcVar15 + 1;
                                  pfVar13 = pfVar13 + -1;
                                }
                                if (cVar8 == '\b') {
                    // WARNING: Bad instruction - Truncating control flow here
                                  halt_baddata();
                                }
                                if (cVar8 != '\t') break;
                                if (pfVar13[-1] == 0.0) {
                                  local_17d0 = *(float *)(pcVar15 + 1);
                                  pcVar15 = param_2 + (int)local_17d0;
                                }
                                else {
                                  pcVar15 = pcVar15 + 5;
                                }
                                cVar8 = *pcVar15;
                              }
                              if (cVar8 == '\v') {
                    // WARNING: Bad instruction - Truncating control flow here
                                halt_baddata();
                              }
                              if (cVar8 != '\f') break;
                              if (pfVar13[-1] == 0.0) {
                                pcVar15 = pcVar15 + 5;
                              }
                              else {
                                local_17d0 = *(float *)(pcVar15 + 1);
                                pcVar15 = param_2 + (int)local_17d0;
                              }
                              cVar8 = *pcVar15;
                            }
                            if (cVar8 != '\r') break;
                            local_17d0 = *(float *)(pcVar15 + 1);
                            cVar8 = param_2[(int)local_17d0];
                            pcVar15 = param_2 + (int)local_17d0;
                          }
                          if (cVar8 != '%') break;
                          cVar8 = pcVar15[1];
                          pcVar15 = pcVar15 + 1;
                        }
                        if (cVar8 != 'S') break;
                        local_17d0 = *(float *)(pcVar15 + 1);
                        *(float *)(param_3 + (int)local_17d0) = pfVar13[-1];
                        cVar8 = pcVar15[5];
                        pcVar15 = pcVar15 + 5;
                      }
                      if (cVar8 != 'T') break;
                      local_17d0 = *(float *)(pcVar15 + 1);
                      fVar17 = pfVar13[-1];
                      *(float *)(param_3 + (int)local_17d0) = fVar17;
                      cVar8 = pcVar15[5];
                      pcVar15 = pcVar15 + 5;
                    }
                    if (cVar8 != '+') break;
                    local_17d0 = *(float *)(pcVar15 + 1);
                    *pfVar13 = *(float *)(param_3 + (int)local_17d0);
                    cVar8 = pcVar15[5];
                    pcVar15 = pcVar15 + 5;
                    pfVar13 = pfVar13 + 1;
                  }
                  if (cVar8 != ',') break;
                  local_17d0 = *(float *)(pcVar15 + 1);
                  fVar17 = *(float *)(param_3 + (int)local_17d0);
                  *pfVar13 = fVar17;
                  cVar8 = pcVar15[5];
                  pcVar15 = pcVar15 + 5;
                  pfVar13 = pfVar13 + 1;
                }
                if (cVar8 != ')') break;
                *(char *)pfVar13 = pcVar15[1];
                *(char *)((int)pfVar13 + 1) = pcVar15[2];
                *(char *)((int)pfVar13 + 2) = pcVar15[3];
                *(char *)((int)pfVar13 + 3) = pcVar15[4];
                cVar8 = pcVar15[5];
                pcVar15 = pcVar15 + 5;
                pfVar13 = pfVar13 + 1;
              }
              if (cVar8 != '*') break;
              local_17d0 = *(float *)(pcVar15 + 1);
              *pfVar13 = local_17d0;
              cVar8 = pcVar15[5];
              fVar17 = local_17d0;
              pcVar15 = pcVar15 + 5;
              pfVar13 = pfVar13 + 1;
            }
            if (cVar8 != '^') break;
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
          }
          if (cVar8 != '\x1d') break;
          cVar8 = pcVar15[1];
          pcVar15 = pcVar15 + 1;
        }
        if (cVar8 != 'H') break;
        cVar8 = pcVar15[1];
        pcVar15 = pcVar15 + 1;
      }
      if (cVar8 != '\x06') break;
      pcVar15 = pcVar15 + 1;
      if (param_1[0x88] == 0.0) {
        if (param_1[0x8d] == 0.0) {
          fVar17 = 0.0;
        }
        else if ((int)param_1[0xb3] < 1) {
          fVar17 = 0.0;
        }
        else {
          local_17e4 = param_1 + 8;
          fVar17 = 1.4013e-45;
          pfVar4 = (float *)((int)local_17e4 + (int)param_1[0xb3]);
          for (; local_17e4 != pfVar4; local_17e4 = (float *)((int)local_17e4 + 1)) {
            if (((uint)*local_17e4 & 0x80000000) != 0) {
              fVar17 = 0.0;
              break;
            }
          }
        }
        param_1[0x88] = 1.4013e-45;
        param_1[0x89] = fVar17;
        *pfVar13 = fVar17;
        cVar8 = *pcVar15;
        pfVar13 = pfVar13 + 1;
      }
      else {
        *pfVar13 = param_1[0x89];
        cVar8 = *pcVar15;
        pfVar13 = pfVar13 + 1;
      }
    }
    if (cVar8 != '2') {
      if (cVar8 == 'K') {
        if (param_1[0x8c] == 0.0) {
          *pfVar13 = -NAN;
        }
        else {
          *pfVar13 = param_1[0x9d];
        }
        cVar8 = pcVar15[1];
        pcVar15 = pcVar15 + 1;
        pfVar13 = pfVar13 + 1;
      }
      else if (cVar8 == '(') {
        if (param_1[0x8c] == 0.0) {
          *pfVar13 = -NAN;
        }
        else {
          *pfVar13 = param_1[0x97];
        }
        cVar8 = pcVar15[1];
        pcVar15 = pcVar15 + 1;
        pfVar13 = pfVar13 + 1;
      }
      else {
        if (cVar8 == 'W') {
          pcVar15 = pcVar15 + 1;
          if (param_1[0x8d] == 0.0) {
            *pfVar13 = -NAN;
            cVar8 = *pcVar15;
            pfVar13 = pfVar13 + 1;
            goto joined_r0x00435ac4;
          }
          fVar14 = param_1[0xb3];
          if (0x47 < (int)fVar14) {
            iVar6 = (**(code **)(unaff_gp + -0x7784))(param_1 + 8);
            if (iVar6 == 0x160) {
              fVar14 = (float)(**(code **)(unaff_gp + -0x7784))(param_1 + 0xd);
              if (((fVar14 != fVar17) == 0x108) && (fVar17 != 3.74147e-43)) {
                *pfVar13 = -NAN;
                cVar8 = *pcVar15;
                pfVar13 = pfVar13 + 1;
              }
              else if ((*(byte *)((int)param_1 + 0x32) & 0x80) == 0) {
                *pfVar13 = -NAN;
                cVar8 = *pcVar15;
                pfVar13 = pfVar13 + 1;
              }
              else if (((uint)param_1[0x96] & 0x49) == 0) {
                *pfVar13 = -NAN;
                cVar8 = *pcVar15;
                pfVar13 = pfVar13 + 1;
              }
              else {
                fVar14 = (float)(**(code **)(unaff_gp + -0x7780))(param_1 + 0x19);
                *pfVar13 = fVar14;
                cVar8 = *pcVar15;
                pfVar13 = pfVar13 + 1;
              }
              goto joined_r0x00435ac4;
            }
            fVar14 = param_1[0xb3];
          }
          if ((int)fVar14 < 0xd) {
            *pfVar13 = -NAN;
            cVar8 = *pcVar15;
            pfVar13 = pfVar13 + 1;
          }
          else if ((*(char *)(param_1 + 8) == '#') && (*(char *)((int)param_1 + 0x21) == '!')) {
            iVar6 = 3;
            if (3 < (int)fVar14) {
              iVar5 = (int)param_1 + 3;
              do {
                if (*(char *)(iVar5 + 0x20) == '\n') break;
                iVar6 = iVar6 + 1;
                iVar5 = iVar5 + 1;
              } while (iVar6 < (int)fVar14);
            }
            if (iVar6 < (int)fVar14) {
              if ((int)fVar14 - iVar6 < 7) {
                *pfVar13 = -NAN;
                cVar8 = *pcVar15;
                pfVar13 = pfVar13 + 1;
              }
              else {
                iVar5 = (**(code **)(unaff_gp + -0x7f10))
                                  ((int)param_1 + iVar6 + 0x21,
                                   *(int *)(unaff_gp + -0x7f94) + -0x62c8,5);
                if (iVar5 == 0) {
                  fVar17 = (float)(**(code **)(unaff_gp + -0x7cd8))
                                            ((int)param_1 + iVar6 + 0x26,&local_17e4,0);
                  if ((local_17e4 == (float *)0x0) || (*(byte *)local_17e4 != 10)) {
                    *pfVar13 = -NAN;
                    cVar8 = *pcVar15;
                    pfVar13 = pfVar13 + 1;
                  }
                  else if (((uint)param_1[0x96] & 0x49) == 0) {
                    *pfVar13 = -NAN;
                    cVar8 = *pcVar15;
                    pfVar13 = pfVar13 + 1;
                  }
                  else {
                    *pfVar13 = fVar17;
                    cVar8 = *pcVar15;
                    pfVar13 = pfVar13 + 1;
                  }
                }
                else {
                  *pfVar13 = -NAN;
                  cVar8 = *pcVar15;
                  pfVar13 = pfVar13 + 1;
                }
              }
            }
            else {
              *pfVar13 = -NAN;
              cVar8 = *pcVar15;
              pfVar13 = pfVar13 + 1;
            }
          }
          else {
            *pfVar13 = -NAN;
            cVar8 = *pcVar15;
            pfVar13 = pfVar13 + 1;
          }
          goto joined_r0x00435ac4;
        }
        if (cVar8 == '\x0e') {
          fVar17 = pfVar13[-1];
          pcVar15 = pcVar15 + 1;
          if ((int)fVar17 < 0) {
            fVar14 = -NAN;
          }
          else if (param_1[0x8f] == 0.0) {
            fVar14 = -NAN;
          }
          else if (param_1[0x8d] == 0.0) {
            iVar6 = (**(code **)(unaff_gp + -0x7778))(param_1[0x8e],fVar17,&local_17d1,1);
            fVar14 = (float)(uint)local_17d1;
            if (iVar6 != 0) {
              fVar14 = -NAN;
            }
          }
          else if ((uint)param_1[0xb3] < (int)fVar17 + 1U) {
            if (param_1[0xb3] == 7.17465e-43) {
              iVar6 = (**(code **)(unaff_gp + -0x7778))(param_1[0x8e],fVar17,&local_17d1,1);
              fVar14 = (float)(uint)local_17d1;
              if (iVar6 != 0) {
                fVar14 = -NAN;
              }
            }
            else {
              fVar14 = -NAN;
            }
          }
          else {
            fVar14 = (float)(uint)*(byte *)((int)param_1 + (int)fVar17 + 0x20U);
          }
          pfVar13[-1] = fVar14;
          cVar8 = *pcVar15;
        }
        else if (cVar8 == 'J') {
          fVar17 = pfVar13[-1];
          pcVar15 = pcVar15 + 1;
          if ((int)fVar17 < 0) {
            fVar14 = -NAN;
          }
          else if (param_1[0x8f] == 0.0) {
            fVar14 = -NAN;
          }
          else if (param_1[0x8d] == 0.0) {
            iVar6 = (**(code **)(unaff_gp + -0x7778))(param_1[0x8e],fVar17,&local_17d4,2);
            fVar14 = (float)(int)local_17d4;
            if (iVar6 != 0) {
              fVar14 = -NAN;
            }
          }
          else if ((uint)param_1[0xb3] < (int)fVar17 + 2U) {
            if (param_1[0xb3] == 7.17465e-43) {
              iVar6 = (**(code **)(unaff_gp + -0x7778))(param_1[0x8e],fVar17,&local_17d4,2);
              fVar14 = (float)(int)local_17d4;
              if (iVar6 != 0) {
                fVar14 = -NAN;
              }
            }
            else {
              fVar14 = -NAN;
            }
          }
          else {
            fVar14 = (float)(**(code **)(unaff_gp + -0x7784))((int)param_1 + (int)fVar17 + 0x20U);
            local_17d4 = SUB42(fVar14,0);
          }
          pfVar13[-1] = fVar14;
          cVar8 = *pcVar15;
        }
        else if (cVar8 == '-') {
          fVar17 = pfVar13[-1];
          pcVar15 = pcVar15 + 1;
          if ((int)fVar17 < 0) {
            fVar14 = -NAN;
          }
          else if (param_1[0x8f] == 0.0) {
            fVar14 = -NAN;
          }
          else if (param_1[0x8d] == 0.0) {
            iVar6 = (**(code **)(unaff_gp + -0x7778))(param_1[0x8e],fVar17,&local_17d8,4);
            fVar14 = local_17d8;
            if (iVar6 != 0) {
              fVar14 = -NAN;
            }
          }
          else if ((uint)param_1[0xb3] < (int)fVar17 + 4U) {
            if (param_1[0xb3] == 7.17465e-43) {
              iVar6 = (**(code **)(unaff_gp + -0x7778))(param_1[0x8e],fVar17,&local_17d8,4);
              fVar14 = local_17d8;
              if (iVar6 != 0) {
                fVar14 = -NAN;
              }
            }
            else {
              fVar14 = -NAN;
            }
          }
          else {
            local_17d8 = (float)(**(code **)(unaff_gp + -0x7780))
                                          ((int)param_1 + (int)fVar17 + 0x20U);
            fVar14 = local_17d8;
          }
          pfVar13[-1] = fVar14;
          cVar8 = *pcVar15;
        }
        else if (cVar8 == 'Z') {
          fVar17 = pfVar13[-1];
          pcVar15 = pcVar15 + 1;
          if (param_1[0x8f] == 0.0) {
            fVar14 = -NAN;
          }
          else if (param_1[0x8d] == 0.0) {
            iVar6 = (**(code **)(unaff_gp + -0x7778))(param_1[0x8e],fVar17,&local_17d9,1);
            fVar14 = (float)(uint)local_17d9;
            if (iVar6 != 0) {
              fVar14 = -NAN;
            }
          }
          else if ((uint)param_1[0xb3] < (int)fVar17 + 1U) {
            if (param_1[0xb3] == 7.17465e-43) {
              iVar6 = (**(code **)(unaff_gp + -0x7778))(param_1[0x8e],fVar17,&local_17d9,1);
              fVar14 = (float)(uint)local_17d9;
              if (iVar6 != 0) {
                fVar14 = -NAN;
              }
            }
            else {
              fVar14 = -NAN;
            }
          }
          else {
            fVar14 = (float)(uint)*(byte *)((int)param_1 + (int)fVar17 + 0x20U);
          }
          pfVar13[-1] = fVar14;
          cVar8 = *pcVar15;
        }
        else if (cVar8 == '\\') {
          fVar17 = pfVar13[-1];
          pcVar15 = pcVar15 + 1;
          if ((int)fVar17 < 0) {
            fVar14 = -NAN;
          }
          else if (param_1[0x8f] == 0.0) {
            fVar14 = -NAN;
          }
          else if (param_1[0x8d] == 0.0) {
            iVar6 = (**(code **)(unaff_gp + -0x7778))(param_1[0x8e],fVar17,&local_17dc,2);
            if (iVar6 == 0) {
              fVar14 = (float)(uint)local_17dc;
            }
            else {
              fVar14 = -NAN;
            }
          }
          else if ((uint)param_1[0xb3] < (int)fVar17 + 2U) {
            if (param_1[0xb3] == 7.17465e-43) {
              iVar6 = (**(code **)(unaff_gp + -0x7778))(param_1[0x8e],fVar17,&local_17dc,2);
              if (iVar6 == 0) {
                fVar14 = (float)(uint)local_17dc;
              }
              else {
                fVar14 = -NAN;
              }
            }
            else {
              fVar14 = -NAN;
            }
          }
          else {
            local_17dc = (**(code **)(unaff_gp + -0x7784))((int)param_1 + (int)fVar17 + 0x20U);
            fVar14 = (float)(uint)local_17dc;
          }
          pfVar13[-1] = fVar14;
          cVar8 = *pcVar15;
        }
        else if (cVar8 == '[') {
          fVar17 = pfVar13[-1];
          pcVar15 = pcVar15 + 1;
          if ((int)fVar17 < 0) {
            fVar14 = -NAN;
          }
          else if (param_1[0x8f] == 0.0) {
            fVar14 = -NAN;
          }
          else if (param_1[0x8d] == 0.0) {
            iVar6 = (**(code **)(unaff_gp + -0x7778))(param_1[0x8e],fVar17,&local_17e0,4);
            fVar14 = local_17e0;
            if (iVar6 != 0) {
              fVar14 = -NAN;
            }
          }
          else if ((uint)param_1[0xb3] < (int)fVar17 + 4U) {
            if (param_1[0xb3] == 7.17465e-43) {
              iVar6 = (**(code **)(unaff_gp + -0x7778))(param_1[0x8e],fVar17,&local_17e0,4);
              fVar14 = local_17e0;
              if (iVar6 != 0) {
                fVar14 = -NAN;
              }
            }
            else {
              fVar14 = -NAN;
            }
          }
          else {
            local_17e0 = (float)(**(code **)(unaff_gp + -0x7780))
                                          ((int)param_1 + (int)fVar17 + 0x20U);
            fVar14 = local_17e0;
          }
          pfVar13[-1] = fVar14;
          cVar8 = *pcVar15;
        }
        else if (cVar8 == 'G') {
          pfVar4 = (float *)(pcVar15 + 1);
          pcVar15 = pcVar15 + 5;
          local_17d0 = *pfVar4;
          iVar6 = (**(code **)(unaff_gp + -0x7c20))(param_4 + (int)local_17d0);
          fVar17 = (float)(**(code **)(unaff_gp + -0x7b5c))();
          (**(code **)(unaff_gp + -0x7e64))(param_4 + (int)local_17d0,fVar17,iVar6 + 1);
          *pfVar13 = fVar17;
          cVar8 = *pcVar15;
          pfVar13 = pfVar13 + 1;
        }
        else {
          if (cVar8 == '\x16') {
            halt_baddata();
          }
          if (cVar8 == '\x1e') {
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
          }
          else if (cVar8 == 'U') {
            fVar14 = pfVar13[-1];
            fVar17 = pfVar13[-2];
            iVar6 = (**(code **)(unaff_gp + -0x7f34))(fVar17,fVar14);
            pfVar13[-2] = (float)(uint)(iVar6 == 0);
            (**(code **)(unaff_gp + -0x7b34))(fVar17);
            (**(code **)(unaff_gp + -0x7b34))(fVar14);
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
            pfVar13 = pfVar13 + -1;
          }
          else if (cVar8 == '\x12') {
            fVar17 = pfVar13[-1];
            pfVar4 = pfVar13 + -1;
            iVar6 = (**(code **)(unaff_gp + -0x7c20))(param_1[0x8a]);
            iVar5 = (**(code **)(unaff_gp + -0x7c20))(fVar17);
            if (iVar5 + iVar6 + 1 < 0xff) {
              (**(code **)(unaff_gp + -0x7e64))(param_1[0x8a],auStack_18f4,iVar6);
              pcVar18 = *(code **)(unaff_gp + -0x7e64);
              auStack_18f4[iVar6] = 0x2f;
              (*pcVar18)(fVar17,auStack_18f4 + iVar6 + 1,iVar5);
              (auStack_18f4 + iVar6)[iVar5 + 1] = 0;
              iVar6 = (**(code **)(unaff_gp + -0x7e30))(auStack_18f4,auStack_197c);
              (**(code **)(unaff_gp + -0x7b34))(fVar17);
              if (iVar6 == 0) {
                *pfVar4 = 1.4013e-45;
              }
              else {
                *pfVar4 = 0.0;
              }
            }
            else {
              (**(code **)(unaff_gp + -0x7b34))(fVar17);
              *pfVar4 = 0.0;
            }
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
          }
          else if (cVar8 == 'V') {
            fVar14 = pfVar13[-1];
            fVar17 = pfVar13[-2];
            pfVar4 = pfVar13 + -2;
            if (((param_1[0x8f] == 0.0) || ((int)fVar17 < 0)) || ((int)fVar14 < 0)) {
              local_17e4 = (float *)(**(code **)(unaff_gp + -0x7b5c))(1);
              *(byte *)local_17e4 = 0;
              *pfVar4 = (float)local_17e4;
            }
            else if (param_1[0x8d] == 0.0) {
              (**(code **)(unaff_gp + -0x7b38))(param_1[0x8e],fVar17,0);
              local_17e4 = (float *)(**(code **)(unaff_gp + -0x7b5c))((int)fVar14 + 1);
              (**(code **)(unaff_gp + -0x7e14))(param_1[0x8e],local_17e4,fVar14);
              *(byte *)((int)local_17e4 + (int)fVar14) = 0;
              *pfVar4 = (float)local_17e4;
            }
            else if ((int)param_1[0xb3] < (int)fVar17 + (int)fVar14) {
              if (param_1[0xb3] == 7.17465e-43) {
                (**(code **)(unaff_gp + -0x7b38))(param_1[0x8e],fVar17,0);
                local_17e4 = (float *)(**(code **)(unaff_gp + -0x7b5c))((int)fVar14 + 1);
                (**(code **)(unaff_gp + -0x7e14))(param_1[0x8e],local_17e4,fVar14);
                *(byte *)((int)local_17e4 + (int)fVar14) = 0;
                *pfVar4 = (float)local_17e4;
              }
              else {
                local_17e4 = (float *)(**(code **)(unaff_gp + -0x7b5c))(1);
                *(byte *)local_17e4 = 0;
                *pfVar4 = (float)local_17e4;
              }
            }
            else {
              fVar9 = 0.0;
              local_17e4 = (float *)(**(code **)(unaff_gp + -0x7b5c))((int)fVar14 + 1);
              if (0 < (int)fVar14) {
                if ((float)((uint)fVar14 & 3) != 0.0) {
                  iVar6 = (int)param_1 + (int)fVar17;
                  do {
                    pbVar1 = (byte *)(iVar6 + 0x20);
                    pbVar7 = (byte *)((int)local_17e4 + (int)fVar9);
                    fVar9 = (float)((int)fVar9 + 1);
                    iVar6 = iVar6 + 1;
                    *pbVar7 = *pbVar1;
                  } while ((float)((uint)fVar14 & 3) != fVar9);
                  if (fVar9 == fVar14) goto LAB_00437ddc;
                }
                iVar6 = (int)param_1 + (int)fVar9 + (int)fVar17;
                fVar10 = fVar9;
                do {
                  *(byte *)((int)local_17e4 + (int)fVar10) = *(byte *)(iVar6 + 0x20);
                  *(byte *)((int)local_17e4 + (int)fVar10 + 1U) = *(byte *)(iVar6 + 0x21);
                  *(byte *)((int)local_17e4 + (int)fVar10 + 2U) = *(byte *)(iVar6 + 0x22);
                  pbVar1 = (byte *)(iVar6 + 0x23);
                  fVar9 = (float)((int)fVar10 + 4);
                  iVar6 = iVar6 + 4;
                  *(byte *)((int)local_17e4 + (int)fVar10 + 3U) = *pbVar1;
                  fVar10 = fVar9;
                } while (fVar9 != fVar14);
              }
LAB_00437ddc:
              *(byte *)((int)local_17e4 + (int)fVar9) = 0;
              *pfVar4 = (float)local_17e4;
            }
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
            pfVar13 = pfVar13 + -1;
          }
          else if (cVar8 == '!') {
            fVar14 = pfVar13[-1];
            fVar17 = (float)(**(code **)(unaff_gp + -0x7750))(param_1[0x8b],fVar14);
            pfVar13[-1] = fVar17;
            (**(code **)(unaff_gp + -0x7b34))(fVar14);
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
          }
          else if (cVar8 == 'Q') {
            *pfVar13 = *param_1;
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
            pfVar13 = pfVar13 + 1;
          }
          else if (cVar8 == 'O') {
            *pfVar13 = param_1[1];
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
            pfVar13 = pfVar13 + 1;
          }
          else if (cVar8 == 'P') {
            *pfVar13 = param_1[2];
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
            pfVar13 = pfVar13 + 1;
          }
          else if (cVar8 == 'R') {
            *pfVar13 = param_1[3];
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
            pfVar13 = pfVar13 + 1;
          }
          else if (cVar8 == 'N') {
            *pfVar13 = param_1[4];
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
            pfVar13 = pfVar13 + 1;
          }
          else if (cVar8 == 'I') {
            *pfVar13 = param_1[5];
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
            pfVar13 = pfVar13 + 1;
          }
          else if (cVar8 == '$') {
            *pfVar13 = param_1[6];
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
            pfVar13 = pfVar13 + 1;
          }
          else if (cVar8 == '<') {
            *pfVar13 = param_1[7];
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
            pfVar13 = pfVar13 + 1;
          }
          else if (cVar8 == 'D') {
            (**(code **)(unaff_gp + -0x7ce0))(*(int *)(unaff_gp + -0x7f94) + -0x62d4);
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
            pfVar13 = pfVar13 + -1;
          }
          else if (cVar8 == 'E') {
            fVar17 = pfVar13[-1];
            (**(code **)(unaff_gp + -0x7ce0))(*(int *)(unaff_gp + -0x7f94) + -0x62d0,fVar17);
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
            pfVar13 = pfVar13 + -1;
          }
          else if (cVar8 == 'F') {
            fVar17 = pfVar13[-1];
            (**(code **)(unaff_gp + -0x7ce0))(*(int *)(unaff_gp + -0x7f94) + -0x62cc,fVar17);
            (**(code **)(unaff_gp + -0x7b34))(fVar17);
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
            pfVar13 = pfVar13 + -1;
          }
        }
      }
      goto joined_r0x00435ac4;
    }
    if (param_1[0x8c] == 0.0) {
      *pfVar13 = -NAN;
    }
    else {
      *pfVar13 = param_1[0x96];
    }
    cVar8 = pcVar15[1];
    pcVar15 = pcVar15 + 1;
    pfVar13 = pfVar13 + 1;
  } while( true );
}
