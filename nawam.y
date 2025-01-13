%{
#include "nawam.h"
#include "nawam.tab.h" // Bison generated header
#include <stdio.h>
#include <string.h>

extern int yylineno;
extern void yyerror(const char *s); // Declare yyerror as extern
%}

%code requires {
    #include "nawam.h"
}

%error-verbose

%union {
    char* sValue;
    int intValue;
    double floatValue;
    ASTNode* astNode;
}

%token <sValue> ID
%token <intValue> intNumber
%token <floatValue> floatNumber

%token ARROW_OPERATOR EQUAL_OPERATOR NOT_EQUAL_OPERATOR LESS_THAN_OR_EQUAL_OPERATOR GREATER_THAN_OR_EQUAL_OPERATOR
%token LEFT_PAREN RIGHT_PAREN LEFT_BRACE RIGHT_BRACE LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET
%token SEMICOLON COMMA DOT COLON
%token PLUS_OPERATOR MINUS_OPERATOR MULTIPLY_OPERATOR DIVIDE_OPERATOR OR_OPERATOR AND_OPERATOR NOT_OPERATOR
%token ASSIGN_OPERATOR LESS_THAN_OPERATOR GREATER_THAN_OPERATOR
%token IMPL PUBLIC PRIVATE FUNC SELF VOID STRUCT INHERITS VAR LET IF THEN ELSE WHILE READ WRITE RETURN INTEGER FLOAT JAVA

/* Operator Precedence and Associativity */
%left OR_OPERATOR
%left AND_OPERATOR
%left EQUAL_OPERATOR NOT_EQUAL_OPERATOR
%left LESS_THAN_OPERATOR GREATER_THAN_OPERATOR LESS_THAN_OR_EQUAL_OPERATOR GREATER_THAN_OR_EQUAL_OPERATOR
%left PLUS_OPERATOR MINUS_OPERATOR
%left MULTIPLY_OPERATOR DIVIDE_OPERATOR
%right NOT_OPERATOR

/* Non-Terminal Declarations */
%type <astNode> prog structOrImplOrFuncList structOrImplOrFuncListAux structOrImplOrFunc
%type <astNode> structDecl implDef inheritsClause inheritsTail inheritsTailAux memberDeclList memberDeclListAux memberDecl
%type <astNode> visibility funcDecl funcHead fParams fParamList fParamsTail fParamsTailAux returnType type arraySize varDecl
%type <astNode> funcDef funcDefList funcDefListAux funcBody varDeclOrStmtList varDeclOrStmtListAux varDeclOrStmt
%type <astNode> statement statementList statementListAux statBlock assignStat expr relExpr arithExpr arithExprTail arithExprTailAux
%type <astNode> relOp addOp multOp term termTail termTailAux factor sign variable idnest idnestAux indice functionCall aParams aParamsList aParamsListAux

%start prog

%%

/* Grammar Rules with Comprehensive Semantic Actions */

prog:
    structOrImplOrFuncList
    {
        ASTNode* children[1];
        children[0] = $1;
        ast_root = build_ast_node("Prog", children, 1, NULL);
        $$ = ast_root;
    }
    ;

structOrImplOrFuncList:
    /* empty */
    {
        $$ = NULL;
    }
    | structOrImplOrFunc structOrImplOrFuncListAux
    {
        if ($2) {
            ASTNode* children[2];
            children[0] = $1;
            children[1] = $2;
            $$ = build_ast_node("StructOrImplOrFuncList", children, 2, NULL);
        } else {
            $$ = $1;
        }
    }
    ;

structOrImplOrFuncListAux:
    /* empty */
    {
        $$ = NULL;
    }
    | structOrImplOrFunc structOrImplOrFuncListAux
    {
        if ($2) {
            ASTNode* children[2];
            children[0] = $1;
            children[1] = $2;
            $$ = build_ast_node("StructOrImplOrFuncListAux", children, 2, NULL);
        } else {
            $$ = $1;
        }
    }
    ;

structOrImplOrFunc:
    structDecl
    {
        $$ = $1;
    }
    | implDef
    {
        $$ = $1;
    }
    | funcDef
    {
        $$ = $1;
    }
    | varDecl
    {
        $$ = $1;
    }
    | error SEMICOLON    /* Error recovery: skip to next semicolon */
    {
        yyerror("Invalid construct. Skipping to next semicolon.");
        $$ = NULL;
    }
    ;

