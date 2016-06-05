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
#line 1 "syntax.y" /* yacc.c:339  */

#include "common.h"
#include <stdio.h>
#include <stdlib.h>
int DEBUG = 1;
NODE* ROOT;


#line 75 "yy.tab.cpp" /* yacc.c:339  */

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TK_AND = 258,
    TK_ARRAY = 259,
    TK_ASSIGN = 260,
    TK_CASE = 261,
    TK_TYPE = 262,
    TK_SYS_TYPE = 263,
    TK_COLON = 264,
    TK_COMMA = 265,
    TK_CONST = 266,
    TK_DIGITS = 267,
    TK_DIV = 268,
    TK_DO = 269,
    TK_DOT = 270,
    TK_DOTDOT = 271,
    TK_DOWNTO = 272,
    TK_ELSE = 273,
    TK_ELSE_NULL = 274,
    TK_END = 275,
    TK_EQUAL = 276,
    TK_FOR = 277,
    TK_FUNCTION = 278,
    TK_GE = 279,
    TK_GOTO = 280,
    TK_GT = 281,
    TK_ID = 282,
    TK_REF = 283,
    TK_IF = 284,
    TK_IN = 285,
    TK_LB = 286,
    TK_LE = 287,
    TK_LP = 288,
    TK_LT = 289,
    TK_MINUS = 290,
    TK_MOD = 291,
    TK_UNEQUAL = 292,
    TK_OF = 293,
    TK_OR = 294,
    TK_OTHERWISE = 295,
    TK_BEGIN = 296,
    TK_PLUS = 297,
    TK_PROCEDURE = 298,
    TK_PROGRAM = 299,
    TK_RB = 300,
    TK_REAL = 301,
    TK_RECORD = 302,
    TK_REPEAT = 303,
    TK_RP = 304,
    TK_SYS_PROC = 305,
    TK_READ = 306,
    TK_SEMI = 307,
    TK_MUL = 308,
    TK_THEN = 309,
    TK_NOT = 310,
    TK_TO = 311,
    TK_UNTIL = 312,
    TK_UPARROW = 313,
    TK_VAR = 314,
    TK_WHILE = 315,
    TK_SET = 316,
    TK_STARSTAR = 317,
    TK_CHAR = 318,
    TK_STRING = 319,
    TK_INTEGER = 320,
    TK_SYS_CON = 321,
    TK_SYS_FUNCT = 322,
    TK_WITH = 323,
    TK_NIL = 324,
    ERROR = 325,
    TK_PROGRAM_HEAD = 326,
    TK_ROUTINE = 327,
    TK_ROUTINE_PART = 328,
    TK_ROUTINE_HEAD = 329,
    TK_ROUTINE_BODY = 330,
    TK_CONST_PART = 331,
    TK_CONST_PART_END = 332,
    TK_TYPE_PART = 333,
    TK_TYPE_PART_END = 334,
    TK_VAR_PART = 335,
    TK_VAR_PART_END = 336,
    TK_ROUTINE_PART_RF = 337,
    TK_ROUTINE_PART_RP = 338,
    TK_ROUTINE_PART_FUNC = 339,
    TK_ROUTINE_PART_PROC = 340,
    TK_ROUTINE_PART_NULL = 341,
    TK_STMT_LIST = 342,
    TK_STMT_LIST_NULL = 343,
    TK_STMT_LABEL = 344,
    TK_STMT = 345,
    TK_CP_STMT = 346,
    TK_VAL_PARA_LIST = 347,
    TK_NON_LABEL_STMT_ASSIGN = 348,
    TK_NON_LABEL_STMT_PROC = 349,
    TK_NON_LABEL_STMT_CP = 350,
    TK_NON_LABEL_STMT_IF = 351,
    TK_NON_LABEL_STMT_REP = 352,
    TK_NON_LABEL_STMT_WHILE = 353,
    TK_NON_LABEL_STMT_FOR = 354,
    TK_NON_LABEL_STMT_CASE = 355,
    TK_NON_LABEL_STMT_GOTO = 356,
    TK_EXP_LIST = 357,
    TK_EXP_LIST_END = 358,
    TK_EXP = 359,
    TK_TERM = 360,
    TK_FACTOR_ID = 361,
    TK_FACTOR_ID_ARGS = 362,
    TK_FACTOR_SYS_FUNCT = 363,
    TK_FACTOR_CONST = 364,
    TK_FACTOR_EXP = 365,
    TK_FACTOR_NOT = 366,
    TK_FACTOR_MINUS = 367,
    TK_FACTOR_ID_EXP = 368,
    TK_FACTOR_DD = 369,
    TK_ARGS_LIST = 370,
    TK_ARGS_LIST_END = 371,
    TK_CONST_EL = 372,
    TK_CONST_EL_END = 373,
    TK_TYPE_DL = 374,
    TK_TYPE_DL_END = 375,
    TK_TYPE_DEF = 376,
    TK_TYPE_DECL = 377,
    TK_TYPE_DECL_SIM = 378,
    TK_TYPE_DECL_ARR = 379,
    TK_TYPE_DECL_REC = 380,
    TK_FIELD_DL = 381,
    TK_FIELD_DL_END = 382,
    TK_FIELD_DECL = 383,
    TK_NL = 384,
    TK_NL_END = 385,
    TK_STD_SYS_TYPE = 386,
    TK_STD_ID = 387,
    TK_STD_NL = 388,
    TK_STD_DD = 389,
    TK_STD_DD_M = 390,
    TK_STD_DD_MM = 391,
    TK_STD_DD_ID = 392,
    TK_DL = 393,
    TK_DL_END = 394,
    TK_VAR_DECL = 395,
    TK_FUNC_DECL = 396,
    TK_FUNC_HEAD = 397,
    TK_PROC_DECL = 398,
    TK_PROC_HEAD = 399,
    TK_PARA = 400,
    TK_PARA_TL = 401,
    TK_PARA_NULL = 402,
    TK_PARA_DL = 403,
    TK_PARA_DL_END = 404,
    TK_PARA_TL_VAR = 405,
    TK_PARA_TL_VAL = 406,
    TK_PARA_TL_END = 407,
    TK_PROC = 408,
    TK_CASE_EL = 409,
    TK_CASE_EL_END = 410,
    TK_CASE_EXPR = 411,
    TK_CASE_EXPR_END = 412,
    TK_EXPR = 413,
    TK_ASSIGN_ID = 414,
    TK_ASSIGN_ID_EXPR = 415,
    TK_ASSIGN_DD = 416,
    TK_PROC_ID = 417,
    TK_PROC_ID_ARGS = 418,
    TK_PROC_SYS = 419,
    TK_PROC_SYS_ARGS = 420,
    TK_PROC_READ = 421,
    TK_STMT_ASSIGN = 422,
    TK_STMT_PROC = 423,
    TK_STMT_CP = 424
  };
