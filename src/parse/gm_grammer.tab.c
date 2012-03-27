
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison GLR parsers in C
   
      Copyright (C) 2002, 2003, 2004, 2005, 2006 Free Software Foundation, Inc.
   
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

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 1




/* Copy the first part of user declarations.  */

/* Line 172 of glr.c  */
#line 6 "parse/gm_grammer.y"

    #include <stdio.h>
    #include <string.h>
    #include <assert.h>
    #include "gm_frontend_api.h"
    #define YYERROR_VERBOSE 1
    extern void   GM_lex_begin_user_text();

    void yyerror(const char* str) 
    {
        GM_print_parse_error(str);
    }
    int yywrap()
    {
        return 1;
    }
    extern int yylex();


/* Line 172 of glr.c  */
#line 79 "./parse/gm_grammer.tab.c"



#include "gm_grammer.tab.h"

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

/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template,
   here we set the default value of $$ to a zeroed-out value.
   Since the default value is undefined, this behavior is
   technically correct.  */
static YYSTYPE yyval_default;

/* Copy the second part of user declarations.  */


/* Line 243 of glr.c  */
#line 114 "./parse/gm_grammer.tab.c"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#define YYSIZEMAX ((size_t) -1)

#ifdef __cplusplus
   typedef bool yybool;
#else
   typedef unsigned char yybool;
#endif
#define yytrue 1
#define yyfalse 0

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(env) setjmp (env)
# define YYLONGJMP(env, val) longjmp (env, val)
#endif

/*-----------------.
| GCC extensions.  |
`-----------------*/

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5) || __STRICT_ANSI__)
#  define __attribute__(Spec) /* empty */
# endif
#endif

#define YYOPTIONAL_LOC(Name) Name

#ifndef YYASSERT
# define YYASSERT(condition) ((void) ((condition) || (abort (), 0)))
#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   815

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  184
/* YYNRULES -- Number of states.  */
#define YYNSTATES  374
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 14
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   324

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    92,     2,     2,     2,    77,     2,     2,
      79,    80,    75,    73,    82,    74,    85,    76,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    70,    81,
      71,    89,    72,    69,    90,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    87,     2,    88,    86,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,    91,    84,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    78
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    16,    24,    27,    28,
      30,    32,    36,    38,    42,    43,    45,    48,    52,    54,
      56,    58,    60,    62,    64,    66,    68,    70,    72,    74,
      76,    78,    80,    85,    90,    95,   100,   105,   113,   121,
     123,   127,   129,   133,   135,   137,   138,   141,   144,   147,
     149,   151,   153,   156,   159,   162,   164,   167,   169,   171,
     174,   177,   180,   182,   184,   190,   197,   202,   207,   215,
     224,   233,   234,   238,   240,   242,   244,   246,   248,   250,
     252,   257,   263,   269,   270,   274,   277,   278,   282,   285,
     296,   297,   299,   301,   303,   304,   306,   308,   311,   314,
     318,   322,   325,   330,   332,   336,   341,   345,   350,   355,
     356,   359,   361,   363,   365,   367,   369,   371,   373,   375,
     377,   380,   382,   388,   396,   398,   404,   408,   412,   415,
     418,   423,   438,   450,   462,   471,   475,   479,   483,   487,
     491,   495,   499,   503,   507,   511,   515,   519,   523,   529,
     531,   533,   535,   537,   539,   541,   543,   545,   547,   549,
     551,   553,   555,   557,   559,   561,   563,   565,   567,   569,
     571,   573,   577,   579,   583,   588,   591,   595,   598,   600,
     604,   610,   616,   617,   622
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const short int yyrhs[] =
{
      94,     0,    -1,    -1,    94,    95,    -1,    96,   114,    -1,
      97,    79,    98,    80,   101,    -1,    97,    79,    98,    81,
     100,    80,   101,    -1,     3,   166,    -1,    -1,    99,    -1,
     103,    -1,    99,    82,   103,    -1,   103,    -1,   100,    82,
     103,    -1,    -1,   102,    -1,    70,   107,    -1,   104,    70,
     105,    -1,   113,    -1,   107,    -1,   106,    -1,   112,    -1,
     108,    -1,   111,    -1,     4,    -1,    15,    -1,    19,    -1,
      16,    -1,    18,    -1,    17,    -1,   109,    -1,   110,    -1,
       5,    79,   166,    80,    -1,     7,    79,   166,    80,    -1,
       9,    79,   166,    80,    -1,    11,    79,   166,    80,    -1,
      10,    79,   166,    80,    -1,     6,    71,   107,    72,    79,
     166,    80,    -1,     8,    71,   107,    72,    79,   166,    80,
      -1,   166,    -1,   113,    82,   166,    -1,   115,    -1,   116,
     118,   117,    -1,    83,    -1,    84,    -1,    -1,   118,   119,
      -1,   139,    81,    -1,   137,    81,    -1,   115,    -1,   123,
      -1,   148,    -1,   140,    81,    -1,   141,    81,    -1,   122,
      81,    -1,   121,    -1,   147,    81,    -1,   128,    -1,   127,
      -1,   120,    81,    -1,   149,    81,    -1,   142,    81,    -1,
      81,    -1,   159,    -1,    53,    79,   151,    80,   115,    -1,
      52,   115,    53,    79,   151,    80,    -1,    26,   124,   125,
     119,    -1,    27,   124,   125,   119,    -1,    79,   166,    70,
     166,    85,   126,    80,    -1,    79,   166,    70,   166,    73,
      85,   126,    80,    -1,    79,   166,    70,   166,    74,    85,
     126,    80,    -1,    -1,    79,   151,    80,    -1,    28,    -1,
      29,    -1,    30,    -1,    31,    -1,    32,    -1,    33,    -1,
      12,    -1,    34,    79,   166,    80,    -1,    13,   131,   134,
     115,   129,    -1,    21,   131,   134,   115,   130,    -1,    -1,
      14,   136,   115,    -1,    14,   115,    -1,    -1,    25,   136,
     115,    -1,    25,   115,    -1,    79,   166,    70,   166,   132,
      85,    28,   133,   166,    80,    -1,    -1,    86,    -1,    23,
      -1,    81,    -1,    -1,   135,    -1,   136,    -1,   135,   136,
      -1,   136,   135,    -1,    87,   150,    88,    -1,    79,   150,
      80,    -1,   105,   138,    -1,   105,   166,    89,   146,    -1,
     113,    -1,   155,    89,   146,    -1,   155,   144,   146,   143,
      -1,   155,    58,   143,    -1,   155,    48,   146,   143,    -1,
     162,   145,   163,   143,    -1,    -1,    90,   166,    -1,    54,
      -1,    55,    -1,    56,    -1,    57,    -1,    59,    -1,    60,
      -1,    56,    -1,    57,    -1,   150,    -1,    20,   150,    -1,
      20,    -1,    50,    79,   151,    80,   119,    -1,    50,    79,
     151,    80,   119,    51,   119,    -1,   164,    -1,   164,    63,
      87,   156,    88,    -1,    79,   150,    80,    -1,    91,   150,
      91,    -1,    74,   150,    -1,    92,   150,    -1,    79,   107,
      80,   150,    -1,   152,    79,   166,    70,   166,    85,   126,
      80,    79,   150,    80,    83,   150,    84,    -1,   152,    79,
     166,    70,   166,    85,   126,    80,    83,   150,    84,    -1,
     153,    79,   166,    70,   166,    85,   126,    80,    79,   150,
      80,    -1,   153,    79,   166,    70,   166,    85,   126,    80,
      -1,   150,    77,   150,    -1,   150,    75,   150,    -1,   150,
      76,   150,    -1,   150,    73,   150,    -1,   150,    74,   150,
      -1,   150,    48,   150,    -1,   150,    49,   150,    -1,   150,
      71,   150,    -1,   150,    72,   150,    -1,   150,    46,   150,
      -1,   150,    47,   150,    -1,   150,    44,   150,    -1,   150,
      45,   150,    -1,   150,    69,   150,    70,   150,    -1,    68,
      -1,    66,    -1,    67,    -1,   154,    -1,   157,    -1,   158,
      -1,   159,    -1,   164,    -1,   150,    -1,    35,    -1,    36,
      -1,    37,    -1,    38,    -1,    41,    -1,    40,    -1,    42,
      -1,    39,    -1,    62,    -1,    61,    -1,   157,    -1,   158,
      -1,   155,    -1,   155,    82,   156,    -1,   166,    -1,   166,
      85,   166,    -1,   166,    85,   166,   160,    -1,   166,   160,
      -1,    79,   161,    80,    -1,    79,    80,    -1,   150,    -1,
     150,    82,   161,    -1,    71,   155,    81,   156,    72,    -1,
      71,   150,    81,   161,    72,    -1,    -1,    87,   165,    65,
      88,    -1,    64,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   104,   104,   105,   107,   109,   110,   112,   114,   115,
     117,   118,   121,   122,   124,   125,   127,   132,   134,   136,
     137,   138,   139,   140,   143,   146,   148,   150,   152,   154,
     157,   158,   160,   162,   165,   167,   169,   172,   175,   179,
     180,   183,   185,   186,   187,   189,   190,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   209,   211,   213,   216,   217,   219,   220,
     221,   223,   224,   226,   227,   228,   229,   230,   231,   232,
     233,   235,   239,   243,   244,   245,   247,   248,   249,   251,
     258,   259,   261,   262,   265,   266,   267,   268,   269,   271,
     273,   276,   277,   279,   281,   282,   283,   285,   287,   292,
     293,   295,   296,   297,   298,   299,   300,   302,   303,   305,
     308,   309,   314,   315,   318,   319,   322,   323,   324,   326,
     327,   328,   329,   330,   334,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   353,   355,
     356,   357,   358,   359,   360,   361,   362,   365,   368,   369,
     370,   371,   372,   373,   374,   376,   379,   380,   382,   383,
     385,   386,   388,   388,   390,   391,   393,   394,   396,   397,
     399,   400,   403,   403,   409
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_PROC", "T_GRAPH", "T_NODE",
  "T_NODEPROP", "T_EDGE", "T_EDGEPROP", "T_NSET", "T_NORDER", "T_NSEQ",
  "T_ITEMS", "T_DFS", "T_POST", "T_INT", "T_FLOAT", "T_BOOL", "T_DOUBLE",
  "T_LONG", "T_RETURN", "T_BFS", "T_RBFS", "T_FROM", "T_TO", "T_BACK",
  "T_FOREACH", "T_FOR", "T_NODES", "T_EDGES", "T_NBRS", "T_IN_NBRS",
  "T_UP_NBRS", "T_DOWN_NBRS", "T_COMMON_NBRS", "T_SUM", "T_PRODUCT",
  "T_MIN", "T_MAX", "T_COUNT", "T_ALL", "T_EXIST", "T_AVG", "T_EMPTYLINE",
  "T_AND", "T_OR", "T_EQ", "T_NEQ", "T_LE", "T_GE", "T_IF", "T_ELSE",
  "T_DO", "T_WHILE", "T_PLUSEQ", "T_MULTEQ", "T_MINEQ", "T_MAXEQ",
  "T_PLUSPLUS", "T_ANDEQ", "T_OREQ", "T_M_INF", "T_P_INF",
  "T_DOUBLE_COLON", "ID", "USER_TEXT", "INT_NUM", "FLOAT_NUM", "BOOL_VAL",
  "'?'", "':'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "NEG",
  "'('", "')'", "';'", "','", "'{'", "'}'", "'.'", "'^'", "'['", "']'",
  "'='", "'@'", "'|'", "'!'", "$accept", "prog", "proc_def", "proc_head",
  "proc_name", "arg_declist1", "arg_declist", "arg_declist2",
  "proc_return_opt", "proc_return", "arg_decl", "arg_target", "typedecl",
  "graph_type", "prim_type", "nodeedge_type", "node_type", "edge_type",
  "set_type", "property", "id_comma_list", "proc_body", "sent_block",
  "sb_begin", "sb_end", "sent_list", "sent", "sent_call", "sent_while",
  "sent_do_while", "sent_foreach", "foreach_header", "foreach_filter",
  "iterator1", "sent_dfs", "sent_bfs", "dfs_post", "bfs_reverse",
  "bfs_header_format", "opt_tp", "from_or_semi", "bfs_filters",
  "bfs_navigator", "bfs_filter", "sent_variable_decl", "var_target",
  "sent_assignment", "sent_reduce_assignment", "sent_defer_assignment",
  "sent_argminmax_assignment", "optional_bind", "reduce_eq", "minmax_eq",
  "rhs", "sent_return", "sent_if", "sent_user", "expr", "bool_expr",
  "reduce_op", "reduce_op2", "inf", "lhs", "lhs_list", "scala", "field",
  "built_in", "arg_list", "expr_list", "lhs_list2", "rhs_list2",
  "expr_user", "$@1", "id", 0
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    93,    94,    94,    95,    96,    96,    97,    98,    98,
      99,    99,   100,   100,   101,   101,   102,   103,   104,   105,
     105,   105,   105,   105,   106,   107,   107,   107,   107,   107,
     108,   108,   109,   110,   111,   111,   111,   112,   112,   113,
     113,   114,   115,   116,   117,   118,   118,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   120,   121,   122,   123,   123,   124,   124,
     124,   125,   125,   126,   126,   126,   126,   126,   126,   126,
     126,   127,   128,   129,   129,   129,   130,   130,   130,   131,
     132,   132,   133,   133,   134,   134,   134,   134,   134,   135,
     136,   137,   137,   138,   139,   140,   140,   141,   142,   143,
     143,   144,   144,   144,   144,   144,   144,   145,   145,   146,
     147,   147,   148,   148,   149,   149,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   151,   152,   152,
     152,   152,   152,   152,   152,   153,   154,   154,   155,   155,
     156,   156,   157,   158,   159,   159,   160,   160,   161,   161,
     162,   163,   165,   164,   166
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     0,     2,     2,     5,     7,     2,     0,     1,
       1,     3,     1,     3,     0,     1,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     4,     7,     7,     1,
       3,     1,     3,     1,     1,     0,     2,     2,     2,     1,
       1,     1,     2,     2,     2,     1,     2,     1,     1,     2,
       2,     2,     1,     1,     5,     6,     4,     4,     7,     8,
       8,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       4,     5,     5,     0,     3,     2,     0,     3,     2,    10,
       0,     1,     1,     1,     0,     1,     1,     2,     2,     3,
       3,     2,     4,     1,     3,     4,     3,     4,     4,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     5,     7,     1,     5,     3,     3,     2,     2,
       4,    14,    11,    11,     8,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     4,     2,     3,     2,     1,     3,
       5,     5,     0,     4,     1
};

