/* A Bison parser, made by GNU Bison 3.5.1.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parsefile.y"
																//DO ERROR MESSAGES AND TYPE CHECKING!!!!
#include <stdio.h>
#include <string.h>

void PSymTable();
int lookupsymb(char *, int);
void print();
int mapping(char *, int);
int yylex(void);
void yyerror (char const *);
int func(int, int, int);

char errMess[55] = "Error";
extern char* yytext;
extern int yylineno;
extern int yyscope;
int block;
int xpos =-1;
int idx = -1; // A global variable to hold the number of entries in the symbol table

struct SymTable {
    char idName[50];
    int value;
    float f_val;
    char c_val;
    char s_val[100];
    int type;  //0-int , 1-float, 2-char, 3-String, 4-int[], 5-float[] 
    int line_no;
    int scope;
    int size;
}; struct SymTable st[50];


#line 104 "parsefile.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSEFILE_TAB_H_INCLUDED
# define YY_YY_PARSEFILE_TAB_H_INCLUDED
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
    T_NUM = 258,
    T_DECIMAL = 259,
    T_IDENTIFIER = 260,
    T_CONSTANT = 261,
    T_STRING_LITERAL = 262,
    T_TRUE = 263,
    T_FALSE = 264,
    T_IMPORT = 265,
    T_CLASS = 266,
    T_PACKAGE = 267,
    T_MAIN = 268,
    T_ARGS = 269,
    T_SOP = 270,
    T_TYPEDEF = 271,
    T_STATIC = 272,
    T_NEW = 273,
    T_PUBLIC = 274,
    T_PRIVATE = 275,
    T_PROTECTED = 276,
    T_OC = 277,
    T_CC = 278,
    T_OF = 279,
    T_CF = 280,
    T_OS = 281,
    T_CS = 282,
    T_CHAR = 283,
    T_INT = 284,
    T_FLOAT = 285,
    T_VOID = 286,
    T_STRING = 287,
    T_IF = 288,
    T_ELSE = 289,
    T_FOR = 290,
    T_CONTINUE = 291,
    T_BREAK = 292,
    T_RETURN = 293,
    T_ASSIGN = 294,
    T_ADD_ASSIGN = 295,
    T_SUB_ASSIGN = 296,
    T_MUL_ASSIGN = 297,
    T_DIV_ASSIGN = 298,
    T_ADD = 299,
    T_SUB = 300,
    T_MUL = 301,
    T_DIV = 302,
    T_MOD = 303,
    T_INC_OP = 304,
    T_DEC_OP = 305,
    T_LE = 306,
    T_GE = 307,
    T_EQ = 308,
    T_LT = 309,
    T_GT = 310,
    T_AND_OP = 311,
    T_OR_OP = 312,
    T_NE_OP = 313,
    T_BIT_AND = 314,
    T_BIT_OR = 315,
    T_NOT = 316,
    T_COMMA = 317,
    T_COL = 318,
    T_DOT = 319,
    T_SEMC = 320,
    T_EXP = 321,
    T_QUE = 322,
    T_NE = 323
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 38 "parsefile.y"

    int number;
    char *string;
    char character;
	float decimal;
   	 

#line 233 "parsefile.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSEFILE_TAB_H_INCLUDED  */



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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   325

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  221

