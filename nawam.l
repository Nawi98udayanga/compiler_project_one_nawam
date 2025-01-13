%{
#include "nawam.h"
#include "nawam.tab.h" // Bison generated header
#include <stdio.h>
#include <string.h>

extern int yylineno;
extern void yyerror(const char *s); // Declare yyerror as extern
%}

%option noyywrap
%option yylineno

LETTER       [a-zA-Z]
DIGIT        [0-9]
ALPHANUM     ({LETTER}|{DIGIT}|_)
ID           {LETTER}{ALPHANUM}*
NONZERO      [1-9]
INTEGER_NUMBER      {NONZERO}{DIGIT}*|0
FRACTION     \.({DIGIT}*{NONZERO}|0)
EXPONENT     [eE][+-]?{INTEGER_NUMBER}
FLOAT_NUMBER ({INTEGER_NUMBER}{FRACTION}?|{INTEGER_NUMBER}?{FRACTION}){EXPONENT}*

%%

"->"                    { printf("[Line %d] Token: ARROW_OPERATOR, Lexeme: '%s'\n", yylineno, yytext); return ARROW_OPERATOR; }
"=="                    { printf("[Line %d] Token: EQUAL_OPERATOR, Lexeme: '%s'\n", yylineno, yytext); return EQUAL_OPERATOR; }
"<>"                    { printf("[Line %d] Token: NOT_EQUAL_OPERATOR, Lexeme: '%s'\n", yylineno, yytext); return NOT_EQUAL_OPERATOR; }
"<="                    { printf("[Line %d] Token: LESS_THAN_OR_EQUAL_OPERATOR, Lexeme: '%s'\n", yylineno, yytext); return LESS_THAN_OR_EQUAL_OPERATOR; }
">="                    { printf("[Line %d] Token: GREATER_THAN_OR_EQUAL_OPERATOR, Lexeme: '%s'\n", yylineno, yytext); return GREATER_THAN_OR_EQUAL_OPERATOR; }
"("                     { printf("[Line %d] Token: LEFT_PAREN, Lexeme: '%s'\n", yylineno, yytext); return LEFT_PAREN; }
")"                     { printf("[Line %d] Token: RIGHT_PAREN, Lexeme: '%s'\n", yylineno, yytext); return RIGHT_PAREN; }
"{"                     { printf("[Line %d] Token: LEFT_BRACE, Lexeme: '%s'\n", yylineno, yytext); return LEFT_BRACE; }
"}"                     { printf("[Line %d] Token: RIGHT_BRACE, Lexeme: '%s'\n", yylineno, yytext); return RIGHT_BRACE; }
"["                     { printf("[Line %d] Token: LEFT_SQUARE_BRACKET, Lexeme: '%s'\n", yylineno, yytext); return LEFT_SQUARE_BRACKET; }
"]"                     { printf("[Line %d] Token: RIGHT_SQUARE_BRACKET, Lexeme: '%s'\n", yylineno, yytext); return RIGHT_SQUARE_BRACKET; }
";"                     { printf("[Line %d] Token: SEMICOLON, Lexeme: '%s'\n", yylineno, yytext); return SEMICOLON; }
","                     { printf("[Line %d] Token: COMMA, Lexeme: '%s'\n", yylineno, yytext); return COMMA; }
"."                     { printf("[Line %d] Token: DOT, Lexeme: '%s'\n", yylineno, yytext); return DOT; }
":"                     { printf("[Line %d] Token: COLON, Lexeme: '%s'\n", yylineno, yytext); return COLON; }
"+"                     { printf("[Line %d] Token: PLUS_OPERATOR, Lexeme: '%s'\n", yylineno, yytext); return PLUS_OPERATOR; }
"-"                     { printf("[Line %d] Token: MINUS_OPERATOR, Lexeme: '%s'\n", yylineno, yytext); return MINUS_OPERATOR; }
"*"                     { printf("[Line %d] Token: MULTIPLY_OPERATOR, Lexeme: '%s'\n", yylineno, yytext); return MULTIPLY_OPERATOR; }
"/"                     { printf("[Line %d] Token: DIVIDE_OPERATOR, Lexeme: '%s'\n", yylineno, yytext); return DIVIDE_OPERATOR; }
"or"                    { printf("[Line %d] Token: OR_OPERATOR, Lexeme: '%s'\n", yylineno, yytext); return OR_OPERATOR; }
"and"                   { printf("[Line %d] Token: AND_OPERATOR, Lexeme: '%s'\n", yylineno, yytext); return AND_OPERATOR; }
"not"                   { printf("[Line %d] Token: NOT_OPERATOR, Lexeme: '%s'\n", yylineno, yytext); return NOT_OPERATOR; }
"="                     { printf("[Line %d] Token: ASSIGN_OPERATOR, Lexeme: '%s'\n", yylineno, yytext); return ASSIGN_OPERATOR; }
"<"                     { printf("[Line %d] Token: LESS_THAN_OPERATOR, Lexeme: '%s'\n", yylineno, yytext); return LESS_THAN_OPERATOR; }
">"                     { printf("[Line %d] Token: GREATER_THAN_OPERATOR, Lexeme: '%s'\n", yylineno, yytext); return GREATER_THAN_OPERATOR; }

