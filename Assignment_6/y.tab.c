/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ass6_13CS10055.y" /* yacc.c:339  */

#include <stdio.h>
#include <iostream>
extern int yylex();
#include "ass6_13CS10055_translator.h"
#include <string.h>
void yyerror(const char* s);

#line 75 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AUTO_KEYWORD = 258,
    RESTRICT_KEYWORD = 259,
    UNSIGNED_KEYWORD = 260,
    BREAK_KEYWORD = 261,
    EXTERN_KEYWORD = 262,
    RETURN_KEYWORD = 263,
    VOID_KEYWORD = 264,
    CASE_KEYWORD = 265,
    FLOAT_KEYWORD = 266,
    SHORT_KEYWORD = 267,
    VOLATILE_KEYWORD = 268,
    CHAR_KEYWORD = 269,
    FOR_KEYWORD = 270,
    SIGNED_KEYWORD = 271,
    WHILE_KEYWORD = 272,
    CONST_KEYWORD = 273,
    GOTO_KEYWORD = 274,
    SIZEOF_KEYWORD = 275,
    BOOL_KEYWORD = 276,
    CONTINUE_KEYWORD = 277,
    IF_KEYWORD = 278,
    STATIC_KEYWORD = 279,
    COMPLEX_KEYWORD = 280,
    DEFAULT_KEYWORD = 281,
    INLINE_KEYWORD = 282,
    STRUCT_KEYWORD = 283,
    IMAGINARY_KEYWORD = 284,
    DO_KEYWORD = 285,
    INT_KEYWORD = 286,
    SWITCH_KEYWORD = 287,
    DOUBLE_KEYWORD = 288,
    LONG_KEYWORD = 289,
    TYPEDEF_KEYWORD = 290,
    ELSE_KEYWORD = 291,
    REGISTER_KEYWORD = 292,
    UNION_KEYWORD = 293,
    IDENTIFIER = 294,
    INTEGER_CONSTANT = 295,
    FLOAT_CONSTANT = 296,
    CHAR_CONSTANT = 297,
    STRING_LITERAL = 298,
    VAL_AT = 299,
    PLUS_PLUS = 300,
    MINUS_MINUS = 301,
    LEFT_SHIFT = 302,
    RIGHT_SHIFT = 303,
    LESS_EQUAL = 304,
    GREATER_EQUAL = 305,
    EQUAL_EQUAL = 306,
    NOT_EQUAL = 307,
    LOGICAL_AND = 308,
    LOGICAL_OR = 309,
    ELLIPSES = 310,
    STAR_EQUAL = 311,
    BY_EQUAL = 312,
    PERCENT_EQUAL = 313,
    PLUS_EQUAL = 314,
    MINUS_EQUAL = 315,
    LEFT_SHIFT_EQUAL = 316,
    RIGHT_SHIFT_EQUAL = 317,
    AND_EQUAL = 318,
    BITWISENOT_EQUAL = 319,
    OR_EQUAL = 320,
    IF_CONFLICT = 321
  };
#endif
/* Tokens.  */
#define AUTO_KEYWORD 258
#define RESTRICT_KEYWORD 259
#define UNSIGNED_KEYWORD 260
#define BREAK_KEYWORD 261
#define EXTERN_KEYWORD 262
#define RETURN_KEYWORD 263
#define VOID_KEYWORD 264
#define CASE_KEYWORD 265
#define FLOAT_KEYWORD 266
#define SHORT_KEYWORD 267
#define VOLATILE_KEYWORD 268
#define CHAR_KEYWORD 269
#define FOR_KEYWORD 270
#define SIGNED_KEYWORD 271
#define WHILE_KEYWORD 272
#define CONST_KEYWORD 273
#define GOTO_KEYWORD 274
#define SIZEOF_KEYWORD 275
#define BOOL_KEYWORD 276
#define CONTINUE_KEYWORD 277
#define IF_KEYWORD 278
#define STATIC_KEYWORD 279
#define COMPLEX_KEYWORD 280
#define DEFAULT_KEYWORD 281
#define INLINE_KEYWORD 282
#define STRUCT_KEYWORD 283
#define IMAGINARY_KEYWORD 284
#define DO_KEYWORD 285
#define INT_KEYWORD 286
#define SWITCH_KEYWORD 287
#define DOUBLE_KEYWORD 288
#define LONG_KEYWORD 289
#define TYPEDEF_KEYWORD 290
#define ELSE_KEYWORD 291
#define REGISTER_KEYWORD 292
#define UNION_KEYWORD 293
#define IDENTIFIER 294
#define INTEGER_CONSTANT 295
#define FLOAT_CONSTANT 296
#define CHAR_CONSTANT 297
#define STRING_LITERAL 298
#define VAL_AT 299
#define PLUS_PLUS 300
#define MINUS_MINUS 301
#define LEFT_SHIFT 302
#define RIGHT_SHIFT 303
#define LESS_EQUAL 304
#define GREATER_EQUAL 305
#define EQUAL_EQUAL 306
#define NOT_EQUAL 307
#define LOGICAL_AND 308
#define LOGICAL_OR 309
#define ELLIPSES 310
#define STAR_EQUAL 311
#define BY_EQUAL 312
#define PERCENT_EQUAL 313
#define PLUS_EQUAL 314
#define MINUS_EQUAL 315
#define LEFT_SHIFT_EQUAL 316
#define RIGHT_SHIFT_EQUAL 317
#define AND_EQUAL 318
#define BITWISENOT_EQUAL 319
#define OR_EQUAL 320
#define IF_CONFLICT 321

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 12 "ass6_13CS10055.y" /* yacc.c:355  */

  int intval;
  float floatval;
  char charval;
  char *strval;
  struct idAttributes id_attr;
  struct expAttributes exp_attr;
  struct var_decl_attr_struct var_decl_attr;
  union initAttributes initializer_attr;
  opSpecifier u_op_attr;
  int instr;
  struct lNode *N_attr;
  struct pNode *param_attr;

#line 262 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 277 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  45
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1230

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  199
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  345

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    80,     2,     2,     2,    82,    75,     2,
      67,    68,    76,    77,    74,    78,    71,    81,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    88,    90,
      83,    89,    84,    87,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    69,     2,    70,    85,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    72,    86,    73,    79,     2,     2,     2,
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
      65,    66
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   141,   141,   153,   164,   175,   186,   194,   201,   205,
     247,   269,   301,   305,   309,   329,   349,   353,   360,   367,
     375,   388,   408,   428,   463,   467,   475,   479,   483,   487,
     494,   498,   505,   509,   585,   661,   740,   744,   820,   899,
     903,   915,   930,   934,   946,   958,   970,   985,   989,  1001,
    1016,  1020,  1035,  1039,  1054,  1058,  1073,  1077,  1087,  1091,
    1101,  1105,  1134,  1138,  1219,  1223,  1227,  1231,  1235,  1239,
    1243,  1247,  1251,  1255,  1259,  1266,  1270,  1277,  1284,  1288,
    1306,  1307,  1308,  1308,  1317,  1318,  1319,  1320,  1321,  1325,
    1330,  1337,  1363,  1399,  1400,  1401,  1402,  1403,  1407,  1414,
    1421,  1422,  1429,  1430,  1431,  1438,  1439,  1440,  1441,  1442,
    1446,  1450,  1454,  1458,  1465,  1469,  1473,  1480,  1487,  1495,
    1504,  1522,  1526,  1530,  1539,  1543,  1551,  1555,  1559,  1563,
    1567,  1571,  1578,  1582,  1594,  1598,  1602,  1607,  1614,  1618,
    1625,  1626,  1633,  1641,  1651,  1659,  1666,  1670,  1677,  1684,
    1688,  1692,  1699,  1703,  1707,  1714,  1721,  1725,  1732,  1736,
    1743,  1747,  1751,  1755,  1759,  1763,  1769,  1773,  1777,  1784,
    1788,  1795,  1799,  1807,  1808,  1815,  1819,  1826,  1834,  1850,
    1857,  1869,  1877,  1891,  1898,  1902,  1906,  1910,  1915,  1924,
    1925,  1930,  1931,  1935,  1939,  1946,  1950,  1956,  1962,  1970
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO_KEYWORD", "RESTRICT_KEYWORD",
  "UNSIGNED_KEYWORD", "BREAK_KEYWORD", "EXTERN_KEYWORD", "RETURN_KEYWORD",
  "VOID_KEYWORD", "CASE_KEYWORD", "FLOAT_KEYWORD", "SHORT_KEYWORD",
  "VOLATILE_KEYWORD", "CHAR_KEYWORD", "FOR_KEYWORD", "SIGNED_KEYWORD",
  "WHILE_KEYWORD", "CONST_KEYWORD", "GOTO_KEYWORD", "SIZEOF_KEYWORD",
  "BOOL_KEYWORD", "CONTINUE_KEYWORD", "IF_KEYWORD", "STATIC_KEYWORD",
  "COMPLEX_KEYWORD", "DEFAULT_KEYWORD", "INLINE_KEYWORD", "STRUCT_KEYWORD",
  "IMAGINARY_KEYWORD", "DO_KEYWORD", "INT_KEYWORD", "SWITCH_KEYWORD",
  "DOUBLE_KEYWORD", "LONG_KEYWORD", "TYPEDEF_KEYWORD", "ELSE_KEYWORD",
  "REGISTER_KEYWORD", "UNION_KEYWORD", "IDENTIFIER", "INTEGER_CONSTANT",
  "FLOAT_CONSTANT", "CHAR_CONSTANT", "STRING_LITERAL", "VAL_AT",
  "PLUS_PLUS", "MINUS_MINUS", "LEFT_SHIFT", "RIGHT_SHIFT", "LESS_EQUAL",
  "GREATER_EQUAL", "EQUAL_EQUAL", "NOT_EQUAL", "LOGICAL_AND", "LOGICAL_OR",
  "ELLIPSES", "STAR_EQUAL", "BY_EQUAL", "PERCENT_EQUAL", "PLUS_EQUAL",
  "MINUS_EQUAL", "LEFT_SHIFT_EQUAL", "RIGHT_SHIFT_EQUAL", "AND_EQUAL",
  "BITWISENOT_EQUAL", "OR_EQUAL", "IF_CONFLICT", "'('", "')'", "'['",
  "']'", "'.'", "'{'", "'}'", "','", "'&'", "'*'", "'+'", "'-'", "'~'",
  "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='",
  "';'", "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "$@1", "init_declarator_list",
  "init_declarator", "storage_class_specifier", "type_specifier",
  "specifier_qualifier_list", "type_qualifier", "function_specifier",
  "declarator", "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation", "designator_list", "designator", "statement",
  "labeled_statement", "compound_statement", "block_item_list",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list", "M",
  "N", "O", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,    40,    41,    91,
      93,    46,   123,   125,    44,    38,    42,    43,    45,   126,
      33,    47,    37,    60,    62,    94,   124,    63,    58,    61,
      59
};
# endif

#define YYPACT_NINF -258

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-258)))

