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
#line 1 "ass5_13CS10055.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include <iostream>
extern int yylex();
#include "ass5_13CS10055_translator.h"
void yyerror(char* s);

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
    INTEGER_CONSTANT = 295,
    FLOAT_CONSTANT = 296,
    ENUMERATION = 297,
    CHAR_CONSTANT = 298,
    STRING_LITERAL = 299,
    VAL_AT = 300,
    PLUS_PLUS = 301,
    MINUS_MINUS = 302,
    LEFT_SHIFT = 303,
    RIGHT_SHIFT = 304,
    LESS_EQUAL = 305,
    GREATER_EQUAL = 306,
    EQUAL_EQUAL = 307,
    NOT_EQUAL = 308,
    LOGICAL_AND = 309,
    LOGICAL_OR = 310,
    ELLIPSES = 311,
    STAR_EQUAL = 312,
    BY_EQUAL = 313,
    PERCENT_EQUAL = 314,
    PLUS_EQUAL = 315,
    MINUS_EQUAL = 316,
    LEFT_SHIFT_EQUAL = 317,
    RIGHT_SHIFT_EQUAL = 318,
    AND_EQUAL = 319,
    BITWISENOT_EQUAL = 320,
    OR_EQUAL = 321,
    SINGLE_COMMENT = 322,
    MULTI_COMMENT = 323,
    IDENTIFIER = 324
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
#define INTEGER_CONSTANT 295
#define FLOAT_CONSTANT 296
#define ENUMERATION 297
#define CHAR_CONSTANT 298
#define STRING_LITERAL 299
#define VAL_AT 300
#define PLUS_PLUS 301
#define MINUS_MINUS 302
#define LEFT_SHIFT 303
#define RIGHT_SHIFT 304
#define LESS_EQUAL 305
#define GREATER_EQUAL 306
#define EQUAL_EQUAL 307
#define NOT_EQUAL 308
#define LOGICAL_AND 309
#define LOGICAL_OR 310
#define ELLIPSES 311
#define STAR_EQUAL 312
#define BY_EQUAL 313
#define PERCENT_EQUAL 314
#define PLUS_EQUAL 315
#define MINUS_EQUAL 316
#define LEFT_SHIFT_EQUAL 317
#define RIGHT_SHIFT_EQUAL 318
#define AND_EQUAL 319
#define BITWISENOT_EQUAL 320
#define OR_EQUAL 321
#define SINGLE_COMMENT 322
#define MULTI_COMMENT 323
#define IDENTIFIER 324

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 10 "ass5_13CS10055.y" /* yacc.c:355  */

  int intval;
  double floatval;
  char charval;
  idAttributes idAttr;
  expAttributes expAttr;
  opSpecifier unaryOpAttr;
  pNode *params;
  int instr;

#line 264 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 279 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   1364

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  207
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  344

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
       2,     2,     2,    78,     2,     2,     2,    85,    73,     2,
      70,    71,    74,    75,    72,    76,    81,    84,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    91,    93,
      86,    92,    87,    90,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    79,     2,    80,    88,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    82,    89,    83,    77,     2,     2,     2,
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
       0,   119,   119,   131,   142,   153,   164,   165,   166,   173,
     177,   185,   189,   193,   197,   201,   205,   212,   216,   247,
     258,   281,   285,   289,   306,   323,   327,   334,   341,   368,
     381,   398,   415,   424,   428,   435,   439,   446,   450,   528,
     604,   683,   687,   763,   842,   846,   858,   873,   877,   889,
     901,   913,   928,   932,   944,   959,   963,   978,   982,   997,
    1001,  1016,  1020,  1030,  1034,  1044,  1048,  1052,  1056,  1061,
    1062,  1063,  1064,  1065,  1066,  1067,  1068,  1069,  1070,  1071,
    1075,  1079,  1080,  1084,  1085,  1086,  1087,  1088,  1089,  1090,
    1091,  1095,  1096,  1100,  1101,  1104,  1105,  1106,  1107,  1108,
    1112,  1113,  1114,  1115,  1116,  1117,  1118,  1119,  1120,  1121,
    1122,  1123,  1124,  1128,  1129,  1130,  1131,  1135,  1136,  1137,
    1141,  1142,  1146,  1147,  1151,  1152,  1153,  1157,  1161,  1162,
    1166,  1167,  1168,  1169,  1170,  1171,  1172,  1173,  1174,  1175,
    1176,  1177,  1178,  1179,  1183,  1184,  1185,  1186,  1190,  1191,
    1196,  1197,  1201,  1202,  1206,  1207,  1211,  1212,  1216,  1220,
    1221,  1222,  1226,  1227,  1228,  1232,  1236,  1237,  1241,  1242,
    1246,  1247,  1248,  1249,  1250,  1251,  1255,  1256,  1257,  1261,
    1262,  1266,  1267,  1271,  1272,  1276,  1277,  1281,  1282,  1283,
    1287,  1288,  1289,  1290,  1294,  1295,  1296,  1297,  1298,  1302,
    1303,  1307,  1308,  1312,  1313,  1317,  1321,  1329
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
  "INTEGER_CONSTANT", "FLOAT_CONSTANT", "ENUMERATION", "CHAR_CONSTANT",
  "STRING_LITERAL", "VAL_AT", "PLUS_PLUS", "MINUS_MINUS", "LEFT_SHIFT",
  "RIGHT_SHIFT", "LESS_EQUAL", "GREATER_EQUAL", "EQUAL_EQUAL", "NOT_EQUAL",
  "LOGICAL_AND", "LOGICAL_OR", "ELLIPSES", "STAR_EQUAL", "BY_EQUAL",
  "PERCENT_EQUAL", "PLUS_EQUAL", "MINUS_EQUAL", "LEFT_SHIFT_EQUAL",
  "RIGHT_SHIFT_EQUAL", "AND_EQUAL", "BITWISENOT_EQUAL", "OR_EQUAL",
  "SINGLE_COMMENT", "MULTI_COMMENT", "IDENTIFIER", "'('", "')'", "','",
  "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'['", "']'", "'.'", "'{'",
  "'}'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='",
  "';'", "$accept", "primary_expression", "expression", "unary_operator",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "specifier_qualifier_list", "enum_specifier",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation", "designator_list", "designator", "statement",
  "labeled_statement", "compound_statement", "block_item_list",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list",
  "JUMP_AUG", YY_NULLPTR
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
      40,    41,    44,    38,    42,    43,    45,   126,    33,    91,
      93,    46,   123,   125,    47,    37,    60,    62,    94,   124,
      63,    58,    61,    59
};
# endif

