
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
     DATA_ACCESS = 275
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
#line 159 "parser.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 171 "parser.c"

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
#define YYLAST   344

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNRULES -- Number of states.  */
#define YYNSTATES  199

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   275

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      21,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    33,     2,     2,     2,     2,     2,     2,
      28,    29,    24,    22,    30,    23,     2,    25,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      32,    34,    31,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    26,     2,    27,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    10,    11,    13,    15,    17,    21,
      25,    29,    33,    35,    37,    40,    42,    44,    47,    50,
      52,    55,    57,    59,    61,    64,    65,    70,    71,    79,
      80,    88,    89,    97,    98,   106,   111,   115,   117,   119,
     121,   122,   124,   128,   129,   131,   134,   137,   140,   143,
     146,   147,   148,   153,   159,   167,   168,   179,   181,   183,
     187,   188,   192,   200,   201,   203,   205,   208,   211,   214,
     217,   220,   224,   226,   227,   230,   233,   236,   239,   242,
     245,   250,   255,   260,   265,   270,   275,   280,   285,   290,
     294,   298,   302,   306,   310,   314,   318,   320,   322,   324,
     326,   328,   331,   333,   335,   340,   345,   350,   355,   360,
     365,   370,   375,   380,   385,   387,   389,   391,   393,   395,
     397,   399
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      36,     0,    -1,    36,    38,    21,    -1,     1,    21,    -1,
      -1,     3,    -1,    14,    -1,    71,    -1,    37,    22,    37,
      -1,    37,    23,    37,    -1,    37,    24,    37,    -1,    37,
      25,    37,    -1,    47,    -1,    39,    -1,    38,    38,    -1,
      53,    -1,    40,    -1,    61,    13,    -1,    62,    13,    -1,
      42,    -1,    50,    13,    -1,    54,    -1,    51,    -1,    19,
      -1,    47,    13,    -1,    -1,    41,    26,    38,    27,    -1,
      -1,    66,    14,    43,    28,    49,    29,    40,    -1,    -1,
      67,    14,    44,    28,    49,    29,    40,    -1,    -1,    68,
      14,    45,    28,    49,    29,    40,    -1,    -1,    69,    14,
      46,    28,    49,    29,    40,    -1,    14,    28,    48,    29,
      -1,    48,    30,    48,    -1,    14,    -1,    61,    -1,     3,
      -1,    -1,    61,    -1,    49,    30,    49,    -1,    -1,    16,
      -1,    16,     3,    -1,    16,    70,    -1,    16,    15,    -1,
      16,    14,    -1,    16,    37,    -1,    -1,    -1,    18,    14,
      52,    40,    -1,    11,    28,    63,    29,    39,    -1,    11,
      28,    63,    29,    39,    12,    39,    -1,    -1,    17,    28,
      55,    56,    13,    57,    13,    59,    29,    40,    -1,    49,
      -1,    62,    -1,    56,    30,    56,    -1,    -1,    37,    58,
      37,    -1,    37,    58,    37,    30,    37,    58,    37,    -1,
      -1,    31,    -1,    32,    -1,    33,    34,    -1,    32,    34,
      -1,    31,    34,    -1,    14,    60,    -1,    60,    14,    -1,
      59,    30,    59,    -1,    62,    -1,    -1,    22,    22,    -1,
      23,    23,    -1,    66,    14,    -1,    67,    14,    -1,    68,
      14,    -1,    14,    14,    -1,    67,    14,    34,    15,    -1,
      67,    14,    34,    71,    -1,    66,    14,    34,    37,    -1,
      68,    14,    34,    70,    -1,    68,    14,    34,    71,    -1,
      68,    14,    34,    14,    -1,    67,    14,    34,    14,    -1,
      14,    14,    34,    14,    -1,    14,    14,    34,    71,    -1,
      14,    34,    15,    -1,    14,    34,    14,    -1,    14,    34,
      37,    -1,    14,    34,    70,    -1,    14,    34,    71,    -1,
      71,    34,    71,    -1,    71,    34,    14,    -1,    71,    -1,
      14,    -1,    64,    -1,    65,    -1,    14,    -1,    33,    14,
      -1,    71,    -1,    70,    -1,    14,    34,    34,    15,    -1,
      14,    34,    34,    14,    -1,    71,    34,    34,    71,    -1,
      71,    34,    34,    14,    -1,    14,    34,    34,    70,    -1,
      14,    33,    34,    15,    -1,    14,    33,    34,    14,    -1,
      71,    33,    34,    71,    -1,    71,    33,    34,    14,    -1,
      14,    33,    34,    70,    -1,     4,    -1,     9,    -1,     6,
      -1,    10,    -1,     5,    -1,     7,    -1,     8,    -1,    20,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    45,    45,    46,    47,    49,    52,    55,    58,    59,
      60,    61,    62,    65,    66,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    81,    81,    89,    89,    94,
      94,    98,    98,   102,   102,   108,   111,   112,   113,   114,
     115,   118,   119,   120,   123,   124,   125,   126,   127,   128,
     129,   132,   132,   138,   139,   142,   142,   148,   149,   150,
     151,   153,   154,   155,   157,   158,   159,   160,   161,   163,
     164,   165,   166,   167,   170,   171,   173,   176,   179,   182,
     185,   188,   191,   197,   200,   203,   208,   213,   218,   223,
     226,   229,   233,   238,   239,   240,   241,   242,   247,   248,
     249,   252,   255,   256,   260,   263,   266,   267,   268,   280,
     283,   286,   287,   288,   298,   299,   302,   305,   307,   309,
     310,   313
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
  "DATA_ACCESS", "'\\n'", "'+'", "'-'", "'*'", "'/'", "'{'", "'}'", "'('",
  "')'", "','", "'>'", "'<'", "'!'", "'='", "$accept", "program",
  "expression", "instruction", "single_instruction", "block_of_code",
  "$@1", "function", "$@2", "$@3", "$@4", "$@5", "function_usage",
  "function_parameters", "function_variables", "return_statement",
  "class_declaration", "$@6", "if_instruction", "for_statement", "$@7",
  "for_first_arg", "for_second_arg", "op", "for_third_arg",
  "increase_decrease", "variable_declaration", "assigning", "comparison",
  "equal_comparision", "not_equal_comparision", "numerical_type_variable",
  "characters_type_variable", "logical_type_variable", "void_type",
  "bool_value", "object_access", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,    10,    43,    45,    42,    47,   123,   125,    40,    41,
      44,    62,    60,    33,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    36,    36,    36,    37,    37,    37,    37,    37,
      37,    37,    37,    38,    38,    39,    39,    39,    39,    39,
      39,    39,    39,    39,    39,    41,    40,    43,    42,    44,
      42,    45,    42,    46,    42,    47,    48,    48,    48,    48,
      48,    49,    49,    49,    50,    50,    50,    50,    50,    50,
      50,    52,    51,    53,    53,    55,    54,    56,    56,    56,
      56,    57,    57,    57,    58,    58,    58,    58,    58,    59,
      59,    59,    59,    59,    60,    60,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    63,    63,
      63,    63,    63,    63,    64,    64,    64,    64,    64,    65,
      65,    65,    65,    65,    66,    66,    67,    68,    69,    70,
      70,    71
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     0,     1,     1,     1,     3,     3,
       3,     3,     1,     1,     2,     1,     1,     2,     2,     1,
       2,     1,     1,     1,     2,     0,     4,     0,     7,     0,
       7,     0,     7,     0,     7,     4,     3,     1,     1,     1,
       0,     1,     3,     0,     1,     2,     2,     2,     2,     2,
       0,     0,     4,     5,     7,     0,    10,     1,     1,     3,
       0,     3,     7,     0,     1,     1,     2,     2,     2,     2,
       2,     3,     1,     0,     2,     2,     2,     2,     2,     2,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     2,     1,     1,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     1,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    25,     3,     1,   114,   118,   116,   115,   117,
       0,    97,    44,     0,     0,    23,   121,    25,    13,    16,
       0,    19,     0,     0,    22,    15,    21,     0,     0,     0,
       0,     0,     0,    96,     0,    79,    40,     0,     5,   119,
     120,     6,    47,    49,    12,    46,     7,    55,    51,     2,
      14,    25,    24,    20,    17,    18,    27,    29,    31,    33,
       0,   100,     0,     0,    98,    99,   103,   102,     0,    39,
      37,     0,    38,     0,     0,     0,     5,     6,    89,    91,
      92,     7,     0,     0,     0,     0,    43,    25,    25,     0,
       0,     0,     0,     0,     0,     0,    95,    94,     0,     0,
     101,    25,     0,     0,    87,    88,    35,    40,    76,    77,
      78,     6,     8,     9,    10,    11,    97,    57,     0,    41,
      58,    52,    26,    82,    43,    86,    80,    81,    43,    85,
      83,    84,    43,    43,     0,     0,    53,     0,     0,    36,
      43,    63,    43,     0,     0,     0,     0,     0,   110,   109,
     113,   105,   104,   108,    25,   112,   111,   107,   106,    42,
       0,     0,    59,    25,    25,    25,    25,    54,    64,    65,
       0,     0,    73,    28,    30,    32,    34,    68,    67,    66,
      61,    97,     0,     0,     0,     0,    72,     0,    69,    74,
      75,    25,    73,    70,     0,    56,    71,     0,    62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    43,    50,    18,    19,    20,    21,    90,    92,
      94,    95,    44,    71,   117,    23,    24,    87,    25,    26,
      86,   118,   161,   171,   184,   185,    27,    28,    63,    64,
      65,    73,    74,    75,    32,    45,    33
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -94
static const yytype_int16 yypact[] =
{
     173,   -20,   215,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -24,    13,   142,   -15,    28,   -94,   -94,   232,   -94,   -94,
      -3,   -94,    53,    74,   -94,   -94,   -94,    77,    88,    30,
      85,    89,    92,    82,   127,    93,   108,   251,   -94,   -94,
     -94,    95,   -94,   129,   -94,   -94,   -94,   -94,   -94,   -94,
     280,   263,   -94,   -94,   -94,   -94,   -10,    -6,     6,   -94,
      29,     1,   122,   109,   -94,   -94,   -94,    86,    64,   -94,
     130,   183,   -94,   132,   134,   150,   -94,    95,   -94,   129,
     -94,   -94,    71,    71,    71,    71,   297,   -94,   191,    71,
     143,    -5,   166,   301,   170,   175,   -94,   -94,   172,   180,
     -94,   263,   196,   213,   -94,   -94,   -94,   108,   223,   228,
     229,    95,   129,   129,   129,   129,    -2,   197,     7,   -94,
     -94,   -94,   -94,   129,   330,   -94,   -94,   -94,   330,   -94,
     -94,   -94,   330,   330,    31,    68,   252,    84,   123,   214,
     330,    71,   297,   130,   187,   193,   210,   226,   -94,   -94,
     -94,   -94,   -94,   -94,   263,   -94,   -94,   -94,   -94,   197,
     300,   257,   245,   -94,   -94,   -94,   -94,   -94,   244,   253,
     254,    71,   147,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     305,    46,   270,   272,   231,   279,   -94,    71,   -94,   -94,
     -94,   -94,   147,   -94,   300,   -94,   274,    71,   129
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -94,   -94,   -32,    16,   -93,   -70,   -94,   -94,   -94,   -94,
     -94,   -94,     4,   195,    48,   -94,   -94,   -94,   -94,   -94,
     -94,   163,   -94,   116,   120,   133,     0,   -84,   -94,   -94,
     -94,     9,    12,    14,   -94,    -4,   -12
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -79
static const yytype_int16 yytable[] =
{
      46,     3,   120,   -76,    34,    79,    22,   -77,   136,   125,
     126,    29,    35,    47,    30,    16,    31,   121,    17,   -78,
     141,    22,    67,    51,    89,    81,    29,    35,    91,    30,
      66,    31,    37,    80,    98,    99,    72,   142,    39,    40,
      93,    36,    48,    96,    56,   148,   149,    37,    97,    16,
     112,   113,   114,   115,    22,    22,   105,   123,   120,    29,
      29,   167,    30,    30,    31,    31,    52,    88,   182,   183,
      46,    46,    46,    46,    76,    39,    40,    46,   104,   127,
      37,   131,   151,   152,    16,   111,   119,    53,   186,   130,
      54,    16,    22,   173,   174,   175,   176,    29,   155,    57,
      30,    55,    31,    58,    16,    22,    59,    72,   186,   160,
      29,    69,     5,    30,     7,    31,    60,     8,     9,   102,
     103,   195,    70,    36,   119,   156,   158,    68,   119,    46,
     150,   153,   119,   119,    39,    40,   100,   157,   101,   180,
     119,    61,   119,    16,    35,    38,   108,    16,   109,    39,
      40,    82,    83,    84,    85,   194,    41,    42,    22,    46,
      62,   181,    16,    29,   110,   198,    30,    16,    31,   182,
     183,   124,   144,    -4,     1,    46,   145,    -4,    -4,    -4,
     146,   147,    -4,    -4,    -4,    46,    -4,    -4,   159,    -4,
      -4,    -4,    -4,    -4,   128,     5,     6,     7,   132,    -4,
       8,     9,    10,   133,   -50,    11,   134,    12,    13,    14,
      15,    16,   106,   107,   135,     4,   163,   140,   122,     5,
       6,     7,   164,   140,     8,     9,    10,   140,   -50,    11,
     137,    12,    13,    14,    15,    16,     5,     6,     7,   165,
     140,     8,     9,    10,   107,   -50,    11,   138,    12,    13,
      14,    15,    16,    49,    76,   166,   140,    89,    39,    40,
     191,   192,    91,    93,   154,    77,    78,     5,     6,     7,
     172,    16,     8,     9,    10,   142,   -50,    11,   177,    12,
      13,    14,    15,    16,     5,     6,     7,   178,   179,     8,
       9,    10,   189,   193,    11,   190,    12,    13,    14,    15,
      16,     5,   139,     7,   192,   162,     8,     9,    39,    40,
     197,   116,   196,     0,   188,   129,     0,    16,     0,     0,
       0,    16,    82,    83,    84,    85,     0,    82,    83,    84,
      85,   168,   169,   170,     5,   187,     7,     0,     0,     8,
       9,     0,     0,     0,   143
};

static const yytype_int16 yycheck[] =
{
      12,    21,    86,    13,    28,    37,     2,    13,   101,    14,
      15,     2,    14,    28,     2,    20,     2,    87,     2,    13,
      13,    17,    34,    26,    34,    37,    17,    14,    34,    17,
      34,    17,    34,    37,    33,    34,    36,    30,     7,     8,
      34,    28,    14,    14,    14,    14,    15,    34,    60,    20,
      82,    83,    84,    85,    50,    51,    68,    89,   142,    50,
      51,   154,    50,    51,    50,    51,    13,    51,    22,    23,
      82,    83,    84,    85,     3,     7,     8,    89,    14,    91,
      34,    93,    14,    15,    20,    14,    86,    13,   172,    93,
      13,    20,    88,   163,   164,   165,   166,    88,    14,    14,
      88,    13,    88,    14,    20,   101,    14,   107,   192,   141,
     101,     3,     4,   101,     6,   101,    34,     9,    10,    33,
      34,   191,    14,    28,   124,   137,   138,    34,   128,   141,
     134,   135,   132,   133,     7,     8,    14,    14,    29,   171,
     140,    14,   142,    20,    14,     3,    14,    20,    14,     7,
       8,    22,    23,    24,    25,   187,    14,    15,   154,   171,
      33,    14,    20,   154,    14,   197,   154,    20,   154,    22,
      23,    28,   124,     0,     1,   187,   128,     4,     5,     6,
     132,   133,     9,    10,    11,   197,    13,    14,   140,    16,
      17,    18,    19,    20,    28,     4,     5,     6,    28,    26,
       9,    10,    11,    28,    13,    14,    34,    16,    17,    18,
      19,    20,    29,    30,    34,     0,    29,    30,    27,     4,
       5,     6,    29,    30,     9,    10,    11,    30,    13,    14,
      34,    16,    17,    18,    19,    20,     4,     5,     6,    29,
      30,     9,    10,    11,    30,    13,    14,    34,    16,    17,
      18,    19,    20,    21,     3,    29,    30,    34,     7,     8,
      29,    30,    34,    34,    12,    14,    15,     4,     5,     6,
      13,    20,     9,    10,    11,    30,    13,    14,    34,    16,
      17,    18,    19,    20,     4,     5,     6,    34,    34,     9,
      10,    11,    22,    14,    14,    23,    16,    17,    18,    19,
      20,     4,   107,     6,    30,   142,     9,    10,     7,     8,
     194,    14,   192,    -1,   181,    14,    -1,    20,    -1,    -1,
      -1,    20,    22,    23,    24,    25,    -1,    22,    23,    24,
      25,    31,    32,    33,     4,    30,     6,    -1,    -1,     9,
      10,    -1,    -1,    -1,    14
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    36,    21,     0,     4,     5,     6,     9,    10,
      11,    14,    16,    17,    18,    19,    20,    38,    39,    40,
      41,    42,    47,    50,    51,    53,    54,    61,    62,    66,
      67,    68,    69,    71,    28,    14,    28,    34,     3,     7,
       8,    14,    15,    37,    47,    70,    71,    28,    14,    21,
      38,    26,    13,    13,    13,    13,    14,    14,    14,    14,
      34,    14,    33,    63,    64,    65,    70,    71,    34,     3,
      14,    48,    61,    66,    67,    68,     3,    14,    15,    37,
      70,    71,    22,    23,    24,    25,    55,    52,    38,    34,
      43,    34,    44,    34,    45,    46,    14,    71,    33,    34,
      14,    29,    33,    34,    14,    71,    29,    30,    14,    14,
      14,    14,    37,    37,    37,    37,    14,    49,    56,    61,
      62,    40,    27,    37,    28,    14,    15,    71,    28,    14,
      70,    71,    28,    28,    34,    34,    39,    34,    34,    48,
      30,    13,    30,    14,    49,    49,    49,    49,    14,    15,
      70,    14,    15,    70,    12,    14,    71,    14,    71,    49,
      37,    57,    56,    29,    29,    29,    29,    39,    31,    32,
      33,    58,    13,    40,    40,    40,    40,    34,    34,    34,
      37,    14,    22,    23,    59,    60,    62,    30,    60,    22,
      23,    29,    30,    14,    37,    40,    59,    58,    37
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
#line 45 "parser.y"
    { printf("dobre wyr c++ \n"); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 46 "parser.y"
    { yyerror("Obsluga bledu"); yyerrok;;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 49 "parser.y"
    { 
	isAssigned = true;
;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 52 "parser.y"
    { 
	isAssigned = handleNameInAssigning((yyvsp[(1) - (1)].stype), NUMERICAL, VAR); 
;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 55 "parser.y"
    {
	isAssigned = true;
;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 58 "parser.y"
    { ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 59 "parser.y"
    { ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 60 "parser.y"
    { ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 61 "parser.y"
    { ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 62 "parser.y"
    { nameInTypeExistsInOrigin(getUsedFunctionName(), NUMERICAL, FUNC); setUsedFunctionName(NONE); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 77 "parser.y"
    { checkIfInClass(); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 78 "parser.y"
    { nameExistsInOrigin(getUsedFunctionName(), FUNC); setUsedFunctionName(NONE); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 81 "parser.y"
    {	
	//printf ("setFlagLocalVariable \n"); 
	startedBlockOfCode();
;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 84 "parser.y"
    {
	//printf ("endedBlockOfCode \n"); 
	endedBlockOfCode();
;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 89 "parser.y"
    { printf("numFuncBEg \n"); setLastFunctionType(NUMERICAL); handleFunctionHeader(); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 89 "parser.y"
    { 
	printf("numerical func \n"); 
	validateEndOfFunction();
	handleNewName((yyvsp[(2) - (7)].stype), NUMERICAL, FUNC);
;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 94 "parser.y"
    { printf("stringFuncBEg \n"); setLastFunctionType(CHARACTERS); handleFunctionHeader();;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 94 "parser.y"
    { 
	printf("string func \n"); 
	handleNewName((yyvsp[(2) - (7)].stype), CHARACTERS, FUNC);
;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 98 "parser.y"
    { printf("boolFuncBEg \n"); setLastFunctionType(LOGICAL); handleFunctionHeader(); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 98 "parser.y"
    { 
	printf("bool func \n"); 
	handleNewName((yyvsp[(2) - (7)].stype), LOGICAL, FUNC);
;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 102 "parser.y"
    { printf("voidFuncBEg \n"); setLastFunctionType(VOIDD); handleFunctionHeader();;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 102 "parser.y"
    {
	printf("void func \n"); 
	handleNewName((yyvsp[(2) - (7)].stype), VOIDD, FUNC);
;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 108 "parser.y"
    { setUsedFunctionName((yyvsp[(1) - (4)].stype)) ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 112 "parser.y"
    { nameExistsInOrigin((yyvsp[(1) - (1)].stype), VAR); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 123 "parser.y"
    { validateReturn(VOIDD) ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 124 "parser.y"
    { validateReturn(NUMERICAL) ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 125 "parser.y"
    { validateReturn(LOGICAL) ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 126 "parser.y"
    { validateReturn(CHARACTERS) ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 127 "parser.y"
    { validateReturnWithVarName((yyvsp[(2) - (2)].stype)) ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 128 "parser.y"
    { validateReturn(NUMERICAL) ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 132 "parser.y"
    { setClassFlag(true); handleNewName((yyvsp[(2) - (2)].stype), NONE, CLASS);;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 132 "parser.y"
    {
	printf("class \n");
	setClassFlag(false);
	;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 142 "parser.y"
    { 
	handleForStatement();
	;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 173 "parser.y"
    {
	handleNewName((yyvsp[(2) - (2)].stype), NUMERICAL, VAR);
;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 176 "parser.y"
    { 
	handleNewName((yyvsp[(2) - (2)].stype), CHARACTERS, VAR);
;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 179 "parser.y"
    { 
	handleNewName((yyvsp[(2) - (2)].stype), LOGICAL, VAR);
;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 182 "parser.y"
    {
	handleNewName((yyvsp[(2) - (2)].stype), (yyvsp[(1) - (2)].stype), CLASS);
;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 185 "parser.y"
    {
	handleNewName((yyvsp[(2) - (4)].stype), CHARACTERS, VAR);
;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 188 "parser.y"
    {
	handleNewName((yyvsp[(2) - (4)].stype), CHARACTERS, VAR);
;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 191 "parser.y"
    {
	if (isAssigned) {
		handleNewName((yyvsp[(2) - (4)].stype), NUMERICAL, VAR); 
	}
	isAssigned = false;
;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 197 "parser.y"
    {
	handleNewName((yyvsp[(2) - (4)].stype), LOGICAL, VAR); 
;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 200 "parser.y"
    {
	handleNewName((yyvsp[(2) - (4)].stype), LOGICAL, VAR); 
;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 203 "parser.y"
    {
	if (handleNameInAssigning((yyvsp[(4) - (4)].stype), LOGICAL, VAR)) {
		handleNewName((yyvsp[(2) - (4)].stype), LOGICAL, VAR); 
	}
;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 208 "parser.y"
    {
	if (handleNameInAssigning((yyvsp[(4) - (4)].stype), CHARACTERS, VAR)) {
		handleNewName((yyvsp[(2) - (4)].stype), CHARACTERS, VAR); 
	}
;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 213 "parser.y"
    {
	if (handleNameInAssigning((yyvsp[(4) - (4)].stype), (yyvsp[(1) - (4)].stype), VAR)) {
		handleNewName((yyvsp[(2) - (4)].stype), (yyvsp[(1) - (4)].stype), CLASS);
	}
;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 218 "parser.y"
    {
	handleNewName((yyvsp[(2) - (4)].stype), (yyvsp[(1) - (4)].stype), CLASS);
;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 223 "parser.y"
    { 
	handleNameInAssigning((yyvsp[(1) - (3)].stype), CHARACTERS, VAR);  
;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 226 "parser.y"
    {
	validateTwoAssigningOperants((yyvsp[(1) - (3)].stype), (yyvsp[(3) - (3)].stype), VAR)
;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 229 "parser.y"
    {
	nameInTypeExistsInOrigin((yyvsp[(1) - (3)].stype), NUMERICAL, VAR); //only 'int' type is allowed
	isAssigned = false;
;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 233 "parser.y"
    {
	if (handleNameInAssigning((yyvsp[(1) - (3)].stype), LOGICAL, VAR)) {
		nameExistsInOrigin((yyvsp[(1) - (3)].stype), VAR);
	}
;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 242 "parser.y"
    {
	nameExistsInOrigin((yyvsp[(1) - (1)].stype), VAR);
;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 249 "parser.y"
    {
	nameInTypeExistsInOrigin((yyvsp[(1) - (1)].stype), LOGICAL, VAR); //only 'bool' type is allowed
;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 252 "parser.y"
    {
	nameInTypeExistsInOrigin((yyvsp[(2) - (2)].stype), LOGICAL, VAR); //only 'bool' type is allowed
;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 260 "parser.y"
    { 
	handleNameInAssigning((yyvsp[(1) - (4)].stype), CHARACTERS, VAR);
;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 263 "parser.y"
    {
	validateTwoAssigningOperants((yyvsp[(1) - (4)].stype), (yyvsp[(4) - (4)].stype), VAR)
;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 268 "parser.y"
    {
	if (handleNameInAssigning((yyvsp[(1) - (4)].stype), LOGICAL, VAR)) {
		nameExistsInOrigin((yyvsp[(1) - (4)].stype), VAR);
	}
;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 280 "parser.y"
    { 
	handleNameInAssigning((yyvsp[(1) - (4)].stype), CHARACTERS, VAR);
;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 283 "parser.y"
    {
	validateTwoAssigningOperants((yyvsp[(1) - (4)].stype), (yyvsp[(4) - (4)].stype), VAR)
;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 288 "parser.y"
    {
	if (handleNameInAssigning((yyvsp[(1) - (4)].stype), LOGICAL, VAR)) {
		nameExistsInOrigin((yyvsp[(1) - (4)].stype), VAR);
	}
;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 313 "parser.y"
    {
	validateExistenceAndIsNotPrimitve(getNameFromDataAccess((yyvsp[(1) - (1)].stype)));
;}
    break;



/* Line 1455 of yacc.c  */
#line 2104 "parser.c"
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
#line 318 "parser.y"

void yyerror(char *s) {
	fprintf(stderr, "%s\n", s);
}

int main(void) {
	initStack();
	yyparse();
	return 0;
}
