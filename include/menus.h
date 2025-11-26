/**
 * menus.h - Header for menus module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_MENUS_H
#define FSN_MENUS_H

#include "fsn_types.h"

void init_color_menus(void);
void CreateSelectionMenus(undefined4 param_1,undefined4 param_2);
void init_context_menus(undefined4 param_1,undefined4 param_2);
void postMenu(undefined4 param_1,undefined4 param_2,int param_3);
void overlayMenuUnmappedCB(void);
void overlayMenuMappedCB(void);
void createHelpMenu(undefined4 param_1);
void finalize_menu_setup(undefined4 param_1);
void setup_menu_resources(undefined4 param_1,undefined4 param_2,int param_3,int *param_4);

#endif /* FSN_MENUS_H */
