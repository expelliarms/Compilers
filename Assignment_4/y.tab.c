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
#line 1 "ass4_13CS10055.y" /* yacc.c:339  */

#include <stdio.h>
extern int yylex();
void yyerror(char* s);

#line 72 "y.tab.c" /* yacc.c:339  */

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
    ENUM_KEYWORD = 259,
    RESTRICT_KEYWORD = 260,
    UNSIGNED_KEYWORD = 261,
    BREAK_KEYWORD = 262,
    EXTERN_KEYWORD = 263,
    RETURN_KEYWORD = 264,
    VOID_KEYWORD = 265,
    CASE_KEYWORD = 266,
    FLOAT_KEYWORD = 267,
    SHORT_KEYWORD = 268,
    VOLATILE_KEYWORD = 269,
    CHAR_KEYWORD = 270,
    FOR_KEYWORD = 271,
    SIGNED_KEYWORD = 272,
    WHILE_KEYWORD = 273,
    CONST_KEYWORD = 274,
    GOTO_KEYWORD = 275,
    SIZEOF_KEYWORD = 276,
    BOOL_KEYWORD = 277,
    CONTINUE_KEYWORD = 278,
    IF_KEYWORD = 279,
    STATIC_KEYWORD = 280,
    COMPLEX_KEYWORD = 281,
    DEFAULT_KEYWORD = 282,
    INLINE_KEYWORD = 283,
    STRUCT_KEYWORD = 284,
    IMAGINARY_KEYWORD = 285,
    DO_KEYWORD = 286,
    INT_KEYWORD = 287,
    SWITCH_KEYWORD = 288,
    DOUBLE_KEYWORD = 289,
    LONG_KEYWORD = 290,
    TYPEDEF_KEYWORD = 291,
    ELSE_KEYWORD = 292,
    REGISTER_KEYWORD = 293,
    UNION_KEYWORD = 294,
    IDENTIFIER = 295,
    INTEGER_CONSTANT = 296,
    FLOAT_CONSTANT = 297,
    ENUMERATION = 298,
    CHAR_CONSTANT = 299,
    STRING_LITERAL = 300,
    VAL_AT = 301,
    PLUS_PLUS = 302,
    MINUS_MINUS = 303,
    LEFT_SHIFT = 304,
    RIGHT_SHIFT = 305,
    LESS_EQUAL = 306,
    GREATER_EQUAL = 307,
    EQUAL_EQUAL = 308,
    NOT_EQUAL = 309,
    LOGICAL_AND = 310,
    LOGICAL_OR = 311,
    ELLIPSES = 312,
    STAR_EQUAL = 313,
    BY_EQUAL = 314,
    PERCENT_EQUAL = 315,
    PLUS_EQUAL = 316,
    MINUS_EQUAL = 317,
    LEFT_SHIFT_EQUAL = 318,
    RIGHT_SHIFT_EQUAL = 319,
    AND_EQUAL = 320,
    BITWISENOT_EQUAL = 321,
    OR_EQUAL = 322,
    SINGLE_COMMENT = 323,
    MULTI_COMMENT = 324
  };
#endif
/* Tokens.  */
#define AUTO_KEYWORD 258
#define ENUM_KEYWORD 259
#define RESTRICT_KEYWORD 260
#define UNSIGNED_KEYWORD 261
#define BREAK_KEYWORD 262
#define EXTERN_KEYWORD 263
#define RETURN_KEYWORD 264
#define VOID_KEYWORD 265
#define CASE_KEYWORD 266
#define FLOAT_KEYWORD 267
#define SHORT_KEYWORD 268
#define VOLATILE_KEYWORD 269
#define CHAR_KEYWORD 270
#define FOR_KEYWORD 271
#define SIGNED_KEYWORD 272
#define WHILE_KEYWORD 273
#define CONST_KEYWORD 274
#define GOTO_KEYWORD 275
#define SIZEOF_KEYWORD 276
#define BOOL_KEYWORD 277
#define CONTINUE_KEYWORD 278
#define IF_KEYWORD 279
#define STATIC_KEYWORD 280
#define COMPLEX_KEYWORD 281
#define DEFAULT_KEYWORD 282
#define INLINE_KEYWORD 283
#define STRUCT_KEYWORD 284
#define IMAGINARY_KEYWORD 285
#define DO_KEYWORD 286
#define INT_KEYWORD 287
#define SWITCH_KEYWORD 288
#define DOUBLE_KEYWORD 289
#define LONG_KEYWORD 290
#define TYPEDEF_KEYWORD 291
#define ELSE_KEYWORD 292
#define REGISTER_KEYWORD 293
#define UNION_KEYWORD 294
#define IDENTIFIER 295
#define INTEGER_CONSTANT 296
#define FLOAT_CONSTANT 297
#define ENUMERATION 298
#define CHAR_CONSTANT 299
#define STRING_LITERAL 300
#define VAL_AT 301
#define PLUS_PLUS 302
#define MINUS_MINUS 303
#define LEFT_SHIFT 304
#define RIGHT_SHIFT 305
#define LESS_EQUAL 306
#define GREATER_EQUAL 307
#define EQUAL_EQUAL 308
#define NOT_EQUAL 309
#define LOGICAL_AND 310
#define LOGICAL_OR 311
#define ELLIPSES 312
#define STAR_EQUAL 313
#define BY_EQUAL 314
#define PERCENT_EQUAL 315
#define PLUS_EQUAL 316
#define MINUS_EQUAL 317
#define LEFT_SHIFT_EQUAL 318
#define RIGHT_SHIFT_EQUAL 319
#define AND_EQUAL 320
#define BITWISENOT_EQUAL 321
#define OR_EQUAL 322
#define SINGLE_COMMENT 323
#define MULTI_COMMENT 324

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 7 "ass4_13CS10055.y" /* yacc.c:355  */

  int intval;
  float floatval;
  char *charval;