structDecl:
    STRUCT ID inheritsClause LEFT_BRACE memberDeclList RIGHT_BRACE SEMICOLON
    {
        ASTNode* children[6];
        children[0] = build_ast_node("STRUCT", NULL, 0, "STRUCT");
        children[1] = build_ast_node("ID", NULL, 0, $2);
        children[2] = $3;
        children[3] = build_ast_node("LEFT_BRACE", NULL, 0, "{");
        children[4] = $5;
        children[5] = build_ast_node("RIGHT_BRACE", NULL, 0, "}");
        $$ = build_ast_node("StructDecl", children, 6, ";");
    }
    ;

implDef:
    IMPL ID LEFT_BRACE funcDefList RIGHT_BRACE SEMICOLON
    {
        ASTNode* children[6];
        children[0] = build_ast_node("IMPL", NULL, 0, "IMPL");
        children[1] = build_ast_node("ID", NULL, 0, $2);
        children[2] = build_ast_node("LEFT_BRACE", NULL, 0, "{");
        children[3] = $4;
        children[4] = build_ast_node("RIGHT_BRACE", NULL, 0, "}");
        children[5] = build_ast_node("SEMICOLON", NULL, 0, ";");
        $$ = build_ast_node("ImplDef", children, 6, NULL);
    }
    ;

funcDefList:
    funcDef funcDefListAux
    {
        if ($2) {
            ASTNode* children[2];
            children[0] = $1;
            children[1] = $2;
            $$ = build_ast_node("FuncDefList", children, 2, NULL);
        } else {
            $$ = $1;
        }
    }
    ;

funcDefListAux:
    /* empty */
    {
        $$ = NULL;
    }
    | funcDef funcDefListAux
    {
        if ($2) {
            ASTNode* children[2];
            children[0] = $1;
            children[1] = $2;
            $$ = build_ast_node("FuncDefListAux", children, 2, NULL);
        } else {
            $$ = $1;
        }
    }
    ;

inheritsClause:
    /* empty */
    {
        $$ = NULL;
    }
    | INHERITS ID inheritsTail
    {
        ASTNode* children[3];
        children[0] = build_ast_node("INHERITS", NULL, 0, "INHERITS");
        children[1] = build_ast_node("ID", NULL, 0, $2);
        children[2] = $3;
        $$ = build_ast_node("InheritsClause", children, 3, NULL);
    }
    ;

inheritsTail:
    /* empty */
    {
        $$ = NULL;
    }
    | COMMA ID inheritsTailAux
    {
        ASTNode* children[3];
        children[0] = build_ast_node("COMMA", NULL, 0, ",");
        children[1] = build_ast_node("ID", NULL, 0, $2);
        children[2] = $3;
        $$ = build_ast_node("InheritsTail", children, 3, NULL);
    }
    ;

inheritsTailAux:
    /* empty */
    {
        $$ = NULL;
    }
    | COMMA ID inheritsTailAux
    {
        ASTNode* children[3];
        children[0] = build_ast_node("COMMA", NULL, 0, ",");
        children[1] = build_ast_node("ID", NULL, 0, $2);
        children[2] = $3;
        $$ = build_ast_node("InheritsTailAux", children, 3, NULL);
    }
    ;

memberDeclList:
    /* empty */
    {
        $$ = NULL;
    }
    | memberDecl memberDeclListAux
    {
        if ($2) {
            ASTNode* children[2];
            children[0] = $1;
            children[1] = $2;
            $$ = build_ast_node("MemberDeclList", children, 2, NULL);
        } else {
            $$ = $1;
        }
    }
    ;

memberDeclListAux:
    /* empty */
    {
        $$ = NULL;
    }
    | memberDecl memberDeclListAux
    {
        if ($2) {
            ASTNode* children[2];
            children[0] = $1;
            children[1] = $2;
            $$ = build_ast_node("MemberDeclListAux", children, 2, NULL);
        } else {
            $$ = $1;
        }
    }
    ;