#define YYUNDEFTOK  2
#define YYMAXUTOK   323


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    80,    80,    83,    86,    87,    90,    91,    92,    93,
      96,    99,    99,   102,   103,   104,   107,   110,   110,   111,
     111,   112,   115,   115,   118,   119,   122,   123,   124,   125,
     126,   127,   130,   133,   134,   135,   136,   137,   140,   141,
     145,   146,   148,   151,   152,   153,   156,   157,   158,   161,
     163,   164,   167,   168,   172,   173,   174,   175,   176,   177,
     178,   179,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   195,   196,   197,   200,   201,   202,   205,
     207,   208,   211,   212,   215,   215,   218,   219,   222,   222,
     223,   223,   226,   226,   229,   232,   235,   236,   237,   240,
     241,   244,   245,   247,   248
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_NUM", "T_DECIMAL", "T_IDENTIFIER",
  "T_CONSTANT", "T_STRING_LITERAL", "T_TRUE", "T_FALSE", "T_IMPORT",
  "T_CLASS", "T_PACKAGE", "T_MAIN", "T_ARGS", "T_SOP", "T_TYPEDEF",
  "T_STATIC", "T_NEW", "T_PUBLIC", "T_PRIVATE", "T_PROTECTED", "T_OC",
  "T_CC", "T_OF", "T_CF", "T_OS", "T_CS", "T_CHAR", "T_INT", "T_FLOAT",
  "T_VOID", "T_STRING", "T_IF", "T_ELSE", "T_FOR", "T_CONTINUE", "T_BREAK",
  "T_RETURN", "T_ASSIGN", "T_ADD_ASSIGN", "T_SUB_ASSIGN", "T_MUL_ASSIGN",
  "T_DIV_ASSIGN", "T_ADD", "T_SUB", "T_MUL", "T_DIV", "T_MOD", "T_INC_OP",
  "T_DEC_OP", "T_LE", "T_GE", "T_EQ", "T_LT", "T_GT", "T_AND_OP",
  "T_OR_OP", "T_NE_OP", "T_BIT_AND", "T_BIT_OR", "T_NOT", "T_COMMA",
  "T_COL", "T_DOT", "T_SEMC", "T_EXP", "T_QUE", "T_NE", "$accept", "S",
  "compilation_unit", "package_statement", "import_statement",
  "package_name", "class_stmt", "$@1", "modifier", "method_stmnt",
  "other_method", "$@2", "$@3", "main_method", "$@4", "stmnt", "s1",
  "variable_declaration", "dtypes", "array", "ids1", "ids2", "ids3",
  "ids4", "expression", "rel_e", "arithm_e", "float_e", "char_e", "str_e",
  "if_else", "if_stmt", "$@5", "else_if_blocks", "else_if_block", "$@6",
  "$@7", "for_stmt", "$@8", "for_args", "loop_cond", "loop_init", "arg2",
  "arg3", "print_stmnt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323
};
# endif