#endif
/* Tokens.  */
#define TK_AND 258
#define TK_ARRAY 259
#define TK_ASSIGN 260
#define TK_CASE 261
#define TK_TYPE 262
#define TK_SYS_TYPE 263
#define TK_COLON 264
#define TK_COMMA 265
#define TK_CONST 266
#define TK_DIGITS 267
#define TK_DIV 268
#define TK_DO 269
#define TK_DOT 270
#define TK_DOTDOT 271
#define TK_DOWNTO 272
#define TK_ELSE 273
#define TK_ELSE_NULL 274
#define TK_END 275
#define TK_EQUAL 276
#define TK_FOR 277
#define TK_FUNCTION 278
#define TK_GE 279
#define TK_GOTO 280
#define TK_GT 281
#define TK_ID 282
#define TK_REF 283
#define TK_IF 284
#define TK_IN 285
#define TK_LB 286
#define TK_LE 287
#define TK_LP 288
#define TK_LT 289
#define TK_MINUS 290
#define TK_MOD 291
#define TK_UNEQUAL 292
#define TK_OF 293
#define TK_OR 294
#define TK_OTHERWISE 295
#define TK_BEGIN 296
#define TK_PLUS 297
#define TK_PROCEDURE 298
#define TK_PROGRAM 299
#define TK_RB 300
#define TK_REAL 301
#define TK_RECORD 302
#define TK_REPEAT 303
#define TK_RP 304
#define TK_SYS_PROC 305
#define TK_READ 306
#define TK_SEMI 307
#define TK_MUL 308
#define TK_THEN 309
#define TK_NOT 310
#define TK_TO 311
#define TK_UNTIL 312
#define TK_UPARROW 313
#define TK_VAR 314
#define TK_WHILE 315
#define TK_SET 316
#define TK_STARSTAR 317
#define TK_CHAR 318
#define TK_STRING 319
#define TK_INTEGER 320
#define TK_SYS_CON 321
#define TK_SYS_FUNCT 322
#define TK_WITH 323
#define TK_NIL 324
#define ERROR 325
#define TK_PROGRAM_HEAD 326
#define TK_ROUTINE 327
#define TK_ROUTINE_PART 328
#define TK_ROUTINE_HEAD 329
#define TK_ROUTINE_BODY 330
#define TK_CONST_PART 331
#define TK_CONST_PART_END 332
#define TK_TYPE_PART 333
#define TK_TYPE_PART_END 334
#define TK_VAR_PART 335
#define TK_VAR_PART_END 336
#define TK_ROUTINE_PART_RF 337
#define TK_ROUTINE_PART_RP 338
#define TK_ROUTINE_PART_FUNC 339
#define TK_ROUTINE_PART_PROC 340
#define TK_ROUTINE_PART_NULL 341
#define TK_STMT_LIST 342
#define TK_STMT_LIST_NULL 343
#define TK_STMT_LABEL 344
#define TK_STMT 345
#define TK_CP_STMT 346
#define TK_VAL_PARA_LIST 347
#define TK_NON_LABEL_STMT_ASSIGN 348
#define TK_NON_LABEL_STMT_PROC 349
#define TK_NON_LABEL_STMT_CP 350
#define TK_NON_LABEL_STMT_IF 351
#define TK_NON_LABEL_STMT_REP 352
#define TK_NON_LABEL_STMT_WHILE 353
#define TK_NON_LABEL_STMT_FOR 354
#define TK_NON_LABEL_STMT_CASE 355
#define TK_NON_LABEL_STMT_GOTO 356
#define TK_EXP_LIST 357
#define TK_EXP_LIST_END 358
#define TK_EXP 359
#define TK_TERM 360
#define TK_FACTOR_ID 361
#define TK_FACTOR_ID_ARGS 362
#define TK_FACTOR_SYS_FUNCT 363
#define TK_FACTOR_CONST 364
#define TK_FACTOR_EXP 365
#define TK_FACTOR_NOT 366
#define TK_FACTOR_MINUS 367
#define TK_FACTOR_ID_EXP 368
#define TK_FACTOR_DD 369
#define TK_ARGS_LIST 370
#define TK_ARGS_LIST_END 371
#define TK_CONST_EL 372
#define TK_CONST_EL_END 373
#define TK_TYPE_DL 374
#define TK_TYPE_DL_END 375
#define TK_TYPE_DEF 376
#define TK_TYPE_DECL 377
#define TK_TYPE_DECL_SIM 378
#define TK_TYPE_DECL_ARR 379
#define TK_TYPE_DECL_REC 380
#define TK_FIELD_DL 381
#define TK_FIELD_DL_END 382
#define TK_FIELD_DECL 383
#define TK_NL 384
#define TK_NL_END 385
#define TK_STD_SYS_TYPE 386
#define TK_STD_ID 387
#define TK_STD_NL 388
#define TK_STD_DD 389
#define TK_STD_DD_M 390
#define TK_STD_DD_MM 391
#define TK_STD_DD_ID 392
#define TK_DL 393
#define TK_DL_END 394
#define TK_VAR_DECL 395
#define TK_FUNC_DECL 396
#define TK_FUNC_HEAD 397
#define TK_PROC_DECL 398
#define TK_PROC_HEAD 399
#define TK_PARA 400
#define TK_PARA_TL 401
#define TK_PARA_NULL 402
#define TK_PARA_DL 403
#define TK_PARA_DL_END 404
#define TK_PARA_TL_VAR 405
#define TK_PARA_TL_VAL 406
#define TK_PARA_TL_END 407
#define TK_PROC 408
#define TK_CASE_EL 409
#define TK_CASE_EL_END 410
#define TK_CASE_EXPR 411
#define TK_CASE_EXPR_END 412
#define TK_EXPR 413
#define TK_ASSIGN_ID 414
#define TK_ASSIGN_ID_EXPR 415
#define TK_ASSIGN_DD 416
#define TK_PROC_ID 417
#define TK_PROC_ID_ARGS 418
#define TK_PROC_SYS 419
#define TK_PROC_SYS_ARGS 420
#define TK_PROC_READ 421
#define TK_STMT_ASSIGN 422
#define TK_STMT_PROC 423
#define TK_STMT_CP 424

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 461 "yy.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   336

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  170
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  258

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   424

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    40,    40,    53,    65,    76,    89,    98,   108,   130,
     146,   152,   158,   164,   170,   178,   185,   194,   209,   219,
     230,   238,   246,   256,   268,   279,   295,   305,   317,   334,
     344,   353,   361,   369,   378,   388,   399,   410,   417,   425,
     441,   451,   463,   479,   495,   503,   511,   519,   531,   544,
     556,   568,   575,   584,   601,   612,   622,   634,   643,   651,
     659,   682,   690,   700,   711,   719,   727,   735,   741,   747,
     753,   759,   765,   773,   783,   794,   808,   816,   826,   834,
     844,   856,   864,   877,   883,   891,   903,   915,   930,   937,
     946,   958,   975,   986,   996,  1008,  1019,  1036,  1046,  1058,
    1069,  1080,  1091,  1102,  1113,  1124,  1136,  1148,  1160,  1172,
    1183,  1194,  1205,  1216,  1227,  1236,  1246,  1256,  1264,  1273,
    1281,  1289,  1299,  1311,  1328
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_AND", "TK_ARRAY", "TK_ASSIGN",
  "TK_CASE", "TK_TYPE", "TK_SYS_TYPE", "TK_COLON", "TK_COMMA", "TK_CONST",
  "TK_DIGITS", "TK_DIV", "TK_DO", "TK_DOT", "TK_DOTDOT", "TK_DOWNTO",
  "TK_ELSE", "TK_ELSE_NULL", "TK_END", "TK_EQUAL", "TK_FOR", "TK_FUNCTION",
  "TK_GE", "TK_GOTO", "TK_GT", "TK_ID", "TK_REF", "TK_IF", "TK_IN",
  "TK_LB", "TK_LE", "TK_LP", "TK_LT", "TK_MINUS", "TK_MOD", "TK_UNEQUAL",
  "TK_OF", "TK_OR", "TK_OTHERWISE", "TK_BEGIN", "TK_PLUS", "TK_PROCEDURE",
  "TK_PROGRAM", "TK_RB", "TK_REAL", "TK_RECORD", "TK_REPEAT", "TK_RP",
  "TK_SYS_PROC", "TK_READ", "TK_SEMI", "TK_MUL", "TK_THEN", "TK_NOT",
  "TK_TO", "TK_UNTIL", "TK_UPARROW", "TK_VAR", "TK_WHILE", "TK_SET",
  "TK_STARSTAR", "TK_CHAR", "TK_STRING", "TK_INTEGER", "TK_SYS_CON",
  "TK_SYS_FUNCT", "TK_WITH", "TK_NIL", "ERROR", "TK_PROGRAM_HEAD",
  "TK_ROUTINE", "TK_ROUTINE_PART", "TK_ROUTINE_HEAD", "TK_ROUTINE_BODY",
  "TK_CONST_PART", "TK_CONST_PART_END", "TK_TYPE_PART", "TK_TYPE_PART_END",
  "TK_VAR_PART", "TK_VAR_PART_END", "TK_ROUTINE_PART_RF",
  "TK_ROUTINE_PART_RP", "TK_ROUTINE_PART_FUNC", "TK_ROUTINE_PART_PROC",
  "TK_ROUTINE_PART_NULL", "TK_STMT_LIST", "TK_STMT_LIST_NULL",
  "TK_STMT_LABEL", "TK_STMT", "TK_CP_STMT", "TK_VAL_PARA_LIST",
  "TK_NON_LABEL_STMT_ASSIGN", "TK_NON_LABEL_STMT_PROC",
  "TK_NON_LABEL_STMT_CP", "TK_NON_LABEL_STMT_IF", "TK_NON_LABEL_STMT_REP",
  "TK_NON_LABEL_STMT_WHILE", "TK_NON_LABEL_STMT_FOR",
  "TK_NON_LABEL_STMT_CASE", "TK_NON_LABEL_STMT_GOTO", "TK_EXP_LIST",
  "TK_EXP_LIST_END", "TK_EXP", "TK_TERM", "TK_FACTOR_ID",
  "TK_FACTOR_ID_ARGS", "TK_FACTOR_SYS_FUNCT", "TK_FACTOR_CONST",
  "TK_FACTOR_EXP", "TK_FACTOR_NOT", "TK_FACTOR_MINUS", "TK_FACTOR_ID_EXP",
  "TK_FACTOR_DD", "TK_ARGS_LIST", "TK_ARGS_LIST_END", "TK_CONST_EL",
  "TK_CONST_EL_END", "TK_TYPE_DL", "TK_TYPE_DL_END", "TK_TYPE_DEF",
  "TK_TYPE_DECL", "TK_TYPE_DECL_SIM", "TK_TYPE_DECL_ARR",
  "TK_TYPE_DECL_REC", "TK_FIELD_DL", "TK_FIELD_DL_END", "TK_FIELD_DECL",
  "TK_NL", "TK_NL_END", "TK_STD_SYS_TYPE", "TK_STD_ID", "TK_STD_NL",
  "TK_STD_DD", "TK_STD_DD_M", "TK_STD_DD_MM", "TK_STD_DD_ID", "TK_DL",
  "TK_DL_END", "TK_VAR_DECL", "TK_FUNC_DECL", "TK_FUNC_HEAD",
  "TK_PROC_DECL", "TK_PROC_HEAD", "TK_PARA", "TK_PARA_TL", "TK_PARA_NULL",
  "TK_PARA_DL", "TK_PARA_DL_END", "TK_PARA_TL_VAR", "TK_PARA_TL_VAL",
  "TK_PARA_TL_END", "TK_PROC", "TK_CASE_EL", "TK_CASE_EL_END",
  "TK_CASE_EXPR", "TK_CASE_EXPR_END", "TK_EXPR", "TK_ASSIGN_ID",
  "TK_ASSIGN_ID_EXPR", "TK_ASSIGN_DD", "TK_PROC_ID", "TK_PROC_ID_ARGS",
  "TK_PROC_SYS", "TK_PROC_SYS_ARGS", "TK_PROC_READ", "TK_STMT_ASSIGN",
  "TK_STMT_PROC", "TK_STMT_CP", "$accept", "program", "program_head",
  "routine", "routine_head", "const_part", "const_expr_list",
  "const_value", "type_part", "type_decl_list", "type_definition",
  "type_decl", "array_type_decl", "record_type_decl", "field_decl_list",
  "field_decl", "name_list", "simple_type_decl", "var_part",
  "var_decl_list", "var_decl", "routine_part", "function_decl",
  "function_head", "procedure_decl", "procedure_head", "parameters",
  "para_decl_list", "para_type_list", "var_para_list", "val_para_list",
  "routine_body", "stmt_list", "stmt", "non_label_stmt", "assign_stmt",
  "proc_stmt", "compound_stmt", "if_stmt", "else_clause", "repeat_stmt",
  "while_stmt", "for_stmt", "direction", "case_stmt", "case_expr_list",
  "case_expr", "goto_stmt", "expression_list", "expression", "expr",
  "term", "factor", "args_list", YY_NULLPTR
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424
};
# endif