memberDecl:
    visibility funcDecl
    {
        ASTNode* children[2];
        children[0] = $1;
        children[1] = $2;
        $$ = build_ast_node("MemberDecl", children, 2, NULL);
    }
    | visibility varDecl
    {
        ASTNode* children[2];
        children[0] = $1;
        children[1] = $2;
        $$ = build_ast_node("MemberDecl", children, 2, NULL);
    }
    ;

visibility:
    PUBLIC
    {
        $$ = build_ast_node("Visibility", NULL, 0, "PUBLIC");
    }
    | PRIVATE
    {
        $$ = build_ast_node("Visibility", NULL, 0, "PRIVATE");
    }
    ;

funcDecl:
    funcHead SEMICOLON
    {
        ASTNode* children[2];
        children[0] = $1;
        children[1] = build_ast_node("SEMICOLON", NULL, 0, ";");
        $$ = build_ast_node("FuncDecl", children, 2, NULL);
    }
    ;

funcHead:
    FUNC ID LEFT_PAREN fParams RIGHT_PAREN ARROW_OPERATOR returnType
    {
        ASTNode* children[7];
        children[0] = build_ast_node("FUNC", NULL, 0, "FUNC");
        children[1] = build_ast_node("ID", NULL, 0, $2);
        children[2] = build_ast_node("LEFT_PAREN", NULL, 0, "(");
        children[3] = $4;
        children[4] = build_ast_node("RIGHT_PAREN", NULL, 0, ")");
        children[5] = build_ast_node("ARROW_OPERATOR", NULL, 0, "->");
        children[6] = $7;
        $$ = build_ast_node("FuncHead", children, 7, NULL);
    }
    ;

fParams:
    /* empty */
    {
        $$ = NULL;
    }
    | fParamList
    {
        $$ = $1;
    }
    ;

fParamList:
    ID COLON type arraySize fParamsTail
    {
        ASTNode* children[5];
        children[0] = build_ast_node("ID", NULL, 0, $1);
        children[1] = build_ast_node("COLON", NULL, 0, ":");
        children[2] = $3;
        children[3] = $4;
        children[4] = $5;
        $$ = build_ast_node("FParamList", children, 5, NULL);
    }
    ;

fParamsTail:
    /* empty */
    {
        $$ = NULL;
    }
    | COMMA ID COLON type arraySize fParamsTailAux
    {
        ASTNode* children[6];
        children[0] = build_ast_node("COMMA", NULL, 0, ",");
        children[1] = build_ast_node("ID", NULL, 0, $2);
        children[2] = build_ast_node("COLON", NULL, 0, ":");
        children[3] = $4;
        children[4] = $5;
        children[5] = $6;
        $$ = build_ast_node("FParamsTail", children, 6, NULL);
    }
    ;

fParamsTailAux:
    /* empty */
    {
        $$ = NULL;
    }
    | COMMA ID COLON type arraySize fParamsTailAux
    {
        ASTNode* children[6];
        children[0] = build_ast_node("COMMA", NULL, 0, ",");
        children[1] = build_ast_node("ID", NULL, 0, $2);
        children[2] = build_ast_node("COLON", NULL, 0, ":");
        children[3] = $4;
        children[4] = $5;
        children[5] = $6;
        $$ = build_ast_node("FParamsTailAux", children, 6, NULL);
    }
    ;

returnType:
    type
    {
        $$ = $1;
    }
    | VOID
    {
        $$ = build_ast_node("ReturnType", NULL, 0, "VOID");
    }
    ;

type:
    INTEGER
    {
        $$ = build_ast_node("Type", NULL, 0, "INTEGER");
    }
    | FLOAT
    {
        $$ = build_ast_node("Type", NULL, 0, "FLOAT");
    }
    | JAVA
    {
        $$ = build_ast_node("Type", NULL, 0, "JAVA");
    }
    | ID
    {
        $$ = build_ast_node("Type", NULL, 0, $1); // $1 is char* (sValue)
    }
    ;

