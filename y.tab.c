/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "tac.y"

  #include <bits/stdc++.h>
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include <ctype.h>
  using namespace std;

//yacc related 
 int yylex();
 extern int yylineno;

//Error Handling
void yyerror (const char *s) {fprintf (stderr, "\033[0;31mLine:%d | %s\n\033[0m\n",yylineno, s);} 
  extern FILE *yyin;

//Quadraple Structure
  typedef struct quadruples
  {
    char *op;
    char *arg1;
    char *arg2;
    char *res;
  }quad;
  int quadlen = 0;
  //Quadraples data structure
  quad q[100];
  //Top of stack
  int top=-1;

//quadraple functions
void push();
void pushi(char * i);
void pusha();
void pushx();
void pushab();
void codegen();
void codegen_assign();
void codegen_incdec(int o);
void for1();
void for2();
void for3();
void for4();
void printStack();
void printQuadraples();
//Optimization functions
void constantPropagation(int index, quad arr[100]);
int checkForDigits(char *ch);
char* compute(char *x, char *y, char *op);
void constantFolding(quad arr[100]);
void copyPropagation(quad arr[100]);
void DCE(quad arr[100]);

#line 125 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 277 "y.tab.c"

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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_PACKAGE = 3,                  /* T_PACKAGE  */
  YYSYMBOL_T_IMPORT = 4,                   /* T_IMPORT  */
  YYSYMBOL_T_FUNC = 5,                     /* T_FUNC  */
  YYSYMBOL_T_BREAK = 6,                    /* T_BREAK  */
  YYSYMBOL_T_CONST = 7,                    /* T_CONST  */
  YYSYMBOL_T_CONTINUE = 8,                 /* T_CONTINUE  */
  YYSYMBOL_T_PRINT = 9,                    /* T_PRINT  */
  YYSYMBOL_T_ELSE = 10,                    /* T_ELSE  */
  YYSYMBOL_T_FOR = 11,                     /* T_FOR  */
  YYSYMBOL_T_IF = 12,                      /* T_IF  */
  YYSYMBOL_T_RETURN = 13,                  /* T_RETURN  */
  YYSYMBOL_T_VAR = 14,                     /* T_VAR  */
  YYSYMBOL_T_VAR_TYPE = 15,                /* T_VAR_TYPE  */
  YYSYMBOL_T_BOOL_CONST = 16,              /* T_BOOL_CONST  */
  YYSYMBOL_T_IDENTIFIER = 17,              /* T_IDENTIFIER  */
  YYSYMBOL_T_STRING = 18,                  /* T_STRING  */
  YYSYMBOL_T_NIL_VAL = 19,                 /* T_NIL_VAL  */
  YYSYMBOL_T_INTEGER = 20,                 /* T_INTEGER  */
  YYSYMBOL_T_FLOAT = 21,                   /* T_FLOAT  */
  YYSYMBOL_T_INCREMENT = 22,               /* T_INCREMENT  */
  YYSYMBOL_T_DECREMENT = 23,               /* T_DECREMENT  */
  YYSYMBOL_T_ADD = 24,                     /* T_ADD  */
  YYSYMBOL_T_MINUS = 25,                   /* T_MINUS  */
  YYSYMBOL_T_MULTIPLY = 26,                /* T_MULTIPLY  */
  YYSYMBOL_T_DIVIDE = 27,                  /* T_DIVIDE  */
  YYSYMBOL_T_MOD = 28,                     /* T_MOD  */
  YYSYMBOL_T_ASSIGN = 29,                  /* T_ASSIGN  */
  YYSYMBOL_T_NOT = 30,                     /* T_NOT  */
  YYSYMBOL_T_LAND = 31,                    /* T_LAND  */
  YYSYMBOL_T_LOR = 32,                     /* T_LOR  */
  YYSYMBOL_T_EQL = 33,                     /* T_EQL  */
  YYSYMBOL_T_NEQ = 34,                     /* T_NEQ  */
  YYSYMBOL_T_LEQ = 35,                     /* T_LEQ  */
  YYSYMBOL_T_GEQ = 36,                     /* T_GEQ  */
  YYSYMBOL_T_SEMICOLON = 37,               /* T_SEMICOLON  */
  YYSYMBOL_T_GTR = 38,                     /* T_GTR  */
  YYSYMBOL_T_LSR = 39,                     /* T_LSR  */
  YYSYMBOL_T_LEFTPARANTHESES = 40,         /* T_LEFTPARANTHESES  */
  YYSYMBOL_T_RIGHTPARANTHESES = 41,        /* T_RIGHTPARANTHESES  */
  YYSYMBOL_T_LEFTBRACE = 42,               /* T_LEFTBRACE  */
  YYSYMBOL_T_RIGHTBRACE = 43,              /* T_RIGHTBRACE  */
  YYSYMBOL_T_LEFTBRACKET = 44,             /* T_LEFTBRACKET  */
  YYSYMBOL_T_RIGHTBRACKET = 45,            /* T_RIGHTBRACKET  */
  YYSYMBOL_T_COMMA = 46,                   /* T_COMMA  */
  YYSYMBOL_T_PERIOD = 47,                  /* T_PERIOD  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_StartFile = 49,                 /* StartFile  */
  YYSYMBOL_Block = 50,                     /* Block  */
  YYSYMBOL_StatementList = 51,             /* StatementList  */
  YYSYMBOL_Statement = 52,                 /* Statement  */
  YYSYMBOL_SimpleStmt = 53,                /* SimpleStmt  */
  YYSYMBOL_Declaration = 54,               /* Declaration  */
  YYSYMBOL_PrintStmt = 55,                 /* PrintStmt  */
  YYSYMBOL_FunctionDecl = 56,              /* FunctionDecl  */
  YYSYMBOL_TopLevelDeclList = 57,          /* TopLevelDeclList  */
  YYSYMBOL_TopLevelDecl = 58,              /* TopLevelDecl  */
  YYSYMBOL_Type = 59,                      /* Type  */
  YYSYMBOL_Operand = 60,                   /* Operand  */
  YYSYMBOL_IfStmt = 61,                    /* IfStmt  */
  YYSYMBOL_ForStmt = 62,                   /* ForStmt  */
  YYSYMBOL_63_1 = 63,                      /* $@1  */
  YYSYMBOL_64_2 = 64,                      /* $@2  */
  YYSYMBOL_65_3 = 65,                      /* $@3  */
  YYSYMBOL_66_4 = 66,                      /* $@4  */
  YYSYMBOL_ExpressionList = 67,            /* ExpressionList  */
  YYSYMBOL_BasicLit = 68,                  /* BasicLit  */
  YYSYMBOL_Expression = 69,                /* Expression  */
  YYSYMBOL_70_5 = 70,                      /* $@5  */
  YYSYMBOL_71_6 = 71,                      /* $@6  */
  YYSYMBOL_bin_op = 72,                    /* bin_op  */
  YYSYMBOL_rel_op = 73,                    /* rel_op  */
  YYSYMBOL_math_op = 74,                   /* math_op  */
  YYSYMBOL_unary_op = 75,                  /* unary_op  */
  YYSYMBOL_assign_op = 76,                 /* assign_op  */
  YYSYMBOL_PackageName = 77,               /* PackageName  */
  YYSYMBOL_ImportDeclList = 78,            /* ImportDeclList  */
  YYSYMBOL_ImportDecl = 79,                /* ImportDecl  */
  YYSYMBOL_ImportSpecList = 80             /* ImportSpecList  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   212

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  121

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    83,    83,    87,    88,    91,    92,    93,    94,    97,
      98,    99,   100,   101,   102,   105,   106,   107,   108,   111,
     114,   115,   116,   117,   121,   124,   127,   128,   129,   132,
     133,   136,   140,   141,   142,   146,   147,   148,   152,   152,
     152,   152,   152,   156,   159,   160,   161,   162,   166,   166,
     169,   169,   171,   174,   176,   179,   180,   183,   184,   185,
     186,   187,   188,   191,   192,   193,   194,   195,   198,   199,
     200,   203,   206,   207,   208,   213,   214,   215,   218,   219,
     222,   223
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "T_PACKAGE",
  "T_IMPORT", "T_FUNC", "T_BREAK", "T_CONST", "T_CONTINUE", "T_PRINT",
  "T_ELSE", "T_FOR", "T_IF", "T_RETURN", "T_VAR", "T_VAR_TYPE",
  "T_BOOL_CONST", "T_IDENTIFIER", "T_STRING", "T_NIL_VAL", "T_INTEGER",
  "T_FLOAT", "T_INCREMENT", "T_DECREMENT", "T_ADD", "T_MINUS",
  "T_MULTIPLY", "T_DIVIDE", "T_MOD", "T_ASSIGN", "T_NOT", "T_LAND",
  "T_LOR", "T_EQL", "T_NEQ", "T_LEQ", "T_GEQ", "T_SEMICOLON", "T_GTR",
  "T_LSR", "T_LEFTPARANTHESES", "T_RIGHTPARANTHESES", "T_LEFTBRACE",
  "T_RIGHTBRACE", "T_LEFTBRACKET", "T_RIGHTBRACKET", "T_COMMA", "T_PERIOD",
  "$accept", "StartFile", "Block", "StatementList", "Statement",
  "SimpleStmt", "Declaration", "PrintStmt", "FunctionDecl",
  "TopLevelDeclList", "TopLevelDecl", "Type", "Operand", "IfStmt",
  "ForStmt", "$@1", "$@2", "$@3", "$@4", "ExpressionList", "BasicLit",
  "Expression", "$@5", "$@6", "bin_op", "rel_op", "math_op", "unary_op",
  "assign_op", "PackageName", "ImportDeclList", "ImportDecl",
  "ImportSpecList", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-76)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,    62,     9,   -76,     0,    29,   -76,   -76,    13,    77,
     -76,    62,   -76,    23,    98,    98,   -76,   -76,    20,   -76,
     -76,   -76,    11,     4,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,    98,   -76,   -76,    74,   109,    74,   198,   -76,
     -76,   -76,    15,   145,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,    30,    98,
      98,    98,   -76,    30,   -76,    19,   -76,   -76,    98,   163,
     163,   163,    98,    53,   -76,   -76,   163,   -76,   -76,   -76,
      26,    98,    98,   -76,    -4,    39,   -76,   -76,   -76,   -76,
     -76,    30,   129,    45,   -76,   108,   -76,    50,   -76,    98,
     -76,   -76,    98,    49,    55,    84,   -76,   -76,   163,   -76,
      98,     7,   163,   -76,   -76,    60,    98,   -76,    19,   -76,
     -76
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,    72,    73,    77,     1,    74,     0,     0,
      76,     0,    78,     0,     0,     0,    29,    30,     2,    28,
      75,    81,     0,     0,    47,    33,    46,    44,    45,    68,
      69,    70,     0,    54,    32,     0,     0,     0,     0,    26,
      79,    80,     0,     0,    31,    63,    64,    65,    66,    67,
      56,    55,    57,    58,    60,    62,    61,    59,    23,     0,
       0,     0,    53,    21,    27,     4,    34,    71,     0,    52,
      50,    48,     0,     4,    25,    22,    43,    51,    49,    20,
       0,    19,     0,    11,     4,     8,    10,     9,    14,    12,
      13,     0,     0,     0,    38,     4,     3,     7,     6,     0,
      16,    17,     0,     0,     0,    35,     5,    18,    15,    24,
       0,     4,    39,    36,    37,     0,    19,    40,     4,    41,
      42
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -76,   -76,   -63,   -76,    27,   -75,   -49,   -76,   -76,   -76,
       5,    66,    68,     6,   -76,   -76,   -76,   -76,   -76,   -57,
     -76,   -14,   -76,   -76,   -76,   -76,   -76,   -76,   -41,    64,
     -76,   111,   -76
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,    83,    84,    85,    86,    16,    88,    17,    18,
      19,    58,    33,    89,    90,   104,   115,   118,   120,    91,
      34,    92,    78,    77,    59,    60,    61,    36,    68,     5,
       9,    10,    22
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      35,    37,    74,    14,     1,    80,    94,    81,    82,     6,
      15,    75,    24,    25,    26,    79,    27,    28,    43,    82,
      29,    30,    72,    39,    87,    13,    31,    14,     3,     4,
       3,     4,   105,     8,    15,    87,    32,     7,    73,    96,
      23,   117,   107,    64,    42,    69,    70,    71,   113,    73,
      99,   102,    40,    11,    76,   119,    65,    38,    76,    67,
      14,    73,    80,   103,    81,    82,    93,    15,    95,    24,
      25,    26,    12,    27,    28,    21,    98,    29,    30,     3,
       4,     8,    13,    31,    14,    76,    41,   106,   108,    44,
     109,    15,   110,    32,   111,    73,   112,   116,    45,    46,
      47,    48,    49,    63,    62,    50,    51,    52,    53,    54,
      55,    97,    56,    57,    24,    25,    26,   114,    27,    28,
      20,     0,    29,    30,     0,    24,    25,    26,    31,    27,
      28,     0,    45,    46,    47,    48,    49,     0,    32,    50,
      51,    52,    53,    54,    55,     0,    56,    57,     0,    32,
      73,   100,   101,    45,    46,    47,    48,    49,    67,     0,
      50,    51,    52,    53,    54,    55,     0,    56,    57,    45,
      46,    47,    48,    49,     0,     0,    50,    51,    52,    53,
      54,    55,     0,    56,    57,     0,    66,    45,    46,    47,
      48,    49,     0,     0,    50,    51,    52,    53,    54,    55,
       0,    56,    57,    13,     0,    14,     0,     0,     0,     0,
       0,     0,    15
};

static const yytype_int8 yycheck[] =
{
      14,    15,    65,     7,     3,     9,    81,    11,    12,     0,
      14,    68,    16,    17,    18,    72,    20,    21,    32,    12,
      24,    25,    63,    18,    73,     5,    30,     7,    17,    18,
      17,    18,    95,     4,    14,    84,    40,    37,    42,    43,
      17,   116,    99,    38,    40,    59,    60,    61,   111,    42,
      91,    92,    41,    40,    68,   118,    41,    37,    72,    29,
       7,    42,     9,    18,    11,    12,    40,    14,    82,    16,
      17,    18,     8,    20,    21,    11,    37,    24,    25,    17,
      18,     4,     5,    30,     7,    99,    22,    37,   102,    15,
      41,    14,    37,    40,    10,    42,   110,    37,    24,    25,
      26,    27,    28,    37,    36,    31,    32,    33,    34,    35,
      36,    84,    38,    39,    16,    17,    18,   111,    20,    21,
       9,    -1,    24,    25,    -1,    16,    17,    18,    30,    20,
      21,    -1,    24,    25,    26,    27,    28,    -1,    40,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    -1,    40,
      42,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    -1,    38,    39,    24,
      25,    26,    27,    28,    -1,    -1,    31,    32,    33,    34,
      35,    36,    -1,    38,    39,    -1,    41,    24,    25,    26,
      27,    28,    -1,    -1,    31,    32,    33,    34,    35,    36,
      -1,    38,    39,     5,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    14
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    49,    17,    18,    77,     0,    37,     4,    78,
      79,    40,    77,     5,     7,    14,    54,    56,    57,    58,
      79,    77,    80,    17,    16,    17,    18,    20,    21,    24,
      25,    30,    40,    60,    68,    69,    75,    69,    37,    58,
      41,    77,    40,    69,    15,    24,    25,    26,    27,    28,
      31,    32,    33,    34,    35,    36,    38,    39,    59,    72,
      73,    74,    60,    59,    58,    41,    41,    29,    76,    69,
      69,    69,    76,    42,    50,    67,    69,    71,    70,    67,
       9,    11,    12,    50,    51,    52,    53,    54,    55,    61,
      62,    67,    69,    40,    53,    69,    43,    52,    37,    76,
      22,    23,    76,    18,    63,    50,    37,    67,    69,    41,
      37,    10,    69,    50,    61,    64,    37,    53,    65,    50,
      66
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    51,    51,    51,    52,
      52,    52,    52,    52,    52,    53,    53,    53,    53,    53,
      54,    54,    54,    54,    55,    56,    57,    57,    57,    58,
      58,    59,    60,    60,    60,    61,    61,    61,    63,    64,
      65,    66,    62,    67,    68,    68,    68,    68,    70,    69,
      71,    69,    69,    69,    69,    72,    72,    73,    73,    73,
      73,    73,    73,    74,    74,    74,    74,    74,    75,    75,
      75,    76,    77,    77,    77,    78,    78,    78,    79,    79,
      80,    80
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     0,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     2,     3,     0,
       5,     3,     5,     3,     4,     5,     2,     3,     1,     1,
       1,     1,     1,     1,     3,     3,     5,     5,     0,     0,
       0,     0,    11,     1,     1,     1,     1,     1,     0,     4,
       0,     4,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     0,     2,     4,
       2,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* StartFile: T_PACKAGE PackageName ImportDeclList TopLevelDeclList  */
