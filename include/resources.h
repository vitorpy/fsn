/**
 * resources.h - Header for resources module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_RESOURCES_H
#define FSN_RESOURCES_H

#include "fsn_types.h"

void destroy_gl_resources(int param_1);
void initResources(undefined4 param_1);
void init_toplevel_resources(undefined4 param_1);
void SG_defaultDepthAndTypeResources
               (int param_1,int param_2,uint *param_3,byte *param_4,uint *param_5,uint *param_6,
               int *param_7,int *param_8,int *param_9);
void LoadIntlResources(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void init_icon_resources(undefined4 param_1,undefined4 param_2,undefined4 param_3);

#endif /* FSN_RESOURCES_H */
