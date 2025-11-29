# Decompilation Verification Procedure

When Ghidra produces suspicious or corrupted decompilation, follow this procedure to verify against the actual binary and fix the code.

## When to Use This Procedure

Look for these corruption patterns in decompiled code:
- `& 0xffffffff00000000` - Float misinterpretation
- `CONCAT44(a, b)` - Register pair concatenation
- `extraout_var << 0x20` - Division result extraction
- `(ulonglong)value >> 0x20` - High word extraction
- `unaff_gp` - Unresolved GP-relative access

```bash
# Find corruption in a file
grep -n "0xffffffff00000000\|CONCAT44\|extraout_var\|unaff_" src/file.c
```

---

## Step 1: Identify Function Address

### Option A: From FUN_ name
If function is named `FUN_00xxxxxx`, the address is embedded:
- `FUN_00422f58` → address `0x00422f58`

### Option B: From symbol strings
```bash
strings -t x fsn.original | grep -i "function_name"
```

### Option C: From exploded cleanup files
```bash
ls fsn_original.exploded.cleanup/*.c | grep -i "function_name"
```

### Option D: From dynamic symbols
```bash
mips-linux-gnu-objdump -T fsn.original | grep function_name
```

---

## Step 2: Extract Disassembly

### Preferred: Use disassemble_function.py (auto-detects function end)

```bash
# Auto-extract with function boundary detection
python3 analysis/disassemble_function.py FUN_00422f58

# Specify output directory
python3 analysis/disassemble_function.py draw_warp_directory --output analysis/

# Force fixed size (disable auto-detection)
python3 analysis/disassemble_function.py FUN_00422f58 --size 0x800 --no-auto
```

The script automatically:
1. Scans up to 0x2000 bytes
2. Detects function end via `jr ra` (return) or next function's prologue
3. Annotates GP offsets with symbol names
4. Outputs header with address, size, and detection method

### Manual: Using objdump directly

```bash
# Extract disassembly for function (estimate end address ~0x500 bytes after start)
mips-linux-gnu-objdump -d \
  --start-address=0x00422f58 \
  --stop-address=0x00423000 \
  fsn.original > analysis/FUNCNAME.asm
```

**Tip:** To find exact function boundaries, look for:
- `jr ra` (return instruction) - include delay slot (+8 bytes)
- Next function's prologue: `addiu sp,sp,-N` (negative stack allocation)

---

## Step 3: Resolve GP Offsets

### Quick lookup with resolve_got.py
```bash
# Single offset lookup
echo "unaff_gp + -0x7b2c" | python3 analysis/resolve_got.py

# Extract all GP offsets from assembly and resolve
grep "lw.*gp\|sw.*gp" analysis/FUNCNAME.asm | \
  sed 's/.*,\(-*[0-9]*\)(gp).*/unaff_gp + \1/' | \
  sort -u | \
  python3 analysis/resolve_got.py
```

### Batch processing with resolve_indirect_calls.py
```bash
python3 analysis/resolve_indirect_calls.py \
  --input fsn_original.exploded \
  --output fsn_original.exploded.cleanup
```

This generates:
- `fsn_original.exploded.cleanup/*.c` - Annotated function files
- `fsn_original.exploded.cleanup/GP_MAPPING.md` - Full offset→symbol table

---

## Step 4: Create Annotated Assembly

Add comments to the raw assembly with resolved symbols:

```asm
# Before:
422f9c:  8f998738  lw t9,-30920(gp)
422fd0:  8f8c897c  lw t4,-30340(gp)

# After (annotated):
422f9c:  8f998738  lw t9,-30920(gp)  # gettextid
422fd0:  8f8c897c  lw t4,-30340(gp)  # curcontext_ptr
```

Save as: `analysis/FUNCNAME.annotated.asm`

---

## Step 5: Document the Analysis

Create `analysis/FUNCNAME.ANALYSIS.md` with:

1. **Function Identity** - Address, name, source file location
2. **Function Flow** - Step-by-step description from assembly
3. **Ghidra Corruption Found** - Quote the corrupted decompile
4. **Actual Assembly** - Show what the binary really does
5. **Fix Applied** - Before/after code comparison

See examples:
- `analysis/draw_scene.ANALYSIS.md`
- `analysis/FUN_00422f58.ANALYSIS.md`

---

## Step 6: Fix Source Code

Based on assembly analysis, fix the C source. Common fixes:

| Corruption | Actual Code |
|------------|-------------|
| `(float)(... & 0xffffffff00000000)` | Simple float value (check assembly) |
| `CONCAT44(uVar, 0x3f800000)` | `1.0f` (0x3f800000 is IEEE 754 for 1.0) |
| `extraout_var << 0x20 / divisor` | `1.0f / divisor` |
| `(double)var >> 0x20` | Just `var` (high word extraction artifact) |

