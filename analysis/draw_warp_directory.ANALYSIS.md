# Analysis: draw_warp_directory rect/rectf Corruption

## Function Identity
- **Address**: 0x00419418
- **Name**: draw_warp_directory
- **Source**: src/warp.c
- **Binary**: fsn.original

## Ghidra Corruption Found

The Ghidra decompile showed bizarre CONCAT44 patterns for rect/rectf calls:

```c
// CORRUPTED Ghidra output:
dVar15 = (double)-(float)param_3[0xf] / dVar16;
uVar7 = CONCAT44(uVar5,(float)dVar15);   // Confused register tracking
uVar13 = CONCAT44(uVar10,(float)dVar15); // Mixed X/Y coordinates
rect(uVar7,uVar13);
```

This made it appear the rect coordinates were:
- x1 = uVar5 (tracked X position)
- y1 = -height/2.0
- x2 = uVar10 (tracked Y position incorrectly used as X!)
- y2 = -height/2.0

Result: Degenerate zero-area rectangles.

## Actual Assembly (0x419d94-0x419dcc)

```asm
# rect() call for directory outline
419d94:  lwc1  $f2,60(s4)          # $f2 = height = param_3[0xf]
419d98:  lw    t9,-32240(gp)       # t9 = rect function pointer
419d9c:  cvt.d.s $f6,$f2           # $f6 = (double)height
419da4:  div.d  $f8,$f6,$f20       # $f8 = height / 2.0
419da8:  neg.s  $f10,$f2           # $f10 = -height
419dac:  cvt.d.s $f4,$f10          # $f4 = (double)(-height)
419db4:  div.d  $f18,$f4,$f20      # $f18 = -height / 2.0
419db8:  cvt.s.d $f0,$f8           # $f0 = +height/2.0 (single)
419dbc:  mfc1   a2,$f0             # a2 = +height/2.0 (x2)
419dc0:  mfc1   a3,$f0             # a3 = +height/2.0 (y2)
419dc4:  cvt.s.d $f12,$f18         # $f12 = -height/2.0 (x1)
419dc8:  jalr   t9                 # call rect()
419dcc:  mov.s  $f14,$f12          # $f14 = -height/2.0 (y1) [delay slot]
```

## MIPS o32 Float Calling Convention

For `rect(Coord x1, Coord y1, Coord x2, Coord y2)`:
- $f12 = x1
- $f14 = y1
- a2 = x2 (via mfc1)
- a3 = y2 (via mfc1)

## Actual rect() Arguments

From assembly:
- x1 = $f12 = -height/2.0
- y1 = $f14 = -height/2.0
- x2 = a2 = +height/2.0
- y2 = a3 = +height/2.0

**Original code draws a SQUARE centered at origin:**
```c
rect(-height/2.0, -height/2.0, +height/2.0, +height/2.0)
```

## Fix Applied

### Before (corrupted):
```c
rect(0, neg_half_height, 0, neg_half_height);  // Degenerate point
```

### After (verified from binary):
```c
rect(neg_half_height, neg_half_height, half_height, half_height);  // Square box
```

## GP Offset Reference

| Offset | Symbol |
|--------|--------|
| -32240 | rect |
| -32288 | rectf |
| -31644 | cpack |
| -31584 | translate |
| -31560 | pushmatrix |
| -31528 | popmatrix |
| -30348 | boxDir |
| -30340 | curcontext |
| -30172 | fsn_resources |

## Key Insight

Ghidra's CONCAT44 artifacts for IrisGL rect/rectf calls were caused by MIPS float argument
passing using both FP registers ($f12, $f14) and integer registers (a2, a3). Ghidra
incorrectly interpreted this as 64-bit packed values, confusing the coordinate tracking
and producing degenerate rectangles.

The actual binary shows the original code draws proper **square boxes** using height/2.0
as both the X and Y half-dimensions.
