/**
 * FUN_0042087c
 *
 * Extracted from fsn.c lines 60854-60897
 * Ghidra address: 0x0042087c
 * Category: Other
 */

void FUN_0042087c(void)

{
  float *pfVar1;
  float fVar2;
  int unaff_gp;
  uint extraout_var;
  uint extraout_var_00;
  uint uVar3;
  
  /* TODO: GP:-0x7cfc */ (**(code **)(unaff_gp + -0x7cfc) /* -> EXTERNAL_0x0f124670 */)(*(undefined2 *)(**(int **)(unaff_gp + -0x767c) /* -> curcontextwindows */ + 0x32));
  /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
  pfVar1 = (float *)*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
  fVar2 = pfVar1[0xf];
  if (fVar2 == 0.0) {
    /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)
              (*pfVar1 - pfVar1[5] * pfVar1[8] * pfVar1[2],
               pfVar1[1] - pfVar1[6] * pfVar1[8] * pfVar1[2]);
    uVar3 = extraout_var_00;
  }
  else {
    /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)
              (*(undefined4 *)((int)fVar2 + 0x34),*(undefined4 *)((int)fVar2 + 0x38));
    uVar3 = extraout_var;
  }
  /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)
            ((float)((double)((ulonglong)uVar3 << 0x20) /
                    (double)*(float *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6bf0)),
             (float)((double)((ulonglong)uVar3 << 0x20) /
                    (double)*(float *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6bf4)));
  /* TODO: GP:-0x7e0c */ (**(code **)(unaff_gp + -0x7e0c) /* -> EXTERNAL_0x0f126158 */)(3);
  /* TODO: GP:-0x7b7c */ (**(code **)(unaff_gp + -0x7b7c) /* -> EXTERNAL_0x0f1247c0 */)();
  /* TODO: GP:-0x7c68 */ (**(code **)(unaff_gp + -0x7c68) /* -> EXTERNAL_0x0f123fe0 */)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6ecc);
  /* TODO: GP:-0x7c68 */ (**(code **)(unaff_gp + -0x7c68) /* -> EXTERNAL_0x0f123fe0 */)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6ed4);
  /* TODO: GP:-0x7b94 */ (**(code **)(unaff_gp + -0x7b94) /* -> EXTERNAL_0x0f124574 */)();
  /* TODO: GP:-0x7b7c */ (**(code **)(unaff_gp + -0x7b7c) /* -> EXTERNAL_0x0f1247c0 */)();
  /* TODO: GP:-0x7c68 */ (**(code **)(unaff_gp + -0x7c68) /* -> EXTERNAL_0x0f123fe0 */)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6edc);
  /* TODO: GP:-0x7c68 */ (**(code **)(unaff_gp + -0x7c68) /* -> EXTERNAL_0x0f123fe0 */)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x6ee4);
  /* TODO: GP:-0x7b94 */ (**(code **)(unaff_gp + -0x7b94) /* -> EXTERNAL_0x0f124574 */)();
  /* TODO: GP:-0x7e0c */ (**(code **)(unaff_gp + -0x7e0c) /* -> EXTERNAL_0x0f126158 */)(1);
  /* TODO: GP:-0x7b28 */ (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042087c):
     * Function: FUN_0042087c
     *
     * Looking at the GP-relative offsets and the call sequence:
     * **1. What it does:**
     * Prints an error message (gp-0x8068 + 0x6ee4 = string pointer), calls XtUnmapWidget (gp-0x8398), sets cursor to normal with curs(1) (gp-0x81f4), then calls exit() (gp-0x84d8).
     * **2. C pseudocode:**
     * ```c
     * printf("%s", error_string_at_0x6ee4);  /* or puts() - gp-0x8398 resolves to printf/puts */
     * XtUnmapWidget(some_widget);             /* gp-0x846c */
     * curs(1);                                /* restore cursor - gp-0x81f4 */
     * exit(/* status from earlier */);        /* gp-0x84d8 - does not return */
     * ```
     * This is error cleanup/exit code - prints message, unmaps UI, restores cursor, exits. The halt_baddata marker likely exists because Ghidra couldn't determine exit() is noreturn, so it got confused about control flow after this point.
     */
halt_baddata();
}