#define YYTABLE_NINF -200

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1162,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,
    -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,
    -258,  -258,  -258,   112,  1162,  1162,  1162,  1162,  1127,  -258,
    -258,  -258,   -27,    32,  -258,   -48,  -258,   522,   -28,   -23,
    -258,  -258,  -258,  -258,  -258,  -258,  -258,   -65,  -258,  -258,
      32,   -27,  -258,   934,  -258,   112,   801,   -57,   837,   183,
     -28,  -258,  -258,  -258,  -258,   -62,  -258,  -258,  -258,  -258,
    -258,  1004,  1004,   636,   934,  -258,  -258,  -258,  -258,  -258,
    -258,  -258,   201,   177,  1046,  -258,     6,    53,   156,   -25,
     154,   -37,   -34,    -8,    33,   -41,  -258,  -258,  -258,   274,
    -258,  -258,  -258,  -258,  -258,   -27,    23,    36,  -258,    15,
     723,  -258,    50,    86,   680,   636,  -258,  -258,  -258,    43,
    1196,  -258,  1196,   109,  -258,   140,   120,  -258,  -258,   948,
    1046,   124,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,
    -258,  -258,  -258,  1046,  -258,  -258,  1046,  1046,  1046,  1046,
    1046,  1046,  1046,  1046,  1046,  1046,  1046,  1046,  1046,  1046,
    1046,  1046,  -258,  -258,    96,    99,    95,  1046,   130,  -258,
     169,   129,   143,   164,  -258,   197,   179,  -258,  -258,    75,
    -258,  -258,  -258,  -258,   192,  -258,  -258,  -258,  -258,  -258,
    -258,  -258,   875,  -258,   230,   204,   723,  -258,  -258,  1046,
    -258,   205,   224,   234,  -258,  1046,  -258,  -258,   990,  -258,
     874,  -258,  -258,    74,  -258,   116,  -258,  -258,  -258,  -258,
    -258,     6,     6,    53,    53,   156,   156,   156,   156,   -25,
     -25,   154,   -37,   -34,  1046,  1046,  -258,  -258,  -258,    79,
    -258,   222,   442,   245,   228,  -258,  1046,   556,   556,  1046,
     556,  -258,  -258,   362,  -258,  -258,  -258,  -258,   251,   252,
    -258,  -258,   253,  -258,   934,  -258,  1046,   284,  -258,  -258,
     934,    -9,  -258,  -258,  1046,  -258,    -8,    33,  1046,  -258,
     556,   703,  -258,  1046,  -258,   250,  -258,  -258,    76,  -258,
    -258,  -258,  -258,   142,   256,  -258,  -258,  -258,  -258,  -258,
     250,  -258,  1046,   703,   250,   259,   311,   556,  -258,   892,
    -258,   241,    87,  -258,   262,  -258,   264,  -258,  -258,  -258,
     556,  -258,  -258,   556,  1046,  1046,  -258,  1046,   556,  -258,
     250,  -258,   250,  -258,   296,   265,   266,  -258,   246,  -258,
     556,  -258,   556,  -258,  -258
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    96,   115,   106,    94,    98,   103,   100,   116,    99,
     105,   114,   107,    95,   108,   117,   109,   101,   104,   102,
      93,    97,   192,     0,    80,    82,    85,    87,     0,   189,
     191,   120,     0,   134,    78,     0,    89,    91,   119,     0,
      81,    84,    83,    86,    88,     1,   190,     0,   138,   136,
     135,     0,    79,     0,   195,     0,     0,     0,     0,     0,
     118,   121,   139,   137,    90,    91,     2,     3,     4,     5,
       6,     0,     0,     0,     0,    24,    25,    26,    27,    28,
      29,     8,    20,    30,     0,    32,    36,    39,    42,    47,
      50,    52,    54,    56,    58,    60,    62,   149,    92,     0,
     196,   193,   194,   146,   133,   145,     0,   140,   142,     0,
       0,   125,    25,     0,     0,     0,    21,    22,    75,     0,
     111,   148,   113,     0,   152,     0,     0,    14,    15,     0,
       0,     0,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    64,     0,    30,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   197,   197,     0,     0,     0,     0,     0,   197,
       0,     0,     0,     0,   197,     0,     2,   169,   175,     0,
     173,   174,   160,   161,   197,   171,   162,   163,   164,   165,
     144,   131,     0,   132,     0,     0,     0,   130,   123,     0,
     124,    25,     0,     0,     7,     0,   110,   112,     0,   150,
       0,    13,    10,     0,    18,     0,    12,    63,    33,    34,
      35,    37,    38,    40,    41,    45,    46,    43,    44,    48,
      49,    51,    53,    55,     0,     0,   197,   186,   187,     0,
      77,     0,     0,     0,     0,   185,     0,     0,     0,     0,
       0,   176,   170,     0,   141,   143,   147,   127,     0,     0,
     129,   122,     0,    76,     0,    31,     0,     0,   151,   153,
       0,     0,   156,    11,     0,     9,    57,    59,     0,   188,
       0,     0,   197,     0,   184,   198,   168,   197,     0,   166,
     172,   126,   128,     0,     0,   159,   154,   155,   157,    19,
     198,   167,     0,     0,   198,     0,     0,     0,    16,     0,
     158,     0,     0,   198,     0,   197,     0,   179,    17,   197,
       0,   197,   197,     0,     0,     0,   183,     0,     0,   198,
     198,    61,   198,   180,   177,     0,     0,   197,     0,   197,
       0,   181,     0,   178,   182
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -258,  -258,  -258,  -258,   -54,  -258,   -79,    81,    92,    38,
      91,   176,   178,   181,   103,   104,  -258,  -157,   -53,  -258,
     -51,    77,   -33,     7,  -258,  -258,   289,  -258,     1,    56,
       4,  -258,   -21,   305,    89,   -39,  -258,  -258,   153,  -258,
     233,   -52,    93,  -258,  -258,    84,  -195,  -258,   198,  -258,
     105,  -233,  -258,  -258,  -258,  -258,   328,  -258,  -258,  -155,
    -257,  -258
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    81,    82,   213,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,   118,   143,
     179,   241,    22,    55,    42,    35,    36,    24,    25,   121,
      26,    27,    65,    38,    39,    50,   106,   107,   108,   109,
     123,   124,   125,   270,   271,   272,   181,   182,   183,   184,
     185,   186,   187,   188,   189,    28,    29,    30,    56,   234,
     164,    57
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      97,    98,    37,    61,    54,   145,   113,    23,   235,   282,
     240,    47,    31,   163,   243,    99,    31,   116,   117,   248,
     114,    97,   119,   100,   153,   154,    51,    53,   305,   253,
     144,    40,    41,    43,    44,    23,     2,    48,   159,    58,
      32,    59,    52,   311,    32,     8,  -198,   314,   302,    33,
      11,   160,   286,   287,    62,   289,   321,   195,   155,   156,
     266,   202,   267,    48,   119,   105,   180,   218,   219,   220,
     313,   196,   334,   335,   120,   336,   214,   122,   161,   215,
     297,   278,   146,   193,   190,   301,   162,   147,   148,   194,
     217,   191,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,    33,   240,
     192,   204,   317,   144,    48,   239,   120,   205,    62,   122,
     197,   120,    49,   120,   122,   326,   122,   303,   329,   265,
     149,   150,   306,   333,    66,    67,    68,    69,    70,    63,
      71,    72,   273,   258,   307,   343,   259,   344,   274,   205,
     205,    31,   263,   205,   144,   320,   198,    97,   269,   211,
     323,   205,    73,   216,   325,   251,   327,   328,   331,   279,
      75,    76,    77,    78,    79,    80,   206,   208,   207,    32,
     144,   144,   340,   236,   342,   238,   275,     2,    33,   237,
     205,   225,   226,   227,   228,   285,     8,   242,   288,   105,
      62,    11,    34,   151,   152,   157,   158,   110,   244,   281,
     246,    97,   144,   209,   210,   308,   309,    97,   296,   245,
     180,   299,    66,    67,    68,    69,    70,   300,    71,    72,
     221,   222,   304,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   223,   224,   126,   127,   128,   229,   230,
      73,   312,   247,   111,   101,   102,    97,   269,    75,   112,
      77,    78,    79,    80,   249,   252,   142,   250,   129,   256,
     130,   144,   131,   330,   257,   260,   332,     1,     2,     3,
     165,     4,   166,     5,   167,     6,     7,     8,     9,   168,
      10,   169,    11,   170,   261,    12,   171,   172,    13,    14,
     173,    15,   262,    16,   174,    17,   175,    18,    19,    20,
     280,    21,   283,   176,    67,    68,    69,    70,   284,    71,
      72,   291,   292,   295,   205,   264,   310,   315,   316,   319,
     322,   324,   337,   338,   339,   231,   341,   276,   232,   277,
      64,    73,   233,   294,    60,   255,    99,   177,   203,    75,
      76,    77,    78,    79,    80,   298,    46,   293,   290,     0,
       0,     0,     0,     0,   178,     1,     2,     3,   165,     4,
     166,     5,   167,     6,     7,     8,     9,   168,    10,   169,
      11,   170,     0,    12,   171,   172,    13,    14,   173,    15,
       0,    16,   174,    17,   175,    18,    19,    20,     0,    21,
       0,   176,    67,    68,    69,    70,     0,    71,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,    99,     0,     0,    75,    76,    77,
      78,    79,    80,     0,     0,     1,     2,     3,     0,     4,
       0,     5,   178,     6,     7,     8,     9,     0,    10,     0,
      11,     0,     0,    12,     0,     0,    13,    14,     0,    15,
       0,    16,     0,    17,     0,    18,    19,    20,     0,    21,
       0,    66,    67,    68,    69,    70,     0,    71,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,     0,     0,     1,     2,     3,     0,     4,
       0,     5,   178,     6,     7,     8,     9,     0,    10,     0,
      11,     0,     0,    12,     0,     0,    13,    14,     0,    15,
       0,    16,     0,    17,     0,    18,    19,    20,     0,    21,
       0,     0,   165,     0,   166,     0,   167,     0,     0,     0,
       0,   168,     0,   169,     0,   170,     0,     0,   171,   172,
       0,     0,   173,     0,     0,     0,   174,     0,   175,     0,
       0,     0,     0,     0,  -199,   176,    67,    68,    69,    70,
       0,    71,    72,     0,     0,     0,     0,     0,     0,     0,
       0,    53,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,    99,     0,
       0,    75,    76,    77,    78,    79,    80,     0,     0,     0,
       2,     3,     0,     0,     0,     5,   178,     6,     7,     8,
       9,     0,    10,     0,    11,     0,     0,    12,     0,     0,
       0,    14,     0,     0,     0,    16,     0,    17,     0,    18,
      19,     0,     0,     0,     0,    66,    67,    68,    69,    70,
       0,    71,    72,     0,     2,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     0,     0,     0,     0,    11,     0,
       0,     0,     0,    73,   199,     0,     0,     0,     0,     0,
       0,    75,    76,    77,    78,    79,    80,     0,     0,    66,
      67,    68,    69,    70,     0,    71,    72,     2,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     0,     0,     0,
       0,    11,    66,    67,    68,    69,    70,    73,    71,    72,
     200,     0,     0,     0,     0,    75,   201,    77,    78,    79,
      80,     0,    66,    67,    68,    69,    70,     0,    71,    72,
      73,     0,     0,     0,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,     0,     0,     0,     0,     0,     0,
      73,     0,     0,   178,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,     1,     2,     3,     0,     4,     0,
       5,     0,     6,     7,     8,     9,     0,    10,     0,    11,
       0,     0,    12,     0,     0,    13,    14,     0,    15,     0,
      16,     0,    17,     0,    18,    19,    20,     0,    21,     0,
       1,     2,     3,     0,     4,     0,     5,     0,     6,     7,
       8,     9,     0,    10,     0,    11,     0,     0,    12,     0,
       0,    13,    14,     0,    15,     0,    16,     0,    17,     0,
      18,    19,    20,    99,    21,     0,   103,     0,     1,     2,
       3,     0,     4,     0,     5,     0,     6,     7,     8,     9,
       0,    10,     0,    11,     0,     0,    12,     0,     0,    13,
      14,     0,    15,     0,    16,   104,    17,     0,    18,    19,
      20,     0,    21,    66,    67,    68,    69,    70,     0,    71,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     254,    66,    67,    68,    69,    70,     0,    71,    72,     0,
       0,    73,     0,   266,     0,   267,    74,   268,     0,    75,
      76,    77,    78,    79,    80,     0,     0,     0,     0,    73,
       0,   266,     0,   267,    74,   318,     0,    75,    76,    77,
      78,    79,    80,    66,    67,    68,    69,    70,     0,    71,
      72,     0,     0,     0,     0,     0,     0,    66,    67,    68,
      69,    70,     0,    71,    72,     0,     0,     0,     0,     0,
       0,    73,     0,     0,     0,     0,    74,     0,     0,    75,
      76,    77,    78,    79,    80,    73,   212,     0,     0,     0,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    66,
      67,    68,    69,    70,     0,    71,    72,     0,     0,     0,
       0,     0,     0,    66,    67,    68,    69,    70,     0,    71,
      72,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,   264,     0,     0,    75,    76,    77,    78,    79,
      80,   115,     0,     0,     0,     0,     0,     0,     0,    75,
      76,    77,    78,    79,    80,    66,    67,    68,    69,    70,
       0,    71,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,     0,     0,
       0,    75,    76,    77,    78,    79,    80,    45,     0,     0,
       1,     2,     3,     0,     4,     0,     5,     0,     6,     7,
       8,     9,     0,    10,     0,    11,     0,     0,    12,     0,
       0,    13,    14,     0,    15,     0,    16,     0,    17,     0,
      18,    19,    20,     0,    21,     1,     2,     3,     0,     4,
       0,     5,     0,     6,     7,     8,     9,     0,    10,     0,
      11,     0,     0,    12,     0,     0,    13,    14,     0,    15,
       0,    16,     0,    17,     0,    18,    19,    20,     0,    21,
       2,     3,     0,     0,     0,     5,     0,     6,     7,     8,
       9,     0,    10,     0,    11,     0,     0,    12,     0,     0,
       0,    14,     0,     0,     0,    16,     0,    17,     0,    18,
      19
};