#line 83 "tac.y"
                                                          {
	}
#line 1580 "y.tab.c"
    break;

  case 3: /* Block: T_LEFTBRACE StatementList T_RIGHTBRACE  */
#line 87 "tac.y"
                                               {}
#line 1586 "y.tab.c"
    break;

  case 4: /* Block: %empty  */
#line 88 "tac.y"
                    {}
#line 1592 "y.tab.c"
    break;

  case 5: /* StatementList: StatementList Statement T_SEMICOLON  */
#line 91 "tac.y"
                                        {}
#line 1598 "y.tab.c"
    break;

  case 6: /* StatementList: Statement T_SEMICOLON  */
#line 92 "tac.y"
                            {}
#line 1604 "y.tab.c"
    break;

  case 7: /* StatementList: StatementList Statement  */
#line 93 "tac.y"
                                  {}
#line 1610 "y.tab.c"
    break;

  case 8: /* StatementList: Statement  */
#line 94 "tac.y"
               {}
#line 1616 "y.tab.c"
    break;

  case 9: /* Statement: Declaration  */
#line 97 "tac.y"
                    {}
#line 1622 "y.tab.c"
    break;

  case 10: /* Statement: SimpleStmt  */
#line 98 "tac.y"
                     {}
#line 1628 "y.tab.c"
    break;

  case 11: /* Statement: Block  */