#define YYPACT_NINF -138

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-138)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1294,  -138,   -23,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,   -43,  1294,  1294,  -138,  1294,  1294,
    1258,  -138,  -138,   -31,   -13,  -138,    64,     2,  -138,   -49,
    -138,   524,   -21,    66,  -138,  -138,  -138,  -138,  -138,  -138,
     -13,   -68,     9,  -138,   -32,  -138,  -138,     2,    64,  -138,
     274,  1011,  -138,   -43,  -138,   636,   949,   662,   -21,    36,
    1084,   -13,  -138,  -138,  -138,  -138,  -138,   -18,   -11,   832,
    1084,    15,    18,    25,  1127,    56,   102,   110,   554,   135,
    -138,  -138,  -138,  -138,  -138,  1142,  1142,   119,   782,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,   -38,  1084,
      60,     5,  -138,    26,    72,   103,   -33,   124,   139,   126,
     127,   161,   -45,  -138,  -138,  -138,  -138,  -138,  -138,   365,
    -138,  -138,  -138,  -138,  -138,  -138,  1011,  -138,  -138,  -138,
    -138,  -138,  -138,    64,   146,   147,  -138,   107,   822,   138,
    -138,   140,   705,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
     -20,   134,   447,  1084,   133,   782,  -138,  -138,  1084,   554,
     209,  1084,   782,  -138,  -138,   554,   109,  1329,  -138,  1329,
     158,  1084,  -138,  -138,   165,  -138,  -138,  1069,  1084,   166,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  1084,  1084,  1084,  1084,  1084,  1084,  1084,  1084,  1084,
    1084,  1084,  1084,  1084,  1084,  1084,  1084,  1084,  -138,  -138,
    1084,  -138,  -138,  -138,    45,  -138,  -138,  1218,  -138,   167,
     150,   822,  -138,  -138,  1084,   157,  -138,   164,  -138,   554,
     872,   872,   111,  -138,   174,   113,  -138,   168,   115,   178,
    -138,  -138,  -138,  -138,  1026,  -138,  -138,  -138,   118,  -138,
      57,  -138,  -138,  -138,  -138,  -138,    26,    26,    72,    72,
     103,   103,   103,   103,   -33,   -33,   124,   139,   126,  1084,
    1084,   -58,   952,  -138,  -138,  -138,  -138,  -138,   170,   171,
    -138,  -138,  -138,  1084,  1084,   554,   173,   554,  1084,   554,
     173,  1011,  -138,  -138,  1084,  -138,   127,   161,  1084,  1084,
     187,  -138,  -138,  1011,    33,  -138,  -138,  -138,   120,   122,
    -138,   220,   125,  -138,    59,  -138,  -138,   179,  -138,  -138,
    -138,  -138,   554,   554,   554,   169,   967,  -138,  -138,  -138,
    -138,  -138,  -138,  -138
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
       0,     0,   117,   131,   149,   147,    92,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     4,     6,     5,     7,     0,     0,     2,     0,    11,
      12,    13,    14,    15,    16,   179,   185,    17,     0,     0,
      29,    35,    37,    41,    44,    47,    52,    55,    57,    59,
      61,    63,    65,    67,     9,   183,   184,   170,   171,     0,
     181,   172,   173,   174,   175,     2,     0,   159,    94,   206,
     203,   156,   143,   155,     0,   150,   152,     0,     0,    12,
     135,     0,     0,   118,    35,    80,   123,   121,   196,   197,
       0,     0,     0,     0,     0,     0,    33,   195,     0,     0,
       0,     0,     0,    30,    31,     0,     0,   114,   158,   116,
       0,     0,   186,    32,     0,    23,    24,     0,     0,     0,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      69,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   207,   207,
       0,   180,   182,   162,     0,   154,   141,     0,   142,     0,
       0,     0,   140,   133,     0,    12,   134,     0,   198,     0,
       0,     0,     0,   194,     0,     0,   178,     0,     0,     0,
     176,     8,   113,   115,     0,    10,    22,    19,     0,    27,
       0,    21,    68,    38,    39,    40,    42,    43,    45,    46,
      50,    51,    48,    49,    53,    54,    56,    58,    60,     0,
       0,     0,     0,   160,   151,   153,   157,   137,     0,     0,
     139,   132,   177,     0,     0,     0,    34,     0,     0,     0,
       0,     0,    36,    20,     0,    18,    62,    64,     0,     0,
       0,   161,   163,     0,     0,   166,   136,   138,     0,     0,
     190,   187,     0,   189,     0,    28,    66,     0,   169,   164,
     165,   167,     0,     0,     0,     0,     0,    25,   168,   193,
     192,   188,   191,    26
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -138,  -138,   -70,  -138,  -138,  -138,   -48,   -80,    -7,    -4,
     -66,    -6,    43,    47,    48,   -15,   -14,  -138,   -67,   -61,
    -138,   -76,   -30,    12,  -138,   210,  -138,   -93,   -64,  -138,
     217,   198,    23,  -138,   -16,   227,    20,   -52,  -138,  -138,
      44,  -138,   -56,   -60,   -29,  -138,  -138,   -41,   -86,  -138,
     -22,  -138,   145,  -137,  -138,  -138,  -138,  -138,   273,  -138,
    -138,    92
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   107,   108,   109,   110,   258,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     201,   156,    23,    63,    39,    40,    25,    26,   178,    27,
      52,    53,    28,    29,    77,    42,    43,    57,   144,   145,
     146,   147,   180,   223,   224,   313,   314,   315,   126,   127,
     128,   129,   130,   131,   132,   133,   134,    30,    31,    32,
      65,   279
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     137,   138,   170,   155,   161,   177,   151,     3,    41,   160,
     219,    62,    24,   155,   181,   152,     9,   209,   210,    64,
      54,    12,   154,    58,    70,   241,    35,    36,   176,   183,
     125,    37,   154,   308,   181,   139,   166,    44,    45,    73,
      46,    47,    24,   140,    59,   220,    33,   173,   174,    66,
      38,    50,   181,   211,   212,   182,    51,    56,    67,    34,
      55,   154,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   177,   238,    61,   137,    37,    75,   143,   177,
      74,    71,   158,   246,   177,   162,   177,   230,   163,   250,
      55,   237,    72,   242,   164,   176,   231,   200,   245,   125,
     202,   248,   176,   293,   294,   184,   185,   186,    71,   244,
     203,   204,   309,   252,   310,   253,   249,   282,   260,   153,
     255,   179,   263,   264,   265,   330,   259,   225,   283,   181,
     187,   336,   240,    35,    36,    35,    36,   305,    37,   188,
     262,   189,   337,   270,   271,   272,   273,   205,   206,   167,
     281,   207,   208,   292,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     288,    55,   168,   289,   302,    74,   213,   214,   228,   229,
     251,   181,   295,   181,   297,   181,   299,   181,   179,   303,
     304,   332,   181,   333,   181,   179,   335,   181,   266,   267,
     179,   169,   179,   268,   269,   171,   154,   274,   275,   320,
     175,   321,   215,   323,   216,   218,   217,   226,   232,   227,
     233,   137,   312,   318,   319,   239,   243,   247,   322,   254,
     287,   154,   154,   327,   256,   261,   286,   290,   298,   143,
     137,   326,   155,   325,   291,   296,   339,   340,   341,   300,
     316,   317,   137,   329,    74,   301,   328,   334,   276,   338,
     154,   154,   342,   277,   306,   278,   307,    69,    76,   157,
      68,   285,   324,   331,   222,   137,   312,     1,     2,     3,
       4,    78,     5,    79,     6,    80,     7,     8,     9,    10,
      81,    11,    82,    12,    83,    84,    13,    85,    86,    14,
      15,    87,    16,    49,    17,    88,    18,    89,    19,    20,
      21,   280,    22,     0,    90,    91,    92,    93,    94,     0,
      95,    96,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    97,    98,     0,     0,    99,   100,   101,
     102,   103,   104,     0,     0,     0,    60,   105,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   106,     1,     2,
       3,     4,    78,     5,    79,     6,    80,     7,     8,     9,
      10,    81,    11,    82,    12,    83,    84,    13,    85,    86,
      14,    15,    87,    16,     0,    17,    88,    18,    89,    19,
      20,    21,     0,    22,     0,    90,    91,    92,    93,    94,
       0,    95,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    97,    98,     0,     0,    99,   100,
     101,   102,   103,   104,     0,     0,     0,    60,   221,     0,
       1,     2,     3,     4,     0,     5,     0,     6,   106,     7,
       8,     9,    10,     0,    11,     0,    12,     0,    84,    13,
       0,     0,    14,    15,     0,    16,     0,    17,     0,    18,
       0,    19,    20,    21,     0,    22,     0,    90,    91,    92,
      93,    94,     0,    95,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   135,    98,     0,     0,
      99,   100,   101,   102,   103,   104,     0,     1,     2,     3,
       4,     0,     5,     0,     6,     0,     7,     8,     9,    10,
     106,    11,     0,    12,     0,     0,    13,     0,     0,    14,
      15,     0,    16,     0,    17,     0,    18,     0,    19,    20,
      21,    78,    22,    79,     0,    80,     0,     0,     0,     0,
      81,     0,    82,     0,    83,    84,     0,    85,    86,     0,
       0,    87,     0,     0,     0,    88,     0,    89,     0,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    94,     0,
      95,    96,     0,     0,     0,     0,    60,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,     0,     0,     0,
       0,     0,     0,    97,    98,     0,     0,    99,   100,   101,
     102,   103,   104,     0,     0,     0,    60,     0,     0,     1,
       2,     3,     4,     0,     5,     0,     6,   106,     7,     8,
       9,    10,     0,    11,     0,    12,     0,     0,    13,     0,
       0,    14,    15,     0,    16,     0,    17,     3,    18,     0,
      19,    20,    21,     0,    22,     0,     9,     0,     0,     0,
       0,    12,     0,    84,     0,     0,     0,   148,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,    92,    93,    94,     0,    95,    96,
       3,     0,     0,     0,     0,     0,     0,     0,    60,     9,
       0,     0,     0,     0,    12,     0,    84,     0,     0,     0,
     234,   135,    98,     0,     0,    99,   149,   101,   102,   103,
     104,     0,   150,     0,     0,    90,    91,    92,    93,    94,
       0,    95,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   135,    98,     0,     0,    99,   235,
     101,   102,   103,   104,     0,   236,     2,     3,     4,     0,
       0,     0,     6,     0,     7,     8,     9,    10,     0,    11,
       0,    12,     0,    84,    13,     0,     0,     0,    15,     0,
       0,     0,    17,     0,    18,     0,    19,    20,     0,     0,
       0,     0,    90,    91,    92,    93,    94,     3,    95,    96,
       0,     0,     0,     0,     0,     0,     9,     0,     0,     0,
       0,    12,     0,    84,     0,     0,     0,     0,     0,     0,
       0,   135,    98,    84,     0,    99,   100,   101,   102,   103,
     104,     0,    90,    91,    92,    93,    94,     0,    95,    96,
       0,     0,    90,    91,    92,    93,    94,     0,    95,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   135,    98,    84,     0,    99,   100,   101,   102,   103,
     104,   135,    98,     0,     0,    99,   100,   101,   102,   103,
     104,     0,    90,    91,    92,    93,    94,     0,    95,    96,
       0,     0,     0,     0,     0,   159,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   135,    98,     0,     0,    99,   100,   101,   102,   103,
     104,     0,     1,     2,     3,     4,     0,     5,     0,     6,
       0,     7,     8,     9,    10,   106,    11,     0,    12,     0,
       0,    13,     0,    84,    14,    15,     0,    16,     0,    17,
       0,    18,     0,    19,    20,    21,     0,    22,    84,     0,
       0,     0,    90,    91,    92,    93,    94,     0,    95,    96,
       0,     0,     0,     0,     0,     0,     0,    90,    91,    92,
      93,    94,     0,    95,    96,     0,     0,     0,   141,     0,
     142,   135,    98,     0,     0,    99,   100,   101,   102,   103,
     104,   309,    84,   310,   136,   311,   135,    98,     0,     0,
      99,   100,   101,   102,   103,   104,   309,    84,   310,   136,
     343,    90,    91,    92,    93,    94,     0,    95,    96,     0,
       0,     0,     0,     0,     0,     0,    90,    91,    92,    93,
      94,     0,    95,    96,     0,     0,     0,     0,     0,     0,
     135,    98,     0,     0,    99,   100,   101,   102,   103,   104,
      84,     0,     0,   136,     0,   135,    98,     0,     0,    99,
     100,   101,   102,   103,   104,    84,     0,     0,   301,    90,
      91,    92,    93,    94,     0,    95,    96,     0,     0,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    94,     0,
      95,    96,     0,     0,     0,     0,     0,     0,   135,    98,
     257,     0,    99,   100,   101,   102,   103,   104,    84,     0,
       0,     0,     0,   135,    98,     0,     0,    99,   100,   101,
     102,   103,   104,    84,     0,     0,     0,    90,    91,    92,
      93,    94,     0,    95,    96,     0,     0,     0,     0,     0,
       0,     0,    90,    91,    92,    93,    94,     0,    95,    96,
       0,     0,     0,     0,     0,     0,   135,   165,     0,     0,
      99,   100,   101,   102,   103,   104,     0,     0,     0,     0,
       0,   135,   172,     0,     0,    99,   100,   101,   102,   103,
     104,     1,     2,     3,     4,     0,     5,     0,     6,     0,
       7,     8,     9,    10,     0,    11,     0,    12,     0,     0,
      13,     0,     0,    14,    15,     0,    16,     0,    17,     0,
      18,     0,    19,    20,    21,     0,    22,     0,    48,     0,
       0,     1,     2,     3,     4,     0,     5,     0,     6,     0,
       7,     8,     9,    10,   284,    11,     0,    12,     0,     0,
      13,     0,     0,    14,    15,     0,    16,     0,    17,     0,
      18,     0,    19,    20,    21,     0,    22,     1,     2,     3,
       4,     0,     5,     0,     6,     0,     7,     8,     9,    10,
       0,    11,     0,    12,     0,     0,    13,     0,     0,    14,
      15,     0,    16,     0,    17,     0,    18,     0,    19,    20,
      21,     0,    22,     2,     3,     4,     0,     0,     0,     6,
       0,     7,     8,     9,    10,     0,    11,     0,    12,     0,
       0,    13,     0,     0,     0,    15,     0,     0,     0,    17,
       0,    18,     0,    19,    20
};