static const yytype_int16 yycheck[] =
{
      53,    53,    23,    68,    37,    84,    59,     0,   163,   242,
     167,    32,    39,    54,   169,    72,    39,    71,    72,   174,
      59,    74,    73,    56,    49,    50,    74,    89,   285,   184,
      84,    24,    25,    26,    27,    28,     4,    33,    75,    67,
      67,    69,    90,   300,    67,    13,    87,   304,   281,    76,
      18,    85,   247,   248,    50,   250,   313,   110,    83,    84,
      69,   114,    71,    59,   115,    58,    99,   146,   147,   148,
     303,   110,   329,   330,    73,   332,   129,    73,    86,   130,
      89,   236,    76,    68,   105,   280,    53,    81,    82,    74,
     143,    68,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,    76,   266,
      74,    68,   307,   167,   110,   166,   115,    74,   114,   115,
      70,   120,    33,   122,   120,   320,   122,   282,   323,   208,
      77,    78,   287,   328,    39,    40,    41,    42,    43,    50,
      45,    46,    68,   196,    68,   340,   199,   342,    74,    74,
      74,    39,   205,    74,   208,    68,    70,   210,   210,    39,
     315,    74,    67,    39,   319,    90,   321,   322,   325,    90,
      75,    76,    77,    78,    79,    80,   120,    68,   122,    67,
     234,   235,   337,    87,   339,    90,    70,     4,    76,    90,
      74,   153,   154,   155,   156,   246,    13,    67,   249,   192,
     196,    18,    90,    47,    48,    51,    52,    24,    39,   242,
      67,   264,   266,    73,    74,    73,    74,   270,   270,    90,
     253,   274,    39,    40,    41,    42,    43,   278,    45,    46,
     149,   150,   283,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,   151,   152,    44,    45,    46,   157,   158,
      67,   302,    88,    70,    56,    57,   309,   309,    75,    76,
      77,    78,    79,    80,    67,    73,    89,    88,    67,    39,
      69,   325,    71,   324,    70,    70,   327,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    70,    21,    22,    23,    24,    25,
      26,    27,    68,    29,    30,    31,    32,    33,    34,    35,
      88,    37,    67,    39,    40,    41,    42,    43,    90,    45,
      46,    70,    70,    39,    74,    72,    70,    68,    17,    88,
      68,    67,    36,    68,    68,   159,    90,   234,   160,   235,
      51,    67,   161,   266,    39,   192,    72,    73,   115,    75,
      76,    77,    78,    79,    80,   271,    28,   264,   253,    -1,
      -1,    -1,    -1,    -1,    90,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    21,    22,    23,    24,    25,    26,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      -1,    39,    40,    41,    42,    43,    -1,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    75,    76,    77,
      78,    79,    80,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,     9,    90,    11,    12,    13,    14,    -1,    16,    -1,
      18,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,    27,
      -1,    29,    -1,    31,    -1,    33,    34,    35,    -1,    37,
      -1,    39,    40,    41,    42,    43,    -1,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    79,    80,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,     9,    90,    11,    12,    13,    14,    -1,    16,    -1,
      18,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,    27,
      -1,    29,    -1,    31,    -1,    33,    34,    35,    -1,    37,
      -1,    -1,     6,    -1,     8,    -1,    10,    -1,    -1,    -1,
      -1,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    30,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    72,    39,    40,    41,    42,    43,
      -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
       4,     5,    -1,    -1,    -1,     9,    90,    11,    12,    13,
      14,    -1,    16,    -1,    18,    -1,    -1,    21,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,
      34,    -1,    -1,    -1,    -1,    39,    40,    41,    42,    43,
      -1,    45,    46,    -1,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    67,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    -1,    -1,    39,
      40,    41,    42,    43,    -1,    45,    46,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,
      -1,    18,    39,    40,    41,    42,    43,    67,    45,    46,
      70,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,
      80,    -1,    39,    40,    41,    42,    43,    -1,    45,    46,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    90,    -1,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    80,     3,     4,     5,    -1,     7,    -1,
       9,    -1,    11,    12,    13,    14,    -1,    16,    -1,    18,
      -1,    -1,    21,    -1,    -1,    24,    25,    -1,    27,    -1,
      29,    -1,    31,    -1,    33,    34,    35,    -1,    37,    -1,
       3,     4,     5,    -1,     7,    -1,     9,    -1,    11,    12,
      13,    14,    -1,    16,    -1,    18,    -1,    -1,    21,    -1,
      -1,    24,    25,    -1,    27,    -1,    29,    -1,    31,    -1,
      33,    34,    35,    72,    37,    -1,    39,    -1,     3,     4,
       5,    -1,     7,    -1,     9,    -1,    11,    12,    13,    14,
      -1,    16,    -1,    18,    -1,    -1,    21,    -1,    -1,    24,
      25,    -1,    27,    -1,    29,    68,    31,    -1,    33,    34,
      35,    -1,    37,    39,    40,    41,    42,    43,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    39,    40,    41,    42,    43,    -1,    45,    46,    -1,
      -1,    67,    -1,    69,    -1,    71,    72,    73,    -1,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    67,
      -1,    69,    -1,    71,    72,    73,    -1,    75,    76,    77,
      78,    79,    80,    39,    40,    41,    42,    43,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      42,    43,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,
      76,    77,    78,    79,    80,    67,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    78,    79,    80,    39,
      40,    41,    42,    43,    -1,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,    42,    43,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    75,    76,    77,    78,    79,
      80,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,    78,    79,    80,    39,    40,    41,    42,    43,
      -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,     0,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,     9,    -1,    11,    12,
      13,    14,    -1,    16,    -1,    18,    -1,    -1,    21,    -1,
      -1,    24,    25,    -1,    27,    -1,    29,    -1,    31,    -1,
      33,    34,    35,    -1,    37,     3,     4,     5,    -1,     7,
      -1,     9,    -1,    11,    12,    13,    14,    -1,    16,    -1,
      18,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,    27,
      -1,    29,    -1,    31,    -1,    33,    34,    35,    -1,    37,
       4,     5,    -1,    -1,    -1,     9,    -1,    11,    12,    13,
      14,    -1,    16,    -1,    18,    -1,    -1,    21,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,
      34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     7,     9,    11,    12,    13,    14,
      16,    18,    21,    24,    25,    27,    29,    31,    33,    34,
      35,    37,   113,   114,   118,   119,   121,   122,   146,   147,
     148,    39,    67,    76,    90,   116,   117,   123,   124,   125,
     114,   114,   115,   114,   114,     0,   147,   123,   121,   125,
     126,    74,    90,    89,   113,   114,   149,   152,    67,    69,
     124,    68,   121,   125,   117,   123,    39,    40,    41,    42,
      43,    45,    46,    67,    72,    75,    76,    77,    78,    79,
      80,    92,    93,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   132,    72,
     113,   139,   139,    39,    68,   114,   127,   128,   129,   130,
      24,    70,    76,   109,   126,    67,    95,    95,   109,   111,
     119,   120,   121,   131,   132,   133,    44,    45,    46,    67,
      69,    71,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    89,   110,    95,    97,    76,    81,    82,    77,
      78,    47,    48,    49,    50,    83,    84,    51,    52,    75,
      85,    86,    53,    54,   151,     6,     8,    10,    15,    17,
      19,    22,    23,    26,    30,    32,    39,    73,    90,   111,
     113,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     123,    68,    74,    68,    74,   109,   126,    70,    70,    24,
      70,    76,   109,   131,    68,    74,   120,   120,    68,    73,
      74,    39,    68,    94,   109,   111,    39,   109,    97,    97,
      97,    98,    98,    99,    99,   100,   100,   100,   100,   101,
     101,   102,   103,   104,   150,   150,    87,    90,    90,   111,
     108,   112,    67,   150,    39,    90,    67,    88,   150,    67,
      88,    90,    73,   150,    55,   129,    39,    70,   109,   109,
      70,    70,    68,   109,    72,    97,    69,    71,    73,   132,
     134,   135,   136,    68,    74,    70,   105,   106,   150,    90,
      88,   113,   142,    67,    90,   111,   137,   137,   111,   137,
     141,    70,    70,   133,   112,    39,   132,    89,   136,   109,
     111,   137,   142,   150,   111,   151,   150,    68,    73,    74,
      70,   151,   111,   142,   151,    68,    17,   137,    73,    88,
      68,   151,    68,   150,    67,   150,   137,   150,   150,   137,
     111,   108,   111,   137,   151,   151,   151,    36,    68,    68,
     150,    90,   150,   137,   137
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    92,    92,    92,    92,    92,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    94,    94,
      95,    95,    95,    95,    96,    96,    96,    96,    96,    96,
      97,    97,    98,    98,    98,    98,    99,    99,    99,   100,
     100,   100,   101,   101,   101,   101,   101,   102,   102,   102,
     103,   103,   104,   104,   105,   105,   106,   106,   107,   107,
     108,   108,   109,   109,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   111,   111,   112,   113,   113,
     114,   114,   115,   114,   114,   114,   114,   114,   114,   116,
     116,   117,   117,   118,   118,   118,   118,   118,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     120,   120,   120,   120,   121,   121,   121,   122,   123,   123,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   125,   125,   125,   125,   126,   126,
     127,   127,   128,   128,   129,   129,   130,   130,   131,   132,
     132,   132,   133,   133,   133,   134,   135,   135,   136,   136,
     137,   137,   137,   137,   137,   137,   138,   138,   138,   139,
     139,   140,   140,   141,   141,   142,   142,   143,   143,   143,
     144,   144,   144,   144,   145,   145,   145,   145,   145,   146,
     146,   147,   147,   148,   148,   149,   149,   150,   151,   152
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       3,     4,     3,     3,     2,     2,     6,     7,     1,     3,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     4,     1,     4,
       1,     9,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     3,
       1,     2,     0,     2,     2,     1,     2,     1,     2,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     1,     1,     1,     1,     1,     2,     1,
       1,     3,     5,     4,     4,     3,     6,     5,     6,     5,
       4,     4,     4,     3,     1,     2,     2,     3,     1,     2,
       1,     3,     1,     3,     2,     1,     1,     3,     1,     1,
       3,     4,     1,     3,     4,     2,     1,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     2,
       3,     1,     3,     1,     1,     1,     2,     8,    11,     5,
       8,    10,    12,     7,     3,     2,     2,     2,     3,     1,
       2,     1,     1,     4,     4,     1,     2,     0,     0,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 142 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyvsp[0].id_attr).loc = localST->lookup((yyvsp[0].id_attr).var);//Check in local symboltable
	  	if(!((yyvsp[0].id_attr).loc))//If not present in local symbol table check for global symbol table
	  	{
	  		(yyvsp[0].id_attr).loc = globalST->lookup((yyvsp[0].id_attr).var);
	  	}
	  	(yyval.exp_attr).loc = (yyvsp[0].id_attr).loc;
	  	(yyval.exp_attr).type = ((yyvsp[0].id_attr).loc)->Type;
	  	(yyval.exp_attr).array = (yyval.exp_attr).loc;
	  	(yyval.exp_attr).Eloc1 = 0;
	  }
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 154 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr).val.InitIntVal = (yyvsp[0].intval);//Assign the value
	  	(yyval.exp_attr).type = create_tNode(INT,-1);//Create a new node of int type
	  	(yyval.exp_attr).loc = localST->gentemp(INT);//Generate a temporary in the local symbol table
	  	char *Arg1 = new char[10];
	  	sprintf(Arg1,"%d",(yyvsp[0].intval));
	  	char *res = strdup(((yyval.exp_attr).loc)->srName);
	  	quadArrayRow tempQRow(Arg1,0,res,ASSIGN,0,0,(yyval.exp_attr).loc);//Generate a new temprary quadArrayRow
	  	globalQArray->emit(tempQRow);
	  }
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 165 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
		(yyval.exp_attr).val.InitDoubleVal = (yyvsp[0].floatval);//Assign the value
		(yyval.exp_attr).type = create_tNode(DOUBLE,-1);
		(yyval.exp_attr).loc = localST->gentemp(DOUBLE);
	  	char *Arg1 = new char[10];
	  	sprintf(Arg1,"%lf",(yyvsp[0].floatval));
	  	char *res = strdup(((yyval.exp_attr).loc)->srName);
	  	quadArrayRow tempQRow(Arg1,0,res,ASSIGN,0,0,(yyval.exp_attr).loc);//Generate a new temprary quadArrayRow
	  	globalQArray->emit(tempQRow);//Add the generated row to the global quad array
	  }
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 176 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr).val.InitCharVal = (yyvsp[0].charval);
	  	(yyval.exp_attr).type = create_tNode(CHAR,-1);
	  	(yyval.exp_attr).loc = localST->gentemp(CHAR);
	  	char *Arg1 = new char[10];
	  	sprintf(Arg1,"%d",(yyvsp[0].charval));
	  	char *res = strdup(((yyval.exp_attr).loc)->srName);
	  	quadArrayRow tempQRow(Arg1,0,res,ASSIGN,0,0,(yyval.exp_attr).loc);
	  	globalQArray->emit(tempQRow);
	  }
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 187 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	constsTable[count_toc] = strdup((yyvsp[0].strval));
	  	char *temp = new char[10];
	  	sprintf(temp,".LC%d",count_toc);
	  	count_toc++;
	  	(yyval.exp_attr).loc = new symbolTableRow(temp);
	  }
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 195 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  		(yyval.exp_attr) = (yyvsp[-1].exp_attr);//Assigns all the attributes of expression inside the braces to $$
	  }
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 202 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr) = (yyvsp[0].exp_attr);
	  }
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 206 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr).array = (yyvsp[-3].exp_attr).array;
	  	(yyval.exp_attr).type = ((yyvsp[-3].exp_attr).type)->right;
	  	if(!((yyvsp[-3].exp_attr).Eloc1)){
	  		(yyval.exp_attr).Eloc1 = localST->gentemp(INT);
	  		symbolTableRow *u = localST->gentemp(INT);
	  		int m = calculateWidth(((yyvsp[-3].exp_attr).type)->right);
	  		char *Arg1 = new char[10];
	  		sprintf(Arg1,"%d",m);
	  		char *res = strdup(u->srName);
	  		quadArrayRow x(Arg1,0,res,ASSIGN,0,0,u);
	  		globalQArray->emit(x);
	  		Arg1 = strdup(((yyvsp[-1].exp_attr).loc)->srName);
	  		char *Arg2 = strdup(u->srName);
	  		res = strdup(((yyval.exp_attr).Eloc1)->srName);
	  		quadArrayRow y(Arg1,Arg2,res,INTO,(yyvsp[-1].exp_attr).loc,u,(yyval.exp_attr).Eloc1);
	  		globalQArray->emit(y);
	  	}
	  	else{
	  		symbolTableRow *temp = localST->gentemp(INT);
		  	(yyval.exp_attr).Eloc1 = localST->gentemp(INT);
		  	symbolTableRow *u = localST->gentemp(INT);
		  	int n = calculateWidth((yyval.exp_attr).type);
		  	char *Arg1 = new char[10];
		  	sprintf(Arg1,"%d",n);
		  	char *res = strdup(u->srName);
		  	quadArrayRow a(Arg1,0,res,ASSIGN,0,0,u);
	  		globalQArray->emit(a);
		  	Arg1 = strdup(((yyvsp[-1].exp_attr).loc)->srName);
		  	char *Arg2 = strdup(u->srName);
		  	res = strdup(temp->srName);
		  	quadArrayRow x(Arg1,Arg2,res,INTO,(yyvsp[-1].exp_attr).loc,u,temp);
		  	globalQArray->emit(x);
		  	Arg1 = strdup(((yyvsp[-3].exp_attr).Eloc1)->srName);
		  	Arg2 = strdup(temp->srName);
		  	res = strdup(((yyval.exp_attr).Eloc1)->srName);
		  	quadArrayRow y(Arg1,Arg2,res,PLUS,(yyvsp[-3].exp_attr).Eloc1,temp,(yyval.exp_attr).Eloc1);
		  	globalQArray->emit(y);
	  	}
	  	flag_array = 1;
	  }
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 248 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	int count = 0;
	  	symbolTableRow *t = globalST->lookup(((yyvsp[-2].exp_attr).loc)->srName);
	  	(yyval.exp_attr).loc = localST->gentemp(((((t->srNestedTable)->table)[count]).Type)->tNodeType);
	  	char *res;
	  	opSpecifier q;
	  	if((((yyval.exp_attr).loc)->Type)->tNodeType == VOID){
	  		res = 0;
	  		q = call_void; 
	  	}
	  	else{
	  		res = strdup(((yyval.exp_attr).loc)->srName);
	  		q = call;
	  	} 
	  	char *Arg1 = strdup(((yyvsp[-2].exp_attr).loc)->srName);
	  	char *Arg2 = new char[10];
	  	sprintf(Arg2,"%d",count);
	  	quadArrayRow x(Arg1,Arg2,res,q,(yyvsp[-2].exp_attr).loc,0,(yyval.exp_attr).loc);
	  	globalQArray->emit(x);
	  	(yyval.exp_attr).type = ((yyval.exp_attr).loc)->Type;
	  }
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 270 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	pNode *temp = (yyvsp[-1].param_attr);
	  	int count = 0;
	  	//printf("Yo\n");
	  	while(temp){
	  		char *Arg1 = strdup((temp->parameter)->srName);
	  		quadArrayRow x(Arg1,0,0,PARAM,temp->parameter,0,0);
	  		globalQArray->emit(x);
	  		count++;
	  		temp = temp->next;
	  	}
	  	symbolTableRow *t = globalST->lookup(((yyvsp[-3].exp_attr).loc)->srName);
	  	(yyval.exp_attr).loc = localST->gentemp(((((t->srNestedTable)->table)[count]).Type)->tNodeType);
	  	char *res;
	  	opSpecifier q;
	  	if((((yyval.exp_attr).loc)->Type)->tNodeType == VOID){
	  		res = 0;
	  		q = call_void; 
	  	}
	  	else{
	  		res = strdup(((yyval.exp_attr).loc)->srName);
	  		q = call;
	  	} 
	  	char *Arg1 = strdup(((yyvsp[-3].exp_attr).loc)->srName);
	  	char *Arg2 = new char[10];
	  	sprintf(Arg2,"%d",count);
	  	quadArrayRow x(Arg1,Arg2,res,q,(yyvsp[-3].exp_attr).loc,0,(yyval.exp_attr).loc);
	  	globalQArray->emit(x);
	  	(yyval.exp_attr).type = ((yyval.exp_attr).loc)->Type;
	  	//printf("Yo\n");
	  }
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 302 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 306 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 310 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr).loc = localST->gentemp(((yyvsp[-1].exp_attr).type)->tNodeType);
	  	char *Arg1 = strdup(((yyvsp[-1].exp_attr).loc)->srName);
	  	char *res = strdup(((yyval.exp_attr).loc)->srName);
	  	quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[-1].exp_attr).loc,0,(yyval.exp_attr).loc);
	  	globalQArray->emit(x);
	  	symbolTableRow *u = localST->gentemp(INT);
	  	Arg1 = new char[10];
	  	sprintf(Arg1,"1");
	  	res = strdup(u->srName);
	  	quadArrayRow o(Arg1,0,res,ASSIGN,0,0,u);
	  	globalQArray->emit(o);
	  	Arg1 = strdup(((yyvsp[-1].exp_attr).loc)->srName);
	  	char *Arg2 = strdup(u->srName);
	  	res = strdup(((yyvsp[-1].exp_attr).loc)->srName);
	  	quadArrayRow y(Arg1,Arg2,res,PLUS,(yyvsp[-1].exp_attr).loc,u,(yyvsp[-1].exp_attr).loc);
	  	globalQArray->emit(y);
	  	(yyval.exp_attr).type = (yyvsp[-1].exp_attr).type;
	  }
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 330 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr).loc = localST->gentemp(((yyvsp[-1].exp_attr).type)->tNodeType);
	  	char *Arg1 = strdup(((yyvsp[-1].exp_attr).loc)->srName);
	  	char *res = strdup(((yyval.exp_attr).loc)->srName);
	  	quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[-1].exp_attr).loc,0,(yyval.exp_attr).loc);
	  	globalQArray->emit(x);
	  	symbolTableRow *u = localST->gentemp(INT);
	  	Arg1 = new char[10];
	  	sprintf(Arg1,"1");
	  	res = strdup(u->srName);
	  	quadArrayRow o(Arg1,0,res,ASSIGN,0,0,u);
	  	globalQArray->emit(o);
	  	Arg1 = strdup(((yyvsp[-1].exp_attr).loc)->srName);
	  	char *Arg2 = strdup(u->srName);
	  	res = strdup(((yyvsp[-1].exp_attr).loc)->srName);
	  	quadArrayRow y(Arg1,Arg2,res,MINUS,(yyvsp[-1].exp_attr).loc,u,(yyvsp[-1].exp_attr).loc);
	  	globalQArray->emit(y);
	  	(yyval.exp_attr).type = (yyvsp[-1].exp_attr).type;
	  }
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 350 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 354 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 361 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	//printf("I am in trouble\n");
	  	//printf("%s\n",($1.loc)->srName);
	  	(yyval.param_attr) = make_param_list((yyvsp[0].exp_attr).loc);
	  	//printf("Help me\n");
	  }
