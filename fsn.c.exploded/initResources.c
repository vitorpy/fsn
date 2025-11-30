/**
 * initResources
 *
 * Extracted from fsn.c lines 52496-52524
 * Category: Init
 */

void initResources(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  XtAppAddConverter(app_context,0xf661c25,"CpColor",cp_color_converter,0,0);
  XtGetApplicationResources(param_1,&landscape_name,&PTR_s_landscape_10008918,1,0,0);
  if (landscape_name == (char *)0x0) {
    iVar1 = getgdesc(9);
    if (iVar1 < 4) {
      landscape_name = "indigo";
    }
    else {
      landscape_name = "grass";
    }
  }
  if (landscape_name == (char *)0x0) {
    XtGetApplicationResources(param_1,&fsn_resources,&PTR_s_noscan_10007c30,0x76,0,0);
  }
  else {
    uVar2 = XtCreateWidget(landscape_name,applicationShellWidgetClass,param_1,0,0);
    XtGetApplicationResources(uVar2,&fsn_resources,&PTR_s_noscan_10007c30,0x76,0,0);
    XtDestroyWidget(uVar2);
  }
  init_icon_resources(param_1,&icon_resource_1,&icon_resource_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
