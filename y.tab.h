/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_PACKAGE = 258,               /* T_PACKAGE  */
    T_IMPORT = 259,                /* T_IMPORT  */
    T_FUNC = 260,                  /* T_FUNC  */
    T_BREAK = 261,                 /* T_BREAK  */
    T_CONST = 262,                 /* T_CONST  */
    T_CONTINUE = 263,              /* T_CONTINUE  */
    T_PRINT = 264,                 /* T_PRINT  */
    T_ELSE = 265,                  /* T_ELSE  */
    T_FOR = 266,                   /* T_FOR  */
    T_IF = 267,                    /* T_IF  */
    T_RETURN = 268,                /* T_RETURN  */
    T_VAR = 269,                   /* T_VAR  */
    T_VAR_TYPE = 270,              /* T_VAR_TYPE  */
    T_BOOL_CONST = 271,            /* T_BOOL_CONST  */
    T_IDENTIFIER = 272,            /* T_IDENTIFIER  */
    T_STRING = 273,                /* T_STRING  */
    T_NIL_VAL = 274,               /* T_NIL_VAL  */
    T_INTEGER = 275,               /* T_INTEGER  */
    T_FLOAT = 276,                 /* T_FLOAT  */
    T_INCREMENT = 277,             /* T_INCREMENT  */
    T_DECREMENT = 278,             /* T_DECREMENT  */
    T_ADD = 279,                   /* T_ADD  */
    T_MINUS = 280,                 /* T_MINUS  */
    T_MULTIPLY = 281,              /* T_MULTIPLY  */
    T_DIVIDE = 282,                /* T_DIVIDE  */
    T_MOD = 283,                   /* T_MOD  */
    T_ASSIGN = 284,                /* T_ASSIGN  */
    T_NOT = 285,                   /* T_NOT  */
    T_LAND = 286,                  /* T_LAND  */
    T_LOR = 287,                   /* T_LOR  */
    T_EQL = 288,                   /* T_EQL  */
    T_NEQ = 289,                   /* T_NEQ  */
    T_LEQ = 290,                   /* T_LEQ  */
    T_GEQ = 291,                   /* T_GEQ  */
    T_SEMICOLON = 292,             /* T_SEMICOLON  */
    T_GTR = 293,                   /* T_GTR  */
    T_LSR = 294,                   /* T_LSR  */
    T_LEFTPARANTHESES = 295,       /* T_LEFTPARANTHESES  */
    T_RIGHTPARANTHESES = 296,      /* T_RIGHTPARANTHESES  */
    T_LEFTBRACE = 297,             /* T_LEFTBRACE  */
    T_RIGHTBRACE = 298,            /* T_RIGHTBRACE  */
    T_LEFTBRACKET = 299,           /* T_LEFTBRACKET  */
    T_RIGHTBRACKET = 300,          /* T_RIGHTBRACKET  */
    T_COMMA = 301,                 /* T_COMMA  */
    T_PERIOD = 302                 /* T_PERIOD  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define T_PACKAGE 258
#define T_IMPORT 259
#define T_FUNC 260
#define T_BREAK 261
#define T_CONST 262
#define T_CONTINUE 263
#define T_PRINT 264
#define T_ELSE 265
#define T_FOR 266
#define T_IF 267
#define T_RETURN 268
#define T_VAR 269
#define T_VAR_TYPE 270
#define T_BOOL_CONST 271
#define T_IDENTIFIER 272
#define T_STRING 273
#define T_NIL_VAL 274
#define T_INTEGER 275
#define T_FLOAT 276
#define T_INCREMENT 277
#define T_DECREMENT 278
#define T_ADD 279
#define T_MINUS 280
#define T_MULTIPLY 281
#define T_DIVIDE 282
#define T_MOD 283
#define T_ASSIGN 284
#define T_NOT 285
#define T_LAND 286
#define T_LOR 287
#define T_EQL 288
#define T_NEQ 289
#define T_LEQ 290
#define T_GEQ 291
#define T_SEMICOLON 292
#define T_GTR 293
#define T_LSR 294
#define T_LEFTPARANTHESES 295
#define T_RIGHTPARANTHESES 296
#define T_LEFTBRACE 297
#define T_RIGHTBRACE 298
#define T_LEFTBRACKET 299
#define T_RIGHTBRACKET 300
#define T_COMMA 301
#define T_PERIOD 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 57 "tac.y"

     char *sval;
	 int nval;

#line 166 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
