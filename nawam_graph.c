/* nawam_graph.c */

/*
 * nawam_graph.c
 *
 * This file contains the implementation of AST construction, symbol table management,
 * semantic analysis, AST visualization, code generation, and error handling for the Nawam compiler.
 *
 * Author: Nawam Udayanga
 * Date: 14/01/2025
 */

#include "nawam.h"

/* Define the error list */
ErrorNode* error_list = NULL;

/* Define the global AST root and symbol table */
ASTNode* ast_root = NULL;
SymbolTable* symbol_table = NULL;

/* ============================= */
/* ======= Symbol Table ======== */
/* ============================= */

/* Initialize the Symbol Table */
void init_symbol_table(SymbolTable** table) {
    *table = (SymbolTable*)malloc(sizeof(SymbolTable));
    if (!*table) {
        fprintf(stderr, "Memory allocation failed for SymbolTable\n");
        exit(EXIT_FAILURE);
    }
    (*table)->head = NULL;
    (*table)->parent = NULL;
}

/* Enter a new scope */
void enter_scope(SymbolTable** table) {
    SymbolTable* new_table = (SymbolTable*)malloc(sizeof(SymbolTable));
    if (!new_table) {
        fprintf(stderr, "Memory allocation failed for new SymbolTable\n");
        exit(EXIT_FAILURE);
    }
    new_table->head = NULL;
    new_table->parent = *table;
    *table = new_table;
}

/* Exit the current scope */
void exit_scope(SymbolTable** table) {
    if (*table == NULL) return;
    SymbolTable* parent = (*table)->parent;
    /* Free symbols in the current table */
    Symbol* current = (*table)->head;
    while (current) {
        Symbol* temp = current;
        current = current->next;
        free(temp->name);
        free(temp->type);
        free(temp);
    }
    free(*table);
    *table = parent;
}

/* Add a symbol to the Symbol Table */
int add_symbol(SymbolTable* table, char* name, char* type, int is_function) {
    /* Check for duplicate in the current scope */
    Symbol* existing = table->head;
    while (existing) {
        if (strcmp(existing->name, name) == 0) {
            fprintf(stderr, "Semantic Error: Symbol '%s' already declared in the current scope.\n", name);
            addNawamLexicalError(yylineno, "Duplicate symbol declaration");
            return 0; // Failure
        }
        existing = existing->next;
    }

    /* Add the new symbol */
    Symbol* new_symbol = (Symbol*)malloc(sizeof(Symbol));
    if (!new_symbol) {
        fprintf(stderr, "Memory allocation failed for Symbol\n");
        exit(EXIT_FAILURE);
    }
    new_symbol->name = strdup(name);
    new_symbol->type = strdup(type);
    new_symbol->is_function = is_function;
    new_symbol->next = table->head;
    table->head = new_symbol;
    return 1; // Success
}

/* Lookup a symbol in the Symbol Table (searches parent scopes) */
Symbol* lookup_symbol(SymbolTable* table, char* name) {
    SymbolTable* current_table = table;
    while (current_table) {
        Symbol* current_symbol = current_table->head;
        while (current_symbol) {
            if (strcmp(current_symbol->name, name) == 0) {
                return current_symbol;
            }
            current_symbol = current_symbol->next;
        }
        current_table = current_table->parent;
    }
    return NULL; // Not found
}

/* Print the Symbol Table */
void print_symbol_table(SymbolTable* table) {
    SymbolTable* current_table = table;
    int scope_level = 0;
    while (current_table) {
        printf("Scope Level %d:\n", scope_level++);
        Symbol* current_symbol = current_table->head;
        while (current_symbol) {
            printf("  Name: %s, Type: %s, ", current_symbol->name, current_symbol->type);
            if (current_symbol->is_function)
                printf("Kind: Function\n");
            else
                printf("Kind: Variable\n");
            current_symbol = current_symbol->next;
        }
        current_table = current_table->parent;
    }
}

/* ============================= */
/* ========= AST ================ */
/* ============================= */

/* Function to build an AST node */
ASTNode* build_ast_node(const char* node_type, ASTNode** children, int child_count, char* value) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    if (!node) {
        fprintf(stderr, "Memory allocation failed for ASTNode\n");
        exit(EXIT_FAILURE);
    }
    node->node_type = strdup(node_type);
    node->value = value ? strdup(value) : NULL;
    node->child_count = child_count;
    if (child_count > 0) {
        node->children = (ASTNode**)malloc(sizeof(ASTNode*) * child_count);
        if (!node->children) {
            fprintf(stderr, "Memory allocation failed for ASTNode children\n");
            exit(EXIT_FAILURE);
        }
        for(int i = 0; i < child_count; i++) {
            node->children[i] = children[i];
        }
    } else {
        node->children = NULL;
    }
    return node;
}