#line 2093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 368 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	//printf("Help me\n");
	  	(yyval.param_attr) = merge_param_list((yyvsp[-2].param_attr),make_param_list((yyvsp[0].exp_attr).loc));
	  }
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 376 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr) = (yyvsp[0].exp_attr);
	  	if((yyvsp[0].exp_attr).Eloc1){
	  		(yyval.exp_attr).loc = localST->gentemp(((yyvsp[0].exp_attr).type)->tNodeType);
	  		char *Arg1 = strdup(((yyvsp[0].exp_attr).array)->srName);
	  		char *Arg2 = strdup(((yyvsp[0].exp_attr).Eloc1)->srName);
	  		char *res = strdup(((yyval.exp_attr).loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,EQ_BRACKET,(yyvsp[0].exp_attr).loc,(yyvsp[0].exp_attr).Eloc1,(yyval.exp_attr).loc);
	  		globalQArray->emit(x);
	  		//$$.Eloc1 = 0;
	  	}
	  }
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 389 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr).loc = localST->gentemp(((yyvsp[0].exp_attr).type)->tNodeType);
	  	symbolTableRow *u = localST->gentemp(INT);
	  	char *Arg1 = new char[10];
	  	sprintf(Arg1,"1");
	  	char *res = strdup(u->srName);
	  	quadArrayRow o(Arg1,0,res,ASSIGN,0,0,u);
	  	globalQArray->emit(o);
	  	Arg1 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  	char *Arg2 = strdup(u->srName);
	  	res = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  	quadArrayRow y(Arg1,Arg2,res,PLUS,(yyvsp[0].exp_attr).loc,u,(yyvsp[0].exp_attr).loc);
	  	globalQArray->emit(y);
	  	Arg1 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  	res = strdup(((yyval.exp_attr).loc)->srName);
	  	quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[0].exp_attr).loc,0,(yyval.exp_attr).loc);
	  	globalQArray->emit(x);
	  	(yyval.exp_attr).type = (yyvsp[0].exp_attr).type;
	  }
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 409 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr).loc = localST->gentemp(((yyvsp[0].exp_attr).type)->tNodeType);
	  	symbolTableRow *u = localST->gentemp(INT);
	  	char *Arg1 = new char[10];
	  	sprintf(Arg1,"1");
	  	char *res = strdup(u->srName);
	  	quadArrayRow o(Arg1,0,res,ASSIGN,0,0,u);
	  	globalQArray->emit(o);
	  	Arg1 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  	char *Arg2 = strdup(u->srName);
	  	res = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  	quadArrayRow y(Arg1,Arg2,res,MINUS,(yyvsp[0].exp_attr).loc,u,(yyvsp[0].exp_attr).loc);
	  	globalQArray->emit(y);
	  	Arg1 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  	res = strdup(((yyval.exp_attr).loc)->srName);
	  	quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[0].exp_attr).loc,0,(yyval.exp_attr).loc);
	  	globalQArray->emit(x);
	  	(yyval.exp_attr).type = (yyvsp[0].exp_attr).type;
	  }
#line 2167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 429 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(((yyvsp[-1].u_op_attr) == U_STAR) && ((star_count > 1 && left_or_right == 1)||(left_or_right == 2))){
	  		(yyval.exp_attr).loc = localST->gentemp_cmplx(((yyvsp[0].exp_attr).type)->right);
	  		char *Arg1 = strdup(((yyvsp[0].exp_attr).loc)->srName);
		  	char *res = strdup(((yyval.exp_attr).loc)->srName);
		  	quadArrayRow x(Arg1,0,res,(yyvsp[-1].u_op_attr),(yyvsp[0].exp_attr).loc,0,(yyval.exp_attr).loc);
		  	globalQArray->emit(x);
		  	(yyval.exp_attr).type = ((yyval.exp_attr).loc)->Type;
	  		star_count--;
	  	}
	  	else if((yyvsp[-1].u_op_attr) == U_ADDR){
	  		tNode *tu = create_tNode(POINTER,-1);
	  		tu->right = (yyvsp[0].exp_attr).type;
	  		(yyval.exp_attr).loc = localST->gentemp_cmplx(tu);
	  		char *Arg1 = strdup(((yyvsp[0].exp_attr).loc)->srName);
		  	char *res = strdup(((yyval.exp_attr).loc)->srName);
		  	quadArrayRow x(Arg1,0,res,(yyvsp[-1].u_op_attr),(yyvsp[0].exp_attr).loc,0,(yyval.exp_attr).loc);
		  	globalQArray->emit(x);
		  	(yyval.exp_attr).type = ((yyval.exp_attr).loc)->Type;
	  	}
	  	else if(!(star_count == 1 && left_or_right == 1)){
	  		(yyval.exp_attr).loc = localST->gentemp(((yyvsp[0].exp_attr).type)->tNodeType);
	  		char *Arg1 = strdup(((yyvsp[0].exp_attr).loc)->srName);
		  	char *res = strdup(((yyval.exp_attr).loc)->srName);
		  	quadArrayRow x(Arg1,0,res,(yyvsp[-1].u_op_attr),(yyvsp[0].exp_attr).loc,0,(yyval.exp_attr).loc);
		  	globalQArray->emit(x);
		  	(yyval.exp_attr).type = ((yyval.exp_attr).loc)->Type;
	  	}
	  	else
	  		(yyval.exp_attr) = (yyvsp[0].exp_attr);	
	  }
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 464 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.u_op_attr) = U_ADDR;
	  }
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 468 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.u_op_attr) = U_STAR;
	  	if(left_or_right == 1){
	  		is_left = 1;
	  	}
	  	star_count++;
	  }
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 476 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.u_op_attr) = U_PLUS;
	  }
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 480 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.u_op_attr) = U_MINUS;
	  }
