/**
 * FUN_004382f4
 *
 * Extracted from fsn.c lines 76769-76930
 * Ghidra address: 0x004382f4
 * Category: Other
 */

void FUN_004382f4(byte *param_1,byte *param_2)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  byte bVar7;
  byte *pbVar6;
  byte *pbVar8;
  int unaff_gp;
  byte *local_78;
  undefined1 local_6c;
  undefined1 auStack_6b [107];
  
  bVar7 = *param_2;
  do {
    while( true ) {
      while (bVar7 == 0x7b) {
        puVar4 = auStack_6b;
        local_6c = 0x7b;
        local_78 = param_2 + 1;
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                bVar7 = *local_78;
                if (bVar7 == 0) {
                      /*
     * BADDATA ANALYSIS (from binary @ 0x004382f4):
     * Function: FUN_004382f4
     *
     * Looking at this assembly:
     * 1. **What it does:** This is GlobMatch - a pattern matching function that compares a filename against a glob pattern. It sets up character constants for special glob metacharacters ('{' = 123, '*' = 42, '[' = 91, '}' = 125, '-' = 45, ']' = 93, '\' = 92) and dispatches based on the first pattern character.
     * 2. **C pseudocode:**
     * ```c
     * int GlobMatch(char *pattern, char *filename) {
     * // sp+84 = local buffer for brace expansion
     * char buf[108];
     * char ch = *pattern;
     * switch (ch) {
     * case '{':   // 123 - brace expansion {a,b,c}
     * goto handle_braces;
     * case '[':   // 91 - character class [abc]
     * goto handle_charclass;
     * case '*':   // 42 - wildcard
     * goto handle_star;
     * case '?':   // 63 - single char match
     * goto handle_question;
     * case '\0':  // end of pattern
     * goto handle_end;
     * default:
     * // literal character match
     * break;
     * }
     * // ... recursive matching continues
     * }
     * ```
     * The function recursively matches glob patterns supporting: `*` (any chars), `?` (single char), `[...]` (char class with ranges), `{a,b}` (brace alternation), and `\` (escape).
     */
halt_baddata();
                }
                if (bVar7 != 0x7b) break;
                if (puVar4[-1] != '[') {
                  *puVar4 = 0x7b;
                  puVar4 = puVar4 + 1;
                }
                local_78 = local_78 + 1;
              }
              if (bVar7 == 0x7d) break;
              if (bVar7 == 0x5b) {
                if (puVar4[-1] != '[') {
                  *puVar4 = 0x5b;
                  puVar4 = puVar4 + 1;
                }
                local_78 = local_78 + 1;
              }
              else if (bVar7 == 0x5d) {
                pcVar1 = puVar4 + -1;
                puVar4 = puVar4 + -1;
                if (*pcVar1 != '[') {
                      /*
     * BADDATA ANALYSIS (from binary @ 0x004382f4):
     * Function: FUN_004382f4
     *
     * Looking at this assembly, this is a glob pattern matching function (the symbol name `GlobMatch__FPcT1` is visible in the disassembly offsets).
     * **What it does:**
     * Compares a character from the pattern string against special glob metacharacters: `[` (0x5b=91), `]`, `*` (0x2a via s3), `?` (0x3f=63), and null terminator. Branches to different handlers for each metacharacter. The `[` case (starting at 438384) begins parsing a character class, storing state on the stack.
     * **C pseudocode:**
     * ```c
     * // Inside GlobMatch(char *pattern, char *string):
     * // a1 = current pattern char, t2 = string pointer, s0 = pattern pointer
     * char c = *pattern;
     * if (c == '[') {
     * // Character class: [abc] or [a-z]
     * char charset[256];
     * charset[0] = 0;  // sb s2,84(sp) - init negation flag
     * pattern++;
     * char ch = *pattern;
     * if (ch == '\0') goto error;
     * if (ch == '[') goto nested_bracket;
     * if (ch == ']') goto empty_class;  // t5 = ']'
     * if (ch == '[') goto range_start;
     * if (ch == '\\') goto escape_in_class;
     * // ... continue parsing character class
     * } else if (c == '[') {  // second bracket check at 438350
     * // Handle range parsing a3 = pattern + 1
     * } else if (c == '*') {
     * // Wildcard: match zero or more chars
     * } else if (c == '?') {
     * // Match any single character
     * } else if (c == '\0') {
     * // End of pattern
     * } else if (c == '\\') {  // t0 = backslash
     * // Escape sequence
     * } else {
     * // Literal character match
     * char sc = *string;  // lbu v1,0(t2)
     * goto compare_literal;
     * }
     * ```
     * This is a standard recursive-descent glob matcher handling `*`, `?`, `[...]` character classes, and `\` escapes.
     */
halt_baddata();
                }
                local_78 = local_78 + 1;
              }
              else if (bVar7 == 0x5c) {
                if (local_78[1] == 0) {
                      /*
     * BADDATA ANALYSIS (from binary @ 0x004382f4):
     * Function: FUN_004382f4
     *
     * Looking at this assembly, it's a switch-like dispatch on character value in `v0` (loaded from pattern string), handling glob metacharacters:
     * **What it does:**
     * Pattern character switch: NULL (0) returns 0 (no match), `*` (0x2a/t3) handles wildcard expansion with backtracking, `?` (0x3f/t5) matches single char, `\` (0x5c/a2) handles escape sequences, `[` (0x5b/t1) starts character class, `]` (0x5d/t0) ends character class. Default case advances pattern pointer and loops.
     * **C pseudocode:**
     * ```c
     * // Inside GlobMatch(char *pattern, char *string) loop:
     * switch (*pattern) {
     * case '\0':           // 0x00 - end of pattern
     * return 0;        // no match
     * case '*':            // 0x2a (t3) - wildcard
     * // backtrack: if prev char in output != '\', append '*' to output
     * if (output[-1] != '\\') {
     * *output++ = '*';
     * }
     * pattern++;
     * break;
     * case '?':            // 0x3f (t5) - single char match
     * // if prev output char is '\', back up output pointer
     * if (output[-1] == '\\') {
     * output--;
     * }
     * pattern++;
     * break;
     * case '\\':           // 0x5c (a2) - escape next char
     * // handle escape sequence
     * break;
     * case '[':            // 0x5b (t1) - character class start
     * // handle bracket expression
     * break;
     * case ']':            // 0x5d (t0) - character class end
     * // handle bracket close
     * break;
     * default:             // literal character
     * pattern++;       // advance and loop back
     * break;
     * }
     * ```
     * The registers: t3=0x2a('*'), t5=0x3f('?'), a2=0x5c('\\'), t1=0x5b('['), t0=0x5d(']'), a2 also used as '\\' constant. s2 appears to hold '*' character for output.
     */
halt_baddata();
                }
                local_78 = local_78 + 2;
              }
              else {
                local_78 = local_78 + 1;
              }
            }
            pcVar1 = puVar4 + -1;
            puVar4 = puVar4 + -1;
            if (*pcVar1 != '[') break;
            local_78 = local_78 + 2;
          }
          if (puVar4 == &local_6c) break;
          local_78 = local_78 + 1;
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
        for (; (iVar3 = (**(code **)(unaff_gp + -0x7750) /* -> FUN_004382f4 */)(param_1,param_2) /* =FUN_004382f4 */, iVar3 == 0 &&
               (*param_1 != 0)); param_1 = param_1 + 1) {
        }
                    // WARNING: Bad instruction - Truncating control flow here
            /*
     * BADDATA ANALYSIS (from binary @ 0x004382f4):
     * Function: FUN_004382f4
     *
     * Looking at this assembly from `GlobMatch__FPcT1` (glob pattern matching function):
     * **What it does:**
     * This handles character class matching `[...]` in glob patterns. It iterates through characters in a bracket expression, checking if the current input character (a2/a0) matches any character in the set, with special handling for ranges and negation.
     * **C pseudocode:**
     * ```c
     * // At 4383e8: Found match in character class, advance both pointers
     * v1++;
     * *v0 = s2;  // store match marker
     * a0++;
     * goto main_loop;
     * // At 4383f8: Check previous char in class for match
     * t7 = *(v1 - 1);
     * v1--;
     * if (a2 != t7) goto try_next;
     * a0 += 2;  // skip past ']'
     * goto main_loop;
     * try_next:
     * if (v1 != s1) {  // not at start of class
     * a0++;
     * goto main_loop;
     * }
     * // At class start - reload and restart
     * a1 = *s0;
     * goto outer_loop;
     * // At 43842c: Similar logic with ra as marker
     * t8 = *(v1 - 1);
     * v0 = v1;
     * if (a2 == t8) goto advance;
     * v1++;
     * *v0 = ra;  // store different marker
     * advance:
     * a0++;
     * goto main_loop;
     * ```
     * This is classic glob `[abc]` or `[a-z]` character class matching - walking the bracket contents comparing against the input character.
     */
