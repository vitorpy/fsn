/**
 * run__19FileIconInterpreterFPcPvT1
 *
 * Extracted from fsn.c lines 58253-59564
 * Category: Filesystem
 */

void run__19FileIconInterpreterFPcPvT1(float *param_1,char *param_2,int param_3,int param_4)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  size_t sVar6;
  size_t __n;
  int iVar7;
  int iVar8;
  char *pcVar9;
  byte *pbVar10;
  char cVar11;
  float fVar12;
  float fVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float fVar17;
  char *pcVar18;
  int iVar19;
  char *__s1;
  uint in_fcsr;
  stat sStack_197c;
  char acStack_18f4 [272];
  float *pfStack_17e4;
  float fStack_17e0;
  ushort uStack_17dc;
  byte bStack_17d9;
  float fStack_17d8;
  short sStack_17d4;
  byte bStack_17d1;
  char *pcStack_17d0;
  int iStack_17cc;
  float fStack_17c8;
  float fStack_17c4;
  float afStack_17bc [511];
  char *pcStack_fc0;
  float fStack_fbc;
  float fStack_fb8;
  float fStack_fb4;
  float afStack_fa8 [1002];
  
  iStack_17cc = 0;
  cVar11 = *param_2;
  pfVar16 = afStack_fa8;
  iVar19 = 0;
  __s1 = pcStack_fc0;
  pcVar18 = param_2;
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
                                                                        if (cVar11 == '\x1b') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                                          halt_baddata();
                                                                        }
                                                                        if (cVar11 != '\x1c') break;
                                                                        __s1 = (char *)pfVar16[-1];
                                                                        if (__s1 == (char *)pfVar16[
                                                  -2]) {
                                                    pfVar16[-2] = 1.4013e-45;
                                                  }
                                                  else {
                                                    pfVar16[-2] = 0.0;
                                                  }
                                                  pfVar16 = pfVar16 + -1;
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 == '\x10') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                    halt_baddata();
                                                  }
                                                  if (cVar11 != '\x11') break;
                                                  __s1 = (char *)pfVar16[-1];
                                                  if (__s1 == (char *)0x0) {
                                                    pfVar16[-1] = 1.4013e-45;
                                                  }
                                                  else {
                                                    pfVar16[-1] = 0.0;
                                                  }
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 == '\"') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                    halt_baddata();
                                                  }
                                                  if (cVar11 != '#') break;
                                                  __s1 = (char *)pfVar16[-2];
                                                  if ((int)pfVar16[-1] < (int)__s1) {
                                                    pfVar16[-2] = 1.4013e-45;
                                                  }
                                                  else {
                                                    pfVar16[-2] = 0.0;
                                                  }
                                                  pfVar16 = pfVar16 + -1;
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 == '\x1f') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                    halt_baddata();
                                                  }
                                                  if (cVar11 != ' ') break;
                                                  __s1 = (char *)pfVar16[-2];
                                                  if ((int)__s1 < (int)pfVar16[-1]) {
                                                    pfVar16[-2] = 0.0;
                                                  }
                                                  else {
                                                    pfVar16[-2] = 1.4013e-45;
                                                  }
                                                  pfVar16 = pfVar16 + -1;
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 == '.') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                    halt_baddata();
                                                  }
                                                  if (cVar11 != '/') break;
                                                  __s1 = (char *)pfVar16[-2];
                                                  if ((int)__s1 < (int)pfVar16[-1]) {
                                                    pfVar16[-2] = 1.4013e-45;
                                                  }
                                                  else {
                                                    pfVar16[-2] = 0.0;
                                                  }
                                                  pfVar16 = pfVar16 + -1;
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 == '&') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                    halt_baddata();
                                                  }
                                                  if (cVar11 != '\'') break;
                                                  __s1 = (char *)pfVar16[-2];
                                                  if ((int)pfVar16[-1] < (int)__s1) {
                                                    pfVar16[-2] = 0.0;
                                                  }
                                                  else {
                                                    pfVar16[-2] = 1.4013e-45;
                                                  }
                                                  pfVar16 = pfVar16 + -1;
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 == '6') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                    halt_baddata();
                                                  }
                                                  if (cVar11 != '7') break;
                                                  __s1 = (char *)pfVar16[-2];
                                                  if (__s1 == (char *)pfVar16[-1]) {
                                                    pfVar16[-2] = 0.0;
                                                  }
                                                  else {
                                                    pfVar16[-2] = 1.4013e-45;
                                                  }
                                                  pfVar16 = pfVar16 + -1;
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 != '?') break;
                                                  pfVar16[-2] = pfVar16[-2] + pfVar16[-1];
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  pfVar16 = pfVar16 + -1;
                                                  }
                                                  if (cVar11 != '@') break;
                                                  __s1 = (char *)pfVar16[-2];
                                                  pfVar16[-2] = (float)(__s1 + (int)pfVar16[-1]);
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  pfVar16 = pfVar16 + -1;
                                                  }
                                                  if (cVar11 != '0') break;
                                                  pfVar16[-2] = pfVar16[-2] - pfVar16[-1];
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  pfVar16 = pfVar16 + -1;
                                                  }
                                                  if (cVar11 != '1') break;
                                                  __s1 = (char *)pfVar16[-2];
                                                  pfVar16[-2] = (float)((int)__s1 - (int)pfVar16[-1]
                                                                       );
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  pfVar16 = pfVar16 + -1;
                                                  }
                                                  if (cVar11 != 'X') break;
                                                  pfVar5 = pfVar16 + -1;
                                                  pfVar15 = pfVar16 + -2;
                                                  pfVar14 = pfVar16 + -2;
                                                  pfVar16 = pfVar16 + -1;
                                                  *pfVar14 = *pfVar15 * *pfVar5;
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 != 'Y') break;
                                                  pfVar5 = pfVar16 + -1;
                                                  __s1 = (char *)pfVar16[-2];
                                                  pfVar15 = pfVar16 + -2;
                                                  pfVar16 = pfVar16 + -1;
                                                  *pfVar15 = (float)((int)__s1 * (int)*pfVar5);
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 != 'L') break;
                                                  pfVar5 = pfVar16 + -1;
                                                  pfVar15 = pfVar16 + -2;
                                                  pfVar14 = pfVar16 + -2;
                                                  pfVar16 = pfVar16 + -1;
                                                  *pfVar14 = *pfVar15 / *pfVar5;
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 == 'M') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                    halt_baddata();
                                                  }
                                                  if (cVar11 == '3') {
                                                    fVar17 = pfVar16[-2];
                                                    float_convert(pfVar16[-1]);
                                                    float_convert(fVar17);
                    // WARNING: Bad instruction - Truncating control flow here
                                                    halt_baddata();
                                                  }
                                                  if (cVar11 == '4') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                    halt_baddata();
                                                  }
                                                  if (cVar11 != '\x02') break;
                                                  pfVar5 = pfVar16 + -1;
                                                  pfVar15 = pfVar16 + -2;
                                                  fVar17 = *pfVar15;
                                                  pfVar16 = pfVar16 + -1;
                                                  uVar3 = float_convert(*pfVar5);
                                                  uVar4 = float_convert(fVar17);
                                                  *pfVar15 = (float)(int)(uVar4 & uVar3);
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 != '\x03') break;
                                                  __s1 = (char *)pfVar16[-2];
                                                  pfVar16[-2] = (float)((uint)__s1 &
                                                                       (uint)pfVar16[-1]);
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  pfVar16 = pfVar16 + -1;
                                                  }
                                                  if (cVar11 != ':') break;
                                                  pfVar5 = pfVar16 + -1;
                                                  pfVar15 = pfVar16 + -2;
                                                  fVar17 = *pfVar15;
                                                  pfVar16 = pfVar16 + -1;
                                                  uVar3 = float_convert(*pfVar5);
                                                  uVar4 = float_convert(fVar17);
                                                  *pfVar15 = (float)(int)(uVar4 | uVar3);
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 != ';') break;
                                                  __s1 = (char *)pfVar16[-2];
                                                  pfVar16[-2] = (float)((uint)__s1 |
                                                                       (uint)pfVar16[-1]);
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  pfVar16 = pfVar16 + -1;
                                                  }
                                                  if (cVar11 != '_') break;
                                                  pfVar5 = pfVar16 + -1;
                                                  pfVar15 = pfVar16 + -2;
                                                  fVar17 = *pfVar15;
                                                  pfVar16 = pfVar16 + -1;
                                                  uVar3 = float_convert(*pfVar5);
                                                  uVar4 = float_convert(fVar17);
                                                  *pfVar15 = (float)(int)(uVar4 ^ uVar3);
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 != '`') break;
                                                  __s1 = (char *)pfVar16[-2];
                                                  pfVar16[-2] = (float)((uint)__s1 ^
                                                                       (uint)pfVar16[-1]);
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  pfVar16 = pfVar16 + -1;
                                                  }
                                                  if (cVar11 != '5') break;
                                                  fStack_17c8 = pfVar16[-1];
                                                  pcVar18 = pcVar18 + 1;
                                                  fStack_17c4 = pfVar16[-2];
                                                  pfVar16 = pfVar16 + -2;
                                                  cVar11 = *pcVar18;
                                                  iVar19 = 0;
                                                  }
                                                  if (cVar11 != '\x13') break;
                                                  fVar17 = pfVar16[-2];
                                                  fVar12 = pfVar16[-1];
                                                  pfVar16 = pfVar16 + -2;
                                                  iVar19 = 0;
                                                  set_gl_color(iStack_17cc);
                                                  move2(fStack_17c4,fStack_17c8);
                                                  draw2(fVar17,fVar12);
                                                  cVar11 = pcVar18[1];
                                                  fStack_17c4 = fVar17;
                                                  fStack_17c8 = fVar12;
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 != '\x0f') break;
                                                  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
                                                    fVar17 = ROUND(pfVar16[-1]);
                                                  }
                                                  else {
                                                    fVar17 = FLOOR(pfVar16[-1]);
                                                  }
                                                  iStack_17cc = (int)fVar17;
                                                  pfVar16 = pfVar16 + -1;
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 != '\n') break;
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  iVar19 = 0;
                                                  }
                                                  if (cVar11 != 'A') break;
                                                  afStack_17bc[1] = pfVar16[-1];
                                                  pcVar18 = pcVar18 + 1;
                                                  afStack_17bc[0] = pfVar16[-2];
                                                  pfVar16 = pfVar16 + -2;
                                                  cVar11 = *pcVar18;
                                                  iVar19 = 1;
                                                  }
                                                  if ((cVar11 != '>') && (cVar11 != ']')) break;
                                                  if (iVar19 < 0xff) {
                                                    afStack_17bc[iVar19 * 2] = pfVar16[-2];
                                                    pfVar5 = pfVar16 + -1;
                                                    iVar7 = iVar19 * 2;
                                                    iVar19 = iVar19 + 1;
                                                    pfVar16 = pfVar16 + -2;
                                                    afStack_17bc[iVar7 + 1] = *pfVar5;
                                                  }
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 != '=') break;
                                                  iVar7 = 1;
                                                  set_gl_color(iStack_17cc);
                                                  if (iVar19 != 0) {
                                                    pmv2(afStack_17bc[0],afStack_17bc[1]);
                                                  }
                                                  pfVar5 = afStack_17bc;
                                                  if (1 < iVar19) {
                                                    do {
                                                      pfVar5 = pfVar5 + 2;
                                                      pdr2(*pfVar5,pfVar5[1]);
                                                      iVar7 = iVar7 + 1;
                                                    } while (iVar7 != iVar19);
                                                  }
                                                  iVar19 = 0;
                                                  pclos();
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 != '\x14') break;
                                                  iVar7 = 0;
                                                  set_gl_color(iStack_17cc);
                                                  bgnclosedline();
                                                  pfVar5 = afStack_17bc;
                                                  if (0 < iVar19) {
                                                    do {
                                                      v2f(pfVar5);
                                                      iVar7 = iVar7 + 1;
                                                      pfVar5 = pfVar5 + 2;
                                                    } while (iVar7 != iVar19);
                                                  }
                                                  iVar19 = 0;
                                                  endclosedline();
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 != '\x15') break;
                                                  iVar7 = 0;
                                                  set_gl_color(iStack_17cc);
                                                  bgnline();
                                                  pfVar5 = afStack_17bc;
                                                  if (0 < iVar19) {
                                                    do {
                                                      v2f(pfVar5);
                                                      iVar7 = iVar7 + 1;
                                                      pfVar5 = pfVar5 + 2;
                                                    } while (iVar7 != iVar19);
                                                  }
                                                  iVar19 = 0;
                                                  endline();
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 != '\x18') break;
                                                  iVar7 = 0;
                                                  set_gl_color(iStack_17cc);
                                                  bgnpoint();
                                                  pfVar5 = afStack_17bc;
                                                  if (0 < iVar19) {
                                                    do {
                                                      v2f(pfVar5);
                                                      iVar7 = iVar7 + 1;
                                                      pfVar5 = pfVar5 + 2;
                                                    } while (iVar7 != iVar19);
                                                  }
                                                  iVar19 = 0;
                                                  endpoint();
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 != '\x19') break;
                                                  iVar7 = 0;
                                                  set_gl_color(iStack_17cc);
                                                  bgnpolygon();
                                                  pfVar5 = afStack_17bc;
                                                  if (0 < iVar19) {
                                                    do {
                                                      v2f(pfVar5);
                                                      iVar7 = iVar7 + 1;
                                                      pfVar5 = pfVar5 + 2;
                                                    } while (iVar7 != iVar19);
                                                  }
                                                  iVar19 = 0;
                                                  endpolygon();
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                }
                                                if (cVar11 != '\x17') break;
                                                if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
                                                  fVar17 = ROUND(pfVar16[-1]);
                                                }
                                                else {
                                                  fVar17 = FLOOR(pfVar16[-1]);
                                                }
                                                __s1 = (char *)(int)fVar17;
                                                pfVar16 = pfVar16 + -1;
                                                iVar7 = 0;
                                                set_gl_color(iStack_17cc);
                                                bgnpolygon();
                                                pfVar5 = afStack_17bc;
                                                if (0 < iVar19) {
                                                  do {
                                                    v2f(pfVar5);
                                                    iVar7 = iVar7 + 1;
                                                    pfVar5 = pfVar5 + 2;
                                                  } while (iVar7 != iVar19);
                                                }
                                                iVar7 = 0;
                                                endpolygon();
                                                set_gl_color(__s1);
                                                bgnclosedline();
                                                pfVar5 = afStack_17bc;
                                                if (0 < iVar19) {
                                                  do {
                                                    v2f(pfVar5);
                                                    iVar7 = iVar7 + 1;
                                                    pfVar5 = pfVar5 + 2;
                                                  } while (iVar7 != iVar19);
                                                }
                                                iVar19 = 0;
                                                endclosedline();
                                                cVar11 = pcVar18[1];
                                                pcVar18 = pcVar18 + 1;
                                              }
                                              if (cVar11 != '\a') break;
                                              pfVar16 = pfVar16 + -1;
                                              if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
                                                fVar17 = ROUND(*pfVar16);
                                              }
                                              else {
                                                fVar17 = FLOOR(*pfVar16);
                                              }
                                              __s1 = (char *)(int)fVar17;
                                              iVar7 = 1;
                                              set_gl_color(iStack_17cc);
                                              if (iVar19 != 0) {
                                                pmv2(afStack_17bc[0],afStack_17bc[1]);
                                              }
                                              pfVar5 = afStack_17bc;
                                              if (1 < iVar19) {
                                                do {
                                                  pfVar5 = pfVar5 + 2;
                                                  pdr2(*pfVar5,pfVar5[1]);
                                                  iVar7 = iVar7 + 1;
                                                } while (iVar7 != iVar19);
                                              }
                                              iVar7 = 1;
                                              pclos();
                                              set_gl_color(__s1);
                                              if (iVar19 != 0) {
                                                move2(afStack_17bc[0],afStack_17bc[1]);
                                              }
                                              pfVar5 = afStack_17bc;
                                              if (1 < iVar19) {
                                                do {
                                                  pfVar5 = pfVar5 + 2;
                                                  draw2(*pfVar5,pfVar5[1]);
                                                  iVar7 = iVar7 + 1;
                                                } while (iVar7 != iVar19);
                                              }
                                              iVar19 = 0;
                                              draw2(afStack_17bc[0],afStack_17bc[1]);
                                              cVar11 = pcVar18[1];
                                              pcVar18 = pcVar18 + 1;
                                            }
                                            if (cVar11 != '\x04') break;
                                            fStack_fbc = pfVar16[-1];
                                            fStack_fb8 = pfVar16[-2];
                                            fStack_fb4 = pfVar16[-3];
                                            fVar12 = pfVar16[-4];
                                            fVar17 = pfVar16[-5];
                                            pfVar16 = pfVar16 + -5;
                                            set_gl_color(iStack_17cc);
                                            arc(fVar17,fVar12);
                                            cVar11 = pcVar18[1];
                                            pcVar18 = pcVar18 + 1;
                                          }
                                          if (cVar11 != '\x05') break;
                                          fStack_fbc = pfVar16[-1];
                                          fStack_fb8 = pfVar16[-2];
                                          fStack_fb4 = pfVar16[-3];
                                          fVar12 = pfVar16[-4];
                                          fVar17 = pfVar16[-5];
                                          pfVar16 = pfVar16 + -5;
                                          set_gl_color(iStack_17cc);
                                          arcf(fVar17,fVar12);
                                          cVar11 = pcVar18[1];
                                          pcVar18 = pcVar18 + 1;
                                        }
                                        if (cVar11 == '\x1a') {
                    // WARNING: Bad instruction - Truncating control flow here
                                          halt_baddata();
                                        }
                                        if (cVar11 == '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
                                          halt_baddata();
                                        }
                                        if (cVar11 != '\x01') break;
                                        __s1 = (char *)pfVar16[-2];
                                        if ((__s1 == (char *)0x0) || (pfVar16[-1] == 0.0)) {
                                          pfVar16[-2] = 0.0;
                                        }
                                        else {
                                          pfVar16[-2] = 1.4013e-45;
                                        }
                                        pfVar16 = pfVar16 + -1;
                                        cVar11 = pcVar18[1];
                                        pcVar18 = pcVar18 + 1;
                                      }
                                      if (cVar11 == '8') {
                    // WARNING: Bad instruction - Truncating control flow here
                                        halt_baddata();
                                      }
                                      if (cVar11 != '9') break;
                                      __s1 = (char *)pfVar16[-2];
                                      if ((__s1 == (char *)0x0) && (pfVar16[-1] == 0.0)) {
                                        pfVar16[-2] = 0.0;
                                      }
                                      else {
                                        pfVar16[-2] = 1.4013e-45;
                                      }
                                      pfVar16 = pfVar16 + -1;
                                      cVar11 = pcVar18[1];
                                      pcVar18 = pcVar18 + 1;
                                    }
                                    if (cVar11 != 'B') break;
                                    cVar11 = pcVar18[1];
                                    pcVar18 = pcVar18 + 1;
                                    pfVar16 = pfVar16 + -1;
                                  }
                                  if (cVar11 != 'C') break;
                                  cVar11 = pcVar18[1];
                                  pcVar18 = pcVar18 + 1;
                                  pfVar16 = pfVar16 + -1;
                                }
                                if (cVar11 == '\b') {
                    // WARNING: Bad instruction - Truncating control flow here
                                  halt_baddata();
                                }
                                if (cVar11 != '\t') break;
                                if (pfVar16[-1] == 0.0) {
                                  pcStack_17d0 = *(char **)(pcVar18 + 1);
                                  pcVar18 = param_2 + (int)pcStack_17d0;
                                }
                                else {
                                  pcVar18 = pcVar18 + 5;
                                }
                                cVar11 = *pcVar18;
                              }
                              if (cVar11 == '\v') {
                    // WARNING: Bad instruction - Truncating control flow here
                                halt_baddata();
                              }
                              if (cVar11 != '\f') break;
                              if (pfVar16[-1] == 0.0) {
                                pcVar18 = pcVar18 + 5;
                              }
                              else {
                                pcStack_17d0 = *(char **)(pcVar18 + 1);
                                pcVar18 = param_2 + (int)pcStack_17d0;
                              }
                              cVar11 = *pcVar18;
                            }
                            if (cVar11 != '\r') break;
                            pcStack_17d0 = *(char **)(pcVar18 + 1);
                            cVar11 = param_2[(int)pcStack_17d0];
                            pcVar18 = param_2 + (int)pcStack_17d0;
                          }
                          if (cVar11 != '%') break;
                          cVar11 = pcVar18[1];
                          pcVar18 = pcVar18 + 1;
                        }
                        if (cVar11 != 'S') break;
                        pcStack_17d0 = *(char **)(pcVar18 + 1);
                        *(float *)(pcStack_17d0 + param_3) = pfVar16[-1];
                        cVar11 = pcVar18[5];
                        pcVar18 = pcVar18 + 5;
                      }
                      if (cVar11 != 'T') break;
                      pcStack_17d0 = *(char **)(pcVar18 + 1);
                      __s1 = (char *)pfVar16[-1];
                      *(char **)(pcStack_17d0 + param_3) = __s1;
                      cVar11 = pcVar18[5];
                      pcVar18 = pcVar18 + 5;
                    }
                    if (cVar11 != '+') break;
                    pcStack_17d0 = *(char **)(pcVar18 + 1);
                    *pfVar16 = *(float *)(pcStack_17d0 + param_3);
                    cVar11 = pcVar18[5];
                    pcVar18 = pcVar18 + 5;
                    pfVar16 = pfVar16 + 1;
                  }
                  if (cVar11 != ',') break;
                  pcStack_17d0 = *(char **)(pcVar18 + 1);
                  __s1 = *(char **)(pcStack_17d0 + param_3);
                  *pfVar16 = (float)__s1;
                  cVar11 = pcVar18[5];
                  pcVar18 = pcVar18 + 5;
                  pfVar16 = pfVar16 + 1;
                }
                if (cVar11 != ')') break;
                *(char *)pfVar16 = pcVar18[1];
                *(char *)((int)pfVar16 + 1) = pcVar18[2];
                *(char *)((int)pfVar16 + 2) = pcVar18[3];
                *(char *)((int)pfVar16 + 3) = pcVar18[4];
                cVar11 = pcVar18[5];
                pcVar18 = pcVar18 + 5;
                pfVar16 = pfVar16 + 1;
              }
              if (cVar11 != '*') break;
              pcStack_17d0 = *(char **)(pcVar18 + 1);
              *pfVar16 = (float)pcStack_17d0;
              cVar11 = pcVar18[5];
              __s1 = pcStack_17d0;
              pcVar18 = pcVar18 + 5;
              pfVar16 = pfVar16 + 1;
            }
            if (cVar11 != '^') break;
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
          }
          if (cVar11 != '\x1d') break;
          cVar11 = pcVar18[1];
          pcVar18 = pcVar18 + 1;
        }
        if (cVar11 != 'H') break;
        cVar11 = pcVar18[1];
        pcVar18 = pcVar18 + 1;
      }
      if (cVar11 != '\x06') break;
      pcVar18 = pcVar18 + 1;
      if (param_1[0x88] == 0.0) {
        if (param_1[0x8d] == 0.0) {
          __s1 = (char *)0x0;
        }
        else if ((int)param_1[0xb3] < 1) {
          __s1 = (char *)0x0;
        }
        else {
          pfStack_17e4 = param_1 + 8;
          __s1 = (char *)0x1;
          pfVar5 = (float *)((int)pfStack_17e4 + (int)param_1[0xb3]);
          for (; pfStack_17e4 != pfVar5; pfStack_17e4 = (float *)((int)pfStack_17e4 + 1)) {
            if (((uint)*pfStack_17e4 & 0x80000000) != 0) {
              __s1 = (char *)0x0;
              break;
            }
          }
        }
        param_1[0x88] = 1.4013e-45;
        param_1[0x89] = (float)__s1;
        *pfVar16 = (float)__s1;
        cVar11 = *pcVar18;
        pfVar16 = pfVar16 + 1;
      }
      else {
        *pfVar16 = param_1[0x89];
        cVar11 = *pcVar18;
        pfVar16 = pfVar16 + 1;
      }
    }
    if (cVar11 != '2') {
      if (cVar11 == 'K') {
        if (param_1[0x8c] == 0.0) {
          *pfVar16 = -NAN;
        }
        else {
          *pfVar16 = param_1[0x9d];
        }
        cVar11 = pcVar18[1];
        pcVar18 = pcVar18 + 1;
        pfVar16 = pfVar16 + 1;
      }
      else if (cVar11 == '(') {
        if (param_1[0x8c] == 0.0) {
          *pfVar16 = -NAN;
        }
        else {
          *pfVar16 = param_1[0x97];
        }
        cVar11 = pcVar18[1];
        pcVar18 = pcVar18 + 1;
        pfVar16 = pfVar16 + 1;
      }
      else {
        if (cVar11 == 'W') {
          pcVar18 = pcVar18 + 1;
          if (param_1[0x8d] == 0.0) {
            *pfVar16 = -NAN;
            cVar11 = *pcVar18;
            pfVar16 = pfVar16 + 1;
            goto joined_r0x00435ac4;
          }
          fVar17 = param_1[0xb3];
          if (0x47 < (int)fVar17) {
            iVar7 = getshort__FPc(param_1 + 8);
            if (iVar7 == 0x160) {
              pcVar9 = (char *)getshort__FPc(param_1 + 0xd);
              if (((pcVar9 != __s1) == 0x108) && (__s1 != (char *)0x10b)) {
                *pfVar16 = -NAN;
                cVar11 = *pcVar18;
                pfVar16 = pfVar16 + 1;
              }
              else if ((*(byte *)((int)param_1 + 0x32) & 0x80) == 0) {
                *pfVar16 = -NAN;
                cVar11 = *pcVar18;
                pfVar16 = pfVar16 + 1;
              }
              else if (((uint)param_1[0x96] & 0x49) == 0) {
                *pfVar16 = -NAN;
                cVar11 = *pcVar18;
                pfVar16 = pfVar16 + 1;
              }
              else {
                fVar17 = (float)getlong__FPc(param_1 + 0x19);
                *pfVar16 = fVar17;
                cVar11 = *pcVar18;
                pfVar16 = pfVar16 + 1;
              }
              goto joined_r0x00435ac4;
            }
            fVar17 = param_1[0xb3];
          }
          if ((int)fVar17 < 0xd) {
            *pfVar16 = -NAN;
            cVar11 = *pcVar18;
            pfVar16 = pfVar16 + 1;
          }
          else if ((*(char *)(param_1 + 8) == '#') && (*(char *)((int)param_1 + 0x21) == '!')) {
            iVar7 = 3;
            if (3 < (int)fVar17) {
              iVar8 = (int)param_1 + 3;
              do {
                if (*(char *)(iVar8 + 0x20) == '\n') break;
                iVar7 = iVar7 + 1;
                iVar8 = iVar8 + 1;
              } while (iVar7 < (int)fVar17);
            }
            if (iVar7 < (int)fVar17) {
              if ((int)fVar17 - iVar7 < 7) {
                *pfVar16 = -NAN;
                cVar11 = *pcVar18;
                pfVar16 = pfVar16 + 1;
              }
              else {
                iVar8 = strncmp((char *)((int)param_1 + iVar7 + 0x21),s__Tag_10009d38,5);
                if (iVar8 == 0) {
                  __s1 = (char *)strtol((char *)((int)param_1 + iVar7 + 0x26),(char **)&pfStack_17e4
                                        ,0);
                  if ((pfStack_17e4 == (float *)0x0) || (*(byte *)pfStack_17e4 != 10)) {
                    *pfVar16 = -NAN;
                    cVar11 = *pcVar18;
                    pfVar16 = pfVar16 + 1;
                  }
                  else if (((uint)param_1[0x96] & 0x49) == 0) {
                    *pfVar16 = -NAN;
                    cVar11 = *pcVar18;
                    pfVar16 = pfVar16 + 1;
                  }
                  else {
                    *pfVar16 = (float)__s1;
                    cVar11 = *pcVar18;
                    pfVar16 = pfVar16 + 1;
                  }
                }
                else {
                  *pfVar16 = -NAN;
                  cVar11 = *pcVar18;
                  pfVar16 = pfVar16 + 1;
                }
              }
            }
            else {
              *pfVar16 = -NAN;
              cVar11 = *pcVar18;
              pfVar16 = pfVar16 + 1;
            }
          }
          else {
            *pfVar16 = -NAN;
            cVar11 = *pcVar18;
            pfVar16 = pfVar16 + 1;
          }
          goto joined_r0x00435ac4;
        }
        if (cVar11 == '\x0e') {
          __s1 = (char *)pfVar16[-1];
          pcVar18 = pcVar18 + 1;
          if ((int)__s1 < 0) {
            fVar17 = -NAN;
          }
          else if (param_1[0x8f] == 0.0) {
            fVar17 = -NAN;
          }
          else if (param_1[0x8d] == 0.0) {
            iVar7 = parse_typed_value(param_1[0x8e],__s1,&bStack_17d1,1);
            fVar17 = (float)(uint)bStack_17d1;
            if (iVar7 != 0) {
              fVar17 = -NAN;
            }
          }
          else if ((char *)param_1[0xb3] < __s1 + 1) {
            if ((char *)param_1[0xb3] == (char *)0x200) {
              iVar7 = parse_typed_value(param_1[0x8e],__s1,&bStack_17d1,1);
              fVar17 = (float)(uint)bStack_17d1;
              if (iVar7 != 0) {
                fVar17 = -NAN;
              }
            }
            else {
              fVar17 = -NAN;
            }
          }
          else {
            fVar17 = (float)(uint)(byte)((char *)((int)param_1 + (int)__s1))[0x20];
          }
          pfVar16[-1] = fVar17;
          cVar11 = *pcVar18;
        }
        else if (cVar11 == 'J') {
          __s1 = (char *)pfVar16[-1];
          pcVar18 = pcVar18 + 1;
          if ((int)__s1 < 0) {
            fVar17 = -NAN;
          }
          else if (param_1[0x8f] == 0.0) {
            fVar17 = -NAN;
          }
          else if (param_1[0x8d] == 0.0) {
            iVar7 = parse_typed_value(param_1[0x8e],__s1,&sStack_17d4,2);
            fVar17 = (float)(int)sStack_17d4;
            if (iVar7 != 0) {
              fVar17 = -NAN;
            }
          }
          else if ((char *)param_1[0xb3] < __s1 + 2) {
            if ((char *)param_1[0xb3] == (char *)0x200) {
              iVar7 = parse_typed_value(param_1[0x8e],__s1,&sStack_17d4,2);
              fVar17 = (float)(int)sStack_17d4;
              if (iVar7 != 0) {
                fVar17 = -NAN;
              }
            }
            else {
              fVar17 = -NAN;
            }
          }
          else {
            fVar17 = (float)getshort__FPc((char *)((int)param_1 + (int)__s1) + 0x20);
            sStack_17d4 = SUB42(fVar17,0);
          }
          pfVar16[-1] = fVar17;
          cVar11 = *pcVar18;
        }
        else if (cVar11 == '-') {
          __s1 = (char *)pfVar16[-1];
          pcVar18 = pcVar18 + 1;
          if ((int)__s1 < 0) {
            fVar17 = -NAN;
          }
          else if (param_1[0x8f] == 0.0) {
            fVar17 = -NAN;
          }
          else if (param_1[0x8d] == 0.0) {
            iVar7 = parse_typed_value(param_1[0x8e],__s1,&fStack_17d8,4);
            fVar17 = fStack_17d8;
            if (iVar7 != 0) {
              fVar17 = -NAN;
            }
          }
          else if ((char *)param_1[0xb3] < __s1 + 4) {
            if ((char *)param_1[0xb3] == (char *)0x200) {
              iVar7 = parse_typed_value(param_1[0x8e],__s1,&fStack_17d8,4);
              fVar17 = fStack_17d8;
              if (iVar7 != 0) {
                fVar17 = -NAN;
              }
            }
            else {
              fVar17 = -NAN;
            }
          }
          else {
            fStack_17d8 = (float)getlong__FPc((char *)((int)param_1 + (int)__s1) + 0x20);
            fVar17 = fStack_17d8;
          }
          pfVar16[-1] = fVar17;
          cVar11 = *pcVar18;
        }
        else if (cVar11 == 'Z') {
          __s1 = (char *)pfVar16[-1];
          pcVar18 = pcVar18 + 1;
          if (param_1[0x8f] == 0.0) {
            fVar17 = -NAN;
          }
          else if (param_1[0x8d] == 0.0) {
            iVar7 = parse_typed_value(param_1[0x8e],__s1,&bStack_17d9,1);
            fVar17 = (float)(uint)bStack_17d9;
            if (iVar7 != 0) {
              fVar17 = -NAN;
            }
          }
          else if ((char *)param_1[0xb3] < __s1 + 1) {
            if ((char *)param_1[0xb3] == (char *)0x200) {
              iVar7 = parse_typed_value(param_1[0x8e],__s1,&bStack_17d9,1);
              fVar17 = (float)(uint)bStack_17d9;
              if (iVar7 != 0) {
                fVar17 = -NAN;
              }
            }
            else {
              fVar17 = -NAN;
            }
          }
          else {
            fVar17 = (float)(uint)(byte)((char *)((int)param_1 + (int)__s1))[0x20];
          }
          pfVar16[-1] = fVar17;
          cVar11 = *pcVar18;
        }
        else if (cVar11 == '\\') {
          __s1 = (char *)pfVar16[-1];
          pcVar18 = pcVar18 + 1;
          if ((int)__s1 < 0) {
            fVar17 = -NAN;
          }
          else if (param_1[0x8f] == 0.0) {
            fVar17 = -NAN;
          }
          else if (param_1[0x8d] == 0.0) {
            iVar7 = parse_typed_value(param_1[0x8e],__s1,&uStack_17dc,2);
            if (iVar7 == 0) {
              fVar17 = (float)(uint)uStack_17dc;
            }
            else {
              fVar17 = -NAN;
            }
          }
          else if ((char *)param_1[0xb3] < __s1 + 2) {
            if ((char *)param_1[0xb3] == (char *)0x200) {
              iVar7 = parse_typed_value(param_1[0x8e],__s1,&uStack_17dc,2);
              if (iVar7 == 0) {
                fVar17 = (float)(uint)uStack_17dc;
              }
              else {
                fVar17 = -NAN;
              }
            }
            else {
              fVar17 = -NAN;
            }
          }
          else {
            uStack_17dc = getshort__FPc((char *)((int)param_1 + (int)__s1) + 0x20);
            fVar17 = (float)(uint)uStack_17dc;
          }
          pfVar16[-1] = fVar17;
          cVar11 = *pcVar18;
        }
        else if (cVar11 == '[') {
          __s1 = (char *)pfVar16[-1];
          pcVar18 = pcVar18 + 1;
          if ((int)__s1 < 0) {
            fVar17 = -NAN;
          }
          else if (param_1[0x8f] == 0.0) {
            fVar17 = -NAN;
          }
          else if (param_1[0x8d] == 0.0) {
            iVar7 = parse_typed_value(param_1[0x8e],__s1,&fStack_17e0,4);
            fVar17 = fStack_17e0;
            if (iVar7 != 0) {
              fVar17 = -NAN;
            }
          }
          else if ((char *)param_1[0xb3] < __s1 + 4) {
            if ((char *)param_1[0xb3] == (char *)0x200) {
              iVar7 = parse_typed_value(param_1[0x8e],__s1,&fStack_17e0,4);
              fVar17 = fStack_17e0;
              if (iVar7 != 0) {
                fVar17 = -NAN;
              }
            }
            else {
              fVar17 = -NAN;
            }
          }
          else {
            fStack_17e0 = (float)getlong__FPc((char *)((int)param_1 + (int)__s1) + 0x20);
            fVar17 = fStack_17e0;
          }
          pfVar16[-1] = fVar17;
          cVar11 = *pcVar18;
        }
        else if (cVar11 == 'G') {
          piVar1 = (int *)(pcVar18 + 1);
          pcVar18 = pcVar18 + 5;
          pcStack_17d0 = (char *)*piVar1;
          sVar6 = strlen(pcStack_17d0 + param_4);
          __s1 = (char *)__nw__FUi();
          bcopy(pcStack_17d0 + param_4,__s1,sVar6 + 1);
          *pfVar16 = (float)__s1;
          cVar11 = *pcVar18;
          pfVar16 = pfVar16 + 1;
        }
        else {
          if (cVar11 == '\x16') {
            halt_baddata();
          }
          if (cVar11 == '\x1e') {
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
          }
          else if (cVar11 == 'U') {
            pcVar9 = (char *)pfVar16[-1];
            __s1 = (char *)pfVar16[-2];
            iVar7 = strcmp(__s1,pcVar9);
            pfVar16[-2] = (float)(uint)(iVar7 == 0);
            __dl__FPv(__s1);
            __dl__FPv(pcVar9);
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
            pfVar16 = pfVar16 + -1;
          }
          else if (cVar11 == '\x12') {
            __s1 = (char *)pfVar16[-1];
            pfVar5 = pfVar16 + -1;
            sVar6 = strlen((char *)param_1[0x8a]);
            __n = strlen(__s1);
            if ((int)(__n + sVar6 + 1) < 0xff) {
              bcopy((void *)param_1[0x8a],acStack_18f4,sVar6);
              acStack_18f4[sVar6] = '/';
              bcopy(__s1,acStack_18f4 + sVar6 + 1,__n);
              (acStack_18f4 + sVar6)[__n + 1] = '\0';
              iVar7 = stat(acStack_18f4,&sStack_197c);
              __dl__FPv(__s1);
              if (iVar7 == 0) {
                *pfVar5 = 1.4013e-45;
              }
              else {
                *pfVar5 = 0.0;
              }
            }
            else {
              __dl__FPv(__s1);
              *pfVar5 = 0.0;
            }
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
          }
          else if (cVar11 == 'V') {
            fVar17 = pfVar16[-1];
            __s1 = (char *)pfVar16[-2];
            pfVar5 = pfVar16 + -2;
            if (((param_1[0x8f] == 0.0) || ((int)__s1 < 0)) || ((int)fVar17 < 0)) {
              pfStack_17e4 = (float *)__nw__FUi(1);
              *(byte *)pfStack_17e4 = 0;
              *pfVar5 = (float)pfStack_17e4;
            }
            else if (param_1[0x8d] == 0.0) {
              lseek((int)param_1[0x8e],(__off_t)__s1,0);
              pfStack_17e4 = (float *)__nw__FUi((int)fVar17 + 1);
              read((int)param_1[0x8e],pfStack_17e4,(size_t)fVar17);
              *(byte *)((int)pfStack_17e4 + (int)fVar17) = 0;
              *pfVar5 = (float)pfStack_17e4;
            }
            else if ((int)param_1[0xb3] < (int)(__s1 + (int)fVar17)) {
              if (param_1[0xb3] == 7.17465e-43) {
                lseek((int)param_1[0x8e],(__off_t)__s1,0);
                pfStack_17e4 = (float *)__nw__FUi((int)fVar17 + 1);
                read((int)param_1[0x8e],pfStack_17e4,(size_t)fVar17);
                *(byte *)((int)pfStack_17e4 + (int)fVar17) = 0;
                *pfVar5 = (float)pfStack_17e4;
              }
              else {
                pfStack_17e4 = (float *)__nw__FUi(1);
                *(byte *)pfStack_17e4 = 0;
                *pfVar5 = (float)pfStack_17e4;
              }
            }
            else {
              fVar12 = 0.0;
              pfStack_17e4 = (float *)__nw__FUi((int)fVar17 + 1);
              if (0 < (int)fVar17) {
                if ((float)((uint)fVar17 & 3) != 0.0) {
                  pcVar9 = (char *)((int)param_1 + (int)__s1);
                  do {
                    pbVar2 = (byte *)(pcVar9 + 0x20);
                    pbVar10 = (byte *)((int)pfStack_17e4 + (int)fVar12);
                    fVar12 = (float)((int)fVar12 + 1);
                    pcVar9 = pcVar9 + 1;
                    *pbVar10 = *pbVar2;
                  } while ((float)((uint)fVar17 & 3) != fVar12);
                  if (fVar12 == fVar17) goto LAB_00437ddc;
                }
                pcVar9 = (char *)((int)param_1 + (int)__s1) + (int)fVar12;
                fVar13 = fVar12;
                do {
                  *(char *)((int)pfStack_17e4 + (int)fVar13) = pcVar9[0x20];
                  *(char *)((int)pfStack_17e4 + (int)fVar13 + 1U) = pcVar9[0x21];
                  *(char *)((int)pfStack_17e4 + (int)fVar13 + 2U) = pcVar9[0x22];
                  pbVar2 = (byte *)(pcVar9 + 0x23);
                  fVar12 = (float)((int)fVar13 + 4);
                  pcVar9 = pcVar9 + 4;
                  *(byte *)((int)pfStack_17e4 + (int)fVar13 + 3U) = *pbVar2;
                  fVar13 = fVar12;
                } while (fVar12 != fVar17);
              }
LAB_00437ddc:
              *(byte *)((int)pfStack_17e4 + (int)fVar12) = 0;
              *pfVar5 = (float)pfStack_17e4;
            }
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
            pfVar16 = pfVar16 + -1;
          }
          else if (cVar11 == '!') {
            fVar17 = pfVar16[-1];
            __s1 = (char *)pattern_match(param_1[0x8b],fVar17);
            pfVar16[-1] = (float)__s1;
            __dl__FPv(fVar17);
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
          }
          else if (cVar11 == 'Q') {
            *pfVar16 = *param_1;
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
            pfVar16 = pfVar16 + 1;
          }
          else if (cVar11 == 'O') {
            *pfVar16 = param_1[1];
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
            pfVar16 = pfVar16 + 1;
          }
          else if (cVar11 == 'P') {
            *pfVar16 = param_1[2];
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
            pfVar16 = pfVar16 + 1;
          }
          else if (cVar11 == 'R') {
            *pfVar16 = param_1[3];
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
            pfVar16 = pfVar16 + 1;
          }
          else if (cVar11 == 'N') {
            *pfVar16 = param_1[4];
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
            pfVar16 = pfVar16 + 1;
          }
          else if (cVar11 == 'I') {
            *pfVar16 = param_1[5];
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
            pfVar16 = pfVar16 + 1;
          }
          else if (cVar11 == '$') {
            *pfVar16 = param_1[6];
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
            pfVar16 = pfVar16 + 1;
          }
          else if (cVar11 == '<') {
            *pfVar16 = param_1[7];
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
            pfVar16 = pfVar16 + 1;
          }
          else if (cVar11 == 'D') {
            printf(&current_icon_rules);
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
            pfVar16 = pfVar16 + -1;
          }
          else if (cVar11 == 'E') {
            __s1 = (char *)pfVar16[-1];
            printf(&icon_rule_buffer_1,__s1);
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
            pfVar16 = pfVar16 + -1;
          }
          else if (cVar11 == 'F') {
            __s1 = (char *)pfVar16[-1];
            printf(&icon_rule_buffer_2,__s1);
            __dl__FPv(__s1);
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
            pfVar16 = pfVar16 + -1;
          }
        }
      }
      goto joined_r0x00435ac4;
    }
    if (param_1[0x8c] == 0.0) {
      *pfVar16 = -NAN;
    }
    else {
      *pfVar16 = param_1[0x96];
    }
    cVar11 = pcVar18[1];
    pcVar18 = pcVar18 + 1;
    pfVar16 = pfVar16 + 1;
  } while( true );
}