#line 99 "tac.y"
                {}
#line 1634 "y.tab.c"
    break;

  case 12: /* Statement: IfStmt  */
#line 100 "tac.y"
                 {}
#line 1640 "y.tab.c"
    break;

  case 13: /* Statement: ForStmt  */
#line 101 "tac.y"
                  {}
#line 1646 "y.tab.c"
    break;

  case 14: /* Statement: PrintStmt  */
#line 102 "tac.y"
                    {}
#line 1652 "y.tab.c"
    break;

  case 15: /* SimpleStmt: Expression assign_op Expression  */
#line 105 "tac.y"
                                        {codegen_assign();}
#line 1658 "y.tab.c"
    break;

  case 16: /* SimpleStmt: Expression T_INCREMENT  */
#line 106 "tac.y"
                                 {codegen_incdec(1);}
#line 1664 "y.tab.c"
    break;

  case 17: /* SimpleStmt: Expression T_DECREMENT  */
#line 107 "tac.y"
                                 {codegen_incdec(0);}
#line 1670 "y.tab.c"
    break;

  case 18: /* SimpleStmt: ExpressionList assign_op ExpressionList  */
#line 108 "tac.y"
                                                  {
		// b,c = 2,3
	}
#line 1678 "y.tab.c"
    break;

  case 19: /* SimpleStmt: %empty  */