#line 2239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 484 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.u_op_attr) = BW_U_NOT;
	  }
#line 2247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 488 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.u_op_attr) = U_NEGATION;
	  }
#line 2255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 495 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr) = (yyvsp[0].exp_attr);
	  }
#line 2263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 499 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 506 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr) = (yyvsp[0].exp_attr);
	  }
#line 2279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 510 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(typecheck((yyvsp[-2].exp_attr).type, (yyvsp[0].exp_attr).type)){
	  		(yyval.exp_attr).loc = localST->gentemp(((yyvsp[-2].exp_attr).type)->tNodeType);
	  		char *Arg1 = strdup(((yyvsp[-2].exp_attr).loc)->srName);
	  		char *Arg2 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  		char *res = strdup(((yyval.exp_attr).loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,INTO,(yyvsp[-2].exp_attr).loc,(yyvsp[0].exp_attr).loc,(yyval.exp_attr).loc);
	  		globalQArray->emit(x);
	  		(yyval.exp_attr).type = (yyvsp[-2].exp_attr).type;
	  	}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		if(((yyvsp[-2].exp_attr).type)->tNodeType == INT && ((yyvsp[0].exp_attr).type)->tNodeType == DOUBLE){
	  			temp1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",((yyvsp[-2].exp_attr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[-2].exp_attr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(temp1->srName);
	  			char *Arg2 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,INTO,temp1,(yyvsp[0].exp_attr).loc,temp2);
	  			globalQArray->emit(y);
	  			(yyval.exp_attr).type = (yyvsp[0].exp_attr).type;
	  		}
	  		else if(((yyvsp[-2].exp_attr).type)->tNodeType == INT && ((yyvsp[0].exp_attr).type)->tNodeType == CHAR){
	  			temp1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",((yyvsp[0].exp_attr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[0].exp_attr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(INT);
	  			Arg1 = strdup(((yyvsp[-2].exp_attr).loc)->srName);
	  			char *Arg2 = strdup(temp1->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,INTO,(yyvsp[-2].exp_attr).loc,temp1,temp2);
	  			globalQArray->emit(y);
	  			(yyval.exp_attr).type = (yyvsp[-2].exp_attr).type;
	  		}
	  		else if(((yyvsp[-2].exp_attr).type)->tNodeType == DOUBLE && ((yyvsp[0].exp_attr).type)->tNodeType == INT){
	  			temp1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",((yyvsp[0].exp_attr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[0].exp_attr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(((yyvsp[-2].exp_attr).loc)->srName);
	  			char *Arg2 = strdup(temp1->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,INTO,(yyvsp[-2].exp_attr).loc,temp1,temp2);
	  			globalQArray->emit(y);
	  			(yyval.exp_attr).type = (yyvsp[-2].exp_attr).type;
	  		}
	  		else if(((yyvsp[-2].exp_attr).type)->tNodeType == CHAR && ((yyvsp[0].exp_attr).type)->tNodeType == INT){
	  			temp1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",((yyvsp[-2].exp_attr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[-2].exp_attr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(INT);
	  			Arg1 = strdup(temp1->srName);
	  			char *Arg2 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,INTO,temp1,(yyvsp[0].exp_attr).loc,temp2);
	  			globalQArray->emit(y);
	  			(yyval.exp_attr).type = (yyvsp[0].exp_attr).type;
	  		}
	  		(yyval.exp_attr).loc = temp2;
	  	}
	  }
#line 2359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 586 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(typecheck((yyvsp[-2].exp_attr).type, (yyvsp[0].exp_attr).type)){
	  		(yyval.exp_attr).loc = localST->gentemp(((yyvsp[-2].exp_attr).type)->tNodeType);
	  		char *Arg1 = strdup(((yyvsp[-2].exp_attr).loc)->srName);
	  		char *Arg2 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  		char *res = strdup(((yyval.exp_attr).loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,DIV,(yyvsp[-2].exp_attr).loc,(yyvsp[0].exp_attr).loc,(yyval.exp_attr).loc);
	  		globalQArray->emit(x);
	  		(yyval.exp_attr).type = (yyvsp[-2].exp_attr).type;
	  	}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		if(((yyvsp[-2].exp_attr).type)->tNodeType == INT && ((yyvsp[0].exp_attr).type)->tNodeType == DOUBLE){
	  			temp1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",((yyvsp[-2].exp_attr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[-2].exp_attr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(temp1->srName);
	  			char *Arg2 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,DIV,temp1,(yyvsp[0].exp_attr).loc,temp2);
	  			globalQArray->emit(y);
	  			(yyval.exp_attr).type = (yyvsp[0].exp_attr).type;
	  		}
	  		else if(((yyvsp[-2].exp_attr).type)->tNodeType == INT && ((yyvsp[0].exp_attr).type)->tNodeType == CHAR){
	  			temp1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",((yyvsp[0].exp_attr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[0].exp_attr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(INT);
	  			Arg1 = strdup(((yyvsp[-2].exp_attr).loc)->srName);
	  			char *Arg2 = strdup(temp1->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,DIV,(yyvsp[-2].exp_attr).loc,temp1,temp2);
	  			globalQArray->emit(y);
	  			(yyval.exp_attr).type = (yyvsp[-2].exp_attr).type;
	  		}
	  		else if(((yyvsp[-2].exp_attr).type)->tNodeType == DOUBLE && ((yyvsp[0].exp_attr).type)->tNodeType == INT){
	  			temp1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",((yyvsp[0].exp_attr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[0].exp_attr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(((yyvsp[-2].exp_attr).loc)->srName);
	  			char *Arg2 = strdup(temp1->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,DIV,(yyvsp[-2].exp_attr).loc,temp1,temp2);
	  			globalQArray->emit(y);
	  			(yyval.exp_attr).type = (yyvsp[-2].exp_attr).type;
	  		}
	  		else if(((yyvsp[-2].exp_attr).type)->tNodeType == CHAR && ((yyvsp[0].exp_attr).type)->tNodeType == INT){
	  			temp1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",((yyvsp[-2].exp_attr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[-2].exp_attr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(INT);
	  			Arg1 = strdup(temp1->srName);
	  			char *Arg2 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,DIV,temp1,(yyvsp[0].exp_attr).loc,temp2);
	  			globalQArray->emit(y);
	  			(yyval.exp_attr).type = (yyvsp[0].exp_attr).type;
	  		}
	  		(yyval.exp_attr).loc = temp2;
	  	}
	  }
#line 2439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 662 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(typecheck((yyvsp[-2].exp_attr).type, (yyvsp[0].exp_attr).type)){
	  		(yyval.exp_attr).loc = localST->gentemp(((yyvsp[-2].exp_attr).type)->tNodeType);
	  		char *Arg1 = strdup(((yyvsp[-2].exp_attr).loc)->srName);
	  		char *Arg2 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  		char *res = strdup(((yyval.exp_attr).loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,PERCENT,(yyvsp[-2].exp_attr).loc,(yyvsp[0].exp_attr).loc,(yyval.exp_attr).loc);
	  		globalQArray->emit(x);
	  		(yyval.exp_attr).type = (yyvsp[-2].exp_attr).type;
	  	}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		if(((yyvsp[-2].exp_attr).type)->tNodeType == INT && ((yyvsp[0].exp_attr).type)->tNodeType == DOUBLE){
	  			temp1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",((yyvsp[-2].exp_attr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[-2].exp_attr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(temp1->srName);
	  			char *Arg2 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,PERCENT,temp1,(yyvsp[0].exp_attr).loc,temp2);
	  			globalQArray->emit(y);
	  			(yyval.exp_attr).type = (yyvsp[0].exp_attr).type;
	  		}
	  		else if(((yyvsp[-2].exp_attr).type)->tNodeType == INT && ((yyvsp[0].exp_attr).type)->tNodeType == CHAR){
	  			temp1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",((yyvsp[0].exp_attr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[0].exp_attr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(INT);
	  			Arg1 = strdup(((yyvsp[-2].exp_attr).loc)->srName);
	  			char *Arg2 = strdup(temp1->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,PERCENT,(yyvsp[-2].exp_attr).loc,temp1,temp2);
	  			globalQArray->emit(y);
	  			(yyval.exp_attr).type = (yyvsp[-2].exp_attr).type;
	  		}
	  		else if(((yyvsp[-2].exp_attr).type)->tNodeType == DOUBLE && ((yyvsp[0].exp_attr).type)->tNodeType == INT){
	  			temp1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",((yyvsp[0].exp_attr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[0].exp_attr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(((yyvsp[-2].exp_attr).loc)->srName);
	  			char *Arg2 = strdup(temp1->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,PERCENT,(yyvsp[-2].exp_attr).loc,temp1,temp2);
	  			globalQArray->emit(y);
	  			(yyval.exp_attr).type = (yyvsp[-2].exp_attr).type;
	  		}
	  		else if(((yyvsp[-2].exp_attr).type)->tNodeType == CHAR && ((yyvsp[0].exp_attr).type)->tNodeType == INT){
	  			temp1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",((yyvsp[-2].exp_attr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[-2].exp_attr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(INT);
	  			Arg1 = strdup(temp1->srName);
	  			char *Arg2 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,PERCENT,temp1,(yyvsp[0].exp_attr).loc,temp2);
	  			globalQArray->emit(y);
	  			(yyval.exp_attr).type = (yyvsp[0].exp_attr).type;
	  		}
	  		(yyval.exp_attr).loc = temp2;
	  	}
	  }
#line 2519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 741 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr) = (yyvsp[0].exp_attr);
	  }
#line 2527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 745 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(typecheck((yyvsp[-2].exp_attr).type, (yyvsp[0].exp_attr).type)){
	  		(yyval.exp_attr).loc = localST->gentemp(((yyvsp[-2].exp_attr).type)->tNodeType);
	  		char *Arg1 = strdup(((yyvsp[-2].exp_attr).loc)->srName);
	  		char *Arg2 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  		char *res = strdup(((yyval.exp_attr).loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,PLUS,(yyvsp[-2].exp_attr).loc,(yyvsp[0].exp_attr).loc,(yyval.exp_attr).loc);
	  		globalQArray->emit(x);
	  		(yyval.exp_attr).type = (yyvsp[-2].exp_attr).type;
	  	}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		if(((yyvsp[-2].exp_attr).type)->tNodeType == INT && ((yyvsp[0].exp_attr).type)->tNodeType == DOUBLE){
	  			temp1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",((yyvsp[-2].exp_attr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[-2].exp_attr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(temp1->srName);
	  			char *Arg2 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,PLUS,temp1,(yyvsp[0].exp_attr).loc,temp2);
	  			globalQArray->emit(y);
	  			(yyval.exp_attr).type = (yyvsp[0].exp_attr).type;
	  		}
	  		else if(((yyvsp[-2].exp_attr).type)->tNodeType == INT && ((yyvsp[0].exp_attr).type)->tNodeType == CHAR){
	  			temp1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",((yyvsp[0].exp_attr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[0].exp_attr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(INT);
	  			Arg1 = strdup(((yyvsp[-2].exp_attr).loc)->srName);
	  			char *Arg2 = strdup(temp1->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,PLUS,(yyvsp[-2].exp_attr).loc,temp1,temp2);
	  			globalQArray->emit(y);
	  			(yyval.exp_attr).type = (yyvsp[-2].exp_attr).type;
	  		}
	  		else if(((yyvsp[-2].exp_attr).type)->tNodeType == DOUBLE && ((yyvsp[0].exp_attr).type)->tNodeType == INT){
	  			temp1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",((yyvsp[0].exp_attr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[0].exp_attr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(((yyvsp[-2].exp_attr).loc)->srName);
	  			char *Arg2 = strdup(temp1->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,PLUS,(yyvsp[-2].exp_attr).loc,temp1,temp2);
	  			globalQArray->emit(y);
	  			(yyval.exp_attr).type = (yyvsp[-2].exp_attr).type;
	  		}
	  		else if(((yyvsp[-2].exp_attr).type)->tNodeType == CHAR && ((yyvsp[0].exp_attr).type)->tNodeType == INT){
	  			temp1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",((yyvsp[-2].exp_attr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[-2].exp_attr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(INT);
	  			Arg1 = strdup(temp1->srName);
	  			char *Arg2 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,PLUS,temp1,(yyvsp[0].exp_attr).loc,temp2);
	  			globalQArray->emit(y);
	  			(yyval.exp_attr).type = (yyvsp[0].exp_attr).type;
	  		}
	  		(yyval.exp_attr).loc = temp2;
	  	}
	  }