#define YYPACT_NINF -144

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-144)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -29,    21,    25,    23,    26,  -144,    37,    54,    34,    73,
    -144,    78,    80,  -144,  -144,  -144,  -144,    83,    46,   -33,
      94,   100,    97,    83,  -144,    96,    40,  -144,  -144,  -144,
    -144,  -144,    69,   -33,   142,  -144,   101,    71,    93,   142,
    -144,   106,   120,   142,   146,   105,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,     8,  -144,  -144,   137,
      96,  -144,   144,   147,    40,  -144,   124,  -144,   128,  -144,
     129,     5,   142,   142,   142,   150,  -144,   288,   110,    49,
    -144,   181,  -144,   142,   163,   142,   142,   209,   113,   142,
     142,   273,    17,  -144,   161,  -144,   180,    96,   -33,    96,
     183,   159,  -144,  -144,  -144,     8,   177,  -144,   190,   190,
    -144,  -144,    23,    23,  -144,   197,   142,   142,   233,  -144,
    -144,   142,   142,   142,   142,   142,   142,   142,   173,   142,
     142,   142,   142,   142,   142,   142,   142,   295,   221,   247,
     295,    -2,   162,   142,     0,   295,   182,   162,  -144,    68,
     217,     7,   239,    -1,  -144,   157,   -33,  -144,   204,  -144,
      -9,   251,  -144,   210,   214,  -144,   259,    11,  -144,    12,
     110,   110,   110,   110,   110,   110,   252,   260,   152,  -144,
      49,    49,    49,  -144,  -144,  -144,  -144,   208,   142,   267,
     142,  -144,   256,   295,   142,  -144,  -144,  -144,   241,  -144,
    -144,   212,  -144,  -144,     8,  -144,  -144,    96,   279,   -25,
    -144,   281,   292,    68,  -144,  -144,  -144,  -144,  -144,   162,
     162,  -144,  -144,  -144,  -144,   142,   295,   142,   295,   162,
    -144,   295,   264,   -33,  -144,   261,   279,  -144,    -9,    68,
      68,  -144,   263,   265,   274,   295,  -144,     8,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,   162,  -144,  -144
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     7,     0,     1,     0,     0,     0,    16,
       3,     0,     6,     2,    61,     4,    59,     0,    38,     0,
       0,     0,     0,    15,    18,     0,    46,    11,    12,    13,
      10,    14,     0,     0,     0,    81,     0,     0,    76,     0,
      61,    78,     0,     0,     0,     0,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,     0,    17,    29,     0,
      37,    40,     0,     0,     5,    44,     0,    45,     0,     9,
       0,   114,     0,     0,     0,     0,   117,     0,   104,   108,
     113,     0,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    60,     0,    30,    31,     0,     0,     0,
       0,     0,    21,    22,    20,     0,     0,    39,    52,    52,
      42,    43,     7,     7,     8,     0,     0,     0,     0,   120,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,     0,     0,
     124,     0,     0,     0,     0,    97,     0,     0,    62,     0,
       0,     0,     0,     0,    26,     0,     0,    19,     0,    28,
       0,     0,    50,     0,     0,   122,     0,     0,   118,     0,
     102,    98,    99,   100,   101,   103,     0,     0,     0,    92,
     106,   107,   105,   112,   110,   111,   109,     0,     0,     0,
       0,    77,    84,    85,     0,    79,    80,    86,     0,    36,
      32,     0,    24,    25,     0,    33,    41,     0,    58,     0,
      54,     0,     0,     0,    47,    49,   121,   115,   116,     0,
       0,    90,    91,    89,    88,     0,    75,     0,   123,     0,
      82,    96,     0,     0,    34,     0,    57,    51,     0,     0,
       0,    48,     0,     0,     0,    74,    83,     0,    35,    27,
      53,    55,    56,    94,    93,     0,    23,    87
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,  -144,  -144,    89,  -144,  -144,  -144,   -19,  -144,  -144,
     280,  -104,  -144,  -144,  -144,   165,   -94,  -143,  -144,  -144,
     268,  -144,   266,  -144,   269,  -144,   215,  -144,    85,  -144,
    -144,  -144,   291,  -138,   242,  -144,  -144,   327,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,   158,  -144,  -144,   -32,
     126,   -37,   -45,    -5
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,     8,     9,    12,    76,    18,    23,
      24,   101,   102,   103,   153,   154,    59,   104,    26,    60,
      61,    64,    65,    66,    67,    68,   161,   209,   210,   211,
     212,    15,    21,    45,    46,    47,    48,    49,    50,   230,
      51,    52,    53,   225,    54,   178,   179,    55,   144,   140,
      78,    79,    80,   141
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      32,   158,    77,   151,   192,   155,   198,    87,   190,   197,
     194,    91,    94,    27,    70,     1,    95,   106,    58,   202,
     115,   190,   190,    34,   237,     5,    58,   238,   119,   120,
      28,    29,    30,    31,     6,    96,   116,   100,   117,    36,
     118,    97,    37,    98,    38,   146,    39,   191,     4,   195,
     207,   137,   132,   139,    27,    99,   200,   145,    14,   155,
     217,   218,   133,    62,    11,    40,   208,    41,    42,    13,
     241,    28,    29,    30,    31,    14,    95,    43,    10,   152,
      17,   242,   243,    63,   166,   134,   100,   183,   184,   185,
     186,   246,   180,   181,   182,    96,   251,   252,    83,    19,
     235,    97,   135,    98,   187,    25,    34,    20,    84,   177,
      22,   193,   167,   236,    27,    33,   169,   257,    56,    34,
      35,    69,    36,    58,    85,    37,    86,    38,    81,    39,
     100,    28,    29,    30,    31,    36,    82,   205,    37,    89,
      38,    14,    39,   256,   208,   129,   105,   106,    40,   130,
      41,    42,   131,    90,    14,    92,   226,    93,   228,   177,
      43,    40,   231,    41,    42,    44,   204,   106,    34,    71,
     143,   108,   221,    43,   109,    72,   112,    73,    44,   176,
     113,   114,   234,   121,    36,   100,   136,    37,    27,    38,
     138,    39,   149,   244,   100,   245,   150,    74,    27,   156,
     176,   163,   164,    14,   159,    28,    29,    30,    31,    75,
      40,   157,    41,    42,   248,    28,    29,    30,    31,    27,
     100,   100,    43,   160,   165,   223,   188,    44,   100,   122,
     122,   196,   123,   123,   124,   124,    28,    29,    30,    31,
     125,   125,   126,   126,   199,   127,   127,   233,   170,   171,
     172,   173,   174,   175,   122,   201,   206,   123,    27,   124,
     213,   219,   214,   142,   224,   125,   215,   126,   122,   220,
     127,   123,   227,   124,   229,    28,    29,    30,    31,   125,
     122,   126,   168,   123,   127,   124,   232,   147,   255,   106,
     239,   125,   189,   126,   122,   122,   127,   123,   123,   124,
     124,   240,   247,    57,   216,   125,   125,   126,   126,   122,
     127,   127,   123,   249,   124,   253,   122,   254,   203,   123,
     125,   124,   126,   250,   162,   127,   128,   125,   107,   126,
     110,    88,   127,   111,   148,    16,   222
};