---

## Tool Reference

| Tool | Purpose |
|------|---------|
| `analysis/resolve_got.py` | Quick GP offset → symbol lookup |
| `analysis/resolve_indirect_calls.py` | Batch annotate exploded files |
| `analysis/explode_fsn.py` | Split fsn.c into per-function files |
| `analysis/disassemble_function.py` | **NEW** Auto-extract and annotate disassembly |

### resolve_got.py Usage
```bash
# From stdin
echo "unaff_gp + -0x7b2c" | python3 analysis/resolve_got.py

# From file
python3 analysis/resolve_got.py offsets.txt
```

### disassemble_function.py Usage

**Features:**
- Auto-detects function boundaries (scans up to 0x2000 bytes)
- Finds end via `jr ra` (return) or next function's prologue (`addiu sp,sp,-N`)
- Resolves GP offsets to symbol names (IrisGL, internal functions, data)
- Annotates `jalr t9` calls with the function being called
- Decodes float constants (lui/mtc1 patterns → IEEE 754 values)
- Generates analysis summary with call list, IrisGL calls, and GP references

```bash
# Basic usage - auto-detects function end
python3 analysis/disassemble_function.py FUN_00422f58

# With custom output directory
python3 analysis/disassemble_function.py draw_warp_directory --output analysis/

# Force fixed size (disable auto-detection)
python3 analysis/disassemble_function.py FUN_00422f58 --size 0x800 --no-auto

# Lookup by address
python3 analysis/disassemble_function.py 0x00419418
```

**Output includes:**
1. Annotated disassembly with GP symbol names
2. `jalr t9` calls labeled with function names (e.g., `# call rect`)
3. Float constants decoded (e.g., `# -0.5f`)
4. Analysis summary at end:
   - All function calls with counts
   - IrisGL calls with addresses (for rect/rectf analysis)
   - Float constants loaded
   - GP symbol references

**Example output:**
```asm
# jalr with function name annotation
  419dc8:  0320f809   jalr   t9  # call rect

# Float constant loading
  4194fc:  3c01bf00   lui    at,0xbf00  # -0.5f
  419514:  44814000   mtc1   at,$f8     # $f8 = -0.5f
```

**Analysis summary example:**
```
IRISGL CALLS (with addresses):
----------------------------------------
  0x00419dc8: rect
  0x00419d3c: rectf
  0x00419e10: rectf
```

---

## Common Corruption Patterns

### Pattern 1: Float AND operation
```c
// CORRUPTED:
(double)((ulonglong)(double)value & 0xffffffff00000000)

// CORRECT: Simple float value
*(float *)(struct + offset)
```

### Pattern 2: CONCAT44 (register concatenation)
```c
// CORRUPTED:
(double)CONCAT44((int)((ulonglong)(double)var >> 0x20), 0x3f800000)

// CORRECT: Float constant (0x3f800000 = 1.0f IEEE 754)
1.0f
```

### Pattern 3: extraout_var (division result)
```c
// CORRUPTED:
(float)((double)((ulonglong)extraout_var << 0x20) / divisor)

// CORRECT: Simple division
1.0f / divisor
```

### Pattern 4: GP-relative access
```c
// CORRUPTED:
*(code **)(unaff_gp + -0x7b2c)

// CORRECT: Function pointer from GOT
pushmatrix  // resolved via resolve_got.py
```

---

## IEEE 754 Float Constants Quick Reference

| Hex | Float |
|-----|-------|
| 0x3f800000 | 1.0f |
| 0x40000000 | 2.0f |
| 0x3f000000 | 0.5f |
| 0xbf800000 | -1.0f |
| 0xbf000000 | -0.5f |
| 0x3e800000 | 0.25f |
| 0x3d4ccccd | 0.05f |
| 0x3cf5c28f | 0.03f |

---

## GP Offset Map (Key Offsets)

From `analysis/draw_scene.ANALYSIS.md`:

| Offset | Symbol |
|--------|--------|
| -30340 (0x7684) | curcontext_ptr |
| -30172 (0x75dc) | fsn_resources |
| -31560 (0x7b48) | pushmatrix |
| -31528 (0x7b28) | popmatrix |
| -31584 (0x7b60) | translate |
| -31596 (0x7b6c) | scale |
| -31592 (0x7b68) | rotate |
| -31564 (0x7b5c) | czclear |
| -31572 (0x7b54) | swapbuffers |
| -31644 (0x7b9c) | cpack |
| -31032 (0x7938) | draw_directories |

Full mapping: `fsn_original.exploded.cleanup/GP_MAPPING.md`