"impl"                  { printf("[Line %d] Token: IMPL, Lexeme: '%s'\n", yylineno, yytext); return IMPL; }
"public"                { printf("[Line %d] Token: PUBLIC, Lexeme: '%s'\n", yylineno, yytext); return PUBLIC; }
"private"               { printf("[Line %d] Token: PRIVATE, Lexeme: '%s'\n", yylineno, yytext); return PRIVATE; }
"func"                  { printf("[Line %d] Token: FUNC, Lexeme: '%s'\n", yylineno, yytext); return FUNC; }
"self"                  { printf("[Line %d] Token: SELF, Lexeme: '%s'\n", yylineno, yytext); return SELF; }
"void"                  { printf("[Line %d] Token: VOID, Lexeme: '%s'\n", yylineno, yytext); return VOID; }
"struct"                { printf("[Line %d] Token: STRUCT, Lexeme: '%s'\n", yylineno, yytext); return STRUCT; }
"inherits"              { printf("[Line %d] Token: INHERITS, Lexeme: '%s'\n", yylineno, yytext); return INHERITS; }
"var"                   { printf("[Line %d] Token: VAR, Lexeme: '%s'\n", yylineno, yytext); return VAR; }
"let"                   { printf("[Line %d] Token: LET, Lexeme: '%s'\n", yylineno, yytext); return LET; }
"if"                    { printf("[Line %d] Token: IF, Lexeme: '%s'\n", yylineno, yytext); return IF; }
"then"                  { printf("[Line %d] Token: THEN, Lexeme: '%s'\n", yylineno, yytext); return THEN; }
"else"                  { printf("[Line %d] Token: ELSE, Lexeme: '%s'\n", yylineno, yytext); return ELSE; }
"while"                 { printf("[Line %d] Token: WHILE, Lexeme: '%s'\n", yylineno, yytext); return WHILE; }
"read"                  { printf("[Line %d] Token: READ, Lexeme: '%s'\n", yylineno, yytext); return READ; }
"write"                 { printf("[Line %d] Token: WRITE, Lexeme: '%s'\n", yylineno, yytext); return WRITE; }
"return"                { printf("[Line %d] Token: RETURN, Lexeme: '%s'\n", yylineno, yytext); return RETURN; }
"integer"               { printf("[Line %d] Token: INTEGER, Lexeme: '%s'\n", yylineno, yytext); return INTEGER; }
"float"                 { printf("[Line %d] Token: FLOAT, Lexeme: '%s'\n", yylineno, yytext); return FLOAT; }
"int"                   { printf("[Line %d] Token: INTEGER, Lexeme: '%s'\n", yylineno, yytext); return INTEGER; }

{INTEGER_NUMBER}          {
    printf("[Line %d] Token: intNumber, Lexeme: '%s'\n", yylineno, yytext);
    yylval.intValue = atoi(yytext);
    return intNumber;
}

{FLOAT_NUMBER}            {
    printf("[Line %d] Token: floatNumber, Lexeme: '%s'\n", yylineno, yytext);
    yylval.floatValue = atof(yytext);
    return floatNumber;
}

{ID}                      {
    printf("[Line %d] Token: ID, Lexeme: '%s'\n", yylineno, yytext);
    yylval.sValue = strdup(yytext);
    return ID;
}

[ \t\r\n]+          ; // Ignore whitespace
"//".*               ; // Ignore single-line comments
"/*"([^*]|\*+[^*/])*\*+ "/" ; // Ignore multi-line comments

.                         { printf("[Line %d] Unknown character: '%s'\n", yylineno, yytext); yyerror("Unknown character"); }

%%