#define YYPACT_NINF (-142)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -6,    12,    57,  -142,    62,   -44,  -142,    -2,    19,  -142,
      18,     4,    22,  -142,  -142,  -142,  -142,    65,    78,  -142,
       5,    80,  -142,    25,    27,    72,  -142,  -142,  -142,  -142,
     243,  -142,   -27,  -142,  -142,    76,    94,    10,    11,    95,
      82,    83,    97,   102,  -142,    84,     1,  -142,    43,  -142,
    -142,    47,  -142,   267,  -142,    79,  -142,    52,     6,  -142,
    -142,    45,    71,    61,    85,   100,    66,    90,   103,    75,
      99,    77,    -1,  -142,  -142,  -142,  -142,   109,   -12,  -142,
    -142,  -142,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,    21,   107,  -142,    34,   110,   111,    59,   138,
       6,   139,   143,    70,   148,   149,    53,   150,   133,   267,
     274,   152,   128,   156,  -142,  -142,  -142,  -142,    34,    34,
      34,    34,    34,    34,  -142,   140,  -142,    21,  -142,  -142,
     126,  -142,  -142,  -142,    34,   129,  -142,  -142,   134,  -142,
     137,  -142,   147,  -142,  -142,  -142,   153,  -142,  -142,   169,
     113,   157,   159,   167,  -142,    -1,  -142,    59,   175,    70,
     179,    53,  -142,   176,    -1,   180,   184,   185,    38,   187,
    -142,   173,  -142,   181,  -142,  -142,  -142,  -142,  -142,   158,
     190,   186,   193,  -142,   197,   196,   198,    86,   117,     6,
    -142,   199,  -142,  -142,   223,   224,  -142,  -142,    34,  -142,
    -142,   201,  -142,  -142,   203,   208,   155,   227,   166,   204,
    -142,  -142,  -142,   219,  -142,  -142,   221,  -142,  -142,   235,
    -142
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     0,     0,     2,     9,     0,     1,     0,     0,     4,
       0,     0,     0,    13,    14,    15,     3,     0,     0,     8,
       0,     0,    10,     0,     0,     0,     7,     6,    11,    25,
      21,    67,    66,    60,    61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,     0,    24,     0,    32,
      37,     0,    53,    52,    28,    82,    29,     0,     0,    68,
      69,     0,    48,    35,    42,     0,    33,    45,     0,    34,
      51,    36,     0,    92,    70,    71,    12,     0,     0,    16,
      26,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,    30,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,     0,    64,    65,    62,    63,    56,    57,
      58,    54,    55,    59,    90,     0,    86,     0,   104,   103,
      76,    78,    46,    47,    40,     0,    41,    75,    73,    43,
       0,    44,    79,    81,    49,    50,     0,    96,    97,     0,
       0,     0,     0,     0,    25,     0,    87,     0,     0,     0,
       0,     0,    84,     0,   100,     0,     0,     0,     0,     0,
      77,     0,    74,     0,    80,    25,    25,    99,    94,     0,
       0,     0,     0,    91,     0,     0,     0,     0,     0,   102,
      19,     0,    17,    88,     0,     0,    85,    93,   101,    95,
      25,     0,    25,    25,     0,     0,     0,     0,     0,     0,
      38,    39,    20,     0,    18,    89,     0,    22,    25,     0,
      23
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,
    -142,  -142,  -142,  -142,  -142,  -141,  -142,   145,  -142,  -142,
    -142,  -142,  -142,  -142,   146,   -71,   -58,    88,    92,    96,
    -142,  -142,  -142,  -142,   132,  -142,  -142,  -142,  -142,  -142,
    -142,  -142,  -142,  -142,  -142
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     8,    12,    16,    29,    17,    45,
      46,   202,   200,    79,   218,    30,    47,    48,    49,    50,
      66,    69,    63,    71,    51,    52,    53,   139,   132,   144,
      54,    55,   175,    93,   126,   203,   154,    56,   110,   149,
     178,   150,   179,   199,    57
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      95,   108,    31,    10,    32,   112,     1,    33,    34,    31,
      23,    32,    58,   168,   109,    64,    67,     5,    77,   113,
      78,     9,    59,    60,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   187,   188,    65,    68,    13,    14,
      15,    31,   134,    32,    11,   124,    33,    34,    42,    43,
      96,    24,    97,    35,   125,    42,    43,     6,   142,   206,
     143,   208,   209,   183,   130,   131,    36,    37,    38,    19,
      39,    40,     7,    41,   137,   138,    21,   219,    82,    83,
      84,    85,    18,    22,   169,    25,    20,    42,    43,    31,
      26,    32,    27,   177,    33,    34,    28,   109,    61,    62,
      70,    35,    74,    44,    72,    73,   109,    75,    80,    76,
      98,   196,    81,    92,    36,    37,    38,    94,    39,    40,
      31,    41,    32,    99,   100,    33,    34,   101,   102,   103,
     104,   198,    35,   128,   129,    42,    43,   105,   106,   107,
     111,   127,   197,   133,   135,    36,    37,    38,   136,    39,
      40,    44,    41,   140,   141,   145,   146,   151,    31,   152,
      32,   153,   155,    33,    34,   157,    42,    43,   158,    31,
      35,    32,   166,   159,    33,    34,   160,   162,   164,   165,
     212,    35,    44,    36,    37,    38,   161,    39,    40,   167,
      41,   214,   163,   171,    36,    37,    38,   173,    39,    40,
     176,    41,   185,   180,    42,    43,   181,    31,   182,    32,
     184,   186,    33,    34,   190,    42,    43,   192,   191,    35,
      44,   193,   194,   189,   195,   201,   204,   205,   207,   215,
     210,    44,    36,    37,    38,   211,    39,    40,    31,    41,
      32,   213,   216,    33,    34,   217,    31,   172,    32,   170,
      35,    33,    34,    42,    43,   147,   148,   174,    35,   156,
     220,     0,     0,    36,    37,    38,     0,    39,    40,    44,
      41,    36,    37,    38,     0,    39,    40,    31,    41,    32,
       0,     0,    33,    34,    42,    43,     0,     0,     0,     0,
       0,     0,    42,    43,     0,     0,     0,     0,     0,     0,
      44,     0,    36,    37,    38,     0,    39,     0,    44,     0,
       0,    82,    83,    84,    85,     0,     0,     0,    86,    87,
      88,    89,    90,    42,    43,    91
};