#line 111 "tac.y"
                   {}
#line 1684 "y.tab.c"
    break;

  case 20: /* Declaration: T_VAR Expression Type assign_op ExpressionList  */
#line 114 "tac.y"
                                                       {codegen_assign();}
#line 1690 "y.tab.c"
    break;

  case 21: /* Declaration: T_VAR Expression Type  */
#line 115 "tac.y"
                            {}
#line 1696 "y.tab.c"
    break;

  case 22: /* Declaration: T_CONST Expression Type assign_op ExpressionList  */
#line 116 "tac.y"
                                                       {codegen_assign();}
#line 1702 "y.tab.c"
    break;

  case 23: /* Declaration: T_CONST Expression Type  */
#line 117 "tac.y"
                              {}
#line 1708 "y.tab.c"
    break;

  case 24: /* PrintStmt: T_PRINT T_LEFTPARANTHESES T_STRING T_RIGHTPARANTHESES  */
#line 121 "tac.y"
                                                              {}
#line 1714 "y.tab.c"
    break;

  case 25: /* FunctionDecl: T_FUNC T_IDENTIFIER T_LEFTPARANTHESES T_RIGHTPARANTHESES Block  */
#line 124 "tac.y"
                                                                       {}
#line 1720 "y.tab.c"
    break;

  case 26: /* TopLevelDeclList: TopLevelDeclList TopLevelDecl  */
#line 127 "tac.y"
                                   {}
#line 1726 "y.tab.c"
    break;

  case 27: /* TopLevelDeclList: TopLevelDeclList T_SEMICOLON TopLevelDecl  */
#line 128 "tac.y"
                                                     {}
#line 1732 "y.tab.c"
    break;

  case 28: /* TopLevelDeclList: TopLevelDecl  */
#line 129 "tac.y"
                    {}
#line 1738 "y.tab.c"
    break;

  case 29: /* TopLevelDecl: Declaration  */
#line 132 "tac.y"
                    {}
#line 1744 "y.tab.c"
    break;

  case 30: /* TopLevelDecl: FunctionDecl  */
#line 133 "tac.y"
                       {}
