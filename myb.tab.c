/* A Bison parser, made by GNU Bison 3.7.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "myb.y"

    #include <stdio.h>
    #include <math.h>
    #include <iostream>
    int yylex();
    void yyerror(char const*);
    extern ofstream fout;

#line 80 "myb.tab.c"

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
    PILLEGAL = 258,                /* PILLEGAL  */
    PFINISH = 259,                 /* PFINISH  */
    PIDENFR = 260,                 /* PIDENFR  */
    PINTCON = 261,                 /* PINTCON  */
    PCHARCON = 262,                /* PCHARCON  */
    PSTRCON = 263,                 /* PSTRCON  */
    PCONSTTK = 264,                /* PCONSTTK  */
    PINTTK = 265,                  /* PINTTK  */
    PCHARTK = 266,                 /* PCHARTK  */
    PVOIDTK = 267,                 /* PVOIDTK  */
    PMAINTK = 268,                 /* PMAINTK  */
    PIFTK = 269,                   /* PIFTK  */
    PELSETK = 270,                 /* PELSETK  */
    PDOTK = 271,                   /* PDOTK  */
    PWHILETK = 272,                /* PWHILETK  */
    PFORTK = 273,                  /* PFORTK  */
    PSCANFTK = 274,                /* PSCANFTK  */
    PPRINTFTK = 275,               /* PPRINTFTK  */
    PRETURNTK = 276,               /* PRETURNTK  */
    PPLUS = 277,                   /* PPLUS  */
    PMINU = 278,                   /* PMINU  */
    PMULT = 279,                   /* PMULT  */
    PDIV = 280,                    /* PDIV  */
    PLSS = 281,                    /* PLSS  */
    PLEQ = 282,                    /* PLEQ  */
    PGRE = 283,                    /* PGRE  */
    PGEQ = 284,                    /* PGEQ  */
    PEQL = 285,                    /* PEQL  */
    PNEQ = 286,                    /* PNEQ  */
    PASSIGN = 287,                 /* PASSIGN  */
    PSEMICN = 288,                 /* PSEMICN  */
    PCOMMA = 289,                  /* PCOMMA  */
    PLPARENT = 290,                /* PLPARENT  */
    PRPARENT = 291,                /* PRPARENT  */
    PLBRACK = 292,                 /* PLBRACK  */
    PRBRACK = 293,                 /* PRBRACK  */
    PLBRACE = 294,                 /* PLBRACE  */
    PRBRACE = 295                  /* PRBRACE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);


/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PILLEGAL = 3,                   /* PILLEGAL  */
  YYSYMBOL_PFINISH = 4,                    /* PFINISH  */
  YYSYMBOL_PIDENFR = 5,                    /* PIDENFR  */
  YYSYMBOL_PINTCON = 6,                    /* PINTCON  */
  YYSYMBOL_PCHARCON = 7,                   /* PCHARCON  */
  YYSYMBOL_PSTRCON = 8,                    /* PSTRCON  */
  YYSYMBOL_PCONSTTK = 9,                   /* PCONSTTK  */
  YYSYMBOL_PINTTK = 10,                    /* PINTTK  */
  YYSYMBOL_PCHARTK = 11,                   /* PCHARTK  */
  YYSYMBOL_PVOIDTK = 12,                   /* PVOIDTK  */
  YYSYMBOL_PMAINTK = 13,                   /* PMAINTK  */
  YYSYMBOL_PIFTK = 14,                     /* PIFTK  */
  YYSYMBOL_PELSETK = 15,                   /* PELSETK  */
  YYSYMBOL_PDOTK = 16,                     /* PDOTK  */
  YYSYMBOL_PWHILETK = 17,                  /* PWHILETK  */
  YYSYMBOL_PFORTK = 18,                    /* PFORTK  */
  YYSYMBOL_PSCANFTK = 19,                  /* PSCANFTK  */
  YYSYMBOL_PPRINTFTK = 20,                 /* PPRINTFTK  */
  YYSYMBOL_PRETURNTK = 21,                 /* PRETURNTK  */
  YYSYMBOL_PPLUS = 22,                     /* PPLUS  */
  YYSYMBOL_PMINU = 23,                     /* PMINU  */
  YYSYMBOL_PMULT = 24,                     /* PMULT  */
  YYSYMBOL_PDIV = 25,                      /* PDIV  */
  YYSYMBOL_PLSS = 26,                      /* PLSS  */
  YYSYMBOL_PLEQ = 27,                      /* PLEQ  */
  YYSYMBOL_PGRE = 28,                      /* PGRE  */
  YYSYMBOL_PGEQ = 29,                      /* PGEQ  */
  YYSYMBOL_PEQL = 30,                      /* PEQL  */
  YYSYMBOL_PNEQ = 31,                      /* PNEQ  */
  YYSYMBOL_PASSIGN = 32,                   /* PASSIGN  */
  YYSYMBOL_PSEMICN = 33,                   /* PSEMICN  */
  YYSYMBOL_PCOMMA = 34,                    /* PCOMMA  */
  YYSYMBOL_PLPARENT = 35,                  /* PLPARENT  */
  YYSYMBOL_PRPARENT = 36,                  /* PRPARENT  */
  YYSYMBOL_PLBRACK = 37,                   /* PLBRACK  */
  YYSYMBOL_PRBRACK = 38,                   /* PRBRACK  */
  YYSYMBOL_PLBRACE = 39,                   /* PLBRACE  */
  YYSYMBOL_PRBRACE = 40,                   /* PRBRACE  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_Program = 42,                   /* Program  */
  YYSYMBOL_ConstSayOpt = 43,               /* ConstSayOpt  */
  YYSYMBOL_VarSayOpt = 44,                 /* VarSayOpt  */
  YYSYMBOL_ProgramFunc = 45,               /* ProgramFunc  */
  YYSYMBOL_NoSignInt = 46,                 /* NoSignInt  */
  YYSYMBOL_MyInt = 47,                     /* MyInt  */
  YYSYMBOL_TypeTag = 48,                   /* TypeTag  */
  YYSYMBOL_ValueType = 49,                 /* ValueType  */
  YYSYMBOL_ConstDef1 = 50,                 /* ConstDef1  */
  YYSYMBOL_ConstDef = 51,                  /* ConstDef  */
  YYSYMBOL_VarDef = 52,                    /* VarDef  */
  YYSYMBOL_VarSay = 53,                    /* VarSay  */
  YYSYMBOL_ConstDeclaration = 54,          /* ConstDeclaration  */
  YYSYMBOL_SayHeader = 55,                 /* SayHeader  */
  YYSYMBOL_HaveReturnFuncDef = 56,         /* HaveReturnFuncDef  */
  YYSYMBOL_ParamTable1 = 57,               /* ParamTable1  */
  YYSYMBOL_ParamTable = 58,                /* ParamTable  */
  YYSYMBOL_ComSen = 59,                    /* ComSen  */
  YYSYMBOL_SenList = 60,                   /* SenList  */
  YYSYMBOL_Sen = 61,                       /* Sen  */
  YYSYMBOL_AssignSen = 62,                 /* AssignSen  */
  YYSYMBOL_ValueTable1 = 63,               /* ValueTable1  */
  YYSYMBOL_ValueTable = 64,                /* ValueTable  */
  YYSYMBOL_CallHavingReturn = 65,          /* CallHavingReturn  */
  YYSYMBOL_Factor = 66,                    /* Factor  */
  YYSYMBOL_Xiang = 67,                     /* Xiang  */
  YYSYMBOL_EXP = 68,                       /* EXP  */
  YYSYMBOL_ReturnSen = 69,                 /* ReturnSen  */
  YYSYMBOL_MainFunc = 70,                  /* MainFunc  */
  YYSYMBOL_PrintSen1 = 71,                 /* PrintSen1  */
  YYSYMBOL_PrintSen = 72,                  /* PrintSen  */
  YYSYMBOL_STR = 73                        /* STR  */
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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   105

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  48
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  104

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    53,    53,    56,    59,    62,    66,    69,    70,    71,
      75,    76,    79,    80,    84,    85,    88,    94,    97,   102,
     103,   107,   112,   116,   117,   120,   123,   126,   127,   130,
     131,   132,   135,   139,   140,   143,   146,   150,   151,   152,
     155,   158,   159,   164,   168,   172,   173,   176,   179
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
  "\"end of file\"", "error", "\"invalid token\"", "PILLEGAL", "PFINISH",
  "PIDENFR", "PINTCON", "PCHARCON", "PSTRCON", "PCONSTTK", "PINTTK",
  "PCHARTK", "PVOIDTK", "PMAINTK", "PIFTK", "PELSETK", "PDOTK", "PWHILETK",
  "PFORTK", "PSCANFTK", "PPRINTFTK", "PRETURNTK", "PPLUS", "PMINU",
  "PMULT", "PDIV", "PLSS", "PLEQ", "PGRE", "PGEQ", "PEQL", "PNEQ",
  "PASSIGN", "PSEMICN", "PCOMMA", "PLPARENT", "PRPARENT", "PLBRACK",
  "PRBRACK", "PLBRACE", "PRBRACE", "$accept", "Program", "ConstSayOpt",
  "VarSayOpt", "ProgramFunc", "NoSignInt", "MyInt", "TypeTag", "ValueType",
  "ConstDef1", "ConstDef", "VarDef", "VarSay", "ConstDeclaration",
  "SayHeader", "HaveReturnFuncDef", "ParamTable1", "ParamTable", "ComSen",
  "SenList", "Sen", "AssignSen", "ValueTable1", "ValueTable",
  "CallHavingReturn", "Factor", "Xiang", "EXP", "ReturnSen", "MainFunc",
  "PrintSen1", "PrintSen", "STR", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295
};
#endif