arraySize:
    LEFT_SQUARE_BRACKET intNumber RIGHT_SQUARE_BRACKET
    {
        ASTNode* children[3];
        char buffer[20];
        sprintf(buffer, "%d", $2); // Convert intValue to string
        children[0] = build_ast_node("LEFT_SQUARE_BRACKET", NULL, 0, "[");
        children[1] = build_ast_node("intNumber", NULL, 0, buffer);
        children[2] = build_ast_node("RIGHT_SQUARE_BRACKET", NULL, 0, "]");
        $$ = build_ast_node("ArraySize", children, 3, NULL);
    }
    | LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET
    {
        ASTNode* children[2];
        children[0] = build_ast_node("LEFT_SQUARE_BRACKET", NULL, 0, "[");
        children[1] = build_ast_node("RIGHT_SQUARE_BRACKET", NULL, 0, "]");
        $$ = build_ast_node("ArraySize", children, 2, NULL);
    }
    | /* empty */
    {
        $$ = NULL;
    }
    ;

varDecl:
    VAR ID COLON type arraySize SEMICOLON
    {
        ASTNode* children[6];
        children[0] = build_ast_node("VAR", NULL, 0, "VAR");
        children[1] = build_ast_node("ID", NULL, 0, $2);
        children[2] = build_ast_node("COLON", NULL, 0, ":");
        children[3] = $4;
        children[4] = $5;
        children[5] = build_ast_node("SEMICOLON", NULL, 0, ";");
        $$ = build_ast_node("VarDecl", children, 6, NULL);
    }
    ;

funcDef:
    funcHead funcBody
    {
        ASTNode* children[2];
        children[0] = $1;
        children[1] = $2;
        $$ = build_ast_node("FuncDef", children, 2, NULL);
    }
    ;

funcBody:
    LEFT_BRACE varDeclOrStmtList RIGHT_BRACE
    {
        ASTNode* children[3];
        children[0] = build_ast_node("LEFT_BRACE", NULL, 0, "{");
        children[1] = $2;
        children[2] = build_ast_node("RIGHT_BRACE", NULL, 0, "}");
        $$ = build_ast_node("FuncBody", children, 3, NULL);
    }
    ;

varDeclOrStmtList:
    /* empty */
    {
        $$ = NULL;
    }
    | varDeclOrStmt varDeclOrStmtListAux
    {
        if ($2) {
            ASTNode* children[2];
            children[0] = $1;
            children[1] = $2;
            $$ = build_ast_node("VarDeclOrStmtList", children, 2, NULL);
        } else {
            $$ = $1;
        }
    }
    ;

varDeclOrStmtListAux:
    /* empty */
    {
        $$ = NULL;
    }
    | varDeclOrStmt varDeclOrStmtListAux
    {
        if ($2) {
            ASTNode* children[2];
            children[0] = $1;
            children[1] = $2;
            $$ = build_ast_node("VarDeclOrStmtListAux", children, 2, NULL);
        } else {
            $$ = $1;
        }
    }
    ;

varDeclOrStmt:
    varDecl
    {
        $$ = $1;
    }
    | statement
    {
        $$ = $1;
    }
    ;