#line 1750 "y.tab.c"
    break;

  case 31: /* Type: T_VAR_TYPE  */
#line 136 "tac.y"
                   {
	}
#line 1757 "y.tab.c"
    break;

  case 32: /* Operand: BasicLit  */
#line 140 "tac.y"
                 {}
#line 1763 "y.tab.c"
    break;

  case 33: /* Operand: T_IDENTIFIER  */
#line 141 "tac.y"
                       {pushi((yyvsp[0].sval));}
#line 1769 "y.tab.c"
    break;

  case 34: /* Operand: T_LEFTPARANTHESES Expression T_RIGHTPARANTHESES  */
#line 142 "tac.y"
                                                          {}
#line 1775 "y.tab.c"
    break;

  case 38: /* $@1: %empty  */
#line 152 "tac.y"
                  {for1();}
#line 1781 "y.tab.c"
    break;

  case 39: /* $@2: %empty  */
#line 152 "tac.y"
                                                  {for2();}
#line 1787 "y.tab.c"
    break;

  case 40: /* $@3: %empty  */
#line 152 "tac.y"
                                                                                  {for3();}
#line 1793 "y.tab.c"
    break;

  case 41: /* $@4: %empty  */
#line 152 "tac.y"
                                                                                                 {for4();}
#line 1799 "y.tab.c"
    break;

  case 42: /* ForStmt: T_FOR SimpleStmt $@1 T_SEMICOLON Expression $@2 T_SEMICOLON SimpleStmt $@3 Block $@4  */
#line 152 "tac.y"
                                                                                                           {
  }
#line 1806 "y.tab.c"
    break;

  case 43: /* ExpressionList: Expression  */
#line 156 "tac.y"
                   {}
#line 1812 "y.tab.c"
    break;

  case 44: /* BasicLit: T_INTEGER  */
#line 159 "tac.y"
                  {push();}
#line 1818 "y.tab.c"
    break;

  case 45: /* BasicLit: T_FLOAT  */
#line 160 "tac.y"
                  {push();}
#line 1824 "y.tab.c"
    break;

  case 46: /* BasicLit: T_STRING  */
#line 161 "tac.y"
                   {push();}
#line 1830 "y.tab.c"
    break;

  case 47: /* BasicLit: T_BOOL_CONST  */
#line 162 "tac.y"
                       {push();
	}
#line 1837 "y.tab.c"
    break;

  case 48: /* $@5: %empty  */
#line 166 "tac.y"
                                     {codegen();}
#line 1843 "y.tab.c"
    break;

  case 49: /* Expression: Expression math_op Expression $@5  */
#line 167 "tac.y"
        {
	}
#line 1850 "y.tab.c"
    break;

  case 50: /* $@6: %empty  */
#line 169 "tac.y"
                                      {codegen();}
#line 1856 "y.tab.c"
    break;

  case 51: /* Expression: Expression rel_op Expression $@6  */
#line 169 "tac.y"
                                                  {
	}
#line 1863 "y.tab.c"
    break;

  case 52: /* Expression: Expression bin_op Expression  */
#line 171 "tac.y"
                                       {
		// For logical operators
	}
#line 1871 "y.tab.c"
    break;

  case 53: /* Expression: unary_op Operand  */
#line 174 "tac.y"
                           {
		}
#line 1878 "y.tab.c"
    break;

  case 54: /* Expression: Operand  */
#line 176 "tac.y"
                  {}
#line 1884 "y.tab.c"
    break;

  case 55: /* bin_op: T_LOR  */
#line 179 "tac.y"
              {push();}
#line 1890 "y.tab.c"
    break;

  case 56: /* bin_op: T_LAND  */
#line 180 "tac.y"
                 {push();}
#line 1896 "y.tab.c"
    break;

  case 57: /* rel_op: T_EQL  */
#line 183 "tac.y"
              {push();}
#line 1902 "y.tab.c"
    break;

  case 58: /* rel_op: T_NEQ  */
#line 184 "tac.y"
                {push();}
#line 1908 "y.tab.c"
    break;

  case 59: /* rel_op: T_LSR  */
#line 185 "tac.y"
                {push();}
#line 1914 "y.tab.c"
    break;

  case 60: /* rel_op: T_LEQ  */
#line 186 "tac.y"
                {push();}
#line 1920 "y.tab.c"
    break;

  case 61: /* rel_op: T_GTR  */
#line 187 "tac.y"
                {push();}
#line 1926 "y.tab.c"
    break;

  case 62: /* rel_op: T_GEQ  */
#line 188 "tac.y"
                {push();}
#line 1932 "y.tab.c"
    break;

  case 63: /* math_op: T_ADD  */
#line 191 "tac.y"
              {push();}
#line 1938 "y.tab.c"
    break;

  case 64: /* math_op: T_MINUS  */
#line 192 "tac.y"
                  {push();}
#line 1944 "y.tab.c"
    break;

  case 65: /* math_op: T_MULTIPLY  */
#line 193 "tac.y"
                     {push();}
#line 1950 "y.tab.c"
    break;

  case 66: /* math_op: T_DIVIDE  */
#line 194 "tac.y"
                   {push();}
#line 1956 "y.tab.c"
    break;

  case 67: /* math_op: T_MOD  */
#line 195 "tac.y"
                {push();}
#line 1962 "y.tab.c"
    break;

  case 68: /* unary_op: T_ADD  */
#line 198 "tac.y"
              {}
#line 1968 "y.tab.c"
    break;

  case 69: /* unary_op: T_MINUS  */