/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const unsigned char yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const unsigned char yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error.  */
static const unsigned char yydefact[] =
{
       2,     0,     1,     0,     3,     0,     0,   184,     7,    43,
       4,    41,    45,     8,     0,     0,     9,    10,     0,    18,
      39,    24,     0,     0,     0,     0,     0,     0,     0,     0,
      25,    27,    29,    28,    26,   121,     0,     0,     0,     0,
       0,     0,     0,    62,    44,   182,     0,    20,    19,    22,
      30,    31,    23,    21,    49,    42,    46,     0,    55,     0,
      50,    58,    57,     0,     0,     0,     0,     0,     0,    51,
       0,     0,   168,   169,    63,     0,   124,   172,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,   158,   159,   160,   161,   165,   163,   162,   164,
     167,   166,   150,   151,   149,     0,     0,     0,     0,   120,
       0,     0,   152,   153,   154,   155,   156,    94,     0,    71,
      71,     0,     0,     0,     0,   172,     0,   103,   101,    39,
      59,    54,    48,    47,    52,    53,    61,    56,    60,     0,
     111,   112,   113,   114,   109,   115,   116,     0,     0,   117,
     118,     0,     0,     0,     0,   175,     0,     5,    15,     0,
      12,    11,    17,    40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,   128,     0,     0,
       0,   129,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   157,     0,     0,     0,     0,     0,     0,
       0,   109,   119,     0,   106,   104,   109,     0,   109,     0,
     177,   178,     0,   173,    16,    14,     0,    32,     0,    33,
       0,    34,    36,    35,     0,     0,     0,    83,    97,    98,
       0,   126,   127,   146,   147,   144,   145,   140,   141,     0,
     142,   143,   138,   139,   136,   137,   135,     0,     0,    86,
       0,     0,    66,    67,     0,     0,     0,   170,     0,   173,
     183,   102,   107,   110,   105,     0,   108,     0,     0,   176,
     174,     6,    13,     0,     0,    90,   100,    99,     0,    81,
     130,     0,     0,     0,     0,    82,     0,    72,   122,     0,
      64,     0,   180,     0,   125,   179,     0,     0,    91,     0,
      85,     0,   148,     0,     0,    88,     0,     0,     0,     0,
       0,    65,   171,     0,    37,    38,     0,    84,     0,     0,
      87,     0,     0,    79,    73,    74,    75,    76,    77,    78,
       0,     0,   123,   181,     0,     0,     0,     0,     0,     0,
      68,    92,    93,     0,     0,   134,    69,    70,     0,     0,
       0,     0,     0,    80,    89,     0,     0,     0,     0,   132,
     133,     0,     0,   131
};

/* YYPDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     1,     4,     5,     6,    15,    16,   159,   157,   158,
      17,    18,    46,    47,    48,    49,    50,    51,    52,    53,
      19,    10,    54,    12,    55,    14,    56,    57,    58,    59,
      60,   119,   201,   341,    61,    62,   289,   295,    91,   309,
     353,   174,   175,   176,    63,   128,    64,    65,    66,    67,
     214,   148,   151,   211,    68,    69,    70,   203,   204,   110,
     111,   112,    71,   268,   113,   114,   115,   155,   222,    75,
     218,   116,   126,    77
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -242
static const short int yypact[] =
{
    -242,    18,  -242,   -29,  -242,   -81,   -25,  -242,  -242,  -242,
    -242,  -242,  -242,   -29,    40,   -16,     7,  -242,     4,    21,
    -242,  -242,    33,    43,    46,    58,    63,    69,    71,    75,
    -242,  -242,  -242,  -242,  -242,   440,    75,    84,    84,    92,
     -81,    94,   -29,  -242,  -242,  -242,   -29,  -242,  -242,  -242,
    -242,  -242,  -242,  -242,  -242,  -242,  -242,   109,  -242,   114,
    -242,  -242,  -242,   127,   134,   139,   140,   141,   143,  -242,
     144,   -26,  -242,  -242,  -242,    39,   163,   -59,   133,   -29,
     -29,   151,   -29,   -29,   101,   -29,   101,   -29,   -29,   -29,
     -29,   -62,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,
    -242,  -242,  -242,  -242,  -242,   440,   373,   440,   440,   690,
     149,   154,  -242,  -242,  -242,  -242,  -242,   -62,   -29,   155,
     155,   440,   177,   440,   169,   150,   187,    21,  -242,   164,
    -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,   440,
    -242,  -242,  -242,  -242,   166,  -242,  -242,   440,   440,  -242,
    -242,   184,   178,   382,   -29,  -242,   101,  -242,  -242,     1,
    -242,  -242,  -242,  -242,   186,   195,   188,   197,   191,   192,
     193,   205,   440,   440,   -81,   198,   189,  -242,   199,   587,
     449,  -242,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   440,   440,   440,   440,   440,   -29,   -29,   -81,   208,
     440,   316,   316,   690,   202,   206,   204,   -29,   -29,   200,
     440,   166,   690,   -29,  -242,  -242,   166,   440,   166,   -29,
    -242,   537,   207,   212,  -242,   133,   -29,  -242,   214,  -242,
     217,  -242,  -242,  -242,   -29,   597,    61,   280,  -242,  -242,
     440,  -242,  -242,   738,   731,   165,   165,   185,   185,   681,
     185,   185,   122,   122,  -242,  -242,  -242,   227,   229,   277,
     -29,   223,  -242,  -242,   316,   440,   -81,   222,   233,  -242,
    -242,  -242,  -242,  -242,  -242,   549,  -242,   218,   440,  -242,
    -242,  -242,  -242,   -29,   -29,   226,  -242,  -242,   -60,  -242,
    -242,   440,   -29,   -29,   -60,  -242,    28,  -242,   257,   235,
    -242,   -29,  -242,   440,  -242,  -242,   236,   237,  -242,   228,
    -242,   -81,   697,   243,   253,  -242,   -81,   254,   255,   215,
     316,  -242,  -242,   246,  -242,  -242,   313,  -242,   215,   215,
    -242,   215,   215,  -242,  -242,  -242,  -242,  -242,  -242,  -242,
     265,   267,  -242,  -242,    -9,   268,   269,   271,   275,   -29,
    -242,  -242,  -242,   -29,   -43,   266,  -242,  -242,   276,   278,
     440,   440,   440,  -242,  -242,   634,   489,   644,   274,  -242,
    -242,   440,   503,  -242
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -242,  -242,  -242,  -242,  -242,  -242,  -242,  -242,   135,  -242,
     -74,  -242,   281,  -242,   -15,  -242,  -242,  -242,  -242,  -242,
     315,  -242,    -2,  -242,  -242,  -242,  -194,  -242,  -242,  -242,
    -242,   321,   244,  -185,  -242,  -242,  -242,  -242,   329,  -242,
    -242,   250,   194,  -166,  -242,  -242,  -242,  -242,  -242,  -242,
    -143,  -242,  -242,  -132,  -242,  -242,  -242,    -8,  -112,  -242,
    -242,  -242,     0,  -207,    -1,    10,   -13,   148,  -241,  -242,
    -242,   -10,  -242,    -3
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned short int yytable[] =
{
       8,    74,     9,    11,    76,   160,   161,   262,   263,   238,
      20,   206,   277,    72,   351,   215,   216,   172,     2,   172,
     153,     3,   139,     9,    73,   173,   154,   109,   140,   141,
     142,   143,   144,   145,   146,     7,   360,   305,   122,   125,
     361,    72,   124,   129,    21,    22,    23,    24,    25,    26,
      27,    28,    73,    29,    13,    30,    31,    32,    33,    34,
      35,    36,   323,   147,    78,    79,    37,    38,   272,   165,
     298,   167,   352,   274,    81,   276,    20,    20,   271,   163,
     164,   225,   166,   226,   168,   169,   170,   171,   261,    80,
      39,   178,    40,    41,   322,   149,   150,   177,   179,   180,
     181,   317,   318,    82,     7,   182,   183,   184,   185,   186,
     187,    42,    83,   319,    84,   199,    30,    31,    32,    33,
      34,    43,   311,     9,    44,    85,   342,    45,   316,    86,
     188,   212,   189,   190,   191,   192,   193,   194,   195,   212,
     212,   224,    87,   345,   346,   221,   347,   348,    88,   287,
      89,   223,   282,   299,    90,    21,    22,    23,    24,    25,
      26,    27,    28,   118,   235,   236,    30,    31,    32,    33,
      34,   121,   237,   123,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,    74,    74,
     130,    76,    76,   257,   258,   131,   259,   193,   194,   195,
      72,    72,   212,   156,   125,   269,    72,   267,   132,   275,
     273,    73,    73,   186,   187,   133,   125,    73,    72,   267,
     134,   135,   136,    20,   137,   138,   152,   333,   196,    73,
     205,   285,   290,   197,   200,   208,   189,   190,   191,   192,
     193,   194,   195,   334,   335,   336,   337,   338,   339,   340,
     207,    74,   209,   210,    76,   217,   213,   296,   191,   192,
     193,   194,   195,    72,   300,   219,   227,   228,   229,   230,
     221,   231,   232,   233,    73,   234,   173,   172,   260,   240,
     306,   307,   264,   312,   266,   265,   310,   279,   270,   313,
     314,   153,   315,   283,   288,   221,   284,   292,   125,   293,
      72,   267,   294,   297,   301,   302,   304,    74,   320,   327,
      76,    73,   308,   326,   330,   321,   324,   325,   343,    72,
      21,    22,    23,    24,    25,    26,    27,    28,   328,    29,
      73,    30,    31,    32,    33,    34,    35,    36,   329,   331,
     332,   344,    37,    38,   349,   362,   358,   350,   354,   355,
     359,   356,   365,   366,   367,   357,   363,   371,   364,   120,
     281,   127,   162,   372,   202,   117,    39,   198,    40,    41,
     239,   280,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     0,     0,     0,     0,     0,     0,    42,    30,    31,
      32,    33,    34,     0,     0,     0,     0,    43,     0,     9,
       0,     0,     0,    45,     0,     0,     0,     0,    92,    93,
      94,    95,    96,    97,    98,    99,     0,    92,    93,    94,
      95,    96,    97,    98,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,   101,     0,     7,     0,   102,
     103,   104,     0,   100,   101,     0,     7,   105,   102,   103,
     104,     0,   106,     0,     0,     0,   105,     0,     0,     0,
      45,   106,   220,     0,   107,   108,     0,     0,     0,    45,
       0,     0,     0,   107,   108,    92,    93,    94,    95,    96,
      97,    98,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   182,   183,   184,   185,   186,   187,     0,
       0,   100,   101,     0,     7,     0,   102,   103,   104,     0,
       0,     0,     0,     0,   105,     0,     0,     0,   188,   106,
     189,   190,   191,   192,   193,   194,   195,    45,     0,     0,
       0,   107,   108,   182,   183,   184,   185,   186,   187,     0,
     242,     0,     0,     0,     0,     0,     0,   182,   183,   184,
     185,   186,   187,     0,     0,     0,     0,     0,   188,     0,
     189,   190,   191,   192,   193,   194,   195,     0,     0,     0,
       0,     0,   188,   369,   189,   190,   191,   192,   193,   194,
     195,   182,   183,   184,   185,   186,   187,   373,     0,     0,
       0,     0,     0,   182,   183,   184,   185,   186,   187,     0,
       0,     0,     0,     0,     0,     0,   188,     0,   189,   190,
     191,   192,   193,   194,   195,     0,     0,     0,   188,   278,
     189,   190,   191,   192,   193,   194,   195,     0,     0,     0,
     303,   182,   183,   184,   185,   186,   187,     0,     0,     0,
       0,   182,   183,   184,   185,   186,   187,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   188,     0,   189,   190,
     191,   192,   193,   194,   195,     0,   188,   241,   189,   190,
     191,   192,   193,   194,   195,     0,     0,   286,   182,   183,
     184,   185,   186,   187,     0,     0,     0,     0,   182,   183,
     184,   185,   186,   187,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   188,     0,   189,   190,   191,   192,   193,
     194,   195,     0,   188,   368,   189,   190,   191,   192,   193,
     194,   195,     0,     0,   370,   182,   183,   184,   185,   186,
     187,     0,     0,     0,   182,   183,   184,   185,   186,   187,
       0,   182,   183,   184,   185,   186,   187,     0,     0,     0,
     188,   291,   189,   190,   191,   192,   193,   194,   195,   188,
       0,   189,   190,   191,   192,   193,   194,   195,   189,   190,
     191,   192,   193,   194,   195,   182,     0,   184,   185,   186,
     187,     0,     0,     0,   184,   185,   186,   187,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   189,   190,   191,   192,   193,   194,   195,   189,
     190,   191,   192,   193,   194,   195
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const unsigned char yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0,   178,     0,   122,     0
};

static const short int yycheck[] =
{
       3,    14,    83,     5,    14,    79,    80,   201,   202,   175,
      13,   123,   219,    14,    23,   147,   148,    79,     0,    79,
      79,     3,    48,    83,    14,    87,    85,    35,    54,    55,
      56,    57,    58,    59,    60,    64,    79,   278,    40,    42,
      83,    42,    42,    46,     4,     5,     6,     7,     8,     9,
      10,    11,    42,    13,    79,    15,    16,    17,    18,    19,
      20,    21,   303,    89,    80,    81,    26,    27,   211,    84,
     264,    86,    81,   216,    70,   218,    79,    80,   210,    82,
      83,    80,    85,    82,    87,    88,    89,    90,   200,    82,
      50,   106,    52,    53,   301,    56,    57,   105,   106,   107,
     108,    73,    74,    82,    64,    44,    45,    46,    47,    48,
      49,    71,    79,    85,    71,   118,    15,    16,    17,    18,
      19,    81,   288,    83,    84,    79,   320,    87,   294,    71,
      69,   139,    71,    72,    73,    74,    75,    76,    77,   147,
     148,   156,    79,   328,   329,   153,   331,   332,    79,    88,
      79,   154,   226,   265,    79,     4,     5,     6,     7,     8,
       9,    10,    11,    79,   172,   173,    15,    16,    17,    18,
      19,    79,   174,    79,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   201,   202,
      81,   201,   202,   196,   197,    81,   198,    75,    76,    77,
     201,   202,   210,    70,   207,   208,   207,   207,    81,   217,
     213,   201,   202,    48,    49,    81,   219,   207,   219,   219,
      81,    81,    81,   226,    81,    81,    63,    12,    79,   219,
      53,   234,   240,    79,    79,    85,    71,    72,    73,    74,
      75,    76,    77,    28,    29,    30,    31,    32,    33,    34,
      81,   264,    65,    89,   264,    71,    90,   260,    73,    74,
      75,    76,    77,   264,   266,    87,    80,    72,    80,    72,
     278,    80,    80,    80,   264,    70,    87,    79,    70,    80,
     283,   284,    80,   291,    80,    79,   288,    80,    88,   292,
     293,    79,   294,    79,    14,   303,    79,    70,   301,    70,
     301,   301,    25,    80,    82,    72,    88,   320,    51,   311,
     320,   301,    86,    85,   316,    80,    80,    80,    72,   320,
       4,     5,     6,     7,     8,     9,    10,    11,    85,    13,
     320,    15,    16,    17,    18,    19,    20,    21,    85,    85,
      85,    28,    26,    27,    79,    79,   349,    80,    80,    80,
     353,    80,   360,   361,   362,    80,    80,    83,    80,    38,
     225,    46,    81,   371,   120,    36,    50,   117,    52,    53,
     176,   223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    71,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    81,    -1,    83,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    -1,    64,    -1,    66,
      67,    68,    -1,    61,    62,    -1,    64,    74,    66,    67,
      68,    -1,    79,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      87,    79,    80,    -1,    91,    92,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    91,    92,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    46,    47,    48,    49,    -1,
      -1,    61,    62,    -1,    64,    -1,    66,    67,    68,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    69,    79,
      71,    72,    73,    74,    75,    76,    77,    87,    -1,    -1,
      -1,    91,    92,    44,    45,    46,    47,    48,    49,    -1,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    72,    73,    74,    75,    76,    77,    -1,    -1,    -1,
      -1,    -1,    69,    84,    71,    72,    73,    74,    75,    76,
      77,    44,    45,    46,    47,    48,    49,    84,    -1,    -1,
      -1,    -1,    -1,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    72,
      73,    74,    75,    76,    77,    -1,    -1,    -1,    69,    82,
      71,    72,    73,    74,    75,    76,    77,    -1,    -1,    -1,
      81,    44,    45,    46,    47,    48,    49,    -1,    -1,    -1,
      -1,    44,    45,    46,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    72,
      73,    74,    75,    76,    77,    -1,    69,    80,    71,    72,
      73,    74,    75,    76,    77,    -1,    -1,    80,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    72,    73,    74,    75,
      76,    77,    -1,    69,    80,    71,    72,    73,    74,    75,
      76,    77,    -1,    -1,    80,    44,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    44,    45,    46,    47,    48,    49,
      -1,    44,    45,    46,    47,    48,    49,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    69,
      -1,    71,    72,    73,    74,    75,    76,    77,    71,    72,
      73,    74,    75,    76,    77,    44,    -1,    46,    47,    48,
      49,    -1,    -1,    -1,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    77,    71,
      72,    73,    74,    75,    76,    77
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    94,     0,     3,    95,    96,    97,    64,   166,    83,
     114,   115,   116,    79,   118,    98,    99,   103,   104,   113,
     166,     4,     5,     6,     7,     8,     9,    10,    11,    13,
      15,    16,    17,    18,    19,    20,    21,    26,    27,    50,
      52,    53,    71,    81,    84,    87,   105,   106,   107,   108,
     109,   110,   111,   112,   115,   117,   119,   120,   121,   122,
     123,   127,   128,   137,   139,   140,   141,   142,   147,   148,
     149,   155,   157,   158,   159,   162,   164,   166,    80,    81,
      82,    70,    82,    79,    71,    79,    71,    79,    79,    79,
      79,   131,    35,    36,    37,    38,    39,    40,    41,    42,
      61,    62,    66,    67,    68,    74,    79,    91,    92,   150,
     152,   153,   154,   157,   158,   159,   164,   131,    79,   124,
     124,    79,   115,    79,   155,   166,   165,   113,   138,   166,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    48,
      54,    55,    56,    57,    58,    59,    60,    89,   144,    56,
      57,   145,    63,    79,    85,   160,    70,   101,   102,   100,
     103,   103,   105,   166,   166,   107,   166,   107,   166,   166,
     166,   166,    79,    87,   134,   135,   136,   150,   107,   150,
     150,   150,    44,    45,    46,    47,    48,    49,    69,    71,
      72,    73,    74,    75,    76,    77,    79,    79,   134,   166,
      79,   125,   125,   150,   151,    53,   151,    81,    85,    65,
      89,   146,   150,    90,   143,   146,   146,    71,   163,    87,
      80,   150,   161,   166,   107,    80,    82,    80,    72,    80,
      72,    80,    80,    80,    70,   150,   150,   115,   136,   135,
      80,    80,    91,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   166,   166,   115,
      70,   151,   119,   119,    80,    79,    80,   155,   156,   166,
      88,   146,   143,   166,   143,   150,   143,   156,    82,    80,
     160,   101,   103,    79,    79,   166,    80,    88,    14,   129,
     150,    70,    70,    70,    25,   130,   166,    80,   119,   151,
     115,    82,    72,    81,    88,   161,   166,   166,    86,   132,
     115,   136,   150,   166,   166,   115,   136,    73,    74,    85,
      51,    80,   156,   161,    80,    80,    85,   115,    85,    85,
     115,    85,    85,    12,    28,    29,    30,    31,    32,    33,
      34,   126,   119,    72,    28,   126,   126,   126,   126,    79,
      80,    23,    81,   133,    80,    80,    80,    80,   166,   166,
      79,    83,    79,    80,    80,   150,   150,   150,    80,    84,
      80,    83,   150,    84
};


/* Prevent warning if -Wmissing-prototypes.  */
int yyparse (void);

/* Error token number */
#define YYTERROR 1

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */


#define YYRHSLOC(Rhs, K) ((Rhs)[K].yystate.yyloc)
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))							\
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

/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# define YY_LOCATION_PRINT(File, Loc)			\
    fprintf (File, "%d.%d-%d.%d",			\
	     (Loc).first_line, (Loc).first_column,	\
	     (Loc).last_line,  (Loc).last_column)
#endif


#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#define YYLEX yylex ()

YYSTYPE yylval;

YYLTYPE yylloc;

int yynerrs;
int yychar;

static const int YYEOF = 0;
static const int YYEMPTY = -2;

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)							     \
   do { YYRESULTTAG yyflag = YYE; if (yyflag != yyok) return yyflag; }	     \
   while (YYID (0))

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			    \
do {									    \
  if (yydebug)								    \
    {									    \
      YYFPRINTF (stderr, "%s ", Title);					    \
      yy_symbol_print (stderr, Type,					    \
		       Value, Location);  \
      YYFPRINTF (stderr, "\n");						    \
    }									    \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

#else /* !YYDEBUG */

# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)

#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
# if (! defined __cplusplus \
      || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	  && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL))
#  define YYSTACKEXPANDABLE 1
# else
#  define YYSTACKEXPANDABLE 0
# endif
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)			\
  do {							\
    if (Yystack->yyspaceLeft < YYHEADROOM)		\
      yyexpandGLRStack (Yystack);			\
  } while (YYID (0))
#else
# define YY_RESERVE_GLRSTACK(Yystack)			\
  do {							\
    if (Yystack->yyspaceLeft < YYHEADROOM)		\
      yyMemoryExhausted (Yystack);			\
  } while (YYID (0))
#endif


#if YYERROR_VERBOSE

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static size_t
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
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
    return strlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* !YYERROR_VERBOSE */

/** State numbers, as in LALR(1) machine */
typedef int yyStateNum;

/** Rule numbers, as in LALR(1) machine */
typedef int yyRuleNum;

/** Grammar symbol */
typedef short int yySymbol;

/** Item references, as in LALR(1) machine */
typedef short int yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState {
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yysval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yyStateNum yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the first token produced by my symbol */
  size_t yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  non-terminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yysval;
  } yysemantics;
  /** Source location for this state.  */
  YYLTYPE yyloc;
};

struct yyGLRStateSet {
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  size_t yysize, yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  YYLTYPE yyloc;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;
  /* To compute the location of the error token.  */
  yyGLRStackItem yyerror_range[3];

  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  size_t yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

static void yyFail (yyGLRStack* yystackp, const char* yymsg)
  __attribute__ ((__noreturn__));
static void
yyFail (yyGLRStack* yystackp, const char* yymsg)
{
  if (yymsg != NULL)
    yyerror (yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

static void yyMemoryExhausted (yyGLRStack* yystackp)
  __attribute__ ((__noreturn__));
static void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

#if YYDEBUG || YYERROR_VERBOSE
/** A printable representation of TOKEN.  */
static inline const char*
yytokenName (yySymbol yytoken)
{
  if (yytoken == YYEMPTY)
    return "";

  return yytname[yytoken];
}
#endif

/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) __attribute__ ((__unused__));
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  yyGLRState* s;
  int i;
  s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
      YYASSERT (s->yyresolved);
      yyvsp[i].yystate.yyresolved = yytrue;
      yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
      yyvsp[i].yystate.yyloc = s->yyloc;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     __attribute__ ((__unused__));
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT.  */
/*ARGSUSED*/ static YYRESULTTAG
yyuserAction (yyRuleNum yyn, int yyrhslen, yyGLRStackItem* yyvsp,
	      YYSTYPE* yyvalp,
	      YYLTYPE* YYOPTIONAL_LOC (yylocp),
	      yyGLRStack* yystackp
	      )
{
  yybool yynormal __attribute__ ((__unused__)) =
    (yystackp->yysplitPoint == NULL);
  int yylow;
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, N, yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)						     \
  return yyerror (YY_("syntax error: cannot back up")),     \
	 yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yysval;
  YYLLOC_DEFAULT ((*yylocp), (yyvsp - yyrhslen), yyrhslen);
  yystackp->yyerror_range[1].yystate.yyloc = *yylocp;

  switch (yyn)
    {
        case 4:

/* Line 936 of glr.c  */
#line 107 "parse/gm_grammer.y"
    {GM_procdef_finish();;}
    break;

  case 7:

/* Line 936 of glr.c  */
#line 112 "parse/gm_grammer.y"
    { GM_procdef_begin((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ptr));  ;}
    break;

  case 10:

/* Line 936 of glr.c  */
#line 117 "parse/gm_grammer.y"
    { GM_procdef_add_argdecl((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr)); ;}
    break;

  case 11:

/* Line 936 of glr.c  */
#line 118 "parse/gm_grammer.y"
    { GM_procdef_add_argdecl((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ptr)); ;}
    break;

  case 12:

/* Line 936 of glr.c  */
#line 121 "parse/gm_grammer.y"
    { GM_procdef_add_out_argdecl((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr)); ;}
    break;

  case 13:

/* Line 936 of glr.c  */
#line 122 "parse/gm_grammer.y"
    { GM_procdef_add_out_argdecl((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ptr)); ;}
    break;

  case 16:

/* Line 936 of glr.c  */
#line 127 "parse/gm_grammer.y"
    { GM_procdef_return_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ptr));;}
    break;

