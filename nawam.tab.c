
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "nawam.y"

#include "nawam.h"
#include "nawam.tab.h" // Bison generated header
#include <stdio.h>
#include <string.h>

extern int yylineno;
extern void yyerror(const char *s); // Declare yyerror as extern


/* Line 189 of yacc.c  */
#line 84 "nawam.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

/* "%code requires" blocks.  */

/* Line 209 of yacc.c  */
#line 11 "nawam.y"

    #include "nawam.h"



/* Line 209 of yacc.c  */
#line 114 "nawam.tab.c"

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

/* Line 214 of yacc.c  */
#line 17 "nawam.y"

    char* sValue;
    int intValue;
    double floatValue;
    ASTNode* astNode;



/* Line 214 of yacc.c  */
#line 190 "nawam.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 202 "nawam.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   213

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  57
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNRULES -- Number of states.  */
#define YYNSTATES  218

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    10,    13,    15,    17,
      19,    21,    24,    32,    39,    42,    43,    46,    47,    51,
      52,    56,    57,    61,    62,    65,    66,    69,    72,    75,
      77,    79,    82,    90,    91,    93,    99,   100,   107,   108,
     115,   117,   119,   121,   123,   125,   127,   131,   134,   135,
     142,   145,   149,   150,   153,   154,   157,   159,   161,   164,
     174,   181,   187,   193,   199,   202,   205,   209,   213,   215,
     218,   219,   222,   224,   226,   230,   233,   234,   238,   239,
     243,   246,   247,   251,   252,   256,   258,   260,   262,   264,
     268,   271,   274,   276,   278,   282,   283,   287,   288,   292,
     293,   297,   303,   304,   306,   309,   310,   314,   316,   318,
     320,   322,   324,   326,   328,   330,   332,   334,   336
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,    53,    -1,    -1,    55,    54,    -1,    -1,
      55,    54,    -1,    56,    -1,    57,    -1,    77,    -1,    76,
      -1,     1,    17,    -1,    37,     3,    60,    13,    63,    14,
      17,    -1,    31,     3,    13,    58,    14,    17,    -1,    77,
      59,    -1,    -1,    77,    59,    -1,    -1,    38,     3,    61,
      -1,    -1,    18,     3,    62,    -1,    -1,    18,     3,    62,
      -1,    -1,    65,    64,    -1,    -1,    65,    64,    -1,    66,
      67,    -1,    66,    76,    -1,    32,    -1,    33,    -1,    68,
      17,    -1,    34,     3,    11,    69,    12,     6,    73,    -1,
      -1,    70,    -1,     3,    20,    74,    75,    71,    -1,    -1,
      18,     3,    20,    74,    75,    72,    -1,    -1,    18,     3,
      20,    74,    75,    72,    -1,    74,    -1,    36,    -1,    48,
      -1,    49,    -1,    50,    -1,     3,    -1,    15,     4,    16,
      -1,    15,    16,    -1,    -1,    39,     3,    20,    74,    75,
      17,    -1,    68,    78,    -1,    13,    79,    14,    -1,    -1,
      81,    80,    -1,    -1,    81,    80,    -1,    76,    -1,    82,
      -1,    83,    17,    -1,    41,    11,    88,    12,    42,    84,
      43,    84,    17,    -1,    44,    11,    88,    12,    84,    17,
      -1,    45,    11,    97,    12,    17,    -1,    46,    11,    87,
      12,    17,    -1,    47,    11,    87,    12,    17,    -1,    47,
      17,    -1,   101,    17,    -1,    97,    28,    87,    -1,    13,
      85,    14,    -1,    82,    -1,    82,    86,    -1,    -1,    82,
      86,    -1,    88,    -1,    89,    -1,    89,   105,    89,    -1,
      92,    90,    -1,    -1,   106,    92,    91,    -1,    -1,   106,
      92,    91,    -1,    95,    93,    -1,    -1,   107,    95,    94,
      -1,    -1,   107,    95,    94,    -1,    97,    -1,   101,    -1,
       4,    -1,     5,    -1,    11,    89,    12,    -1,    27,    95,
      -1,    96,    95,    -1,    21,    -1,    22,    -1,     3,    98,
     100,    -1,    -1,    19,     3,    99,    -1,    -1,    19,     3,
      99,    -1,    -1,    15,    87,    16,    -1,     3,    98,    11,
     102,    12,    -1,    -1,   103,    -1,    87,   104,    -1,    -1,
      18,    87,   104,    -1,     7,    -1,     8,    -1,    29,    -1,
      30,    -1,     9,    -1,    10,    -1,    21,    -1,    22,    -1,
      25,    -1,    23,    -1,    24,    -1,    26,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    59,    59,    70,    73,    88,    91,   105,   109,   113,
     117,   121,   129,   143,   157,   172,   175,   190,   193,   205,
     208,   220,   223,   235,   238,   253,   256,   270,   277,   287,
     291,   298,   308,   324,   327,   334,   348,   351,   366,   369,
     383,   387,   394,   398,   402,   406,   413,   423,   431,   437,
     451,   461,   473,   476,   491,   494,   508,   512,   519,   526,
     540,   551,   561,   571,   581,   588,   598,   609,   617,   626,
     641,   644,   658,   662,   669,   680,   695,   698,   710,   713,
     724,   739,   742,   754,   757,   768,   772,   776,   782,   788,
     796,   803,   813,   817,   824,   836,   839,   851,   854,   866,
     869,   880,   894,   897,   904,   919,   922,   940,   944,   948,
     952,   956,   960,   967,   971,   975,   982,   986,   990
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "intNumber", "floatNumber",
  "ARROW_OPERATOR", "EQUAL_OPERATOR", "NOT_EQUAL_OPERATOR",
  "LESS_THAN_OR_EQUAL_OPERATOR", "GREATER_THAN_OR_EQUAL_OPERATOR",
  "LEFT_PAREN", "RIGHT_PAREN", "LEFT_BRACE", "RIGHT_BRACE",
  "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET", "SEMICOLON", "COMMA",
  "DOT", "COLON", "PLUS_OPERATOR", "MINUS_OPERATOR", "MULTIPLY_OPERATOR",
  "DIVIDE_OPERATOR", "OR_OPERATOR", "AND_OPERATOR", "NOT_OPERATOR",
  "ASSIGN_OPERATOR", "LESS_THAN_OPERATOR", "GREATER_THAN_OPERATOR", "IMPL",
  "PUBLIC", "PRIVATE", "FUNC", "SELF", "VOID", "STRUCT", "INHERITS", "VAR",
  "LET", "IF", "THEN", "ELSE", "WHILE", "READ", "WRITE", "RETURN",
  "INTEGER", "FLOAT", "JAVA", "$accept", "prog", "structOrImplOrFuncList",
  "structOrImplOrFuncListAux", "structOrImplOrFunc", "structDecl",
  "implDef", "funcDefList", "funcDefListAux", "inheritsClause",
  "inheritsTail", "inheritsTailAux", "memberDeclList", "memberDeclListAux",
  "memberDecl", "visibility", "funcDecl", "funcHead", "fParams",
  "fParamList", "fParamsTail", "fParamsTailAux", "returnType", "type",
  "arraySize", "varDecl", "funcDef", "funcBody", "varDeclOrStmtList",
  "varDeclOrStmtListAux", "varDeclOrStmt", "statement", "assignStat",
  "statBlock", "statementList", "statementListAux", "expr", "relExpr",
  "arithExpr", "arithExprTail", "arithExprTailAux", "term", "termTail",
  "termTailAux", "factor", "sign", "variable", "idnest", "idnestAux",
  "indice", "functionCall", "aParams", "aParamsList", "aParamsListAux",
  "relOp", "addOp", "multOp", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    53,    54,    54,    55,    55,    55,
      55,    55,    56,    57,    58,    59,    59,    60,    60,    61,
      61,    62,    62,    63,    63,    64,    64,    65,    65,    66,
      66,    67,    68,    69,    69,    70,    71,    71,    72,    72,
      73,    73,    74,    74,    74,    74,    75,    75,    75,    76,
      77,    78,    79,    79,    80,    80,    81,    81,    82,    82,
      82,    82,    82,    82,    82,    82,    83,    84,    84,    85,
      86,    86,    87,    87,    88,    89,    90,    90,    91,    91,
      92,    93,    93,    94,    94,    95,    95,    95,    95,    95,
      95,    95,    96,    96,    97,    98,    98,    99,    99,   100,
     100,   101,   102,   102,   103,   104,   104,   105,   105,   105,
     105,   105,   105,   106,   106,   106,   107,   107,   107
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     0,     2,     1,     1,     1,
       1,     2,     7,     6,     2,     0,     2,     0,     3,     0,
       3,     0,     3,     0,     2,     0,     2,     2,     2,     1,
       1,     2,     7,     0,     1,     5,     0,     6,     0,     6,
       1,     1,     1,     1,     1,     1,     3,     2,     0,     6,
       2,     3,     0,     2,     0,     2,     1,     1,     2,     9,
       6,     5,     5,     5,     2,     2,     3,     3,     1,     2,
       0,     2,     1,     1,     3,     2,     0,     3,     0,     3,
       2,     0,     3,     0,     3,     1,     1,     1,     1,     3,
       2,     2,     1,     1,     3,     0,     3,     0,     3,     0,
       3,     5,     0,     1,     2,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     2,     0,     7,
       8,     0,    10,     9,    11,     0,     0,    17,     0,     1,
       4,     0,    52,    50,     0,    33,     0,     0,     0,     6,
      95,     0,     0,     0,     0,     0,    56,     0,    54,    57,
       0,     0,     0,     0,    15,     0,     0,    34,    19,    23,
      45,    42,    43,    44,    48,     0,    99,     0,     0,     0,
       0,     0,    64,    51,    53,    54,    58,     0,    65,     0,
      14,    15,     0,     0,     0,    18,    29,    30,     0,    25,
       0,     0,     0,    97,   102,     0,    94,    87,    88,     0,
      92,    93,     0,     0,     0,    76,    81,     0,    85,    86,
       0,    95,     0,     0,    72,    73,     0,    55,    66,    13,
      16,    48,     0,    21,     0,    24,    25,    27,     0,    28,
       0,    47,    49,     0,    96,   105,     0,   103,     0,     0,
      90,     0,   107,   108,   111,   112,   109,   110,     0,   113,
     114,   115,    75,     0,   116,   117,   118,    80,     0,    91,
       0,    99,     0,     0,     0,    36,    41,    32,    40,     0,
      20,    12,    26,    31,    46,    97,     0,   104,   101,   100,
      89,     0,    74,    78,    83,     0,    68,     0,    61,    62,
      63,     0,    35,    21,    98,   105,     0,    77,     0,    82,
       0,    70,     0,    60,     0,    22,   106,     0,    78,    83,
      70,    69,    67,     0,     0,    79,    84,    71,    48,    59,
      38,     0,    37,     0,     0,    48,    38,    39
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,    20,    21,     9,    10,    43,    70,    27,
      75,   160,    78,   115,   116,    80,   117,    11,    46,    47,
     182,   212,   157,    54,    82,    12,    13,    23,    37,    64,
      65,    39,    40,   177,   192,   201,   103,   104,   105,   142,
     187,    95,   147,   189,    96,    97,    98,    56,   124,    86,
      99,   126,   127,   167,   138,   188,   190
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -158
static const yytype_int16 yypact[] =
{
      83,    -2,    33,    44,    47,    58,    68,  -158,   100,  -158,
    -158,    64,  -158,  -158,  -158,    65,    60,    48,    75,  -158,
    -158,   100,    28,  -158,    62,    91,   103,    90,    15,  -158,
      88,   101,   107,   108,   119,    24,  -158,   113,    28,  -158,
     115,   110,   118,   122,    62,   120,   129,  -158,   124,     1,
    -158,  -158,  -158,  -158,   128,   144,    74,    94,    94,   145,
      94,    94,  -158,  -158,  -158,    28,  -158,    94,  -158,   134,
    -158,    62,    15,   146,   152,  -158,  -158,  -158,   142,     1,
     -15,    16,   140,   139,    94,    94,  -158,  -158,  -158,    94,
    -158,  -158,    94,   147,   116,    31,    87,    94,  -158,  -158,
     148,    88,   149,   150,  -158,   116,   151,  -158,  -158,  -158,
    -158,   128,    10,   153,   155,  -158,     1,  -158,   156,  -158,
     158,  -158,  -158,   161,  -158,   159,   154,  -158,   164,   169,
    -158,   123,  -158,  -158,  -158,  -158,  -158,  -158,    94,  -158,
    -158,  -158,  -158,    94,  -158,  -158,  -158,  -158,    94,  -158,
      35,   167,   166,   168,   170,   171,  -158,  -158,  -158,   165,
    -158,  -158,  -158,  -158,  -158,   139,    94,  -158,  -158,  -158,
    -158,    35,  -158,    31,    87,    46,  -158,   173,  -158,  -158,
    -158,   181,  -158,   153,  -158,   159,   143,  -158,    94,  -158,
      94,    46,   174,  -158,   172,  -158,  -158,    35,    31,    87,
      46,  -158,  -158,    15,   176,  -158,  -158,  -158,   128,  -158,
     177,   188,  -158,   178,    15,   128,   177,  -158
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -158,  -158,  -158,   175,   194,  -158,  -158,  -158,    96,  -158,
    -158,    14,  -158,    84,   157,  -158,  -158,   121,  -158,  -158,
    -158,   -17,  -158,   -70,  -106,   -10,   -14,  -158,  -158,   137,
     182,  -146,  -158,  -157,  -158,     3,   -58,   -35,   -50,  -158,
       7,  -122,  -158,     8,   -86,  -158,   -22,   109,    43,  -158,
     -21,  -158,  -158,    26,  -158,   114,   117
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -6
static const yytype_int16 yytable[] =
{
      41,    42,   111,   106,   176,   155,   130,    94,    94,   108,
      44,   149,    36,    50,   186,    14,    41,    42,    50,     3,
     120,   173,    93,   100,     5,   176,   125,   128,    36,   191,
      71,    30,   121,    76,    77,    61,    15,   102,    30,   129,
     204,    62,   158,    41,    42,   200,   156,    16,   175,    30,
      17,   176,   139,   140,   200,    36,   141,    71,    51,    52,
      53,    18,   174,    51,    52,    53,   198,     5,    19,    31,
     119,    25,    32,    33,    34,    35,    31,    22,    24,    32,
      33,    34,    35,    -3,     1,    84,    26,    31,   172,    85,
      32,    33,    34,    35,    45,    28,     3,    30,    87,    88,
      -5,     1,   210,    49,   199,    89,    48,    55,   185,   216,
     144,   145,    57,   146,     2,    90,    91,     3,    58,    59,
       4,    92,     5,   132,   133,   134,   135,    63,    41,    42,
      60,     2,    66,   208,     3,    68,    69,     4,    67,     5,
      72,    73,    74,    81,   215,   136,   137,    83,   101,    41,
      42,   109,   112,    41,    42,   113,   114,   122,   123,   131,
     150,   152,   153,   154,   165,   171,   168,   110,   183,    41,
      42,   159,   161,   163,   164,    41,    42,   166,    41,    42,
     169,   170,    85,   178,   194,   179,   197,   180,   202,   181,
     193,   213,   203,   209,     8,   211,    29,   195,   214,   217,
     162,   118,   107,   207,    38,   205,    79,   206,   184,   143,
     151,   196,     0,   148
};

static const yytype_int16 yycheck[] =
{
      22,    22,    72,    61,   150,   111,    92,    57,    58,    67,
      24,    97,    22,     3,   171,    17,    38,    38,     3,    34,
       4,   143,    57,    58,    39,   171,    84,    85,    38,   175,
      44,     3,    16,    32,    33,    11,     3,    59,     3,    89,
     197,    17,   112,    65,    65,   191,    36,     3,    13,     3,
       3,   197,    21,    22,   200,    65,    25,    71,    48,    49,
      50,     3,   148,    48,    49,    50,   188,    39,     0,    41,
      80,    11,    44,    45,    46,    47,    41,    13,    13,    44,
      45,    46,    47,     0,     1,    11,    38,    41,   138,    15,
      44,    45,    46,    47,     3,    20,    34,     3,     4,     5,
       0,     1,   208,    13,   190,    11,     3,    19,   166,   215,
      23,    24,    11,    26,    31,    21,    22,    34,    11,    11,
      37,    27,    39,     7,     8,     9,    10,    14,   150,   150,
      11,    31,    17,   203,    34,    17,    14,    37,    28,    39,
      20,    12,    18,    15,   214,    29,    30,     3,     3,   171,
     171,    17,     6,   175,   175,     3,    14,    17,    19,    12,
      12,    12,    12,    12,     3,    42,    12,    71,     3,   191,
     191,    18,    17,    17,    16,   197,   197,    18,   200,   200,
      16,    12,    15,    17,     3,    17,    43,    17,    14,    18,
      17,     3,    20,    17,     0,    18,    21,   183,    20,   216,
     116,    80,    65,   200,    22,   198,    49,   199,   165,    95,
     101,   185,    -1,    96
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    31,    34,    37,    39,    52,    53,    55,    56,
      57,    68,    76,    77,    17,     3,     3,     3,     3,     0,
      54,    55,    13,    78,    13,    11,    38,    60,    20,    54,
       3,    41,    44,    45,    46,    47,    76,    79,    81,    82,
      83,    97,   101,    58,    77,     3,    69,    70,     3,    13,
       3,    48,    49,    50,    74,    19,    98,    11,    11,    11,
      11,    11,    17,    14,    80,    81,    17,    28,    17,    14,
      59,    77,    20,    12,    18,    61,    32,    33,    63,    65,
      66,    15,    75,     3,    11,    15,   100,     4,     5,    11,
      21,    22,    27,    88,    89,    92,    95,    96,    97,   101,
      88,     3,    97,    87,    88,    89,    87,    80,    87,    17,
      59,    74,     6,     3,    14,    64,    65,    67,    68,    76,
       4,    16,    17,    19,    99,    87,   102,   103,    87,    89,
      95,    12,     7,     8,     9,    10,    29,    30,   105,    21,
      22,    25,    90,   106,    23,    24,    26,    93,   107,    95,
      12,    98,    12,    12,    12,    75,    36,    73,    74,    18,
      62,    17,    64,    17,    16,     3,    18,   104,    12,    16,
      12,    42,    89,    92,    95,    13,    82,    84,    17,    17,
      17,    18,    71,     3,    99,    87,    84,    91,   106,    94,
     107,    82,    85,    17,     3,    62,   104,    43,    92,    95,
      82,    86,    14,    20,    84,    91,    94,    86,    74,    17,
      75,    18,    72,     3,    20,    74,    75,    72
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 60 "nawam.y"
    {
        ASTNode* children[1];
        children[0] = (yyvsp[(1) - (1)].astNode);
        ast_root = build_ast_node("Prog", children, 1, NULL);
        (yyval.astNode) = ast_root;
    ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 70 "nawam.y"
    {
        (yyval.astNode) = NULL;
    ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 74 "nawam.y"
    {
        if ((yyvsp[(2) - (2)].astNode)) {
            ASTNode* children[2];
            children[0] = (yyvsp[(1) - (2)].astNode);
            children[1] = (yyvsp[(2) - (2)].astNode);
            (yyval.astNode) = build_ast_node("StructOrImplOrFuncList", children, 2, NULL);
        } else {
            (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
        }
    ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 88 "nawam.y"
    {
        (yyval.astNode) = NULL;
    ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 92 "nawam.y"
    {
        if ((yyvsp[(2) - (2)].astNode)) {
            ASTNode* children[2];
            children[0] = (yyvsp[(1) - (2)].astNode);
            children[1] = (yyvsp[(2) - (2)].astNode);
            (yyval.astNode) = build_ast_node("StructOrImplOrFuncListAux", children, 2, NULL);
        } else {
            (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
        }
    ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 106 "nawam.y"
    {
        (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
    ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 110 "nawam.y"
    {
        (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
    ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 114 "nawam.y"
    {
        (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
    ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 118 "nawam.y"
    {
        (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
    ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 122 "nawam.y"
    {
        yyerror("Invalid construct. Skipping to next semicolon.");
        (yyval.astNode) = NULL;
    ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 130 "nawam.y"
    {
        ASTNode* children[6];
        children[0] = build_ast_node("STRUCT", NULL, 0, "STRUCT");
        children[1] = build_ast_node("ID", NULL, 0, (yyvsp[(2) - (7)].sValue));
        children[2] = (yyvsp[(3) - (7)].astNode);
        children[3] = build_ast_node("LEFT_BRACE", NULL, 0, "{");
        children[4] = (yyvsp[(5) - (7)].astNode);
        children[5] = build_ast_node("RIGHT_BRACE", NULL, 0, "}");
        (yyval.astNode) = build_ast_node("StructDecl", children, 6, ";");
    ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 144 "nawam.y"
    {
        ASTNode* children[6];
        children[0] = build_ast_node("IMPL", NULL, 0, "IMPL");
        children[1] = build_ast_node("ID", NULL, 0, (yyvsp[(2) - (6)].sValue));
        children[2] = build_ast_node("LEFT_BRACE", NULL, 0, "{");
        children[3] = (yyvsp[(4) - (6)].astNode);
        children[4] = build_ast_node("RIGHT_BRACE", NULL, 0, "}");
        children[5] = build_ast_node("SEMICOLON", NULL, 0, ";");
        (yyval.astNode) = build_ast_node("ImplDef", children, 6, NULL);
    ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 158 "nawam.y"
    {
        if ((yyvsp[(2) - (2)].astNode)) {
            ASTNode* children[2];
            children[0] = (yyvsp[(1) - (2)].astNode);
            children[1] = (yyvsp[(2) - (2)].astNode);
            (yyval.astNode) = build_ast_node("FuncDefList", children, 2, NULL);
        } else {
            (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
        }
    ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 172 "nawam.y"
    {
        (yyval.astNode) = NULL;
    ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 176 "nawam.y"
    {
        if ((yyvsp[(2) - (2)].astNode)) {
            ASTNode* children[2];
            children[0] = (yyvsp[(1) - (2)].astNode);
            children[1] = (yyvsp[(2) - (2)].astNode);
            (yyval.astNode) = build_ast_node("FuncDefListAux", children, 2, NULL);
        } else {
            (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
        }
    ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 190 "nawam.y"
    {
        (yyval.astNode) = NULL;
    ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 194 "nawam.y"
    {
        ASTNode* children[3];
        children[0] = build_ast_node("INHERITS", NULL, 0, "INHERITS");
        children[1] = build_ast_node("ID", NULL, 0, (yyvsp[(2) - (3)].sValue));
        children[2] = (yyvsp[(3) - (3)].astNode);
        (yyval.astNode) = build_ast_node("InheritsClause", children, 3, NULL);
    ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 205 "nawam.y"
    {
        (yyval.astNode) = NULL;
    ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 209 "nawam.y"
    {
        ASTNode* children[3];
        children[0] = build_ast_node("COMMA", NULL, 0, ",");
        children[1] = build_ast_node("ID", NULL, 0, (yyvsp[(2) - (3)].sValue));
        children[2] = (yyvsp[(3) - (3)].astNode);
        (yyval.astNode) = build_ast_node("InheritsTail", children, 3, NULL);
    ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 220 "nawam.y"
    {
        (yyval.astNode) = NULL;
    ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 224 "nawam.y"
    {
        ASTNode* children[3];
        children[0] = build_ast_node("COMMA", NULL, 0, ",");
        children[1] = build_ast_node("ID", NULL, 0, (yyvsp[(2) - (3)].sValue));
        children[2] = (yyvsp[(3) - (3)].astNode);
        (yyval.astNode) = build_ast_node("InheritsTailAux", children, 3, NULL);
    ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 235 "nawam.y"
    {
        (yyval.astNode) = NULL;
    ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 239 "nawam.y"
    {
        if ((yyvsp[(2) - (2)].astNode)) {
            ASTNode* children[2];
            children[0] = (yyvsp[(1) - (2)].astNode);
            children[1] = (yyvsp[(2) - (2)].astNode);
            (yyval.astNode) = build_ast_node("MemberDeclList", children, 2, NULL);
        } else {
            (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
        }
    ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 253 "nawam.y"
    {
        (yyval.astNode) = NULL;
    ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 257 "nawam.y"
    {
        if ((yyvsp[(2) - (2)].astNode)) {
            ASTNode* children[2];
            children[0] = (yyvsp[(1) - (2)].astNode);
            children[1] = (yyvsp[(2) - (2)].astNode);
            (yyval.astNode) = build_ast_node("MemberDeclListAux", children, 2, NULL);
        } else {
            (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
        }
    ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 271 "nawam.y"
    {
        ASTNode* children[2];
        children[0] = (yyvsp[(1) - (2)].astNode);
        children[1] = (yyvsp[(2) - (2)].astNode);
        (yyval.astNode) = build_ast_node("MemberDecl", children, 2, NULL);
    ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 278 "nawam.y"
    {
        ASTNode* children[2];
        children[0] = (yyvsp[(1) - (2)].astNode);
        children[1] = (yyvsp[(2) - (2)].astNode);
        (yyval.astNode) = build_ast_node("MemberDecl", children, 2, NULL);
    ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 288 "nawam.y"
    {
        (yyval.astNode) = build_ast_node("Visibility", NULL, 0, "PUBLIC");
    ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 292 "nawam.y"
    {
        (yyval.astNode) = build_ast_node("Visibility", NULL, 0, "PRIVATE");
    ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 299 "nawam.y"
    {
        ASTNode* children[2];
        children[0] = (yyvsp[(1) - (2)].astNode);
        children[1] = build_ast_node("SEMICOLON", NULL, 0, ";");
        (yyval.astNode) = build_ast_node("FuncDecl", children, 2, NULL);
    ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 309 "nawam.y"
    {
        ASTNode* children[7];
        children[0] = build_ast_node("FUNC", NULL, 0, "FUNC");
        children[1] = build_ast_node("ID", NULL, 0, (yyvsp[(2) - (7)].sValue));
        children[2] = build_ast_node("LEFT_PAREN", NULL, 0, "(");
        children[3] = (yyvsp[(4) - (7)].astNode);
        children[4] = build_ast_node("RIGHT_PAREN", NULL, 0, ")");
        children[5] = build_ast_node("ARROW_OPERATOR", NULL, 0, "->");
        children[6] = (yyvsp[(7) - (7)].astNode);
        (yyval.astNode) = build_ast_node("FuncHead", children, 7, NULL);
    ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 324 "nawam.y"
    {
        (yyval.astNode) = NULL;
    ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 328 "nawam.y"
    {
        (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
    ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 335 "nawam.y"
    {
        ASTNode* children[5];
        children[0] = build_ast_node("ID", NULL, 0, (yyvsp[(1) - (5)].sValue));
        children[1] = build_ast_node("COLON", NULL, 0, ":");
        children[2] = (yyvsp[(3) - (5)].astNode);
        children[3] = (yyvsp[(4) - (5)].astNode);
        children[4] = (yyvsp[(5) - (5)].astNode);
        (yyval.astNode) = build_ast_node("FParamList", children, 5, NULL);
    ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 348 "nawam.y"
    {
        (yyval.astNode) = NULL;
    ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 352 "nawam.y"
    {
        ASTNode* children[6];
        children[0] = build_ast_node("COMMA", NULL, 0, ",");
        children[1] = build_ast_node("ID", NULL, 0, (yyvsp[(2) - (6)].sValue));
        children[2] = build_ast_node("COLON", NULL, 0, ":");
        children[3] = (yyvsp[(4) - (6)].astNode);
        children[4] = (yyvsp[(5) - (6)].astNode);
        children[5] = (yyvsp[(6) - (6)].astNode);
        (yyval.astNode) = build_ast_node("FParamsTail", children, 6, NULL);
    ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 366 "nawam.y"
    {
        (yyval.astNode) = NULL;
    ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 370 "nawam.y"
    {
        ASTNode* children[6];
        children[0] = build_ast_node("COMMA", NULL, 0, ",");
        children[1] = build_ast_node("ID", NULL, 0, (yyvsp[(2) - (6)].sValue));
        children[2] = build_ast_node("COLON", NULL, 0, ":");
        children[3] = (yyvsp[(4) - (6)].astNode);
        children[4] = (yyvsp[(5) - (6)].astNode);
        children[5] = (yyvsp[(6) - (6)].astNode);
        (yyval.astNode) = build_ast_node("FParamsTailAux", children, 6, NULL);
    ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 384 "nawam.y"
    {
        (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
    ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 388 "nawam.y"
    {
        (yyval.astNode) = build_ast_node("ReturnType", NULL, 0, "VOID");
    ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 395 "nawam.y"
    {
        (yyval.astNode) = build_ast_node("Type", NULL, 0, "INTEGER");
    ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 399 "nawam.y"
    {
        (yyval.astNode) = build_ast_node("Type", NULL, 0, "FLOAT");
    ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 403 "nawam.y"
    {
        (yyval.astNode) = build_ast_node("Type", NULL, 0, "JAVA");
    ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 407 "nawam.y"
    {
        (yyval.astNode) = build_ast_node("Type", NULL, 0, (yyvsp[(1) - (1)].sValue)); // $1 is char* (sValue)
    ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 414 "nawam.y"
    {
        ASTNode* children[3];
        char buffer[20];
        sprintf(buffer, "%d", (yyvsp[(2) - (3)].intValue)); // Convert intValue to string
        children[0] = build_ast_node("LEFT_SQUARE_BRACKET", NULL, 0, "[");
        children[1] = build_ast_node("intNumber", NULL, 0, buffer);
        children[2] = build_ast_node("RIGHT_SQUARE_BRACKET", NULL, 0, "]");
        (yyval.astNode) = build_ast_node("ArraySize", children, 3, NULL);
    ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 424 "nawam.y"
    {
        ASTNode* children[2];
        children[0] = build_ast_node("LEFT_SQUARE_BRACKET", NULL, 0, "[");
        children[1] = build_ast_node("RIGHT_SQUARE_BRACKET", NULL, 0, "]");
        (yyval.astNode) = build_ast_node("ArraySize", children, 2, NULL);
    ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 431 "nawam.y"
    {
        (yyval.astNode) = NULL;
    ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 438 "nawam.y"
    {
        ASTNode* children[6];
        children[0] = build_ast_node("VAR", NULL, 0, "VAR");
        children[1] = build_ast_node("ID", NULL, 0, (yyvsp[(2) - (6)].sValue));
        children[2] = build_ast_node("COLON", NULL, 0, ":");
        children[3] = (yyvsp[(4) - (6)].astNode);
        children[4] = (yyvsp[(5) - (6)].astNode);
        children[5] = build_ast_node("SEMICOLON", NULL, 0, ";");
        (yyval.astNode) = build_ast_node("VarDecl", children, 6, NULL);
    ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 452 "nawam.y"
    {
        ASTNode* children[2];
        children[0] = (yyvsp[(1) - (2)].astNode);
        children[1] = (yyvsp[(2) - (2)].astNode);
        (yyval.astNode) = build_ast_node("FuncDef", children, 2, NULL);
    ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 462 "nawam.y"
    {
        ASTNode* children[3];
        children[0] = build_ast_node("LEFT_BRACE", NULL, 0, "{");
        children[1] = (yyvsp[(2) - (3)].astNode);
        children[2] = build_ast_node("RIGHT_BRACE", NULL, 0, "}");
        (yyval.astNode) = build_ast_node("FuncBody", children, 3, NULL);
    ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 473 "nawam.y"
    {
        (yyval.astNode) = NULL;
    ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 477 "nawam.y"
    {
        if ((yyvsp[(2) - (2)].astNode)) {
            ASTNode* children[2];
            children[0] = (yyvsp[(1) - (2)].astNode);
            children[1] = (yyvsp[(2) - (2)].astNode);
            (yyval.astNode) = build_ast_node("VarDeclOrStmtList", children, 2, NULL);
        } else {
            (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
        }
    ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 491 "nawam.y"
    {
        (yyval.astNode) = NULL;
    ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 495 "nawam.y"
    {
        if ((yyvsp[(2) - (2)].astNode)) {
            ASTNode* children[2];
            children[0] = (yyvsp[(1) - (2)].astNode);
            children[1] = (yyvsp[(2) - (2)].astNode);
            (yyval.astNode) = build_ast_node("VarDeclOrStmtListAux", children, 2, NULL);
        } else {
            (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
        }
    ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 509 "nawam.y"
    {
        (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
    ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 513 "nawam.y"
    {
        (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
    ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 520 "nawam.y"
    {
        ASTNode* children[2];
        children[0] = (yyvsp[(1) - (2)].astNode);
        children[1] = build_ast_node("SEMICOLON", NULL, 0, ";");
        (yyval.astNode) = build_ast_node("AssignStatStmt", children, 2, NULL);
    ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 527 "nawam.y"
    {
        ASTNode* children[9];
        children[0] = build_ast_node("IF", NULL, 0, "IF");
        children[1] = build_ast_node("LEFT_PAREN", NULL, 0, "(");
        children[2] = (yyvsp[(3) - (9)].astNode);
        children[3] = build_ast_node("RIGHT_PAREN", NULL, 0, ")");
        children[4] = build_ast_node("THEN", NULL, 0, "THEN");
        children[5] = (yyvsp[(6) - (9)].astNode);
        children[6] = build_ast_node("ELSE", NULL, 0, "ELSE");
        children[7] = (yyvsp[(8) - (9)].astNode);
        children[8] = build_ast_node("SEMICOLON", NULL, 0, ";");
        (yyval.astNode) = build_ast_node("IfElseStmt", children, 9, NULL);
    ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 541 "nawam.y"
    {
        ASTNode* children[6];
        children[0] = build_ast_node("WHILE", NULL, 0, "WHILE");
        children[1] = build_ast_node("LEFT_PAREN", NULL, 0, "(");
        children[2] = (yyvsp[(3) - (6)].astNode);
        children[3] = build_ast_node("RIGHT_PAREN", NULL, 0, ")");
        children[4] = (yyvsp[(5) - (6)].astNode);
        children[5] = build_ast_node("SEMICOLON", NULL, 0, ";");
        (yyval.astNode) = build_ast_node("WhileStmt", children, 6, NULL);
    ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 552 "nawam.y"
    {
        ASTNode* children[5];
        children[0] = build_ast_node("READ", NULL, 0, "READ");
        children[1] = build_ast_node("LEFT_PAREN", NULL, 0, "(");
        children[2] = (yyvsp[(3) - (5)].astNode);
        children[3] = build_ast_node("RIGHT_PAREN", NULL, 0, ")");
        children[4] = build_ast_node("SEMICOLON", NULL, 0, ";");
        (yyval.astNode) = build_ast_node("ReadStmt", children, 5, NULL);
    ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 562 "nawam.y"
    {
        ASTNode* children[5];
        children[0] = build_ast_node("WRITE", NULL, 0, "WRITE");
        children[1] = build_ast_node("LEFT_PAREN", NULL, 0, "(");
        children[2] = (yyvsp[(3) - (5)].astNode);
        children[3] = build_ast_node("RIGHT_PAREN", NULL, 0, ")");
        children[4] = build_ast_node("SEMICOLON", NULL, 0, ";");
        (yyval.astNode) = build_ast_node("WriteStmt", children, 5, NULL);
    ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 572 "nawam.y"
    {
        ASTNode* children[5];
        children[0] = build_ast_node("RETURN", NULL, 0, "RETURN");
        children[1] = build_ast_node("LEFT_PAREN", NULL, 0, "(");
        children[2] = (yyvsp[(3) - (5)].astNode);
        children[3] = build_ast_node("RIGHT_PAREN", NULL, 0, ")");
        children[4] = build_ast_node("SEMICOLON", NULL, 0, ";");
        (yyval.astNode) = build_ast_node("ReturnStmt", children, 5, NULL);
    ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 582 "nawam.y"
    {
        ASTNode* children[2];
        children[0] = build_ast_node("RETURN", NULL, 0, "RETURN");
        children[1] = build_ast_node("SEMICOLON", NULL, 0, ";");
        (yyval.astNode) = build_ast_node("ReturnVoidStmt", children, 2, NULL);
    ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 589 "nawam.y"
    {
        ASTNode* children[2];
        children[0] = (yyvsp[(1) - (2)].astNode);
        children[1] = build_ast_node("SEMICOLON", NULL, 0, ";");
        (yyval.astNode) = build_ast_node("FunctionCallStmt", children, 2, NULL);
    ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 599 "nawam.y"
    {
        ASTNode* children[3];
        children[0] = (yyvsp[(1) - (3)].astNode);
        children[1] = build_ast_node("ASSIGN_OPERATOR", NULL, 0, "=");
        children[2] = (yyvsp[(3) - (3)].astNode);
        (yyval.astNode) = build_ast_node("AssignStat", children, 3, NULL);
    ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 610 "nawam.y"
    {
        ASTNode* children[3];
        children[0] = build_ast_node("LEFT_BRACE", NULL, 0, "{");
        children[1] = (yyvsp[(2) - (3)].astNode);
        children[2] = build_ast_node("RIGHT_BRACE", NULL, 0, "}");
        (yyval.astNode) = build_ast_node("StatBlock", children, 3, NULL);
    ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 618 "nawam.y"
    {
        ASTNode* children[1];
        children[0] = (yyvsp[(1) - (1)].astNode);
        (yyval.astNode) = build_ast_node("StatBlockSingle", children, 1, NULL);
    ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 627 "nawam.y"
    {
        if ((yyvsp[(2) - (2)].astNode)) {
            ASTNode* children[2];
            children[0] = (yyvsp[(1) - (2)].astNode);
            children[1] = (yyvsp[(2) - (2)].astNode);
            (yyval.astNode) = build_ast_node("StatementList", children, 2, NULL);
        } else {
            (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
        }
    ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 641 "nawam.y"
    {
        (yyval.astNode) = NULL;
    ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 645 "nawam.y"
    {
        if ((yyvsp[(2) - (2)].astNode)) {
            ASTNode* children[2];
            children[0] = (yyvsp[(1) - (2)].astNode);
            children[1] = (yyvsp[(2) - (2)].astNode);
            (yyval.astNode) = build_ast_node("StatementListAux", children, 2, NULL);
        } else {
            (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
        }
    ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 659 "nawam.y"
    {
        (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
    ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 663 "nawam.y"
    {
        (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
    ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 670 "nawam.y"
    {
        ASTNode* children[3];
        children[0] = (yyvsp[(1) - (3)].astNode);
        children[1] = (yyvsp[(2) - (3)].astNode);
        children[2] = (yyvsp[(3) - (3)].astNode);
        (yyval.astNode) = build_ast_node("RelExpr", children, 3, NULL);
    ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 681 "nawam.y"
    {
        if ((yyvsp[(2) - (2)].astNode)) {
            ASTNode* children[2];
            children[0] = (yyvsp[(1) - (2)].astNode);
            children[1] = (yyvsp[(2) - (2)].astNode);
            (yyval.astNode) = build_ast_node("ArithExpr", children, 2, NULL);
        } else {
            (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
        }
    ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 695 "nawam.y"
    {
        (yyval.astNode) = NULL;
    ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 699 "nawam.y"
    {
        ASTNode* children[3];
        children[0] = (yyvsp[(1) - (3)].astNode);
        children[1] = (yyvsp[(2) - (3)].astNode);
        children[2] = (yyvsp[(3) - (3)].astNode);
        (yyval.astNode) = build_ast_node("ArithExprTail", children, 3, NULL);
    ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 710 "nawam.y"
    {
        (yyval.astNode) = NULL;
    ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 714 "nawam.y"
    {
        ASTNode* children[3];
        children[0] = (yyvsp[(1) - (3)].astNode);
        children[1] = (yyvsp[(2) - (3)].astNode);
        children[2] = (yyvsp[(3) - (3)].astNode);
        (yyval.astNode) = build_ast_node("ArithExprTailAux", children, 3, NULL);
    ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 725 "nawam.y"
    {
        if ((yyvsp[(2) - (2)].astNode)) {
            ASTNode* children[2];
            children[0] = (yyvsp[(1) - (2)].astNode);
            children[1] = (yyvsp[(2) - (2)].astNode);
            (yyval.astNode) = build_ast_node("Term", children, 2, NULL);
        } else {
            (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
        }
    ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 739 "nawam.y"
    {
        (yyval.astNode) = NULL;
    ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 743 "nawam.y"
    {
        ASTNode* children[3];
        children[0] = (yyvsp[(1) - (3)].astNode);
        children[1] = (yyvsp[(2) - (3)].astNode);
        children[2] = (yyvsp[(3) - (3)].astNode);
        (yyval.astNode) = build_ast_node("TermTail", children, 3, NULL);
    ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 754 "nawam.y"
    {
        (yyval.astNode) = NULL;
    ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 758 "nawam.y"
    {
        ASTNode* children[3];
        children[0] = (yyvsp[(1) - (3)].astNode);
        children[1] = (yyvsp[(2) - (3)].astNode);
        children[2] = (yyvsp[(3) - (3)].astNode);
        (yyval.astNode) = build_ast_node("TermTailAux", children, 3, NULL);
    ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 769 "nawam.y"
    {
        (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
    ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 773 "nawam.y"
    {
        (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
    ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 777 "nawam.y"
    {
        char buffer[20];
        sprintf(buffer, "%d", (yyvsp[(1) - (1)].intValue));
        (yyval.astNode) = build_ast_node("intNumber", NULL, 0, buffer);
    ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 783 "nawam.y"
    {
        char buffer[20];
        sprintf(buffer, "%f", (yyvsp[(1) - (1)].floatValue));
        (yyval.astNode) = build_ast_node("floatNumber", NULL, 0, buffer);
    ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 789 "nawam.y"
    {
        ASTNode* children[3];
        children[0] = build_ast_node("LEFT_PAREN", NULL, 0, "(");
        children[1] = (yyvsp[(2) - (3)].astNode);
        children[2] = build_ast_node("RIGHT_PAREN", NULL, 0, ")");
        (yyval.astNode) = build_ast_node("ParenthesizedExpr", children, 3, NULL);
    ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 797 "nawam.y"
    {
        ASTNode* children[2];
        children[0] = build_ast_node("NOT_OPERATOR", NULL, 0, "NOT");
        children[1] = (yyvsp[(2) - (2)].astNode);
        (yyval.astNode) = build_ast_node("NotFactor", children, 2, NULL);
    ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 804 "nawam.y"
    {
        ASTNode* children[2];
        children[0] = (yyvsp[(1) - (2)].astNode);
        children[1] = (yyvsp[(2) - (2)].astNode);
        (yyval.astNode) = build_ast_node("SignedFactor", children, 2, NULL);
    ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 814 "nawam.y"
    {
        (yyval.astNode) = build_ast_node("PLUS_OPERATOR", NULL, 0, "+");
    ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 818 "nawam.y"
    {
        (yyval.astNode) = build_ast_node("MINUS_OPERATOR", NULL, 0, "-");
    ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 825 "nawam.y"
    {
        ASTNode* children[3];
        children[0] = build_ast_node("ID", NULL, 0, (yyvsp[(1) - (3)].sValue));
        children[1] = (yyvsp[(2) - (3)].astNode);
        children[2] = (yyvsp[(3) - (3)].astNode);
        (yyval.astNode) = build_ast_node("Variable", children, 3, NULL);
    ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 836 "nawam.y"
    {
        (yyval.astNode) = NULL;
    ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 840 "nawam.y"
    {
        ASTNode* children[3];
        children[0] = build_ast_node("DOT", NULL, 0, ".");
        children[1] = build_ast_node("ID", NULL, 0, (yyvsp[(2) - (3)].sValue));
        children[2] = (yyvsp[(3) - (3)].astNode);
        (yyval.astNode) = build_ast_node("IdNest", children, 3, NULL);
    ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 851 "nawam.y"
    {
        (yyval.astNode) = NULL;
    ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 855 "nawam.y"
    {
        ASTNode* children[3];
        children[0] = build_ast_node("DOT", NULL, 0, ".");
        children[1] = build_ast_node("ID", NULL, 0, (yyvsp[(2) - (3)].sValue));
        children[2] = (yyvsp[(3) - (3)].astNode);
        (yyval.astNode) = build_ast_node("IdNestAux", children, 3, NULL);
    ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 866 "nawam.y"
    {
        (yyval.astNode) = NULL;
    ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 870 "nawam.y"
    {
        ASTNode* children[3];
        children[0] = build_ast_node("LEFT_SQUARE_BRACKET", NULL, 0, "[");
        children[1] = (yyvsp[(2) - (3)].astNode);
        children[2] = build_ast_node("RIGHT_SQUARE_BRACKET", NULL, 0, "]");
        (yyval.astNode) = build_ast_node("Indice", children, 3, NULL);
    ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 881 "nawam.y"
    {
        ASTNode* children[5];
        children[0] = build_ast_node("ID", NULL, 0, (yyvsp[(1) - (5)].sValue));
        children[1] = (yyvsp[(2) - (5)].astNode);
        children[2] = build_ast_node("LEFT_PAREN", NULL, 0, "(");
        children[3] = (yyvsp[(4) - (5)].astNode);
        children[4] = build_ast_node("RIGHT_PAREN", NULL, 0, ")");
        (yyval.astNode) = build_ast_node("FunctionCall", children, 5, NULL);
    ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 894 "nawam.y"
    {
        (yyval.astNode) = NULL;
    ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 898 "nawam.y"
    {
        (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
    ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 905 "nawam.y"
    {
        if ((yyvsp[(2) - (2)].astNode)) {
            ASTNode* children[2];
            children[0] = (yyvsp[(1) - (2)].astNode);
            children[1] = (yyvsp[(2) - (2)].astNode);
            (yyval.astNode) = build_ast_node("AParamsList", children, 2, NULL);
        } else {
            (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
        }
    ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 919 "nawam.y"
    {
        (yyval.astNode) = NULL;
    ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 923 "nawam.y"
    {
        if ((yyvsp[(3) - (3)].astNode)) {
            ASTNode* children[3];
            children[0] = build_ast_node("COMMA", NULL, 0, ",");
            children[1] = (yyvsp[(2) - (3)].astNode);
            children[2] = (yyvsp[(3) - (3)].astNode);
            (yyval.astNode) = build_ast_node("AParamsListAux", children, 3, NULL);
        } else {
            ASTNode* children[2];
            children[0] = build_ast_node("COMMA", NULL, 0, ",");
            children[1] = (yyvsp[(2) - (3)].astNode);
            (yyval.astNode) = build_ast_node("AParamsListAux", children, 2, NULL);
        }
    ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 941 "nawam.y"
    {
        (yyval.astNode) = build_ast_node("EQUAL_OPERATOR", NULL, 0, "==");
    ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 945 "nawam.y"
    {
        (yyval.astNode) = build_ast_node("NOT_EQUAL_OPERATOR", NULL, 0, "<>");
    ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 949 "nawam.y"
    {
        (yyval.astNode) = build_ast_node("LESS_THAN_OPERATOR", NULL, 0, "<");
    ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 953 "nawam.y"
    {
        (yyval.astNode) = build_ast_node("GREATER_THAN_OPERATOR", NULL, 0, ">");
    ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 957 "nawam.y"
    {
        (yyval.astNode) = build_ast_node("LESS_THAN_OR_EQUAL_OPERATOR", NULL, 0, "<=");
    ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 961 "nawam.y"
    {
        (yyval.astNode) = build_ast_node("GREATER_THAN_OR_EQUAL_OPERATOR", NULL, 0, ">=");
    ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 968 "nawam.y"
    {
        (yyval.astNode) = build_ast_node("PLUS_OPERATOR", NULL, 0, "+");
    ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 972 "nawam.y"
    {
        (yyval.astNode) = build_ast_node("MINUS_OPERATOR", NULL, 0, "-");
    ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 976 "nawam.y"
    {
        (yyval.astNode) = build_ast_node("OR_OPERATOR", NULL, 0, "OR");
    ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 983 "nawam.y"
    {
        (yyval.astNode) = build_ast_node("MULTIPLY_OPERATOR", NULL, 0, "*");
    ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 987 "nawam.y"
    {
        (yyval.astNode) = build_ast_node("DIVIDE_OPERATOR", NULL, 0, "/");
    ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 991 "nawam.y"
    {
        (yyval.astNode) = build_ast_node("AND_OPERATOR", NULL, 0, "AND");
    ;}
    break;



/* Line 1455 of yacc.c  */
#line 2957 "nawam.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 996 "nawam.y"


