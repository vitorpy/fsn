#!/usr/bin/env python3
"""
Verify C function implementation against binary disassembly.

This tool acts as an automated "reviewer" for the restoration project.
It compares the *logic flow* (specifically function calls and constants)
of a C function against the original binary assembly.

Usage:
    python3 analysis/verify_function.py <function_name> [source_file]

Example:
    python3 analysis/verify_function.py draw_child_node src/draw_tree.c
"""

import argparse
import sys
import os
from pathlib import Path
from typing import List, Tuple, Dict, Any

# Add analysis directory to path to import sibling modules
sys.path.append(os.path.dirname(os.path.abspath(__file__)))

import disassemble_function as disasm
import tree_sitter_c as tsc
from tree_sitter import Language, Parser

# Initialize Tree-sitter
C_LANGUAGE = Language(tsc.language())
parser = Parser(C_LANGUAGE)

def get_c_function_analysis(source_path: str, func_name: str) -> Dict[str, Any]:
    """Parse C file and extract analysis data for a specific function."""
    
    if not os.path.exists(source_path):
        print(f"Error: Source file {source_path} not found.", file=sys.stderr)
        return None

    with open(source_path, 'rb') as f:
        source_bytes = f.read()
    
    tree = parser.parse(source_bytes)
    
    # Find the function node
    func_node = None
    
    def find_func(node):
        if node.type == 'function_definition':
            # Check name
            declarator = node.child_by_field_name('declarator')
            while declarator and declarator.type in ('pointer_declarator', 'function_declarator', 'parenthesized_declarator'):
                if declarator.type == 'function_declarator':
                    declarator = declarator.child_by_field_name('declarator')
                elif declarator.type == 'pointer_declarator':
                    declarator = declarator.child_by_field_name('declarator')
                elif declarator.type == 'parenthesized_declarator':
                    declarator = declarator.child_by_field_name('declarator')
            
            if declarator and declarator.type == 'identifier':
                name = source_bytes[declarator.start_byte:declarator.end_byte].decode('utf-8')
                if name == func_name:
                    return node
        
        for child in node.children:
            res = find_func(child)
            if res: return res
        return None

    func_node = find_func(tree.root_node)
    if not func_node:
        return None

    # Analyze the function body
    calls = []
    float_consts = []
    
    def walk_body(node):
        if node.type == 'call_expression':
            # Extract function name
            func_expr = node.child_by_field_name('function')
            if func_expr:
                name = source_bytes[func_expr.start_byte:func_expr.end_byte].decode('utf-8')
                # Handle basic pointer calls or field access if simple
                calls.append(name)
        
        elif node.type == 'number_literal':
            text = source_bytes[node.start_byte:node.end_byte].decode('utf-8')
            if '.' in text or 'e' in text or 'f' in text:
                # It's a float/double
                try:
                    val = float(text.rstrip('fF'))
                    float_consts.append((text, val))
                except ValueError:
                    pass
        
        for child in node.children:
            walk_body(child)

    walk_body(func_node)
    
    return {
        'calls': calls,
        'float_consts': float_consts,
        'start_line': func_node.start_point[0] + 1,
        'end_line': func_node.end_point[0] + 1
    }

def normalize_call_name(name: str) -> str:
    """Normalize function names for comparison (strip pointer dereferences etc)."""
    # Handle (*func)() -> func
    name = name.replace('(*', '').replace(')', '')
    # Handle &func -> func
    if name.startswith('&'): name = name[1:]
    return name.strip()

