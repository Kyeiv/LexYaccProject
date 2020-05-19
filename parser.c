
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
	#define CHARACTERS "string"
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
#define YYFINAL  50
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   367

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  122
/* YYNRULES -- Number of states.  */
#define YYNSTATES  199

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
       2,     2,     2,    30,     2,     2,     2,     2,     2,     2,
      25,    26,    34,    32,    27,    33,     2,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      29,    31,    28,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    23,     2,    24,     2,     2,     2,     2,
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
       0,     0,     3,     5,     8,     9,    11,    14,    16,    18,
      20,    23,    26,    28,    31,    33,    35,    37,    40,    42,
      43,    48,    49,    57,    58,    66,    67,    75,    76,    84,
      89,    93,    95,    97,    99,   100,   102,   106,   107,   109,
     112,   115,   118,   121,   124,   125,   126,   131,   137,   145,
     146,   157,   159,   161,   165,   166,   170,   178,   179,   181,
     183,   186,   189,   192,   195,   198,   201,   205,   207,   208,
     211,   214,   217,   220,   223,   226,   231,   236,   241,   246,
     251,   256,   261,   266,   271,   276,   281,   285,   289,   293,
     297,   301,   305,   309,   311,   313,   315,   317,   320,   322,
     324,   328,   332,   336,   340,   344,   349,   353,   355,   357,
     359,   361,   363,   365,   367,   369,   371,   373,   375,   379,
     383,   387,   391
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      37,     0,    -1,    38,    -1,     1,    22,    -1,    -1,    39,
      -1,    38,    38,    -1,    22,    -1,    53,    -1,    40,    -1,
      61,    13,    -1,    62,    13,    -1,    42,    -1,    50,    13,
      -1,    54,    -1,    51,    -1,    19,    -1,    47,    13,    -1,
      21,    -1,    -1,    41,    23,    38,    24,    -1,    -1,    65,
      14,    43,    25,    49,    26,    40,    -1,    -1,    66,    14,
      44,    25,    49,    26,    40,    -1,    -1,    67,    14,    45,
      25,    49,    26,    40,    -1,    -1,    68,    14,    46,    25,
      49,    26,    40,    -1,    14,    25,    48,    26,    -1,    48,
      27,    48,    -1,    14,    -1,    61,    -1,     3,    -1,    -1,
      61,    -1,    49,    27,    49,    -1,    -1,    16,    -1,    16,
       3,    -1,    16,    69,    -1,    16,    15,    -1,    16,    14,
      -1,    16,    71,    -1,    -1,    -1,    18,    14,    52,    40,
      -1,    11,    25,    63,    26,    39,    -1,    11,    25,    63,
      26,    39,    12,    39,    -1,    -1,    17,    25,    55,    56,
      13,    57,    13,    59,    26,    40,    -1,    49,    -1,    62,
      -1,    56,    27,    56,    -1,    -1,    71,    58,    71,    -1,
      71,    58,    71,    27,    71,    58,    71,    -1,    -1,    28,
      -1,    29,    -1,    30,    31,    -1,    29,    31,    -1,    28,
      31,    -1,    31,    31,    -1,    14,    60,    -1,    60,    14,
      -1,    59,    27,    59,    -1,    62,    -1,    -1,    32,    32,
      -1,    33,    33,    -1,    65,    14,    -1,    66,    14,    -1,
      67,    14,    -1,    14,    14,    -1,    66,    14,    31,    15,
      -1,    66,    14,    31,    47,    -1,    66,    14,    31,    70,
      -1,    65,    14,    31,    71,    -1,    67,    14,    31,    69,
      -1,    67,    14,    31,    70,    -1,    67,    14,    31,    47,
      -1,    67,    14,    31,    14,    -1,    66,    14,    31,    14,
      -1,    14,    14,    31,    14,    -1,    14,    14,    31,    70,
      -1,    14,    31,    15,    -1,    14,    31,    14,    -1,    14,
      31,    71,    -1,    14,    31,    69,    -1,    14,    31,    70,
      -1,    70,    31,    70,    -1,    70,    31,    14,    -1,    70,
      -1,    14,    -1,    64,    -1,    14,    -1,    30,    14,    -1,
      70,    -1,    69,    -1,    14,    58,    15,    -1,    14,    58,
      14,    -1,    47,    58,    47,    -1,    70,    58,    70,    -1,
      70,    58,    14,    -1,    14,    31,    31,    69,    -1,    14,
      58,    71,    -1,     4,    -1,     9,    -1,     6,    -1,    10,
      -1,     5,    -1,     7,    -1,     8,    -1,    20,    -1,     3,
      -1,    14,    -1,    70,    -1,    71,    32,    71,    -1,    71,
      33,    71,    -1,    71,    34,    71,    -1,    71,    35,    71,
      -1,    47,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    46,    46,    52,    56,    60,    61,    62,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    78,
      78,    84,    84,    88,    88,    91,    91,    94,    94,    99,
     102,   103,   104,   105,   106,   109,   110,   111,   114,   115,
     116,   117,   118,   119,   120,   123,   123,   128,   129,   132,
     132,   138,   139,   140,   141,   143,   144,   145,   148,   149,
     150,   151,   152,   153,   156,   157,   158,   159,   160,   163,
     164,   166,   169,   172,   175,   178,   181,   185,   188,   194,
     197,   200,   204,   209,   214,   219,   224,   227,   230,   234,
     239,   240,   241,   242,   243,   248,   249,   252,   255,   256,
     260,   263,   266,   267,   268,   269,   274,   280,   281,   284,
     287,   289,   291,   292,   295,   300,   303,   306,   309,   310,
     311,   312,   313
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
  "DATA_ACCESS", "INCLUDE", "'\\n'", "'{'", "'}'", "'('", "')'", "','",
  "'>'", "'<'", "'!'", "'='", "'+'", "'-'", "'*'", "'/'", "$accept",
  "program", "instruction", "single_instruction", "block_of_code", "$@1",
  "function", "$@2", "$@3", "$@4", "$@5", "function_usage",
  "function_parameters", "function_variables", "return_statement",
  "class_declaration", "$@6", "if_instruction", "for_statement", "$@7",
  "for_first_arg", "for_second_arg", "op", "for_third_arg",
  "increase_decrease", "variable_declaration", "assigning", "comparison",
  "comparison_expressions", "numerical_type_variable",
  "characters_type_variable", "logical_type_variable", "void_type",
  "bool_value", "object_access", "expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,    10,   123,   125,    40,    41,    44,    62,    60,
      33,    61,    43,    45,    42,    47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    37,    37,    37,    38,    38,    38,    39,    39,
      39,    39,    39,    39,    39,    39,    39,    39,    39,    41,
      40,    43,    42,    44,    42,    45,    42,    46,    42,    47,
      48,    48,    48,    48,    48,    49,    49,    49,    50,    50,
      50,    50,    50,    50,    50,    52,    51,    53,    53,    55,
      54,    56,    56,    56,    56,    57,    57,    57,    58,    58,
      58,    58,    58,    58,    59,    59,    59,    59,    59,    60,
      60,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    63,    63,    63,    63,    63,
      64,    64,    64,    64,    64,    64,    64,    65,    65,    66,
      67,    68,    69,    69,    70,    71,    71,    71,    71,    71,
      71,    71,    71
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     2,     1,     1,     1,
       2,     2,     1,     2,     1,     1,     1,     2,     1,     0,
       4,     0,     7,     0,     7,     0,     7,     0,     7,     4,
       3,     1,     1,     1,     0,     1,     3,     0,     1,     2,
       2,     2,     2,     2,     0,     0,     4,     5,     7,     0,
      10,     1,     1,     3,     0,     3,     7,     0,     1,     1,
       2,     2,     2,     2,     2,     2,     3,     1,     0,     2,
       2,     2,     2,     2,     2,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     2,     1,     1,
       3,     3,     3,     3,     3,     4,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   107,   111,   109,   108,   110,     0,    94,    38,
       0,     0,    16,   114,    18,     7,     0,     2,     5,     9,
       0,    12,     0,     0,    15,     8,    14,     0,     0,     0,
       0,     0,     0,    93,     3,     0,    74,    34,     0,   115,
     112,   113,   116,    41,   122,    40,   117,    43,    49,    45,
       1,     6,    19,    17,    13,    10,    11,    21,    23,    25,
      27,     0,    96,     0,     0,     0,    95,    99,    98,     0,
      33,    31,     0,    32,     0,     0,     0,   115,   116,    86,
      89,   117,    88,     0,     0,     0,     0,    37,    19,    19,
       0,     0,     0,     0,     0,     0,     0,    92,    91,    58,
      59,     0,     0,     0,    97,     0,     0,    19,     0,    84,
      85,    29,    34,    71,    72,    73,   116,   118,   119,   120,
     121,    94,    51,     0,    35,    52,    46,    20,    78,    37,
      83,    75,    76,    77,    37,    82,    81,    79,    80,    37,
      37,    62,    61,    60,    63,   116,   100,   106,    63,     0,
     102,    47,   104,   103,    30,    37,    57,    37,     0,     0,
       0,     0,     0,   105,    19,    36,     0,     0,    53,    19,
      19,    19,    19,    48,    68,     0,    22,    24,    26,    28,
      94,     0,     0,     0,     0,    67,    55,    64,    69,    70,
      19,    68,    65,     0,    50,    66,     0,     0,    56
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    51,    18,    19,    20,    21,    91,    93,    95,
      96,    44,    72,   122,    23,    24,    88,    25,    26,    87,
     123,   166,   103,   183,   184,    27,    28,    65,    66,    74,
      75,    76,    32,    45,    33,    47
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -104
static const yytype_int16 yypact[] =
{
     181,   -12,  -104,  -104,  -104,  -104,  -104,    -7,    -6,   129,
      18,    66,  -104,  -104,  -104,  -104,    82,   222,  -104,  -104,
      61,  -104,    85,    88,  -104,  -104,  -104,   102,   122,    79,
     112,   128,   132,   119,  -104,   109,   121,   317,   299,   144,
    -104,  -104,    54,  -104,  -104,  -104,  -104,   328,  -104,  -104,
    -104,   261,   242,  -104,  -104,  -104,  -104,    -4,     1,     4,
    -104,   110,   327,   150,   336,   146,  -104,  -104,   336,   113,
    -104,   156,    43,  -104,   164,   166,   169,  -104,   290,  -104,
    -104,    77,   328,    20,    20,    20,    20,   159,  -104,   201,
      20,   168,    58,   171,   304,   188,   191,  -104,  -104,   158,
     193,   206,   226,    30,  -104,   237,   220,   280,   131,  -104,
    -104,  -104,   317,   238,   245,   256,   229,   328,   328,   328,
     328,     8,   265,    24,  -104,  -104,  -104,  -104,   328,   324,
     229,  -104,  -104,  -104,   324,   229,  -104,  -104,  -104,   324,
     324,  -104,  -104,  -104,   147,   136,  -104,   328,  -104,   229,
    -104,   276,  -104,  -104,   268,   324,    20,   159,   156,   182,
     203,   223,   247,  -104,   280,   265,   295,   316,   282,  -104,
    -104,  -104,  -104,  -104,   108,    20,  -104,  -104,  -104,  -104,
      80,   293,   277,   278,   315,  -104,   308,  -104,  -104,  -104,
    -104,   108,  -104,    20,  -104,   305,   316,    20,   328
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -104,  -104,    16,  -103,   -83,  -104,  -104,  -104,  -104,  -104,
    -104,     3,   210,   -98,  -104,  -104,  -104,  -104,  -104,  -104,
     179,  -104,   -62,   148,   157,    19,   -66,  -104,  -104,     7,
      11,    13,  -104,   -23,    -9,   -37
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -102
static const yytype_int16 yytable[] =
{
      46,    82,   106,    22,   151,   126,   108,    29,    36,   -71,
      34,    30,    67,    31,   -72,    80,    17,   -73,    35,    37,
      22,   125,    36,    77,    29,    38,    68,    90,    30,    81,
      31,   159,    92,    77,   116,    94,   160,   156,    64,    38,
      13,   161,   162,    48,   145,   146,   117,   118,   119,   120,
      13,   157,    98,   128,    22,    22,    73,   165,    29,    29,
     110,   173,    30,    30,    31,    31,   147,   -42,    89,   111,
     112,   137,   130,   131,    46,    46,    46,    46,    13,    37,
      49,    46,    50,   133,    52,   138,   176,   177,   178,   179,
     -90,   125,    22,    57,    46,   132,    29,   136,    53,   153,
      30,    54,    31,   -90,   -90,   175,   124,   194,   185,   150,
      22,    38,   181,   182,    29,    55,    40,    41,    30,   167,
      31,   163,   180,    62,    97,   185,    58,   109,    13,    13,
      13,    73,    39,    13,   197,    56,    40,    41,   186,    63,
     181,   182,    59,    42,    43,   152,    60,    46,   124,    13,
      61,    13,    69,   124,    40,    41,   196,   -39,   124,   124,
     198,    37,  -101,     2,   104,     4,    46,    22,     5,     6,
      36,    29,   107,   121,   124,    30,   124,    31,   113,    13,
     114,    -4,     1,   115,    46,     2,     3,     4,    46,   141,
       5,     6,     7,   129,   -44,     8,   134,     9,    10,    11,
      12,    13,    14,    15,   -19,     2,     3,     4,   169,   155,
       5,     6,     7,   139,   -44,     8,   140,     9,    10,    11,
      12,    13,    14,    15,   142,   127,     2,     3,     4,   170,
     155,     5,     6,     7,   149,   -44,     8,   143,     9,    10,
      11,    12,    13,    14,    15,   -19,     2,     3,     4,   171,
     155,     5,     6,     7,    37,   -44,     8,   144,     9,    10,
      11,    12,    13,    14,    15,     2,     3,     4,   148,    90,
       5,     6,     7,   172,   155,     8,    92,     9,    10,    11,
      12,    13,    14,    15,     2,     3,     4,    94,   164,     5,
       6,     7,   155,   -44,     8,   112,     9,    10,    11,    12,
      13,    14,    77,   -87,   190,   191,    40,    41,   174,   157,
     189,    40,    41,    78,    79,    37,   -87,   -87,   135,    13,
      70,     2,   154,     4,    13,   188,     5,     6,     2,   192,
       4,    71,   191,     5,     6,   193,   168,   187,   158,   195,
      83,    84,    85,    86,    99,   100,   101,   105,    83,    84,
      85,    86,    37,     0,     0,    99,   100,   101,   102,     0,
      83,    84,    85,    86,    99,   100,   101,   105
};

static const yytype_int16 yycheck[] =
{
       9,    38,    64,     0,   107,    88,    68,     0,    14,    13,
      22,     0,    35,     0,    13,    38,     0,    13,    25,    25,
      17,    87,    14,     3,    17,    31,    35,    31,    17,    38,
      17,   129,    31,     3,    14,    31,   134,    13,    35,    31,
      20,   139,   140,    25,    14,    15,    83,    84,    85,    86,
      20,    27,    61,    90,    51,    52,    37,   155,    51,    52,
      69,   164,    51,    52,    51,    52,   103,    13,    52,    26,
      27,    94,    14,    15,    83,    84,    85,    86,    20,    25,
      14,    90,     0,    92,    23,    94,   169,   170,   171,   172,
      13,   157,    89,    14,   103,    92,    89,    94,    13,   108,
      89,    13,    89,    26,    27,   167,    87,   190,   174,   106,
     107,    31,    32,    33,   107,    13,     7,     8,   107,   156,
     107,   144,    14,    14,    14,   191,    14,    14,    20,    20,
      20,   112,     3,    20,   196,    13,     7,     8,   175,    30,
      32,    33,    14,    14,    15,    14,    14,   156,   129,    20,
      31,    20,    31,   134,     7,     8,   193,    13,   139,   140,
     197,    25,    26,     4,    14,     6,   175,   164,     9,    10,
      14,   164,    26,    14,   155,   164,   157,   164,    14,    20,
      14,     0,     1,    14,   193,     4,     5,     6,   197,    31,
       9,    10,    11,    25,    13,    14,    25,    16,    17,    18,
      19,    20,    21,    22,    23,     4,     5,     6,    26,    27,
       9,    10,    11,    25,    13,    14,    25,    16,    17,    18,
      19,    20,    21,    22,    31,    24,     4,     5,     6,    26,
      27,     9,    10,    11,    14,    13,    14,    31,    16,    17,
      18,    19,    20,    21,    22,    23,     4,     5,     6,    26,
      27,     9,    10,    11,    25,    13,    14,    31,    16,    17,
      18,    19,    20,    21,    22,     4,     5,     6,    31,    31,
       9,    10,    11,    26,    27,    14,    31,    16,    17,    18,
      19,    20,    21,    22,     4,     5,     6,    31,    12,     9,
      10,    11,    27,    13,    14,    27,    16,    17,    18,    19,
      20,    21,     3,    13,    26,    27,     7,     8,    13,    27,
      33,     7,     8,    14,    15,    25,    26,    27,    14,    20,
       3,     4,   112,     6,    20,    32,     9,    10,     4,    14,
       6,    14,    27,     9,    10,    27,   157,   180,    14,   191,
      32,    33,    34,    35,    28,    29,    30,    31,    32,    33,
      34,    35,    25,    -1,    -1,    28,    29,    30,    31,    -1,
      32,    33,    34,    35,    28,    29,    30,    31
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     4,     5,     6,     9,    10,    11,    14,    16,
      17,    18,    19,    20,    21,    22,    37,    38,    39,    40,
      41,    42,    47,    50,    51,    53,    54,    61,    62,    65,
      66,    67,    68,    70,    22,    25,    14,    25,    31,     3,
       7,     8,    14,    15,    47,    69,    70,    71,    25,    14,
       0,    38,    23,    13,    13,    13,    13,    14,    14,    14,
      14,    31,    14,    30,    47,    63,    64,    69,    70,    31,
       3,    14,    48,    61,    65,    66,    67,     3,    14,    15,
      69,    70,    71,    32,    33,    34,    35,    55,    52,    38,
      31,    43,    31,    44,    31,    45,    46,    14,    70,    28,
      29,    30,    31,    58,    14,    31,    58,    26,    58,    14,
      70,    26,    27,    14,    14,    14,    14,    71,    71,    71,
      71,    14,    49,    56,    61,    62,    40,    24,    71,    25,
      14,    15,    47,    70,    25,    14,    47,    69,    70,    25,
      25,    31,    31,    31,    31,    14,    15,    71,    31,    14,
      47,    39,    14,    70,    48,    27,    13,    27,    14,    49,
      49,    49,    49,    69,    12,    49,    57,    71,    56,    26,
      26,    26,    26,    39,    13,    58,    40,    40,    40,    40,
      14,    32,    33,    59,    60,    62,    71,    60,    32,    33,
      26,    27,    14,    27,    40,    59,    71,    58,    71
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
    { 
	if (!getErrorFlag()) {
		system("cls");
		printf("Program correct, no errors detected\n");	
	}
;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 52 "parser.y"
    {
		setErrorFlag();
		printf("\rSYNTAX ERROR! In file '%s', line: %d\n", getCurrentFileName(), getCurrentLines());
		;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 73 "parser.y"
    { checkIfInClass(); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 74 "parser.y"
    { nameExistsInOrigin(getUsedFunctionName(), FUNC); setUsedFunctionName(NONE); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 75 "parser.y"
    { handleInclude((yyvsp[(1) - (1)].stype)); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 78 "parser.y"
    {	
	startedBlockOfCode();
;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 80 "parser.y"
    {
	endedBlockOfCode();
;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 84 "parser.y"
    { setLastFunctionType(NUMERICAL); handleFunctionHeader(); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 84 "parser.y"
    { 
	validateEndOfFunction();	
	handleNewName((yyvsp[(2) - (7)].stype), NUMERICAL, FUNC);
;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 88 "parser.y"
    { setLastFunctionType(CHARACTERS); handleFunctionHeader();;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 88 "parser.y"
    { 
	handleNewName((yyvsp[(2) - (7)].stype), CHARACTERS, FUNC);
;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 91 "parser.y"
    { setLastFunctionType(LOGICAL); handleFunctionHeader(); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 91 "parser.y"
    { 
	handleNewName((yyvsp[(2) - (7)].stype), LOGICAL, FUNC);
;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 94 "parser.y"
    { setLastFunctionType(VOIDD); handleFunctionHeader();;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 94 "parser.y"
    {
	handleNewName((yyvsp[(2) - (7)].stype), VOIDD, FUNC);
;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 99 "parser.y"
    { setUsedFunctionName((yyvsp[(1) - (4)].stype)) ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 103 "parser.y"
    { nameExistsInOrigin((yyvsp[(1) - (1)].stype), VAR); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 114 "parser.y"
    { validateReturn(VOIDD) ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 115 "parser.y"
    { validateReturn(NUMERICAL) ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 116 "parser.y"
    { validateReturn(LOGICAL) ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 117 "parser.y"
    { validateReturn(CHARACTERS) ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 118 "parser.y"
    { validateReturnWithVarName((yyvsp[(2) - (2)].stype)) ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 119 "parser.y"
    { validateReturn(NUMERICAL) ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 123 "parser.y"
    { setClassFlag(true); handleNewName((yyvsp[(2) - (2)].stype), NONE, CLASS);;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 123 "parser.y"
    {
	setClassFlag(false);
	;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 132 "parser.y"
    { 
	handleForStatement();
	;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 166 "parser.y"
    {
	handleNewName((yyvsp[(2) - (2)].stype), NUMERICAL, VAR);
;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 169 "parser.y"
    { 
	handleNewName((yyvsp[(2) - (2)].stype), CHARACTERS, VAR);
;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 172 "parser.y"
    { 
	handleNewName((yyvsp[(2) - (2)].stype), LOGICAL, VAR);
;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 175 "parser.y"
    {
	handleNewName((yyvsp[(2) - (2)].stype), (yyvsp[(1) - (2)].stype), CLASS);
;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 178 "parser.y"
    {
	handleNewName((yyvsp[(2) - (4)].stype), CHARACTERS, VAR);
;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 181 "parser.y"
    {
	handleNewName((yyvsp[(2) - (4)].stype), CHARACTERS, VAR);
	nameInTypeExistsInOrigin(getUsedFunctionName(), CHARACTERS, FUNC); setUsedFunctionName(NONE);
;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 185 "parser.y"
    {
	handleNewName((yyvsp[(2) - (4)].stype), CHARACTERS, VAR);
;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 188 "parser.y"
    {
	if (isAssigned) {
		handleNewName((yyvsp[(2) - (4)].stype), NUMERICAL, VAR); 
	}
	isAssigned = false;
;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 194 "parser.y"
    {
	handleNewName((yyvsp[(2) - (4)].stype), LOGICAL, VAR); 
;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 197 "parser.y"
    {
	handleNewName((yyvsp[(2) - (4)].stype), LOGICAL, VAR); 
;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 200 "parser.y"
    {
	handleNewName((yyvsp[(2) - (4)].stype), LOGICAL, VAR); 
	nameInTypeExistsInOrigin(getUsedFunctionName(), LOGICAL, FUNC); setUsedFunctionName(NONE);
;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 204 "parser.y"
    {
	if (handleNameInAssigning((yyvsp[(4) - (4)].stype), LOGICAL, VAR)) {
		handleNewName((yyvsp[(2) - (4)].stype), LOGICAL, VAR); 
	}
;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 209 "parser.y"
    {
	if (handleNameInAssigning((yyvsp[(4) - (4)].stype), CHARACTERS, VAR)) {
		handleNewName((yyvsp[(2) - (4)].stype), CHARACTERS, VAR); 
	}
;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 214 "parser.y"
    {
	if (handleNameInAssigning((yyvsp[(4) - (4)].stype), (yyvsp[(1) - (4)].stype), VAR)) {
		handleNewName((yyvsp[(2) - (4)].stype), (yyvsp[(1) - (4)].stype), CLASS);
	}
;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 219 "parser.y"
    {
	handleNewName((yyvsp[(2) - (4)].stype), (yyvsp[(1) - (4)].stype), CLASS);
;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 224 "parser.y"
    { 
	handleNameInAssigning((yyvsp[(1) - (3)].stype), CHARACTERS, VAR);  
;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 227 "parser.y"
    {
	validateTwoAssigningOperants((yyvsp[(1) - (3)].stype), (yyvsp[(3) - (3)].stype), VAR)
;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 230 "parser.y"
    {
	nameInTypeExistsInOrigin((yyvsp[(1) - (3)].stype), NUMERICAL, VAR); //only 'int' type is allowed
	isAssigned = false;
;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 234 "parser.y"
    {
	if (handleNameInAssigning((yyvsp[(1) - (3)].stype), LOGICAL, VAR)) {
		nameExistsInOrigin((yyvsp[(1) - (3)].stype), VAR);
	}
;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 243 "parser.y"
    {
	nameExistsInOrigin((yyvsp[(1) - (1)].stype), VAR);
;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 249 "parser.y"
    {
	nameInTypeExistsInOrigin((yyvsp[(1) - (1)].stype), LOGICAL, VAR); //only 'bool' type is allowed
;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 252 "parser.y"
    {
	nameInTypeExistsInOrigin((yyvsp[(2) - (2)].stype), LOGICAL, VAR); //only 'bool' type is allowed
;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 260 "parser.y"
    { 
	handleNameInAssigning((yyvsp[(1) - (3)].stype), CHARACTERS, VAR);
;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 263 "parser.y"
    {
	validateTwoAssigningOperants((yyvsp[(1) - (3)].stype), (yyvsp[(3) - (3)].stype), VAR)
;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 269 "parser.y"
    {
	if (handleNameInAssigning((yyvsp[(1) - (4)].stype), LOGICAL, VAR)) {
		nameExistsInOrigin((yyvsp[(1) - (4)].stype), VAR);
	}
;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 274 "parser.y"
    { 
	nameInTypeExistsInOrigin((yyvsp[(1) - (3)].stype), NUMERICAL, VAR); //only 'int' type is allowed!!!
	isAssigned = false;
;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 295 "parser.y"
    {
	validateExistenceAndIsNotPrimitve(getNameFromDataAccess((yyvsp[(1) - (1)].stype)));
;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 300 "parser.y"
    { 
	isAssigned = true;
;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 303 "parser.y"
    { 
	isAssigned = handleNameInAssigning((yyvsp[(1) - (1)].stype), NUMERICAL, VAR); 
;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 306 "parser.y"
    {
	isAssigned = true;
;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 309 "parser.y"
    { ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 310 "parser.y"
    { ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 311 "parser.y"
    { ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 312 "parser.y"
    { ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 313 "parser.y"
    { nameInTypeExistsInOrigin(getUsedFunctionName(), NUMERICAL, FUNC); setUsedFunctionName(NONE); isAssigned=true; ;}
    break;



/* Line 1455 of yacc.c  */
#line 2117 "parser.c"
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
#line 316 "parser.y"

void yyerror(char* s) {}

int main(void) {
	char* initFileName = "src.cpp";
	initStack(initFileName);
	yyin = fopen(concat(getPath(), initFileName), "r");
	yyparse();
	cleanStack();
	return 0;
}
