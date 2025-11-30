/**
 * FUN_0041c720
 *
 * Extracted from fsn.c lines 58400-58441
 * Ghidra address: 0x0041c720
 * Category: Other
 */

void FUN_0041c720(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_gp;
  
  iVar1 = **(int **)(unaff_gp + -0x7684) /* -> curcontext */;
  if ((*(char *)(iVar1 + 0xc51) != '\0') && (*(char *)(iVar1 + 0xc52) != '\0')) {
    *(undefined1 *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6e24) = 0;
    if (*(int *)(iVar1 + 0x48) == 0) {
      if (*(int *)(iVar1 + 0x44) == 0) {
        (**(code **)(unaff_gp + -0x7dec) /* -> EXTERNAL_0x0e3799dc */)
                  (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) /* -> curcontextwindows */ + 0x1c),
                   *(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4cc4);
      }
      else {
        (**(code **)(unaff_gp + -0x7dec) /* -> EXTERNAL_0x0e3799dc */)
                  (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) /* -> curcontextwindows */ + 0x1c),iVar1 + 0x4c);
        uVar2 = (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x4c);
        (**(code **)(unaff_gp + -0x7dcc) /* -> EXTERNAL_0x0e37b904 */)
                  (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) /* -> curcontextwindows */ + 0x1c),uVar2);
        uVar2 = (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x4c);
        (**(code **)(unaff_gp + -0x7db8) /* -> EXTERNAL_0x0e37aa1c */)
                  (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) /* -> curcontextwindows */ + 0x1c),uVar2);
      }
    }
    else {
      (**(code **)(unaff_gp + -0x7dec) /* -> EXTERNAL_0x0e3799dc */)
                (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) /* -> curcontextwindows */ + 0x1c),iVar1 + 0x44c);
      uVar2 = (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x44c);
      (**(code **)(unaff_gp + -0x7dcc) /* -> EXTERNAL_0x0e37b904 */)
                (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) /* -> curcontextwindows */ + 0x1c),uVar2);
      uVar2 = (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x44c);
      (**(code **)(unaff_gp + -0x7db8) /* -> EXTERNAL_0x0e37aa1c */)
                (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) /* -> curcontextwindows */ + 0x1c),uVar2);
    }
    (*(code *)(*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + -0x3c1c))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