static const yytype_uint8 yycheck[] =
{
      19,   105,    34,    97,   142,    99,   149,    39,    10,   147,
      10,    43,     4,    46,    33,    44,     8,    10,    27,    20,
      15,    10,    10,     6,    49,     0,    27,    52,    73,    74,
      63,    64,    65,    66,    11,    27,    31,    56,    33,    22,
      72,    33,    25,    35,    27,    90,    29,    49,    27,    49,
      59,    83,     3,    85,    46,    47,    49,    89,    41,   153,
      49,    49,    13,    23,    27,    48,   160,    50,    51,    15,
     213,    63,    64,    65,    66,    41,     8,    60,    52,    98,
       7,   219,   220,    43,   116,    36,   105,   132,   133,   134,
     135,   229,   129,   130,   131,    27,   239,   240,     5,    21,
     204,    33,    53,    35,   136,    59,     6,    27,    15,   128,
      27,   143,   117,   207,    46,    21,   121,   255,    21,     6,
      20,    52,    22,    27,    31,    25,    33,    27,    27,    29,
     149,    63,    64,    65,    66,    22,    65,   156,    25,    33,
      27,    41,    29,   247,   238,    35,     9,    10,    48,    39,
      50,    51,    42,    33,    41,     9,   188,    52,   190,   178,
      60,    48,   194,    50,    51,    65,     9,    10,     6,    27,
      57,    27,    20,    60,    27,    33,    52,    35,    65,    27,
      52,    52,   201,    33,    22,   204,     5,    25,    46,    27,
      27,    29,    31,   225,   213,   227,    16,    55,    46,    16,
      27,   112,   113,    41,    27,    63,    64,    65,    66,    67,
      48,    52,    50,    51,   233,    63,    64,    65,    66,    46,
     239,   240,    60,    33,    27,    17,     5,    65,   247,    21,
      21,    49,    24,    24,    26,    26,    63,    64,    65,    66,
      32,    32,    34,    34,    27,    37,    37,    35,   122,   123,
     124,   125,   126,   127,    21,    16,    52,    24,    46,    26,
       9,     9,    52,    54,    56,    32,    52,    34,    21,     9,
      37,    24,     5,    26,    18,    63,    64,    65,    66,    32,
      21,    34,    49,    24,    37,    26,    45,    14,    14,    10,
       9,    32,    45,    34,    21,    21,    37,    24,    24,    26,
      26,     9,    38,    23,    45,    32,    32,    34,    34,    21,
      37,    37,    24,    52,    26,    52,    21,    52,   153,    24,
      32,    26,    34,   238,   109,    37,    38,    32,    60,    34,
      64,    40,    37,    64,    92,     8,   178
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    44,   171,   172,    27,     0,    11,   173,   174,   175,
      52,    27,   176,    15,    41,   201,   207,     7,   178,    21,
      27,   202,    27,   179,   180,    59,   188,    46,    63,    64,
      65,    66,   177,    21,     6,    20,    22,    25,    27,    29,
      48,    50,    51,    60,    65,   203,   204,   205,   206,   207,
     208,   210,   211,   212,   214,   217,    21,   180,    27,   186,
     189,   190,    23,    43,   191,   192,   193,   194,   195,    52,
     177,    27,    33,    35,    55,    67,   177,   219,   220,   221,
     222,    27,    65,     5,    15,    31,    33,   219,   202,    33,
      33,   219,     9,    52,     4,     8,    27,    33,    35,    47,
     177,   181,   182,   183,   187,     9,    10,   190,    27,    27,
     192,   194,    52,    52,    52,    15,    31,    33,   219,   222,
     222,    33,    21,    24,    26,    32,    34,    37,    38,    35,
      39,    42,     3,    13,    36,    53,     5,   219,    27,   219,
     219,   223,    54,    57,   218,   219,   222,    14,   204,    31,
      16,   186,   177,   184,   185,   186,    16,    52,   181,    27,
      33,   196,   196,   173,   173,    27,   219,   223,    49,   223,
     220,   220,   220,   220,   220,   220,    27,   177,   215,   216,
     221,   221,   221,   222,   222,   222,   222,   219,     5,    45,
      10,    49,   203,   219,    10,    49,    49,   203,   187,    27,
      49,    16,    20,   185,     9,   177,    52,    59,   186,   197,
     198,   199,   200,     9,    52,    52,    45,    49,    49,     9,
       9,    20,   216,    17,    56,   213,   219,     5,   219,    18,
     209,   219,    45,    35,   177,   181,   186,    49,    52,     9,
       9,   187,   203,   203,   219,   219,   203,    38,   177,    52,
     198,   187,   187,    52,    52,    14,   181,   203
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   170,   171,   172,   173,   174,   175,   175,   176,   176,
     177,   177,   177,   177,   177,   178,   178,   179,   179,   180,
     181,   181,   181,   182,   183,   184,   184,   185,   186,   186,
     187,   187,   187,   187,   187,   187,   187,   188,   188,   189,
     189,   190,   191,   191,   191,   191,   191,   192,   193,   194,
     195,   196,   196,   197,   197,   198,   198,   199,   200,   201,
     202,   202,   203,   203,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   205,   205,   205,   206,   206,   206,   206,
     206,   207,   208,   209,   209,   210,   211,   212,   213,   213,
     214,   215,   215,   216,   216,   217,   218,   218,   219,   219,
     219,   219,   219,   219,   219,   220,   220,   220,   220,   221,
     221,   221,   221,   221,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   223,   223
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     2,     4,     2,     0,     5,     4,
       1,     1,     1,     1,     1,     2,     0,     2,     1,     4,
       1,     1,     1,     6,     3,     2,     1,     4,     3,     1,
       1,     1,     3,     3,     4,     5,     3,     2,     0,     2,
       1,     4,     2,     2,     1,     1,     0,     4,     5,     4,
       3,     3,     0,     3,     1,     3,     3,     2,     1,     1,
       3,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     6,     5,     1,     4,     1,     4,
       4,     3,     5,     2,     0,     4,     4,     8,     1,     1,
       5,     2,     1,     4,     4,     2,     3,     1,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     1,     3,
       3,     3,     3,     1,     1,     4,     4,     1,     3,     2,
       2,     4,     3,     3,     1
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
#line 40 "syntax.y" /* yacc.c:1646  */
    {
            if(DEBUG){
                printf("PARSING PROGRAM\n");
            }
            (yyval) = NEWNODE(TK_PROGRAM);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[-2]);
            (yyval)->child[1] = (yyvsp[-1]);

            ROOT = (yyval);
        }
#line 1805 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 53 "syntax.y" /* yacc.c:1646  */
    {
        //NOTE: PROGRAM HEAD ACTUALLY IS TK_ID
            if(DEBUG){
                printf("PROGRAM HEAD:%s\n", (yyvsp[-1])->name);
            }
            (yyval) = (yyvsp[-1]);
            (yyval)->type = TK_PROGRAM_HEAD;
            (yyval)->child_number = 0;
            (yyval)->child = NULL;
        }
#line 1820 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 65 "syntax.y" /* yacc.c:1646  */
    {
            if(DEBUG){
                printf("PARSING ROUTINE\n");
            }
            (yyval) = NEWNODE(TK_ROUTINE);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[-1]);
            (yyval)->child[1] = (yyvsp[0]);
        }
#line 1834 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 76 "syntax.y" /* yacc.c:1646  */
    {
            if(DEBUG){
                printf("PARSING ROUTINE HEAD\n");
            }
            (yyval) = NEWNODE(TK_ROUTINE_HEAD);
            (yyval)->child = MALLOC((yyval),4);
            (yyval)->child[0] = (yyvsp[-3]);
            (yyval)->child[1] = (yyvsp[-2]);
            (yyval)->child[2] = (yyvsp[-1]);
            (yyval)->child[3] = (yyvsp[0]);
        }
#line 1850 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 89 "syntax.y" /* yacc.c:1646  */
    {
        //NOTE: IGNORE TK_CONST
            if(DEBUG){
                printf("PARSING CONST PART\n");
            }
            (yyval) = NEWNODE(TK_CONST_PART);
            (yyval)->child = MALLOC((yyval),1);
            (yyval)->child[0] = (yyvsp[-1]);
        }
#line 1864 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 98 "syntax.y" /* yacc.c:1646  */
    {
            if(DEBUG){
                printf("PARSING CONST PART NULL\n");
            }
            (yyval) = NEWNODE(TK_CONST_PART_END);
            (yyval)->child_number = 0;
            (yyval)->child = NULL;
        }
#line 1877 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 108 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_EQUAL TK_SEMI
                    if(DEBUG){
                        printf("PARSING CONST EXPR LIST\n");
                    }
                    (yyval) = (yyvsp[-4]);
                    NODE* node = NEWNODE(TK_CONST_EL_END);
                    node->child = MALLOC(node,2);
                    node->child[0] = (yyvsp[-3]);
                    node->child[1] = (yyvsp[-1]);

                    NODE** tmp = (yyval)->child;
                    int old_child_number = (yyval)->child_number;
                    (yyval)->child = MALLOC((yyval), (2+old_child_number));
                    int i;
                    for(i=0;i<old_child_number;i++){
                    	(yyval)->child[i] = tmp[i];
                    }
                    (yyval)->child[i] = node;

                    free(tmp);
                }
#line 1904 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 130 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_EQUAL TK_SEMI
                    if(DEBUG){
                        printf("PARSING CONST EXPR LIST : FIRST ONE\n");
                    }
                    (yyval) = NEWNODE(TK_CONST_EL);
                    NODE* node = NEWNODE(TK_CONST_EL_END);
                    (yyval)->child = MALLOC((yyval),1);
                    (yyval)->child[0] = node;

                    node->child = MALLOC((yyval),2);
                    node->child[0] = (yyvsp[-3]);
                    node->child[1] = (yyvsp[-1]);
                }
#line 1923 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 146 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING COSNT VALUE INTEGER\n");
                }
                (yyval) = (yyvsp[0]);
            }
#line 1934 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 152 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING COSNT VALUE REAL\n");
                }
                (yyval) = (yyvsp[0]);
            }
#line 1945 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 158 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING COSNT VALUE CHAR\n");
                }
                (yyval) = (yyvsp[0]);
            }