#line 2607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 821 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(typecheck((yyvsp[-2].exp_attr).type, (yyvsp[0].exp_attr).type)){
	  		(yyval.exp_attr).loc = localST->gentemp(((yyvsp[-2].exp_attr).type)->tNodeType);
	  		char *Arg1 = strdup(((yyvsp[-2].exp_attr).loc)->srName);
	  		char *Arg2 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  		char *res = strdup(((yyval.exp_attr).loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,MINUS,(yyvsp[-2].exp_attr).loc,(yyvsp[0].exp_attr).loc,(yyval.exp_attr).loc);
	  		globalQArray->emit(x);
	  		(yyval.exp_attr).type = (yyvsp[-2].exp_attr).type;
	  	}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		if(((yyvsp[-2].exp_attr).type)->tNodeType == INT && ((yyvsp[0].exp_attr).type)->tNodeType == DOUBLE){
	  			temp1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",((yyvsp[-2].exp_attr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[-2].exp_attr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(temp1->srName);
	  			char *Arg2 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,MINUS,temp1,(yyvsp[0].exp_attr).loc,temp2);
	  			globalQArray->emit(y);
	  			(yyval.exp_attr).type = (yyvsp[0].exp_attr).type;
	  		}
	  		else if(((yyvsp[-2].exp_attr).type)->tNodeType == INT && ((yyvsp[0].exp_attr).type)->tNodeType == CHAR){
	  			temp1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",((yyvsp[0].exp_attr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[0].exp_attr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(INT);
	  			Arg1 = strdup(((yyvsp[-2].exp_attr).loc)->srName);
	  			char *Arg2 = strdup(temp1->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,MINUS,(yyvsp[-2].exp_attr).loc,temp1,temp2);
	  			globalQArray->emit(y);
	  			(yyval.exp_attr).type = (yyvsp[-2].exp_attr).type;
	  		}
	  		else if(((yyvsp[-2].exp_attr).type)->tNodeType == DOUBLE && ((yyvsp[0].exp_attr).type)->tNodeType == INT){
	  			temp1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",((yyvsp[0].exp_attr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[0].exp_attr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(((yyvsp[-2].exp_attr).loc)->srName);
	  			char *Arg2 = strdup(temp1->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,MINUS,(yyvsp[-2].exp_attr).loc,temp1,temp2);
	  			globalQArray->emit(y);
	  			(yyval.exp_attr).type = (yyvsp[-2].exp_attr).type;
	  		}
	  		else if(((yyvsp[-2].exp_attr).type)->tNodeType == CHAR && ((yyvsp[0].exp_attr).type)->tNodeType == INT){
	  			temp1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",((yyvsp[-2].exp_attr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[-2].exp_attr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(INT);
	  			Arg1 = strdup(temp1->srName);
	  			char *Arg2 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,MINUS,temp1,(yyvsp[0].exp_attr).loc,temp2);
	  			globalQArray->emit(y);
	  			(yyval.exp_attr).type = (yyvsp[0].exp_attr).type;
	  		}
	  		(yyval.exp_attr).loc = temp2;
	  	}
	  }
#line 2687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 900 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr) = (yyvsp[0].exp_attr);
	  }
#line 2695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 904 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(typecheck((yyvsp[-2].exp_attr).type, (yyvsp[0].exp_attr).type)){
	  		(yyval.exp_attr).loc = localST->gentemp(((yyvsp[-2].exp_attr).type)->tNodeType);
	  		char *Arg1 = strdup(((yyvsp[-2].exp_attr).loc)->srName);
	  		char *Arg2 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  		char *res = strdup(((yyval.exp_attr).loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,SHIFTLEFT,(yyvsp[-2].exp_attr).loc,(yyvsp[0].exp_attr).loc,(yyval.exp_attr).loc);
	  		globalQArray->emit(x);
	  		(yyval.exp_attr).type = (yyvsp[-2].exp_attr).type;
	  	}
	  }
#line 2711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 916 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(typecheck((yyvsp[-2].exp_attr).type, (yyvsp[0].exp_attr).type)){
	  		(yyval.exp_attr).loc = localST->gentemp(((yyvsp[-2].exp_attr).type)->tNodeType);
	  		char *Arg1 = strdup(((yyvsp[-2].exp_attr).loc)->srName);
	  		char *Arg2 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  		char *res = strdup(((yyval.exp_attr).loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,SHIFTRIGHT,(yyvsp[-2].exp_attr).loc,(yyvsp[0].exp_attr).loc,(yyval.exp_attr).loc);
	  		globalQArray->emit(x);
	  		(yyval.exp_attr).type = (yyvsp[-2].exp_attr).type;
	  	}
	  }
#line 2727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 931 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr) = (yyvsp[0].exp_attr);
	  }
#line 2735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 935 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr).TrueList = makelist(instCounter);
	  	char *Arg1 = strdup(((yyvsp[-2].exp_attr).loc)->srName);
	  	char *Arg2 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  	quadArrayRow x(Arg1,Arg2,0,goto_LESSTHAN,(yyvsp[-2].exp_attr).loc,(yyvsp[0].exp_attr).loc,0);
	  	globalQArray->emit(x);
	  	(yyval.exp_attr).FalseList = makelist(instCounter);
	  	quadArrayRow y(0,0,0,GOTO,0,0,0);
	  	globalQArray->emit(y);
	  	(yyval.exp_attr).type = create_tNode(BOOL,-1);	
	  }
#line 2751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 947 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr).TrueList = makelist(instCounter);
	  	char *Arg1 = strdup(((yyvsp[-2].exp_attr).loc)->srName);
	  	char *Arg2 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  	quadArrayRow x(Arg1,Arg2,0,goto_GREATERTHAN,(yyvsp[-2].exp_attr).loc,(yyvsp[0].exp_attr).loc,0);
	  	globalQArray->emit(x);
	  	(yyval.exp_attr).FalseList = makelist(instCounter);
	  	quadArrayRow y(0,0,0,GOTO,0,0,0);
	  	globalQArray->emit(y);
	  	(yyval.exp_attr).type = create_tNode(BOOL,-1);
	  }
#line 2767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 959 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr).TrueList = makelist(instCounter);
	  	char *Arg1 = strdup(((yyvsp[-2].exp_attr).loc)->srName);
	  	char *Arg2 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  	quadArrayRow x(Arg1,Arg2,0,goto_LESSTHANEQ,(yyvsp[-2].exp_attr).loc,(yyvsp[0].exp_attr).loc,0);
	  	globalQArray->emit(x);
	  	(yyval.exp_attr).FalseList = makelist(instCounter);
	  	quadArrayRow y(0,0,0,GOTO,0,0,0);
	  	globalQArray->emit(y);
	  	(yyval.exp_attr).type = create_tNode(BOOL,-1);
	  }
#line 2783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 971 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr).TrueList = makelist(instCounter);
	  	char *Arg1 = strdup(((yyvsp[-2].exp_attr).loc)->srName);
	  	char *Arg2 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  	quadArrayRow x(Arg1,Arg2,0,goto_GREATERTHANEQ,(yyvsp[-2].exp_attr).loc,(yyvsp[0].exp_attr).loc,0);
	  	globalQArray->emit(x);
	  	(yyval.exp_attr).FalseList = makelist(instCounter);
	  	quadArrayRow y(0,0,0,GOTO,0,0,0);
	  	globalQArray->emit(y);
	  	(yyval.exp_attr).type = create_tNode(BOOL,-1);
	  }
#line 2799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 986 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr) = (yyvsp[0].exp_attr);
	  }
#line 2807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 990 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr).TrueList = makelist(instCounter);
	  	char *Arg1 = strdup(((yyvsp[-2].exp_attr).loc)->srName);
	  	char *Arg2 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  	quadArrayRow x(Arg1,Arg2,0,goto_EQUALTO,(yyvsp[-2].exp_attr).loc,(yyvsp[0].exp_attr).loc,0);
	  	globalQArray->emit(x);
	  	(yyval.exp_attr).FalseList = makelist(instCounter);
	  	quadArrayRow y(0,0,0,GOTO,0,0,0);
	  	globalQArray->emit(y);
	  	(yyval.exp_attr).type = create_tNode(BOOL,-1);
	  }
#line 2823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 1002 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr).TrueList = makelist(instCounter);
	  	char *Arg1 = strdup(((yyvsp[-2].exp_attr).loc)->srName);
	  	char *Arg2 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  	quadArrayRow x(Arg1,Arg2,0,goto_NOTEQUALTO,(yyvsp[-2].exp_attr).loc,(yyvsp[0].exp_attr).loc,0);
	  	globalQArray->emit(x);
	  	(yyval.exp_attr).FalseList = makelist(instCounter);
	  	quadArrayRow y(0,0,0,GOTO,0,0,0);
	  	globalQArray->emit(y);
	  	(yyval.exp_attr).type = create_tNode(BOOL,-1);
	  }
#line 2839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 1017 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr) = (yyvsp[0].exp_attr);
	  }
#line 2847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 1021 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(typecheck((yyvsp[-2].exp_attr).type, (yyvsp[0].exp_attr).type)){
	  		(yyval.exp_attr).loc = localST->gentemp(((yyvsp[-2].exp_attr).type)->tNodeType);
	  		char *Arg1 = strdup(((yyvsp[-2].exp_attr).loc)->srName);
	  		char *Arg2 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  		char *res = strdup(((yyval.exp_attr).loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,BW_AND,(yyvsp[-2].exp_attr).loc,(yyvsp[0].exp_attr).loc,(yyval.exp_attr).loc);
	  		globalQArray->emit(x);
	  		(yyval.exp_attr).type = (yyvsp[-2].exp_attr).type;
	  	}
	  }
#line 2863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 1036 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr) = (yyvsp[0].exp_attr);
	  }
#line 2871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 1040 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(typecheck((yyvsp[-2].exp_attr).type, (yyvsp[0].exp_attr).type)){
	  		(yyval.exp_attr).loc = localST->gentemp(((yyvsp[-2].exp_attr).type)->tNodeType);
	  		char *Arg1 = strdup(((yyvsp[-2].exp_attr).loc)->srName);
	  		char *Arg2 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  		char *res = strdup(((yyval.exp_attr).loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,BW_XOR,(yyvsp[-2].exp_attr).loc,(yyvsp[0].exp_attr).loc,(yyval.exp_attr).loc);
	  		globalQArray->emit(x);
	  		(yyval.exp_attr).type = (yyvsp[-2].exp_attr).type;
	  	}
	  }
#line 2887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 1055 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr) = (yyvsp[0].exp_attr);
	  }
#line 2895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 1059 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(typecheck((yyvsp[-2].exp_attr).type, (yyvsp[0].exp_attr).type)){
	  		(yyval.exp_attr).loc = localST->gentemp(((yyvsp[-2].exp_attr).type)->tNodeType);
	  		char *Arg1 = strdup(((yyvsp[-2].exp_attr).loc)->srName);
	  		char *Arg2 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  		char *res = strdup(((yyval.exp_attr).loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,BW_INOR,(yyvsp[-2].exp_attr).loc,(yyvsp[0].exp_attr).loc,(yyval.exp_attr).loc);
	  		globalQArray->emit(x);
	  		(yyval.exp_attr).type = (yyvsp[-2].exp_attr).type;
	  	}
	  }
#line 2911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 1074 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr) = (yyvsp[0].exp_attr);
	  }
#line 2919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 1078 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	backpatch((yyvsp[-3].exp_attr).TrueList,(yyvsp[-1].instr));
	  	(yyval.exp_attr).FalseList = merge((yyvsp[-3].exp_attr).FalseList, (yyvsp[0].exp_attr).FalseList);
	  	(yyval.exp_attr).TrueList = (yyvsp[0].exp_attr).TrueList;
	  	(yyval.exp_attr).type = create_tNode(BOOL,-1);
	  }
#line 2930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 1088 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr) = (yyvsp[0].exp_attr);
	  }
#line 2938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 1092 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	backpatch((yyvsp[-3].exp_attr).FalseList,(yyvsp[-1].instr));
	  	(yyval.exp_attr).TrueList = merge((yyvsp[-3].exp_attr).TrueList,(yyvsp[0].exp_attr).TrueList);
	  	(yyval.exp_attr).FalseList = (yyvsp[0].exp_attr).FalseList;
	  	(yyval.exp_attr).type = create_tNode(BOOL,-1);
	  }
#line 2949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 1102 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr) = (yyvsp[0].exp_attr);
	  }
#line 2957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 1106 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr).loc = localST->gentemp(((yyvsp[-4].exp_attr).type)->tNodeType);
	  	(yyval.exp_attr).type = (yyvsp[-4].exp_attr).type;
	  	char *res = strdup(((yyval.exp_attr).loc)->srName);
	  	char *Arg1 = strdup(((yyvsp[0].exp_attr).loc)->srName);
	  	quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[0].exp_attr).loc,0,(yyval.exp_attr).loc);
	  	globalQArray->emit(x);
	  	lNode *l = makelist(instCounter);
	  	quadArrayRow y(0,0,0,GOTO,0,0,0);
	  	globalQArray->emit(y);
	  	backpatch((yyvsp[-3].N_attr),instCounter);
	  	res = strdup(((yyval.exp_attr).loc)->srName);
	  	Arg1 = strdup(((yyvsp[-4].exp_attr).loc)->srName);
	  	quadArrayRow z(Arg1,0,res,ASSIGN,(yyvsp[-4].exp_attr).loc,0,(yyval.exp_attr).loc);
	  	globalQArray->emit(z);
	  	l = merge(l,makelist(instCounter));
	  	quadArrayRow a(0,0,0,GOTO,0,0,0);
	  	globalQArray->emit(a);
	  	backpatch((yyvsp[-7].N_attr),instCounter);
	  	conv2Bool(&(yyvsp[-8].exp_attr));
	  	backpatch((yyvsp[-8].exp_attr).TrueList,(yyvsp[-5].instr));
	  	backpatch((yyvsp[-8].exp_attr).FalseList,(yyvsp[-1].instr));
	  	backpatch(l,instCounter);

	  }
