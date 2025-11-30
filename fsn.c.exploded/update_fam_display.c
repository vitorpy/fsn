/**
 * update_fam_display
 *
 * Extracted from fsn.c lines 46721-46766
 * Category: Graphics
 */

void update_fam_display(void)

{
  float fVar1;
  int unaff_gp;
  byte in_fcsr;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  
  if (**(char **)(unaff_gp + -0x76c4) != '\0') {
    local_48 = *(int *)(unaff_gp + -0x7f5c) + 0xea;
    fVar1 = (**(float **)(unaff_gp + -0x75d0) - **(float **)(unaff_gp + -0x75d4)) *
            *(float *)(*(int *)(unaff_gp + -0x7f94) + 0x6bf0);
    local_50 = *(int *)(unaff_gp + -0x7f5c) + 0x368;
    if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
      fVar1 = ROUND(fVar1);
    }
    else {
      fVar1 = FLOOR(fVar1);
    }
    local_4c = (int)fVar1;
    fVar1 = (**(float **)(unaff_gp + -0x75c8) - **(float **)(unaff_gp + -0x75cc)) *
            *(float *)(*(int *)(unaff_gp + -0x7f94) + 0x6bf4);
    if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
      fVar1 = ROUND(fVar1);
    }
    else {
      fVar1 = FLOOR(fVar1);
    }
    local_44 = (int)fVar1;
    (**(code **)(unaff_gp + -0x7cc0))
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c0c),&local_50,2);
    (**(code **)(unaff_gp + -0x79a0))();
    (**(code **)(unaff_gp + -0x7b78))
              (**(undefined4 **)(unaff_gp + -0x75d4),**(undefined4 **)(unaff_gp + -0x75d0));
    (**(code **)(unaff_gp + -0x798c))();
    (**(code **)(unaff_gp + -0x799c))();
    (**(code **)(unaff_gp + -0x7b78))
              (**(undefined4 **)(unaff_gp + -0x75d4),**(undefined4 **)(unaff_gp + -0x75d0));
    (**(code **)(unaff_gp + -0x7984))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