#line 1956 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 164 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING COSNT VALUE STRING\n");
                }
                (yyval) = (yyvsp[0]);
            }
#line 1967 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 170 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING COSNT VALUE SYS CON\n");
                }
                (yyval) = (yyvsp[0]);
            }
#line 1978 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 178 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TYPE
            if(DEBUG){
                printf("PARSING TYPE PART NULL\n");
            }
            (yyval) = (yyvsp[0]);
        }
#line 1990 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 185 "syntax.y" /* yacc.c:1646  */
    {
              //NOTE: IGNORE TYPE
                  if(DEBUG){
                      printf("PARSING TYPE PART NULL\n");
                  }
                (yyval)=NULL;
                }
#line 2002 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 194 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING TYPE DECL LIST DEF\n");
                    }
                    (yyval) = (yyvsp[-1]);

                    int old_child_number = (yyval)->child_number;
                    NODE** tmp = (yyval)->child;
                    (yyval)->child = MALLOC((yyval), (1+old_child_number));
                    int i;
                    for(i=0;i<old_child_number;i++){
                    	(yyval)->child[i] = tmp[i];
                    }
                    (yyval)->child[i] = (yyvsp[0]);
                }
#line 2022 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 209 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING TYPE DECL LIST\n");
                    }
                    (yyval) = NEWNODE(TK_TYPE_DL);
                    (yyval)->child = MALLOC((yyval),1);
                    (yyval)->child[0] = (yyvsp[0]);
               }
#line 2035 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 219 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING TYPE DEF\n");
                    }
                    (yyval) = NEWNODE(TK_TYPE_DEF);
                    (yyval)->child = MALLOC((yyval),2);
                    (yyval)->child[0] = (yyvsp[-3]);
                    (yyval)->child[1] = (yyvsp[-1]);
                }
#line 2049 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 230 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING TYPE DECL\n");
                }
                (yyval) = NEWNODE(TK_TYPE_DECL);
                (yyval)->child = MALLOC((yyval),1);
                (yyval)->child[0] = (yyvsp[0]);
          }
#line 2062 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 238 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING TYPE DECL\n");
                }
                (yyval) = NEWNODE(TK_TYPE_DECL);
                (yyval)->child = MALLOC((yyval),1);
                (yyval)->child[0] = (yyvsp[0]);
          }
#line 2075 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 246 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING TYPE DECL\n");
                }
                (yyval) = NEWNODE(TK_TYPE_DECL);
                (yyval)->child = MALLOC((yyval),1);
                (yyval)->child[0] = (yyvsp[0]);
          }
#line 2088 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 256 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_LB TK_RB TK_OF
                if(DEBUG){
                    printf("PARSING ARRAY\n");
                }
                (yyval) = NEWNODE(TK_ARRAY);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-3]);
                (yyval)->child[1] = (yyvsp[0]);
            }
#line 2103 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 268 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_END
                if(DEBUG){
                    printf("PARSING RECORD TYPE DECL\n");
                }
                (yyval) = NEWNODE(TK_RECORD);
                (yyval)->child = MALLOC((yyval),1);
                (yyval)->child[0] = (yyvsp[-1]);
            }
#line 2117 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 279 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING FIELD DECL LIST\n");
                }
                (yyval) = (yyvsp[-1]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                	(yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[0]);

                free(tmp);
            }
#line 2138 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 295 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING FIELD DECL LIST : FIRST ONE\n");
                }
                (yyval) = NEWNODE(TK_FIELD_DL);
                (yyval)->child = MALLOC((yyval),1);
                (yyval)->child[0] = (yyvsp[0]);
            }
#line 2151 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 305 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TK_COLON TK_SEMI
                if(DEBUG){
                    printf("PARSING FIELD DECL\n");
                }
                (yyval) = NEWNODE(TK_FIELD_DECL);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-3]);
                (yyval)->child[1] = (yyvsp[-1]);
            }
#line 2166 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 317 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: HERE TAG IS SIMPLIFIED AS 'TK_NL', IGNORE TK_COMMA
                if(DEBUG){
                    printf("PARSING NAME LIST\n");
                }
              	(yyval) = (yyvsp[-2]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                	(yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[0]);

                free(tmp);
            }
#line 2188 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 334 "syntax.y" /* yacc.c:1646  */
    {
                  if(DEBUG){
                      printf("PARSING NAME LIST : FIRST ONE\n");
                  }
                  (yyval) = NEWNODE(TK_NL);
                  (yyval)->child = MALLOC((yyval),1);
                  (yyval)->child[0] = (yyvsp[0]);
              }
#line 2201 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 344 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: HERE TAG IS SIMPLIFIED AS 'TK_STD' AND FOLLOWED BY A TYPE
                    if(DEBUG){
                        printf("PARSING SIMPLE TYPE DECL SYS TYPE\n");
                    }
                    (yyval) = NEWNODE(TK_STD_SYS_TYPE);
                    (yyval)->child = MALLOC((yyval),1);
                    (yyval)->child[0] = (yyvsp[0]);
                }
#line 2215 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 353 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING SIMPLE TYPE DECL ID\n");
                    }
                    (yyval) = NEWNODE(TK_STD_ID);
                    (yyval)->child = MALLOC((yyval),1);
                    (yyval)->child[0] = (yyvsp[0]);
                }
#line 2228 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 361 "syntax.y" /* yacc.c:1646  */
    {
                     if(DEBUG){
                        printf("PARSING SIMPLE TYPE DECL ID\n");
                    }
                    (yyval) = NEWNODE(TK_STD_NL);
                    (yyval)->child = MALLOC((yyval),1);
                    (yyval)->child[0] = (yyvsp[-1]);
                }
#line 2241 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 369 "syntax.y" /* yacc.c:1646  */
    {
                     if(DEBUG){
                        printf("PARSING SIMPLE TYPE DECL ID\n");
                    }
                    (yyval) = NEWNODE(TK_STD_DD);
                    (yyval)->child = MALLOC((yyval),2);
                    (yyval)->child[0] = (yyvsp[-2]);
                    (yyval)->child[1] = (yyvsp[0]);
                }
#line 2255 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 378 "syntax.y" /* yacc.c:1646  */
    {
                     if(DEBUG){
                        printf("PARSING SIMPLE TYPE DECL ID\n");
                    }
                    (yyval) = NEWNODE(TK_STD_DD_M);
                    (yyval)->child = MALLOC((yyval),3);
                    (yyval)->child[0] = (yyvsp[-3]);
                    (yyval)->child[1] = (yyvsp[-2]);
                    (yyval)->child[2] = (yyvsp[0]);
                }
#line 2270 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 388 "syntax.y" /* yacc.c:1646  */
    {
                     if(DEBUG){
                        printf("PARSING SIMPLE TYPE DECL ID\n");
                    }
                    (yyval) = NEWNODE(TK_STD_DD_MM);
                    (yyval)->child = MALLOC((yyval),4);
                    (yyval)->child[0] = (yyvsp[-4]);
                    (yyval)->child[1] = (yyvsp[-3]);
                    (yyval)->child[2] = (yyvsp[-1]);
                    (yyval)->child[3] = (yyvsp[0]);
                }
#line 2286 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 399 "syntax.y" /* yacc.c:1646  */
    {
                     if(DEBUG){
                        printf("PARSING SIMPLE TYPE DECL ID\n");
                    }
                    (yyval) = NEWNODE(TK_STD_DD_ID);
                    (yyval)->child = MALLOC((yyval),2);
                    (yyval)->child[0] = (yyvsp[-2]);
                    (yyval)->child[1] = (yyvsp[0]);
                }
#line 2300 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 410 "syntax.y" /* yacc.c:1646  */
    {
        //NOTE: IGNORE TK_VAR
            if(DEBUG){
                  printf("PARSING VAR PART NOT NULL\n");
              }
              (yyval) = (yyvsp[0]);
        }
#line 2312 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 417 "syntax.y" /* yacc.c:1646  */
    {
              if(DEBUG){
                  printf("PARSING VAR PART NULL\n");
              }
             (yyval) = NULL;
        }
#line 2323 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 425 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING VAR DECL LIST\n");
                }
                (yyval) = (yyvsp[-1]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                	(yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[0]);

                free(tmp);
            }
#line 2344 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 441 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING VAR DECL LIST : FIRST ONE\n");
                }
                (yyval) = NEWNODE(TK_DL);
                (yyval)->child = MALLOC((yyval),1);
                (yyval)->child[0] = (yyvsp[0]);
            }
#line 2357 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 451 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TK_COLON TK_SEMI
            if(DEBUG){
                printf("PARSING VAR DECL\n");
            }
            (yyval) = NEWNODE(TK_VAR_DECL);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[-3]);
            (yyval)->child[1] = (yyvsp[-1]);
        }
#line 2372 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 463 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING ROUTINE_PART\n");
                }
                (yyval) = (yyvsp[-1]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                	(yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[0]);

                free(tmp);
            }
#line 2393 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 479 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING ROUTINE_PART\n");
                }
                (yyval) = (yyvsp[-1]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                	(yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[0]);

                free(tmp);
            }
#line 2414 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 495 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING ROUTINE_PART\n");
                }
                (yyval) = NEWNODE(TK_ROUTINE_PART);
                (yyval)->child = MALLOC((yyval),1);
                (yyval)->child[0] = (yyvsp[0]);
            }