#define YYPACT_NINF (-71)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -5,     1,    17,     1,    12,   -71,   -71,    23,     4,   -71,
       1,    28,     1,   -71,     1,     2,     6,   -71,    26,    34,
       7,   -71,    10,   -71,    11,    13,    36,    32,   -71,   -71,
       1,   -71,   -71,   -71,   -71,    40,    40,   -71,   -71,   -71,
      15,    16,    43,    14,   -71,   -71,    13,    19,    18,    20,
     -71,    21,     1,    22,     5,     5,    48,     1,    25,    27,
      29,    30,     5,   -71,   -71,   -71,   -71,    31,   -71,    53,
       8,     0,     8,   -71,   -71,   -71,   -71,    33,   -71,   -71,
     -71,    39,    41,   -71,   -71,    37,   -71,    42,     8,     8,
     -71,    44,    46,    45,    35,   -71,   -71,   -71,   -71,     8,
      38,   -71,     8,   -71
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     3,    10,    11,     0,     0,     1,
       0,     0,     0,     4,     0,     0,    16,    19,     0,     0,
       0,     5,     0,    18,     0,     0,     0,     0,     2,    21,
       0,    17,    20,     6,    13,     0,     0,     7,    12,    15,
       0,     0,     0,     0,     8,     9,     0,     0,     0,     0,
      14,     0,     0,    25,     0,     0,     0,     0,     0,     0,
       0,     0,    26,    27,    30,    29,    31,     0,    23,     0,
       0,     0,     0,    22,    28,    44,    24,    37,    39,    38,
      40,    41,     0,    48,    46,     0,    45,     0,     0,     0,
      32,     0,     0,     0,     0,    42,    47,    43,    36,     0,
      35,    33,     0,    34
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -71,   -71,   -71,   -71,   -71,   -20,   -22,    -3,    47,   -71,
      49,    54,   -71,   -71,   -71,   -71,   -71,   -71,    50,   -71,
       3,   -71,   -71,   -71,   -71,   -71,   -14,   -70,   -71,   -71,
     -71,   -71,   -71
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    10,    18,    37,    78,     7,    39,    16,
       8,    12,    13,     4,    20,    21,    53,    43,    61,    62,
      63,    64,   100,    93,    79,    80,    81,    82,    65,    28,
      85,    66,    86
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      11,    84,    87,    38,     1,    77,    33,    19,    83,    11,
      58,     5,     6,    77,    33,    44,    45,     9,    94,    33,
      34,    14,    35,    36,    38,    59,    60,    42,    15,   101,
      35,    36,   103,    22,    25,    35,    36,    17,    27,    29,
      26,    40,    30,    31,    32,    41,    33,    46,    48,    56,
      49,    47,    52,    68,    69,    51,    57,    70,    76,    54,
      55,    89,    71,    24,    72,    74,    23,     0,    88,    99,
      73,    75,   102,    91,    90,    95,     0,    96,    92,    97,
       0,    98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    67
};