/* Function to print the AST (for debugging and visualization) */
void print_ast(ASTNode* root, int level) {
    if (root == NULL) return;
    for(int i = 0; i < level; i++) printf("  ");
    if (root->value) {
        printf("%s: %s\n", root->node_type, root->value);
    } else {
        printf("%s\n", root->node_type);
    }
    for(int i = 0; i < root->child_count; i++) {
        print_ast(root->children[i], level + 1);
    }
}

/* Function to free the AST */
void free_ast(ASTNode* root) {
    if (root == NULL) return;
    for(int i = 0; i < root->child_count; i++) {
        free_ast(root->children[i]);
    }
    free(root->node_type);
    if (root->value) free(root->value);
    if (root->children) free(root->children);
    free(root);
}

/* ============================= */
/* ======= Semantic Analysis ==== */
/* ============================= */

/* Function to perform semantic analysis on the AST */
void perform_semantic_analysis(ASTNode* root, SymbolTable* table) {
    if (root == NULL) return;

    /* Example Semantic Analysis Implementation */
    /* This is a simple traversal and handling of variable and function declarations */
    /* Expand this function based on your language's semantics */

    if (strcmp(root->node_type, "VarDecl") == 0) {
        // Handle Variable Declaration
        char* var_name = root->children[1]->value;
        char* var_type = root->children[3]->value;
        if (!add_symbol(table, var_name, var_type, 0)) {
            // Error already reported in add_symbol
        }
    }
    else if (strcmp(root->node_type, "FuncDef") == 0) {
        // Handle Function Definition
        ASTNode* func_head = root->children[0];
        char* func_name = func_head->children[1]->value; // FuncHead -> ID
        char* return_type = (func_head->children[6]) ? func_head->children[6]->value : "void";
        if (!add_symbol(table, func_name, return_type, 1)) {
            // Error already reported in add_symbol
        }

        /* Enter function scope */
        enter_scope(&table);

        /* Handle function parameters */
        ASTNode* fparams = func_head->children[3];
        if (fparams) {
            // Traverse FParamList and add symbols
            // Implement parameter handling based on your grammar
            // Example:
            // Assuming FParamList has children: ID, COLON, Type, ArraySize, etc.
            // Implement as needed
            // For simplicity, we'll assume FParamList has one parameter
            // Expand this to handle multiple parameters
            if (strcmp(fparams->node_type, "FParamList") == 0 && fparams->child_count >= 1) {
                ASTNode* param_id = fparams->children[0];
                ASTNode* param_type = fparams->children[2];
                if (!add_symbol(table, param_id->value, param_type->value, 0)) {
                    // Error already reported in add_symbol
                }
            }
            // Handle additional parameters if present
        }

        /* Traverse function body */
        ASTNode* func_body = root->children[1];
        perform_semantic_analysis(func_body, table);

        /* Exit function scope */
        exit_scope(&table);
    }
    else if (strcmp(root->node_type, "AssignStat") == 0) {
        // Handle Assignment Statement
        ASTNode* variable_node = root->children[0];
        char* var_name = variable_node->children[0]->value;
        Symbol* symbol = lookup_symbol(table, var_name);
        if (!symbol) {
            fprintf(stderr, "Semantic Error: Undeclared variable '%s' at assignment.\n", var_name);
            addNawamLexicalError(yylineno, "Undeclared variable in assignment");
        }
        // Further type checking can be implemented here
    }
    else if (strcmp(root->node_type, "ReturnStmt") == 0) {
        // Handle Return Statement
        // Implement return type checking based on function's return type
    }
    else {
        /* Recursively traverse child nodes */
        for(int i = 0; i < root->child_count; i++) {
            perform_semantic_analysis(root->children[i], table);
        }
    }
}

/* ============================= */
/* ======== AST Visualization ===== */
/* ============================= */

/* Function to generate DOT representation of the AST */
void generate_dot(ASTNode* root, FILE* fp, int* node_id) {
    if (root == NULL) return;

    int current_id = (*node_id)++;
    if (root->value) {
        fprintf(fp, "    node%d [label=\"%s: %s\"];\n", current_id, root->node_type, root->value);
    } else {
        fprintf(fp, "    node%d [label=\"%s\"];\n", current_id, root->node_type);
    }

    for(int i = 0; i < root->child_count; i++) {
        int child_id = *node_id;
        generate_dot(root->children[i], fp, node_id);
        fprintf(fp, "    node%d -> node%d;\n", current_id, child_id);
    }
}