#line 199 "tac.y"
                  {}
#line 1974 "y.tab.c"
    break;

  case 70: /* unary_op: T_NOT  */
#line 200 "tac.y"
                {}
#line 1980 "y.tab.c"
    break;

  case 71: /* assign_op: T_ASSIGN  */
#line 203 "tac.y"
                 {push();}
#line 1986 "y.tab.c"
    break;

  case 72: /* PackageName: T_IDENTIFIER  */
#line 206 "tac.y"
                     {}
#line 1992 "y.tab.c"
    break;

  case 73: /* PackageName: T_STRING  */
#line 207 "tac.y"
                   {}
#line 1998 "y.tab.c"
    break;

  case 74: /* PackageName: T_STRING T_SEMICOLON  */
#line 208 "tac.y"
                               {}
#line 2004 "y.tab.c"
    break;

  case 75: /* ImportDeclList: ImportDeclList ImportDecl  */
#line 213 "tac.y"
                                {}
#line 2010 "y.tab.c"
    break;

  case 76: /* ImportDeclList: ImportDecl  */
#line 214 "tac.y"
                 {}
#line 2016 "y.tab.c"
    break;

  case 77: /* ImportDeclList: %empty  */
#line 215 "tac.y"
                {}
#line 2022 "y.tab.c"
    break;

  case 78: /* ImportDecl: T_IMPORT PackageName  */
#line 218 "tac.y"
                             {}
#line 2028 "y.tab.c"
    break;

  case 79: /* ImportDecl: T_IMPORT T_LEFTPARANTHESES ImportSpecList T_RIGHTPARANTHESES  */
#line 219 "tac.y"
                                                                       {}
#line 2034 "y.tab.c"
    break;

  case 80: /* ImportSpecList: ImportSpecList PackageName  */
#line 222 "tac.y"
                                   {}
#line 2040 "y.tab.c"
    break;

  case 81: /* ImportSpecList: PackageName  */
#line 223 "tac.y"
                      {}
#line 2046 "y.tab.c"
    break;


#line 2050 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 225 "tac.y"


#include "lex.yy.c"
#include<ctype.h>
#include<fstream>
//Stack
char st[100][100];
char i_[2]="0";
//Temporary variable counter
int temp_i=0;
//Char string to store temporary varoable number
char tmp_i[3];
char temp[2]="t";
//Array for labels
int label[20];
//Label number counter
int lnum=0;
//Top of label stack
int ltop=0;
//Label counter for loop
int l_for=0;
//Output tac file
ofstream fo;

int main (int argc, char** argv) {	
	printf("Inside main\n");
	FILE * fp= fopen(argv[1], "r");
	yyin = fp;
    fo.open("tac.txt");
	printf("Read the input file, continue with Lexing and Parsing\n");
	printf("Performing Lexical analysis......\n\n");
	yyparse ( );
	printf("\n\033[0;32mParsing completed.\033[0m\n\n");
	printf("---------------------ICG in the form of Quadruples-------------------------\n\n");
    printQuadraples();
    fo.close();
	return 0;
}

//Print Quadraples
void printQuadraples()
{
    for(int i=0;i<62;i++)
        printf("-");
    cout << endl;
    printf("Operator \t | Arg1 \t | Arg2 \t | Result \n");
    for(int i=0;i<62;i++)
        printf("-");
    cout << endl;
    int i;
    for(i=0;i<quadlen;i++)
    {
        printf("%-8s \t | %-8s \t | %-8s \t | %-6s \n",q[i].op,q[i].arg1,q[i].arg2,q[i].res);
    }
	for(int i=0;i<62;i++)
        printf("-");
    cout << endl;
}
//Print top of stack
void printStack()
{
    cout << "Stack Top " << st[top] <<" "<<st[top-1]<<" "<<st[top-2]<<" "<<st[top-3]<<endl;
}
//Pushing to stack using yytext
void push()
{
    cout << "Pushed to stack : "<<yytext<<endl;
    strcpy(st[++top],yytext);
    printStack();
}
void pusha()
{
    strcpy(st[++top],"  ");
}
//Pushing to stack by passing value
void pushi(char * i)
{
    cout << "Pushed to stack : "<<i<<endl;
    strcpy(st[++top],i);
}
void pushx()
{
    strcpy(st[++top],"x ");
}
void pushab()
{
    strcpy(st[++top],"  ");
    strcpy(st[++top],"  ");
    strcpy(st[++top],"  ");
}

void codegen()
{   //Intermediate operation assigned to temporary variable
    strcpy(temp,"T");
    sprintf(tmp_i, "%d", temp_i);
    strcat(temp,tmp_i);
    //Quad creation (eq. T = a + c)
    printf("%s = %s %s %s\n",temp,st[top-2],st[top-1],st[top]);
    //Writing into output tac file
    fo << temp <<" = "<<st[top-2]<<" "<<st[top-1]<<" "<<st[top]<<endl;
    q[quadlen].op = (char*)malloc(sizeof(char)*strlen(st[top-1]));
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-2]));
    q[quadlen].arg2 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,st[top-1]);
    strcpy(q[quadlen].arg1,st[top-2]);
    strcpy(q[quadlen].arg2,st[top]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
    //Pop 3 elements from stack (eq. a + c)
    top-=2;
    //Pushing temporary variable to stack
    strcpy(st[top],temp);
    temp_i++;
}