halt_baddata();
      }
      if (bVar7 == 0x3f) {
        bVar7 = *param_1;
        param_1 = param_1 + 1;
        if (bVar7 == 0) {
              /*
     * BADDATA ANALYSIS (from binary @ 0x004382f4):
     * Function: FUN_004382f4
     *
     * Looking at this assembly from `GlobMatch__FPcT1` (a glob/wildcard pattern matcher):
     * **What it does:**
     * This handles character class matching `[...]` and escape sequences `\` in glob patterns. It compares characters, handles range endpoints, and advances pattern/string pointers accordingly. The `sb ra,0(v0)` stores a matched character into a result buffer.
     * **C pseudocode:**
     * ```c
     * // At 438434: Check if current char matches end of range
     * if (c != pattern[-1]) {  // a2 vs t8
     * result[pos++] = matched_char;  // sb ra,0(v0); addiu v1,v1,1
     * }
     * pattern++;  // addiu a0,a0,1
     * goto continue_match;  // branch to 438390
     * // At 43844c: Backtrack check - verify previous char in pattern
     * prev = pattern[-1];  // lbu t9,-1(v1)
     * pattern--;
     * if (c != prev) {
     * return 0;  // no match
     * }
     * pattern++;
     * goto continue_match;
     * // At 43846c: Escape sequence handling
     * next = pattern[1];  // lbu t6,1(a0)
     * pattern++;
     * if (next == '\0') {
     * return 0;  // incomplete escape = no match
     * }
     * pattern++;
     * goto continue_match;
     * // At 43848c: Scan for special chars in remaining pattern
     * ptr = saved_pattern;  // move a0,a3
     * while ((c = *ptr) != '\0') {
     * if (c == '*') goto handle_star;    // t1 = '*'
     * if (c == '[') goto handle_bracket; // t0 = '['
     * // ...
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
     * BADDATA ANALYSIS (from binary @ 0x004382f4):
     * Function: FUN_004382f4
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Scans through a pattern string looking for special glob characters. When it hits `\0` returns 0 (no match). When it hits `*` (t1=0x2a) branches to recursive match. When it hits `\` (t0=0x5c) skips the escaped character.
     * **C pseudocode:**
     * ```c
     * // a0 = pattern ptr, a3 = saved pattern start, t1 = '*' (0x2a), t0 = '\\' (0x5c)
     * char *p = pattern;  // a0 = a3
     * while ((c = *p) != '\0') {
     * if (c == '*') {
     * saved = pattern;  // a1 = a3
     * goto recursive_match;  // 4384e8
     * }
     * if (c == '\\') {
     * p++;
     * if (*p == '\0')
     * return 0;  // escape at end = no match
     * }
     * p++;
     * }
     * return 0;  // pattern exhausted without match
     * ```
     * This is part of a glob pattern matcher - specifically the code that handles finding the next `*` wildcard in a `**` multi-segment match scenario, with backslash escape support.
     */
halt_baddata();
        }
        if (bVar7 == 0x5c) {
          param_2 = param_2 + 1;
          if (*local_78 == 0) {
                /*
     * BADDATA ANALYSIS (from binary @ 0x004382f4):
     * Function: FUN_004382f4
     *
     * Looking at this assembly from GlobMatch (glob pattern matching function):
     * **What it does:**
     * This handles character range matching `[a-z]` in glob patterns. It checks if a character falls within a range by comparing: `low <= char <= high`, where the pattern has format `X-Y` (e.g., `a-z`).
     * **C pseudocode:**
     * ```c
     * // At 4384e8: Check if we've exhausted the pattern range
     * if (a0 > a3) goto end_range_check;  // past end of bracket expr
     * char pattern_char = *t2;      // current pattern position
     * char input_char = *a1;        // current input char
     * // Check for '-' indicating a range (e.g., "a-z")
     * if (t4 == input_char)         // t4 likely holds '-'
     * goto not_in_range;
     * if (a1 == a3)                 // at end of pattern
     * goto not_in_range;
     * char* next = a1 + 1;
     * if (next == a0)               // bounds check
     * goto not_in_range;
     * char range_low = *(a1 - 1);   // char before '-'
     * char range_high = *(a1 + 1); // char after '-'
     * // Check if pattern_char is within [range_low, range_high]
     * if (pattern_char < range_low)
     * goto match_failed;        // below range
     * if (range_high < pattern_char)
     * goto match_failed;        // above range
     * // Character is in range - match succeeded
     * s0 = a0 + 1;                  // advance position
     * goto end_range_check;
     * ```
     * This is classic glob `[a-z]` range handling - the `-1(a1)` and `+1(a1)` loads get the characters on either side of the hyphen to establish the range bounds.
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
     * BADDATA ANALYSIS (from binary @ 0x004382f4):
     * Function: FUN_004382f4
     *
     * Looking at this assembly snippet from GlobMatch (glob pattern matching function):
     * **What it does:**
     * Character range matching for bracket expressions like `[a-z]`. Checks if a character falls within a range (v1 >= t9 AND v1 <= t6), handles exact character matches, and advances through the bracket contents until finding a match or reaching the closing bracket.
     * **C pseudocode:**
     * ```c
     * // At this point: v1 = char to match, t9 = range_start, a1 = bracket_ptr, a0 = bracket_end
     * if (v1 >= range_start) {
     * range_end = bracket_ptr[1];  // t6 = next char (end of range)
     * if (v1 <= range_end) {
     * pattern++;              // s0 = advance past bracket expr
     * matched = 1;            // t2++
     * goto check_done;
     * }
     * }
     * // Exact char match check (from 438550)
     * if (cur_bracket_char == v1) {
     * pattern++;
     * matched = 1;
     * goto check_done;
     * }
     * // No match, advance to next char in bracket
     * bracket_ptr++;
     * if (bracket_ptr != bracket_end)
     * goto scan_bracket_loop;     // back to 4384fc
     * check_done:
     * if (bracket_ptr == bracket_end) {
     * return 0;                   // No match found
     * }
     * next_char = *pattern;           // s0 points past ']'
     * goto main_loop;                 // back to 438348
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
     * BADDATA ANALYSIS (from binary @ 0x004382f4):
     * Function: FUN_004382f4
     *
     * Looking at this assembly snippet from `GlobMatch` (a glob pattern matching function):
     * **What it does:**
     * This handles the `*` wildcard case in glob matching. It skips consecutive `*` characters in the pattern, then recursively calls GlobMatch for each remaining position in the string until a match is found or the string is exhausted.
     * **C pseudocode:**
     * ```c
     * // At offset +0x2a4 in GlobMatch - handling '*' wildcard
     * if (pattern[0] == '*') {
     * // Skip consecutive '*' characters
     * while (pattern[0] == '*') {
     * pattern++;
     * }
     * // Try matching from each position in string
     * char *pos = string;
     * while (1) {
     * if (GlobMatch(pos, pattern)) {
     * return 1;  // Match found
     * }
     * if (*pos == '\0') {
     * return 0;  // End of string, no match
     * }
     * pos++;
     * }
     * }
     * ```
     * The GP-relative call at `gp-30544` (offset -0x7750) is the recursive `GlobMatch` call. Register `s3` holds `'*'` (0x2A), `s0` is the pattern pointer, and `a0`/`t2` tracks the current string position.
     */
halt_baddata();
      }
      if (bVar7 == 0x5d) break;
      if (bVar7 == 0x5c) {
        if (pbVar5[1] == 0) {
              /*
     * BADDATA ANALYSIS (from binary @ 0x004382f4):
     * Function: FUN_004382f4
     *
     * Looking at this assembly, it's part of a glob pattern matcher (`GlobMatch`). The code handles several exit conditions and loop continuations.
     * **What it does:**
     * These are exit/continuation paths for glob matching: (1) return 1 (match), (2) advance pattern pointer and check for null terminator, (3) return 0 (no match), (4) load next character and continue main loop.
     * **C pseudocode:**
     * ```c
     * // At 4385c4: Match found path
     * return 1;
     * // At 4385cc: Skip remaining wildcards in pattern
     * while (*pattern != '\0') {
     * pattern++;
     * }
     * return 0;  // No more input to match
     * // At 4385ec: Advance input string
     * ch = *str++;
     * if (ch == '\0')
     * return 0;  // End of string, no match
     * pattern_ch = pattern[1];
     * pattern++;
     * goto main_loop;  // Continue matching at 438348
     * // At 438610: Check end of string for success
     * if (*str == '\0')
     * return 1;  // Pattern exhausted, string exhausted = match
     * return 0;      // Pattern exhausted but string remains = no match
     * // At 438630: Advance pattern and check input
     * pattern++;
     * if (*pattern == '\0')
     * // handle end of pattern
     * ```
     * This is classic glob matching logic - the `*` wildcard handling requires checking both pattern exhaustion and string exhaustion to determine match success.
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
     * BADDATA ANALYSIS (from binary @ 0x004382f4):
     * Function: FUN_004382f4
     *
     * Based on the assembly, this is the tail end of a glob pattern matching function (note the symbol name `GlobMatch__FPcT1`).
     * **What it does:**
     * End-of-match logic for glob pattern matching. Checks if pattern exhausted (return 1 = match) or string exhausted (return 0 = no match), then does character-by-character comparison loop back to main matching logic.
     * **C pseudocode:**
     * ```c
     * // At 438618: t6 contains match result from previous comparison
     * if (t6 != 0) {
     * return 0;  // mismatch found
     * }
     * return 1;  // pattern matched
     * // At 438630: Alternative path - continue matching
     * char_loop:
     * if (*str == '\0') {
     * return 0;  // string ended before pattern
     * }
     * pattern++;
     * if (*pattern == *str) {
     * str++;
     * pattern++;
     * goto main_loop;  // back to 438348
     * }
     * return 0;  // characters don't match
     * ```
     * **Register usage:** a0=string ptr, s0=pattern ptr, t2=secondary pattern ptr, t6=comparison result, v0=return value (1=match, 0=no match)
     */
halt_baddata();
    }
    bVar7 = *param_2;
    local_78 = pbVar5;
  } while( true );
}