def main():
    parser_args = argparse.ArgumentParser(description='Verify C function against binary disassembly.')
    parser_args.add_argument('function', help='Function name (in binary/address)')
    parser_args.add_argument('source', nargs='?', help='Source file path (optional, searches src/ if omitted)')
    parser_args.add_argument('--name', help='Function name in source file (if different from binary name)')
    args = parser_args.parse_args()

    target_func_name = args.name if args.name else args.function

    # 1. Get Assembly Analysis
    # ------------------------
    print(f"Analyzing binary for '{args.function}'...", file=sys.stderr)
    
    # Find address
    addr = disasm.find_function_address(args.function, disasm.BINARY_PATH)
    if addr is None:
        print(f"Error: Function '{args.function}' not found in binary.", file=sys.stderr)
        sys.exit(1)
    
    # Load symbols & mapping
    symbols = disasm.load_dynamic_symbols(disasm.BINARY_PATH)
    gp_mapping = disasm.build_gp_mapping(disasm.BINARY_PATH, symbols)
    
    # Extract and analyze
    # Use auto-detection for size
    disasm_size = disasm.MAX_FUNCTION_SIZE
    raw_asm = disasm.extract_disassembly(disasm.BINARY_PATH, addr, disasm_size)
    end_addr, detection_method = disasm.find_function_end(raw_asm, addr)
    
    actual_size = end_addr - addr if end_addr > addr else disasm.DEFAULT_SIZE
    raw_asm = disasm.extract_disassembly(disasm.BINARY_PATH, addr, actual_size)
    
    _, asm_analysis = disasm.annotate_assembly(raw_asm, gp_mapping)
    
    # Filter ASM calls to just names
    asm_calls = [name for _, name in asm_analysis['calls']]
    asm_floats = [decoded for _, _, decoded in asm_analysis['float_loads']]


    # 2. Get C Source Analysis
    # ------------------------
    source_path = args.source
    if not source_path:
        # Search in src/
        found = False
        for f in Path("src").glob("*.c"):
            # Quick text check first
            if target_func_name in f.read_text():
                # Verify with proper parse
                analysis = get_c_function_analysis(str(f), target_func_name)
                if analysis:
                    source_path = str(f)
                    c_analysis = analysis
                    found = True
                    break
        if not found:
             print(f"Error: Function '{target_func_name}' not found in src/ directory.", file=sys.stderr)
             sys.exit(1)
    else:
        c_analysis = get_c_function_analysis(source_path, target_func_name)
        if not c_analysis:
             print(f"Error: Function '{target_func_name}' not found in {source_path}.", file=sys.stderr)
             sys.exit(1)

    print(f"Comparing binary '{args.function}' against source '{target_func_name}' in {source_path}...", file=sys.stderr)

    # 3. Compare and Report
    # ---------------------
    
    print(f"\nVERIFICATION REPORT: {target_func_name}")
    print("=" * 60)
    
    # CALL COMPARISON
    # ?---------------
    
    print("\n[ Function Calls ]")
    
    # Normalize C calls
    c_calls_norm = [normalize_call_name(c) for c in c_analysis['calls']]
    
    # LCS (Longest Common Subsequence) for alignment would be ideal, but simple set/list diff is a start
    # We'll do a simple sequential check to highlight ordering issues
    
    import difflib
    diff = difflib.SequenceMatcher(None, asm_calls, c_calls_norm)
    
    matches = 0
    mismatches = 0
    
    for tag, i1, i2, j1, j2 in diff.get_opcodes():
        if tag == 'equal':
            for i in range(i1, i2):
                print(f"  OK   : {asm_calls[i]}")
                matches += 1
        elif tag == 'replace':
            for i in range(i1, i2):
                print(f"  MISS : Expected call to '{asm_calls[i]}'")
                mismatches += 1
            for j in range(j1, j2):
                print(f"  EXTRA: Found call to    '{c_calls_norm[j]}'")
        elif tag == 'delete':
            for i in range(i1, i2):
                print(f"  MISS : Expected call to '{asm_calls[i]}'")
                mismatches += 1
        elif tag == 'insert':
            for j in range(j1, j2):
                print(f"  EXTRA: Found call to    '{c_calls_norm[j]}'")
    
    score = 100.0 * matches / (matches + mismatches) if (matches + mismatches) > 0 else 0
    print(f"\n  Call Match Score: {score:.1f}%")

    # FLOAT CONSTANT COMPARISON
    # -------------------------
    print("\n[ Float Constants ]")
    if not asm_floats and not c_analysis['float_consts']:
        print("  (None in either)")
    else:
        # Just list them for manual review as they are hard to align perfectly
        print("  ASSEMBLY (Expected):")
        for f in asm_floats:
            print(f"    {f}")
        
        print("  SOURCE (Found):")
        for txt, val in c_analysis['float_consts']:
            print(f"    {txt} ({val})")

    # VERDICT
    # -------
    print("\n" + "=" * 60)
    if mismatches == 0:
        print("VERDICT: PASS (Structure matches)")
    else:
        print(f"VERDICT: FAIL ({mismatches} call mismatches)")

if __name__ == '__main__':
    main()