void codegen_assign()
{  
    //Assignment operation (eg. b = T2 )
    //T2 < = < b 
    //Writing into output tac file
    fo << st[top-2] <<" = "<<st[top]<<endl;
    printf("%s = %s\n",st[top-2],st[top]);
    //Quad creation
    q[quadlen].op = (char*)malloc(sizeof(char));
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(st[top-2]));
    strcpy(q[quadlen].op,"=");
    strcpy(q[quadlen].arg1,st[top]);
    strcpy(q[quadlen].res,st[top-2]);
    quadlen++;
    //Pop elements from stack
    top-=2;
}

//Only for identifiers
void codegen_incdec(int o){
    //Check if increment or decrement
    if(o)
        pushi("+");
    else
        pushi("-");
    // Push one to stack
    pushi("1");
    // Get identifier at position top-2 which has to be incremented
    char tempi[31];
    strcpy(tempi,st[top-2]);
    //quad generation like Tx = a + 1
    codegen();
    pushi("=");
    cout<<"hello "<<st[top]<<" "<<st[top-1]<<" "<<st[top-2]<<endl;
    //Pushing temporary variable to top of stack and identifier downwards so Tx=a+1 and a=Tx
    pushi(st[top-1]);
    cout<<"hello "<<st[top]<<" "<<st[top-1]<<" "<<st[top-2]<<endl;
    strcpy(st[top-2],tempi);
    //Quad genreation for a = Tx
    codegen_assign();
}

void for1()
{   //...initialisation statement
    //For loop lable count
    l_for = lnum;
    //Writing into output tac file
    fo << "L"<<lnum<<": "<<endl;
    printf("L%d: \n",lnum++);
    //Creating quad for label after initialisation statement (condition)
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"Label");
    char x[10];
    sprintf(x,"%d",lnum-1);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;
}
void for2()
{   //...Condition statement
    strcpy(temp,"T");
    sprintf(tmp_i, "%d", temp_i);
    strcat(temp,tmp_i);
    //Writing into output tac file
    fo << temp <<" = not "<<st[top]<<endl;
    //Generating quad for when condition is "not" true, Tx = not condition
    //Output of condition stored on top of stack as temp variable
    printf("%s = not %s\n",temp,st[top]);
    q[quadlen].op = (char*)malloc(sizeof(char)*4);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,"not");
    strcpy(q[quadlen].arg1,st[top]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
    //Writing into output tac file
    fo <<"if "<<temp<<" goto L"<<lnum<<endl;
    //Genrating goto for going to statement after loop when condition fails eg. if (not cond) goto next
    printf("if %s goto L%d\n",temp,lnum);
    q[quadlen].op = (char*)malloc(sizeof(char)*3);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"if");
    strcpy(q[quadlen].arg1,temp);
    char x[10];
    sprintf(x,"%d",lnum);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;
    //Increase temp variable count
    temp_i++;
    //Label on top of stack is for instruction after loop
    label[++ltop]=lnum;
    //Increment label count
    lnum++;
    //Writing into output tac file
    fo <<"goto L"<<lnum<<endl;
    printf("goto L%d\n",lnum);
    //Generating goto for when condition is true (loop body)
    q[quadlen].op = (char*)malloc(sizeof(char)*5);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"goto");
    char x1[10];
    sprintf(x1,"%d",lnum);
    char l1[]="L";
    strcpy(q[quadlen].res,strcat(l1,x1));
    quadlen++;
    //Label on top of stack is for loop body
    label[++ltop]=lnum;
    //Increment label number to get lable for increment statement
    printf("L%d: \n",++lnum);
    //Writing into output tac file
    fo <<"L"<<lnum<<": "<<endl;
    //Creating quad for label for increment statement following condition
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"Label");
    char x2[10];
    sprintf(x2,"%d",lnum);
    char l2[]="L";
    strcpy(q[quadlen].res,strcat(l2,x2));
    quadlen++;
 }
void for3()
{   //...Increment statement
    int x;
    //Get label for loop body from label stack top
    x=label[ltop--];
    //Writing into output tac file
    fo <<"goto L"<<l_for<<" "<<endl;
    printf("goto L%d \n",l_for);
    //Generating goto for checking condition label
    q[quadlen].op = (char*)malloc(sizeof(char)*5);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,"goto");
    char jug[10];
    sprintf(jug,"%d",l_for);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,jug));
    quadlen++;
    //Writing into output tac file
    fo <<"L"<<x<<": "<<endl;
    printf("L%d: \n",x);
    //Creating quad for label for loop body
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(x+2));
    strcpy(q[quadlen].op,"Label");
    char jug1[10];
    sprintf(jug1,"%d",x);
    char l1[]="L";
    strcpy(q[quadlen].res,strcat(l1,jug1));
    quadlen++;

}
void for4()
{   //...Loop body
    int x;
    x=label[ltop--];
    //Writing into output tac file
    fo <<"goto L"<<lnum<<" "<<endl;
    printf("goto L%d \n",lnum);
    //Creating quad for goto to label for increment statement
    q[quadlen].op = (char*)malloc(sizeof(char)*5);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,"goto");
    char jug[10];
    sprintf(jug,"%d",lnum);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,jug));
    quadlen++;
    //Writing into output tac file
    fo <<"L"<<x<<": "<<endl;
    printf("L%d: \n",x);
    //Creating quad for label after loop , instruction after loop
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(x+2));
    strcpy(q[quadlen].op,"Label");
    char jug1[10];
    sprintf(jug1,"%d",x);
    char l1[]="L";
    strcpy(q[quadlen].res,strcat(l1,jug1));
    quadlen++;
}