statement:
    assignStat SEMICOLON
    {
        ASTNode* children[2];
        children[0] = $1;
        children[1] = build_ast_node("SEMICOLON", NULL, 0, ";");
        $$ = build_ast_node("AssignStatStmt", children, 2, NULL);
    }
    | IF LEFT_PAREN relExpr RIGHT_PAREN THEN statBlock ELSE statBlock SEMICOLON
    {
        ASTNode* children[9];
        children[0] = build_ast_node("IF", NULL, 0, "IF");
        children[1] = build_ast_node("LEFT_PAREN", NULL, 0, "(");
        children[2] = $3;
        children[3] = build_ast_node("RIGHT_PAREN", NULL, 0, ")");
        children[4] = build_ast_node("THEN", NULL, 0, "THEN");
        children[5] = $6;
        children[6] = build_ast_node("ELSE", NULL, 0, "ELSE");
        children[7] = $8;
        children[8] = build_ast_node("SEMICOLON", NULL, 0, ";");
        $$ = build_ast_node("IfElseStmt", children, 9, NULL);
    }
    | WHILE LEFT_PAREN relExpr RIGHT_PAREN statBlock SEMICOLON
    {
        ASTNode* children[6];
        children[0] = build_ast_node("WHILE", NULL, 0, "WHILE");
        children[1] = build_ast_node("LEFT_PAREN", NULL, 0, "(");
        children[2] = $3;
        children[3] = build_ast_node("RIGHT_PAREN", NULL, 0, ")");
        children[4] = $5;
        children[5] = build_ast_node("SEMICOLON", NULL, 0, ";");
        $$ = build_ast_node("WhileStmt", children, 6, NULL);
    }
    | READ LEFT_PAREN variable RIGHT_PAREN SEMICOLON
    {
        ASTNode* children[5];
        children[0] = build_ast_node("READ", NULL, 0, "READ");
        children[1] = build_ast_node("LEFT_PAREN", NULL, 0, "(");
        children[2] = $3;
        children[3] = build_ast_node("RIGHT_PAREN", NULL, 0, ")");
        children[4] = build_ast_node("SEMICOLON", NULL, 0, ";");
        $$ = build_ast_node("ReadStmt", children, 5, NULL);
    }
    | WRITE LEFT_PAREN expr RIGHT_PAREN SEMICOLON
    {
        ASTNode* children[5];
        children[0] = build_ast_node("WRITE", NULL, 0, "WRITE");
        children[1] = build_ast_node("LEFT_PAREN", NULL, 0, "(");
        children[2] = $3;
        children[3] = build_ast_node("RIGHT_PAREN", NULL, 0, ")");
        children[4] = build_ast_node("SEMICOLON", NULL, 0, ";");
        $$ = build_ast_node("WriteStmt", children, 5, NULL);
    }
    | RETURN LEFT_PAREN expr RIGHT_PAREN SEMICOLON
    {
        ASTNode* children[5];
        children[0] = build_ast_node("RETURN", NULL, 0, "RETURN");
        children[1] = build_ast_node("LEFT_PAREN", NULL, 0, "(");
        children[2] = $3;
        children[3] = build_ast_node("RIGHT_PAREN", NULL, 0, ")");
        children[4] = build_ast_node("SEMICOLON", NULL, 0, ";");
        $$ = build_ast_node("ReturnStmt", children, 5, NULL);
    }
    | RETURN SEMICOLON
    {
        ASTNode* children[2];
        children[0] = build_ast_node("RETURN", NULL, 0, "RETURN");
        children[1] = build_ast_node("SEMICOLON", NULL, 0, ";");
        $$ = build_ast_node("ReturnVoidStmt", children, 2, NULL);
    }
    | functionCall SEMICOLON
    {
        ASTNode* children[2];
        children[0] = $1;
        children[1] = build_ast_node("SEMICOLON", NULL, 0, ";");
        $$ = build_ast_node("FunctionCallStmt", children, 2, NULL);
    }
    ;

assignStat:
    variable ASSIGN_OPERATOR expr
    {
        ASTNode* children[3];
        children[0] = $1;
        children[1] = build_ast_node("ASSIGN_OPERATOR", NULL, 0, "=");
        children[2] = $3;
        $$ = build_ast_node("AssignStat", children, 3, NULL);
    }
    ;

statBlock:
    LEFT_BRACE statementList RIGHT_BRACE
    {
        ASTNode* children[3];
        children[0] = build_ast_node("LEFT_BRACE", NULL, 0, "{");
        children[1] = $2;
        children[2] = build_ast_node("RIGHT_BRACE", NULL, 0, "}");
        $$ = build_ast_node("StatBlock", children, 3, NULL);
    }
    | statement
    {
        ASTNode* children[1];
        children[0] = $1;
        $$ = build_ast_node("StatBlockSingle", children, 1, NULL);
    }
    ;

statementList:
    statement statementListAux
    {
        if ($2) {
            ASTNode* children[2];
            children[0] = $1;
            children[1] = $2;
            $$ = build_ast_node("StatementList", children, 2, NULL);
        } else {
            $$ = $1;
        }
    }
    ;

statementListAux:
    /* empty */
    {
        $$ = NULL;
    }
    | statement statementListAux
    {
        if ($2) {
            ASTNode* children[2];
            children[0] = $1;
            children[1] = $2;
            $$ = build_ast_node("StatementListAux", children, 2, NULL);
        } else {
            $$ = $1;
        }
    }
    ;

expr:
    relExpr
    {
        $$ = $1;
    }
    | arithExpr
    {
        $$ = $1;
    }
    ;

relExpr:
    arithExpr relOp arithExpr
    {
        ASTNode* children[3];
        children[0] = $1;
        children[1] = $2;
        children[2] = $3;
        $$ = build_ast_node("RelExpr", children, 3, NULL);
    }
    ;

