#!/usr/bin/env python3
"""
Fix Widget type issues in FSN source files using tree-sitter.
Changes undefined4/int variables to Widget when they're used with Xt/Xm functions.
"""

import sys
import re
from pathlib import Path
import tree_sitter_c as tsc
from tree_sitter import Language, Parser

C_LANGUAGE = Language(tsc.language())
parser = Parser(C_LANGUAGE)

# Functions that take Widget as first arg
WIDGET_FUNCTIONS = {
    'XtAddCallback', 'XtRemoveCallback', 'XtManageChild', 'XtUnmanageChild',
    'XtSetValues', 'XtGetValues', 'XtRealizeWidget', 'XtDestroyWidget',
    'XtPopup', 'XtPopdown', 'XtSetSensitive', 'XtWindow', 'XtParent',
    'XtDisplay', 'XtScreen', 'XtName', 'XtClass',
    'XmCreatePanedWindow', 'XmCreateRowColumn', 'XmCreateLabel',
    'XmCreatePushButton', 'XmCreateToggleButton', 'XmCreateScale',
    'XmCreateScrolledList', 'XmCreateTextField', 'XmCreateForm',
    'XmCreateFrame', 'XmCreateSeparator', 'XmCreateMenuBar',
    'XmCreatePulldownMenu', 'XmCreateCascadeButton', 'XmCreateOptionMenu',
    'install_help_callback',
}

# Functions that return Widget
WIDGET_CREATORS = {
    'XtCreatePopupShell', 'XtCreateWidget', 'XtCreateManagedWidget',
    'XmCreatePanedWindow', 'XmCreateRowColumn', 'XmCreateLabel',
    'XmCreatePushButton', 'XmCreateToggleButton', 'XmCreateScale',
    'XmCreateScrolledList', 'XmCreateTextField', 'XmCreateForm',
    'XmCreateFrame', 'XmCreateSeparator', 'XmCreateMenuBar',
    'XmCreatePulldownMenu', 'XmCreateCascadeButton', 'XmCreateOptionMenu',
    'XmCreateScrolledWindow', 'XmCreateDrawingArea', 'XmCreateFileSelectionDialog',
    'XmCreateBulletinBoard', 'XmCreateRadioBox',
}


def parse_file(filepath: str):
    with open(filepath, 'rb') as f:
        source = f.read()
    tree = parser.parse(source)
    return source, tree


def find_widget_variables(source: bytes, tree) -> set:
    """Find variable names used as Widgets."""
    widget_vars = set()

    def get_text(node):
        return source[node.start_byte:node.end_byte].decode('utf-8', errors='replace')

    def walk(node):
        # Check call expressions
        if node.type == 'call_expression':
            func_name = None
            args = []

            for child in node.children:
                if child.type == 'identifier':
                    func_name = get_text(child)
                elif child.type == 'argument_list':
                    for arg in child.children:
                        if arg.type == 'identifier':
                            args.append(get_text(arg))

            # If function takes Widget as arg 1, mark that variable
            if func_name in WIDGET_FUNCTIONS and args:
                widget_vars.add(args[0])

        # Check assignments from Widget creators
        if node.type == 'assignment_expression':
            lhs = None
            rhs = None
            for child in node.children:
                if child.type == 'identifier' and lhs is None:
                    lhs = get_text(child)
                elif child.type == 'call_expression':
                    for c in child.children:
                        if c.type == 'identifier':
                            rhs = get_text(c)
                            break

            if lhs and rhs in WIDGET_CREATORS:
                widget_vars.add(lhs)

        for child in node.children:
            walk(child)

    walk(tree.root_node)
    return widget_vars


def fix_declarations(filepath: str, widget_vars: set) -> str:
    """Fix undefined4/int declarations for Widget variables."""
    with open(filepath, 'r') as f:
        content = f.read()

    lines = content.split('\n')
    modified = False

    for i, line in enumerate(lines):
        # Match: undefined4 varname; or int varname = ...;
        for var in widget_vars:
            # Pattern: "undefined4 var" or "undefined4 var," or "undefined4 var;"
            patterns = [
                (rf'\bundefined4\s+{re.escape(var)}\b', f'Widget {var}'),
                (rf'\bint\s+{re.escape(var)}\s*=\s*0\s*;', f'Widget {var} = NULL;'),
                (rf'\bint\s+{re.escape(var)}\s*;', f'Widget {var};'),
            ]
            for pattern, replacement in patterns:
                if re.search(pattern, line):
                    new_line = re.sub(pattern, replacement, line)
                    if new_line != line:
                        lines[i] = new_line
                        modified = True
                        print(f"  {filepath}:{i+1}: {var} -> Widget")
                        break

    return '\n'.join(lines) if modified else None


def process_file(filepath: str):
    """Process a single file."""
    print(f"Processing {filepath}...")
    source, tree = parse_file(filepath)
    widget_vars = find_widget_variables(source, tree)

    if widget_vars:
        print(f"  Found Widget variables: {', '.join(sorted(widget_vars))}")
        new_content = fix_declarations(filepath, widget_vars)
        if new_content:
            with open(filepath, 'w') as f:
                f.write(new_content)
            return True
    return False


def main():
    src_dir = Path(__file__).parent.parent / 'src'

    # Process files with most Widget errors first
    priority_files = [
        'preferences.c', 'main_entry.c', 'colormap.c', 'context_funcs.c',
        'messaging.c', 'zoom.c', 'sgi_utils.c', 'highlight.c', 'warp.c',
        'delete.c', 'scan.c', 'persistence.c', 'landscape.c', 'edit.c', 'dump.c'
    ]

    modified_count = 0
    for fname in priority_files:
        fpath = src_dir / fname
        if fpath.exists():
            if process_file(str(fpath)):
                modified_count += 1

    print(f"\nModified {modified_count} files")


if __name__ == '__main__':
    main()
