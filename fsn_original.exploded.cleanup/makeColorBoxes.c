/**
 * makeColorBoxes
 *
 * Extracted from fsn.c lines 65277-65295
 * Category: Other
 */

void makeColorBoxes(void)

{
  if (DAT_10007904 == '\0') {
    FUN_00428288(toplevel);
    DAT_10007904 = '\x01';
  }
  FUN_004286f8(DAT_100175f4,boxDir,7);
  FUN_004286f8(DAT_1001761c,boxRed,0);
  FUN_004286f8(DAT_10017620,boxOrange,1);
  FUN_004286f8(DAT_10017624,boxYellow,2);
  FUN_004286f8(DAT_10017628,boxGreen,3);
  FUN_004286f8(DAT_1001762c,boxCyan,4);
  FUN_004286f8(DAT_10017630,boxBlue,5);
  FUN_004286f8(DAT_10017634,boxMagenta,6);
  FUN_00429040();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