static const yytype_int16 yycheck[] =
{
      61,    61,    88,    70,    80,    98,    67,     5,    24,    79,
      55,    41,     0,    80,    72,    67,    14,    50,    51,    41,
      36,    19,    70,    72,    92,   162,    69,    70,    98,   109,
      60,    74,    80,    91,    72,    65,    84,    25,    26,    71,
      28,    29,    30,    65,    93,    90,    69,    95,    96,    70,
      93,    82,    72,    86,    87,    93,    69,    37,    79,    82,
      37,   109,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,   165,    93,    92,   136,    74,    57,    66,   172,
      57,    72,    93,   169,   177,    70,   179,   148,    70,   175,
      67,   152,    83,   163,    69,   165,   148,    92,   168,   129,
      74,   171,   172,   240,   241,    45,    46,    47,    72,   165,
      84,    85,    79,   177,    81,   179,   172,    72,   188,    83,
     181,    98,   202,   203,   204,    92,   187,   143,    83,    72,
      70,    72,   162,    69,    70,    69,    70,    80,    74,    79,
     201,    81,    83,   209,   210,   211,   212,    75,    76,    93,
     220,    48,    49,   239,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     231,   148,    70,   234,   254,   152,    52,    53,    71,    72,
      71,    72,    71,    72,    71,    72,    71,    72,   165,    71,
      72,    71,    72,    71,    72,   172,    71,    72,   205,   206,
     177,    91,   179,   207,   208,    70,   254,   213,   214,   295,
      91,   297,    73,   299,    88,    54,    89,    71,    80,    72,
      80,   282,   282,   293,   294,    91,    93,    18,   298,    71,
      80,   279,   280,   309,    69,    69,    69,    80,    70,   227,
     301,   308,   309,   304,    80,    71,   332,   333,   334,    71,
      80,    80,   313,   313,   231,    82,    69,    37,   215,    80,
     308,   309,    93,   216,   279,   217,   280,    50,    58,    71,
      43,   227,   301,   314,   129,   336,   336,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    30,    30,    31,    32,    33,    34,    35,
      36,   219,    38,    -1,    40,    41,    42,    43,    44,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    -1,    -1,    73,    74,    75,
      76,    77,    78,    -1,    -1,    -1,    82,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    38,    -1,    40,    41,    42,    43,    44,
      -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    -1,    -1,    73,    74,
      75,    76,    77,    78,    -1,    -1,    -1,    82,    83,    -1,
       3,     4,     5,     6,    -1,     8,    -1,    10,    93,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    21,    22,
      -1,    -1,    25,    26,    -1,    28,    -1,    30,    -1,    32,
      -1,    34,    35,    36,    -1,    38,    -1,    40,    41,    42,
      43,    44,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    -1,
      73,    74,    75,    76,    77,    78,    -1,     3,     4,     5,
       6,    -1,     8,    -1,    10,    -1,    12,    13,    14,    15,
      93,    17,    -1,    19,    -1,    -1,    22,    -1,    -1,    25,
      26,    -1,    28,    -1,    30,    -1,    32,    -1,    34,    35,
      36,     7,    38,     9,    -1,    11,    -1,    -1,    -1,    -1,
      16,    -1,    18,    -1,    20,    21,    -1,    23,    24,    -1,
      -1,    27,    -1,    -1,    -1,    31,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,    -1,
      46,    47,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    -1,    -1,    73,    74,    75,
      76,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,     3,
       4,     5,     6,    -1,     8,    -1,    10,    93,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    -1,
      -1,    25,    26,    -1,    28,    -1,    30,     5,    32,    -1,
      34,    35,    36,    -1,    38,    -1,    14,    -1,    -1,    -1,
      -1,    19,    -1,    21,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    -1,    46,    47,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    14,
      -1,    -1,    -1,    -1,    19,    -1,    21,    -1,    -1,    -1,
      25,    69,    70,    -1,    -1,    73,    74,    75,    76,    77,
      78,    -1,    80,    -1,    -1,    40,    41,    42,    43,    44,
      -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    -1,    -1,    73,    74,
      75,    76,    77,    78,    -1,    80,     4,     5,     6,    -1,
      -1,    -1,    10,    -1,    12,    13,    14,    15,    -1,    17,
      -1,    19,    -1,    21,    22,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    30,    -1,    32,    -1,    34,    35,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,     5,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    21,    -1,    73,    74,    75,    76,    77,
      78,    -1,    40,    41,    42,    43,    44,    -1,    46,    47,
      -1,    -1,    40,    41,    42,    43,    44,    -1,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    21,    -1,    73,    74,    75,    76,    77,
      78,    69,    70,    -1,    -1,    73,    74,    75,    76,    77,
      78,    -1,    40,    41,    42,    43,    44,    -1,    46,    47,
      -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    -1,    -1,    73,    74,    75,    76,    77,
      78,    -1,     3,     4,     5,     6,    -1,     8,    -1,    10,
      -1,    12,    13,    14,    15,    93,    17,    -1,    19,    -1,
      -1,    22,    -1,    21,    25,    26,    -1,    28,    -1,    30,
      -1,    32,    -1,    34,    35,    36,    -1,    38,    21,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    -1,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    -1,    46,    47,    -1,    -1,    -1,    69,    -1,
      71,    69,    70,    -1,    -1,    73,    74,    75,    76,    77,
      78,    79,    21,    81,    82,    83,    69,    70,    -1,    -1,
      73,    74,    75,    76,    77,    78,    79,    21,    81,    82,
      83,    40,    41,    42,    43,    44,    -1,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    -1,    -1,    73,    74,    75,    76,    77,    78,
      21,    -1,    -1,    82,    -1,    69,    70,    -1,    -1,    73,
      74,    75,    76,    77,    78,    21,    -1,    -1,    82,    40,
      41,    42,    43,    44,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    -1,    73,    74,    75,    76,    77,    78,    21,    -1,
      -1,    -1,    -1,    69,    70,    -1,    -1,    73,    74,    75,
      76,    77,    78,    21,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    -1,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    -1,
      73,    74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      -1,    69,    70,    -1,    -1,    73,    74,    75,    76,    77,
      78,     3,     4,     5,     6,    -1,     8,    -1,    10,    -1,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      22,    -1,    -1,    25,    26,    -1,    28,    -1,    30,    -1,
      32,    -1,    34,    35,    36,    -1,    38,    -1,     0,    -1,
      -1,     3,     4,     5,     6,    -1,     8,    -1,    10,    -1,
      12,    13,    14,    15,    56,    17,    -1,    19,    -1,    -1,
      22,    -1,    -1,    25,    26,    -1,    28,    -1,    30,    -1,
      32,    -1,    34,    35,    36,    -1,    38,     3,     4,     5,
       6,    -1,     8,    -1,    10,    -1,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    -1,    -1,    25,
      26,    -1,    28,    -1,    30,    -1,    32,    -1,    34,    35,
      36,    -1,    38,     4,     5,     6,    -1,    -1,    -1,    10,
      -1,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,
      -1,    32,    -1,    34,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     8,    10,    12,    13,    14,
      15,    17,    19,    22,    25,    26,    28,    30,    32,    34,
      35,    36,    38,   116,   117,   120,   121,   123,   126,   127,
     151,   152,   153,    69,    82,    69,    70,    74,    93,   118,
     119,   128,   129,   130,   117,   117,   117,   117,     0,   152,
      82,    69,   124,   125,   128,   126,   130,   131,    72,    93,
      82,    92,   116,   117,   144,   154,    70,    79,   129,   124,
      92,    72,    83,    71,   126,   130,   119,   128,     7,     9,
      11,    16,    18,    20,    21,    23,    24,    27,    31,    33,
      40,    41,    42,    43,    44,    46,    47,    69,    70,    73,
      74,    75,    76,    77,    78,    83,    93,    95,    96,    97,
      98,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   116,   142,   143,   144,   145,
     146,   147,   148,   149,   150,    69,    82,   113,   137,   116,
     144,    69,    71,   117,   132,   133,   134,   135,    25,    74,
      80,   113,   131,    83,   100,   112,   115,   125,    93,    93,
      96,   115,    70,    70,    69,    70,   100,    93,    70,    91,
     142,    70,    70,   100,   100,    91,    96,   121,   122,   126,
     136,    72,    93,   101,    45,    46,    47,    70,    79,    81,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      92,   114,    74,    84,    85,    75,    76,    48,    49,    50,
      51,    86,    87,    52,    53,    73,    88,    89,    54,    55,
      90,    83,   146,   137,   138,   128,    71,    72,    71,    72,
     113,   131,    80,    80,    25,    74,    80,   113,    93,    91,
     116,   147,    96,    93,   136,    96,   142,    18,    96,   136,
     142,    71,   122,   122,    71,   113,    69,    71,    99,   113,
      96,    69,   113,   101,   101,   101,   102,   102,   103,   103,
     104,   104,   104,   104,   105,   105,   106,   107,   108,   155,
     155,    96,    72,    83,    56,   134,    69,    80,   113,   113,
      80,    80,   142,   147,   147,    71,    71,    71,    70,    71,
      71,    82,   101,    71,    72,    80,   109,   110,    91,    79,
      81,    83,   137,   139,   140,   141,    80,    80,    96,    96,
     142,   142,    96,   142,   138,   113,   112,   115,    69,   137,
      92,   141,    71,    71,    37,    71,    72,    83,    80,   142,
     142,   142,    93,    83
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    95,    95,    95,    95,    95,    95,    96,
      96,    97,    97,    97,    97,    97,    97,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    99,    99,   100,
     100,   100,   100,   100,   100,   101,   101,   102,   102,   102,
     102,   103,   103,   103,   104,   104,   104,   105,   105,   105,
     105,   105,   106,   106,   106,   107,   107,   108,   108,   109,
     109,   110,   110,   111,   111,   112,   112,   113,   113,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
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
     151,   152,   152,   153,   153,   154,   154,   155
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       4,     3,     3,     2,     2,     6,     7,     1,     3,     1,
       2,     2,     2,     2,     4,     1,     4,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     4,     1,     4,     1,     5,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
       2,     1,     1,     4,     3,     1,     2,     0
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
#line 120 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyvsp[0].idAttr).loc = localST->lookup((yyvsp[0].idAttr).varName);//Check in local symboltable
			if(!((yyvsp[0].idAttr).loc))//If not present in local symbol table check for global symbol table
			{
				(yyvsp[0].idAttr).loc = globalST->lookup((yyvsp[0].idAttr).varName);
			}
			(yyval.expAttr).loc = (yyvsp[0].idAttr).loc;
			(yyval.expAttr).Etype = ((yyvsp[0].idAttr).loc)->srType;
			(yyval.expAttr).Earray = (yyval.expAttr).loc;
			(yyval.expAttr).Eloc1 = NULL;
		}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 132 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.expAttr).val.InitIntVal = (yyvsp[0].intval);//Assign the value
			(yyval.expAttr).Etype = create_tNode(INT);//Create a new node of int type
			(yyval.expAttr).loc = localST->gentemp(INT);//Generate a temporary in the local symbol table
			char *Arg1 = new char[10];
			sprintf(Arg1,"%d",(yyvsp[0].intval));
			char *Res = strdup(((yyval.expAttr).loc)->srName);
			quadArrayRow tempQRow( Arg1, 0, Res, ASSIGN, 0, 0, (yyval.expAttr).loc);//Generate a new temprary quadArrayRow
			globalQArray->emit(tempQRow);//Add the generated row to the global quad array
		}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 143 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.expAttr).val.InitDoubleVal = (yyvsp[0].floatval);//Assign the value
			(yyval.expAttr).Etype = create_tNode(DOUBLE);
			(yyval.expAttr).loc = localST->gentemp(DOUBLE);
			char *Arg1 = new char[10];
			sprintf(Arg1,"%lf",(yyvsp[0].floatval));
			char *Res = strdup(((yyval.expAttr).loc)->srName);
			quadArrayRow tempQRow( Arg1, 0, Res, ASSIGN, 0, 0, (yyval.expAttr).loc);//Generate a new temprary quadArrayRow
			globalQArray->emit(tempQRow);//Add the generated row to the global quad array
		}
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 154 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.expAttr).val.InitCharVal = (yyvsp[0].charval);//Assign the value
			(yyval.expAttr).Etype = create_tNode(CHAR);
			(yyval.expAttr).loc = localST->gentemp(CHAR);
			char *Arg1 = new char[10];
			sprintf(Arg1,"%c",(yyvsp[0].charval));
			char *Res = strdup(((yyval.expAttr).loc)->srName);
			quadArrayRow tempQRow( Arg1, 0, Res, ASSIGN, 0, 0, (yyval.expAttr).loc);//Generate a new temprary quadArrayRow
			globalQArray->emit(tempQRow);//Add the generated row to the global quad array
		}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 167 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.expAttr) = (yyvsp[-1].expAttr);//Assigns all the attributes of expression inside the braces to $$
		}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 174 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.expAttr) = (yyvsp[0].expAttr);// Simple assignment
		}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 178 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			//Skip for time-being.
		}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 186 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.unaryOpAttr) = U_ADDR;//ampersand operator
		}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 190 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.unaryOpAttr) = U_STAR;//star operator
		}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 194 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.unaryOpAttr) = U_PLUS;//Unary plus
		}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 198 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.unaryOpAttr) = U_MINUS;//Unary ,inus operator
		}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 202 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.unaryOpAttr) = U_NEGATION;//Unary negate operator
		}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 206 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.unaryOpAttr) = BW_U_NOT;//Unary not
		}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 213 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.expAttr) = (yyvsp[0].expAttr);//Simple assignment
		}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 217 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.expAttr).Earray = (yyvsp[-3].expAttr).Earray;//Assign expresion array
			(yyval.expAttr).Etype = ((yyvsp[-3].expAttr).Etype)->right;//Take care of type
			if((yyvsp[-3].expAttr).Eloc1)
			{
				symbolTableRow *tempsRow = localST->gentemp(INT);
				(yyval.expAttr).Eloc1 = localST->gentemp(INT);
				char *Arg1 = strdup(((yyvsp[-1].expAttr).loc)->srName);
				char *Arg2 = new char[10];
				sprintf(Arg2,"%d",calculateWidth((yyval.expAttr).Etype));
				char *Res = strdup(tempsRow->srName);
				quadArrayRow qRow1(Arg1, Arg2, Res, INTO, (yyvsp[-1].expAttr).loc, 0, tempsRow);
				globalQArray->emit(qRow1);
				Arg1 = strdup(((yyvsp[-3].expAttr).Eloc1)->srName);
				Arg2 = strdup(tempsRow->srName);
				Res = strdup(((yyval.expAttr).Eloc1)->srName);
				quadArrayRow qRow2(Arg1, Arg2, Res, PLUS, (yyvsp[-3].expAttr).Eloc1, tempsRow, (yyval.expAttr).Eloc1);
				globalQArray->emit(qRow2);
			}
			else
			{
				(yyval.expAttr).Eloc1 = localST->gentemp(INT);
	  		char *Arg1 = strdup(((yyvsp[-1].expAttr).loc)->srName);
	  		char *Arg2 = new char[10];
	  		sprintf(Arg2,"%d",calculateWidth(((yyvsp[-3].expAttr).Etype)->right));
	  		char *Res = strdup(((yyval.expAttr).Eloc1)->srName);
	  		quadArrayRow qRow3(Arg1,Arg2,Res,INTO,(yyvsp[-1].expAttr).loc,0,(yyval.expAttr).Eloc1);
	  		globalQArray->emit(qRow3);
			}
		}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 248 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			symbolTableRow *tempsRow = globalST->lookup(((yyvsp[-2].expAttr).loc)->srName);//lookup symbol table for variable name
			(yyval.expAttr).loc = localST->gentemp((((tempsRow->srNestedTable)->stTabletop)->srType)->tNodeType);//Go to nestd table take the first entry and find the type of that and create a temporary of that type in local symbol table
			//Add into local symbol table and set E.loc
			char *Arg1 = strdup(((yyvsp[-2].expAttr).loc)->srName);
			char *Res = strdup(((yyval.expAttr).loc)->srName);
			quadArrayRow qRow(Arg1, 0, Res, call, (yyvsp[-2].expAttr).loc, 0, (yyval.expAttr).loc);//Create a quad array row
			globalQArray->emit(qRow);//Emit into global quad array
			(yyval.expAttr).Etype = ((yyval.expAttr).loc)->srType;//Take care of type
		}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 259 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			pNode *temppNode = (yyvsp[-1].params);
			int numParams = 0;
			while(temppNode)
			{
				char *Arg1 = strdup((temppNode->parameter)->srName);
				quadArrayRow qRow(Arg1,0,0,PARAM,temppNode->parameter,0,0);//Create a quadarray row
				globalQArray->emit(qRow);//emit into quad arrayrow
				numParams++;//Count number of parameters
				temppNode = temppNode->next;
			}
			symbolTableRow *sRow = globalST->lookup((yyvsp[-3].expAttr).loc->srName);//Lookup the symbol table to find the existance of the function name
			(yyval.expAttr).loc = localST->gentemp(((((sRow->srNestedTable)->stTabletop)+numParams)->srType)->tNodeType);//Go to nestd table take the first entry and find the type of that and create a temporary of that type in local symbol table
			//Add into local symbol table and set E.loc
			char *Res = strdup(((yyval.expAttr).loc)->srName);
	  	char *Arg1 = strdup(((yyvsp[-3].expAttr).loc)->srName);
	  	char *Arg2 = new char[10];
	  	sprintf(Arg2,"%d",numParams);
	  	quadArrayRow qRow(Arg1,Arg2,Res,call,(yyvsp[-3].expAttr).loc,0,(yyval.expAttr).loc);//Create a quad array row
	  	globalQArray->emit(qRow);//Emit into global quad 
	  	(yyval.expAttr).Etype = ((yyval.expAttr).loc)->srType;//Take care of type
		}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 282 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			//To be skipped
		}
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 286 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			//To be skipped
		}
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 290 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			/* assignment has to be done before incrementing */
			(yyval.expAttr).loc = localST->gentemp(((yyvsp[-1].expAttr).Etype)->tNodeType);//generate temporary of type $1
			char *Arg1 = strdup(((yyvsp[-1].expAttr).loc)->srName);
			char *Res = strdup(((yyval.expAttr).loc)->srName);
			quadArrayRow qRow1(Arg1, 0, Res, ASSIGN, (yyvsp[-1].expAttr).loc, 0, (yyval.expAttr).loc);//generate quad for assignment action
			globalQArray->emit(qRow1);
			/* increment now */
			Arg1 = strdup(((yyvsp[-1].expAttr).loc)->srName);
			char *Arg2 = new char[10];
			sprintf(Arg2,"1");
			Res = strdup(((yyval.expAttr).loc)->srName);
			quadArrayRow qRow2(Arg1, Arg2, Res, PLUS, (yyvsp[-1].expAttr).loc, 0, (yyval.expAttr).loc);//generate quad for increment action
			globalQArray->emit(qRow2);
			(yyval.expAttr).Etype = (yyvsp[-1].expAttr).Etype;
		}
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 307 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			/* assignment has to be done before decrementing */
			(yyval.expAttr).loc = localST->gentemp(((yyvsp[-1].expAttr).Etype)->tNodeType);//generate temporary of type $1
			char *Arg1 = strdup(((yyvsp[-1].expAttr).loc)->srName);
			char *Res = strdup(((yyval.expAttr).loc)->srName);
			quadArrayRow qRow1(Arg1, 0, Res, ASSIGN, (yyvsp[-1].expAttr).loc, 0, (yyval.expAttr).loc);//generate quad for assignment action
			globalQArray->emit(qRow1);//Add to global quad array
			/* decrement now */
			Arg1 = strdup(((yyvsp[-1].expAttr).loc)->srName);
			char *Arg2 = new char[10];
			sprintf(Arg2,"1");
			Res = strdup(((yyval.expAttr).loc)->srName);
			quadArrayRow qRow2(Arg1, Arg2, Res, PLUS, (yyvsp[-1].expAttr).loc, 0, (yyval.expAttr).loc);//generate quad decrementing action
			globalQArray->emit(qRow2);
			(yyval.expAttr).Etype = (yyvsp[-1].expAttr).Etype;
		}
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 324 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			//To be skipped
		}
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 328 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			//To be skipped
		}
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 335 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			pNode *temppNode = new pNode;
			temppNode->parameter = (yyvsp[0].expAttr).loc;
			temppNode->next = NULL;
			(yyval.params) = temppNode;
		}