  case 17:

/* Line 936 of glr.c  */
#line 132 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_procdef_arg((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ptr));;}
    break;

  case 18:

/* Line 936 of glr.c  */
#line 134 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_finish_id_comma_list();;}
    break;

  case 19:

/* Line 936 of glr.c  */
#line 136 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 20:

/* Line 936 of glr.c  */
#line 137 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 21:

/* Line 936 of glr.c  */
#line 138 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 22:

/* Line 936 of glr.c  */
#line 139 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 23:

/* Line 936 of glr.c  */
#line 140 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 24:

/* Line 936 of glr.c  */
#line 143 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_graphtype_ref(GMTYPE_GRAPH); 
                   GM_set_lineinfo(((*yyvalp).ptr),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc).first_column);;}
    break;

  case 25:

/* Line 936 of glr.c  */
#line 146 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_primtype_ref(GMTYPE_INT);
                   GM_set_lineinfo(((*yyvalp).ptr),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc).first_column);;}
    break;

  case 26:

/* Line 936 of glr.c  */
#line 148 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_primtype_ref(GMTYPE_LONG);
                   GM_set_lineinfo(((*yyvalp).ptr),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc).first_column);;}
    break;

  case 27:

/* Line 936 of glr.c  */
#line 150 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_primtype_ref(GMTYPE_FLOAT);
                   GM_set_lineinfo(((*yyvalp).ptr),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc).first_column);;}
    break;

  case 28:

/* Line 936 of glr.c  */
#line 152 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_primtype_ref(GMTYPE_DOUBLE);
                   GM_set_lineinfo(((*yyvalp).ptr),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc).first_column);;}
    break;

  case 29:

/* Line 936 of glr.c  */
#line 154 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_primtype_ref(GMTYPE_BOOL);
                   GM_set_lineinfo(((*yyvalp).ptr),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc).first_column);;}
    break;

  case 30:

/* Line 936 of glr.c  */
#line 157 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 31:

/* Line 936 of glr.c  */
#line 158 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 32:

/* Line 936 of glr.c  */
#line 160 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_nodetype_ref((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ptr)); 
                   GM_set_lineinfo(((*yyvalp).ptr),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yyloc).first_column);;}
    break;

  case 33:

/* Line 936 of glr.c  */
#line 162 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_edgetype_ref((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ptr)); 
                   GM_set_lineinfo(((*yyvalp).ptr),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yyloc).first_column);;}
    break;

  case 34:

/* Line 936 of glr.c  */
#line 165 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_settype_ref(GMTYPE_NSET, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ptr));
                   GM_set_lineinfo(((*yyvalp).ptr),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yyloc).first_column);;}
    break;

  case 35:

/* Line 936 of glr.c  */
#line 167 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_settype_ref(GMTYPE_NSEQ, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ptr));
                   GM_set_lineinfo(((*yyvalp).ptr),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yyloc).first_column);;}
    break;

  case 36:

/* Line 936 of glr.c  */
#line 169 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_settype_ref(GMTYPE_NORDER, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ptr));
                   GM_set_lineinfo(((*yyvalp).ptr),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yyloc).first_column);;}
    break;

  case 37:

/* Line 936 of glr.c  */
#line 172 "parse/gm_grammer.y"
    {
                       ((*yyvalp).ptr) = GM_nodeprop_ref((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (7))].yystate.yysemantics.yysval.ptr) );
                       GM_set_lineinfo(((*yyvalp).ptr),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yyloc).first_column);;}
    break;

  case 38:

/* Line 936 of glr.c  */
#line 175 "parse/gm_grammer.y"
    {
                       ((*yyvalp).ptr) = GM_edgeprop_ref((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (7))].yystate.yysemantics.yysval.ptr));
                       GM_set_lineinfo(((*yyvalp).ptr),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yyloc).first_column);;}
    break;

  case 39:

/* Line 936 of glr.c  */
#line 179 "parse/gm_grammer.y"
    { GM_add_id_comma_list((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr));;}
    break;

  case 40:

/* Line 936 of glr.c  */
#line 180 "parse/gm_grammer.y"
    { GM_add_id_comma_list((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ptr));;}
    break;

  case 41:

/* Line 936 of glr.c  */
#line 183 "parse/gm_grammer.y"
    { GM_procdef_setbody((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr)); ;}
    break;

  case 42:

/* Line 936 of glr.c  */
#line 185 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_finish_sentblock(); ;}
    break;

  case 43:

/* Line 936 of glr.c  */
#line 186 "parse/gm_grammer.y"
    { GM_start_sentblock(); ;}
    break;

  case 46:

/* Line 936 of glr.c  */
#line 190 "parse/gm_grammer.y"
    { if ((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ptr)!=NULL) GM_add_sent((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ptr)); ;}
    break;

  case 47:

/* Line 936 of glr.c  */
#line 192 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 48:

/* Line 936 of glr.c  */
#line 193 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 49:

/* Line 936 of glr.c  */
#line 194 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 50:

/* Line 936 of glr.c  */
#line 195 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 51:

/* Line 936 of glr.c  */
#line 196 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 52:

/* Line 936 of glr.c  */
#line 197 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 53:

/* Line 936 of glr.c  */
#line 198 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 54:

/* Line 936 of glr.c  */
#line 199 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 55:

/* Line 936 of glr.c  */
#line 200 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 56:

/* Line 936 of glr.c  */
#line 201 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 57:

/* Line 936 of glr.c  */
#line 202 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 58:

/* Line 936 of glr.c  */
#line 203 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 59:

/* Line 936 of glr.c  */
#line 204 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 60:

/* Line 936 of glr.c  */
#line 205 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 61:

/* Line 936 of glr.c  */
#line 206 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 62:

/* Line 936 of glr.c  */
#line 207 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = NULL;;}
    break;

  case 63:

/* Line 936 of glr.c  */
#line 209 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_new_call_sent((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr), true);;}
    break;

  case 64:

/* Line 936 of glr.c  */
#line 211 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_while((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.ptr));;}
    break;

  case 65:

/* Line 936 of glr.c  */
#line 213 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_dowhile((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.ptr)); ;}
    break;

  case 66:

/* Line 936 of glr.c  */
#line 216 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_foreach((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.pair).p1, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.pair).p2, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.pair).i1, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ptr), false, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.pair).b1, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.pair).p3); GM_set_lineinfo(((*yyvalp).ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yyloc).first_column);;}
    break;

  case 67:

/* Line 936 of glr.c  */
#line 217 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_foreach((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.pair).p1, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.pair).p2, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.pair).i1, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ptr), true, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.pair).b1, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.pair).p3); GM_set_lineinfo(((*yyvalp).ptr),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yyloc).first_column);;}
    break;

  case 68:

/* Line 936 of glr.c  */
#line 219 "parse/gm_grammer.y"
    {((*yyvalp).pair).p1 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (7))].yystate.yysemantics.yysval.ptr); ((*yyvalp).pair).p2 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.ptr); ((*yyvalp).pair).b1 = false; ((*yyvalp).pair).i1 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (7))].yystate.yysemantics.yysval.pair).i1; ((*yyvalp).pair).p3 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (7))].yystate.yysemantics.yysval.pair).p1;;}
    break;

  case 69:

/* Line 936 of glr.c  */
#line 220 "parse/gm_grammer.y"
    {((*yyvalp).pair).p1 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (8))].yystate.yysemantics.yysval.ptr); ((*yyvalp).pair).p2 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.ptr); ((*yyvalp).pair).b1 = false; ((*yyvalp).pair).i1 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (8))].yystate.yysemantics.yysval.pair).i1; ((*yyvalp).pair).p3 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (8))].yystate.yysemantics.yysval.pair).p1;;}
    break;

  case 70:

/* Line 936 of glr.c  */
#line 221 "parse/gm_grammer.y"
    {((*yyvalp).pair).p1 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (8))].yystate.yysemantics.yysval.ptr); ((*yyvalp).pair).p2 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.ptr); ((*yyvalp).pair).b1 = true;  ((*yyvalp).pair).i1 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (8))].yystate.yysemantics.yysval.pair).i1; ((*yyvalp).pair).p3 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (8))].yystate.yysemantics.yysval.pair).p1;;}
    break;

  case 71:

/* Line 936 of glr.c  */
#line 223 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = NULL;;}
    break;

  case 72:

/* Line 936 of glr.c  */
#line 224 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ptr); ;}
    break;

  case 73:

/* Line 936 of glr.c  */
#line 226 "parse/gm_grammer.y"
    { ((*yyvalp).pair).i1 = GMTYPE_NODEITER_ALL; ((*yyvalp).pair).p1=NULL;;}
    break;

  case 74:

/* Line 936 of glr.c  */
#line 227 "parse/gm_grammer.y"
    { ((*yyvalp).pair).i1 = GMTYPE_EDGEITER_ALL; ((*yyvalp).pair).p1=NULL;;}
    break;

  case 75:

/* Line 936 of glr.c  */
#line 228 "parse/gm_grammer.y"
    { ((*yyvalp).pair).i1 = GMTYPE_NODEITER_NBRS; ((*yyvalp).pair).p1=NULL;;}
    break;

  case 76:

/* Line 936 of glr.c  */
#line 229 "parse/gm_grammer.y"
    { ((*yyvalp).pair).i1 = GMTYPE_NODEITER_IN_NBRS; ((*yyvalp).pair).p1=NULL;;}
    break;

  case 77:

/* Line 936 of glr.c  */
#line 230 "parse/gm_grammer.y"
    { ((*yyvalp).pair).i1 = GMTYPE_NODEITER_UP_NBRS; ((*yyvalp).pair).p1=NULL;;}
    break;

  case 78:

/* Line 936 of glr.c  */
#line 231 "parse/gm_grammer.y"
    { ((*yyvalp).pair).i1 = GMTYPE_NODEITER_DOWN_NBRS;((*yyvalp).pair).p1=NULL;;}
    break;

  case 79:

/* Line 936 of glr.c  */
#line 232 "parse/gm_grammer.y"
    { ((*yyvalp).pair).i1 = GMTYPE_ITER_ANY;((*yyvalp).pair).p1=NULL; /* should be resolved after typechecking */;}
    break;

  case 80:

/* Line 936 of glr.c  */
#line 233 "parse/gm_grammer.y"
    { ((*yyvalp).pair).i1 = GMTYPE_NODEITER_COMMON_NBRS;((*yyvalp).pair).p1 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ptr); ;}
    break;

  case 81:

/* Line 936 of glr.c  */
#line 236 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_bfs( (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.pair).p1,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.pair).p2,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.pair).p3,  (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.pair).p1,(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.pair).p2, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.pair).p2,   (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.ptr),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.pair).p1,   (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.pair).b1, false); 
                  GM_set_lineinfo(((*yyvalp).ptr),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yyloc).first_column);;}
    break;

  case 82:

/* Line 936 of glr.c  */
#line 240 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_bfs( (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.pair).p1,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.pair).p2,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.pair).p3,  (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.pair).p1,(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.pair).p2, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.pair).p2,   (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.ptr),(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.pair).p1,   (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.pair).b1, true); 
                  GM_set_lineinfo(((*yyvalp).ptr),(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yyloc).first_column);;}
    break;

  case 83:

/* Line 936 of glr.c  */
#line 243 "parse/gm_grammer.y"
    {((*yyvalp).pair).p1 = NULL; ((*yyvalp).pair).p2 = NULL;;}
    break;

  case 84:

/* Line 936 of glr.c  */
#line 244 "parse/gm_grammer.y"
    {((*yyvalp).pair).p1 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ptr);   ((*yyvalp).pair).p2 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ptr);  ;}
    break;

  case 85:

/* Line 936 of glr.c  */
#line 245 "parse/gm_grammer.y"
    {((*yyvalp).pair).p1 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ptr);   ((*yyvalp).pair).p2 = NULL;  ;}
    break;

  case 86:

/* Line 936 of glr.c  */
#line 247 "parse/gm_grammer.y"
    {((*yyvalp).pair).p1 = NULL; ((*yyvalp).pair).p2 = NULL;;}
    break;

  case 87:

/* Line 936 of glr.c  */
#line 248 "parse/gm_grammer.y"
    {((*yyvalp).pair).p1 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ptr);   ((*yyvalp).pair).p2 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ptr);  ;}
    break;

  case 88:

/* Line 936 of glr.c  */
#line 249 "parse/gm_grammer.y"
    {((*yyvalp).pair).p1 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ptr);   ((*yyvalp).pair).p2 = NULL;  ;}
    break;

  case 89:

/* Line 936 of glr.c  */
#line 251 "parse/gm_grammer.y"
    {
                           ((*yyvalp).pair).p1 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (10))].yystate.yysemantics.yysval.ptr); // it
                           ((*yyvalp).pair).p2 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (10))].yystate.yysemantics.yysval.ptr); // source
                           ((*yyvalp).pair).b1 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (10))].yystate.yysemantics.yysval.bval); // optional tp
                           ((*yyvalp).pair).p3 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((9) - (10))].yystate.yysemantics.yysval.ptr); // source
                       ;}
    break;

  case 90:

/* Line 936 of glr.c  */
#line 258 "parse/gm_grammer.y"
    {((*yyvalp).bval) = false;;}
    break;

  case 91:

/* Line 936 of glr.c  */
#line 259 "parse/gm_grammer.y"
    {((*yyvalp).bval) = true;;}
    break;

  case 92:

/* Line 936 of glr.c  */
#line 261 "parse/gm_grammer.y"
    {((*yyvalp).ival) = 0;;}
    break;

  case 93:

/* Line 936 of glr.c  */
#line 262 "parse/gm_grammer.y"
    {((*yyvalp).ival) = 0;;}
    break;

  case 94:

/* Line 936 of glr.c  */
#line 265 "parse/gm_grammer.y"
    {((*yyvalp).pair).p1 = NULL; ((*yyvalp).pair).p2 = NULL;;}
    break;

  case 95:

/* Line 936 of glr.c  */
#line 266 "parse/gm_grammer.y"
    {((*yyvalp).pair).p1 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr);   ((*yyvalp).pair).p2 = NULL;;}
    break;

  case 96:

/* Line 936 of glr.c  */
#line 267 "parse/gm_grammer.y"
    {((*yyvalp).pair).p1 = NULL; ((*yyvalp).pair).p2 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 97:

/* Line 936 of glr.c  */
#line 268 "parse/gm_grammer.y"
    {((*yyvalp).pair).p1 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ptr);   ((*yyvalp).pair).p2 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 98:

/* Line 936 of glr.c  */
#line 269 "parse/gm_grammer.y"
    {((*yyvalp).pair).p2 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ptr);   ((*yyvalp).pair).p1 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 99:

/* Line 936 of glr.c  */
#line 271 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 100:

/* Line 936 of glr.c  */
#line 273 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 101:

/* Line 936 of glr.c  */
#line 276 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) =  GM_vardecl_prim((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ptr)); ;}
    break;

  case 102:

/* Line 936 of glr.c  */
#line 277 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) =  GM_vardecl_and_assign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ptr),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.ptr),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.ptr));;}
    break;

  case 103:

/* Line 936 of glr.c  */
#line 279 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_finish_id_comma_list();;}
    break;

  case 104:

/* Line 936 of glr.c  */
#line 281 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_normal_assign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ptr)); GM_set_lineinfo(((*yyvalp).ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_column);}
    break;

  case 105:

/* Line 936 of glr.c  */
#line 282 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_reduce_assign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.ival)); GM_set_lineinfo(((*yyvalp).ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yyloc).first_column);;}
    break;

  case 106:

/* Line 936 of glr.c  */
#line 283 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_reduce_assign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ptr), GM_expr_ival(1, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_column), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ptr), GMREDUCE_PLUS); ;}
    break;

  case 107:

/* Line 936 of glr.c  */
#line 285 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_defer_assign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.ptr)); GM_set_lineinfo(((*yyvalp).ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yyloc).first_column);;}
    break;

  case 108:

/* Line 936 of glr.c  */
#line 287 "parse/gm_grammer.y"
    {
                                  ((*yyvalp).ptr) = GM_argminmax_assign((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.pair).p1, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.pair).p1, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.ival), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.pair).l_list, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.pair).e_list);
                                  GM_set_lineinfo(((*yyvalp).ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yyloc).first_column);
                              ;}
    break;

  case 109:

/* Line 936 of glr.c  */
#line 292 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = NULL; ;}
    break;

  case 110:

/* Line 936 of glr.c  */
#line 293 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ptr);   ;}
    break;

  case 111:

/* Line 936 of glr.c  */
#line 295 "parse/gm_grammer.y"
    {((*yyvalp).ival) = GMREDUCE_PLUS;;}
    break;

  case 112:

/* Line 936 of glr.c  */
#line 296 "parse/gm_grammer.y"
    {((*yyvalp).ival) = GMREDUCE_MULT;;}
    break;

  case 113:

/* Line 936 of glr.c  */
#line 297 "parse/gm_grammer.y"
    {((*yyvalp).ival) = GMREDUCE_MIN;;}
    break;

  case 114:

/* Line 936 of glr.c  */
#line 298 "parse/gm_grammer.y"
    {((*yyvalp).ival) = GMREDUCE_MAX;;}
    break;

  case 115:

/* Line 936 of glr.c  */
#line 299 "parse/gm_grammer.y"
    {((*yyvalp).ival) = GMREDUCE_AND;;}
    break;

  case 116:

/* Line 936 of glr.c  */
#line 300 "parse/gm_grammer.y"
    {((*yyvalp).ival) = GMREDUCE_OR;;}
    break;

  case 117:

/* Line 936 of glr.c  */
#line 302 "parse/gm_grammer.y"
    {((*yyvalp).ival) = GMREDUCE_MIN;;}
    break;

  case 118:

/* Line 936 of glr.c  */
#line 303 "parse/gm_grammer.y"
    {((*yyvalp).ival) = GMREDUCE_MAX;;}
    break;

  case 119:

/* Line 936 of glr.c  */
#line 305 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr); ;}
    break;

  case 120:

/* Line 936 of glr.c  */
#line 308 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_return ((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc).first_column) ;;}
    break;

  case 121:

/* Line 936 of glr.c  */
#line 309 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_return (NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc).first_column);;}
    break;

  case 122:

/* Line 936 of glr.c  */
#line 314 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_if((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.ptr), NULL);;}
    break;

  case 123:

/* Line 936 of glr.c  */
#line 315 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_if((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (7))].yystate.yysemantics.yysval.ptr));;}
    break;

  case 124:

/* Line 936 of glr.c  */
#line 318 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) =  GM_foreign_sent((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr));;}
    break;

  case 125:

/* Line 936 of glr.c  */
#line 319 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) =  GM_foreign_sent_mut((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.l_list));;}
    break;

  case 126:

/* Line 936 of glr.c  */
#line 322 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 127:

/* Line 936 of glr.c  */
#line 323 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_expr_uop((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ptr), GMOP_ABS, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc).first_column); ;}
    break;

  case 128:

/* Line 936 of glr.c  */
#line 325 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_expr_uop((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ptr), GMOP_NEG, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc).first_column); ;}
    break;

  case 129:

/* Line 936 of glr.c  */
#line 326 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_expr_luop((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ptr), GMOP_NOT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc).first_column); ;}
    break;

  case 130:

/* Line 936 of glr.c  */
#line 327 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_expr_conversion((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.ptr) , (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yyloc).first_column); ;}
    break;

  case 131:

/* Line 936 of glr.c  */
#line 328 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_expr_reduceop((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (14))].yystate.yysemantics.yysval.ival), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (14))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (14))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (14))].yystate.yysemantics.yysval.pair).i1, (((yyGLRStackItem const *)yyvsp)[YYFILL ((13) - (14))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((10) - (14))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (14))].yystate.yysemantics.yysval.pair).p1, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (14))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (14))].yystate.yyloc).first_column);;}
    break;

  case 132:

/* Line 936 of glr.c  */
#line 329 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_expr_reduceop((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (11))].yystate.yysemantics.yysval.ival), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (11))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (11))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (11))].yystate.yysemantics.yysval.pair).i1, (((yyGLRStackItem const *)yyvsp)[YYFILL ((10) - (11))].yystate.yysemantics.yysval.ptr), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (11))].yystate.yysemantics.yysval.pair).p1, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (11))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (11))].yystate.yyloc).first_column);;}
    break;

  case 133:

/* Line 936 of glr.c  */
#line 330 "parse/gm_grammer.y"
    {
                 ((*yyvalp).ptr) = GM_expr_reduceop((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (11))].yystate.yysemantics.yysval.ival), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (11))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (11))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (11))].yystate.yysemantics.yysval.pair).i1, 
                         GM_expr_ival(1, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (11))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (11))].yystate.yyloc).first_column),
                         (((yyGLRStackItem const *)yyvsp)[YYFILL ((10) - (11))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (11))].yystate.yysemantics.yysval.pair).p1, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (11))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (11))].yystate.yyloc).first_column);;}
    break;

  case 134:

/* Line 936 of glr.c  */
#line 334 "parse/gm_grammer.y"
    {
                 ((*yyvalp).ptr) = GM_expr_reduceop((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.ival), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (8))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (8))].yystate.yysemantics.yysval.pair).i1, 
                     GM_expr_ival(1, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yyloc).first_column),
                     NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (8))].yystate.yysemantics.yysval.pair).p1, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yyloc).first_column);;}
    break;

  case 135:

/* Line 936 of glr.c  */
#line 339 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_expr_biop((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ptr), GMOP_MOD, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_column);;}
    break;

  case 136:

/* Line 936 of glr.c  */
#line 340 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_expr_biop((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ptr), GMOP_MULT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_column);;}
    break;

  case 137:

/* Line 936 of glr.c  */
#line 341 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_expr_biop((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ptr), GMOP_DIV, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_column);;}
    break;

  case 138:

/* Line 936 of glr.c  */
#line 342 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_expr_biop((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ptr), GMOP_ADD, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_column);;}
    break;

  case 139:

/* Line 936 of glr.c  */
#line 343 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_expr_biop((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ptr), GMOP_SUB, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_column);;}
    break;

  case 140:

/* Line 936 of glr.c  */
#line 344 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_expr_comp((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ptr), GMOP_LE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_column);;}
    break;

  case 141:

/* Line 936 of glr.c  */
#line 345 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_expr_comp((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ptr), GMOP_GE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_column);;}
    break;

  case 142:

/* Line 936 of glr.c  */
#line 346 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_expr_comp((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ptr), GMOP_LT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_column);;}
    break;

  case 143:

/* Line 936 of glr.c  */
#line 347 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_expr_comp((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ptr), GMOP_GT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_column);;}
    break;

  case 144:

/* Line 936 of glr.c  */
#line 348 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_expr_comp((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ptr), GMOP_EQ, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_column);;}
    break;

  case 145:

/* Line 936 of glr.c  */
#line 349 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_expr_comp((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ptr), GMOP_NEQ, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_column);;}
    break;

  case 146:

/* Line 936 of glr.c  */
#line 350 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_expr_lbiop((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ptr), GMOP_AND, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_column);;}
    break;

  case 147:

/* Line 936 of glr.c  */
#line 351 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_expr_lbiop((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ptr), GMOP_OR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc).first_column);;}
    break;

  case 148:

/* Line 936 of glr.c  */
#line 353 "parse/gm_grammer.y"
    { ((*yyvalp).ptr)= GM_expr_ternary((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yyloc).first_column);;}
    break;

  case 149:

/* Line 936 of glr.c  */
#line 355 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_expr_bval((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.bval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc).first_column);;}
    break;

  case 150:

/* Line 936 of glr.c  */
#line 356 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_expr_ival((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ival), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc).first_column);;}
    break;

  case 151:

/* Line 936 of glr.c  */
#line 357 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_expr_fval((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.fval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc).first_column);;}
    break;

  case 152:

/* Line 936 of glr.c  */
#line 358 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_expr_inf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.bval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc).first_column);;}
    break;

  case 153:

/* Line 936 of glr.c  */
#line 359 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_expr_id_access((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr));;}
    break;

  case 154:

/* Line 936 of glr.c  */
#line 360 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_expr_field_access((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr));;}
    break;

  case 155:

/* Line 936 of glr.c  */
#line 361 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 156:

/* Line 936 of glr.c  */
#line 362 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr);;}
    break;

  case 157:

/* Line 936 of glr.c  */
#line 365 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr); ;}
    break;

  case 158:

/* Line 936 of glr.c  */
#line 368 "parse/gm_grammer.y"
    {((*yyvalp).ival) = GMREDUCE_PLUS; ;}
    break;

  case 159:

/* Line 936 of glr.c  */
#line 369 "parse/gm_grammer.y"
    {((*yyvalp).ival) = GMREDUCE_MULT; ;}
    break;

  case 160:

/* Line 936 of glr.c  */
#line 370 "parse/gm_grammer.y"
    {((*yyvalp).ival) = GMREDUCE_MIN;  ;}
    break;

  case 161:

/* Line 936 of glr.c  */
#line 371 "parse/gm_grammer.y"
    {((*yyvalp).ival) = GMREDUCE_MAX;  ;}
    break;

  case 162:

/* Line 936 of glr.c  */
#line 372 "parse/gm_grammer.y"
    {((*yyvalp).ival) = GMREDUCE_OR;  ;}
    break;

  case 163:

/* Line 936 of glr.c  */
#line 373 "parse/gm_grammer.y"
    {((*yyvalp).ival) = GMREDUCE_AND;  ;}
    break;

  case 164:

/* Line 936 of glr.c  */
#line 374 "parse/gm_grammer.y"
    {((*yyvalp).ival) = GMREDUCE_AVG;  /* syntactic sugar*/;}
    break;

  case 165:

/* Line 936 of glr.c  */
#line 376 "parse/gm_grammer.y"
    {((*yyvalp).ival) = GMREDUCE_PLUS; ;}
    break;

  case 166:

/* Line 936 of glr.c  */
#line 379 "parse/gm_grammer.y"
    {((*yyvalp).bval) = true;;}
    break;

  case 167:

/* Line 936 of glr.c  */
#line 380 "parse/gm_grammer.y"
    {((*yyvalp).bval) = false;;}
    break;

  case 168:

/* Line 936 of glr.c  */
#line 382 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr); ;}
    break;

  case 169:

/* Line 936 of glr.c  */
#line 383 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr); ;}
    break;

  case 170:

/* Line 936 of glr.c  */
#line 385 "parse/gm_grammer.y"
    { ((*yyvalp).l_list) = GM_single_lhs_list((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr));;}
    break;

  case 171:

/* Line 936 of glr.c  */
#line 386 "parse/gm_grammer.y"
    { ((*yyvalp).l_list) = GM_add_lhs_list_front((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.l_list));;}
    break;

  case 172:

/* Line 936 of glr.c  */
#line 388 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr); ;}
    break;

  case 173:

/* Line 936 of glr.c  */
#line 388 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_field((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ptr)); ;}
    break;

  case 174:

/* Line 936 of glr.c  */
#line 390 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_expr_builtin_expr((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.e_list));;}
    break;

  case 175:

/* Line 936 of glr.c  */
#line 391 "parse/gm_grammer.y"
    { ((*yyvalp).ptr) = GM_expr_builtin_expr(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.e_list));;}
    break;

  case 176:

/* Line 936 of glr.c  */
#line 393 "parse/gm_grammer.y"
    { ((*yyvalp).e_list) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.e_list);;}
    break;

  case 177:

/* Line 936 of glr.c  */
#line 394 "parse/gm_grammer.y"
    { ((*yyvalp).e_list) = GM_empty_expr_list();;}
    break;

  case 178:

/* Line 936 of glr.c  */
#line 396 "parse/gm_grammer.y"
    { ((*yyvalp).e_list) = GM_single_expr_list((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ptr));;}
    break;

  case 179:

/* Line 936 of glr.c  */
#line 397 "parse/gm_grammer.y"
    { ((*yyvalp).e_list) = GM_add_expr_front((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ptr), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.e_list));;}
    break;

  case 180:

/* Line 936 of glr.c  */
#line 399 "parse/gm_grammer.y"
    { ((*yyvalp).pair).p1 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.ptr); ((*yyvalp).pair).l_list = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.l_list);;}
    break;

  case 181:

/* Line 936 of glr.c  */
#line 400 "parse/gm_grammer.y"
    { ((*yyvalp).pair).p1 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.ptr); ((*yyvalp).pair).e_list = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.e_list);;}
    break;

  case 182:

/* Line 936 of glr.c  */
#line 403 "parse/gm_grammer.y"
    {GM_lex_begin_user_text();;}
    break;

  case 183:

/* Line 936 of glr.c  */
#line 404 "parse/gm_grammer.y"
    { 
                                            ((*yyvalp).ptr) = GM_expr_foreign((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.text), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yyloc).first_column);
                                          ;}
    break;

  case 184:

/* Line 936 of glr.c  */
#line 409 "parse/gm_grammer.y"
    {((*yyvalp).ptr) = GM_id((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.text), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc).first_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc).first_column); ;}
    break;



/* Line 936 of glr.c  */
#line 2667 "./parse/gm_grammer.tab.c"
      default: break;
    }

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


/*ARGSUSED*/ static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YYUSE (yy0);
  YYUSE (yy1);

  switch (yyn)
    {
      
      default: break;
    }
}

			      /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yystos[yys->yylrState],
		&yys->yysemantics.yysval, &yys->yyloc);
  else
    {
#if YYDEBUG
      if (yydebug)
	{
	  if (yys->yysemantics.yyfirstVal)
	    YYFPRINTF (stderr, "%s unresolved ", yymsg);
	  else
	    YYFPRINTF (stderr, "%s incomplete ", yymsg);
	  yy_symbol_print (stderr, yystos[yys->yylrState],
			   NULL, &yys->yyloc);
	  YYFPRINTF (stderr, "\n");
	}
#endif

      if (yys->yysemantics.yyfirstVal)
	{
	  yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
	  yyGLRState *yyrh;
	  int yyn;
	  for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
	       yyn > 0;
	       yyrh = yyrh->yypred, yyn -= 1)
	    yydestroyGLRState (yymsg, yyrh);
	}
    }
}

/** Left-hand-side symbol for rule #RULE.  */
static inline yySymbol
yylhsNonterm (yyRuleNum yyrule)
{
  return yyr1[yyrule];
}

#define yyis_pact_ninf(yystate) \
  ((yystate) == YYPACT_NINF)

/** True iff LR state STATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yyStateNum yystate)
{
  return yyis_pact_ninf (yypact[yystate]);
}

/** The default reduction for STATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yyStateNum yystate)
{
  return yydefact[yystate];
}

#define yyis_table_ninf(yytable_value) \
  YYID (0)

/** Set *YYACTION to the action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *CONFLICTS to a pointer into yyconfl to 0-terminated list of
 *  conflicting reductions.
 */
static inline void
yygetLRActions (yyStateNum yystate, int yytoken,
		int* yyaction, const short int** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyaction = -yydefact[yystate];
      *yyconflicts = yyconfl;
    }
  else if (! yyis_table_ninf (yytable[yyindex]))
    {
      *yyaction = yytable[yyindex];
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
  else
    {
      *yyaction = 0;
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
}

static inline yyStateNum
yyLRgotoState (yyStateNum yystate, yySymbol yylhs)
{
  int yyr;
  yyr = yypgoto[yylhs - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yylhs - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

				/* GLRStates */

/** Return a fresh GLRStackItem.  Callers should call
 * YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 * headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  RULENUM on the semantic values in RHS to the list of
 *  alternative actions for STATE.  Assumes that RHS comes from
 *  stack #K of *STACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, size_t yyk, yyGLRState* yystate,
		     yyGLRState* rhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  yynewOption->yystate = rhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
      yynewOption->yyloc = yylloc;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

				/* GLRStacks */

/** Initialize SET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates = (yyGLRState**) YYMALLOC (16 * sizeof yyset->yystates[0]);
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = NULL;
  yyset->yylookaheadNeeds =
    (yybool*) YYMALLOC (16 * sizeof yyset->yylookaheadNeeds[0]);
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize STACK to a single empty stack, with total maximum
 *  capacity for all stacks of SIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, size_t yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems =
    (yyGLRStackItem*) YYMALLOC (yysize * sizeof yystackp->yynextFree[0]);
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = NULL;
  yystackp->yylastDeleted = NULL;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS,YYTOITEMS,YYX,YYTYPE) \
  &((YYTOITEMS) - ((YYFROMITEMS) - (yyGLRStackItem*) (YYX)))->YYTYPE

/** If STACK is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  size_t yysize, yynewSize;
  size_t yyn;
  yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems = (yyGLRStackItem*) YYMALLOC (yynewSize * sizeof yynewItems[0]);
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*(yybool *) yyp0)
	{
	  yyGLRState* yys0 = &yyp0->yystate;
	  yyGLRState* yys1 = &yyp1->yystate;
	  if (yys0->yypred != NULL)
	    yys1->yypred =
	      YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
	  if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != NULL)
	    yys1->yysemantics.yyfirstVal =
	      YYRELOC(yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
	}
      else
	{
	  yySemanticOption* yyv0 = &yyp0->yyoption;
	  yySemanticOption* yyv1 = &yyp1->yyoption;
	  if (yyv0->yystate != NULL)
	    yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
	  if (yyv0->yynext != NULL)
	    yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
	}
    }
  if (yystackp->yysplitPoint != NULL)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
				 yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != NULL)
      yystackp->yytops.yystates[yyn] =
	YYRELOC (yystackp->yyitems, yynewItems,
		 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that S is a GLRState somewhere on STACK, update the
 *  splitpoint of STACK, if needed, so that it is at least as deep as
 *  S.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != NULL && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #K in STACK.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yytops.yystates[yyk] != NULL)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = NULL;
}

/** Undelete the last stack that was marked as deleted.  Can only be
    done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == NULL || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YYDPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = NULL;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  size_t yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == NULL)
	{
	  if (yyi == yyj)
	    {
	      YYDPRINTF ((stderr, "Removing dead stacks.\n"));
	    }
	  yystackp->yytops.yysize -= 1;
	}
      else
	{
	  yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
	  /* In the current implementation, it's unnecessary to copy
	     yystackp->yytops.yylookaheadNeeds[yyi] since, after
	     yyremoveDeletes returns, the parser immediately either enters
	     deterministic operation or shifts a token.  However, it doesn't
	     hurt, and the code might evolve to need it.  */
	  yystackp->yytops.yylookaheadNeeds[yyj] =
	    yystackp->yytops.yylookaheadNeeds[yyi];
	  if (yyj != yyi)
	    {
	      YYDPRINTF ((stderr, "Rename stack %lu -> %lu.\n",
			  (unsigned long int) yyi, (unsigned long int) yyj));
	    }
	  yyj += 1;
	}
      yyi += 1;
    }
}

/** Shift to a new state on stack #K of STACK, corresponding to LR state
 * LRSTATE, at input position POSN, with (resolved) semantic value SVAL.  */
static inline void
yyglrShift (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
	    size_t yyposn,
	    YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yysval = *yyvalp;
  yynewState->yyloc = *yylocp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #K of YYSTACK, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
		 size_t yyposn, yyGLRState* rhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = NULL;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, rhs, yyrule);
}

/** Pop the symbols consumed by reduction #RULE from the top of stack
 *  #K of STACK, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *VALP to the resulting value,
 *  and *LOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
	    YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == NULL)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* rhs = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
      YYASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      return yyuserAction (yyrule, yynrhs, rhs,
			   yyvalp, yylocp, yystackp);
    }
  else
    {
      /* At present, doAction is never called in nondeterministic
       * mode, so this branch is never taken.  It is here in
       * anticipation of a future feature that will allow immediate
       * evaluation of selected actions in nondeterministic mode.  */
      int yyi;
      yyGLRState* yys;
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
	= yystackp->yytops.yystates[yyk];
      if (yynrhs == 0)
	/* Set default location.  */
	yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yys->yyloc;
      for (yyi = 0; yyi < yynrhs; yyi += 1)
	{
	  yys = yys->yypred;
	  YYASSERT (yys);
	}
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
			   yyvalp, yylocp, yystackp);
    }
}

#if !YYDEBUG
# define YY_REDUCE_PRINT(Args)
#else
# define YY_REDUCE_PRINT(Args)		\
do {					\
  if (yydebug)				\
    yy_reduce_print Args;		\
} while (YYID (0))

/*----------------------------------------------------------.
| Report that the RULE is going to be reduced on stack #K.  |
`----------------------------------------------------------*/

/*ARGSUSED*/ static inline void
yy_reduce_print (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
		 YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  int yynrhs = yyrhsLength (yyrule);
  yybool yynormal __attribute__ ((__unused__)) =
    (yystackp->yysplitPoint == NULL);
  yyGLRStackItem* yyvsp = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
  int yylow = 1;
  int yyi;
  YYUSE (yyvalp);
  YYUSE (yylocp);
  YYFPRINTF (stderr, "Reducing stack %lu by rule %d (line %lu):\n",
	     (unsigned long int) yyk, yyrule - 1,
	     (unsigned long int) yyrline[yyrule]);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(((yyGLRStackItem const *)yyvsp)[YYFILL ((yyi + 1) - (yynrhs))].yystate.yysemantics.yysval)
		       , &(((yyGLRStackItem const *)yyvsp)[YYFILL ((yyi + 1) - (yynrhs))].yystate.yyloc)		       );
      YYFPRINTF (stderr, "\n");
    }
}
#endif