#line 2427 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 503 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING ROUTINE_PART\n");
                }
                (yyval) = NEWNODE(TK_ROUTINE_PART);
                (yyval)->child = MALLOC((yyval),1);
                (yyval)->child[0] = (yyvsp[0]);
            }
#line 2440 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 511 "syntax.y" /* yacc.c:1646  */
    {
                 if(DEBUG){
                     printf("PARSING ROUTINE_PART NULL\n");
                 }
                 (yyval) = NULL;
             }
#line 2451 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 519 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_SEMI
                if(DEBUG){
                    printf("PARSING FUNC DECL\n");
                }
                (yyval) = NEWNODE(TK_FUNC_DECL);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-3]);
                (yyval)->child[1] = (yyvsp[-1]);
            }
#line 2466 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 531 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_FUNCTION TK_COLON
                if(DEBUG){
                    printf("PARSING TK_FUNCTINO HEAD\n");
                }
                (yyval) = NEWNODE(TK_FUNC_HEAD);
                (yyval)->child = MALLOC((yyval),3);
                (yyval)->child[0] = (yyvsp[-3]);
                (yyval)->child[1] = (yyvsp[-2]);
                (yyval)->child[2] = (yyvsp[0]);
            }
#line 2482 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 544 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_SEMI PROCEDURE_DECL IS 'TK_PROC_DECL'
                if(DEBUG){
                    printf("PARSING PROC DECL\n");
                }
                (yyval) = NEWNODE(TK_PROC_DECL);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-3]);
                (yyval)->child[1] = (yyvsp[-1]);
            }
#line 2497 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 556 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_PROCEDURE  PROCEDURE_HEAD IS 'TK_PROC_HEAD'
                if(DEBUG){
                    printf("PARSING PROC HEAD\n");
                }
                (yyval) = NEWNODE(TK_PROC_HEAD);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-1]);
                (yyval)->child[1] = (yyvsp[0]);
            }
#line 2512 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 568 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: PARAMETERS IS 'TK_PARA', IGNORE TK_LP TK_RP
                if(DEBUG){
                    printf("PARSING PARA\n");
                }
                (yyval) = (yyvsp[-1]);
            }
#line 2524 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 575 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: PARAMETERS IS 'TK_PARA'
                if(DEBUG){
                    printf("PARSING PARA NULL\n");
                }
                (yyval) = NULL;
            }
#line 2536 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 584 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_SEMI PARA_DECL_LIST IS 'PARA_DL'
                if(DEBUG){
                    printf("PARSING PARA DECL LIST\n");
                }
                (yyval) = (yyvsp[-2]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                	(yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[0]);

                free(tmp);
            }
#line 2558 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 601 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_SEMI PARA_DECL_LIST IS 'PARA_DL'
                if(DEBUG){
                    printf("PARSING PARA DECL LIST : FIRST ONE\n");
                }
                (yyval) = NEWNODE(TK_PARA_DL);
                (yyval)->child = MALLOC((yyval),1);
                (yyval)->child[0] = (yyvsp[0]);
            }
#line 2572 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 612 "syntax.y" /* yacc.c:1646  */
    {
                    //NOTE: IGNORE TK_COLON PARA_TYPE_LIST IS 'PARA_TL'
                    if(DEBUG){
                        printf("PARSING TK_COLON\n");
                    }
                    (yyval) = NEWNODE(TK_PARA_TL_VAR);
                    (yyval)->child = MALLOC((yyval),2);
                    (yyval)->child[0] = (yyvsp[-2]);
                    (yyval)->child[1] = (yyvsp[0]);
                }
#line 2587 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 622 "syntax.y" /* yacc.c:1646  */
    {
                    //NOTE: IGNORE TK_COLON PARA_TYPE_LIST IS 'PARA_TL'
                    if(DEBUG){
                        printf("PARSING TK_COLON\n");
                    }
                    (yyval) = NEWNODE(TK_PARA_TL_VAL);
                    (yyval)->child = MALLOC((yyval),2);
                    (yyval)->child[0] = (yyvsp[-2]);
                    (yyval)->child[1] = (yyvsp[0]);
                }
#line 2602 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 634 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_VAR VAR_PARA_LIST IS "TK_VAR"
                if(DEBUG){
                    printf("PARSING VAR LIST\n");
                }
                (yyval) = (yyvsp[0]);
            }
#line 2614 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 643 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING VAL PARA LIST\n");
                }
                (yyval) = (yyvsp[0]);
            }
#line 2625 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 651 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING ROUTINE BODY\n");
                }
                (yyval) = (yyvsp[0]);
            }
#line 2636 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 659 "syntax.y" /* yacc.c:1646  */
    {
            if(DEBUG){
                printf("PARSING STMT LIST\n");
            }
            if((yyvsp[-2])==NULL){
          		(yyval) = NEWNODE(TK_STMT_LIST);
          		(yyval)->child = MALLOC((yyval), 1);
          		(yyval)->child[0] = (yyvsp[-1]);
            }
          	else{
          		(yyval) = (yyvsp[-2]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                	(yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[-1]);

                free(tmp);
          	}
        }
#line 2664 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 682 "syntax.y" /* yacc.c:1646  */
    {
              if(DEBUG){
                  printf("PARSING STMT LIST NULL\n");
              }
              (yyval)=NULL;
        }
#line 2675 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 690 "syntax.y" /* yacc.c:1646  */
    {
        //NOTE: IGNORE TK_COLON
        if(DEBUG){
            printf("PARSING STMT\n");
        }
        (yyval) = NEWNODE(TK_STMT_LABEL);
         (yyval)->child = MALLOC((yyval),2);
         (yyval)->child[0] = (yyvsp[-2]);
         (yyval)->child[1] = (yyvsp[0]);
    }
#line 2690 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 700 "syntax.y" /* yacc.c:1646  */
    {
         //NOTE: IGNORE TK_COLON
         if(DEBUG){
             printf("PARSING NON LABEL STMT\n");
         }
         (yyval) = NEWNODE(TK_STMT);
         (yyval)->child = MALLOC((yyval),1);
         (yyval)->child[0] = (yyvsp[0]);
     }
#line 2704 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 711 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING ASSIGN STMT\n");
                    }
                    (yyval) = NEWNODE(TK_STMT_ASSIGN);
                    (yyval)->child = MALLOC((yyval), 1);
                    (yyval)->child[0] = (yyvsp[0]);
                }
#line 2717 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 719 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING PROC STMT\n");
                    }
                    (yyval) = NEWNODE(TK_STMT_PROC);
                    (yyval)->child = MALLOC((yyval), 1);
                    (yyval)->child[0] = (yyvsp[0]);
                }
#line 2730 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 727 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING CP STMT\n");
                    }
                    (yyval) = NEWNODE(TK_STMT_CP);
                    (yyval)->child = MALLOC((yyval), 1);
                    (yyval)->child[0] = (yyvsp[0]);
                }
#line 2743 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 735 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING IF STMT\n");
                    }
                    (yyval) = (yyvsp[0]);
                }
#line 2754 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 741 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING REPEAT STMT\n");
                    }
                    (yyval) = (yyvsp[0]);
                }
#line 2765 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 747 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING WHILE STMT\n");
                    }
                    (yyval) = (yyvsp[0]);
                }
#line 2776 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 753 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING FOR STMT\n");
                    }
                    (yyval) = (yyvsp[0]);
                }
#line 2787 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 759 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING CASE STMT\n");
                    }
                    (yyval) = (yyvsp[0]);
                }
#line 2798 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 765 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING GOTO STMT\n");
                    }
                    (yyval) = (yyvsp[0]);
                }
#line 2809 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 773 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_ASSIGN
                if(DEBUG){
                    printf("PARSING ASSIGN\n");
                }
                (yyval) = NEWNODE(TK_ASSIGN_ID);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-2]);
                (yyval)->child[1] = (yyvsp[0]);
            }
#line 2824 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 783 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_ASSIGN TK_LB TK_RB
                if(DEBUG){
                    printf("PARSING ASSIGN\n");
                }
                (yyval) = NEWNODE(TK_ASSIGN_ID_EXPR);
                (yyval)->child = MALLOC((yyval),3);
                (yyval)->child[0] = (yyvsp[-5]);
                (yyval)->child[1] = (yyvsp[-3]);
                (yyval)->child[2] = (yyvsp[0]);
            }
#line 2840 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 794 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_ASSIGN TK_LB TK_RB
                if(DEBUG){
                    printf("PARSING ASSIGN\n");
                }
                (yyval) = NEWNODE(TK_ASSIGN_DD);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-4]);
                (yyval)->child[1] = (yyvsp[0]);

                (yyvsp[-4])->record = (yyvsp[-2]);
            }
#line 2857 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 808 "syntax.y" /* yacc.c:1646  */
    {
            if(DEBUG){
               printf("PARSING PROC STMT\n");
           }
           (yyval) = NEWNODE(TK_PROC_ID);
           (yyval)->child = MALLOC((yyval),1);
           (yyval)->child[0] = (yyvsp[0]);
        }
#line 2870 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 816 "syntax.y" /* yacc.c:1646  */
    {
           //NOTE: IGNROE TK_LP TK_RP
           if(DEBUG){
               printf("PARSING PROC STMT\n");
           }
           (yyval) = NEWNODE(TK_PROC_ID_ARGS);
           (yyval)->child = MALLOC((yyval),2);
           (yyval)->child[0] = (yyvsp[-3]);
           (yyval)->child[1] = (yyvsp[-1]);
          }