#line 2140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 342 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			pNode *temppNode = new pNode;
			temppNode->parameter = (yyvsp[0].expAttr).loc;
			temppNode->next = NULL;
			if((yyvsp[-2].params) == NULL)
			{
				(yyval.params) = temppNode;
			}
			else if(temppNode == NULL)
			{
				(yyval.params) = (yyvsp[-2].params);
			}
			else
			{
				pNode *temppNode1 = (yyvsp[-2].params);
				while(temppNode1->next)
				{
					temppNode1 = temppNode1->next;
				}
				temppNode1->next = temppNode;
				(yyval.params) = (yyvsp[-2].params);
			}
		}
#line 2168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 369 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.expAttr) = (yyvsp[0].expAttr);
	  	if((yyvsp[0].expAttr).Eloc1)
	  	{
				(yyval.expAttr).loc = localST->gentemp(((yyvsp[0].expAttr).Etype)->tNodeType);
				char *Arg1 = strdup(((yyvsp[0].expAttr).Earray)->srName);
				char *Arg2 = strdup(((yyvsp[0].expAttr).Eloc1)->srName);
				char *Res = strdup(((yyval.expAttr).loc)->srName);
				quadArrayRow qRow(Arg1,Arg2,Res,EQ_BRACKET,(yyvsp[0].expAttr).loc,(yyvsp[0].expAttr).Eloc1,(yyval.expAttr).loc);
				globalQArray->emit(qRow);
			}
		}
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 382 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			/* First Increment */
			(yyval.expAttr).loc = localST->gentemp(((yyvsp[0].expAttr).Etype)->tNodeType);
	  	char *Arg1 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  	char *Arg2 = new char[10];
	  	sprintf(Arg2,"1");
	  	char *Res = strdup(((yyvsp[0].expAttr).loc)->srName);
	  	quadArrayRow y(Arg1,Arg2,Res,PLUS,(yyvsp[0].expAttr).loc,0,(yyvsp[0].expAttr).loc);
	  	globalQArray->emit(y);
	  	/* Now Assign */
	  	Arg1 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  	Res = strdup(((yyval.expAttr).loc)->srName);
	  	quadArrayRow x(Arg1,0,Res,ASSIGN,(yyvsp[0].expAttr).loc,0,(yyval.expAttr).loc);
	  	globalQArray->emit(x);
	  	(yyval.expAttr).Etype = (yyvsp[0].expAttr).Etype;
		}
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 399 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			/* first decrement */
			(yyval.expAttr).loc = localST->gentemp(((yyvsp[0].expAttr).Etype)->tNodeType);
	  	char *Arg1 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  	char *Arg2 = new char[10];
	  	sprintf(Arg2,"1");
	  	char *Res = strdup(((yyvsp[0].expAttr).loc)->srName);
	  	quadArrayRow y(Arg1,Arg2,Res,MINUS,(yyvsp[0].expAttr).loc,0,(yyvsp[0].expAttr).loc);
	  	globalQArray->emit(y);
	  	/* Now assign */
	  	Arg1 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  	Res = strdup(((yyval.expAttr).loc)->srName);
	  	quadArrayRow x(Arg1,0,Res,ASSIGN,(yyvsp[0].expAttr).loc,0,(yyval.expAttr).loc);
	  	globalQArray->emit(x);
	  	(yyval.expAttr).Etype = (yyvsp[0].expAttr).Etype;
		}
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 416 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.expAttr).loc = localST->gentemp(((yyvsp[0].expAttr).Etype)->tNodeType);
	  	char *Arg1 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  	char *Res = strdup(((yyval.expAttr).loc)->srName);
	  	quadArrayRow x(Arg1,0,Res,(yyvsp[-1].unaryOpAttr),(yyvsp[0].expAttr).loc,0,(yyval.expAttr).loc);
	  	globalQArray->emit(x);
	  	(yyval.expAttr).Etype = (yyvsp[0].expAttr).Etype;
		}