#line 256 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 271 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  48
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1379

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  206
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  342

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   324

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,     2,     2,     2,    85,    78,     2,
      70,    71,    79,    80,    77,    81,    74,    84,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    91,    93,
      86,    92,    87,    90,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    72,     2,    73,    88,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    75,    89,    76,    82,     2,     2,     2,
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
      65,    66,    67,    68,    69
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    87,    87,    88,    89,    90,    91,    92,    93,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   110,
     111,   115,   116,   117,   118,   119,   120,   124,   125,   126,
     127,   128,   129,   133,   134,   138,   139,   140,   141,   145,
     146,   147,   151,   152,   153,   157,   158,   159,   160,   161,
     165,   166,   167,   171,   172,   176,   177,   181,   182,   186,
     187,   191,   192,   196,   197,   201,   202,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   220,   221,
     225,   229,   230,   234,   235,   236,   237,   238,   239,   240,
     241,   245,   246,   250,   251,   254,   255,   256,   257,   258,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   278,   279,   280,   281,   285,   286,   287,
     291,   292,   296,   297,   301,   302,   303,   307,   311,   312,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   333,   334,   335,   336,   340,   341,
     346,   347,   351,   352,   356,   357,   361,   362,   366,   370,
     371,   372,   376,   377,   378,   382,   386,   387,   391,   392,
     396,   397,   398,   399,   400,   401,   405,   406,   407,   411,
     412,   416,   417,   421,   422,   426,   427,   431,   432,   433,
     437,   438,   439,   440,   444,   445,   446,   447,   448,   452,
     453,   457,   458,   462,   463,   467,   468
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO_KEYWORD", "ENUM_KEYWORD",
  "RESTRICT_KEYWORD", "UNSIGNED_KEYWORD", "BREAK_KEYWORD",
  "EXTERN_KEYWORD", "RETURN_KEYWORD", "VOID_KEYWORD", "CASE_KEYWORD",
  "FLOAT_KEYWORD", "SHORT_KEYWORD", "VOLATILE_KEYWORD", "CHAR_KEYWORD",
  "FOR_KEYWORD", "SIGNED_KEYWORD", "WHILE_KEYWORD", "CONST_KEYWORD",
  "GOTO_KEYWORD", "SIZEOF_KEYWORD", "BOOL_KEYWORD", "CONTINUE_KEYWORD",
  "IF_KEYWORD", "STATIC_KEYWORD", "COMPLEX_KEYWORD", "DEFAULT_KEYWORD",
  "INLINE_KEYWORD", "STRUCT_KEYWORD", "IMAGINARY_KEYWORD", "DO_KEYWORD",
  "INT_KEYWORD", "SWITCH_KEYWORD", "DOUBLE_KEYWORD", "LONG_KEYWORD",
  "TYPEDEF_KEYWORD", "ELSE_KEYWORD", "REGISTER_KEYWORD", "UNION_KEYWORD",
  "IDENTIFIER", "INTEGER_CONSTANT", "FLOAT_CONSTANT", "ENUMERATION",
  "CHAR_CONSTANT", "STRING_LITERAL", "VAL_AT", "PLUS_PLUS", "MINUS_MINUS",
  "LEFT_SHIFT", "RIGHT_SHIFT", "LESS_EQUAL", "GREATER_EQUAL",
  "EQUAL_EQUAL", "NOT_EQUAL", "LOGICAL_AND", "LOGICAL_OR", "ELLIPSES",
  "STAR_EQUAL", "BY_EQUAL", "PERCENT_EQUAL", "PLUS_EQUAL", "MINUS_EQUAL",
  "LEFT_SHIFT_EQUAL", "RIGHT_SHIFT_EQUAL", "AND_EQUAL", "BITWISENOT_EQUAL",
  "OR_EQUAL", "SINGLE_COMMENT", "MULTI_COMMENT", "'('", "')'", "'['",
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
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "enum_specifier", "enumerator_list", "enumerator", "type_qualifier",
  "function_specifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
      40,    41,    91,    93,    46,   123,   125,    44,    38,    42,
      43,    45,   126,    33,    47,    37,    60,    62,    94,   124,
      63,    58,    61,    59
};
# endif

