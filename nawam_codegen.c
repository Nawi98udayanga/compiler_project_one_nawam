/* nawam_codegen.c */

/*
 * nawam_codegen.c
 *
 * This file contains the implementation of the main function for the Nawam compiler.
 * It also defines the yyerror function to handle syntax errors.
 *
 * Author: Nawam Udayanga
 * Date: 14/01/2025
 */

#include "nawam.h"

/* ============================= */
/* ========= Semantic Analysis ==== */
/* ============================= */

/* perform_semantic_analysis is defined in nawam_graph.c */

/* ============================= */
/* ======== AST Visualization ===== */
/* ============================= */

/* write_dot_file is defined in nawam_graph.c */

/* ============================= */
/* ======== Code Generation ===== */
/* ============================= */

/* generate_code is defined in nawam_graph.c */

/* ============================= */
/* ========= Error Handling ====== */
/* ============================= */

/* Declare extern functions from nawam_graph.c */
extern void addNawamLexicalError(int line, const char* message);
extern void print_errors();
extern void free_errors();

/* ============================= */
/* ========= Main Function ======= */
/* ============================= */

/* Override yyerror to handle syntax errors */
void yyerror(const char *s) {
    fprintf(stderr, "Syntax Error: %s at line %d\n", s, yylineno);
    addNawamLexicalError(yylineno, s);
}

/* ============================= */
/* ========= Main Function ======= */
/* ============================= */

/* Define global variables as extern (already defined in nawam_graph.c) */
extern ASTNode* ast_root;
extern SymbolTable* symbol_table;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <source_file>\n", argv[0]);
        return EXIT_FAILURE;
    }

    /* Open the source file */
    FILE* file = fopen(argv[1], "r");
    if (!file) {
        perror("Error opening source file");
        return EXIT_FAILURE;
    }

    yyin = file; // yyin is the input file for Flex

    /* Initialize Symbol Table */
    init_symbol_table(&symbol_table);

    /* Parse the input and build the AST */
    printf("=== Lexical Analysis ===\n");
    if (yyparse() == 0) { // Successful parsing
        printf("=== Syntax Analysis: AST ===\n");
        print_ast(ast_root, 0);
        printf("============================\n");

        /* Perform Semantic Analysis */
        printf("=== Semantic Analysis ===\n");
        perform_semantic_analysis(ast_root, symbol_table);
        printf("==========================\n");

        /* Print Symbol Table */
        printf("=== Symbol Table ===\n");
        print_symbol_table(symbol_table);
        printf("====================\n");

        /* Generate Code */
        printf("=== Code Generation ===\n");
        generate_code(ast_root, symbol_table, "output.s");
        printf("=======================\n");

        /* Generate AST Visualization (Optional) */
        write_dot_file(ast_root, "ast.dot");
        printf("AST visualization written to 'ast.dot'\n");

        /* Print Errors if any */
        print_errors();
    } else {
        fprintf(stderr, "Parsing failed due to syntax errors.\n");
    }

    /* Cleanup */
    fclose(file);
    free_ast(ast_root);
    exit_scope(&symbol_table);
    free_errors();

    return EXIT_SUCCESS;
}
