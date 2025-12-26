/**
 * GlobMatch__FPcT1
 *
 * Extracted from fsn.c lines 76603-76763
 * Category: Other
 */

void GlobMatch__FPcT1(byte *param_1,byte *param_2)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  byte bVar7;
  byte *pbVar6;
  byte *pbVar8;
  byte *pbStack_78;
  undefined1 uStack_6c;
  undefined1 auStack_6b [107];
  
  bVar7 = *param_2;
  do {
    while( true ) {
      while (bVar7 == 0x7b) {
        puVar4 = auStack_6b;
        uStack_6c = 0x7b;
        pbStack_78 = param_2 + 1;
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                bVar7 = *pbStack_78;
                if (bVar7 == 0) {
                      /*
     * BADDATA ANALYSIS (from binary @ 0x004382e8):
     * Function: GlobMatch__FPcT1
     *
     * Looking at this assembly:
     * 1. **What it does:** This is a glob pattern matching function entry. It loads pattern string (a1) and filename (a0), sets up character constants for special glob chars (`{` `}` `[` `]` `*` `?` `\` `-`), then dispatches based on first pattern char: `{` jumps to brace expansion, `[` to character class, `*` to wildcard matching.
     * 2. **C pseudocode:**
     * ```c
     * int GlobMatch(char *pattern, char *filename) {
     * char *p = pattern;
     * char c = *p++;
     * switch (c) {
     * case '{':  // brace expansion {a,b,c}
     * goto handle_brace;
     * case '[':  // character class [abc] or [a-z]
     * goto handle_bracket;
     * case '*':  // wildcard
     * goto handle_star;
     * case '?':  // single char match
     * goto handle_question;
     * case '\\': // escape next char
     * c = *p++;
     * // fall through to literal match
     * default:   // literal character
     * if (c != *filename++) return 0;
     * break;
     * }
     * // ... continues recursively
     * }
     * ```
     * The constants loaded are: `{`=0x7b, `}`=0x7d, `[`=0x5b, `]`=0x5d, `*`=0x2a, `?`=0x3f, `\`=0x5c, `-`=0x2d - standard glob metacharacters for shell-style pattern matching.
     */
halt_baddata();
                }
                if (bVar7 != 0x7b) break;
                if (puVar4[-1] != '[') {
                  *puVar4 = 0x7b;
                  puVar4 = puVar4 + 1;
                }
                pbStack_78 = pbStack_78 + 1;
              }
              if (bVar7 == 0x7d) break;
              if (bVar7 == 0x5b) {
                if (puVar4[-1] != '[') {
                  *puVar4 = 0x5b;
                  puVar4 = puVar4 + 1;
                }
                pbStack_78 = pbStack_78 + 1;
              }
              else if (bVar7 == 0x5d) {
                pcVar1 = puVar4 + -1;
                puVar4 = puVar4 + -1;
                if (*pcVar1 != '[') {
                      /*
     * BADDATA ANALYSIS (from binary @ 0x004382e8):
     * Function: GlobMatch__FPcT1
     *
     * This is a character dispatch switch for glob pattern matching. It loads ASCII codes for `]` (93), `\` (92), and `[` (91), then branches based on the current pattern character.
     * ```c
     * // Character dispatch for glob pattern matching
     * // a1 = current pattern char, t3 = '*', a2 = '[', s3 = likely another special char
     * if (ch == '*') goto handle_star;           // 0x438384
     * if (ch == '[') goto handle_bracket;        // 0x43848c
     * if (ch == s3) goto handle_s3;              // 0x43858c
     * if (ch == '?') goto handle_question;       // 0x4385ec (0x3f = '?')
     * if (ch == '\0') goto handle_end;           // 0x438610
     * if (ch == '\\') goto handle_escape;        // 0x438630 (0x5c = '\\')
     * // default: literal character match at 0x438654
     * ```
     * The `[` handler (starting at 0x438384) begins building a character class - it stores s2 at sp+84 and sets up a pointer to sp+85, then loops reading characters until `]` or end of pattern, handling nested `[` and escape sequences.
     */
halt_baddata();
                }
                pbStack_78 = pbStack_78 + 1;
              }
              else if (bVar7 == 0x5c) {
                if (pbStack_78[1] == 0) {
                      /*
     * BADDATA ANALYSIS (from binary @ 0x004382e8):
     * Function: GlobMatch__FPcT1
     *
     * Looking at this assembly:
     * 1. **What it does:** This is a glob pattern parser state machine. It reads pattern characters and branches based on special glob chars (likely `*`, `?`, `[`, `]`, `\`). The registers t3, t5, a2, t1, t0 hold ASCII constants for these special characters. It handles backslash escape sequences by copying the next char literally.
     * 2. **C pseudocode:**
     * ```c
     * while ((c = *pattern++) != '\0') {
     * if (c == '*') {           // t3 = '*' (0x2a)
     * // collapse consecutive path separators
     * if (*(out-1) != '/') {
     * *out++ = STAR_MARKER;  // s2 = internal marker
     * }
     * } else if (c == '?') {    // t5 = '?' (0x3f)
     * // backspace in output if not at separator
     * if (*(--out) == '/') out++;
     * } else if (c == '[') {    // a2 = '[' (0x5b)
     * // character class handling
     * } else if (c == ']') {    // t1 = ']' (0x5d)
     * // end character class
     * } else if (c == '\\') {   // t0 = '\\' (0x5c)
     * // escape next character
     * }
     * // else: skip literal chars in this pass
     * }
     * return 0;  // pattern ended prematurely
     * ```
     * The function name `GlobMatch__FPcT1` (C++ mangled: `GlobMatch(char*, char*)`) confirms this is shell-style glob/wildcard pattern matching.
     */
halt_baddata();
                }
                pbStack_78 = pbStack_78 + 2;
              }
              else {
                pbStack_78 = pbStack_78 + 1;
              }
            }
            pcVar1 = puVar4 + -1;
            puVar4 = puVar4 + -1;
            if (*pcVar1 != '[') break;
            pbStack_78 = pbStack_78 + 2;
          }
          if (puVar4 == &uStack_6c) break;
          pbStack_78 = pbStack_78 + 1;
        }
        bVar7 = *param_2;
      }
      pbVar8 = param_2 + 1;
      pbVar5 = pbVar8;
      if (bVar7 == 0x5b) break;
      if (bVar7 == 0x2a) {
        do {
          pbVar5 = param_2 + 1;
          param_2 = param_2 + 1;
        } while (*pbVar5 == 0x2a);
        for (; (iVar3 = FUN_004382f4(param_1,param_2), iVar3 == 0 && (*param_1 != 0));
            param_1 = param_1 + 1) {
        }
                    // WARNING: Bad instruction - Truncating control flow here
            /*
     * BADDATA ANALYSIS (from binary @ 0x004382e8):
     * Function: GlobMatch__FPcT1
     *
     * Looking at this snippet from GlobMatch (glob pattern matching function):
     * **What it does:**
     * This handles character class matching `[...]` in glob patterns. It iterates through characters in a bracket expression, comparing against the input character (`a2`/`$a2`), with special handling for ranges (the -1 offset checks previous char for range bounds).
     * **C pseudocode:**
     * ```c
     * // At 0x4383e8-0x4383f4: Store escape char, advance both pointers
     * v1++;
     * *v0 = s2;  // s2 = escaped char
     * goto main_loop;
     * a0++;
     * // At 0x4383f8-0x438428: Check if input matches previous char (range end)
     * prev_char = *(v1 - 1);
     * v1--;
     * if (a2 == prev_char) {
     * a0 += 2;  // matched, skip range
     * goto main_loop;
     * }
     * if (v1 == s1) {  // end of bracket expr
     * a1 = *s0;
     * goto bracket_done;
     * }
     * a0++;
     * goto main_loop;
     * // At 0x43842c-0x438448: Similar range check, store $ra as marker
     * prev_char = *(v1 - 1);
     * v0 = v1;
     * if (a2 != prev_char) {
     * v1++;
     * *v0 = ra;  // use $ra as special marker (unusual!)
     * }
     * a0++;
     * goto main_loop;
     * ```
     * Key insight: Using `$ra` (return address) as a marker byte at 0x438440 is unusual - likely a Ghidra artifact or the original code used a constant that happened to be in `$ra` at that point.
     */
halt_baddata();
      }
      if (bVar7 == 0x3f) {
        bVar7 = *param_1;
        param_1 = param_1 + 1;
        if (bVar7 == 0) {
              /*
     * BADDATA ANALYSIS (from binary @ 0x004382e8):
     * Function: GlobMatch__FPcT1
     *
     * Looking at this assembly snippet from GlobMatch (a glob/wildcard pattern matcher):
     * **What it does:**
     * This handles special glob pattern cases: (1) backslash escape - copies next char literally, (2) character class `]` matching - checks if current char matches the one before `]`, (3) escape sequence validation - ensures pattern doesn't end after backslash.
     * **C pseudocode:**
     * ```c
     * // At 438440: Backslash escape - copy literal character
     * *dest++ = next_char;
     * pattern++;
     * goto main_loop;
     * // At 43844c: End of character class ']' - check match against prev char
     * prev_char = pattern[-1];
     * pattern--;
     * if (input_char == prev_char) {
     * pattern++;
     * goto main_loop;
     * }
     * return 0;  // no match
     * // At 43846c: Validate escape sequence
     * next = pattern[1];
     * pattern++;
     * if (next == '\0') {
     * return 0;  // pattern ends after backslash = invalid
     * }
     * pattern++;
     * goto main_loop;
     * // At 43848c: Scan for special chars in remaining pattern
     * pattern = saved_pattern;
     * while ((c = *pattern++) != '\0') {
     * if (c == '*') goto handle_star;
     * if (c == '[') goto handle_bracket;
     * // continue scanning...
     * }
     * ```
     */
halt_baddata();
        }
        bVar7 = param_2[1];
        param_2 = param_2 + 1;
      }
      else {
        if (bVar7 == 0) {
              /*
     * BADDATA ANALYSIS (from binary @ 0x004382e8):
     * Function: GlobMatch__FPcT1
     *
     * Looking at this assembly:
     * **What it does:**
     * Scans pattern string (a3/a0) for special glob characters. t1 = '*' (0x2A), t0 = '\\' (0x5C escape). When it finds '*', sets up for recursive matching. Backslash skips next char. NUL terminator = no match (return 0).
     * **C pseudocode:**
     * ```c
     * char *p = pattern;  // a0 = a3
     * while ((c = *p) != '\0') {
     * if (c == '*') {         // t1 = 0x2A
     * anchor = pattern;   // a1 = a3
     * goto try_match;
     * }
     * if (c == '\\') {        // t0 = 0x5C
     * p++;
     * if (*p == '\0')
     * return 0;       // trailing backslash = no match
     * }
     * p++;
     * }
     * return 0;  // no '*' found, pattern exhausted = no match
     * ```
     * This is the "find next wildcard anchor" loop in a glob matcher - it advances through the pattern looking for '*' to establish a backtrack point, handling escaped characters along the way.
     */
halt_baddata();
        }
        if (bVar7 == 0x5c) {
          param_2 = param_2 + 1;
          if (*pbStack_78 == 0) {
                /*
     * BADDATA ANALYSIS (from binary @ 0x004382e8):
     * Function: GlobMatch__FPcT1
     *
     * Looking at this assembly snippet from GlobMatch (glob pattern matching):
     * **What it does:**
     * This handles character range matching like `[a-z]` in glob patterns. It checks if a character falls within a range by comparing: `prev_char <= test_char <= next_char`. The `-` character (0x2d at t4) triggers range mode.
     * **C pseudocode:**
     * ```c
     * // Range matching within [...] bracket expression
     * // t2 = pattern pointer, a1 = position in bracket, v1 = char to match
     * // t4 = '-' (0x2d), a0 = current position, a3 = end of bracket
     * for (; a0 < a3; a0++) {
     * char test_char = *t2;      // character being tested
     * char bracket_char = *a1;   // current char in bracket expression
     * if (bracket_char == '-' && a1 != a3 && (a1+1) != a0) {
     * // Range expression: check prev_char <= test_char <= next_char
     * char range_start = *(a1 - 1);  // char before '-'
     * char range_end = *(a1 + 1);    // char after '-'
     * if (test_char >= range_start && test_char <= range_end) {
     * s0 = a0 + 1;  // matched - advance position
     * t2++;         // advance pattern
     * goto check_next;
     * }
     * } else if (bracket_char == test_char) {
     * // Exact match in bracket
     * // ... (continues at 438564)
     * }
     * }
     * ```
     */
halt_baddata();
          }
          bVar7 = *param_2;
          bVar2 = *param_1;
        }
        else {
          bVar2 = *param_1;
        }
        param_1 = param_1 + 1;
        if (bVar7 != bVar2) {
              /*
     * BADDATA ANALYSIS (from binary @ 0x004382e8):
     * Function: GlobMatch__FPcT1
     *
     * Looking at this assembly snippet from GlobMatch (glob pattern matching function):
     * **What it does:**
     * This is the character range matching logic for bracket expressions like `[a-z]`. It checks if a character falls within a range (t6 <= char <= v1), advances pointers on match, and loops through multiple range specifications until a match is found or the bracket expression ends.
     * **C pseudocode:**
     * ```c
     * /* Range check: if (range_start <= char && char <= range_end) */
     * if (!(t6 < v1)) {  /* slt check - if char in range */
     * pattern++;     /* s0 = a0 + 1 - advance pattern */
     * matched++;     /* t2++ - increment match count */
     * goto end_bracket;
     * }
     * /* Exact match check */
     * if (char == range_end) {  /* v0 == v1 */
     * pattern++;
     * matched++;
     * goto end_bracket;
     * }
     * /* No match, try next range in bracket */
     * range_ptr++;  /* a1++ */
     * if (range_ptr != bracket_end)  /* a1 != a0 */
     * goto next_range;  /* loop back to 4384fc */
     * end_bracket:
     * if (range_ptr == bracket_end) {  /* no match found */
     * return 0;  /* move v0,zero */
     * }
     * char = *pattern;  /* lbu a1,0(s0) */
     * goto main_loop;   /* back to 438348 */
     * /* Star handling - skip consecutive '*' */
     * if (char == '*') {  /* s3 == a1 */
     * do {
     * pattern++;
     * next = *pattern;
     * } while (next == '*');
     * }
     * /* Then call recursively or continue */
     * ```
     */
halt_baddata();
        }
        bVar7 = param_2[1];
        param_2 = param_2 + 1;
      }
    }
    while( true ) {
      bVar7 = *pbVar5;
      if (bVar7 == 0) {
            /*
     * BADDATA ANALYSIS (from binary @ 0x004382e8):
     * Function: GlobMatch__FPcT1
     *
     * Looking at this assembly:
     * 1. **What it does**: This is the `*` wildcard handling in a glob matcher. It skips consecutive `*` characters in the pattern, then recursively tries matching the rest of the pattern against each remaining position in the string. Returns 1 on match, 0 if exhausted.
     * 2. **C pseudocode**:
     * ```c
     * // Skip consecutive '*' chars in pattern
     * while (*pattern == '*') pattern++;
     * // Try matching rest of pattern at each string position
     * while (1) {
     * if (GlobMatch(pattern, str))  // jalr at 4385ac, GP offset -30544
     * return 1;
     * if (*str == '\0')
     * return 0;
     * str++;
     * }
     * ```
     * The `jalr t9` at 0x4385ac is a recursive call to `GlobMatch` itself (loaded via GP-relative addressing at offset -30544). Register `s0` holds the pattern pointer, `t2/a0` holds the string pointer, and `s3` appears to hold the `*` character (0x2a) for comparison.
     */
halt_baddata();
      }
      if (bVar7 == 0x5d) break;
      if (bVar7 == 0x5c) {
        if (pbVar5[1] == 0) {
              /*
     * BADDATA ANALYSIS (from binary @ 0x004382e8):
     * Function: GlobMatch__FPcT1
     *
     * Looking at this assembly snippet from the GlobMatch function (glob pattern matching):
     * **1. What it does:**
     * This handles end-of-string termination cases in glob matching. It checks if the input string (t2) or pattern (a0/s0) has reached null terminator, returning 0 (no match) or 1 (match) accordingly. The `*` wildcard case at 438610 returns 1 if pattern ends while string has more chars.
     * **2. C pseudocode:**
     * ```c
     * // At 4385e4: Pattern exhausted prematurely
     * return 0;
     * // At 4385ec: Continue after bracket match - advance string
     * c = *str++;
     * if (c == '\0') return 0;
     * pat_char = *++pattern;
     * continue;  // goto main loop
     * // At 438610: End of '*' wildcard - check if string exhausted
     * if (*str != '\0') return 1;  // '*' matches rest
     * return 0;
     * // At 438630: Escape sequence '\' handling
     * pattern++;
     * if (*str == '\0') return 0;
     * pat_char = *pattern;
     * str_char = *str;
     * // continue comparison...
     * ```
     * This is classic glob matching logic: the branches handle string/pattern exhaustion at various points in `*`, `?`, `[...]`, and `\` escape processing.
     */
halt_baddata();
        }
        pbVar5 = pbVar5 + 2;
      }
      else {
        pbVar5 = pbVar5 + 1;
      }
    }
    pbVar6 = pbVar8;
    if (pbVar8 < pbVar5) {
      bVar7 = *param_1;
      do {
        if (((*pbVar6 == 0x2d) && (pbVar6 != pbVar8)) && (pbVar6 + 1 != pbVar5)) {
          if ((pbVar6[-1] <= bVar7) && (bVar7 <= pbVar6[1])) {
            param_2 = pbVar5 + 1;
            param_1 = param_1 + 1;
            break;
          }
        }
        else if (*pbVar6 == bVar7) {
          param_2 = pbVar5 + 1;
          param_1 = param_1 + 1;
          break;
        }
        pbVar6 = pbVar6 + 1;
      } while (pbVar6 != pbVar5);
    }
    if (pbVar6 == pbVar5) {
          /*
     * BADDATA ANALYSIS (from binary @ 0x004382e8):
     * Function: GlobMatch__FPcT1
     *
     * ## Assembly Analysis
     * **What it does:**
     * This is the tail-match portion of glob pattern matching after a `*` wildcard. It checks if the remaining pattern (in `s0`) matches the end of the string (in `t2`). If pattern is exhausted first, return 0 (no match). If characters match, continue; if mismatch, return 0.
     * **C pseudocode:**
     * ```c
     * // After '*' consumed input, check if remaining pattern matches
     * s0++;  // advance pattern past '*'
     * if (*a0 == '\0') {  // a0 points to pattern char
     * return 0;  // pattern not exhausted but string is
     * }
     * c1 = *s0;      // next pattern char
     * c2 = *t2;      // next string char
     * t2++;
     * if (c1 != c2) {
     * return 0;  // mismatch
     * }
     * c1 = *(s0 + 1);  // peek next pattern char
     * s0++;
     * goto loop_0x438348;  // continue main matching loop
     * ```
     * **Register usage:** `s0` = pattern pointer, `t2` = string pointer, `a0` = current pattern position being checked, `v0` = return value (0 = no match)
     */
halt_baddata();
    }
    bVar7 = *param_2;
    pbStack_78 = pbVar5;
  } while( true );
}