/** Pop items off stack #K of STACK according to grammar rule RULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with RULE and store its value with the
 *  newly pushed state, if FORCEEVAL or if STACK is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #K from
 *  the STACK.  In this case, the (necessarily deferred) semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
	     yybool yyforceEval)
{
  size_t yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == NULL)
    {
      YYSTYPE yysval;
      YYLTYPE yyloc;

      YY_REDUCE_PRINT ((yystackp, yyk, yyrule, &yysval, &yyloc));
      YYCHK (yydoAction (yystackp, yyk, yyrule, &yysval,
			 &yyloc));
      YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyrule], &yysval, &yyloc);
      yyglrShift (yystackp, yyk,
		  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
				 yylhsNonterm (yyrule)),
		  yyposn, &yysval, &yyloc);
    }
  else
    {
      size_t yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yyStateNum yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
	   0 < yyn; yyn -= 1)
	{
	  yys = yys->yypred;
	  YYASSERT (yys);
	}
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YYDPRINTF ((stderr,
		  "Reduced stack %lu by rule #%d; action deferred.  Now in state %d.\n",
		  (unsigned long int) yyk, yyrule - 1, yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
	if (yyi != yyk && yystackp->yytops.yystates[yyi] != NULL)
	  {
	    yyGLRState* yyp, *yysplit = yystackp->yysplitPoint;
	    yyp = yystackp->yytops.yystates[yyi];
	    while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
	      {
		if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
		  {
		    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
		    yymarkStackDeleted (yystackp, yyk);
		    YYDPRINTF ((stderr, "Merging stack %lu into stack %lu.\n",
				(unsigned long int) yyk,
				(unsigned long int) yyi));
		    return yyok;
		  }
		yyp = yyp->yypred;
	      }
	  }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static size_t
yysplitStack (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yysplitPoint == NULL)
    {
      YYASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yysize >= yystackp->yytops.yycapacity)
    {
      yyGLRState** yynewStates;
      yybool* yynewLookaheadNeeds;

      yynewStates = NULL;

      if (yystackp->yytops.yycapacity
	  > (YYSIZEMAX / (2 * sizeof yynewStates[0])))
	yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      yynewStates =
	(yyGLRState**) YYREALLOC (yystackp->yytops.yystates,
				  (yystackp->yytops.yycapacity
				   * sizeof yynewStates[0]));
      if (yynewStates == NULL)
	yyMemoryExhausted (yystackp);
      yystackp->yytops.yystates = yynewStates;

      yynewLookaheadNeeds =
	(yybool*) YYREALLOC (yystackp->yytops.yylookaheadNeeds,
			     (yystackp->yytops.yycapacity
			      * sizeof yynewLookaheadNeeds[0]));
      if (yynewLookaheadNeeds == NULL)
	yyMemoryExhausted (yystackp);
      yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize-1;
}

/** True iff Y0 and Y1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
	   yyn = yyrhsLength (yyy0->yyrule);
	   yyn > 0;
	   yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
	if (yys0->yyposn != yys1->yyposn)
	  return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (Y0,Y1), destructively merge the
 *  alternative semantic values for the RHS-symbols of Y1 and Y0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       yyn > 0;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
	break;
      else if (yys0->yyresolved)
	{
	  yys1->yyresolved = yytrue;
	  yys1->yysemantics.yysval = yys0->yysemantics.yysval;
	}
      else if (yys1->yyresolved)
	{
	  yys0->yyresolved = yytrue;
	  yys0->yysemantics.yysval = yys1->yysemantics.yysval;
	}
      else
	{
	  yySemanticOption** yyz0p;
	  yySemanticOption* yyz1;
	  yyz0p = &yys0->yysemantics.yyfirstVal;
	  yyz1 = yys1->yysemantics.yyfirstVal;
	  while (YYID (yytrue))
	    {
	      if (yyz1 == *yyz0p || yyz1 == NULL)
		break;
	      else if (*yyz0p == NULL)
		{
		  *yyz0p = yyz1;
		  break;
		}
	      else if (*yyz0p < yyz1)
		{
		  yySemanticOption* yyz = *yyz0p;
		  *yyz0p = yyz1;
		  yyz1 = yyz1->yynext;
		  (*yyz0p)->yynext = yyz;
		}
	      yyz0p = &(*yyz0p)->yynext;
	    }
	  yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
	}
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
	return 0;
      else
	return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG yyresolveValue (yyGLRState* yys,
				   yyGLRStack* yystackp);


/** Resolve the previous N states starting at and including state S.  If result
 *  != yyok, some states may have been left unresolved possibly with empty
 *  semantic option chains.  Regardless of whether result = yyok, each state
 *  has been left with consistent data so that yydestroyGLRState can be invoked
 *  if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
		 yyGLRStack* yystackp)
{
  if (0 < yyn)
    {
      YYASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp));
      if (! yys->yyresolved)
	YYCHK (yyresolveValue (yys, yystackp));
    }
  return yyok;
}

/** Resolve the states for the RHS of OPT, perform its user action, and return
 *  the semantic value and location.  Regardless of whether result = yyok, all
 *  RHS states have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
		 YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs;
  int yychar_current;
  YYSTYPE yylval_current;
  YYLTYPE yylloc_current;
  YYRESULTTAG yyflag;

  yynrhs = yyrhsLength (yyopt->yyrule);
  yyflag = yyresolveStates (yyopt->yystate, yynrhs, yystackp);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
	yydestroyGLRState ("Cleanup: popping", yys);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  if (yynrhs == 0)
    /* Set default location.  */
    yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yyopt->yystate->yyloc;
  yychar_current = yychar;
  yylval_current = yylval;
  yylloc_current = yylloc;
  yychar = yyopt->yyrawchar;
  yylval = yyopt->yyval;
  yylloc = yyopt->yyloc;
  yyflag = yyuserAction (yyopt->yyrule, yynrhs,
			   yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
			   yyvalp, yylocp, yystackp);
  yychar = yychar_current;
  yylval = yylval_current;
  yylloc = yylloc_current;
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == NULL)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, empty>\n",
	       yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
	       yyx->yyrule - 1);
  else
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, tokens %lu .. %lu>\n",
	       yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
	       yyx->yyrule - 1, (unsigned long int) (yys->yyposn + 1),
	       (unsigned long int) yyx->yystate->yyposn);
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
	{
	  if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
	    YYFPRINTF (stderr, "%*s%s <empty>\n", yyindent+2, "",
		       yytokenName (yyrhs[yyprhs[yyx->yyrule]+yyi-1]));
	  else
	    YYFPRINTF (stderr, "%*s%s <tokens %lu .. %lu>\n", yyindent+2, "",
		       yytokenName (yyrhs[yyprhs[yyx->yyrule]+yyi-1]),
		       (unsigned long int) (yystates[yyi - 1]->yyposn + 1),
		       (unsigned long int) yystates[yyi]->yyposn);
	}
      else
	yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

/*ARGSUSED*/ static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
		   yySemanticOption* yyx1)
{
  YYUSE (yyx0);
  YYUSE (yyx1);

#if YYDEBUG
  YYFPRINTF (stderr, "Ambiguity detected.\n");
  YYFPRINTF (stderr, "Option 1,\n");
  yyreportTree (yyx0, 2);
  YYFPRINTF (stderr, "\nOption 2,\n");
  yyreportTree (yyx1, 2);
  YYFPRINTF (stderr, "\n");
#endif

  yyerror (YY_("syntax is ambiguous"));
  return yyabort;
}

/** Starting at and including state S1, resolve the location for each of the
 *  previous N1 states that is unresolved.  The first semantic option of a state
 *  is always chosen.  */
static void
yyresolveLocations (yyGLRState* yys1, int yyn1,
		    yyGLRStack *yystackp)
{
  if (0 < yyn1)
    {
      yyresolveLocations (yys1->yypred, yyn1 - 1, yystackp);
      if (!yys1->yyresolved)
	{
	  yySemanticOption *yyoption;
	  yyGLRStackItem yyrhsloc[1 + YYMAXRHS];
	  int yynrhs;
	  int yychar_current;
	  YYSTYPE yylval_current;
	  YYLTYPE yylloc_current;
	  yyoption = yys1->yysemantics.yyfirstVal;
	  YYASSERT (yyoption != NULL);
	  yynrhs = yyrhsLength (yyoption->yyrule);
	  if (yynrhs > 0)
	    {
	      yyGLRState *yys;
	      int yyn;
	      yyresolveLocations (yyoption->yystate, yynrhs,
				  yystackp);
	      for (yys = yyoption->yystate, yyn = yynrhs;
		   yyn > 0;
		   yys = yys->yypred, yyn -= 1)
		yyrhsloc[yyn].yystate.yyloc = yys->yyloc;
	    }
	  else
	    {
	      /* Both yyresolveAction and yyresolveLocations traverse the GSS
		 in reverse rightmost order.  It is only necessary to invoke
		 yyresolveLocations on a subforest for which yyresolveAction
		 would have been invoked next had an ambiguity not been
		 detected.  Thus the location of the previous state (but not
		 necessarily the previous state itself) is guaranteed to be
		 resolved already.  */
	      yyGLRState *yyprevious = yyoption->yystate;
	      yyrhsloc[0].yystate.yyloc = yyprevious->yyloc;
	    }
	  yychar_current = yychar;
	  yylval_current = yylval;
	  yylloc_current = yylloc;
	  yychar = yyoption->yyrawchar;
	  yylval = yyoption->yyval;
	  yylloc = yyoption->yyloc;
	  YYLLOC_DEFAULT ((yys1->yyloc), yyrhsloc, yynrhs);
	  yychar = yychar_current;
	  yylval = yylval_current;
	  yylloc = yylloc_current;
	}
    }
}

/** Resolve the ambiguity represented in state S, perform the indicated
 *  actions, and set the semantic value of S.  If result != yyok, the chain of
 *  semantic options in S has been cleared instead or it has been left
 *  unmodified except that redundant options may have been removed.  Regardless
 *  of whether result = yyok, S has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest;
  yySemanticOption** yypp;
  yybool yymerge;
  YYSTYPE yysval;
  YYRESULTTAG yyflag;
  YYLTYPE *yylocp = &yys->yyloc;

  yybest = yyoptionList;
  yymerge = yyfalse;
  for (yypp = &yyoptionList->yynext; *yypp != NULL; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
	{
	  yymergeOptionSets (yybest, yyp);
	  *yypp = yyp->yynext;
	}
      else
	{
	  switch (yypreference (yybest, yyp))
	    {
	    case 0:
	      yyresolveLocations (yys, 1, yystackp);
	      return yyreportAmbiguity (yybest, yyp);
	      break;
	    case 1:
	      yymerge = yytrue;
	      break;
	    case 2:
	      break;
	    case 3:
	      yybest = yyp;
	      yymerge = yyfalse;
	      break;
	    default:
	      /* This cannot happen so it is not worth a YYASSERT (yyfalse),
		 but some compilers complain if the default case is
		 omitted.  */
	      break;
	    }
	  yypp = &yyp->yynext;
	}
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yysval,
				yylocp);
      if (yyflag == yyok)
	for (yyp = yybest->yynext; yyp != NULL; yyp = yyp->yynext)
	  {
	    if (yyprec == yydprec[yyp->yyrule])
	      {
		YYSTYPE yysval_other;
		YYLTYPE yydummy;
		yyflag = yyresolveAction (yyp, yystackp, &yysval_other,
					  &yydummy);
		if (yyflag != yyok)
		  {
		    yydestruct ("Cleanup: discarding incompletely merged value for",
				yystos[yys->yylrState],
				&yysval, yylocp);
		    break;
		  }
		yyuserMerge (yymerger[yyp->yyrule], &yysval, &yysval_other);
	      }
	  }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yysval, yylocp);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yysval = yysval;
    }
  else
    yys->yysemantics.yyfirstVal = NULL;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp)
{
  if (yystackp->yysplitPoint != NULL)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
	   yys != yystackp->yysplitPoint;
	   yys = yys->yypred, yyn += 1)
	continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
			     ));
    }
  return yyok;
}