/* Function to write the DOT file for AST visualization */
void write_dot_file(ASTNode* root, const char* filename) {
    if (root == NULL) return;

    FILE* fp = fopen(filename, "w");
    if (!fp) {
        perror("Error creating DOT file");
        return;
    }

    fprintf(fp, "digraph AST {\n");
    fprintf(fp, "    node [shape=box];\n");
    int node_id = 0;
    generate_dot(root, fp, &node_id);
    fprintf(fp, "}\n");

    fclose(fp);
    printf("AST visualization DOT file '%s' generated.\n", filename);
}

/* ============================= */
/* ======== Code Generation ===== */
/* ============================= */

/* Recursive helper function for code generation */
void generate_code_recursive(ASTNode* node, FILE* fp, SymbolTable* table) {
    if (node == NULL) return;

    if (strcmp(node->node_type, "Prog") == 0) {
        // Handle Program
        for(int i = 0; i < node->child_count; i++) {
            generate_code_recursive(node->children[i], fp, table);
        }
    }
    else if (strcmp(node->node_type, "VarDecl") == 0) {
        // Handle Variable Declaration
        char* var_name = node->children[1]->value;
        char* var_type = node->children[3]->value;
        fprintf(fp, "%s: .data 0\n", var_name); // Initialize to 0
    }
    else if (strcmp(node->node_type, "FuncDef") == 0) {
        // Handle Function Definition
        ASTNode* func_head = node->children[0];
        ASTNode* func_body = node->children[1];
        char* func_name = func_head->children[1]->value;
        fprintf(fp, "\n%s:\n", func_name);
        generate_code_recursive(func_body, fp, table);
    }
    else if (strcmp(node->node_type, "AssignStatStmt") == 0) {
        // Handle Assignment Statement
        ASTNode* assign_stat = node->children[0];
        ASTNode* variable = assign_stat->children[0];
        ASTNode* expr = assign_stat->children[2];
        char* var_name = variable->children[0]->value;

        if (strcmp(expr->node_type, "ArithExpr") == 0) {
            ASTNode* term = expr->children[0];
            ASTNode* int_num = term->children[0];
            if (strcmp(int_num->node_type, "intNumber") == 0) {
                int value = atoi(int_num->value);
                fprintf(fp, "    mov [%s], %d\n", var_name, value);
            }
            else if (strcmp(int_num->node_type, "floatNumber") == 0) {
                // Handle float numbers if needed
            }
        }
    }
    else if (strcmp(node->node_type, "ReturnVoidStmt") == 0) {
        // Handle return statement with no value
        fprintf(fp, "    ret\n");
    }
    else {
        // Recursively traverse child nodes
        for(int i = 0; i < node->child_count; i++) {
            generate_code_recursive(node->children[i], fp, table);
        }
    }
}

/* Function to generate code from the AST */
void generate_code(ASTNode* root, SymbolTable* table, const char* output_filename) {
    if (root == NULL) return;

    FILE* fp = fopen(output_filename, "w");
    if (!fp) {
        perror("Error creating output file");
        return;
    }

    fprintf(fp, "; Generated code by Nawam compiler\n");
    fprintf(fp, "; Code for variable declarations\n");

    generate_code_recursive(root, fp, table);

    fclose(fp);
    printf("Code generation completed. Output file: '%s'\n", output_filename);
}

/* ============================= */
/* ======== Error Handling ======== */
/* ============================= */

/* Function to add a lexical or syntax error */
void addNawamLexicalError(int line, const char* message) {
    ErrorNode* new_error = (ErrorNode*)malloc(sizeof(ErrorNode));
    if (!new_error) {
        fprintf(stderr, "Memory allocation failed for ErrorNode\n");
        exit(EXIT_FAILURE);
    }
    new_error->line = line;
    new_error->message = strdup(message);
    new_error->next = error_list;
    error_list = new_error;
}

/* Function to print all errors */
void print_errors() {
    if (error_list == NULL) {
        printf("No lexical or syntax errors found.\n");
        return;
    }

    printf("=== Lexical and Syntax Errors ===\n");
    ErrorNode* current = error_list;
    while (current) {
        printf("Error at line %d: %s\n", current->line, current->message);
        current = current->next;
    }
    printf("==================================\n");
}

/* Function to free all errors */
void free_errors() {
    while (error_list) {
        ErrorNode* temp = error_list;
        error_list = error_list->next;
        free(temp->message);
        free(temp);
    }
}