#line 2987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 1135 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr) = (yyvsp[0].exp_attr);
	  }
#line 2995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 1139 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(is_left == 1){
	  		char *Arg1 = strdup(((yyvsp[0].exp_attr).loc)->srName);
		  	char *res = strdup(((yyvsp[-2].exp_attr).loc)->srName);
		  	quadArrayRow x(Arg1,0,res,LEFT_STAR,(yyvsp[0].exp_attr).loc,0,(yyvsp[-2].exp_attr).loc);
		  	globalQArray->emit(x);
	  	}
	  	else{
	  		if(typecheck((yyvsp[-2].exp_attr).type,(yyvsp[0].exp_attr).type)){
		  		if((yyvsp[-2].exp_attr).Eloc1){
			  		char *Arg1 = strdup(((yyvsp[-2].exp_attr).array)->srName);
			  		char *Arg2 = strdup(((yyvsp[-2].exp_attr).Eloc1)->srName);
			  		char *res = strdup(((yyvsp[0].exp_attr).loc)->srName);
			  		quadArrayRow x(Arg1,Arg2,res,BRACKET_EQ,(yyvsp[-2].exp_attr).array,(yyvsp[-2].exp_attr).Eloc1,(yyvsp[0].exp_attr).loc);
			  		globalQArray->emit(x);
		  		}
		  		else{
			  		char *Arg1 = strdup(((yyvsp[0].exp_attr).loc)->srName);
				  	char *res = strdup(((yyvsp[-2].exp_attr).loc)->srName);
				  	quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[0].exp_attr).loc,0,(yyvsp[-2].exp_attr).loc);
				  	globalQArray->emit(x);
		  		}
	  		}
		  	else{
		  		symbolTableRow *temp1, *temp2;
		  		if(((yyvsp[-2].exp_attr).type)->tNodeType == INT && ((yyvsp[0].exp_attr).type)->tNodeType == DOUBLE){
		  			temp1 = localST->gentemp(INT);
		  			char *Arg1 = new char[100];
		  			sprintf(Arg1,"dbl2int(%s)",((yyvsp[0].exp_attr).loc)->srName);
		  			char *res = strdup(temp1->srName);
		  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[0].exp_attr).loc,0,temp1);
		  			globalQArray->emit(x);
		  		}
		  		else if(((yyvsp[-2].exp_attr).type)->tNodeType == INT && ((yyvsp[0].exp_attr).type)->tNodeType == CHAR){
		  			temp1 = localST->gentemp(CHAR);
		  			char *Arg1 = new char[100];
		  			sprintf(Arg1,"int2char(%s)",((yyvsp[-2].exp_attr).loc)->srName);
		  			char *res = strdup(temp1->srName);
		  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[-2].exp_attr).loc,0,temp1);
		  			globalQArray->emit(x);
		  			
		  		}
		  		else if(((yyvsp[-2].exp_attr).type)->tNodeType == DOUBLE && ((yyvsp[0].exp_attr).type)->tNodeType == INT){
		  			temp1 = localST->gentemp(INT);
		  			char *Arg1 = new char[100];
		  			sprintf(Arg1,"dbl2int(%s)",((yyvsp[-2].exp_attr).loc)->srName);
		  			char *res = strdup(temp1->srName);
		  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[-2].exp_attr).loc,0,temp1);
		  			globalQArray->emit(x);
		  		}
		  		else if(((yyvsp[-2].exp_attr).type)->tNodeType == CHAR && ((yyvsp[0].exp_attr).type)->tNodeType == INT){
		  			temp1 = localST->gentemp(CHAR);
		  			char *Arg1 = new char[100];
		  			sprintf(Arg1,"int2char(%s)",((yyvsp[0].exp_attr).loc)->srName);
		  			char *res = strdup(temp1->srName);
		  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[0].exp_attr).loc,0,temp1);
		  			globalQArray->emit(x);
		  		}
		  		if((yyvsp[-2].exp_attr).Eloc1){
			  		char *Arg1 = strdup(((yyvsp[-2].exp_attr).array)->srName);
			  		char *Arg2 = strdup(((yyvsp[-2].exp_attr).Eloc1)->srName);
			  		char *res = strdup((temp1)->srName);
			  		quadArrayRow x(Arg1,Arg2,res,BRACKET_EQ,(yyvsp[-2].exp_attr).array,(yyvsp[-2].exp_attr).Eloc1,(yyvsp[0].exp_attr).loc);
			  		globalQArray->emit(x);
		  		}
		  		else{
			  		char *Arg1 = strdup((temp1)->srName);
				  	char *res = strdup(((yyvsp[-2].exp_attr).loc)->srName);
				  	quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[0].exp_attr).loc,0,(yyvsp[-2].exp_attr).loc);
				  	globalQArray->emit(x);
		  		}
		  	}
	  	}
	  	left_or_right = 1;
	  	is_left = 0;
	  	star_count = 0;
	  }
#line 3077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 1220 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	 	left_or_right = 2;
	 }
#line 3085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 1224 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	 	// no action
	 }
#line 3093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 1228 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	 	// no action
	 }
#line 3101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 1232 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
         	// no action
         }
#line 3109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 1236 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
         	// no action
         }
#line 3117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 1240 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
         	// no action
         }
#line 3125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 1244 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
         	// no action
         }
#line 3133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1248 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
         	// no action
         }
#line 3141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1252 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
         	// no action
         }
#line 3149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1256 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
         	// no action
         }
#line 3157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1260 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
         	// no action
         }
#line 3165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1267 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr) = (yyvsp[0].exp_attr);
	  }
#line 3173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 1271 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// not to be used as comma is not to be used as an operator
	  }
#line 3181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1278 "ass6_13CS10055.y" /* yacc.c:1646  */
    {

	  }
#line 3189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1285 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1289 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(flag1 == 1 && flag2 == 0){
	  		tNode *temp = create_tNode(((yyvsp[-2].var_decl_attr).type)->tNodeType,-1);
	  		char *temp1 = strdup("retVal");
	  		symbolTableRow x(temp1,temp,0,(yyvsp[-2].var_decl_attr).width,-1,0);
	  		temp_use->insert(x);
	  		temp = create_tNode(FUNCTION,-1);
	  		symbolTableRow y((yyvsp[-1].var_decl_attr).var,temp,0,0,-1,temp_use);
	  		globalST->insert(y);
	  	}
	  	flag1 = 0;
	  	flag2 = 0;
	  	c = 0;
	  }
#line 3216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1306 "ass6_13CS10055.y" /* yacc.c:1646  */
    {/* To be skipped*/}
#line 3222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1307 "ass6_13CS10055.y" /* yacc.c:1646  */
    {/* To be skipped*/}
#line 3228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1308 "ass6_13CS10055.y" /* yacc.c:1646  */
    {/* To be skipped*/}
#line 3234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1309 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(flag1 == 0 || flag2 == 0){
	  		(yyval.var_decl_attr).type = (yyvsp[-1].var_decl_attr).type;
	  		(yyval.var_decl_attr).width = (yyvsp[-1].var_decl_attr).width;
	  		t = (yyval.var_decl_attr).type;
	  		w = (yyval.var_decl_attr).width;
	  	}
	  }
#line 3247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1317 "ass6_13CS10055.y" /* yacc.c:1646  */
    {/* To be skipped*/}
#line 3253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1318 "ass6_13CS10055.y" /* yacc.c:1646  */
    {/* To be skipped*/}
#line 3259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1319 "ass6_13CS10055.y" /* yacc.c:1646  */
    {/* To be skipped*/}
#line 3265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1320 "ass6_13CS10055.y" /* yacc.c:1646  */
    {/* To be skipped*/}
#line 3271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1321 "ass6_13CS10055.y" /* yacc.c:1646  */
    {/* To be skipped*/}
#line 3277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1326 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(flag1 == 1 && flag2 == 0)
	  		(yyval.var_decl_attr).var = (yyvsp[0].var_decl_attr).var;
	  }
#line 3286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1331 "ass6_13CS10055.y" /* yacc.c:1646  */
    {

	  }
#line 3294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1338 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(flag1 == 0){
	  		tNode *temp = create_tNode(t->tNodeType,-1);
	  		temp = merge_node((yyvsp[0].var_decl_attr).type,temp);
	  		int temp_size;
	  		if(temp->tNodeType == POINTER)
	  			temp_size = SIZE_OF_PTR;
	  		else{
		  		switch(t->tNodeType){
		  			case INT : temp_size = SIZE_OF_INT;
		  					   break;
		  			case DOUBLE : temp_size = SIZE_OF_DOUBLE;
		  						  break;
		  			case CHAR   : temp_size = SIZE_OF_CHAR;
		  						  break; 	
	  			}
	  		}
	  		temp_size = temp_size * (yyvsp[0].var_decl_attr).width;
	  		symbolTableRow x((yyvsp[0].var_decl_attr).var,temp,0,temp_size,-1,0);
	  		localST->insert(x);
	  	}
	  	else if(flag1 == 1 && flag2 == 0){
	  		(yyval.var_decl_attr).var = (yyvsp[0].var_decl_attr).var;
	  	}
	  }
#line 3324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1364 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(flag1 == 0){
	  		tNode *temp = create_tNode(t->tNodeType,-1);
	  		temp = merge_node((yyvsp[-2].var_decl_attr).type,temp);
	  		void *value;
	  		int *v1;
	  		double *v2;
	  		char *v3;
	  		int temp_size;
	  		switch(t->tNodeType){
	  			case INT : v1 = (int *)malloc(sizeof(int));
	  					   (*v1) = (yyvsp[0].initializer_attr).InitIntVal; 	
	  					   value = (void *)v1;
	  					   temp_size = SIZE_OF_INT;
	  					   break;
	  			case DOUBLE : v2 = (double *)malloc(sizeof(double));
		  					   (*v2) = (yyvsp[0].initializer_attr).InitDoubleVal;
		  					   value = (void *)v2;
		  					   temp_size = SIZE_OF_DOUBLE;
		  					   break;
	  			case CHAR   :v3 = (char *)malloc(sizeof(char));
	  					   (*v3) = (yyvsp[0].initializer_attr).InitCharVal; 	
	  					   value = (void *)v3;
	  					   temp_size = SIZE_OF_CHAR;
	  					   break;
	  			default     : value = 0; 	
	  		}
	  		temp_size = temp_size * (yyvsp[-2].var_decl_attr).width;
	  		symbolTableRow x((yyvsp[-2].var_decl_attr).var,temp,value,temp_size,-1,0);
	  		localST->insert(x);
	  	}
	  }
#line 3361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1399 "ass6_13CS10055.y" /* yacc.c:1646  */
    {/* To be skipped*/}
#line 3367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1400 "ass6_13CS10055.y" /* yacc.c:1646  */
    {/* To be skipped*/}
#line 3373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1401 "ass6_13CS10055.y" /* yacc.c:1646  */
    {/* To be skipped*/}
#line 3379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1402 "ass6_13CS10055.y" /* yacc.c:1646  */
    {/* To be skipped*/}
#line 3385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1403 "ass6_13CS10055.y" /* yacc.c:1646  */
    {/* To be skipped*/}
#line 3391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1408 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(flag2 == 0 || flag1 == 0){
	  		(yyval.var_decl_attr).type = create_tNode(VOID,-1);
	  		(yyval.var_decl_attr).width = 0;
	  	}
	  }
#line 3402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1415 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(flag2 == 0 || flag1 == 0){
	  		(yyval.var_decl_attr).type = create_tNode(CHAR,-1);
	  		(yyval.var_decl_attr).width = SIZE_OF_CHAR;
	  	}
	  }
#line 3413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1421 "ass6_13CS10055.y" /* yacc.c:1646  */
    {/* To be skipped*/}
#line 3419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1423 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(flag2 == 0 || flag1 == 0){
	  		(yyval.var_decl_attr).type = create_tNode(INT,-1);
	  		(yyval.var_decl_attr).width = SIZE_OF_INT;
	  	}
	  }
#line 3430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1429 "ass6_13CS10055.y" /* yacc.c:1646  */
    {/* To be skipped*/}
#line 3436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1430 "ass6_13CS10055.y" /* yacc.c:1646  */
    {/* To be skipped*/}
#line 3442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1432 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(flag2 == 0 || flag1 == 0){
	  		(yyval.var_decl_attr).type = create_tNode(DOUBLE,-1);
	  		(yyval.var_decl_attr).width = SIZE_OF_DOUBLE;
	  	}
	  }