static void
yycompressStack (yyGLRStack* yystackp)
{
  yyGLRState* yyp, *yyq, *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == NULL)
    return;

  for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = NULL;
       yyp != yystackp->yysplitPoint;
       yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = ((yyGLRStackItem*) yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = NULL;
  yystackp->yylastDeleted = NULL;

  while (yyr != NULL)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, size_t yyk,
		   size_t yyposn)
{
  int yyaction;
  const short int* yyconflicts;
  yyRuleNum yyrule;

  while (yystackp->yytops.yystates[yyk] != NULL)
    {
      yyStateNum yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YYDPRINTF ((stderr, "Stack %lu Entering state %d\n",
		  (unsigned long int) yyk, yystate));

      YYASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
	{
	  yyrule = yydefaultAction (yystate);
	  if (yyrule == 0)
	    {
	      YYDPRINTF ((stderr, "Stack %lu dies.\n",
			  (unsigned long int) yyk));
	      yymarkStackDeleted (yystackp, yyk);
	      return yyok;
	    }
	  YYCHK (yyglrReduce (yystackp, yyk, yyrule, yyfalse));
	}
      else
	{
	  yySymbol yytoken;
	  yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;
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

	  yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);

	  while (*yyconflicts != 0)
	    {
	      size_t yynewStack = yysplitStack (yystackp, yyk);
	      YYDPRINTF ((stderr, "Splitting off stack %lu from %lu.\n",
			  (unsigned long int) yynewStack,
			  (unsigned long int) yyk));
	      YYCHK (yyglrReduce (yystackp, yynewStack,
				  *yyconflicts, yyfalse));
	      YYCHK (yyprocessOneStack (yystackp, yynewStack,
					yyposn));
	      yyconflicts += 1;
	    }

	  if (yyisShiftAction (yyaction))
	    break;
	  else if (yyisErrorAction (yyaction))
	    {
	      YYDPRINTF ((stderr, "Stack %lu dies.\n",
			  (unsigned long int) yyk));
	      yymarkStackDeleted (yystackp, yyk);
	      break;
	    }
	  else
	    YYCHK (yyglrReduce (yystackp, yyk, -yyaction,
				yyfalse));
	}
    }
  return yyok;
}

/*ARGSUSED*/ static void
yyreportSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState == 0)
    {
#if YYERROR_VERBOSE
      int yyn;
      yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
      if (YYPACT_NINF < yyn && yyn <= YYLAST)
	{
	  yySymbol yytoken = YYTRANSLATE (yychar);
	  size_t yysize0 = yytnamerr (NULL, yytokenName (yytoken));
	  size_t yysize = yysize0;
	  size_t yysize1;
	  yybool yysize_overflow = yyfalse;
	  char* yymsg = NULL;
	  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;
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

	  yyarg[0] = yytokenName (yytoken);
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
		yyarg[yycount++] = yytokenName (yyx);
		yysize1 = yysize + yytnamerr (NULL, yytokenName (yyx));
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + strlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow)
	    yymsg = (char *) YYMALLOC (yysize);

	  if (yymsg)
	    {
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
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
	      yyerror (yymsg);
	      YYFREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      yyMemoryExhausted (yystackp);
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
      yynerrs += 1;
    }
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
/*ARGSUSED*/ static void
yyrecoverSyntaxError (yyGLRStack* yystackp)
{
  size_t yyk;
  int yyj;

  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (YYID (yytrue))
      {
	yySymbol yytoken;
	if (yychar == YYEOF)
	  yyFail (yystackp, NULL);
	if (yychar != YYEMPTY)
	  {
	    /* We throw away the lookahead, but the error range
	       of the shifted error token must take it into account.  */
	    yyGLRState *yys = yystackp->yytops.yystates[0];
	    yyGLRStackItem yyerror_range[3];
	    yyerror_range[1].yystate.yyloc = yys->yyloc;
	    yyerror_range[2].yystate.yyloc = yylloc;
	    YYLLOC_DEFAULT ((yys->yyloc), yyerror_range, 2);
	    yytoken = YYTRANSLATE (yychar);
	    yydestruct ("Error: discarding",
			yytoken, &yylval, &yylloc);
	  }
	YYDPRINTF ((stderr, "Reading a token: "));
	yychar = YYLEX;
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
	yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
	if (yyis_pact_ninf (yyj))
	  return;
	yyj += yytoken;
	if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
	  {
	    if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
	      return;
	  }
	else if (yytable[yyj] != 0 && ! yyis_table_ninf (yytable[yyj]))
	  return;
      }

  /* Reduce to one stack.  */
  for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
    if (yystackp->yytops.yystates[yyk] != NULL)
      break;
  if (yyk >= yystackp->yytops.yysize)
    yyFail (yystackp, NULL);
  for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
    yymarkStackDeleted (yystackp, yyk);
  yyremoveDeletes (yystackp);
  yycompressStack (yystackp);

  /* Now pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != NULL)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      yyj = yypact[yys->yylrState];
      if (! yyis_pact_ninf (yyj))
	{
	  yyj += YYTERROR;
	  if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYTERROR
	      && yyisShiftAction (yytable[yyj]))
	    {
	      /* Shift the error token having adjusted its location.  */
	      YYLTYPE yyerrloc;
	      yystackp->yyerror_range[2].yystate.yyloc = yylloc;
	      YYLLOC_DEFAULT (yyerrloc, (yystackp->yyerror_range), 2);
	      YY_SYMBOL_PRINT ("Shifting", yystos[yytable[yyj]],
			       &yylval, &yyerrloc);
	      yyglrShift (yystackp, 0, yytable[yyj],
			  yys->yyposn, &yylval, &yyerrloc);
	      yys = yystackp->yytops.yystates[0];
	      break;
	    }
	}
      yystackp->yyerror_range[1].yystate.yyloc = yys->yyloc;
      if (yys->yypred != NULL)
	yydestroyGLRState ("Error: popping", yys);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == NULL)
    yyFail (yystackp, NULL);
}

#define YYCHK1(YYE)							     \
  do {									     \
    switch (YYE) {							     \
    case yyok:								     \
      break;								     \
    case yyabort:							     \
      goto yyabortlab;							     \
    case yyaccept:							     \
      goto yyacceptlab;							     \
    case yyerr:								     \
      goto yyuser_error;						     \
    default:								     \
      goto yybuglab;							     \
    }									     \
  } while (YYID (0))


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  size_t yyposn;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;

#if YYLTYPE_IS_TRIVIAL
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif


  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval, &yylloc);
  yyposn = 0;

  while (YYID (yytrue))
    {
      /* For efficiency, we have two loops, the first of which is
	 specialized to deterministic operation (single stack, no
	 potential ambiguity).  */
      /* Standard mode */
      while (YYID (yytrue))
	{
	  yyRuleNum yyrule;
	  int yyaction;
	  const short int* yyconflicts;

	  yyStateNum yystate = yystack.yytops.yystates[0]->yylrState;
	  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
	  if (yystate == YYFINAL)
	    goto yyacceptlab;
	  if (yyisDefaultedState (yystate))
	    {
	      yyrule = yydefaultAction (yystate);
	      if (yyrule == 0)
		{
		  yystack.yyerror_range[1].yystate.yyloc = yylloc;
		  yyreportSyntaxError (&yystack);
		  goto yyuser_error;
		}
	      YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue));
	    }
	  else
	    {
	      yySymbol yytoken;
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

	      yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);
	      if (*yyconflicts != 0)
		break;
	      if (yyisShiftAction (yyaction))
		{
		  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
		  yychar = YYEMPTY;
		  yyposn += 1;
		  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval, &yylloc);
		  if (0 < yystack.yyerrState)
		    yystack.yyerrState -= 1;
		}
	      else if (yyisErrorAction (yyaction))
		{
		  yystack.yyerror_range[1].yystate.yyloc = yylloc;
		  yyreportSyntaxError (&yystack);
		  goto yyuser_error;
		}
	      else
		YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue));
	    }
	}

      while (YYID (yytrue))
	{
	  yySymbol yytoken_to_shift;
	  size_t yys;

	  for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
	    yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

	  /* yyprocessOneStack returns one of three things:

	      - An error flag.  If the caller is yyprocessOneStack, it
		immediately returns as well.  When the caller is finally
		yyparse, it jumps to an error label via YYCHK1.

	      - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
		(&yystack, yys), which sets the top state of yys to NULL.  Thus,
		yyparse's following invocation of yyremoveDeletes will remove
		the stack.

	      - yyok, when ready to shift a token.

	     Except in the first case, yyparse will invoke yyremoveDeletes and
	     then shift the next token onto all remaining stacks.  This
	     synchronization of the shift (that is, after all preceding
	     reductions on all stacks) helps prevent double destructor calls
	     on yylval in the event of memory exhaustion.  */

	  for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
	    YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn));
	  yyremoveDeletes (&yystack);
	  if (yystack.yytops.yysize == 0)
	    {
	      yyundeleteLastStack (&yystack);
	      if (yystack.yytops.yysize == 0)
		yyFail (&yystack, YY_("syntax error"));
	      YYCHK1 (yyresolveStack (&yystack));
	      YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
	      yystack.yyerror_range[1].yystate.yyloc = yylloc;
	      yyreportSyntaxError (&yystack);
	      goto yyuser_error;
	    }

	  /* If any yyglrShift call fails, it will fail after shifting.  Thus,
	     a copy of yylval will already be on stack 0 in the event of a
	     failure in the following loop.  Thus, yychar is set to YYEMPTY
	     before the loop to make sure the user destructor for yylval isn't
	     called twice.  */
	  yytoken_to_shift = YYTRANSLATE (yychar);
	  yychar = YYEMPTY;
	  yyposn += 1;
	  for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
	    {
	      int yyaction;
	      const short int* yyconflicts;
	      yyStateNum yystate = yystack.yytops.yystates[yys]->yylrState;
	      yygetLRActions (yystate, yytoken_to_shift, &yyaction,
			      &yyconflicts);
	      /* Note that yyconflicts were handled by yyprocessOneStack.  */
	      YYDPRINTF ((stderr, "On stack %lu, ", (unsigned long int) yys));
	      YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
	      yyglrShift (&yystack, yys, yyaction, yyposn,
			  &yylval, &yylloc);
	      YYDPRINTF ((stderr, "Stack %lu now in state #%d\n",
			  (unsigned long int) yys,
			  yystack.yytops.yystates[yys]->yylrState));
	    }

	  if (yystack.yytops.yysize == 1)
	    {
	      YYCHK1 (yyresolveStack (&yystack));
	      YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
	      yycompressStack (&yystack);
	      break;
	    }
	}
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturn;

 yybuglab:
  YYASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturn;

 yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;

 yyreturn:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
		YYTRANSLATE (yychar),
		&yylval, &yylloc);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
	{
	  size_t yysize = yystack.yytops.yysize;
	  size_t yyk;
	  for (yyk = 0; yyk < yysize; yyk += 1)
	    if (yystates[yyk])
	      {
		while (yystates[yyk])
		  {
		    yyGLRState *yys = yystates[yyk];
		    yystack.yyerror_range[1].yystate.yyloc = yys->yyloc;
		    if (yys->yypred != NULL)
		      yydestroyGLRState ("Cleanup: popping", yys);
		    yystates[yyk] = yys->yypred;
		    yystack.yynextFree -= 1;
		    yystack.yyspaceLeft += 1;
		  }
		break;
	      }
	}
      yyfreeGLRStack (&yystack);
    }

  /* Make sure YYID is used.  */
  return YYID (yyresult);
}

/* DEBUGGING ONLY */
#if YYDEBUG
static void yypstack (yyGLRStack* yystackp, size_t yyk)
  __attribute__ ((__unused__));
static void yypdumpstack (yyGLRStack* yystackp) __attribute__ ((__unused__));

static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YYFPRINTF (stderr, " -> ");
    }
  YYFPRINTF (stderr, "%d@%lu", yys->yylrState,
             (unsigned long int) yys->yyposn);
}

static void
yypstates (yyGLRState* yyst)
{
  if (yyst == NULL)
    YYFPRINTF (stderr, "<null>");
  else
    yy_yypstack (yyst);
  YYFPRINTF (stderr, "\n");
}

static void
yypstack (yyGLRStack* yystackp, size_t yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

#define YYINDEX(YYX)							     \
    ((YYX) == NULL ? -1 : (yyGLRStackItem*) (YYX) - yystackp->yyitems)


static void
yypdumpstack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yyp;
  size_t yyi;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YYFPRINTF (stderr, "%3lu. ",
                 (unsigned long int) (yyp - yystackp->yyitems));
      if (*(yybool *) yyp)
	{
	  YYFPRINTF (stderr, "Res: %d, LR State: %d, posn: %lu, pred: %ld",
		     yyp->yystate.yyresolved, yyp->yystate.yylrState,
		     (unsigned long int) yyp->yystate.yyposn,
		     (long int) YYINDEX (yyp->yystate.yypred));
	  if (! yyp->yystate.yyresolved)
	    YYFPRINTF (stderr, ", firstVal: %ld",
		       (long int) YYINDEX (yyp->yystate
                                             .yysemantics.yyfirstVal));
	}
      else
	{
	  YYFPRINTF (stderr, "Option. rule: %d, state: %ld, next: %ld",
		     yyp->yyoption.yyrule - 1,
		     (long int) YYINDEX (yyp->yyoption.yystate),
		     (long int) YYINDEX (yyp->yyoption.yynext));
	}
      YYFPRINTF (stderr, "\n");
    }
  YYFPRINTF (stderr, "Tops:");
  for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
    YYFPRINTF (stderr, "%lu: %ld; ", (unsigned long int) yyi,
	       (long int) YYINDEX (yystackp->yytops.yystates[yyi]));
  YYFPRINTF (stderr, "\n");
}
#endif



/* Line 2634 of glr.c  */
#line 411 "parse/gm_grammer.y"



