
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* "%code requires" blocks.  */

/* Line 1676 of yacc.c  */
#line 11 "nawam.y"

    #include "nawam.h"



/* Line 1676 of yacc.c  */
#line 46 "nawam.tab.h"

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     intNumber = 259,
     floatNumber = 260,
     ARROW_OPERATOR = 261,
     EQUAL_OPERATOR = 262,
     NOT_EQUAL_OPERATOR = 263,
     LESS_THAN_OR_EQUAL_OPERATOR = 264,
     GREATER_THAN_OR_EQUAL_OPERATOR = 265,
     LEFT_PAREN = 266,
     RIGHT_PAREN = 267,
     LEFT_BRACE = 268,
     RIGHT_BRACE = 269,
     LEFT_SQUARE_BRACKET = 270,
     RIGHT_SQUARE_BRACKET = 271,
     SEMICOLON = 272,
     COMMA = 273,
     DOT = 274,
     COLON = 275,
     PLUS_OPERATOR = 276,
     MINUS_OPERATOR = 277,
     MULTIPLY_OPERATOR = 278,
     DIVIDE_OPERATOR = 279,
     OR_OPERATOR = 280,
     AND_OPERATOR = 281,
     NOT_OPERATOR = 282,
     ASSIGN_OPERATOR = 283,
     LESS_THAN_OPERATOR = 284,
     GREATER_THAN_OPERATOR = 285,
     IMPL = 286,
     PUBLIC = 287,
     PRIVATE = 288,
     FUNC = 289,
     SELF = 290,
     VOID = 291,
     STRUCT = 292,
     INHERITS = 293,
     VAR = 294,
     LET = 295,
     IF = 296,
     THEN = 297,
     ELSE = 298,
     WHILE = 299,
     READ = 300,
     WRITE = 301,
     RETURN = 302,
     INTEGER = 303,
     FLOAT = 304,
     JAVA = 305
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 17 "nawam.y"

    char* sValue;
    int intValue;
    double floatValue;
    ASTNode* astNode;



/* Line 1676 of yacc.c  */
#line 122 "nawam.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