arithExpr:
    term arithExprTail
    {
        if ($2) {
            ASTNode* children[2];
            children[0] = $1;
            children[1] = $2;
            $$ = build_ast_node("ArithExpr", children, 2, NULL);
        } else {
            $$ = $1;
        }
    }
    ;

arithExprTail:
    /* empty */
    {
        $$ = NULL;
    }
    | addOp term arithExprTailAux
    {
        ASTNode* children[3];
        children[0] = $1;
        children[1] = $2;
        children[2] = $3;
        $$ = build_ast_node("ArithExprTail", children, 3, NULL);
    }
    ;

arithExprTailAux:
    /* empty */
    {
        $$ = NULL;
    }
    | addOp term arithExprTailAux
    {
        ASTNode* children[3];
        children[0] = $1;
        children[1] = $2;
        children[2] = $3;
        $$ = build_ast_node("ArithExprTailAux", children, 3, NULL);
    }
    ;

term:
    factor termTail
    {
        if ($2) {
            ASTNode* children[2];
            children[0] = $1;
            children[1] = $2;
            $$ = build_ast_node("Term", children, 2, NULL);
        } else {
            $$ = $1;
        }
    }
    ;

termTail:
    /* empty */
    {
        $$ = NULL;
    }
    | multOp factor termTailAux
    {
        ASTNode* children[3];
        children[0] = $1;
        children[1] = $2;
        children[2] = $3;
        $$ = build_ast_node("TermTail", children, 3, NULL);
    }
    ;

termTailAux:
    /* empty */
    {
        $$ = NULL;
    }
    | multOp factor termTailAux
    {
        ASTNode* children[3];
        children[0] = $1;
        children[1] = $2;
        children[2] = $3;
        $$ = build_ast_node("TermTailAux", children, 3, NULL);
    }
    ;

factor:
    variable
    {
        $$ = $1;
    }
    | functionCall
    {
        $$ = $1;
    }
    | intNumber
    {
        char buffer[20];
        sprintf(buffer, "%d", $1);
        $$ = build_ast_node("intNumber", NULL, 0, buffer);
    }
    | floatNumber
    {
        char buffer[20];
        sprintf(buffer, "%f", $1);
        $$ = build_ast_node("floatNumber", NULL, 0, buffer);
    }
    | LEFT_PAREN arithExpr RIGHT_PAREN
    {
        ASTNode* children[3];
        children[0] = build_ast_node("LEFT_PAREN", NULL, 0, "(");
        children[1] = $2;
        children[2] = build_ast_node("RIGHT_PAREN", NULL, 0, ")");
        $$ = build_ast_node("ParenthesizedExpr", children, 3, NULL);
    }
    | NOT_OPERATOR factor
    {
        ASTNode* children[2];
        children[0] = build_ast_node("NOT_OPERATOR", NULL, 0, "NOT");
        children[1] = $2;
        $$ = build_ast_node("NotFactor", children, 2, NULL);
    }
    | sign factor
    {
        ASTNode* children[2];
        children[0] = $1;
        children[1] = $2;
        $$ = build_ast_node("SignedFactor", children, 2, NULL);
    }
    ;

sign:
    PLUS_OPERATOR
    {
        $$ = build_ast_node("PLUS_OPERATOR", NULL, 0, "+");
    }
    | MINUS_OPERATOR
    {
        $$ = build_ast_node("MINUS_OPERATOR", NULL, 0, "-");
    }
    ;

variable:
    ID idnest indice
    {
        ASTNode* children[3];
        children[0] = build_ast_node("ID", NULL, 0, $1);
        children[1] = $2;
        children[2] = $3;
        $$ = build_ast_node("Variable", children, 3, NULL);
    }
    ;

idnest:
    /* empty */
    {
        $$ = NULL;
    }
    | DOT ID idnestAux
    {
        ASTNode* children[3];
        children[0] = build_ast_node("DOT", NULL, 0, ".");
        children[1] = build_ast_node("ID", NULL, 0, $2);
        children[2] = $3;
        $$ = build_ast_node("IdNest", children, 3, NULL);
    }
    ;