#define YYPACT_NINF -152

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-152)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1309,  -152,   -10,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,   -17,  1309,  1309,  -152,  1309,  1309,
    1273,  -152,  -152,   -12,    -2,  -152,   -18,    29,  -152,   -42,
    -152,   534,    49,   -21,  -152,  -152,  -152,  -152,  -152,  -152,
      -2,   -25,    19,  -152,    14,  -152,  -152,    29,   -18,  -152,
     279,  1012,  -152,   -17,  -152,   865,   946,   696,    49,   116,
    1091,  -152,    -2,  -152,  -152,  -152,  -152,    28,   -48,   124,
    1091,     4,    71,   106,  1141,    58,    86,   117,   570,   140,
     125,  -152,  -152,  -152,  -152,  -152,  1155,  1155,   652,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,    55,   271,
    1091,  -152,    31,     1,    82,   -27,   142,   134,   136,   137,
     170,   -40,  -152,  -152,   -37,  -152,  -152,  -152,  -152,   370,
    -152,  -152,  -152,  -152,  -152,  -152,  1012,  -152,  -152,  -152,
    -152,  -152,  -152,   -18,   156,   152,  -152,    -5,   784,  -152,
     159,   160,   740,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
     -20,   145,   452,  1091,   144,   652,  -152,  -152,  1091,   570,
     220,  1091,   570,   652,  -152,  -152,    36,  1344,  -152,  1344,
     176,   208,  -152,  -152,  1026,  1091,   209,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  1091,  -152,
    1091,  1091,  1091,  1091,  1091,  1091,  1091,  1091,  1091,  1091,
    1091,  1091,  1091,  1091,  1091,  1091,  1091,  1091,  1091,  1091,
    -152,  -152,  -152,  -152,   121,  -152,  -152,  1236,  -152,   212,
     180,   784,  -152,  -152,  1091,  -152,   181,   182,  -152,   570,
     864,   864,    40,  -152,   185,    53,  -152,   187,    62,  -152,
     188,  -152,  -152,  -152,  1077,  -152,  -152,    63,  -152,   -63,
    -152,  -152,  -152,  -152,  -152,    31,    31,     1,     1,    82,
      82,    82,    82,   -27,   -27,   142,   134,   136,   137,   170,
     -13,  -152,  -152,   948,  -152,  -152,  -152,  -152,   189,   190,
    -152,  -152,  -152,  1091,  1091,   570,   183,   570,  1091,   570,
     183,  1012,  -152,  -152,  1091,  -152,  1091,  1091,   221,  -152,
    -152,  1012,     5,  -152,  -152,  -152,    65,    73,  -152,   223,
      77,  -152,   123,  -152,  -152,   191,  -152,  -152,  -152,  -152,
     570,   570,   570,   172,  -152,   962,  -152,  -152,  -152,  -152,
    -152,  -152
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    98,     0,   125,   108,    96,   100,   105,   102,   126,
     101,   107,   124,   109,    97,   110,   127,   111,   103,   106,
     104,    95,    99,   202,     0,    83,    85,   112,    87,    89,
       0,   199,   201,   119,     0,   130,     0,   144,    81,     0,
      91,    93,   129,     0,    84,    86,    88,    90,     1,   200,
       0,   122,     0,   120,     0,   148,   146,   145,     0,    82,
       0,     0,   205,     0,   204,     0,     0,     0,   128,     0,
       0,   117,     0,   131,   149,   147,    92,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     3,     4,     6,     5,     7,     0,     0,     0,   179,
      27,    28,    29,    30,    31,    32,   185,     9,    21,    33,
       0,    35,    39,    42,    45,    50,    53,    55,    57,    59,
      61,    63,    65,    78,     0,   183,   184,   170,   171,     0,
     181,   172,   173,   174,   175,     2,     0,   159,    94,   206,
     203,   156,   143,   155,     0,   150,   152,     0,     0,   135,
      28,     0,     0,   118,    33,    80,   123,   121,   196,   197,
       0,     0,     0,     0,     0,     0,    25,   195,     0,     0,
       0,     0,     0,     0,    22,    23,     0,   114,   158,   116,
       0,     0,    15,    16,     0,     0,     0,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    67,     0,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     186,   180,   182,   162,     0,   154,   141,     0,   142,     0,
       0,     0,   140,   133,     0,   134,    28,     0,   198,     0,
       0,     0,     0,   194,     0,     0,   178,     0,     0,   176,
       0,     8,   113,   115,     0,    14,    11,     0,    19,     0,
      13,    66,    36,    37,    38,    40,    41,    43,    44,    48,
      49,    46,    47,    51,    52,    54,    56,    58,    60,    62,
       0,    79,   160,     0,   151,   153,   157,   137,     0,     0,
     139,   132,   177,     0,     0,     0,    26,     0,     0,     0,
       0,     0,    34,    12,     0,    10,     0,     0,     0,   161,
     163,     0,     0,   166,   136,   138,     0,     0,   190,   187,
       0,   189,     0,    20,    64,     0,   169,   164,   165,   167,
       0,     0,     0,     0,    17,     0,   168,   193,   192,   188,
     191,    18
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -152,  -152,  -152,  -152,   -26,  -152,  -102,    11,    13,   -47,
       9,    54,    52,    56,    57,    51,  -152,   -65,   -61,  -152,
     -59,   -76,   -24,     3,  -152,   211,  -152,   -85,   -22,  -152,
     222,   198,   -30,  -152,   -15,   233,   -11,   -55,  -152,  -152,
      50,  -152,  -118,   -60,     7,  -152,  -152,   -34,   -86,  -152,
     -23,  -152,   150,  -151,  -152,  -152,  -152,  -152,   286,  -152,
    -152
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   107,   108,   257,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   198,
     124,   156,    23,    63,    39,    40,    25,    26,   178,    27,
      52,    53,    28,    29,    77,    42,    43,    57,   144,   145,
     146,   147,   180,   223,   224,   311,   312,   313,   126,   127,
     128,   129,   130,   131,   132,   133,   134,    30,    31,    32,
      65
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     137,   138,   170,    24,   161,   155,   151,    55,   199,    41,
     305,   241,   152,   177,   219,   155,   217,    62,    64,    35,
     160,    54,    35,    35,   207,   208,    56,    74,    44,    45,
      33,    46,    47,    24,     3,    58,   125,    55,    51,   176,
     219,   139,   140,     9,   154,   158,    75,   244,    12,    36,
     218,    59,    36,    36,   154,   250,   220,   219,   166,   209,
     210,    37,    37,    50,   219,    34,   228,    70,   179,   143,
     174,   175,   229,   238,   162,   137,    38,   307,   306,   308,
     177,   203,   204,   246,   154,    73,   249,   230,   177,   293,
     294,   237,   177,   231,   177,    71,    72,   328,   262,   263,
     264,   181,   182,   183,   242,   125,   176,   251,    37,   245,
     200,   295,   248,   219,   176,   201,   202,   219,    55,    66,
      61,    67,    74,   258,   297,   184,   259,   185,   225,   186,
     219,   205,   206,   299,   303,   179,   330,   261,   240,   219,
     304,   163,   219,   179,   331,    84,   164,   179,   333,   179,
     219,   167,   302,   292,   219,   252,   168,   253,   281,   280,
     269,   270,   271,   272,   135,    91,    92,    93,    94,    95,
     288,    96,    97,   289,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   153,    72,    98,   211,   212,   282,   283,   334,
     335,    74,   100,   101,   102,   103,   104,   105,   169,   318,
     171,   319,   213,   321,   265,   266,   172,   159,   267,   268,
     273,   274,   137,   310,   214,   216,   215,   226,   154,   227,
     143,   325,   232,   233,   316,   317,   239,   243,   247,   320,
     137,   324,   155,   323,   337,   338,   339,   254,   255,   260,
     137,   327,   286,   287,   290,   291,   296,   298,   301,   300,
     332,   326,   314,   315,   336,   340,   276,   275,   279,    76,
     157,   277,    69,   278,   137,   310,    68,   285,   329,   222,
     154,   154,     1,     2,     3,     4,    78,     5,    79,     6,
      80,     7,     8,     9,    10,    81,    11,    82,    12,    83,
      84,    13,    85,    86,    14,    15,    87,    16,   322,    17,
      88,    18,    89,    19,    20,    21,    49,    22,     0,    90,
      91,    92,    93,    94,    95,     0,    96,    97,     0,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,     0,     0,     0,    60,    99,     0,   100,   101,   102,
     103,   104,   105,   197,     0,     0,     0,     0,     0,     0,
       0,     0,   106,     1,     2,     3,     4,    78,     5,    79,
       6,    80,     7,     8,     9,    10,    81,    11,    82,    12,
      83,    84,    13,    85,    86,    14,    15,    87,    16,     0,
      17,    88,    18,    89,    19,    20,    21,     0,    22,     0,
      90,    91,    92,    93,    94,    95,     0,    96,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,     0,     0,    60,   221,     0,   100,   101,
     102,   103,   104,   105,     0,     1,     2,     3,     4,     0,
       5,     0,     6,   106,     7,     8,     9,    10,     0,    11,
       0,    12,     0,    84,    13,     0,     0,    14,    15,     0,
      16,     0,    17,     0,    18,     0,    19,    20,    21,     0,
      22,     0,   135,    91,    92,    93,    94,    95,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,     0,     1,     2,     3,
       4,     0,     5,     0,     6,   106,     7,     8,     9,    10,
       0,    11,     0,    12,     0,     0,    13,     0,     0,    14,
      15,     0,    16,     0,    17,     0,    18,     0,    19,    20,
      21,     0,    22,     0,     0,     0,     0,    78,     0,    79,
       0,    80,     0,     0,     0,     0,    81,     0,    82,     0,
      83,    84,     0,    85,    86,     0,     0,    87,     0,     0,
       0,    88,     0,    89,     0,     0,     0,     0,     0,    60,
      90,    91,    92,    93,    94,    95,     0,    96,    97,     0,
       0,     0,     0,     0,     0,     0,    61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,     0,     0,    60,     0,     0,   100,   101,
     102,   103,   104,   105,     0,     0,     2,     3,     4,     0,
       0,     0,     6,   106,     7,     8,     9,    10,     0,    11,
       0,    12,     0,    84,    13,     0,     0,     0,    15,     0,
       0,     0,    17,     0,    18,     0,    19,    20,     0,     0,
       0,     0,   135,    91,    92,    93,    94,    95,     0,    96,
      97,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       9,     0,     0,     0,     0,    12,     0,    84,     0,     0,
       0,   148,    98,     0,     0,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,   135,    91,    92,    93,
      94,    95,     0,    96,    97,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     9,     0,     0,     0,     0,    12,
       0,    84,     0,     0,     0,   234,    98,     0,     0,   149,
       0,     0,     0,     0,   100,   150,   102,   103,   104,   105,
     135,    91,    92,    93,    94,    95,     0,    96,    97,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     9,     0,
       0,     0,     0,    12,     0,    84,     0,     0,     0,     0,
      98,     0,     0,   235,     0,     0,     0,     0,   100,   236,
     102,   103,   104,   105,   135,    91,    92,    93,    94,    95,
       0,    96,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,     0,     0,     0,
       0,     0,   100,   101,   102,   103,   104,   105,     1,     2,
       3,     4,     0,     5,     0,     6,     0,     7,     8,     9,
      10,     0,    11,     0,    12,    84,     0,    13,     0,     0,
      14,    15,     0,    16,     0,    17,     0,    18,     0,    19,
      20,    21,     0,    22,   135,    91,    92,    93,    94,    95,
       0,    96,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,     0,     0,     0,
      60,     0,   100,   101,   102,   103,   104,   105,     0,     1,
       2,     3,     4,     0,     5,     0,     6,   106,     7,     8,
       9,    10,     0,    11,     0,    12,     0,     0,    13,    84,
       0,    14,    15,     0,    16,     0,    17,     0,    18,     0,
      19,    20,    21,    84,    22,     0,   141,     0,   135,    91,
      92,    93,    94,    95,     0,    96,    97,     0,     0,     0,
       0,     0,   135,    91,    92,    93,    94,    95,     0,    96,
      97,     0,     0,     0,     0,     0,     0,   142,    98,     0,
     307,     0,   308,   136,   309,     0,   100,   101,   102,   103,
     104,   105,    98,    84,   307,     0,   308,   136,   341,     0,
     100,   101,   102,   103,   104,   105,     0,    84,     0,     0,
       0,     0,   135,    91,    92,    93,    94,    95,     0,    96,
      97,     0,     0,     0,     0,     0,   135,    91,    92,    93,
      94,    95,     0,    96,    97,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,     0,     0,   136,     0,     0,
     100,   101,   102,   103,   104,   105,    98,   256,    84,     0,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
       0,     0,    84,     0,     0,     0,     0,   135,    91,    92,
      93,    94,    95,     0,    96,    97,     0,     0,     0,     0,
       0,   135,    91,    92,    93,    94,    95,     0,    96,    97,
       0,     0,     0,     0,     0,     0,     0,    98,     0,     0,
       0,     0,   301,     0,     0,   100,   101,   102,   103,   104,
     105,    98,    84,     0,     0,     0,     0,     0,     0,   100,
     101,   102,   103,   104,   105,     0,    84,     0,     0,     0,
       0,   135,    91,    92,    93,    94,    95,     0,    96,    97,
       0,     0,     0,     0,     0,   135,    91,    92,    93,    94,
      95,     0,    96,    97,     0,     0,     0,     0,     0,     0,
       0,   165,     0,     0,     0,     0,     0,     0,     0,   100,
     101,   102,   103,   104,   105,   173,     0,     0,     0,     0,
       0,     0,     0,   100,   101,   102,   103,   104,   105,     1,
       2,     3,     4,     0,     5,     0,     6,     0,     7,     8,
       9,    10,     0,    11,     0,    12,     0,     0,    13,     0,
       0,    14,    15,     0,    16,     0,    17,     0,    18,     0,
      19,    20,    21,    48,    22,     0,     1,     2,     3,     4,
       0,     5,     0,     6,     0,     7,     8,     9,    10,     0,
      11,     0,    12,   284,     0,    13,     0,     0,    14,    15,
       0,    16,     0,    17,     0,    18,     0,    19,    20,    21,
       0,    22,     1,     2,     3,     4,     0,     5,     0,     6,
       0,     7,     8,     9,    10,     0,    11,     0,    12,     0,
       0,    13,     0,     0,    14,    15,     0,    16,     0,    17,
       0,    18,     0,    19,    20,    21,     0,    22,     2,     3,
       4,     0,     0,     0,     6,     0,     7,     8,     9,    10,
       0,    11,     0,    12,     0,     0,    13,     0,     0,     0,
      15,     0,     0,     0,    17,     0,    18,     0,    19,    20
};

