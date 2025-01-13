/* nawam.h */

#ifndef NAWAM_H
#define NAWAM_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ============================= */
/* ======== AST Structures ===== */
/* ============================= */

/* Definition of AST Node */
typedef struct ASTNode {
    char* node_type;              // Type of the node (e.g., "Program", "VarDecl")
    char* value;                  // Value for terminal nodes (e.g., identifiers, numbers)
    int child_count;              // Number of child nodes
    struct ASTNode** children;    // Array of pointers to child nodes
} ASTNode;

/* Function to build an AST node */
ASTNode* build_ast_node(const char* node_type, ASTNode** children, int child_count, char* value);

/* Function to print the AST (for debugging and visualization) */
void print_ast(ASTNode* root, int level);

/* Function to free the AST */
void free_ast(ASTNode* root);

/* =============================== */
/* ===== Symbol Table Structures === */
/* =============================== */

/* Definition of a Symbol */
typedef struct Symbol {
    char* name;                    // Identifier name
    char* type;                    // Data type (e.g., "integer", "float", "void")
    int is_function;               // Flag to indicate if it's a function
    struct Symbol* next;           // Pointer to the next symbol (for chaining)
} Symbol;

/* Definition of Symbol Table */
typedef struct SymbolTable {
    Symbol* head;                  // Pointer to the first symbol in the table
    struct SymbolTable* parent;    // Pointer to the parent symbol table (for nested scopes)
} SymbolTable;

/* Function prototypes for Symbol Table management */
void init_symbol_table(SymbolTable** table);
void enter_scope(SymbolTable** table);
void exit_scope(SymbolTable** table);
int add_symbol(SymbolTable* table, char* name, char* type, int is_function);
Symbol* lookup_symbol(SymbolTable* table, char* name);
void print_symbol_table(SymbolTable* table);

/* =============================== */
/* ======= Semantic Analysis ===== */
/* =============================== */

/* Function prototype for Semantic Analysis */
void perform_semantic_analysis(ASTNode* root, SymbolTable* table);

/* =============================== */
/* ======== Code Generation ======= */
/* =============================== */

/* Function prototype for Code Generation */
void generate_code(ASTNode* root, SymbolTable* table, const char* output_filename);

/* =============================== */
/* ======== AST Visualization ===== */
/* =============================== */

/* Function prototype for AST Visualization */
void write_dot_file(ASTNode* root, const char* filename);

/* =============================== */
/* ======== Error Handling ======== */
/* =============================== */

/* Definition of an Error Node for handling errors */
typedef struct ErrorNode {
    int line;
    char* message;
    struct ErrorNode* next;
} ErrorNode;

/* Global head of the error list */
extern ErrorNode* error_list;

/* Function prototypes for handling errors */
void addNawamLexicalError(int line, const char* message);
void print_errors();
void free_errors();

/* =============================== */
/* ======= Additional Functions === */
/* =============================== */

/* External variables from Flex */
extern int yylineno;
extern FILE *yyin;

/* Global AST root and symbol table */
extern ASTNode* ast_root;
extern SymbolTable* symbol_table;

/* External declarations for Bison functions */
int yyparse(void);
int yylex(void);

#endif /* NAWAM_H */