idnestAux:
    /* empty */
    {
        $$ = NULL;
    }
    | DOT ID idnestAux
    {
        ASTNode* children[3];
        children[0] = build_ast_node("DOT", NULL, 0, ".");
        children[1] = build_ast_node("ID", NULL, 0, $2);
        children[2] = $3;
        $$ = build_ast_node("IdNestAux", children, 3, NULL);
    }
    ;

indice:
    /* empty */
    {
        $$ = NULL;
    }
    | LEFT_SQUARE_BRACKET expr RIGHT_SQUARE_BRACKET
    {
        ASTNode* children[3];
        children[0] = build_ast_node("LEFT_SQUARE_BRACKET", NULL, 0, "[");
        children[1] = $2;
        children[2] = build_ast_node("RIGHT_SQUARE_BRACKET", NULL, 0, "]");
        $$ = build_ast_node("Indice", children, 3, NULL);
    }
    ;

functionCall:
    ID idnest LEFT_PAREN aParams RIGHT_PAREN
    {
        ASTNode* children[5];
        children[0] = build_ast_node("ID", NULL, 0, $1);
        children[1] = $2;
        children[2] = build_ast_node("LEFT_PAREN", NULL, 0, "(");
        children[3] = $4;
        children[4] = build_ast_node("RIGHT_PAREN", NULL, 0, ")");
        $$ = build_ast_node("FunctionCall", children, 5, NULL);
    }
    ;

aParams:
    /* empty */
    {
        $$ = NULL;
    }
    | aParamsList
    {
        $$ = $1;
    }
    ;

aParamsList:
    expr aParamsListAux
    {
        if ($2) {
            ASTNode* children[2];
            children[0] = $1;
            children[1] = $2;
            $$ = build_ast_node("AParamsList", children, 2, NULL);
        } else {
            $$ = $1;
        }
    }
    ;

aParamsListAux:
    /* empty */
    {
        $$ = NULL;
    }
    | COMMA expr aParamsListAux
    {
        if ($3) {
            ASTNode* children[3];
            children[0] = build_ast_node("COMMA", NULL, 0, ",");
            children[1] = $2;
            children[2] = $3;
            $$ = build_ast_node("AParamsListAux", children, 3, NULL);
        } else {
            ASTNode* children[2];
            children[0] = build_ast_node("COMMA", NULL, 0, ",");
            children[1] = $2;
            $$ = build_ast_node("AParamsListAux", children, 2, NULL);
        }
    }
    ;

relOp:
    EQUAL_OPERATOR
    {
        $$ = build_ast_node("EQUAL_OPERATOR", NULL, 0, "==");
    }
    | NOT_EQUAL_OPERATOR
    {
        $$ = build_ast_node("NOT_EQUAL_OPERATOR", NULL, 0, "<>");
    }
    | LESS_THAN_OPERATOR
    {
        $$ = build_ast_node("LESS_THAN_OPERATOR", NULL, 0, "<");
    }
    | GREATER_THAN_OPERATOR
    {
        $$ = build_ast_node("GREATER_THAN_OPERATOR", NULL, 0, ">");
    }
    | LESS_THAN_OR_EQUAL_OPERATOR
    {
        $$ = build_ast_node("LESS_THAN_OR_EQUAL_OPERATOR", NULL, 0, "<=");
    }
    | GREATER_THAN_OR_EQUAL_OPERATOR
    {
        $$ = build_ast_node("GREATER_THAN_OR_EQUAL_OPERATOR", NULL, 0, ">=");
    }
    ;

addOp:
    PLUS_OPERATOR
    {
        $$ = build_ast_node("PLUS_OPERATOR", NULL, 0, "+");
    }
    | MINUS_OPERATOR
    {
        $$ = build_ast_node("MINUS_OPERATOR", NULL, 0, "-");
    }
    | OR_OPERATOR
    {
        $$ = build_ast_node("OR_OPERATOR", NULL, 0, "OR");
    }
    ;

multOp:
    MULTIPLY_OPERATOR
    {
        $$ = build_ast_node("MULTIPLY_OPERATOR", NULL, 0, "*");
    }
    | DIVIDE_OPERATOR
    {
        $$ = build_ast_node("DIVIDE_OPERATOR", NULL, 0, "/");
    }
    | AND_OPERATOR
    {
        $$ = build_ast_node("AND_OPERATOR", NULL, 0, "AND");
    }
    ;

%%
