
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
#define YYLAST   353

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
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
       0,     0,     3,     6,     9,    10,    12,    14,    16,    20,
      24,    28,    32,    34,    36,    39,    41,    43,    45,    48,
      51,    53,    56,    58,    60,    62,    65,    67,    68,    73,
      74,    82,    83,    91,    92,   100,   101,   109,   114,   118,
     120,   122,   124,   125,   127,   131,   132,   134,   137,   140,
     143,   146,   149,   150,   151,   156,   162,   170,   171,   182,
     184,   186,   190,   191,   195,   203,   204,   206,   208,   211,
     214,   217,   220,   223,   227,   229,   230,   233,   236,   239,
     242,   245,   248,   253,   258,   263,   268,   273,   278,   283,
     288,   293,   298,   303,   307,   311,   315,   319,   323,   327,
     331,   333,   335,   337,   339,   341,   344,   346,   348,   353,
     358,   363,   368,   373,   378,   383,   388,   393,   398,   403,
     405,   407,   409,   411,   413,   415,   417
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      37,     0,    -1,    37,    39,    -1,     1,    22,    -1,    -1,
       3,    -1,    14,    -1,    72,    -1,    38,    23,    38,    -1,
      38,    24,    38,    -1,    38,    25,    38,    -1,    38,    26,
      38,    -1,    48,    -1,    40,    -1,    39,    39,    -1,    22,
      -1,    54,    -1,    41,    -1,    62,    13,    -1,    63,    13,
      -1,    43,    -1,    51,    13,    -1,    55,    -1,    52,    -1,
      19,    -1,    48,    13,    -1,    21,    -1,    -1,    42,    27,
      39,    28,    -1,    -1,    67,    14,    44,    29,    50,    30,
      41,    -1,    -1,    68,    14,    45,    29,    50,    30,    41,
      -1,    -1,    69,    14,    46,    29,    50,    30,    41,    -1,
      -1,    70,    14,    47,    29,    50,    30,    41,    -1,    14,
      29,    49,    30,    -1,    49,    31,    49,    -1,    14,    -1,
      62,    -1,     3,    -1,    -1,    62,    -1,    50,    31,    50,
      -1,    -1,    16,    -1,    16,     3,    -1,    16,    71,    -1,
      16,    15,    -1,    16,    14,    -1,    16,    38,    -1,    -1,
      -1,    18,    14,    53,    41,    -1,    11,    29,    64,    30,
      40,    -1,    11,    29,    64,    30,    40,    12,    40,    -1,
      -1,    17,    29,    56,    57,    13,    58,    13,    60,    30,
      41,    -1,    50,    -1,    63,    -1,    57,    31,    57,    -1,
      -1,    38,    59,    38,    -1,    38,    59,    38,    31,    38,
      59,    38,    -1,    -1,    32,    -1,    33,    -1,    34,    35,
      -1,    33,    35,    -1,    32,    35,    -1,    14,    61,    -1,
      61,    14,    -1,    60,    31,    60,    -1,    63,    -1,    -1,
      23,    23,    -1,    24,    24,    -1,    67,    14,    -1,    68,
      14,    -1,    69,    14,    -1,    14,    14,    -1,    68,    14,
      35,    15,    -1,    68,    14,    35,    48,    -1,    68,    14,
      35,    72,    -1,    67,    14,    35,    38,    -1,    69,    14,
      35,    71,    -1,    69,    14,    35,    72,    -1,    69,    14,
      35,    48,    -1,    69,    14,    35,    14,    -1,    68,    14,
      35,    14,    -1,    14,    14,    35,    14,    -1,    14,    14,
      35,    72,    -1,    14,    35,    15,    -1,    14,    35,    14,
      -1,    14,    35,    38,    -1,    14,    35,    71,    -1,    14,
      35,    72,    -1,    72,    35,    72,    -1,    72,    35,    14,
      -1,    72,    -1,    14,    -1,    65,    -1,    66,    -1,    14,
      -1,    34,    14,    -1,    72,    -1,    71,    -1,    14,    35,
      35,    15,    -1,    14,    35,    35,    14,    -1,    48,    35,
      35,    48,    -1,    72,    35,    35,    72,    -1,    72,    35,
      35,    14,    -1,    14,    35,    35,    71,    -1,    14,    34,
      35,    15,    -1,    14,    34,    35,    14,    -1,    72,    34,
      35,    72,    -1,    72,    34,    35,    14,    -1,    14,    34,
      35,    71,    -1,     4,    -1,     9,    -1,     6,    -1,    10,
      -1,     5,    -1,     7,    -1,     8,    -1,    20,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    46,    46,    48,    49,    51,    54,    57,    60,    61,
      62,    63,    64,    67,    68,    69,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    85,    85,    93,
      93,    98,    98,   102,   102,   106,   106,   112,   115,   116,
     117,   118,   119,   122,   123,   124,   127,   128,   129,   130,
     131,   132,   133,   136,   136,   142,   143,   146,   146,   152,
     153,   154,   155,   157,   158,   159,   161,   162,   163,   164,
     165,   167,   168,   169,   170,   171,   174,   175,   177,   180,
     183,   186,   189,   192,   196,   199,   205,   208,   211,   215,
     220,   225,   230,   235,   238,   241,   245,   250,   251,   252,
     253,   254,   259,   260,   261,   264,   267,   268,   272,   275,
     278,   279,   280,   281,   293,   296,   299,   300,   301,   311,
     312,   315,   318,   320,   322,   323,   326
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
      38,    38,    38,    39,    39,    39,    40,    40,    40,    40,
      40,    40,    40,    40,    40,    40,    40,    42,    41,    44,
      43,    45,    43,    46,    43,    47,    43,    48,    49,    49,
      49,    49,    49,    50,    50,    50,    51,    51,    51,    51,
      51,    51,    51,    53,    52,    54,    54,    56,    55,    57,
      57,    57,    57,    58,    58,    58,    59,    59,    59,    59,
      59,    60,    60,    60,    60,    60,    61,    61,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    64,    64,    64,    64,    64,    64,    65,    65,
      65,    65,    65,    65,    66,    66,    66,    66,    66,    67,
      67,    68,    69,    70,    71,    71,    72
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     1,     1,     1,     3,     3,
       3,     3,     1,     1,     2,     1,     1,     1,     2,     2,
       1,     2,     1,     1,     1,     2,     1,     0,     4,     0,
       7,     0,     7,     0,     7,     0,     7,     4,     3,     1,
       1,     1,     0,     1,     3,     0,     1,     2,     2,     2,
       2,     2,     0,     0,     4,     5,     7,     0,    10,     1,
       1,     3,     0,     3,     7,     0,     1,     1,     2,     2,
       2,     2,     2,     3,     1,     0,     2,     2,     2,     2,
       2,     2,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     2,     1,     1,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    27,     3,     1,   119,   123,   121,   120,   122,
       0,   101,    46,     0,     0,    24,   126,    26,    15,     2,
      13,    17,     0,    20,     0,     0,    23,    16,    22,     0,
       0,     0,     0,     0,     0,   100,     0,    81,    42,     0,
       5,   124,   125,     6,    49,    51,    12,    48,     7,    57,
      53,    14,    27,    25,    21,    18,    19,    29,    31,    33,
      35,     0,   104,     0,     0,     0,   102,   103,   107,   106,
       0,    41,    39,     0,    40,     0,     0,     0,     5,     6,
      93,    95,    96,     7,     0,     0,     0,     0,    45,    27,
      27,     0,     0,     0,     0,     0,     0,     0,    99,    98,
       0,     0,   105,     0,    27,     0,     0,    91,    92,    37,
      42,    78,    79,    80,     6,     8,     9,    10,    11,   101,
      59,     0,    43,    60,    54,    28,    85,    45,    90,    82,
      83,    84,    45,    89,    88,    86,    87,    45,    45,     0,
       0,     0,    55,     0,     0,    38,    45,    65,    45,     0,
       0,     0,     0,     0,   115,   114,   118,   109,   108,   113,
       0,   110,    27,   117,   116,   112,   111,    44,     0,     0,
      61,    27,    27,    27,    27,    56,    66,    67,     0,     0,
      75,    30,    32,    34,    36,    70,    69,    68,    63,   101,
       0,     0,     0,     0,    74,     0,    71,    76,    77,    27,
      75,    72,     0,    58,    73,     0,    64
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    45,    51,    20,    21,    22,    23,    92,    94,
      96,    97,    46,    73,   120,    25,    26,    89,    27,    28,
      88,   121,   169,   179,   192,   193,    29,    30,    65,    66,
      67,    75,    76,    77,    34,    47,    35
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -104
static const yytype_int16 yypact[] =
{
     181,   -11,   225,  -104,  -104,  -104,  -104,  -104,  -104,  -104,
       9,     8,   133,    19,    31,  -104,  -104,  -104,  -104,   263,
    -104,  -104,    51,  -104,    15,    80,  -104,  -104,  -104,   104,
     109,    98,   125,   129,   132,   120,     1,   122,   324,   155,
    -104,  -104,  -104,   136,  -104,   325,  -104,  -104,  -104,  -104,
    -104,   263,   244,  -104,  -104,  -104,  -104,   -10,    -3,     5,
    -104,    16,   144,   154,   142,   166,  -104,  -104,  -104,    36,
      27,  -104,   170,    99,  -104,   198,   201,   218,  -104,   136,
    -104,   325,  -104,  -104,    -1,    -1,    -1,    -1,   300,  -104,
     200,    -1,   151,    75,   178,    78,   204,   208,  -104,  -104,
     205,   216,  -104,   217,   282,   221,   224,  -104,  -104,  -104,
     324,   235,   236,   240,   136,   325,   325,   325,   325,    25,
     245,    13,  -104,  -104,  -104,  -104,   325,   150,   136,  -104,
    -104,  -104,   150,   136,  -104,  -104,  -104,   150,   150,   329,
     338,   264,   277,    77,    95,   259,   150,    -1,   300,   170,
     107,   119,   158,   193,  -104,  -104,  -104,  -104,  -104,  -104,
     136,  -104,   282,  -104,  -104,  -104,  -104,   245,   292,   281,
     266,  -104,  -104,  -104,  -104,  -104,   270,   272,   273,    -1,
      87,  -104,  -104,  -104,  -104,  -104,  -104,  -104,   316,    45,
     288,   289,   196,   298,  -104,    -1,  -104,  -104,  -104,  -104,
      87,  -104,   292,  -104,   290,    -1,   325
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -104,  -104,   -34,     2,  -103,   -47,  -104,  -104,  -104,  -104,
    -104,  -104,    10,   209,   -50,  -104,  -104,  -104,  -104,  -104,
    -104,   174,  -104,   121,   131,   140,    -4,   -81,  -104,  -104,
    -104,     4,    12,    14,  -104,   -19,   -12
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -81
static const yytype_int16 yytable[] =
{
      48,   142,    78,   -78,    19,    81,    31,   123,    41,    42,
     -79,     3,    24,   114,    32,    62,    33,    68,   -80,    16,
      82,    16,    37,    31,    69,    91,   147,    83,    53,    24,
      98,    32,    93,    33,    74,    63,    16,    38,    36,    37,
      95,   107,   124,    39,   148,    50,    64,    16,    49,    99,
     115,   116,   117,   118,    90,    31,    31,   126,   108,   175,
      39,    24,    24,    32,    32,    33,    33,   123,   190,   191,
     105,   106,    48,    48,    48,    48,   135,   150,    52,    48,
      39,   131,   151,   136,   122,    41,    42,   152,   153,   128,
     129,   163,   133,    54,    31,    16,   167,    16,    16,   194,
      24,   189,    32,   130,    33,   134,    74,    16,    31,   165,
     190,   191,    57,   168,    24,    16,    32,    55,    33,   194,
     156,   159,    56,   122,   181,   182,   183,   184,   122,   109,
     110,   164,   166,   122,   122,    48,    40,   171,   146,    58,
      41,    42,   122,    59,   122,   188,    60,    43,    44,   172,
     146,   161,   203,    16,     5,    61,     7,    70,    78,     8,
       9,   202,    41,    42,   149,    38,    31,    48,   102,    79,
      80,   206,    24,    38,    32,    16,    33,   103,   100,   101,
     127,    -4,     1,    48,    37,    -4,    -4,    -4,   173,   146,
      -4,    -4,    -4,    48,    -4,    -4,   104,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,     5,     6,     7,   132,    -4,     8,
       9,    10,   111,   -52,    11,   112,    12,    13,    14,    15,
      16,    17,    18,   174,   146,     4,   199,   200,   125,     5,
       6,     7,   113,   137,     8,     9,    10,   138,   -52,    11,
     139,    12,    13,    14,    15,    16,    17,    18,     5,     6,
       7,   140,   141,     8,     9,    10,   143,   -52,    11,   144,
      12,    13,    14,    15,    16,    17,    18,     5,     6,     7,
      91,    93,     8,     9,    10,    95,   146,    11,   160,    12,
      13,    14,    15,    16,    17,    18,     5,     6,     7,   162,
     110,     8,     9,    10,   180,   -52,    11,   148,    12,    13,
      14,    15,    16,    17,     5,   185,     7,   186,   187,     8,
       9,   197,   201,   198,   119,    84,    85,    86,    87,   145,
      16,   200,   170,   205,   176,   177,   178,    71,     5,   196,
       7,   204,     0,     8,     9,     0,    41,    42,    72,    84,
      85,    86,    87,   154,   155,    41,    42,   195,    84,    85,
      86,    87,   157,   158
};

static const yytype_int16 yycheck[] =
{
      12,   104,     3,    13,     2,    39,     2,    88,     7,     8,
      13,    22,     2,    14,     2,    14,     2,    36,    13,    20,
      39,    20,    14,    19,    36,    35,    13,    39,    13,    19,
      14,    19,    35,    19,    38,    34,    20,    29,    29,    14,
      35,    14,    89,    35,    31,    14,    36,    20,    29,    61,
      84,    85,    86,    87,    52,    51,    52,    91,    70,   162,
      35,    51,    52,    51,    52,    51,    52,   148,    23,    24,
      34,    35,    84,    85,    86,    87,    95,   127,    27,    91,
      35,    93,   132,    95,    88,     7,     8,   137,   138,    14,
      15,    14,    14,    13,    90,    20,   146,    20,    20,   180,
      90,    14,    90,    93,    90,    95,   110,    20,   104,    14,
      23,    24,    14,   147,   104,    20,   104,    13,   104,   200,
     139,   140,    13,   127,   171,   172,   173,   174,   132,    30,
      31,   143,   144,   137,   138,   147,     3,    30,    31,    14,
       7,     8,   146,    14,   148,   179,    14,    14,    15,    30,
      31,   141,   199,    20,     4,    35,     6,    35,     3,     9,
      10,   195,     7,     8,    14,    29,   162,   179,    14,    14,
      15,   205,   162,    29,   162,    20,   162,    35,    34,    35,
      29,     0,     1,   195,    14,     4,     5,     6,    30,    31,
       9,    10,    11,   205,    13,    14,    30,    16,    17,    18,
      19,    20,    21,    22,     4,     5,     6,    29,    27,     9,
      10,    11,    14,    13,    14,    14,    16,    17,    18,    19,
      20,    21,    22,    30,    31,     0,    30,    31,    28,     4,
       5,     6,    14,    29,     9,    10,    11,    29,    13,    14,
      35,    16,    17,    18,    19,    20,    21,    22,     4,     5,
       6,    35,    35,     9,    10,    11,    35,    13,    14,    35,
      16,    17,    18,    19,    20,    21,    22,     4,     5,     6,
      35,    35,     9,    10,    11,    35,    31,    14,    14,    16,
      17,    18,    19,    20,    21,    22,     4,     5,     6,    12,
      31,     9,    10,    11,    13,    13,    14,    31,    16,    17,
      18,    19,    20,    21,     4,    35,     6,    35,    35,     9,
      10,    23,    14,    24,    14,    23,    24,    25,    26,   110,
      20,    31,   148,   202,    32,    33,    34,     3,     4,   189,
       6,   200,    -1,     9,    10,    -1,     7,     8,    14,    23,
      24,    25,    26,    14,    15,     7,     8,    31,    23,    24,
      25,    26,    14,    15
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    37,    22,     0,     4,     5,     6,     9,    10,
      11,    14,    16,    17,    18,    19,    20,    21,    22,    39,
      40,    41,    42,    43,    48,    51,    52,    54,    55,    62,
      63,    67,    68,    69,    70,    72,    29,    14,    29,    35,
       3,     7,     8,    14,    15,    38,    48,    71,    72,    29,
      14,    39,    27,    13,    13,    13,    13,    14,    14,    14,
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
    { printf("dobre wyr c++ \n"); 
;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 48 "parser.y"
    { yyerror("Obsluga bledu"); yyerrok;;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 51 "parser.y"
    { 
	isAssigned = true;
;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 54 "parser.y"
    { 
	isAssigned = handleNameInAssigning((yyvsp[(1) - (1)].stype), NUMERICAL, VAR); 
;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 57 "parser.y"
    {
	isAssigned = true;
;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 60 "parser.y"
    { ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 61 "parser.y"
    { ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 62 "parser.y"
    { ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 63 "parser.y"
    { ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 64 "parser.y"
    { nameInTypeExistsInOrigin(getUsedFunctionName(), NUMERICAL, FUNC); setUsedFunctionName(NONE); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 80 "parser.y"
    { checkIfInClass(); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 81 "parser.y"
    { nameExistsInOrigin(getUsedFunctionName(), FUNC); setUsedFunctionName(NONE); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 82 "parser.y"
    { handleInclude((yyvsp[(1) - (1)].stype)); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 85 "parser.y"
    {	
	//printf ("setFlagLocalVariable \n"); 
	startedBlockOfCode();
;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 88 "parser.y"
    {
	//printf ("endedBlockOfCode \n"); 
	endedBlockOfCode();
;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 93 "parser.y"
    { printf("numFuncBEg \n"); setLastFunctionType(NUMERICAL); handleFunctionHeader(); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 93 "parser.y"
    { 
	printf("numerical func \n"); 
	validateEndOfFunction();
	handleNewName((yyvsp[(2) - (7)].stype), NUMERICAL, FUNC);
;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 98 "parser.y"
    { printf("stringFuncBEg \n"); setLastFunctionType(CHARACTERS); handleFunctionHeader();;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 98 "parser.y"
    { 
	printf("string func \n"); 
	handleNewName((yyvsp[(2) - (7)].stype), CHARACTERS, FUNC);
;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 102 "parser.y"
    { printf("boolFuncBEg \n"); setLastFunctionType(LOGICAL); handleFunctionHeader(); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 102 "parser.y"
    { 
	printf("bool func \n"); 
	handleNewName((yyvsp[(2) - (7)].stype), LOGICAL, FUNC);
;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 106 "parser.y"
    { printf("voidFuncBEg \n"); setLastFunctionType(VOIDD); handleFunctionHeader();;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 106 "parser.y"
    {
	printf("void func \n"); 
	handleNewName((yyvsp[(2) - (7)].stype), VOIDD, FUNC);
;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 112 "parser.y"
    { setUsedFunctionName((yyvsp[(1) - (4)].stype)) ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 116 "parser.y"
    { nameExistsInOrigin((yyvsp[(1) - (1)].stype), VAR); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 127 "parser.y"
    { validateReturn(VOIDD) ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 128 "parser.y"
    { validateReturn(NUMERICAL) ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 129 "parser.y"
    { validateReturn(LOGICAL) ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 130 "parser.y"
    { validateReturn(CHARACTERS) ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 131 "parser.y"
    { validateReturnWithVarName((yyvsp[(2) - (2)].stype)) ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 132 "parser.y"
    { validateReturn(NUMERICAL) ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 136 "parser.y"
    { setClassFlag(true); handleNewName((yyvsp[(2) - (2)].stype), NONE, CLASS);;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 136 "parser.y"
    {
	printf("class \n");
	setClassFlag(false);
	;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 146 "parser.y"
    { 
	handleForStatement();
	;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 177 "parser.y"
    {
	handleNewName((yyvsp[(2) - (2)].stype), NUMERICAL, VAR);
;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 180 "parser.y"
    { 
	handleNewName((yyvsp[(2) - (2)].stype), CHARACTERS, VAR);
;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 183 "parser.y"
    { 
	handleNewName((yyvsp[(2) - (2)].stype), LOGICAL, VAR);
;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 186 "parser.y"
    {
	handleNewName((yyvsp[(2) - (2)].stype), (yyvsp[(1) - (2)].stype), CLASS);
;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 189 "parser.y"
    {
	handleNewName((yyvsp[(2) - (4)].stype), CHARACTERS, VAR);
;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 192 "parser.y"
    {
	handleNewName((yyvsp[(2) - (4)].stype), CHARACTERS, VAR);
	nameInTypeExistsInOrigin(getUsedFunctionName(), CHARACTERS, FUNC); setUsedFunctionName(NONE);
;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 196 "parser.y"
    {
	handleNewName((yyvsp[(2) - (4)].stype), CHARACTERS, VAR);
;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 199 "parser.y"
    {
	if (isAssigned) {
		handleNewName((yyvsp[(2) - (4)].stype), NUMERICAL, VAR); 
	}
	isAssigned = false;
;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 205 "parser.y"
    {
	handleNewName((yyvsp[(2) - (4)].stype), LOGICAL, VAR); 
;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 208 "parser.y"
    {
	handleNewName((yyvsp[(2) - (4)].stype), LOGICAL, VAR); 
;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 211 "parser.y"
    {
	handleNewName((yyvsp[(2) - (4)].stype), LOGICAL, VAR); 
	nameInTypeExistsInOrigin(getUsedFunctionName(), LOGICAL, FUNC); setUsedFunctionName(NONE);
;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 215 "parser.y"
    {
	if (handleNameInAssigning((yyvsp[(4) - (4)].stype), LOGICAL, VAR)) {
		handleNewName((yyvsp[(2) - (4)].stype), LOGICAL, VAR); 
	}
;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 220 "parser.y"
    {
	if (handleNameInAssigning((yyvsp[(4) - (4)].stype), CHARACTERS, VAR)) {
		handleNewName((yyvsp[(2) - (4)].stype), CHARACTERS, VAR); 
	}
;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 225 "parser.y"
    {
	if (handleNameInAssigning((yyvsp[(4) - (4)].stype), (yyvsp[(1) - (4)].stype), VAR)) {
		handleNewName((yyvsp[(2) - (4)].stype), (yyvsp[(1) - (4)].stype), CLASS);
	}
;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 230 "parser.y"
    {
	handleNewName((yyvsp[(2) - (4)].stype), (yyvsp[(1) - (4)].stype), CLASS);
;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 235 "parser.y"
    { 
	handleNameInAssigning((yyvsp[(1) - (3)].stype), CHARACTERS, VAR);  
;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 238 "parser.y"
    {
	validateTwoAssigningOperants((yyvsp[(1) - (3)].stype), (yyvsp[(3) - (3)].stype), VAR)
;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 241 "parser.y"
    {
	nameInTypeExistsInOrigin((yyvsp[(1) - (3)].stype), NUMERICAL, VAR); //only 'int' type is allowed
	isAssigned = false;
;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 245 "parser.y"
    {
	if (handleNameInAssigning((yyvsp[(1) - (3)].stype), LOGICAL, VAR)) {
		nameExistsInOrigin((yyvsp[(1) - (3)].stype), VAR);
	}
;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 254 "parser.y"
    {
	nameExistsInOrigin((yyvsp[(1) - (1)].stype), VAR);
;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 261 "parser.y"
    {
	nameInTypeExistsInOrigin((yyvsp[(1) - (1)].stype), LOGICAL, VAR); //only 'bool' type is allowed
;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 264 "parser.y"
    {
	nameInTypeExistsInOrigin((yyvsp[(2) - (2)].stype), LOGICAL, VAR); //only 'bool' type is allowed
;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 272 "parser.y"
    { 
	handleNameInAssigning((yyvsp[(1) - (4)].stype), CHARACTERS, VAR);
;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 275 "parser.y"
    {
	validateTwoAssigningOperants((yyvsp[(1) - (4)].stype), (yyvsp[(4) - (4)].stype), VAR)
;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 281 "parser.y"
    {
	if (handleNameInAssigning((yyvsp[(1) - (4)].stype), LOGICAL, VAR)) {
		nameExistsInOrigin((yyvsp[(1) - (4)].stype), VAR);
	}
;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 293 "parser.y"
    { 
	handleNameInAssigning((yyvsp[(1) - (4)].stype), CHARACTERS, VAR);
;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 296 "parser.y"
    {
	validateTwoAssigningOperants((yyvsp[(1) - (4)].stype), (yyvsp[(4) - (4)].stype), VAR)
;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 301 "parser.y"
    {
	if (handleNameInAssigning((yyvsp[(1) - (4)].stype), LOGICAL, VAR)) {
		nameExistsInOrigin((yyvsp[(1) - (4)].stype), VAR);
	}
;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 326 "parser.y"
    {
	validateExistenceAndIsNotPrimitve(getNameFromDataAccess((yyvsp[(1) - (1)].stype)));
;}
    break;



/* Line 1455 of yacc.c  */
#line 2139 "parser.c"
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
#line 331 "parser.y"

void yyerror(char *s) {
	fprintf(stderr, "%s\n", s);
}

int main(void) {
	initStack();
	yyin = fopen("src.txt", "r");
	yyparse();
	return 0;
}