#line 2240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 425 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			//Skip
		}
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 429 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			//Skip
		}
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 436 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.expAttr) = (yyvsp[0].expAttr);
		}
#line 2264 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 440 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			//To be skipped
		}
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 447 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.expAttr) = (yyvsp[0].expAttr);
		}
#line 2280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 451 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			if(typecheck((yyvsp[-2].expAttr).Etype, (yyvsp[0].expAttr).Etype))
			{
	  		(yyval.expAttr).loc = localST->gentemp(((yyvsp[-2].expAttr).Etype)->tNodeType);
	  		char *Arg1 = strdup(((yyvsp[-2].expAttr).loc)->srName);
	  		char *Arg2 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  		char *Res = strdup(((yyval.expAttr).loc)->srName);
	  		quadArrayRow qRow(Arg1,Arg2,Res,INTO,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		globalQArray->emit(qRow);
	  		(yyval.expAttr).Etype = (yyvsp[-2].expAttr).Etype;
	  	}
	  	else
	  	{
	  		symbolTableRow *tempRow1, *tempRow2;
	  		if(((yyvsp[-2].expAttr).Etype)->tNodeType == INT && ((yyvsp[0].expAttr).Etype)->tNodeType == DOUBLE){
	  			tempRow1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",((yyvsp[-2].expAttr).loc)->srName);
	  			char *Res = strdup(tempRow1->srName);
	  			quadArrayRow x(Arg1,0,Res,ASSIGN,(yyvsp[-2].expAttr).loc,0,tempRow1);
	  			globalQArray->emit(x);
	  			tempRow2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(tempRow1->srName);
	  			char *Arg2 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  			Res = strdup(tempRow2->srName);
	  			quadArrayRow y(Arg1,Arg2,Res,INTO,tempRow1,(yyvsp[0].expAttr).loc,tempRow2);
	  			globalQArray->emit(y);
	  			(yyval.expAttr).Etype = (yyvsp[0].expAttr).Etype;
	  		}
	  		else if(((yyvsp[-2].expAttr).Etype)->tNodeType == INT && ((yyvsp[0].expAttr).Etype)->tNodeType == CHAR){
	  			tempRow1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",((yyvsp[0].expAttr).loc)->srName);
	  			char *Res = strdup(tempRow1->srName);
	  			quadArrayRow x(Arg1,0,Res,ASSIGN,(yyvsp[0].expAttr).loc,0,tempRow1);
	  			globalQArray->emit(x);
	  			tempRow2 = localST->gentemp(INT);
	  			Arg1 = strdup(((yyvsp[-2].expAttr).loc)->srName);
	  			char *Arg2 = strdup(tempRow1->srName);
	  			Res = strdup(tempRow2->srName);
	  			quadArrayRow y(Arg1,Arg2,Res,INTO,(yyvsp[-2].expAttr).loc,tempRow1,tempRow2);
	  			globalQArray->emit(y);
	  			(yyval.expAttr).Etype = (yyvsp[-2].expAttr).Etype;
	  		}
	  		else if(((yyvsp[-2].expAttr).Etype)->tNodeType == DOUBLE && ((yyvsp[0].expAttr).Etype)->tNodeType == INT){
	  			tempRow1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",((yyvsp[0].expAttr).loc)->srName);
	  			char *Res = strdup(tempRow1->srName);
	  			quadArrayRow x(Arg1,0,Res,ASSIGN,(yyvsp[0].expAttr).loc,0,tempRow1);
	  			globalQArray->emit(x);
	  			tempRow2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(((yyvsp[-2].expAttr).loc)->srName);
	  			char *Arg2 = strdup(tempRow1->srName);
	  			Res = strdup(tempRow2->srName);
	  			quadArrayRow y(Arg1,Arg2,Res,INTO,(yyvsp[-2].expAttr).loc,tempRow1,tempRow2);
	  			globalQArray->emit(y);
	  			(yyval.expAttr).Etype = (yyvsp[-2].expAttr).Etype;
	  		}
	  		else if(((yyvsp[-2].expAttr).Etype)->tNodeType == CHAR && ((yyvsp[0].expAttr).Etype)->tNodeType == INT){
	  			tempRow1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",((yyvsp[-2].expAttr).loc)->srName);
	  			char *Res = strdup(tempRow1->srName);
	  			quadArrayRow x(Arg1,0,Res,ASSIGN,(yyvsp[-2].expAttr).loc,0,tempRow1);
	  			globalQArray->emit(x);
	  			tempRow2 = localST->gentemp(INT);
	  			Arg1 = strdup(tempRow1->srName);
	  			char *Arg2 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  			Res = strdup(tempRow2->srName);
	  			quadArrayRow y(Arg1,Arg2,Res,INTO,tempRow1,(yyvsp[0].expAttr).loc,tempRow2);
	  			globalQArray->emit(y);
	  			(yyval.expAttr).Etype = (yyvsp[0].expAttr).Etype;
	  		}
	  		(yyval.expAttr).loc = tempRow2;
	  	}
		}