#line 2885 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 826 "syntax.y" /* yacc.c:1646  */
    {
            if(DEBUG){
               printf("PARSING PROC STMT\n");
           }
           (yyval) = NEWNODE(TK_PROC_SYS);
           (yyval)->child = MALLOC((yyval),1);
           (yyval)->child[0] = (yyvsp[0]);
        }
#line 2898 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 834 "syntax.y" /* yacc.c:1646  */
    {
           //NOTE: IGNROE TK_LP TK_RP
           if(DEBUG){
               printf("PARSING PROC STMT\n");
           }
           (yyval) = NEWNODE(TK_PROC_SYS_ARGS);
           (yyval)->child = MALLOC((yyval),2);
           (yyval)->child[0] = (yyvsp[-3]);
           (yyval)->child[1] = (yyvsp[-1]);
          }
#line 2913 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 844 "syntax.y" /* yacc.c:1646  */
    {
           //NOTE: IGNROE TK_LP TK_RP
           if(DEBUG){
               printf("PARSING PROC STMT\n");
           }
           (yyval) = NEWNODE(TK_PROC_READ);
           (yyval)->child = MALLOC((yyval),2);
           (yyval)->child[0] = (yyvsp[-3]);
           (yyval)->child[1] = (yyvsp[-1]);
          }
#line 2928 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 856 "syntax.y" /* yacc.c:1646  */
    {
            if(DEBUG){
                printf("PARSING CP STMT\n");
            }
            (yyval) = (yyvsp[-1]);
        }
#line 2939 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 864 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TK_IF TK_THEN
            if(DEBUG){
                printf("PARSING IF STMT\n");
            }
            (yyval) = NEWNODE(TK_IF);
            (yyval)->child = MALLOC((yyval),3);
            (yyval)->child[0] = (yyvsp[-3]);
            (yyval)->child[1] = (yyvsp[-1]);
            (yyval)->child[2] = (yyvsp[0]);
        }
#line 2955 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 877 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING ELSE CLAUSE\n");
                }
                (yyval) = (yyvsp[0]);
            }
#line 2966 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 883 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING ELSE CLAUSE NULL\n");
                }
                (yyval) = NULL;
            }
#line 2977 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 891 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_REPEAR TK_UNTIL
                if(DEBUG){
                    printf("PARSING REPEAT STMT\n");
                }
                (yyval) = NEWNODE(TK_REPEAT);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-2]);
                (yyval)->child[1] = (yyvsp[0]);
            }
#line 2992 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 903 "syntax.y" /* yacc.c:1646  */
    {
                //NOTE: IGNORE TK_WHILE TK_DO
                if(DEBUG){
                    printf("PARSING WHILE STMT\n");
                }
                (yyval) = NEWNODE(TK_WHILE);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[-2]);
                (yyval)->child[1] = (yyvsp[0]);
            }
#line 3007 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 915 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TK_FOR TK_ASSIGN TK_DO
            if(DEBUG){
                printf("PARSING FOR STMT\n");
            }
            (yyval) = NEWNODE(TK_FOR);
            (yyval)->child = MALLOC((yyval),5);
            (yyval)->child[0] = (yyvsp[-6]);
            (yyval)->child[1] = (yyvsp[-4]);
            (yyval)->child[2] = (yyvsp[-3]);
            (yyval)->child[3] = (yyvsp[-2]);
            (yyval)->child[4] = (yyvsp[0]);
        }
#line 3025 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 930 "syntax.y" /* yacc.c:1646  */
    {
        //NOTE: THERE IS NO DIR
            if(DEBUG){
                printf("PARSING DIR TO\n");
            }
            (yyval) = (yyvsp[0]);
        }
#line 3037 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 937 "syntax.y" /* yacc.c:1646  */
    {
        //NOTE: THERE IS NO DIR
            if(DEBUG){
                printf("PARSING DIR DOWNTO\n");
            }
            (yyval) = (yyvsp[0]);
        }
#line 3049 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 946 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TK_CASE TK_OF TK_END
            if(DEBUG){
                printf("PARSING CASE STMT\n");
            }
            (yyval) = NEWNODE(TK_CASE);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[-3]);
            (yyval)->child[1] = (yyvsp[-1]);
        }
#line 3064 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 958 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: CASE_EXPR_LIST IS 'TK_CASE_EL'
            if(DEBUG){
                printf("PARSING CASE EXPR LIST\n");
            }
            	(yyval) = (yyvsp[-1]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                	(yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[0]);

                free(tmp);
        }
#line 3086 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 975 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: CASE_EXPR_LIST IS 'TK_CASE_EL'
            if(DEBUG){
                printf("PARSING CASE EXPR LIST : FIRST ONE\n");
            }
            (yyval) = NEWNODE(TK_CASE_EL);
            (yyval)->child = MALLOC((yyval),1);
            (yyval)->child[0] = (yyvsp[0]);
        }
#line 3100 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 986 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TK_COLON TK_SEMI
            if(DEBUG){
                printf("PARSING CASE EXPR\n");
            }
            (yyval) = NEWNODE(TK_CASE_EXPR);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[-3]);
            (yyval)->child[1] = (yyvsp[-1]);
        }
#line 3115 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 996 "syntax.y" /* yacc.c:1646  */
    {
         //NOTE: IGNORE TK_COLON TK_SEMI
            if(DEBUG){
                printf("PARSING CASE EXPR\n");
            }
            (yyval) = NEWNODE(TK_CASE_EXPR_END);
            (yyval)->child = MALLOC((yyval),2);
            (yyval)->child[0] = (yyvsp[-3]);
            (yyval)->child[1] = (yyvsp[-1]);
        }
#line 3130 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 1008 "syntax.y" /* yacc.c:1646  */
    {
        //NOTE: GOTO STMT IS ACTUALLY TK_INTEGER
            if(DEBUG){
                printf("PARSING GOTO STMT\n");
            }
            (yyval) = (yyvsp[0]);
            (yyval)->type = TK_GOTO;
           	setName((yyval), TK_GOTO);
        }
#line 3144 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 1019 "syntax.y" /* yacc.c:1646  */
    {
                    //NOTE: IGNORE TK_COMMA
                    if(DEBUG){
                        printf("PARSING EXP LIST\n");
                    }
                    (yyval) = (yyvsp[-2]);
                	int old_child_number = (yyval)->child_number;
                	NODE** tmp = (yyval)->child;
                	(yyval)->child = MALLOC((yyval), (1+old_child_number));
                	int i;
                	for(i=0;i<old_child_number;i++){
                		(yyval)->child[i] = tmp[i];
                	}
                	(yyval)->child[i] = (yyvsp[0]);

                	free(tmp);
                }
#line 3166 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 1036 "syntax.y" /* yacc.c:1646  */
    {
                    if(DEBUG){
                        printf("PARSING EXP LIST : FIRST ONE\n");
                    }
                    (yyval) = NEWNODE(TK_EXP_LIST);
                    (yyval)->child = MALLOC((yyval),1);
                    (yyval)->child[0] = (yyvsp[0]);
                }
#line 3179 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 1046 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TK_GE TK_GT TK_LE TK_LT TK_EQUAL TK_UNEQUAL
                if(DEBUG){
                    printf("PARSING EXPRESSION\n");
                }
                (yyval) = NEWNODE(TK_GE);
                (yyvsp[-2])->child[1] = (yyval);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[0]);
                (yyval)->child[1] = NULL;
                (yyval) = (yyvsp[-2]);
           }
#line 3196 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 1058 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING EXPRESSION\n");
                }
                (yyval) = NEWNODE(TK_GT);
                (yyvsp[-2])->child[1] = (yyval);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[0]);
                (yyval)->child[1] = NULL;
                (yyval) = (yyvsp[-2]);
           }
#line 3212 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 1069 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING EXPRESSION\n");
                }
                (yyval) = NEWNODE(TK_LE);
                (yyvsp[-2])->child[1] = (yyval);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[0]);
                (yyval)->child[1] = NULL;
                (yyval) = (yyvsp[-2]);
           }
#line 3228 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 1080 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING EXPRESSION\n");
                }
                (yyval) = NEWNODE(TK_LT);
                (yyvsp[-2])->child[1] = (yyval);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[0]);
                (yyval)->child[1] = NULL;
                (yyval) = (yyvsp[-2]);
           }
#line 3244 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 1091 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING EXPRESSION\n");
                }
                (yyval) = NEWNODE(TK_EQUAL);
                (yyvsp[-2])->child[1] = (yyval);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[0]);
                (yyval)->child[1] = NULL;
                (yyval) = (yyvsp[-2]);
           }
#line 3260 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 1102 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING EXPRESSION\n");
                }
                (yyval) = NEWNODE(TK_UNEQUAL);
                (yyvsp[-2])->child[1] = (yyval);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[0]);
                (yyval)->child[1] = NULL;
                (yyval) = (yyvsp[-2]);
           }
#line 3276 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 1113 "syntax.y" /* yacc.c:1646  */
    {
                if(DEBUG){
                    printf("PARSING EXPRESSION : FIRST ONE\n");
                }
                (yyval) = NEWNODE(TK_EXP);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[0]);
                (yyval)->child[1] = NULL;
           }
