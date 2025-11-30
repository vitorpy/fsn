/**
 * overviewPickPointer
 *
 * Extracted from fsn.c lines 46588-46620
 * Category: Input
 */

void overviewPickPointer(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short asStack_3e8 [500];
  
  picksize(2,2);
  pushmatrix();
  initnames();
  pick(asStack_3e8,500);
  ortho2(minx,maxx);
  setup_item_render(topdir,1);
  iVar1 = endpick(asStack_3e8);
  popmatrix();
  iVar2 = 0;
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar4 = (int)asStack_3e8[iVar2];
      if (iVar4 == 1) {
        get_item_by_index((int)asStack_3e8[iVar2 + 1]);
        halt_baddata();
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 1 + iVar4;
    } while (iVar3 != iVar1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