#line 2362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 529 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			if(typecheck((yyvsp[-2].expAttr).Etype, (yyvsp[0].expAttr).Etype)){
	  		(yyval.expAttr).loc = localST->gentemp(((yyvsp[-2].expAttr).Etype)->tNodeType);
	  		char *Arg1 = strdup(((yyvsp[-2].expAttr).loc)->srName);
	  		char *Arg2 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  		char *Res = strdup(((yyval.expAttr).loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,Res,DIV,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		globalQArray->emit(x);
	  		(yyval.expAttr).Etype = (yyvsp[-2].expAttr).Etype;
	  	}
	  	else{
	  		symbolTableRow *tempRow1, *tempRow2;
	  		if(((yyvsp[-2].expAttr).Etype)->tNodeType == INT && ((yyvsp[0].expAttr).Etype)->tNodeType == DOUBLE){
	  			tempRow1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",((yyvsp[-2].expAttr).loc)->srName);
	  			char *Res = strdup(tempRow1->srName);
	  			quadArrayRow x(Arg1,0,Res,ASSIGN,(yyvsp[-2].expAttr).loc,0,tempRow1);
	  			globalQArray->emit(x);
	  			tempRow2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(tempRow1->srName);
	  			char *Arg2 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  			Res = strdup(tempRow2->srName);
	  			quadArrayRow y(Arg1,Arg2,Res,DIV,tempRow1,(yyvsp[0].expAttr).loc,tempRow2);
	  			globalQArray->emit(y);
	  			(yyval.expAttr).Etype = (yyvsp[0].expAttr).Etype;
	  		}
	  		else if(((yyvsp[-2].expAttr).Etype)->tNodeType == INT && ((yyvsp[0].expAttr).Etype)->tNodeType == CHAR){
	  			tempRow1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",((yyvsp[0].expAttr).loc)->srName);
	  			char *Res = strdup(tempRow1->srName);
	  			quadArrayRow x(Arg1,0,Res,ASSIGN,(yyvsp[0].expAttr).loc,0,tempRow1);
	  			globalQArray->emit(x);
	  			tempRow2 = localST->gentemp(INT);
	  			Arg1 = strdup(((yyvsp[-2].expAttr).loc)->srName);
	  			char *Arg2 = strdup(tempRow1->srName);
	  			Res = strdup(tempRow2->srName);
	  			quadArrayRow y(Arg1,Arg2,Res,DIV,(yyvsp[-2].expAttr).loc,tempRow1,tempRow2);
	  			globalQArray->emit(y);
	  			(yyval.expAttr).Etype = (yyvsp[-2].expAttr).Etype;
	  		}
	  		else if(((yyvsp[-2].expAttr).Etype)->tNodeType == DOUBLE && ((yyvsp[0].expAttr).Etype)->tNodeType == INT){
	  			tempRow1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",((yyvsp[0].expAttr).loc)->srName);
	  			char *Res = strdup(tempRow1->srName);
	  			quadArrayRow x(Arg1,0,Res,ASSIGN,(yyvsp[0].expAttr).loc,0,tempRow1);
	  			globalQArray->emit(x);
	  			tempRow2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(((yyvsp[-2].expAttr).loc)->srName);
	  			char *Arg2 = strdup(tempRow1->srName);
	  			Res = strdup(tempRow2->srName);
	  			quadArrayRow y(Arg1,Arg2,Res,DIV,(yyvsp[-2].expAttr).loc,tempRow1,tempRow2);
	  			globalQArray->emit(y);
	  			(yyval.expAttr).Etype = (yyvsp[-2].expAttr).Etype;
	  		}
	  		else if(((yyvsp[-2].expAttr).Etype)->tNodeType == CHAR && ((yyvsp[0].expAttr).Etype)->tNodeType == INT){
	  			tempRow1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",((yyvsp[-2].expAttr).loc)->srName);
	  			char *Res = strdup(tempRow1->srName);
	  			quadArrayRow x(Arg1,0,Res,ASSIGN,(yyvsp[-2].expAttr).loc,0,tempRow1);
	  			globalQArray->emit(x);
	  			tempRow2 = localST->gentemp(INT);
	  			Arg1 = strdup(tempRow1->srName);
	  			char *Arg2 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  			Res = strdup(tempRow2->srName);
	  			quadArrayRow y(Arg1,Arg2,Res,DIV,tempRow1,(yyvsp[0].expAttr).loc,tempRow2);
	  			globalQArray->emit(y);
	  			(yyval.expAttr).Etype = (yyvsp[0].expAttr).Etype;
	  		}
	  		(yyval.expAttr).loc = tempRow2;
	  	}
		}
