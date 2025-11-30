# draw_scene Analysis

**Address:** 0x0040cac4
**Source:** `src/drawing.c:draw_scene()`
**Status:** VERIFIED against binary

## Transform Sequence (from assembly)

The exact transform sequence verified from `draw_scene.annotated.asm`:

```
1. gettimeofday(&start)              # Line 12-18
2. redraw_flag = 0                   # Line 19 (offset 26248 from GP-0x7f94)
3. Clamp cam_x to [minx, maxx]       # Lines 22-54
4. Clamp cam_y to [miny-50, maxy]    # Lines 55-85
5. FUN_004294cc()                    # update_camera
6. FUN_0040bbe0()                    # update_visibility
7. if (curcontext+0x3c == 0)         # Lines 98-110
      FUN_0040ca58()                 # setup_zoom_context
8. czclear(bg_color, zbuffer)        # Lines 112-133 (conditional on grid_display_flag)
9. pushmatrix()                      # Line 135
10. scale(1.0/ctx_scale, ?, 1.0)     # Lines 140-154
11. rotate(rot_x, 'x')               # Lines 156-163 (ctx+0x0e)
12. rotate(rot_z, 'z')               # Lines 165-172 (ctx+0x0c)
13. powf + scale(zoom, ?, 1.0)       # Lines 175-208
14. translate(-cam_x, -cam_y, -cam_z) # Lines 215-224 ← FIXED!
15. draw_directories(0)              # Line 226-229 (GP-0x7938)
16. popmatrix()                      # Line 232
17. swapbuffers()                    # Line 238
18. FUN_00420b70()                   # finalize_frame
19. FUN_0040d804()                   # update_timing
20. gflush()                         # Line 256
21. gettimeofday(&end)               # Line 261-265
22. Store render time at ctx+0xc4c   # Lines 266-291
```

## Key Findings

### Finding 1: 3-Argument Translate (FIXED)
**Assembly lines 215-224:**
```asm
c4520008  lwc1 $f18,8(v0)      # cam_z = curcontext+8
c44c0000  lwc1 $f12,0(v0)      # cam_x = curcontext+0
c44e0004  lwc1 $f14,4(v0)      # cam_y = curcontext+4
8f9984a0  lw t9,-31584(gp)     # translate function
46009107  neg.s $f4,$f18       # -cam_z → a2
46006307  neg.s $f12,$f12      # -cam_x → $f12
0320f809  jalr t9              # call translate
46007387  neg.s $f14,$f14      # -cam_y → $f14 (delay slot)
```

**Fix applied:** `translate(-cam_x, -cam_y)` → `translate(-cam_x, -cam_y, -cam_z)`

### Finding 2: 3-Argument Scale Calls
The assembly shows scale() is called with 3 arguments in some places:
- Line 152: `mfc1 a2,$f14` puts 1.0f in a2 (3rd arg)

Current code uses 1-arg scale() which does uniform scaling - may need verification.

### Finding 3: Correct Rotation Order
Assembly confirms: rotate(rot_x, 'x') THEN rotate(rot_z, 'z')
- Line 156: `li a1,120` = 'x' (ASCII 120)
- Line 165: `li a1,122` = 'z' (ASCII 122)

This matches our current implementation.

## GP Offset Map

| Offset | Hex | Symbol | Notes |
|--------|-----|--------|-------|
| -32660 | 0x7f94 | redraw_flag_base | +26248 for actual flag |
| -31532 | 0x7b4c | gettimeofday | external |
| -30340 | 0x7684 | curcontext_ptr | |
| -30908 | 0x78bc | FUN_004294cc | update_camera |
| -31460 | 0x7ae4 | FUN_0040bbe0 | update_visibility |
| -31440 | 0x7ad0 | FUN_0040ca58 | setup_zoom_context |
| -30172 | 0x75dc | fsn_resources | |
| -31564 | 0x7b5c | czclear | |
| -31560 | 0x7b48 | pushmatrix | |
| -31596 | 0x7b6c | scale | |
| -31592 | 0x7b68 | rotate | |
| -31588 | 0x7b64 | powf | |
| -31584 | 0x7b60 | translate | 3-arg! |
| -31032 | 0x7938 | draw_directories | FUN_00425100 |
| -31528 | 0x7b28 | popmatrix | |
| -31572 | 0x7b54 | swapbuffers | |
| -31108 | 0x797c | FUN_00420b70 | finalize_frame |
| -31420 | 0x7abc | FUN_0040d804 | update_timing |
| -31952 | 0x7cd0 | gflush | |

## Context Structure Offsets Used

| Offset | Type | Field |
|--------|------|-------|
| +0x00 | float | cam_x |
| +0x04 | float | cam_y |
| +0x08 | float | cam_z |
| +0x0c | short | rot_z |
| +0x0e | short | rot_x |
| +0x18 | float | cos_z |
| +0x20 | float | sin_x |
| +0x34 | float | ctx_scale |
| +0x3c | int | zoom_mode |
| +0xc4c | int | render_time_usec |