#line 3290 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 1124 "syntax.y" /* yacc.c:1646  */
    {
     //NOTE: expr IS EXPR, expression IS EXP, IGNORE TK_PLUS
         if(DEBUG){
             printf("PARSING EXPR : FIRST ONE\n");
         }
         (yyval) = NEWNODE(TK_PLUS);
         (yyvsp[-2])->child[1] = (yyval);
         (yyval)->child = MALLOC((yyval),2);
         (yyval)->child[0] = (yyvsp[0]);
         (yyval)->child[1] = NULL;
         (yyval) = (yyvsp[-2]);
     }
#line 3307 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 1136 "syntax.y" /* yacc.c:1646  */
    {
     //NOTE: expr IS EXPR, expression IS EXP, IGNORE TK_MINUS
         if(DEBUG){
             printf("PARSING EXPR : FIRST ONE\n");
         }
         (yyval) = NEWNODE(TK_MINUS);
         (yyvsp[-2])->child[1] = (yyval);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[0]);
                (yyval)->child[1] = NULL;
                (yyval) = (yyvsp[-2]);
     }
#line 3324 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 1148 "syntax.y" /* yacc.c:1646  */
    {
     //NOTE: expr IS EXPR, expression IS EXP, IGNORE TK_OR
         if(DEBUG){
             printf("PARSING EXPR : FIRST ONE\n");
         }
         (yyval) = NEWNODE(TK_OR);
         (yyvsp[-2])->child[1] = (yyval);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[0]);
                (yyval)->child[1] = NULL;
                (yyval) = (yyvsp[-2]);
     }
#line 3341 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 1160 "syntax.y" /* yacc.c:1646  */
    {
     //NOTE: expr IS EXPR, expression IS EXP
         if(DEBUG){
             printf("PARSING EXPR : FIRST ONE\n");
         }
         (yyval) = NEWNODE(TK_EXPR);
         (yyval)->child = MALLOC((yyval),2);
         (yyval)->child[0] = (yyvsp[0]);
         (yyval)->child[1] = NULL;
     }
#line 3356 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 1172 "syntax.y" /* yacc.c:1646  */
    {
         if(DEBUG){
             printf("PARSING TK_MUL\n");
         }
         (yyval) = NEWNODE(TK_MUL);
         (yyvsp[-2])->child[1] = (yyval);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[0]);
                (yyval)->child[1] = NULL;
                (yyval) = (yyvsp[-2]);
     }
#line 3372 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 1183 "syntax.y" /* yacc.c:1646  */
    {
         if(DEBUG){
             printf("PARSING TK_DIV\n");
         }
         (yyval) = NEWNODE(TK_DIV);
        	(yyvsp[-2])->child[1] = (yyval);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[0]);
                (yyval)->child[1] = NULL;
                (yyval) = (yyvsp[-2]);
     }
#line 3388 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 1194 "syntax.y" /* yacc.c:1646  */
    {
         if(DEBUG){
             printf("PARSING TK_MOD\n");
         }
         (yyval) = NEWNODE(TK_MOD);
        (yyvsp[-2])->child[1] = (yyval);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[0]);
                (yyval)->child[1] = NULL;
                (yyval) = (yyvsp[-2]);
     }
#line 3404 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 1205 "syntax.y" /* yacc.c:1646  */
    {
         if(DEBUG){
             printf("PARSING TK_AND\n");
         }
         (yyval) = NEWNODE(TK_AND);
         (yyvsp[-2])->child[1] = (yyval);
                (yyval)->child = MALLOC((yyval),2);
                (yyval)->child[0] = (yyvsp[0]);
                (yyval)->child[1] = NULL;
                (yyval) = (yyvsp[-2]);
     }
#line 3420 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 1216 "syntax.y" /* yacc.c:1646  */
    {
         if(DEBUG){
             printf("PARSING TERM : FIRST ONE\n");
         }
         (yyval) = NEWNODE(TK_TERM);
         (yyval)->child = MALLOC((yyval),2);
         (yyval)->child[0] = (yyvsp[0]);
         (yyval)->child[1] = NULL;
     }
#line 3434 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 1227 "syntax.y" /* yacc.c:1646  */
    {
    //NOTE: THERE IS NO TK_FACTOR BUT 'TK_FACTOR' FOLLOWED BY A TYPE
        if(DEBUG){
            printf("PARSING FACTOR\n");
        }
        (yyval) = NEWNODE(TK_FACTOR_ID);
        (yyval)->child = MALLOC((yyval),1);
        (yyval)->child[0] = (yyvsp[0]);
    }
#line 3448 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 1236 "syntax.y" /* yacc.c:1646  */
    {
    //NOTE: IGNORE TK_LP TK_RP
        if(DEBUG){
            printf("PARSING FACTOR \n");
        }
        (yyval) = NEWNODE(TK_FACTOR_ID_ARGS);
        (yyval)->child = MALLOC((yyval),2);
        (yyval)->child[0] = (yyvsp[-3]);
        (yyval)->child[1] = (yyvsp[-1]);
    }
#line 3463 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 1246 "syntax.y" /* yacc.c:1646  */
    {
    //NOTE: IGNORE TK_LP TK_RP
        if(DEBUG){
            printf("PARSING FACTOR \n");
        }
        (yyval) = NEWNODE(TK_FACTOR_SYS_FUNCT);
        (yyval)->child = MALLOC((yyval),2);
        (yyval)->child[0] = (yyvsp[-3]);
        (yyval)->child[1] = (yyvsp[-1]);
    }
#line 3478 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 1256 "syntax.y" /* yacc.c:1646  */
    {
        if(DEBUG){
            printf("PARSING FACTOR \n");
        }
        (yyval) = NEWNODE(TK_FACTOR_CONST);
        (yyval)->child = MALLOC((yyval),1);
        (yyval)->child[0] = (yyvsp[0]);
    }
#line 3491 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 1264 "syntax.y" /* yacc.c:1646  */
    {
    //NOTE: IGNORE TK_LP TK_RP
        if(DEBUG){
            printf("PARSING FACTOR \n");
        }
        (yyval) = NEWNODE(TK_FACTOR_EXP);
        (yyval)->child = MALLOC((yyval),1);
        (yyval)->child[0] = (yyvsp[-1]);
    }
#line 3505 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 1273 "syntax.y" /* yacc.c:1646  */
    {
        if(DEBUG){
            printf("PARSING FACTOR \n");
        }
        (yyval) = NEWNODE(TK_FACTOR_NOT);
        (yyval)->child = MALLOC((yyval),1);
        (yyval)->child[0] = (yyvsp[0]);
    }
#line 3518 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 1281 "syntax.y" /* yacc.c:1646  */
    {
        if(DEBUG){
            printf("PARSING FACTOR \n");
        }
        (yyval) = NEWNODE(TK_FACTOR_MINUS);
        (yyval)->child = MALLOC((yyval),1);
        (yyval)->child[0] = (yyvsp[0]);
    }
#line 3531 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 1289 "syntax.y" /* yacc.c:1646  */
    {
    //NOTE: IGNORE TK_LB TK_RB
        if(DEBUG){
            printf("PARSING FACTOR \n");
        }
        (yyval) = NEWNODE(TK_FACTOR_ID_EXP);
        (yyval)->child = MALLOC((yyval),2);
        (yyval)->child[0] = (yyvsp[-3]);
        (yyval)->child[1] = (yyvsp[-1]);
    }
#line 3546 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 1299 "syntax.y" /* yacc.c:1646  */
    {
    //NOTE: ID->ID IS IN ONE NODE
        if(DEBUG){
            printf("PARSING FACTOR FOR ID->ID\n");
        }
        (yyval) = NEWNODE(TK_FACTOR_DD);
        (yyval)->child = MALLOC((yyval),1);
        (yyval)->child[0] = (yyvsp[-2]);
        (yyvsp[-2])->record = (yyvsp[-1]);
    }
#line 3561 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 1311 "syntax.y" /* yacc.c:1646  */
    {
            //NOTE: IGNORE TK_COMMA
            if(DEBUG){
                printf("PARSING ARGS LIST\n");
            }
            	(yyval) = (yyvsp[-2]);
                int old_child_number = (yyval)->child_number;
                NODE** tmp = (yyval)->child;
                (yyval)->child = MALLOC((yyval), (1+old_child_number));
                int i;
                for(i=0;i<old_child_number;i++){
                	(yyval)->child[i] = tmp[i];
                }
                (yyval)->child[i] = (yyvsp[0]);

                free(tmp);
        }
#line 3583 "yy.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 1328 "syntax.y" /* yacc.c:1646  */
    {
            if(DEBUG){
                printf("PARSING ARGS LIST : FIRST ONE\n");
            }
            (yyval) = NEWNODE(TK_ARGS_LIST);
            (yyval)->child = MALLOC((yyval),1);
            (yyval)->child[0] = (yyvsp[0]);
        }
#line 3596 "yy.tab.cpp" /* yacc.c:1646  */
    break;


#line 3600 "yy.tab.cpp" /* yacc.c:1646  */
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
#line 1338 "syntax.y" /* yacc.c:1906  */


int yyerror(string s){
    //extern char* yytext;
   // printf("\n");
    //printf( "%s\n", s);
    //fprintf(stderr, "line %d: ", yylineno);
    //fprintf(stderr, "\"%s\"\n", yytext);
    return 1;
}