#line 2442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 605 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			if(typecheck((yyvsp[-2].expAttr).Etype, (yyvsp[0].expAttr).Etype)){
	  		(yyval.expAttr).loc = localST->gentemp(((yyvsp[-2].expAttr).Etype)->tNodeType);
	  		char *Arg1 = strdup(((yyvsp[-2].expAttr).loc)->srName);
	  		char *Arg2 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  		char *Res = strdup(((yyval.expAttr).loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,Res,PERCENT,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		globalQArray->emit(x);
	  		(yyval.expAttr).Etype = (yyvsp[-2].expAttr).Etype;
	  	}
	  	else{
	  		symbolTableRow *tempRow1, *tempRow2;
	  		if(((yyvsp[-2].expAttr).Etype)->tNodeType == INT && ((yyvsp[0].expAttr).Etype)->tNodeType == DOUBLE){
	  			tempRow1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",((yyvsp[-2].expAttr).loc)->srName);
	  			char *Res = strdup(tempRow1->srName);
	  			quadArrayRow x(Arg1,0,Res,ASSIGN,(yyvsp[-2].expAttr).loc,0,tempRow1);
	  			globalQArray->emit(x);
	  			tempRow2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(tempRow1->srName);
	  			char *Arg2 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  			Res = strdup(tempRow2->srName);
	  			quadArrayRow y(Arg1,Arg2,Res,PERCENT,tempRow1,(yyvsp[0].expAttr).loc,tempRow2);
	  			globalQArray->emit(y);
	  			(yyval.expAttr).Etype = (yyvsp[0].expAttr).Etype;
	  		}
	  		else if(((yyvsp[-2].expAttr).Etype)->tNodeType == INT && ((yyvsp[0].expAttr).Etype)->tNodeType == CHAR){
	  			tempRow1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",((yyvsp[0].expAttr).loc)->srName);
	  			char *Res = strdup(tempRow1->srName);
	  			quadArrayRow x(Arg1,0,Res,ASSIGN,(yyvsp[0].expAttr).loc,0,tempRow1);
	  			globalQArray->emit(x);
	  			tempRow2 = localST->gentemp(INT);
	  			Arg1 = strdup(((yyvsp[-2].expAttr).loc)->srName);
	  			char *Arg2 = strdup(tempRow1->srName);
	  			Res = strdup(tempRow2->srName);
	  			quadArrayRow y(Arg1,Arg2,Res,PERCENT,(yyvsp[-2].expAttr).loc,tempRow1,tempRow2);
	  			globalQArray->emit(y);
	  			(yyval.expAttr).Etype = (yyvsp[-2].expAttr).Etype;
	  		}
	  		else if(((yyvsp[-2].expAttr).Etype)->tNodeType == DOUBLE && ((yyvsp[0].expAttr).Etype)->tNodeType == INT){
	  			tempRow1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",((yyvsp[0].expAttr).loc)->srName);
	  			char *Res = strdup(tempRow1->srName);
	  			quadArrayRow x(Arg1,0,Res,ASSIGN,(yyvsp[0].expAttr).loc,0,tempRow1);
	  			globalQArray->emit(x);
	  			tempRow2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(((yyvsp[-2].expAttr).loc)->srName);
	  			char *Arg2 = strdup(tempRow1->srName);
	  			Res = strdup(tempRow2->srName);
	  			quadArrayRow y(Arg1,Arg2,Res,PERCENT,(yyvsp[-2].expAttr).loc,tempRow1,tempRow2);
	  			globalQArray->emit(y);
	  			(yyval.expAttr).Etype = (yyvsp[-2].expAttr).Etype;
	  		}
	  		else if(((yyvsp[-2].expAttr).Etype)->tNodeType == CHAR && ((yyvsp[0].expAttr).Etype)->tNodeType == INT){
	  			tempRow1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",((yyvsp[-2].expAttr).loc)->srName);
	  			char *Res = strdup(tempRow1->srName);
	  			quadArrayRow x(Arg1,0,Res,ASSIGN,(yyvsp[-2].expAttr).loc,0,tempRow1);
	  			globalQArray->emit(x);
	  			tempRow2 = localST->gentemp(INT);
	  			Arg1 = strdup(tempRow1->srName);
	  			char *Arg2 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  			Res = strdup(tempRow2->srName);
	  			quadArrayRow y(Arg1,Arg2,Res,PERCENT,tempRow1,(yyvsp[0].expAttr).loc,tempRow2);
	  			globalQArray->emit(y);
	  			(yyval.expAttr).Etype = (yyvsp[0].expAttr).Etype;
	  		}
	  		(yyval.expAttr).loc = tempRow2;
	  	}
		}
#line 2522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 684 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.expAttr) = (yyvsp[0].expAttr);//Simple assignment for multiplication expression
		}
#line 2530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 688 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			if(typecheck((yyvsp[-2].expAttr).Etype, (yyvsp[0].expAttr).Etype)){
	  		(yyval.expAttr).loc = localST->gentemp(((yyvsp[-2].expAttr).Etype)->tNodeType);
	  		char *Arg1 = strdup(((yyvsp[-2].expAttr).loc)->srName);
	  		char *Arg2 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  		char *res = strdup(((yyval.expAttr).loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,PLUS,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		globalQArray->emit(x);
	  		(yyval.expAttr).Etype = (yyvsp[-2].expAttr).Etype;
	  	}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		if(((yyvsp[-2].expAttr).Etype)->tNodeType == INT && ((yyvsp[0].expAttr).Etype)->tNodeType == DOUBLE){
	  			temp1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",((yyvsp[-2].expAttr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[-2].expAttr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(temp1->srName);
	  			char *Arg2 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,PLUS,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			globalQArray->emit(y);
	  			(yyval.expAttr).Etype = (yyvsp[0].expAttr).Etype;
	  		}
	  		else if(((yyvsp[-2].expAttr).Etype)->tNodeType == INT && ((yyvsp[0].expAttr).Etype)->tNodeType == CHAR){
	  			temp1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",((yyvsp[0].expAttr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[0].expAttr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(INT);
	  			Arg1 = strdup(((yyvsp[-2].expAttr).loc)->srName);
	  			char *Arg2 = strdup(temp1->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,PLUS,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			globalQArray->emit(y);
	  			(yyval.expAttr).Etype = (yyvsp[-2].expAttr).Etype;
	  		}
	  		else if(((yyvsp[-2].expAttr).Etype)->tNodeType == DOUBLE && ((yyvsp[0].expAttr).Etype)->tNodeType == INT){
	  			temp1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",((yyvsp[0].expAttr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[0].expAttr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(((yyvsp[-2].expAttr).loc)->srName);
	  			char *Arg2 = strdup(temp1->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,PLUS,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			globalQArray->emit(y);
	  			(yyval.expAttr).Etype = (yyvsp[-2].expAttr).Etype;
	  		}
	  		else if(((yyvsp[-2].expAttr).Etype)->tNodeType == CHAR && ((yyvsp[0].expAttr).Etype)->tNodeType == INT){
	  			temp1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",((yyvsp[-2].expAttr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[-2].expAttr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(INT);
	  			Arg1 = strdup(temp1->srName);
	  			char *Arg2 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,PLUS,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			globalQArray->emit(y);
	  			(yyval.expAttr).Etype = (yyvsp[0].expAttr).Etype;
	  		}
	  		(yyval.expAttr).loc = temp2;
	  	}
		}
#line 2610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 764 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			if(typecheck((yyvsp[-2].expAttr).Etype, (yyvsp[0].expAttr).Etype)){
	  		(yyval.expAttr).loc = localST->gentemp(((yyvsp[-2].expAttr).Etype)->tNodeType);
	  		char *Arg1 = strdup(((yyvsp[-2].expAttr).loc)->srName);
	  		char *Arg2 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  		char *res = strdup(((yyval.expAttr).loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,MINUS,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		globalQArray->emit(x);
	  		(yyval.expAttr).Etype = (yyvsp[-2].expAttr).Etype;
	  	}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		if(((yyvsp[-2].expAttr).Etype)->tNodeType == INT && ((yyvsp[0].expAttr).Etype)->tNodeType == DOUBLE){
	  			temp1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",((yyvsp[-2].expAttr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[-2].expAttr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(temp1->srName);
	  			char *Arg2 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,MINUS,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			globalQArray->emit(y);
	  			(yyval.expAttr).Etype = (yyvsp[0].expAttr).Etype;
	  		}
	  		else if(((yyvsp[-2].expAttr).Etype)->tNodeType == INT && ((yyvsp[0].expAttr).Etype)->tNodeType == CHAR){
	  			temp1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",((yyvsp[0].expAttr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[0].expAttr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(INT);
	  			Arg1 = strdup(((yyvsp[-2].expAttr).loc)->srName);
	  			char *Arg2 = strdup(temp1->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,MINUS,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			globalQArray->emit(y);
	  			(yyval.expAttr).Etype = (yyvsp[-2].expAttr).Etype;
	  		}
	  		else if(((yyvsp[-2].expAttr).Etype)->tNodeType == DOUBLE && ((yyvsp[0].expAttr).Etype)->tNodeType == INT){
	  			temp1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",((yyvsp[0].expAttr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[0].expAttr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(((yyvsp[-2].expAttr).loc)->srName);
	  			char *Arg2 = strdup(temp1->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,MINUS,(yyvsp[-2].expAttr).loc,temp1,temp2);
	  			globalQArray->emit(y);
	  			(yyval.expAttr).Etype = (yyvsp[-2].expAttr).Etype;
	  		}
	  		else if(((yyvsp[-2].expAttr).Etype)->tNodeType == CHAR && ((yyvsp[0].expAttr).Etype)->tNodeType == INT){
	  			temp1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",((yyvsp[-2].expAttr).loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,(yyvsp[-2].expAttr).loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(INT);
	  			Arg1 = strdup(temp1->srName);
	  			char *Arg2 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,MINUS,temp1,(yyvsp[0].expAttr).loc,temp2);
	  			globalQArray->emit(y);
	  			(yyval.expAttr).Etype = (yyvsp[0].expAttr).Etype;
	  		}
	  		(yyval.expAttr).loc = temp2;
	  	}
		}
#line 2690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 843 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.expAttr) = (yyvsp[0].expAttr);
		}
#line 2698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 847 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(typecheck((yyvsp[-2].expAttr).Etype, (yyvsp[0].expAttr).Etype)){
	  		(yyval.expAttr).loc = localST->gentemp(((yyvsp[-2].expAttr).Etype)->tNodeType);
	  		char *Arg1 = strdup(((yyvsp[-2].expAttr).loc)->srName);
	  		char *Arg2 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  		char *res = strdup(((yyval.expAttr).loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,SHIFTLEFT,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		globalQArray->emit(x);
	  		(yyval.expAttr).Etype = (yyvsp[-2].expAttr).Etype;
	  	}
	  }
#line 2714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 859 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(typecheck((yyvsp[-2].expAttr).Etype, (yyvsp[0].expAttr).Etype)){
	  		(yyval.expAttr).loc = localST->gentemp(((yyvsp[-2].expAttr).Etype)->tNodeType);
	  		char *Arg1 = strdup(((yyvsp[-2].expAttr).loc)->srName);
	  		char *Arg2 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  		char *res = strdup(((yyval.expAttr).loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,SHIFTRIGHT,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		globalQArray->emit(x);
	  		(yyval.expAttr).Etype = (yyvsp[-2].expAttr).Etype;
	  	}
	  }
