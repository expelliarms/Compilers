/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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
#line 10 "ass5_13CS10055.y" /* yacc.c:1909  */

  int intval;
  double floatval;
  char charval;
  idAttributes idAttr;
  expAttributes expAttr;
  opSpecifier unaryOpAttr;
  pNode *params;
  int instr;

#line 203 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