static const yytype_int8 yycheck[] =
{
       3,    71,    72,    25,     9,     5,     6,    10,     8,    12,
       5,    10,    11,     5,     6,    35,    36,     0,    88,     6,
       7,     9,    22,    23,    46,    20,    21,    30,     5,    99,
      22,    23,   102,     5,    32,    22,    23,    33,    12,     5,
      34,     5,    35,    33,    33,    13,     6,    32,     5,    52,
      36,    35,    34,     5,    57,    36,    34,    32,     5,    39,
      39,    22,    35,    14,    35,    62,    12,    -1,    35,    34,
      40,    40,    34,    36,    33,    89,    -1,    33,    36,    33,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    42,    43,    54,    10,    11,    48,    51,     0,
      44,    48,    52,    53,     9,     5,    50,    33,    45,    48,
      55,    56,     5,    52,    51,    32,    34,    12,    70,     5,
      35,    33,    33,     6,     7,    22,    23,    46,    47,    49,
       5,    13,    48,    58,    46,    46,    32,    35,     5,    36,
      49,    36,    34,    57,    39,    39,    48,    34,     5,    20,
      21,    59,    60,    61,    62,    69,    72,    59,     5,    48,
      32,    35,    35,    40,    61,    40,     5,     5,    47,    65,
      66,    67,    68,     8,    68,    71,    73,    68,    35,    22,
      33,    36,    36,    64,    68,    67,    33,    33,    36,    34,
      63,    68,    34,    68
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    44,    45,    46,    47,    47,    47,
      48,    48,    49,    49,    50,    50,    51,    52,    53,    54,
      54,    55,    56,    57,    57,    58,    59,    60,    60,    61,
      61,    61,    62,    63,    63,    64,    65,    66,    66,    66,
      67,    68,    68,    69,    70,    71,    71,    72,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     1,     5,     3,     2,     3,     2,     3,
       4,     2,     7,     3,     4,     3,     1,     1,     2,     1,
       1,     1,     4,     2,     3,     2,     4,     1,     1,     1,
       1,     1,     3,     5,     7,     1,     1,     5,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
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
    goto yyexhaustedlab;
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Program: ConstSayOpt VarSayOpt ProgramFunc MainFunc  */
#line 53 "myb.y"
                                            { fout<<"<程序>\n" ;}
#line 1280 "myb.tab.c"
    break;

  case 6: /* NoSignInt: PINTCON  */
#line 66 "myb.y"
        { fout<<"<无符号整数>\n"; }
#line 1286 "myb.tab.c"
    break;

  case 7: /* MyInt: NoSignInt  */
#line 69 "myb.y"
          { fout<<"<整数1>\n"; }
#line 1292 "myb.tab.c"
    break;

  case 9: /* MyInt: PMINU NoSignInt  */
#line 71 "myb.y"
                  { fout<<"<整数2>\n"; }
#line 1298 "myb.tab.c"
    break;

  case 16: /* ConstDef: TypeTag ConstDef1  */
#line 88 "myb.y"
                  { fout<<"<常量定义1>\n"; }
#line 1304 "myb.tab.c"
    break;

  case 17: /* VarDef: TypeTag PIDENFR PSEMICN  */
#line 94 "myb.y"
                        { fout<<"<变量定义>\n" ;}
#line 1310 "myb.tab.c"
    break;

  case 18: /* VarSay: VarDef VarDef  */
#line 97 "myb.y"
              { fout<<"<变量说明>\n" ;}
#line 1316 "myb.tab.c"
    break;

  case 19: /* ConstDeclaration: PCONSTTK ConstDef PSEMICN  */
#line 102 "myb.y"
                          { /* fout<<"<常量说明1>\n"; */ }
#line 1322 "myb.tab.c"
    break;

  case 20: /* ConstDeclaration: ConstDeclaration PCONSTTK ConstDef PSEMICN  */
#line 103 "myb.y"
                                              {fout<<"<常量说明2>\n"; }
#line 1328 "myb.tab.c"
    break;

  case 21: /* SayHeader: TypeTag PIDENFR  */
#line 107 "myb.y"
                {fout<<"<声明头部>\n"; }
#line 1334 "myb.tab.c"
    break;

  case 22: /* HaveReturnFuncDef: SayHeader PLPARENT ParamTable PRPARENT PLBRACE ComSen PRBRACE  */
#line 112 "myb.y"
                                                              { fout<<"<有返回值函数定义>\n" ;}
#line 1340 "myb.tab.c"
    break;

  case 25: /* ParamTable: TypeTag PIDENFR ParamTable1  */
#line 120 "myb.y"
                            { fout<<"<参数表>\n" ;}
#line 1346 "myb.tab.c"
    break;

  case 26: /* ComSen: SenList  */
#line 123 "myb.y"
        { fout<<"<复合语句>\n" ;}
#line 1352 "myb.tab.c"
    break;

  case 28: /* SenList: SenList Sen  */
#line 127 "myb.y"
              { fout<<"<语句列>\n" ;}
#line 1358 "myb.tab.c"
    break;

  case 29: /* Sen: ReturnSen  */
#line 130 "myb.y"
           { fout<<"<语句1>\n" ;}
#line 1364 "myb.tab.c"
    break;

  case 30: /* Sen: AssignSen  */
#line 131 "myb.y"
            { fout<<"<语句2>\n" ;}
#line 1370 "myb.tab.c"
    break;

  case 31: /* Sen: PrintSen  */
#line 132 "myb.y"
           { fout<<"<语句-print>\n" ;}
#line 1376 "myb.tab.c"
    break;

  case 32: /* AssignSen: PIDENFR PASSIGN EXP PSEMICN  */
#line 135 "myb.y"
                             { fout<<"<赋值语句>\n" ;}
#line 1382 "myb.tab.c"
    break;

  case 35: /* ValueTable: EXP ValueTable1  */
#line 143 "myb.y"
                { fout<<"<值参数表>\n" ;}
#line 1388 "myb.tab.c"
    break;

  case 36: /* CallHavingReturn: PIDENFR PLPARENT ValueTable PRPARENT  */
#line 146 "myb.y"
                                     { fout<<"<有返回值函数调用语句>\n" ;}
#line 1394 "myb.tab.c"
    break;

  case 37: /* Factor: PIDENFR  */
#line 150 "myb.y"
        { fout<<"<因子1>\n" ;}
#line 1400 "myb.tab.c"
    break;

  case 38: /* Factor: CallHavingReturn  */
#line 151 "myb.y"
                   { fout<<"<因子2>\n" ;}
#line 1406 "myb.tab.c"
    break;

  case 39: /* Factor: MyInt  */
#line 152 "myb.y"
        { fout<<"<因子3>\n" ;}
#line 1412 "myb.tab.c"
    break;

  case 40: /* Xiang: Factor  */
#line 155 "myb.y"
       { fout<<"<项>\n" ;}
#line 1418 "myb.tab.c"
    break;

  case 41: /* EXP: Xiang  */
#line 158 "myb.y"
       { fout<<"<表达式1>\n" ;}
#line 1424 "myb.tab.c"
    break;

  case 42: /* EXP: Xiang PPLUS Xiang  */
#line 159 "myb.y"
                    { fout<<"<表达式2>\n" ;}
#line 1430 "myb.tab.c"
    break;

  case 43: /* ReturnSen: PRETURNTK PLPARENT EXP PRPARENT PSEMICN  */
#line 164 "myb.y"
                                         { fout<<"<<返回语句>>\n" ;}
#line 1436 "myb.tab.c"
    break;

  case 44: /* MainFunc: PVOIDTK PMAINTK PLPARENT PRPARENT PLBRACE ComSen PRBRACE  */
#line 168 "myb.y"
                                                         { fout<<"<主函数>\n" ;}
#line 1442 "myb.tab.c"
    break;

  case 47: /* PrintSen: PPRINTFTK PLPARENT PrintSen1 PRPARENT PSEMICN  */
#line 176 "myb.y"
                                              { fout<<"<写语句>\n" ;}
#line 1448 "myb.tab.c"
    break;

  case 48: /* STR: PSTRCON  */
#line 179 "myb.y"
        { fout<<"<字符串>\n" ;}
#line 1454 "myb.tab.c"
    break;


#line 1458 "myb.tab.c"

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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 182 "myb.y"