#line 2730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 874 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.expAttr) = (yyvsp[0].expAttr);	
		}
#line 2738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 878 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.expAttr).TrueList = makelist(instCounter);
	  	char *Arg1 = strdup(((yyvsp[-2].expAttr).loc)->srName);
	  	char *Arg2 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  	quadArrayRow x(Arg1,Arg2,0,goto_LESSTHAN,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,0);
	  	globalQArray->emit(x);
	  	(yyval.expAttr).FalseList = makelist(instCounter);
	  	quadArrayRow y(0,0,0,GOTO,0,0,0);
	  	globalQArray->emit(y);
	  	(yyval.expAttr).Etype = new_node(BOOL,-1);	
	  }
#line 2754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 890 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.expAttr).TrueList = makelist(instCounter);
	  	char *Arg1 = strdup(((yyvsp[-2].expAttr).loc)->srName);
	  	char *Arg2 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  	quadArrayRow x(Arg1,Arg2,0,goto_GREATERTHAN,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,0);
	  	globalQArray->emit(x);
	  	(yyval.expAttr).FalseList = makelist(instCounter);
	  	quadArrayRow y(0,0,0,GOTO,0,0,0);
	  	globalQArray->emit(y);
	  	(yyval.expAttr).Etype = new_node(BOOL,-1);
	  }
#line 2770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 902 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.expAttr).TrueList = makelist(instCounter);
	  	char *Arg1 = strdup(((yyvsp[-2].expAttr).loc)->srName);
	  	char *Arg2 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  	quadArrayRow x(Arg1,Arg2,0,goto_LESSTHANEQ,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,0);
	  	globalQArray->emit(x);
	  	(yyval.expAttr).FalseList = makelist(instCounter);
	  	quadArrayRow y(0,0,0,GOTO,0,0,0);
	  	globalQArray->emit(y);
	  	(yyval.expAttr).Etype = new_node(BOOL,-1);
	  }
#line 2786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 914 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.expAttr).TrueList = makelist(instCounter);
	  	char *Arg1 = strdup(((yyvsp[-2].expAttr).loc)->srName);
	  	char *Arg2 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  	quadArrayRow x(Arg1,Arg2,0,goto_GREATERTHANEQ,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,0);
	  	globalQArray->emit(x);
	  	(yyval.expAttr).FalseList = makelist(instCounter);
	  	quadArrayRow y(0,0,0,GOTO,0,0,0);
	  	globalQArray->emit(y);
	  	(yyval.expAttr).Etype = new_node(BOOL,-1);
	  }
#line 2802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 929 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.expAttr) = (yyvsp[0].expAttr);
		}
#line 2810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 933 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.expAttr).TrueList = makelist(instCounter);
	  	char *Arg1 = strdup(((yyvsp[-2].expAttr).loc)->srName);
	  	char *Arg2 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  	quadArrayRow x(Arg1,Arg2,0,goto_EQUALTO,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,0);
	  	globalQArray->emit(x);
	  	(yyval.expAttr).FalseList = makelist(instCounter);
	  	quadArrayRow y(0,0,0,GOTO,0,0,0);
	  	globalQArray->emit(y);
	  	(yyval.expAttr).Etype = new_node(BOOL,-1);
	  }
#line 2826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 945 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
	  	(yyval.expAttr).TrueList = makelist(instCounter);
	  	char *Arg1 = strdup(((yyvsp[-2].expAttr).loc)->srName);
	  	char *Arg2 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  	quadArrayRow x(Arg1,Arg2,0,goto_NOTEQUALTO,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,0);
	  	globalQArray->emit(x);
	  	(yyval.expAttr).FalseList = makelist(instCounter);
	  	quadArrayRow y(0,0,0,GOTO,0,0,0);
	  	globalQArray->emit(y);
	  	(yyval.expAttr).Etype = new_node(BOOL,-1);
	  }
#line 2842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 960 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.expAttr) = (yyvsp[0].expAttr);
		}
#line 2850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 964 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(typecheck((yyvsp[-2].expAttr).Etype, (yyvsp[0].expAttr).Etype)){
	  		(yyval.expAttr).loc = localST->gentemp(((yyvsp[-2].expAttr).Etype)->tNodeType);
	  		char *Arg1 = strdup(((yyvsp[-2].expAttr).loc)->srName);
	  		char *Arg2 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  		char *res = strdup(((yyval.expAttr).loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,BW_AND,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		globalQArray->emit(x);
	  		(yyval.expAttr).Etype = (yyvsp[-2].expAttr).Etype;
	  	}
	  }
#line 2866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 979 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.expAttr) = (yyvsp[0].expAttr);
		}
#line 2874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 983 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(typecheck((yyvsp[-2].expAttr).Etype, (yyvsp[0].expAttr).Etype)){
	  		(yyval.expAttr).loc = localST->gentemp(((yyvsp[-2].expAttr).Etype)->tNodeType);
	  		char *Arg1 = strdup(((yyvsp[-2].expAttr).loc)->srName);
	  		char *Arg2 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  		char *res = strdup(((yyval.expAttr).loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,BW_XOR,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		globalQArray->emit(x);
	  		(yyval.expAttr).Etype = (yyvsp[-2].expAttr).Etype;
	  	}
	  }
#line 2890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 998 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.expAttr) = (yyvsp[0].expAttr);
		}
#line 2898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 1002 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
	  	if(typecheck((yyvsp[-2].expAttr).Etype, (yyvsp[0].expAttr).Etype)){
	  		(yyval.expAttr).loc = localST->gentemp(((yyvsp[-2].expAttr).Etype)->tNodeType);
	  		char *Arg1 = strdup(((yyvsp[-2].expAttr).loc)->srName);
	  		char *Arg2 = strdup(((yyvsp[0].expAttr).loc)->srName);
	  		char *res = strdup(((yyval.expAttr).loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,BW_OR,(yyvsp[-2].expAttr).loc,(yyvsp[0].expAttr).loc,(yyval.expAttr).loc);
	  		globalQArray->emit(x);
	  		(yyval.expAttr).Etype = (yyvsp[-2].expAttr).Etype;
	  	}
	  }
#line 2914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 1017 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.expAttr) = (yyvsp[0].expAttr);
		}
#line 2922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 1021 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			backpatch((yyvsp[-3].expAttr).TrueList,(yyvsp[-1].instr));
	  	(yyval.expAttr).FalseList = merge((yyvsp[-3].expAttr).FalseList, (yyvsp[0].expAttr).FalseList);
	  	(yyval.expAttr).TrueList = (yyvsp[0].expAttr).TrueList;
	  	(yyval.expAttr).Etype = new_node(BOOL,-1);
		}
#line 2933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 1031 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.expAttr) = (yyvsp[0].expAttr);
		}
#line 2941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 1035 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
	  	backpatch((yyvsp[-3].expAttr).FalseList,(yyvsp[-1].instr));
	  	(yyval.expAttr).TrueList = merge((yyvsp[-3].expAttr).TrueList,(yyvsp[0].expAttr).TrueList);
	  	(yyval.expAttr).FalseList = (yyvsp[0].expAttr).FalseList;
	  	(yyval.expAttr).Etype = new_node(BOOL,-1);
	  }
#line 2952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 1045 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.expAttr) = (yyvsp[0].expAttr);
		}
#line 2960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 1053 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.expAttr) = (yyvsp[0].expAttr);
		}
#line 2968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 1061 "ass5_13CS10055.y" /* yacc.c:1646  */
    {}
#line 2974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 1062 "ass5_13CS10055.y" /* yacc.c:1646  */
    {/*Not supported --skip*/}
#line 2980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1063 "ass5_13CS10055.y" /* yacc.c:1646  */
    {/*Not supported --skip*/}
#line 2986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1064 "ass5_13CS10055.y" /* yacc.c:1646  */
    {/*Not supported --skip*/}
#line 2992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1065 "ass5_13CS10055.y" /* yacc.c:1646  */
    {/*Not supported --skip*/}
#line 2998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1066 "ass5_13CS10055.y" /* yacc.c:1646  */
    {/*Not supported --skip*/}
#line 3004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1067 "ass5_13CS10055.y" /* yacc.c:1646  */
    {/*Not supported --skip*/}
#line 3010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 1068 "ass5_13CS10055.y" /* yacc.c:1646  */
    {/*Not supported --skip*/}
#line 3016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1069 "ass5_13CS10055.y" /* yacc.c:1646  */
    {/*Not supported --skip*/}
#line 3022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1070 "ass5_13CS10055.y" /* yacc.c:1646  */
    {/*Not supported --skip*/}
#line 3028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1071 "ass5_13CS10055.y" /* yacc.c:1646  */
    {/*Not supported --skip*/}
#line 3034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1079 "ass5_13CS10055.y" /* yacc.c:1646  */
    {/*Not supported --skip*/}
#line 3040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1318 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			//skip
		}
#line 3048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1322 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			//skip
		}
#line 3056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1329 "ass5_13CS10055.y" /* yacc.c:1646  */
    {
			(yyval.instr) = instCounter;
		}
#line 3064 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3068 "y.tab.c" /* yacc.c:1646  */
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
#line 1333 "ass5_13CS10055.y" /* yacc.c:1906  */


void yyerror(char* s) {
	printf("%s", s);
}
