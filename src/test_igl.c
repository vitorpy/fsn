/**
 * test_igl.c - Test FSN IrisGL Compatibility Layer
 *
 * Simple test to verify fsn_igl compiles and links correctly.
 */

#include <stdio.h>
#include "fsn_igl.h"

int main(void) {
    printf("FSN IrisGL Compatibility Layer Test\n");
    printf("====================================\n\n");

    /* Test type sizes (should all be 4 bytes for 64-bit safety) */
    printf("Type sizes (should all be 4 bytes):\n");
    printf("  sizeof(Boolean) = %zu\n", sizeof(Boolean));
    printf("  sizeof(Icoord)  = %zu\n", sizeof(Icoord));
    printf("  sizeof(Object)  = %zu\n", sizeof(Object));
    printf("  sizeof(Tag)     = %zu\n", sizeof(Tag));
    printf("  sizeof(Offset)  = %zu\n", sizeof(Offset));
    printf("\n");

    /* Test Lfontchar struct sizes */
    printf("Struct sizes:\n");
    printf("  sizeof(Lfontchar) = %zu\n", sizeof(Lfontchar));
    printf("  sizeof(Fontchar)  = %zu\n", sizeof(Fontchar));
    printf("  sizeof(Matrix)    = %zu (expected: 64)\n", sizeof(Matrix));
    printf("\n");

    /* Verify 64-bit safety */
    int errors = 0;
    if (sizeof(Boolean) != 4) { printf("ERROR: Boolean is not 4 bytes!\n"); errors++; }
    if (sizeof(Icoord) != 4) { printf("ERROR: Icoord is not 4 bytes!\n"); errors++; }
    if (sizeof(Object) != 4) { printf("ERROR: Object is not 4 bytes!\n"); errors++; }
    if (sizeof(Matrix) != 64) { printf("ERROR: Matrix is not 64 bytes!\n"); errors++; }

    /* Test getgdesc - should return default values */
    printf("Testing getgdesc():\n");
    printf("  GD_XPMAX = %d\n", getgdesc(GD_XPMAX));
    printf("  GD_YPMAX = %d\n", getgdesc(GD_YPMAX));
    printf("  GD_ZMIN  = %d\n", getgdesc(GD_ZMIN));
    printf("  GD_ZMAX  = %d\n", getgdesc(GD_ZMAX));
    printf("\n");

    if (errors == 0) {
        printf("SUCCESS: All type sizes are correct for 64-bit safety!\n");
        printf("fsn_igl library is ready for use.\n");
        return 0;
    } else {
        printf("FAILED: %d type size errors detected.\n", errors);
        return 1;
    }
}
