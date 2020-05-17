
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
#line 1 "parser.y"

	#include <stdlib.h>
	#include <stdio.h>
	#include <math.h>
	#include <stdbool.h>
	#include "nameTablesUtils.h"
	
	#define NUMERICAL "numerical"
	#define CHARACTERS "char"
	#define LOGICAL "bool"
	#define VOIDD "void"
	#define NONE "none"

	void yyerror(char *s);
	int yylex();
	bool isAssigned = false;
	extern FILE* yyin;


/* Line 189 of yacc.c  */
#line 93 "parser.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     DOUBLE = 259,
     VOID = 260,
     STRING = 261,
     TRUE = 262,
     FALSE = 263,
     INT = 264,
     BOOL = 265,
     IF = 266,
     ELSE = 267,
     SEMICOLON = 268,
     NAME = 269,
     STRING_VALUE = 270,
     RETURN = 271,
     FOR = 272,
     CLASS_DECL = 273,
     VISIBILITY = 274,
     DATA_ACCESS = 275,
     INCLUDE = 276
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union 
/* Line 214 of yacc.c  */
#line 20 "parser.y"
SUPER_TYPE
{

/* Line 214 of yacc.c  */
#line 21 "parser.y"

	double dtype;
	char* stype;



/* Line 214 of yacc.c  */
#line 160 "parser.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 172 "parser.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   358

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNRULES -- Number of states.  */
#define YYNSTATES  207

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   276

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      22,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,     2,     2,     2,     2,     2,     2,
      29,    30,    25,    23,    31,    24,     2,    26,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      33,    35,    32,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    27,     2,    28,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    10,    11,    13,    15,    17,    21,
      25,    29,    33,    35,    37,    40,    42,    44,    47,    50,
      52,    55,    57,    59,    61,    64,    66,    67,    72,    73,
      81,    82,    90,    91,    99,   100,   108,   113,   117,   119,
     121,   123,   124,   126,   130,   131,   133,   136,   139,   142,
     145,   148,   149,   150,   155,   161,   169,   170,   181,   183,
     185,   189,   190,   194,   202,   203,   205,   207,   210,   213,
     216,   219,   222,   226,   228,   229,   232,   235,   238,   241,
     244,   247,   252,   257,   262,   267,   272,   277,   282,   287,
     292,   297,   302,   306,   310,   314,   318,   322,   326,   330,
     332,   334,   336,   338,   340,   343,   345,   347,   352,   357,
     362,   367,   372,   377,   382,   387,   392,   397,   402,   404,
     406,   408,   410,   412,   414,   416
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      37,     0,    -1,    37,    39,    22,    -1,     1,    22,    -1,
      -1,     3,    -1,    14,    -1,    72,    -1,    38,    23,    38,
      -1,    38,    24,    38,    -1,    38,    25,    38,    -1,    38,
      26,    38,    -1,    48,    -1,    40,    -1,    39,    39,    -1,
      54,    -1,    41,    -1,    62,    13,    -1,    63,    13,    -1,
      43,    -1,    51,    13,    -1,    55,    -1,    52,    -1,    19,
      -1,    48,    13,    -1,    21,    -1,    -1,    42,    27,    39,
      28,    -1,    -1,    67,    14,    44,    29,    50,    30,    41,
      -1,    -1,    68,    14,    45,    29,    50,    30,    41,    -1,
      -1,    69,    14,    46,    29,    50,    30,    41,    -1,    -1,
      70,    14,    47,    29,    50,    30,    41,    -1,    14,    29,
      49,    30,    -1,    49,    31,    49,    -1,    14,    -1,    62,
      -1,     3,    -1,    -1,    62,    -1,    50,    31,    50,    -1,
      -1,    16,    -1,    16,     3,    -1,    16,    71,    -1,    16,
      15,    -1,    16,    14,    -1,    16,    38,    -1,    -1,    -1,
      18,    14,    53,    41,    -1,    11,    29,    64,    30,    40,
      -1,    11,    29,    64,    30,    40,    12,    40,    -1,    -1,
      17,    29,    56,    57,    13,    58,    13,    60,    30,    41,
      -1,    50,    -1,    63,    -1,    57,    31,    57,    -1,    -1,
      38,    59,    38,    -1,    38,    59,    38,    31,    38,    59,
      38,    -1,    -1,    32,    -1,    33,    -1,    34,    35,    -1,
      33,    35,    -1,    32,    35,    -1,    14,    61,    -1,    61,
      14,    -1,    60,    31,    60,    -1,    63,    -1,    -1,    23,
      23,    -1,    24,    24,    -1,    67,    14,    -1,    68,    14,
      -1,    69,    14,    -1,    14,    14,    -1,    68,    14,    35,
      15,    -1,    68,    14,    35,    48,    -1,    68,    14,    35,
      72,    -1,    67,    14,    35,    38,    -1,    69,    14,    35,
      71,    -1,    69,    14,    35,    72,    -1,    69,    14,    35,
      48,    -1,    69,    14,    35,    14,    -1,    68,    14,    35,
      14,    -1,    14,    14,    35,    14,    -1,    14,    14,    35,
      72,    -1,    14,    35,    15,    -1,    14,    35,    14,    -1,
      14,    35,    38,    -1,    14,    35,    71,    -1,    14,    35,
      72,    -1,    72,    35,    72,    -1,    72,    35,    14,    -1,
      72,    -1,    14,    -1,    65,    -1,    66,    -1,    14,    -1,
      34,    14,    -1,    72,    -1,    71,    -1,    14,    35,    35,
      15,    -1,    14,    35,    35,    14,    -1,    48,    35,    35,
      48,    -1,    72,    35,    35,    72,    -1,    72,    35,    35,
      14,    -1,    14,    35,    35,    71,    -1,    14,    34,    35,
      15,    -1,    14,    34,    35,    14,    -1,    72,    34,    35,
      72,    -1,    72,    34,    35,    14,    -1,    14,    34,    35,
      71,    -1,     4,    -1,     9,    -1,     6,    -1,    10,    -1,
       5,    -1,     7,    -1,     8,    -1,    20,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    46,    46,    47,    48,    50,    53,    56,    59,    60,
      61,    62,    63,    66,    67,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    83,    83,    91,    91,
      96,    96,   100,   100,   104,   104,   110,   113,   114,   115,
     116,   117,   120,   121,   122,   125,   126,   127,   128,   129,
     130,   131,   134,   134,   140,   141,   144,   144,   150,   151,
     152,   153,   155,   156,   157,   159,   160,   161,   162,   163,
     165,   166,   167,   168,   169,   172,   173,   175,   178,   181,
     184,   187,   190,   194,   197,   203,   206,   209,   213,   218,
     223,   228,   233,   236,   239,   243,   248,   249,   250,   251,
     252,   257,   258,   259,   262,   265,   266,   270,   273,   276,
     277,   278,   279,   291,   294,   297,   298,   299,   309,   310,
     313,   316,   318,   320,   321,   324
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "DOUBLE", "VOID", "STRING",
  "TRUE", "FALSE", "INT", "BOOL", "IF", "ELSE", "SEMICOLON", "NAME",
  "STRING_VALUE", "RETURN", "FOR", "CLASS_DECL", "VISIBILITY",
  "DATA_ACCESS", "INCLUDE", "'\\n'", "'+'", "'-'", "'*'", "'/'", "'{'",
  "'}'", "'('", "')'", "','", "'>'", "'<'", "'!'", "'='", "$accept",
  "program", "expression", "instruction", "single_instruction",
  "block_of_code", "$@1", "function", "$@2", "$@3", "$@4", "$@5",
  "function_usage", "function_parameters", "function_variables",
  "return_statement", "class_declaration", "$@6", "if_instruction",
  "for_statement", "$@7", "for_first_arg", "for_second_arg", "op",
  "for_third_arg", "increase_decrease", "variable_declaration",
  "assigning", "comparison", "equal_comparision", "not_equal_comparision",
  "numerical_type_variable", "characters_type_variable",
  "logical_type_variable", "void_type", "bool_value", "object_access", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,    10,    43,    45,    42,    47,   123,   125,    40,
      41,    44,    62,    60,    33,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    37,    37,    37,    38,    38,    38,    38,    38,
      38,    38,    38,    39,    39,    40,    40,    40,    40,    40,
      40,    40,    40,    40,    40,    40,    42,    41,    44,    43,
      45,    43,    46,    43,    47,    43,    48,    49,    49,    49,
      49,    49,    50,    50,    50,    51,    51,    51,    51,    51,
      51,    51,    53,    52,    54,    54,    56,    55,    57,    57,
      57,    57,    58,    58,    58,    59,    59,    59,    59,    59,
      60,    60,    60,    60,    60,    61,    61,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    64,    64,    64,    64,    64,    64,    65,    65,    65,
      65,    65,    65,    66,    66,    66,    66,    66,    67,    67,
      68,    69,    70,    71,    71,    72
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     0,     1,     1,     1,     3,     3,
       3,     3,     1,     1,     2,     1,     1,     2,     2,     1,
       2,     1,     1,     1,     2,     1,     0,     4,     0,     7,
       0,     7,     0,     7,     0,     7,     4,     3,     1,     1,
       1,     0,     1,     3,     0,     1,     2,     2,     2,     2,
       2,     0,     0,     4,     5,     7,     0,    10,     1,     1,
       3,     0,     3,     7,     0,     1,     1,     2,     2,     2,
       2,     2,     3,     1,     0,     2,     2,     2,     2,     2,
       2,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     2,     1,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    26,     3,     1,   118,   122,   120,   119,   121,
       0,   100,    45,     0,     0,    23,   125,    25,    26,    13,
      16,     0,    19,     0,     0,    22,    15,    21,     0,     0,
       0,     0,     0,     0,    99,     0,    80,    41,     0,     5,
     123,   124,     6,    48,    50,    12,    47,     7,    56,    52,
       2,    14,    26,    24,    20,    17,    18,    28,    30,    32,
      34,     0,   103,     0,     0,     0,   101,   102,   106,   105,
       0,    40,    38,     0,    39,     0,     0,     0,     5,     6,
      92,    94,    95,     7,     0,     0,     0,     0,    44,    26,
      26,     0,     0,     0,     0,     0,     0,     0,    98,    97,
       0,     0,   104,     0,    26,     0,     0,    90,    91,    36,
      41,    77,    78,    79,     6,     8,     9,    10,    11,   100,
      58,     0,    42,    59,    53,    27,    84,    44,    89,    81,
      82,    83,    44,    88,    87,    85,    86,    44,    44,     0,
       0,     0,    54,     0,     0,    37,    44,    64,    44,     0,
       0,     0,     0,     0,   114,   113,   117,   108,   107,   112,
       0,   109,    26,   116,   115,   111,   110,    43,     0,     0,
      60,    26,    26,    26,    26,    55,    65,    66,     0,     0,
      74,    29,    31,    33,    35,    69,    68,    67,    62,   100,
       0,     0,     0,     0,    73,     0,    70,    75,    76,    26,
      74,    71,     0,    57,    72,     0,    63
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    44,    51,    19,    20,    21,    22,    92,    94,
      96,    97,    45,    73,   120,    24,    25,    89,    26,    27,
      88,   121,   169,   179,   192,   193,    28,    29,    65,    66,
      67,    75,    76,    77,    33,    46,    34
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -104
static const yytype_int16 yypact[] =
{
     181,   -14,   225,  -104,  -104,  -104,  -104,  -104,  -104,  -104,
      15,    -4,   139,    31,    20,  -104,  -104,  -104,   243,  -104,
    -104,    -3,  -104,    55,    63,  -104,  -104,  -104,    65,    72,
      87,    92,    94,   103,    -8,    -5,    85,   322,   149,  -104,
    -104,  -104,    99,  -104,   154,  -104,  -104,  -104,  -104,  -104,
    -104,   280,   262,  -104,  -104,  -104,  -104,    -2,     0,     5,
    -104,    95,    76,   116,   106,   108,  -104,  -104,  -104,    13,
     113,  -104,   141,    57,  -104,   144,   156,   159,  -104,    99,
    -104,   154,  -104,  -104,    66,    66,    66,    66,   298,  -104,
     200,    66,   155,    77,   167,   129,   174,   178,  -104,  -104,
     140,   177,  -104,   180,   262,   189,   205,  -104,  -104,  -104,
     322,   223,   234,   235,    99,   154,   154,   154,   154,     8,
     206,     6,  -104,  -104,  -104,  -104,   154,   329,    99,  -104,
    -104,  -104,   329,    99,  -104,  -104,  -104,   329,   329,   334,
     343,   241,   265,   146,   148,   256,   329,    66,   298,   141,
     158,   192,   196,   202,  -104,  -104,  -104,  -104,  -104,  -104,
      99,  -104,   262,  -104,  -104,  -104,  -104,   206,   290,   261,
     257,  -104,  -104,  -104,  -104,  -104,   258,   260,   268,    66,
      22,  -104,  -104,  -104,  -104,  -104,  -104,  -104,   321,    47,
     269,   281,   220,   292,  -104,    66,  -104,  -104,  -104,  -104,
      22,  -104,   290,  -104,   278,    66,   154
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -104,  -104,   -34,     4,  -103,   -48,  -104,  -104,  -104,  -104,
    -104,  -104,     3,   201,   -43,  -104,  -104,  -104,  -104,  -104,
    -104,   162,  -104,   115,   119,   131,     2,   -81,  -104,  -104,
    -104,    10,    12,    14,  -104,   -18,   -12
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -80
static const yytype_int16 yytable[] =
{
      47,   142,    40,    41,    81,    23,    18,   123,     3,    62,
      36,   -77,    30,   -78,    31,    16,    32,    68,   -79,   147,
      82,    23,    36,    69,    52,    37,    83,    61,    30,    63,
      31,    38,    32,    91,    49,    93,   189,   148,    64,    74,
      95,   124,    16,    38,    35,   190,   191,   105,   106,    99,
     115,   116,   117,   118,    23,    23,    90,   126,   108,   175,
      48,    30,    30,    31,    31,    32,    32,   123,    53,    78,
     190,   191,    47,    47,    47,    47,    54,   135,    55,    47,
     114,   131,    38,   136,   150,    56,    16,   109,   110,   151,
     122,   128,   129,    23,   152,   153,   130,    16,   134,   194,
      30,    57,    31,   167,    32,    37,    58,    23,    59,    98,
     100,   101,    74,   168,    30,    16,    31,    60,    32,   194,
      70,   156,   159,   181,   182,   183,   184,   107,    37,   122,
     102,   164,   166,    16,   122,    47,    40,    41,   104,   122,
     122,   103,    39,   133,   161,   188,    40,    41,   122,    16,
     122,   203,    78,    42,    43,    36,    40,    41,   111,    16,
     163,   202,   165,    79,    80,    23,    16,    47,    16,    16,
     112,   206,    30,   113,    31,   139,    32,    84,    85,    86,
      87,    -4,     1,    47,   127,    -4,    -4,    -4,   171,   146,
      -4,    -4,    -4,    47,    -4,    -4,   132,    -4,    -4,    -4,
      -4,    -4,    -4,   137,     5,     6,     7,   138,    -4,     8,
       9,    10,   140,   -51,    11,   141,    12,    13,    14,    15,
      16,    17,   172,   146,   143,     4,   173,   146,   125,     5,
       6,     7,   174,   146,     8,     9,    10,   146,   -51,    11,
     144,    12,    13,    14,    15,    16,    17,     5,     6,     7,
     199,   200,     8,     9,    10,   160,   -51,    11,    91,    12,
      13,    14,    15,    16,    17,    50,     5,     6,     7,    93,
      95,     8,     9,    10,   180,   -51,    11,   162,    12,    13,
      14,    15,    16,    17,     5,     6,     7,   110,   148,     8,
       9,    10,   197,   185,    11,   186,    12,    13,    14,    15,
      16,    17,     5,   187,     7,   198,   201,     8,     9,   200,
     170,   145,   119,    84,    85,    86,    87,   205,    16,   204,
     196,     0,   176,   177,   178,    71,     5,     0,     7,     0,
       0,     8,     9,     5,     0,     7,    72,     0,     8,     9,
       0,    40,    41,   149,    84,    85,    86,    87,   154,   155,
      40,    41,   195,     0,     0,     0,     0,   157,   158
};

static const yytype_int16 yycheck[] =
{
      12,   104,     7,     8,    38,     2,     2,    88,    22,    14,
      14,    13,     2,    13,     2,    20,     2,    35,    13,    13,
      38,    18,    14,    35,    27,    29,    38,    35,    18,    34,
      18,    35,    18,    35,    14,    35,    14,    31,    35,    37,
      35,    89,    20,    35,    29,    23,    24,    34,    35,    61,
      84,    85,    86,    87,    51,    52,    52,    91,    70,   162,
      29,    51,    52,    51,    52,    51,    52,   148,    13,     3,
      23,    24,    84,    85,    86,    87,    13,    95,    13,    91,
      14,    93,    35,    95,   127,    13,    20,    30,    31,   132,
      88,    14,    15,    90,   137,   138,    93,    20,    95,   180,
      90,    14,    90,   146,    90,    29,    14,   104,    14,    14,
      34,    35,   110,   147,   104,    20,   104,    14,   104,   200,
      35,   139,   140,   171,   172,   173,   174,    14,    29,   127,
      14,   143,   144,    20,   132,   147,     7,     8,    30,   137,
     138,    35,     3,    14,   141,   179,     7,     8,   146,    20,
     148,   199,     3,    14,    15,    14,     7,     8,    14,    20,
      14,   195,    14,    14,    15,   162,    20,   179,    20,    20,
      14,   205,   162,    14,   162,    35,   162,    23,    24,    25,
      26,     0,     1,   195,    29,     4,     5,     6,    30,    31,
       9,    10,    11,   205,    13,    14,    29,    16,    17,    18,
      19,    20,    21,    29,     4,     5,     6,    29,    27,     9,
      10,    11,    35,    13,    14,    35,    16,    17,    18,    19,
      20,    21,    30,    31,    35,     0,    30,    31,    28,     4,
       5,     6,    30,    31,     9,    10,    11,    31,    13,    14,
      35,    16,    17,    18,    19,    20,    21,     4,     5,     6,
      30,    31,     9,    10,    11,    14,    13,    14,    35,    16,
      17,    18,    19,    20,    21,    22,     4,     5,     6,    35,
      35,     9,    10,    11,    13,    13,    14,    12,    16,    17,
      18,    19,    20,    21,     4,     5,     6,    31,    31,     9,
      10,    11,    23,    35,    14,    35,    16,    17,    18,    19,
      20,    21,     4,    35,     6,    24,    14,     9,    10,    31,
     148,   110,    14,    23,    24,    25,    26,   202,    20,   200,
     189,    -1,    32,    33,    34,     3,     4,    -1,     6,    -1,
      -1,     9,    10,     4,    -1,     6,    14,    -1,     9,    10,
      -1,     7,     8,    14,    23,    24,    25,    26,    14,    15,
       7,     8,    31,    -1,    -1,    -1,    -1,    14,    15
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    37,    22,     0,     4,     5,     6,     9,    10,
      11,    14,    16,    17,    18,    19,    20,    21,    39,    40,
      41,    42,    43,    48,    51,    52,    54,    55,    62,    63,
      67,    68,    69,    70,    72,    29,    14,    29,    35,     3,
       7,     8,    14,    15,    38,    48,    71,    72,    29,    14,
      22,    39,    27,    13,    13,    13,    13,    14,    14,    14,
      14,    35,    14,    34,    48,    64,    65,    66,    71,    72,
      35,     3,    14,    49,    62,    67,    68,    69,     3,    14,
      15,    38,    71,    72,    23,    24,    25,    26,    56,    53,
      39,    35,    44,    35,    45,    35,    46,    47,    14,    72,
      34,    35,    14,    35,    30,    34,    35,    14,    72,    30,
      31,    14,    14,    14,    14,    38,    38,    38,    38,    14,
      50,    57,    62,    63,    41,    28,    38,    29,    14,    15,
      48,    72,    29,    14,    48,    71,    72,    29,    29,    35,
      35,    35,    40,    35,    35,    49,    31,    13,    31,    14,
      50,    50,    50,    50,    14,    15,    71,    14,    15,    71,
      14,    48,    12,    14,    72,    14,    72,    50,    38,    58,
      57,    30,    30,    30,    30,    40,    32,    33,    34,    59,
      13,    41,    41,    41,    41,    35,    35,    35,    38,    14,
      23,    24,    60,    61,    63,    31,    61,    23,    24,    30,
      31,    14,    38,    41,    60,    59,    38
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
#line 46 "parser.y"
    { printf("dobre wyr c++ \n"); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 47 "parser.y"
    { yyerror("Obsluga bledu"); yyerrok;;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 50 "parser.y"
    { 
	isAssigned = true;
;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 53 "parser.y"
    { 
	isAssigned = handleNameInAssigning((yyvsp[(1) - (1)].stype), NUMERICAL, VAR); 
;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 56 "parser.y"
    {
	isAssigned = true;
;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 59 "parser.y"
    { ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 60 "parser.y"
    { ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 61 "parser.y"
    { ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 62 "parser.y"
    { ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 63 "parser.y"
    { nameInTypeExistsInOrigin(getUsedFunctionName(), NUMERICAL, FUNC); setUsedFunctionName(NONE); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 78 "parser.y"
    { checkIfInClass(); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 79 "parser.y"
    { nameExistsInOrigin(getUsedFunctionName(), FUNC); setUsedFunctionName(NONE); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 80 "parser.y"
    { handleInclude((yyvsp[(1) - (1)].stype)); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 83 "parser.y"
    {	
	//printf ("setFlagLocalVariable \n"); 
	startedBlockOfCode();
;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 86 "parser.y"
    {
	//printf ("endedBlockOfCode \n"); 
	endedBlockOfCode();
;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 91 "parser.y"
    { printf("numFuncBEg \n"); setLastFunctionType(NUMERICAL); handleFunctionHeader(); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 91 "parser.y"
    { 
	printf("numerical func \n"); 
	validateEndOfFunction();
	handleNewName((yyvsp[(2) - (7)].stype), NUMERICAL, FUNC);
;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 96 "parser.y"
    { printf("stringFuncBEg \n"); setLastFunctionType(CHARACTERS); handleFunctionHeader();;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 96 "parser.y"
    { 
	printf("string func \n"); 
	handleNewName((yyvsp[(2) - (7)].stype), CHARACTERS, FUNC);
;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 100 "parser.y"
    { printf("boolFuncBEg \n"); setLastFunctionType(LOGICAL); handleFunctionHeader(); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 100 "parser.y"
    { 
	printf("bool func \n"); 
	handleNewName((yyvsp[(2) - (7)].stype), LOGICAL, FUNC);
;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 104 "parser.y"
    { printf("voidFuncBEg \n"); setLastFunctionType(VOIDD); handleFunctionHeader();;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 104 "parser.y"
    {
	printf("void func \n"); 
	handleNewName((yyvsp[(2) - (7)].stype), VOIDD, FUNC);
;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 110 "parser.y"
    { setUsedFunctionName((yyvsp[(1) - (4)].stype)) ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 114 "parser.y"
    { nameExistsInOrigin((yyvsp[(1) - (1)].stype), VAR); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 125 "parser.y"
    { validateReturn(VOIDD) ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 126 "parser.y"
    { validateReturn(NUMERICAL) ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 127 "parser.y"
    { validateReturn(LOGICAL) ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 128 "parser.y"
    { validateReturn(CHARACTERS) ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 129 "parser.y"
    { validateReturnWithVarName((yyvsp[(2) - (2)].stype)) ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 130 "parser.y"
    { validateReturn(NUMERICAL) ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 134 "parser.y"
    { setClassFlag(true); handleNewName((yyvsp[(2) - (2)].stype), NONE, CLASS);;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 134 "parser.y"
    {
	printf("class \n");
	setClassFlag(false);
	;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 144 "parser.y"
    { 
	handleForStatement();
	;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 175 "parser.y"
    {
	handleNewName((yyvsp[(2) - (2)].stype), NUMERICAL, VAR);
;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 178 "parser.y"
    { 
	handleNewName((yyvsp[(2) - (2)].stype), CHARACTERS, VAR);
;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 181 "parser.y"
    { 
	handleNewName((yyvsp[(2) - (2)].stype), LOGICAL, VAR);
;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 184 "parser.y"
    {
	handleNewName((yyvsp[(2) - (2)].stype), (yyvsp[(1) - (2)].stype), CLASS);
;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 187 "parser.y"
    {
	handleNewName((yyvsp[(2) - (4)].stype), CHARACTERS, VAR);
;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 190 "parser.y"
    {
	handleNewName((yyvsp[(2) - (4)].stype), CHARACTERS, VAR);
	nameInTypeExistsInOrigin(getUsedFunctionName(), CHARACTERS, FUNC); setUsedFunctionName(NONE);
;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 194 "parser.y"
    {
	handleNewName((yyvsp[(2) - (4)].stype), CHARACTERS, VAR);
;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 197 "parser.y"
    {
	if (isAssigned) {
		handleNewName((yyvsp[(2) - (4)].stype), NUMERICAL, VAR); 
	}
	isAssigned = false;
;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 203 "parser.y"
    {
	handleNewName((yyvsp[(2) - (4)].stype), LOGICAL, VAR); 
;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 206 "parser.y"
    {
	handleNewName((yyvsp[(2) - (4)].stype), LOGICAL, VAR); 
;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 209 "parser.y"
    {
	handleNewName((yyvsp[(2) - (4)].stype), LOGICAL, VAR); 
	nameInTypeExistsInOrigin(getUsedFunctionName(), LOGICAL, FUNC); setUsedFunctionName(NONE);
;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 213 "parser.y"
    {
	if (handleNameInAssigning((yyvsp[(4) - (4)].stype), LOGICAL, VAR)) {
		handleNewName((yyvsp[(2) - (4)].stype), LOGICAL, VAR); 
	}
;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 218 "parser.y"
    {
	if (handleNameInAssigning((yyvsp[(4) - (4)].stype), CHARACTERS, VAR)) {
		handleNewName((yyvsp[(2) - (4)].stype), CHARACTERS, VAR); 
	}
;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 223 "parser.y"
    {
	if (handleNameInAssigning((yyvsp[(4) - (4)].stype), (yyvsp[(1) - (4)].stype), VAR)) {
		handleNewName((yyvsp[(2) - (4)].stype), (yyvsp[(1) - (4)].stype), CLASS);
	}
;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 228 "parser.y"
    {
	handleNewName((yyvsp[(2) - (4)].stype), (yyvsp[(1) - (4)].stype), CLASS);
;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 233 "parser.y"
    { 
	handleNameInAssigning((yyvsp[(1) - (3)].stype), CHARACTERS, VAR);  
;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 236 "parser.y"
    {
	validateTwoAssigningOperants((yyvsp[(1) - (3)].stype), (yyvsp[(3) - (3)].stype), VAR)
;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 239 "parser.y"
    {
	nameInTypeExistsInOrigin((yyvsp[(1) - (3)].stype), NUMERICAL, VAR); //only 'int' type is allowed
	isAssigned = false;
;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 243 "parser.y"
    {
	if (handleNameInAssigning((yyvsp[(1) - (3)].stype), LOGICAL, VAR)) {
		nameExistsInOrigin((yyvsp[(1) - (3)].stype), VAR);
	}
;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 252 "parser.y"
    {
	nameExistsInOrigin((yyvsp[(1) - (1)].stype), VAR);
;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 259 "parser.y"
    {
	nameInTypeExistsInOrigin((yyvsp[(1) - (1)].stype), LOGICAL, VAR); //only 'bool' type is allowed
;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 262 "parser.y"
    {
	nameInTypeExistsInOrigin((yyvsp[(2) - (2)].stype), LOGICAL, VAR); //only 'bool' type is allowed
;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 270 "parser.y"
    { 
	handleNameInAssigning((yyvsp[(1) - (4)].stype), CHARACTERS, VAR);
;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 273 "parser.y"
    {
	validateTwoAssigningOperants((yyvsp[(1) - (4)].stype), (yyvsp[(4) - (4)].stype), VAR)
;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 279 "parser.y"
    {
	if (handleNameInAssigning((yyvsp[(1) - (4)].stype), LOGICAL, VAR)) {
		nameExistsInOrigin((yyvsp[(1) - (4)].stype), VAR);
	}
;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 291 "parser.y"
    { 
	handleNameInAssigning((yyvsp[(1) - (4)].stype), CHARACTERS, VAR);
;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 294 "parser.y"
    {
	validateTwoAssigningOperants((yyvsp[(1) - (4)].stype), (yyvsp[(4) - (4)].stype), VAR)
;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 299 "parser.y"
    {
	if (handleNameInAssigning((yyvsp[(1) - (4)].stype), LOGICAL, VAR)) {
		nameExistsInOrigin((yyvsp[(1) - (4)].stype), VAR);
	}
;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 324 "parser.y"
    {
	validateExistenceAndIsNotPrimitve(getNameFromDataAccess((yyvsp[(1) - (1)].stype)));
;}
    break;



/* Line 1455 of yacc.c  */
#line 2138 "parser.c"
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
#line 329 "parser.y"

void yyerror(char *s) {
	fprintf(stderr, "%s\n", s);
}

int main(void) {
	initStack();
	yyparse();
	return 0;
}