char* compute(char *x, char *y, char *op)
{
    char* res;
    //convert x and y to integers
    int xx=atoi(x);
    int yy=atoi(y);
    int result = 0;
    switch(*op)
    {
      case '+':
        result = xx+yy;
        break;
      case '-':
        result = xx-yy;
        break;
      case '*':
        result = xx*yy;
        break;
      case '/':
        result = xx/yy;
        break;
      case '%':
        result = xx%yy;
        break;
      case '>':
        res= strdup((xx>yy)?"true":"false");
        return res;
      case '<':
        res= strdup((xx<yy)?"true":"false");
        return res;
      default:
        if(strcmp(op,"==")) return (xx==yy)?(char *)"true":(char *)"false";
        else if(strcmp(op,">=")) return (xx>=yy)?(char *)"true":(char *)"false";
        else if(strcmp(op,"!=")) return (xx!=yy)?(char *)"true":(char *)"false";
        else if(strcmp(op,"<=")) return (xx<=yy)?(char *)"true":(char *)"false";
    }
    return (char*)to_string(result).c_str();
}
void copyPropagation(quad arr[100])
{
    char val[50], var[50];
    int i=0;
    for(; i<quadlen; i++)
    {       //If arg2 is null; ex q = b -> res = q, arg1 = b, op = '='
            //p = a + c         p = a + c       p = a + c
            //q = b         =>  q = b       =>  r = b * b
            //r = q * q         r = b * b
        if(!arr[i].arg2){
            strcpy(var, arr[i].res);
            strcpy(val, arr[i].arg1);
            //flag to see if any arg was changed
            int flag = 0; 
            for(int j = i + 1; j<quadlen; j++)
            {
                    //If value of the var is changed somewhere then the copy propogation must end
                    if(strcmp(arr[j].res, var)==0){
                        break;
                    }
                    //r = q * q; replace first occurence of q with b
                    if (strcmp(arr[j].arg1, var)==0){
                        strcpy(arr[j].arg1, val);
                        flag = 1;
                    }
                    //replace second occurance with b
                    if (arr[j].arg2 && strcmp(arr[j].arg2, var)==0){
                        strcpy(arr[j].arg2, val);
                        flag = 1;
                    }
            }
            //After the replacements, remove the line q = b
            if(flag){
                int del = i;
                for (int k = del-1; k < quadlen; k++)
                {
                    arr[del]=arr[del+1];
                    del++;
                }
                //since the ith index was removed, length reduces by 1
                quadlen=quadlen-1;
            }
        }
    }
}
void constantPropagation(int index, quad arr[100])
{
    char val[50], var[50];
    int i=index;
    strcpy(var, arr[i].res);
    strcpy(val, arr[i].arg1);
    i=index+1;
    for(; i<quadlen; i++)
    {   
        if (strcmp(arr[i].op, "if")!=0 && strcmp(arr[i].op, "goto")!=0 && strcmp(arr[i].op, "call")!=0 && strcmp(arr[i].op, "proc")!=0 && arr[i].op[0]!='L'&&strcmp(arr[i].res, "stack top")!=0){    
            if(strcmp(arr[i].res, var)==0)
            {
                return;
            }
            else if(arr[i].arg2 && strcmp(arr[i].arg2, var)==0)
            {
                strcpy(arr[i].arg2, val);
            }
            else if(arr[i].arg1 && strcmp(arr[i].arg1, var)==0)
            {
                strcpy(arr[i].arg1, val);
            }
        }
    }
}
int checkForDigits(char *ch)
{
    if(!ch) return 0;
    while(*ch)
    {
        if(isdigit(*ch++)==0)
        {
          return 0;
        }
        return 1;
    }
}

void constantFolding(quad arr[100])
{
  int i=0, flag=0;
  char* res=0;

  while(i<quadlen)
  {
    //first check if arg2 exists
    if(!arr[i].arg2)
    {
      flag=1;
      constantPropagation(i, arr);
    }
    int ch1=checkForDigits(arr[i].arg1);
    int ch2=checkForDigits(arr[i].arg2);

    char stringres[50];
    if(ch1==1 && ch2==1) //if arg1 AND arg2 are digits
    {
      //compute the value, pass 2, 3, + and return 5
      res=compute(arr[i].arg1, arr[i].arg2, arr[i].op);
      //after computing result, op=, arg1 is 5 and result is a
      strcpy(arr[i].op, "=");
      strcpy(arr[i].arg1, res);
      strcpy(arr[i].arg2, " ");

      constantPropagation(i, arr); 
    }
    i++;
  }
}
void DCE(quad arr[100])
{   //Dead Code Elimination
    char val[50], var[50];
    int i=0;
    for(; i<quadlen-1; i++)
    {       
            //p = a + c                
            //q = b         =>  q = b
            //r = q * q         r = b * b
            strcpy(var, arr[i].res);
            //flag = 1, var not used anywhere, dead code
            int flag = 1; 
            for(int j = i + 1; j<quadlen; j++)
            {
                    //check if the var is used as arg1, arg2 and res
                    if (strcmp(arr[j].arg1, var)==0 || (arr[j].arg2 && strcmp(arr[j].arg2, var)==0) || (strcmp(arr[j].res,var)==0)){
                        flag = 0;
                        break;
                    }
            }
            //After the replacements, remove the line q = b
            if(flag){
                int del = i;
                for (int k = del-1; k < quadlen; k++)
                {
                    arr[del]=arr[del+1];
                    del++;
                }
                //since the ith index was removed, length reduces by 1
                quadlen=quadlen-1;
            }

    }
}