static const yytype_int16 yycheck[] =
{
      61,    61,    88,     0,    80,    70,    67,    37,   110,    24,
      73,   162,    67,    98,    77,    80,    56,    41,    41,    40,
      79,    36,    40,    40,    51,    52,    37,    57,    25,    26,
      40,    28,    29,    30,     5,    77,    60,    67,    40,    98,
      77,    65,    65,    14,    70,    93,    57,   165,    19,    70,
      90,    93,    70,    70,    80,   173,    93,    77,    84,    86,
      87,    79,    79,    75,    77,    75,    71,    92,    98,    66,
      96,    97,    77,    93,    70,   136,    93,    72,    91,    74,
     165,    80,    81,   169,   110,    71,   172,   148,   173,   240,
     241,   152,   177,   148,   179,    76,    77,    92,   200,   201,
     202,    46,    47,    48,   163,   129,   165,    71,    79,   168,
      79,    71,   171,    77,   173,    84,    85,    77,   148,    70,
      92,    72,   152,   184,    71,    70,   185,    72,   143,    74,
      77,    49,    50,    71,    71,   165,    71,   198,   162,    77,
      77,    70,    77,   173,    71,    21,    40,   177,    71,   179,
      77,    93,   254,   239,    77,   177,    70,   179,   219,   218,
     207,   208,   209,   210,    40,    41,    42,    43,    44,    45,
     231,    47,    48,   234,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,    76,    77,    70,    53,    54,    76,    77,    76,
      77,   231,    78,    79,    80,    81,    82,    83,    91,   295,
      70,   297,    78,   299,   203,   204,    91,    93,   205,   206,
     211,   212,   283,   283,    88,    55,    89,    71,   254,    77,
     227,   307,    73,    73,   293,   294,    91,    93,    18,   298,
     301,   306,   307,   304,   330,   331,   332,    71,    40,    40,
     311,   311,    40,    73,    73,    73,    71,    70,    75,    71,
      37,    40,    73,    73,    73,    93,   214,   213,   217,    58,
      72,   215,    50,   216,   335,   335,    43,   227,   312,   129,
     306,   307,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,   301,    30,
      31,    32,    33,    34,    35,    36,    30,    38,    -1,    40,
      41,    42,    43,    44,    45,    -1,    47,    48,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    75,    76,    -1,    78,    79,    80,
      81,    82,    83,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    38,    -1,
      40,    41,    42,    43,    44,    45,    -1,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    75,    76,    -1,    78,    79,
      80,    81,    82,    83,    -1,     3,     4,     5,     6,    -1,
       8,    -1,    10,    93,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    21,    22,    -1,    -1,    25,    26,    -1,
      28,    -1,    30,    -1,    32,    -1,    34,    35,    36,    -1,
      38,    -1,    40,    41,    42,    43,    44,    45,    -1,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    80,    81,    82,    83,    -1,     3,     4,     5,
       6,    -1,     8,    -1,    10,    93,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    -1,    -1,    25,
      26,    -1,    28,    -1,    30,    -1,    32,    -1,    34,    35,
      36,    -1,    38,    -1,    -1,    -1,    -1,     7,    -1,     9,
      -1,    11,    -1,    -1,    -1,    -1,    16,    -1,    18,    -1,
      20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,    -1,
      -1,    31,    -1,    33,    -1,    -1,    -1,    -1,    -1,    75,
      40,    41,    42,    43,    44,    45,    -1,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    75,    -1,    -1,    78,    79,
      80,    81,    82,    83,    -1,    -1,     4,     5,     6,    -1,
      -1,    -1,    10,    93,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    21,    22,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    30,    -1,    32,    -1,    34,    35,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    -1,    47,
      48,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    -1,
      -1,    25,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    80,    81,    82,    83,    40,    41,    42,    43,
      44,    45,    -1,    47,    48,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    19,
      -1,    21,    -1,    -1,    -1,    25,    70,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,    83,
      40,    41,    42,    43,    44,    45,    -1,    47,    48,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    19,    -1,    21,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    73,    -1,    -1,    -1,    -1,    78,    79,
      80,    81,    82,    83,    40,    41,    42,    43,    44,    45,
      -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    79,    80,    81,    82,    83,     3,     4,
       5,     6,    -1,     8,    -1,    10,    -1,    12,    13,    14,
      15,    -1,    17,    -1,    19,    21,    -1,    22,    -1,    -1,
      25,    26,    -1,    28,    -1,    30,    -1,    32,    -1,    34,
      35,    36,    -1,    38,    40,    41,    42,    43,    44,    45,
      -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    78,    79,    80,    81,    82,    83,    -1,     3,
       4,     5,     6,    -1,     8,    -1,    10,    93,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    21,
      -1,    25,    26,    -1,    28,    -1,    30,    -1,    32,    -1,
      34,    35,    36,    21,    38,    -1,    40,    -1,    40,    41,
      42,    43,    44,    45,    -1,    47,    48,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    -1,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    71,    70,    -1,
      72,    -1,    74,    75,    76,    -1,    78,    79,    80,    81,
      82,    83,    70,    21,    72,    -1,    74,    75,    76,    -1,
      78,    79,    80,    81,    82,    83,    -1,    21,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    -1,    47,
      48,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      78,    79,    80,    81,    82,    83,    70,    71,    21,    -1,
      -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,    83,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    -1,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    78,    79,    80,    81,    82,
      83,    70,    21,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    80,    81,    82,    83,    -1,    21,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    -1,    47,    48,
      -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    80,    81,    82,    83,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    79,    80,    81,    82,    83,     3,
       4,     5,     6,    -1,     8,    -1,    10,    -1,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    -1,
      -1,    25,    26,    -1,    28,    -1,    30,    -1,    32,    -1,
      34,    35,    36,     0,    38,    -1,     3,     4,     5,     6,
      -1,     8,    -1,    10,    -1,    12,    13,    14,    15,    -1,
      17,    -1,    19,    57,    -1,    22,    -1,    -1,    25,    26,
      -1,    28,    -1,    30,    -1,    32,    -1,    34,    35,    36,
      -1,    38,     3,     4,     5,     6,    -1,     8,    -1,    10,
      -1,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    -1,    -1,    25,    26,    -1,    28,    -1,    30,
      -1,    32,    -1,    34,    35,    36,    -1,    38,     4,     5,
       6,    -1,    -1,    -1,    10,    -1,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    30,    -1,    32,    -1,    34,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     8,    10,    12,    13,    14,
      15,    17,    19,    22,    25,    26,    28,    30,    32,    34,
      35,    36,    38,   116,   117,   120,   121,   123,   126,   127,
     151,   152,   153,    40,    75,    40,    70,    79,    93,   118,
     119,   128,   129,   130,   117,   117,   117,   117,     0,   152,
      75,    40,   124,   125,   128,   126,   130,   131,    77,    93,
      75,    92,   116,   117,   144,   154,    70,    72,   129,   124,
      92,    76,    77,    71,   126,   130,   119,   128,     7,     9,
      11,    16,    18,    20,    21,    23,    24,    27,    31,    33,
      40,    41,    42,    43,    44,    45,    47,    48,    70,    76,
      78,    79,    80,    81,    82,    83,    93,    95,    96,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   114,   116,   142,   143,   144,   145,
     146,   147,   148,   149,   150,    40,    75,   112,   137,   116,
     144,    40,    71,   117,   132,   133,   134,   135,    25,    73,
      79,   112,   131,    76,    98,   111,   115,   125,    93,    93,
     114,   115,    70,    70,    40,    70,    98,    93,    70,    91,
     142,    70,    91,    70,    98,    98,   114,   121,   122,   126,
     136,    46,    47,    48,    70,    72,    74,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    92,   113,   100,
      79,    84,    85,    80,    81,    49,    50,    51,    52,    86,
      87,    53,    54,    78,    88,    89,    55,    56,    90,    77,
      93,    76,   146,   137,   138,   128,    71,    77,    71,    77,
     112,   131,    73,    73,    25,    73,    79,   112,    93,    91,
     116,   147,   114,    93,   136,   114,   142,    18,   114,   142,
     136,    71,   122,   122,    71,    40,    71,    97,   112,   114,
      40,   112,   100,   100,   100,   101,   101,   102,   102,   103,
     103,   103,   103,   104,   104,   105,   106,   107,   108,   109,
     114,   112,    76,    77,    57,   134,    40,    73,   112,   112,
      73,    73,   142,   147,   147,    71,    71,    71,    70,    71,
      71,    75,   100,    71,    77,    73,    91,    72,    74,    76,
     137,   139,   140,   141,    73,    73,   114,   114,   142,   142,
     114,   142,   138,   112,   111,   115,    40,   137,    92,   141,
      71,    71,    37,    71,    76,    77,    73,   142,   142,   142,
      93,    76
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    95,    95,    95,    95,    95,    95,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    97,
      97,    98,    98,    98,    98,    98,    98,    99,    99,    99,
      99,    99,    99,   100,   100,   101,   101,   101,   101,   102,
     102,   102,   103,   103,   103,   104,   104,   104,   104,   104,
     105,   105,   105,   106,   106,   107,   107,   108,   108,   109,
     109,   110,   110,   111,   111,   112,   112,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   114,   114,
     115,   116,   116,   117,   117,   117,   117,   117,   117,   117,
     117,   118,   118,   119,   119,   120,   120,   120,   120,   120,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   122,   122,   122,   122,   123,   123,   123,
     124,   124,   125,   125,   126,   126,   126,   127,   128,   128,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   130,   130,   130,   130,   131,   131,
     132,   132,   133,   133,   134,   134,   135,   135,   136,   137,
     137,   137,   138,   138,   138,   139,   140,   140,   141,   141,
     142,   142,   142,   142,   142,   142,   143,   143,   143,   144,
     144,   145,   145,   146,   146,   147,   147,   148,   148,   148,
     149,   149,   149,   149,   150,   150,   150,   150,   150,   151,
     151,   152,   152,   153,   153,   154,   154
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       4,     3,     4,     3,     3,     2,     2,     6,     7,     1,
       3,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     4,     5,     2,
       1,     3,     1,     3,     1,     1,     1,     1,     2,     1,
       1,     3,     5,     4,     4,     3,     6,     5,     6,     5,
       4,     4,     4,     3,     1,     2,     2,     3,     1,     2,
       1,     3,     1,     3,     2,     1,     1,     3,     1,     1,
       3,     4,     1,     3,     4,     2,     1,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     2,
       3,     1,     2,     1,     1,     1,     2,     5,     7,     5,
       5,     7,     7,     7,     3,     2,     2,     2,     3,     1,
       2,     1,     1,     4,     3,     1,     2
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
      
#line 1835 "y.tab.c" /* yacc.c:1646  */
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
#line 471 "ass4_13CS10055.y" /* yacc.c:1906  */


void yyerror(char* s) {
	printf("%s", s);
}