static const yytype_int16 yycheck[] =
{
      58,    72,     3,     5,     5,    17,    12,     8,     9,     3,
       5,     5,    39,   154,    72,     5,     5,     5,    17,    31,
      19,    65,    49,    50,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,   175,   176,    26,    26,    19,    20,
      21,     3,   100,     5,    46,    24,     8,     9,    49,    50,
       5,    46,     7,    15,    33,    49,    50,     0,     5,   200,
       7,   202,   203,    25,     5,     6,    28,    29,    30,    65,
      32,    33,    10,    35,     4,     5,    11,   218,    44,    45,
      46,    47,    64,     5,   155,     5,    64,    49,    50,     3,
      65,     5,    65,   164,     8,     9,    24,   155,    22,     5,
       5,    15,     5,    65,    22,    22,   164,     5,    65,    25,
      39,    25,    65,    34,    28,    29,    30,    65,    32,    33,
       3,    35,     5,    62,    39,     8,     9,    27,    62,    39,
      27,   189,    15,    23,    23,    49,    50,    62,    39,    62,
      31,    34,    25,     5,     5,    28,    29,    30,     5,    32,
      33,    65,    35,     5,     5,     5,    23,     5,     3,    31,
       5,     5,    22,     8,     9,    39,    49,    50,    39,     3,
      15,     5,    13,    39,     8,     9,    39,    24,    65,    22,
      25,    15,    65,    28,    29,    30,    39,    32,    33,    22,
      35,    25,    23,    18,    28,    29,    30,    18,    32,    33,
      24,    35,    29,    23,    49,    50,    22,     3,    23,     5,
      23,    30,     8,     9,    24,    49,    50,    24,    32,    15,
      65,    24,    26,    65,    26,    26,     3,     3,    27,    25,
      27,    65,    28,    29,    30,    27,    32,    33,     3,    35,
       5,    14,    23,     8,     9,    24,     3,   159,     5,   157,
      15,     8,     9,    49,    50,   110,   110,   161,    15,   127,
      25,    -1,    -1,    28,    29,    30,    -1,    32,    33,    65,
      35,    28,    29,    30,    -1,    32,    33,     3,    35,     5,
      -1,    -1,     8,     9,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    28,    29,    30,    -1,    32,    -1,    65,    -1,
      -1,    44,    45,    46,    47,    -1,    -1,    -1,    51,    52,
      53,    54,    55,    49,    50,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    12,    70,    71,    72,     5,     0,    10,    73,    65,
       5,    46,    74,    19,    20,    21,    75,    77,    64,    65,
      64,    11,     5,     5,    46,     5,    65,    65,    24,    76,
      84,     3,     5,     8,     9,    15,    28,    29,    30,    32,
      33,    35,    49,    50,    65,    78,    79,    85,    86,    87,
      88,    93,    94,    95,    99,   100,   106,   113,    39,    49,
      50,    22,     5,    91,     5,    26,    89,     5,    26,    90,
       5,    92,    22,    22,     5,     5,    25,    17,    19,    82,
      65,    65,    44,    45,    46,    47,    51,    52,    53,    54,
      55,    58,    34,   102,    65,    95,     5,     7,    39,    62,
      39,    27,    62,    39,    27,    62,    39,    62,    94,    95,
     107,    31,    17,    31,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    24,    33,   103,    34,    23,    23,
       5,     6,    97,     5,    95,     5,     5,     4,     5,    96,
       5,     5,     5,     7,    98,     5,    23,    86,    93,   108,
     110,     5,    31,     5,   105,    22,   103,    39,    39,    39,
      39,    39,    24,    23,    65,    22,    13,    22,    84,    94,
      97,    18,    96,    18,    98,   101,    24,    94,   109,   111,
      23,    22,    23,    25,    23,    29,    30,    84,    84,    65,
      24,    32,    24,    24,    26,    26,    25,    25,    95,   112,
      81,    26,    80,   104,     3,     3,    84,    27,    84,    84,
      27,    27,    25,    14,    25,    25,    23,    24,    83,    84,
      25
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    69,    70,    71,    72,    72,    73,    73,    73,    73,
      74,    76,    75,    77,    77,    77,    78,    80,    79,    81,
      79,    79,    83,    82,    84,    84,    85,    85,    85,    85,
      85,    85,    86,    87,    87,    87,    87,    87,    88,    88,
      89,    89,    89,    90,    90,    90,    91,    91,    91,    92,
      92,    92,    93,    93,    94,    94,    94,    94,    94,    94,
      94,    94,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    96,    96,    96,    97,    97,    97,    98,
      98,    98,    99,    99,   101,   100,   102,   102,   104,   103,
     105,   103,   107,   106,   108,   109,   110,   110,   110,   111,
     111,   112,   112,   113,   113
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     3,     0,     5,     5,     3,     0,
       3,     0,     8,     1,     1,     1,     2,     0,    10,     0,
      10,     0,     0,    14,     2,     0,     2,     2,     1,     1,
       2,     1,     1,     2,     2,     2,     2,     1,    10,    10,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       1,     1,     3,     3,     3,     3,     1,     1,     2,     2,
       2,     2,     3,     1,     3,     1,     1,     3,     1,     1,
       3,     1,     1,     2,     0,     8,     2,     3,     0,     8,
       0,     4,     0,     8,     3,     3,     1,     1,     0,     1,
       0,     1,     0,     4,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
# undef YYSTACK_RELOCATE
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
  case 2:
#line 80 "parsefile.y"
                                    {PSymTable(); printf("\n ACCEPTED\n"); return 0; }
#line 1593 "parsefile.tab.c"
    break;

  case 11:
#line 99 "parsefile.y"
                                                           {block = 0;}
#line 1599 "parsefile.tab.c"
    break;

  case 17:
#line 110 "parsefile.y"
                                                                             {block = 0;}
#line 1605 "parsefile.tab.c"
    break;

  case 19:
#line 111 "parsefile.y"
                                                                                                  {block = 0;}
#line 1611 "parsefile.tab.c"
    break;

  case 22:
#line 115 "parsefile.y"
                                                                                                 {block = 0;}
#line 1617 "parsefile.tab.c"
    break;

  case 38:
#line 140 "parsefile.y"
                                                                                {if(lookupsymb((yyvsp[-6].string), yyscope)==-1) {idx++; strcpy(st[idx].idName,(yyvsp[-6].string)); 																				st[idx].type =4; st[idx].size=((yyvsp[-1].number))*4; st[idx].scope = yyscope; 																					st[idx].line_no = yylineno;} else {yyerror("variable already declared");}}
#line 1623 "parsefile.tab.c"
    break;

  case 39:
#line 141 "parsefile.y"
                                                                                        {if(lookupsymb((yyvsp[-6].string), yyscope)==-1) {idx++; strcpy(st[idx].idName,(yyvsp[-6].string)); 																				st[idx].type =5; st[idx].size=((yyvsp[-1].number))*4; st[idx].scope = yyscope; 																					st[idx].line_no = yylineno;} else {yyerror("variable already declared");}}
#line 1629 "parsefile.tab.c"
    break;

  case 40:
#line 145 "parsefile.y"
                                                {if(lookupsymb((yyvsp[-2].string), yyscope)==-1) {idx++; strcpy(st[idx].idName,(yyvsp[-2].string)); st[idx].type =0; st[idx].value = (yyvsp[0].number); 												st[idx].size = 4; st[idx].scope = yyscope;  st[idx].line_no = yylineno; } else {yyerror("variable already declared");}}
#line 1635 "parsefile.tab.c"
    break;

  case 41:
#line 146 "parsefile.y"
                                                        {if(lookupsymb((yyvsp[0].string), yyscope)==-1) {idx++; strcpy(st[idx].idName,(yyvsp[0].string));  st[idx].type =0; st[idx].size = 4;
   											st[idx].scope =yyscope;  st[idx].line_no = yylineno;} else {yyerror("variable already declared");} }
#line 1642 "parsefile.tab.c"
    break;

  case 42:
#line 148 "parsefile.y"
                                                                        {if(lookupsymb((yyvsp[0].string), yyscope)==-1) {idx++; strcpy(st[idx].idName,(yyvsp[0].string)); st[idx].type =0; st[idx].scope = 												yyscope; st[idx].size = 4;  st[idx].line_no = yylineno;} else {yyerror("variable already declared");}}
#line 1648 "parsefile.tab.c"
    break;

  case 43:
#line 151 "parsefile.y"
                                                {if(lookupsymb((yyvsp[-2].string), yyscope)==-1) {idx++; strcpy(st[idx].idName,(yyvsp[-2].string)); st[idx].type =1; st[idx].f_val = (yyvsp[0].decimal); 												st[idx].size = 4; st[idx].scope = yyscope;  st[idx].line_no = yylineno;} else {yyerror("variable already declared");}}
#line 1654 "parsefile.tab.c"
    break;

  case 44:
#line 152 "parsefile.y"
                                                        {if(lookupsymb((yyvsp[0].string), yyscope)==-1) { idx++; strcpy(st[idx].idName,(yyvsp[0].string));  st[idx].type =1; st[idx].scope = 												yyscope; st[idx].size = 4;  st[idx].line_no = yylineno;} else {yyerror("variable already declared");}}
#line 1660 "parsefile.tab.c"
    break;

  case 45:
#line 153 "parsefile.y"
                                                                        {if(lookupsymb((yyvsp[0].string), yyscope)==-1) {idx++; strcpy(st[idx].idName,(yyvsp[0].string));  st[idx].type =1; st[idx].scope = 												yyscope; st[idx].size = 4;  st[idx].line_no = yylineno;} else {yyerror("variable already declared");}}
#line 1666 "parsefile.tab.c"
    break;

  case 46:
#line 156 "parsefile.y"
                                                {if(lookupsymb((yyvsp[-2].string), yyscope)==-1) {idx++; strcpy(st[idx].idName,(yyvsp[-2].string)); st[idx].type =2; st[idx].c_val = (yyvsp[0].character); 												st[idx].size = 2; st[idx].scope = yyscope;  st[idx].line_no = yylineno;} else {yyerror("variable already declared");}}
#line 1672 "parsefile.tab.c"
    break;

  case 47:
#line 157 "parsefile.y"
                                                        {if(lookupsymb((yyvsp[0].string), yyscope)==-1) { idx++; strcpy(st[idx].idName,(yyvsp[0].string));  st[idx].type =2; st[idx].scope = 												yyscope; st[idx].size = 2;  st[idx].line_no = yylineno;} else {yyerror("variable already declared");}}
#line 1678 "parsefile.tab.c"
    break;

  case 48:
#line 158 "parsefile.y"
                                                                        {if(lookupsymb((yyvsp[0].string), yyscope)==-1) {idx++; strcpy(st[idx].idName,(yyvsp[0].string));  st[idx].type =2; st[idx].scope = 												yyscope; st[idx].size = 2;  st[idx].line_no = yylineno;} else {yyerror("variable already declared");}}
#line 1684 "parsefile.tab.c"
    break;

  case 49:
#line 161 "parsefile.y"
                                                        {if(lookupsymb((yyvsp[-2].string), yyscope)==-1) {idx++; strcpy(st[idx].idName,(yyvsp[-2].string)); st[idx].type =3; 
											strcpy(st[idx].s_val,(yyvsp[0].string)); st[idx].size = (2*strlen((yyvsp[0].string))); st[idx].scope = yyscope;  												st[idx].line_no = yylineno;} else {yyerror("variable already declared");}}
#line 1691 "parsefile.tab.c"
    break;

  case 50:
#line 163 "parsefile.y"
                                                        {if(lookupsymb((yyvsp[0].string), yyscope)==-1) { idx++; strcpy(st[idx].idName,(yyvsp[0].string)); st[idx].type =3; st[idx].scope = 												yyscope;  st[idx].line_no = yylineno;} else {yyerror("variable already declared");}}
#line 1697 "parsefile.tab.c"
    break;

  case 51:
#line 164 "parsefile.y"
                                                                        {if(lookupsymb((yyvsp[0].string), yyscope)==-1) {idx++; strcpy(st[idx].idName,(yyvsp[0].string)); st[idx].type =3; st[idx].scope = 												yyscope; st[idx].line_no = yylineno;} else {yyerror("variable already declared");}}
#line 1703 "parsefile.tab.c"
    break;

  case 54:
#line 172 "parsefile.y"
                                                        {(yyval.number) = func((yyvsp[-2].number),(yyvsp[0].number),1);}
#line 1709 "parsefile.tab.c"
    break;

  case 55:
#line 173 "parsefile.y"
                                                        {(yyval.number) = func((yyvsp[-2].number),(yyvsp[0].number),2);}
#line 1715 "parsefile.tab.c"
    break;

  case 56:
#line 174 "parsefile.y"
                                                        {(yyval.number) = func((yyvsp[-2].number),(yyvsp[0].number),3);}
#line 1721 "parsefile.tab.c"
    break;

  case 57:
#line 175 "parsefile.y"
                                                        {(yyval.number) = func((yyvsp[-2].number),(yyvsp[0].number),4);}
#line 1727 "parsefile.tab.c"
    break;

  case 58:
#line 176 "parsefile.y"
                                                {(yyval.number) = func((yyvsp[-2].number),(yyvsp[0].number),5);}
#line 1733 "parsefile.tab.c"
    break;

  case 59:
#line 177 "parsefile.y"
                                                {(yyval.number) = func((yyvsp[-2].number),(yyvsp[0].number),6);}
#line 1739 "parsefile.tab.c"
    break;

  case 60:
#line 178 "parsefile.y"
                                                                        {(yyval.number) = (yyvsp[0].number); }
#line 1745 "parsefile.tab.c"
    break;

  case 61:
#line 179 "parsefile.y"
                                                                        {(yyval.number) = (yyvsp[0].number); }
#line 1751 "parsefile.tab.c"
    break;

  case 62:
#line 182 "parsefile.y"
                                                                {(yyval.number) = (yyvsp[-2].number) * (yyvsp[0].number);}
#line 1757 "parsefile.tab.c"
    break;

  case 63:
#line 183 "parsefile.y"
                                                        {(yyval.number) = (yyvsp[-2].number) / (yyvsp[0].number);}
#line 1763 "parsefile.tab.c"
    break;

  case 64:
#line 184 "parsefile.y"
                                                        {(yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number);}
#line 1769 "parsefile.tab.c"
    break;

  case 65:
#line 185 "parsefile.y"
                                                        {(yyval.number) = (yyvsp[-2].number) - (yyvsp[0].number);}
#line 1775 "parsefile.tab.c"
    break;

  case 66:
#line 186 "parsefile.y"
                                                                        {xpos = mapping((yyvsp[0].string), yyscope); if(xpos!=-1) { (yyval.number) = st[xpos].value; } else {yyerror("variable not declared");} }
#line 1781 "parsefile.tab.c"
    break;

  case 67:
#line 187 "parsefile.y"
                                                        {(yyval.number) = (yyvsp[0].number); }
#line 1787 "parsefile.tab.c"
    break;

  case 68:
#line 188 "parsefile.y"
                                                                {xpos = mapping((yyvsp[-1].string), yyscope); (yyval.number)=st[xpos].value++;}
#line 1793 "parsefile.tab.c"
    break;

  case 69:
#line 189 "parsefile.y"
                                                                {xpos = mapping((yyvsp[-1].string), yyscope); (yyval.number)=st[xpos].value--;}
#line 1799 "parsefile.tab.c"
    break;

  case 70:
#line 190 "parsefile.y"
                                                                {xpos = mapping((yyvsp[0].string), yyscope); (yyval.number)=++st[xpos].value;}
#line 1805 "parsefile.tab.c"
    break;

  case 71:
#line 191 "parsefile.y"
                                                                {xpos = mapping((yyvsp[0].string), yyscope); (yyval.number)=--st[xpos].value;}
#line 1811 "parsefile.tab.c"
    break;

  case 72:
#line 192 "parsefile.y"
                                                    {xpos = mapping((yyvsp[-2].string), yyscope); if(xpos!=-1) { st[xpos].value = (yyvsp[0].number); } else {yyerror("variable not declared");}}
#line 1817 "parsefile.tab.c"
    break;

  case 73:
#line 195 "parsefile.y"
                                                                        {xpos = mapping((yyvsp[0].string), yyscope); if(xpos!=-1) { (yyval.decimal) = st[xpos].f_val; } else {yyerror("variable not declared");} }
#line 1823 "parsefile.tab.c"
    break;

  case 74:
#line 196 "parsefile.y"
                                                                {xpos = mapping((yyvsp[-2].string), yyscope); if(xpos!=-1) { st[xpos].f_val = (yyvsp[0].decimal); } else {yyerror("variable not declared");}}
#line 1829 "parsefile.tab.c"
    break;

  case 75:
#line 197 "parsefile.y"
                                                                {(yyval.decimal) = (yyvsp[0].decimal); }
#line 1835 "parsefile.tab.c"
    break;

  case 76:
#line 200 "parsefile.y"
                                                                        {xpos = mapping((yyvsp[0].string), yyscope); if(xpos!=-1) { (yyval.character) = st[xpos].c_val; } else {yyerror("variable not declared");} }
#line 1841 "parsefile.tab.c"
    break;

  case 77:
#line 201 "parsefile.y"
                                                                {xpos = mapping((yyvsp[-2].string), yyscope); if(xpos!=-1) { st[xpos].c_val = (yyvsp[0].character); } else {yyerror("variable not declared");}}
#line 1847 "parsefile.tab.c"
    break;

  case 78:
#line 202 "parsefile.y"
                                                                {(yyval.character) = (yyvsp[0].character); }
#line 1853 "parsefile.tab.c"
    break;

  case 79:
#line 205 "parsefile.y"
                                                                        {xpos = mapping((yyvsp[0].string), yyscope); if(xpos!=-1) { (yyval.string) = strcpy(st[idx].s_val,(yyvsp[0].string)); } 
												else {yyerror("variable not declared");} }
#line 1860 "parsefile.tab.c"
    break;

  case 80:
#line 207 "parsefile.y"
                                                                {xpos = mapping((yyvsp[-2].string), yyscope); if(xpos!=-1) { strcpy(st[idx].s_val,(yyvsp[0].string)); } else {yyerror("variable not declared");}}
#line 1866 "parsefile.tab.c"
    break;

  case 81:
#line 208 "parsefile.y"
                                                                {(yyval.string) = (yyvsp[0].string); }
#line 1872 "parsefile.tab.c"
    break;

  case 84:
#line 215 "parsefile.y"
                                          {block = 1; }
#line 1878 "parsefile.tab.c"
    break;

  case 85:
#line 215 "parsefile.y"
                                                                   {block = 0;}
#line 1884 "parsefile.tab.c"
    break;

  case 88:
#line 222 "parsefile.y"
                                          {block = 1; }
#line 1890 "parsefile.tab.c"
    break;

  case 89:
#line 222 "parsefile.y"
                                                                    {block = 0; }
#line 1896 "parsefile.tab.c"
    break;

  case 90:
#line 223 "parsefile.y"
                              {block = 1; }
#line 1902 "parsefile.tab.c"
    break;

  case 91:
#line 223 "parsefile.y"
                                                       {block = 0; }
#line 1908 "parsefile.tab.c"
    break;

  case 92:
#line 226 "parsefile.y"
                                   {block = 1; yyscope +=1; }
#line 1914 "parsefile.tab.c"
    break;

  case 93:
#line 226 "parsefile.y"
                                                                                             {block = 0; yyscope -=1;}
#line 1920 "parsefile.tab.c"
    break;

  case 103:
#line 247 "parsefile.y"
                                                {printf("%s\n", (yyvsp[-1].string)); }
#line 1926 "parsefile.tab.c"
    break;

  case 104:
#line 248 "parsefile.y"
                                                            {xpos = mapping((yyvsp[-1].string), yyscope); if(xpos!=-1) {if (st[xpos].type == 0) {printf("%d\n", st[xpos].value);} 
													else if (st[xpos].type == 1) {printf("%f\n", st[xpos].f_val);} 
													else if (st[xpos].type == 2) {printf("%c\n", st[xpos].c_val);} 
													else if (st[xpos].type == 3) {printf("%s\n", st[xpos].s_val);} } else {yyerror(errMess);}}
#line 1935 "parsefile.tab.c"
    break;


#line 1939 "parsefile.tab.c"

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 254 "parsefile.y"




void yyerror (char const *s) {
	fprintf (stderr, "Error: %s\n", s);
  	printf("Error occured at  Line No.  %d\n" , yylineno);
   	printf("Error before : %s\n" , yytext);
}

int yywrap() { 
	return 1;
}

int main() {
	yyparse();
	return 1;
}

int func(int a, int b, int k ) {
	switch(k) {
		case 1: return (a<b);
     	break;

		case 2: return (a>b);
     	break;
     	 
		case 3: return (a<=b);
     	break;
     	 
		case 4: return (a>=b);
     	break;
     	 
		case 5: return (a==b);
     	break;
     	 
		case 6: return (a!=b);
     	break;
	}
}    

int lookupsymb (char* name, int scope) {
	for (int j=0; j<idx+1; j++) {
		if (strcmp(name, st[j].idName)==0) {
			if (scope > st[j].scope) 
				return j;
			else if (scope == st[j].scope) {
				if (block == 0)
					return j;
			}
		}
	}
	return -1;
}

int mapping (char* name, int scope) {
	for (int j=0; j<idx+1; j++) {
		if ((strcmp(name, st[j].idName)==0) && (scope >= st[j].scope))
			return j;
	}
	return -1;
} 


void PSymTable() {
    printf("\n| Type\t| Name\t| Value\t| Scope\t| line\t| Size\n");
    for(int j=0;j<=idx;j++)	{    
		if(st[j].type==0) {
			printf("| int\t");
			printf("| %s\t| %d\t| %d\t| %d\t| %d\n",st[j].idName,st[j].value, st[j].scope, st[j].line_no, st[j].size);
		}
		else if(st[j].type==1) {
			printf("| float\t");
			printf("| %s\t| %f\t| %d\t| %d\t| %d\n",st[j].idName,st[j].f_val, st[j].scope, st[j].line_no, st[j].size);
		}
		else if(st[j].type==2) {
			printf("| char\t");
			printf("| %s\t| %c\t| %d\t| %d\t| %d\n",st[j].idName,st[j].c_val, st[j].scope, st[j].line_no, st[j].size);
		}
		else if(st[j].type==3) {
			printf("| string\t");
			printf("| %s\t| %s\t| %d\t| %d\t| %d\n",st[j].idName,st[j].s_val, st[j].scope, st[j].line_no, st[j].size);
		}
		else if(st[j].type==4) {
			printf("| int[]\t");
			printf("| %s\t| %d\t| %d\t| %d\t| %d\n",st[j].idName,st[j].value, st[j].scope, st[j].line_no, st[j].size);
		}
		else if(st[j].type==5) {
			printf("| float[]\t");
			printf("| %s\t| %d\t| %d\t| %d\t| %d\n",st[j].idName,st[j].value, st[j].scope, st[j].line_no, st[j].size);
		}
		
    }
}

 	 
     	 