#line 3453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1438 "ass6_13CS10055.y" /* yacc.c:1646  */
    {/* To be skipped*/}
#line 3459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1439 "ass6_13CS10055.y" /* yacc.c:1646  */
    {/* To be skipped*/}
#line 3465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1440 "ass6_13CS10055.y" /* yacc.c:1646  */
    {/* To be skipped*/}
#line 3471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1441 "ass6_13CS10055.y" /* yacc.c:1646  */
    {/* To be skipped*/}
#line 3477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1442 "ass6_13CS10055.y" /* yacc.c:1646  */
    {/* To be skipped*/}
#line 3483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1447 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1451 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1455 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1459 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1466 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1470 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1474 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1481 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1488 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(flag1 == 0 || flag2 == 0){
	  		(yyval.var_decl_attr).type = merge_node((yyvsp[0].var_decl_attr).type,(yyvsp[-1].var_decl_attr).type);
	  		(yyval.var_decl_attr).width = (yyvsp[0].var_decl_attr).width;
	  		(yyval.var_decl_attr).var = (yyvsp[0].var_decl_attr).var;
	  	}
	  }
#line 3559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1496 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  		(yyval.var_decl_attr).type = (yyvsp[0].var_decl_attr).type;
	  		(yyval.var_decl_attr).var = (yyvsp[0].var_decl_attr).var;
	  		(yyval.var_decl_attr).width = (yyvsp[0].var_decl_attr).width;
	  }
#line 3569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1505 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(flag1 == 0 || flag2 == 0){
	  		(yyval.var_decl_attr).var = (yyvsp[0].id_attr).var;
		  	(yyval.var_decl_attr).type = 0;
		  	(yyval.var_decl_attr).width = 1;
		  	if(c == 0){
		  		symbolTableRow *t = localST->lookup((yyvsp[0].id_attr).var);
			  	if(t){
			  		flag2 = 1;
			  		temp_use = (t->srNestedTable);	// Set flag to handle multiple declaration
			  	}							
			  	else                                            
			  		flag2 = 0; 
			  	c++;	
		  	}
	  	}										
	  }
#line 3591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1523 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1527 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1531 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(flag1 == 0 || flag2 == 0){
	  		tNode *temp = create_tNode(ARRAY,(yyvsp[-1].exp_attr).val.InitIntVal);
	  		(yyval.var_decl_attr).type = merge_node((yyvsp[-3].var_decl_attr).type,temp);
	  		(yyval.var_decl_attr).width = (yyvsp[-3].var_decl_attr).width * (yyvsp[-1].exp_attr).val.InitIntVal;
	  		(yyval.var_decl_attr).var = (yyvsp[-3].var_decl_attr).var;
	  	}
	  }
#line 3620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1540 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1544 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(flag1 == 0 || flag2 == 0){
	  		(yyval.var_decl_attr).var = (yyvsp[-2].var_decl_attr).var;
		  	(yyval.var_decl_attr).type = (yyvsp[-2].var_decl_attr).type;
		  	(yyval.var_decl_attr).width = (yyvsp[-2].var_decl_attr).width;
	  	}
	  }
#line 3640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1552 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1556 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1560 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1564 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1568 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1572 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	flag1 = 1;										// Flag1 is set for variable declaration
	  	(yyval.var_decl_attr).var = (yyvsp[-3].var_decl_attr).var;
	  	(yyval.var_decl_attr).type = 0;
	  	(yyval.var_decl_attr).width = 1;
	  }
#line 3691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1579 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1583 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	flag1 = 1;
	  	if(flag2 == 0)
	  		temp_use = createSymbolTable();
	  	(yyval.var_decl_attr).var = (yyvsp[-2].var_decl_attr).var;
	  	(yyval.var_decl_attr).type = 0;
	  	(yyval.var_decl_attr).width = 1;
	  }
#line 3712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1595 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.var_decl_attr).type = create_tNode(POINTER,-1);
	  }
#line 3720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1599 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1603 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	tNode *temp = create_tNode(POINTER,-1);
	  	(yyval.var_decl_attr).type = merge_node((yyvsp[0].var_decl_attr).type,temp);
	  }
#line 3737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1608 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1615 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1619 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1625 "ass6_13CS10055.y" /* yacc.c:1646  */
    {}
#line 3767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1627 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1634 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(flag2 == 0){										// An indication of the fact that function has not been
	  		temp_use = createSymbolTable();				// declared previously
	  		symbolTableRow x((yyvsp[0].var_decl_attr).var,(yyvsp[0].var_decl_attr).type,0,(yyvsp[0].var_decl_attr).width,-1,0); //Insert in sym tab of function(srOffset comp.in insert)
	  		temp_use->insert(x);
	  	}
	  }
#line 3787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1642 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(flag2 == 0){
	  		symbolTableRow x((yyvsp[0].var_decl_attr).var,(yyvsp[0].var_decl_attr).type,0,(yyvsp[0].var_decl_attr).width,-1,0); //Insert in sym tab of function(srOffset comp. in insert)
	  		temp_use->insert(x);
	  	}
	  }
#line 3798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1652 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(flag2 == 0){										// An indication that function has not been declared prev
	  		(yyval.var_decl_attr).type = merge_node((yyvsp[0].var_decl_attr).type,(yyvsp[-1].var_decl_attr).type);
	  		(yyval.var_decl_attr).var = (yyvsp[0].var_decl_attr).var;
	  		(yyval.var_decl_attr).width = (yyvsp[-1].var_decl_attr).width*(yyvsp[0].var_decl_attr).width;
	  	}	
	  }
#line 3810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1660 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1667 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1671 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1678 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1685 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.initializer_attr) = (yyvsp[0].exp_attr).val;
	  }
#line 3850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1689 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1693 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1700 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1704 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1708 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1715 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1722 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1726 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1733 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1737 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1744 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1748 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr) = (yyvsp[0].exp_attr);
	  }
#line 3946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1752 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr) = (yyvsp[0].exp_attr);
	  }
#line 3954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1756 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr) = (yyvsp[0].exp_attr);
	  }
#line 3962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1760 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr) = (yyvsp[0].exp_attr);
	  }
#line 3970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1764 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr) = (yyvsp[0].exp_attr);
	  }
#line 3978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1770 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1774 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 3994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1778 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 4002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1785 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 4010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1789 "ass6_13CS10055.y" /* yacc.c:1646  */
    { 
	  	(yyval.exp_attr) = (yyvsp[-1].exp_attr);
	  }
#line 4018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1796 "ass6_13CS10055.y" /* yacc.c:1646  */
    { 
	  	(yyval.exp_attr) = (yyvsp[0].exp_attr);
	  }
#line 4026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1800 "ass6_13CS10055.y" /* yacc.c:1646  */
    { 
		backpatch((yyvsp[-2].exp_attr).NextList,(yyvsp[-1].instr));
		(yyval.exp_attr) = (yyvsp[0].exp_attr);
	  }
#line 4035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1807 "ass6_13CS10055.y" /* yacc.c:1646  */
    { }
#line 4041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1809 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr) = (yyvsp[0].exp_attr);
	  }
#line 4049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1816 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 4057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1820 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.exp_attr) = (yyvsp[-1].exp_attr);
	  }
#line 4065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1827 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	backpatch((yyvsp[-4].N_attr),instCounter);
	  	conv2Bool(&(yyvsp[-5].exp_attr));
	  	backpatch((yyvsp[-5].exp_attr).TrueList,(yyvsp[-2].instr));
	  	(yyval.exp_attr).NextList = merge((yyvsp[-1].exp_attr).NextList,(yyvsp[-5].exp_attr).FalseList);
	  	(yyval.exp_attr).NextList = merge((yyval.exp_attr).NextList,(yyvsp[0].N_attr));
	  }
#line 4077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1835 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	lNode *l = 0;
	  	if(((yyvsp[-8].exp_attr).type)->tNodeType!=BOOL){
	  		l = makelist(instCounter);
	  		quadArrayRow x(0,0,0,GOTO,0,0,0);
	  		globalQArray->emit(x);
	  	}
	  	backpatch((yyvsp[-7].N_attr),instCounter);
	  	conv2Bool(&(yyvsp[-8].exp_attr));
	  	backpatch((yyvsp[-8].exp_attr).TrueList,(yyvsp[-5].instr));
	  	backpatch((yyvsp[-8].exp_attr).FalseList,(yyvsp[-1].instr));
	  	lNode *temp = merge((yyvsp[-3].N_attr),(yyvsp[-4].exp_attr).NextList);
	  	(yyval.exp_attr).NextList = merge(temp,(yyvsp[0].exp_attr).NextList);
	  	(yyval.exp_attr).NextList = merge((yyval.exp_attr).NextList,l);
	  }
#line 4097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1851 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 4105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1858 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	char *res = new char[10];
	  	sprintf(res,"%d",(yyvsp[-6].instr));
	  	quadArrayRow x(0,0,res,GOTO,0,0,0);
	  	globalQArray->emit(x);
	  	backpatch((yyvsp[-3].N_attr),instCounter);
	  	conv2Bool(&(yyvsp[-4].exp_attr));
	  	backpatch((yyvsp[0].exp_attr).NextList,(yyvsp[-6].instr));
	  	backpatch((yyvsp[-4].exp_attr).TrueList,(yyvsp[-1].instr));
	  	(yyval.exp_attr).NextList = (yyvsp[-4].exp_attr).FalseList;
	  }
#line 4121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1870 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	backpatch((yyvsp[-2].N_attr),instCounter);
	  	conv2Bool(&(yyvsp[-3].exp_attr));
	  	backpatch((yyvsp[-3].exp_attr).TrueList,(yyvsp[-8].instr));
	  	backpatch((yyvsp[-7].exp_attr).NextList,(yyvsp[-6].instr));
	  	(yyval.exp_attr).NextList = (yyvsp[-3].exp_attr).FalseList;
	  }
#line 4133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1879 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	backpatch((yyvsp[-3].N_attr),(yyvsp[-8].instr));
	  	lNode *l = makelist(instCounter);
	  	quadArrayRow x(0,0,0,GOTO,0,0,0);
	  	globalQArray->emit(x);
	  	(yyvsp[0].exp_attr).NextList = merge((yyvsp[0].exp_attr).NextList,l);
	  	backpatch((yyvsp[0].exp_attr).NextList,(yyvsp[-5].instr));
	  	backpatch((yyvsp[-6].N_attr),instCounter);
	  	conv2Bool(&(yyvsp[-7].exp_attr));
	  	backpatch((yyvsp[-7].exp_attr).TrueList,(yyvsp[-1].instr));
	  	(yyval.exp_attr).NextList = (yyvsp[-7].exp_attr).FalseList;
	  }
#line 4150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1892 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 4158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1899 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 4166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1903 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 4174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1907 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 4182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1911 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	quadArrayRow x(0,0,0,RETURN,0,0,0);
	  	globalQArray->emit(x);
	  }
#line 4191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1916 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	char *Arg1 = strdup(((yyvsp[-1].exp_attr).loc)->srName);
	  	quadArrayRow x(Arg1,0,0,RETURN_EXP,(yyvsp[-1].exp_attr).loc,0,0);
	  	globalQArray->emit(x);
	  }
#line 4201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1924 "ass6_13CS10055.y" /* yacc.c:1646  */
    {}
#line 4207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1925 "ass6_13CS10055.y" /* yacc.c:1646  */
    { //Not used as multiple translation units are not supported
											}
#line 4214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1930 "ass6_13CS10055.y" /* yacc.c:1646  */
    {}
#line 4220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1931 "ass6_13CS10055.y" /* yacc.c:1646  */
    {}
#line 4226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1936 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// Not used
	  }
#line 4234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1940 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	localST = globalST; // Exiting out of function so set localST pointer to globalST symbol table 
	  }
#line 4242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1947 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 4250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1951 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
	  	// To be skipped
	  }
#line 4258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1956 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
		(yyval.instr) = instCounter;
	}
#line 4266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1962 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
		(yyval.N_attr) = makelist(instCounter);
		quadArrayRow x(0,0,0,GOTO,0,0,0);
		globalQArray->emit(x);
	}
#line 4276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1970 "ass6_13CS10055.y" /* yacc.c:1646  */
    {
		localST = temp_use; // As we are entering the function localST should point to symbol table of function
		//localST->print_stTable();
		//printf("Yes\n");
		int i;
		char *t;
		for(i=0;i<=globalST->stNumRows;i++){
			if((((globalST->table)[i]).srNestedTable) == localST){
				t = strdup(((globalST->table)[i]).srName);
				break;
			}
		}
		quadArrayRow x(t,0,0,Function,((globalST->table)+i),0,0);
		globalQArray->emit(x);
		flag1 = 0;
		flag2 = 0;
		c = 0;
		//printf("Yes\n");
	}
#line 4300 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4304 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 1991 "ass6_13CS10055.y" /* yacc.c:1906  */


void yyerror(const char* s) {
	printf("%s", s);
}
