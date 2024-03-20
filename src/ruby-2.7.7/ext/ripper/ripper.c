/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     END_OF_INPUT = 0,
     keyword_class = 258,
     keyword_module = 259,
     keyword_def = 260,
     keyword_undef = 261,
     keyword_begin = 262,
     keyword_rescue = 263,
     keyword_ensure = 264,
     keyword_end = 265,
     keyword_if = 266,
     keyword_unless = 267,
     keyword_then = 268,
     keyword_elsif = 269,
     keyword_else = 270,
     keyword_case = 271,
     keyword_when = 272,
     keyword_while = 273,
     keyword_until = 274,
     keyword_for = 275,
     keyword_break = 276,
     keyword_next = 277,
     keyword_redo = 278,
     keyword_retry = 279,
     keyword_in = 280,
     keyword_do = 281,
     keyword_do_cond = 282,
     keyword_do_block = 283,
     keyword_do_LAMBDA = 284,
     keyword_return = 285,
     keyword_yield = 286,
     keyword_super = 287,
     keyword_self = 288,
     keyword_nil = 289,
     keyword_true = 290,
     keyword_false = 291,
     keyword_and = 292,
     keyword_or = 293,
     keyword_not = 294,
     modifier_if = 295,
     modifier_unless = 296,
     modifier_while = 297,
     modifier_until = 298,
     modifier_rescue = 299,
     keyword_alias = 300,
     keyword_defined = 301,
     keyword_BEGIN = 302,
     keyword_END = 303,
     keyword__LINE__ = 304,
     keyword__FILE__ = 305,
     keyword__ENCODING__ = 306,
     tIDENTIFIER = 307,
     tFID = 308,
     tGVAR = 309,
     tIVAR = 310,
     tCONSTANT = 311,
     tCVAR = 312,
     tLABEL = 313,
     tINTEGER = 314,
     tFLOAT = 315,
     tRATIONAL = 316,
     tIMAGINARY = 317,
     tCHAR = 318,
     tNTH_REF = 319,
     tBACK_REF = 320,
     tSTRING_CONTENT = 321,
     tREGEXP_END = 322,
     tSP = 323,
     tUPLUS = 132,
     tUMINUS = 133,
     tPOW = 134,
     tCMP = 135,
     tEQ = 140,
     tEQQ = 141,
     tNEQ = 142,
     tGEQ = 139,
     tLEQ = 138,
     tANDOP = 148,
     tOROP = 149,
     tMATCH = 143,
     tNMATCH = 144,
     tDOT2 = 128,
     tDOT3 = 129,
     tBDOT2 = 130,
     tBDOT3 = 131,
     tAREF = 145,
     tASET = 146,
     tLSHFT = 136,
     tRSHFT = 137,
     tANDDOT = 150,
     tCOLON2 = 147,
     tCOLON3 = 324,
     tOP_ASGN = 325,
     tASSOC = 326,
     tLPAREN = 327,
     tLPAREN_ARG = 328,
     tRPAREN = 329,
     tLBRACK = 330,
     tLBRACE = 331,
     tLBRACE_ARG = 332,
     tSTAR = 333,
     tDSTAR = 334,
     tAMPER = 335,
     tLAMBDA = 336,
     tSYMBEG = 337,
     tSTRING_BEG = 338,
     tXSTRING_BEG = 339,
     tREGEXP_BEG = 340,
     tWORDS_BEG = 341,
     tQWORDS_BEG = 342,
     tSYMBOLS_BEG = 343,
     tQSYMBOLS_BEG = 344,
     tSTRING_END = 345,
     tSTRING_DEND = 346,
     tSTRING_DBEG = 347,
     tSTRING_DVAR = 348,
     tLAMBEG = 349,
     tLABEL_END = 350,
     tLOWEST = 351,
     tUMINUS_NUM = 352,
     tLAST_TOKEN = 353
   };
#endif
/* Tokens.  */
#define END_OF_INPUT 0
#define keyword_class 258
#define keyword_module 259
#define keyword_def 260
#define keyword_undef 261
#define keyword_begin 262
#define keyword_rescue 263
#define keyword_ensure 264
#define keyword_end 265
#define keyword_if 266
#define keyword_unless 267
#define keyword_then 268
#define keyword_elsif 269
#define keyword_else 270
#define keyword_case 271
#define keyword_when 272
#define keyword_while 273
#define keyword_until 274
#define keyword_for 275
#define keyword_break 276
#define keyword_next 277
#define keyword_redo 278
#define keyword_retry 279
#define keyword_in 280
#define keyword_do 281
#define keyword_do_cond 282
#define keyword_do_block 283
#define keyword_do_LAMBDA 284
#define keyword_return 285
#define keyword_yield 286
#define keyword_super 287
#define keyword_self 288
#define keyword_nil 289
#define keyword_true 290
#define keyword_false 291
#define keyword_and 292
#define keyword_or 293
#define keyword_not 294
#define modifier_if 295
#define modifier_unless 296
#define modifier_while 297
#define modifier_until 298
#define modifier_rescue 299
#define keyword_alias 300
#define keyword_defined 301
#define keyword_BEGIN 302
#define keyword_END 303
#define keyword__LINE__ 304
#define keyword__FILE__ 305
#define keyword__ENCODING__ 306
#define tIDENTIFIER 307
#define tFID 308
#define tGVAR 309
#define tIVAR 310
#define tCONSTANT 311
#define tCVAR 312
#define tLABEL 313
#define tINTEGER 314
#define tFLOAT 315
#define tRATIONAL 316
#define tIMAGINARY 317
#define tCHAR 318
#define tNTH_REF 319
#define tBACK_REF 320
#define tSTRING_CONTENT 321
#define tREGEXP_END 322
#define tSP 323
#define tUPLUS 132
#define tUMINUS 133
#define tPOW 134
#define tCMP 135
#define tEQ 140
#define tEQQ 141
#define tNEQ 142
#define tGEQ 139
#define tLEQ 138
#define tANDOP 148
#define tOROP 149
#define tMATCH 143
#define tNMATCH 144
#define tDOT2 128
#define tDOT3 129
#define tBDOT2 130
#define tBDOT3 131
#define tAREF 145
#define tASET 146
#define tLSHFT 136
#define tRSHFT 137
#define tANDDOT 150
#define tCOLON2 147
#define tCOLON3 324
#define tOP_ASGN 325
#define tASSOC 326
#define tLPAREN 327
#define tLPAREN_ARG 328
#define tRPAREN 329
#define tLBRACK 330
#define tLBRACE 331
#define tLBRACE_ARG 332
#define tSTAR 333
#define tDSTAR 334
#define tAMPER 335
#define tLAMBDA 336
#define tSYMBEG 337
#define tSTRING_BEG 338
#define tXSTRING_BEG 339
#define tREGEXP_BEG 340
#define tWORDS_BEG 341
#define tQWORDS_BEG 342
#define tSYMBOLS_BEG 343
#define tQSYMBOLS_BEG 344
#define tSTRING_END 345
#define tSTRING_DEND 346
#define tSTRING_DBEG 347
#define tSTRING_DVAR 348
#define tLAMBEG 349
#define tLABEL_END 350
#define tLOWEST 351
#define tUMINUS_NUM 352
#define tLAST_TOKEN 353




/* Copy the first part of user declarations.  */
#line 12 "ripper.y"


#if !YYPURE
# error needs pure parser
#endif
#define YYDEBUG 1
#define YYERROR_VERBOSE 1
#define YYSTACK_USE_ALLOCA 0
#define YYLTYPE rb_code_location_t
#define YYLTYPE_IS_DECLARED 1

#include "ruby/ruby.h"
#include "ruby/st.h"
#include "ruby/encoding.h"
#include "internal.h"
#include "node.h"
#include "parse.h"
#include "symbol.h"
#include "regenc.h"
#include <stdio.h>
#include <errno.h>
#include <ctype.h>
#include "probes.h"

#ifndef WARN_PAST_SCOPE
# define WARN_PAST_SCOPE 0
#endif

#define TAB_WIDTH 8

#define yydebug (p->debug)	/* disable the global variable definition */

#define YYMALLOC(size)		rb_parser_malloc(p, (size))
#define YYREALLOC(ptr, size)	rb_parser_realloc(p, (ptr), (size))
#define YYCALLOC(nelem, size)	rb_parser_calloc(p, (nelem), (size))
#define YYFREE(ptr)		rb_parser_free(p, (ptr))
#define YYFPRINTF		rb_parser_printf
#define YY_LOCATION_PRINT(File, loc) \
     rb_parser_printf(p, "%d.%d-%d.%d", \
		      (loc).beg_pos.lineno, (loc).beg_pos.column,\
		      (loc).end_pos.lineno, (loc).end_pos.column)
#define YYLLOC_DEFAULT(Current, Rhs, N)					\
    do									\
      if (N)								\
	{								\
	  (Current).beg_pos = YYRHSLOC(Rhs, 1).beg_pos;			\
	  (Current).end_pos = YYRHSLOC(Rhs, N).end_pos;			\
	}								\
      else								\
        {                                                               \
          (Current).beg_pos = YYRHSLOC(Rhs, 0).end_pos;                 \
          (Current).end_pos = YYRHSLOC(Rhs, 0).end_pos;                 \
        }                                                               \
    while (0)

#define RUBY_SET_YYLLOC_FROM_STRTERM_HEREDOC(Current)			\
    rb_parser_set_location_from_strterm_heredoc(p, &p->lex.strterm->u.heredoc, &(Current))
#define RUBY_SET_YYLLOC_OF_NONE(Current)					\
    rb_parser_set_location_of_none(p, &(Current))
#define RUBY_SET_YYLLOC(Current)					\
    rb_parser_set_location(p, &(Current))
#define RUBY_INIT_YYLLOC() \
    { \
	{p->ruby_sourceline, (int)(p->lex.ptok - p->lex.pbeg)}, \
	{p->ruby_sourceline, (int)(p->lex.pcur - p->lex.pbeg)}, \
    }

enum lex_state_bits {
    EXPR_BEG_bit,		/* ignore newline, +/- is a sign. */
    EXPR_END_bit,		/* newline significant, +/- is an operator. */
    EXPR_ENDARG_bit,		/* ditto, and unbound braces. */
    EXPR_ENDFN_bit,		/* ditto, and unbound braces. */
    EXPR_ARG_bit,		/* newline significant, +/- is an operator. */
    EXPR_CMDARG_bit,		/* newline significant, +/- is an operator. */
    EXPR_MID_bit,		/* newline significant, +/- is an operator. */
    EXPR_FNAME_bit,		/* ignore newline, no reserved words. */
    EXPR_DOT_bit,		/* right after `.' or `::', no reserved words. */
    EXPR_CLASS_bit,		/* immediate after `class', no here document. */
    EXPR_LABEL_bit,		/* flag bit, label is allowed. */
    EXPR_LABELED_bit,		/* flag bit, just after a label. */
    EXPR_FITEM_bit,		/* symbol literal as FNAME. */
    EXPR_MAX_STATE
};
/* examine combinations */
enum lex_state_e {
#define DEF_EXPR(n) EXPR_##n = (1 << EXPR_##n##_bit)
    DEF_EXPR(BEG),
    DEF_EXPR(END),
    DEF_EXPR(ENDARG),
    DEF_EXPR(ENDFN),
    DEF_EXPR(ARG),
    DEF_EXPR(CMDARG),
    DEF_EXPR(MID),
    DEF_EXPR(FNAME),
    DEF_EXPR(DOT),
    DEF_EXPR(CLASS),
    DEF_EXPR(LABEL),
    DEF_EXPR(LABELED),
    DEF_EXPR(FITEM),
    EXPR_VALUE = EXPR_BEG,
    EXPR_BEG_ANY  =  (EXPR_BEG | EXPR_MID | EXPR_CLASS),
    EXPR_ARG_ANY  =  (EXPR_ARG | EXPR_CMDARG),
    EXPR_END_ANY  =  (EXPR_END | EXPR_ENDARG | EXPR_ENDFN),
    EXPR_NONE = 0
};
#define IS_lex_state_for(x, ls)	((x) & (ls))
#define IS_lex_state_all_for(x, ls) (((x) & (ls)) == (ls))
#define IS_lex_state(ls)	IS_lex_state_for(p->lex.state, (ls))
#define IS_lex_state_all(ls)	IS_lex_state_all_for(p->lex.state, (ls))

# define SET_LEX_STATE(ls) \
    (p->lex.state = \
     (p->debug ? \
      rb_parser_trace_lex_state(p, p->lex.state, (ls), __LINE__) : \
      (enum lex_state_e)(ls)))

typedef VALUE stack_type;

static const rb_code_location_t NULL_LOC = { {0, -1}, {0, -1} };

# define SHOW_BITSTACK(stack, name) (p->debug ? rb_parser_show_bitstack(p, stack, name, __LINE__) : (void)0)
# define BITSTACK_PUSH(stack, n) (((p->stack) = ((p->stack)<<1)|((n)&1)), SHOW_BITSTACK(p->stack, #stack"(push)"))
# define BITSTACK_POP(stack)	 (((p->stack) = (p->stack) >> 1), SHOW_BITSTACK(p->stack, #stack"(pop)"))
# define BITSTACK_SET_P(stack)	 (SHOW_BITSTACK(p->stack, #stack), (p->stack)&1)
# define BITSTACK_SET(stack, n)	 ((p->stack)=(n), SHOW_BITSTACK(p->stack, #stack"(set)"))

/* A flag to identify keyword_do_cond, "do" keyword after condition expression.
   Examples: `while ... do`, `until ... do`, and `for ... in ... do` */
#define COND_PUSH(n)	BITSTACK_PUSH(cond_stack, (n))
#define COND_POP()	BITSTACK_POP(cond_stack)
#define COND_P()	BITSTACK_SET_P(cond_stack)
#define COND_SET(n)	BITSTACK_SET(cond_stack, (n))

/* A flag to identify keyword_do_block; "do" keyword after command_call.
   Example: `foo 1, 2 do`. */
#define CMDARG_PUSH(n)	BITSTACK_PUSH(cmdarg_stack, (n))
#define CMDARG_POP()	BITSTACK_POP(cmdarg_stack)
#define CMDARG_P()	BITSTACK_SET_P(cmdarg_stack)
#define CMDARG_SET(n)	BITSTACK_SET(cmdarg_stack, (n))

struct vtable {
    ID *tbl;
    int pos;
    int capa;
    struct vtable *prev;
};

struct local_vars {
    struct vtable *args;
    struct vtable *vars;
    struct vtable *used;
# if WARN_PAST_SCOPE
    struct vtable *past;
# endif
    struct local_vars *prev;
# ifndef RIPPER
    struct {
	NODE *outer, *inner, *current;
    } numparam;
# endif
};

enum {
    ORDINAL_PARAM = -1,
    NO_PARAM = 0,
    NUMPARAM_MAX = 9,
};

#define NUMPARAM_ID_P(id) numparam_id_p(id)
#define NUMPARAM_ID_TO_IDX(id) (unsigned int)(((id) >> ID_SCOPE_SHIFT) - tNUMPARAM_1 + 1)
#define NUMPARAM_IDX_TO_ID(idx) TOKEN2LOCALID((tNUMPARAM_1 + (idx) - 1))
static int
numparam_id_p(ID id)
{
    if (!is_local_id(id)) return 0;
    unsigned int idx = NUMPARAM_ID_TO_IDX(id);
    return idx > 0 && idx <= NUMPARAM_MAX;
}
static void numparam_name(struct parser_params *p, ID id);

#define DVARS_INHERIT ((void*)1)
#define DVARS_TOPSCOPE NULL
#define DVARS_TERMINAL_P(tbl) ((tbl) == DVARS_INHERIT || (tbl) == DVARS_TOPSCOPE)

typedef struct token_info {
    const char *token;
    rb_code_position_t beg;
    int indent;
    int nonspc;
    struct token_info *next;
} token_info;

typedef struct rb_strterm_struct rb_strterm_t;

/*
    Structure of Lexer Buffer:

 lex.pbeg     lex.ptok     lex.pcur     lex.pend
    |            |            |            |
    |------------+------------+------------|
                 |<---------->|
                     token
*/
struct parser_params {
    rb_imemo_tmpbuf_t *heap;

    YYSTYPE *lval;

    struct {
	rb_strterm_t *strterm;
	VALUE (*gets)(struct parser_params*,VALUE);
	VALUE input;
	VALUE prevline;
	VALUE lastline;
	VALUE nextline;
	const char *pbeg;
	const char *pcur;
	const char *pend;
	const char *ptok;
	union {
	    long ptr;
	    VALUE (*call)(VALUE, int);
	} gets_;
	enum lex_state_e state;
	/* track the nest level of any parens "()[]{}" */
	int paren_nest;
	/* keep p->lex.paren_nest at the beginning of lambda "->" to detect tLAMBEG and keyword_do_LAMBDA */
	int lpar_beg;
	/* track the nest level of only braces "{}" */
	int brace_nest;
    } lex;
    stack_type cond_stack;
    stack_type cmdarg_stack;
    int tokidx;
    int toksiz;
    int tokline;
    int heredoc_end;
    int heredoc_indent;
    int heredoc_line_indent;
    char *tokenbuf;
    struct local_vars *lvtbl;
    st_table *pvtbl;
    st_table *pktbl;
    int line_count;
    int ruby_sourceline;	/* current line no. */
    const char *ruby_sourcefile; /* current source file */
    VALUE ruby_sourcefile_string;
    rb_encoding *enc;
    token_info *token_info;
    VALUE case_labels;
    VALUE compile_option;

    VALUE debug_buffer;
    VALUE debug_output;

    ID cur_arg;

    rb_ast_t *ast;
    int node_id;

    int max_numparam;

    unsigned int command_start:1;
    unsigned int eofp: 1;
    unsigned int ruby__end__seen: 1;
    unsigned int debug: 1;
    unsigned int has_shebang: 1;
    unsigned int in_defined: 1;
    unsigned int in_kwarg: 1;
    unsigned int in_def: 1;
    unsigned int in_class: 1;
    unsigned int token_seen: 1;
    unsigned int token_info_enabled: 1;
# if WARN_PAST_SCOPE
    unsigned int past_scope_enabled: 1;
# endif
    unsigned int error_p: 1;
    unsigned int cr_seen: 1;

#ifndef RIPPER
    /* Ruby core only */

    unsigned int do_print: 1;
    unsigned int do_loop: 1;
    unsigned int do_chomp: 1;
    unsigned int do_split: 1;
    unsigned int warn_location: 1;

    NODE *eval_tree_begin;
    NODE *eval_tree;
    VALUE error_buffer;
    VALUE debug_lines;
    const struct rb_iseq_struct *parent_iseq;
#else
    /* Ripper only */

    struct {
	VALUE token;
	int line;
	int col;
    } delayed;

    VALUE value;
    VALUE result;
    VALUE parsing_thread;
#endif
};

#define intern_cstr(n,l,en) rb_intern3(n,l,en)

#define STR_NEW(ptr,len) rb_enc_str_new((ptr),(len),p->enc)
#define STR_NEW0() rb_enc_str_new(0,0,p->enc)
#define STR_NEW2(ptr) rb_enc_str_new((ptr),strlen(ptr),p->enc)
#define STR_NEW3(ptr,len,e,func) parser_str_new((ptr),(len),(e),(func),p->enc)
#define TOK_INTERN() intern_cstr(tok(p), toklen(p), p->enc)

static st_table *
push_pvtbl(struct parser_params *p)
{
    st_table *tbl = p->pvtbl;
    p->pvtbl = st_init_numtable();
    return tbl;
}

static void
pop_pvtbl(struct parser_params *p, st_table *tbl)
{
    st_free_table(p->pvtbl);
    p->pvtbl = tbl;
}

static st_table *
push_pktbl(struct parser_params *p)
{
    st_table *tbl = p->pktbl;
    p->pktbl = 0;
    return tbl;
}

static void
pop_pktbl(struct parser_params *p, st_table *tbl)
{
    if (p->pktbl) st_free_table(p->pktbl);
    p->pktbl = tbl;
}

static int parser_yyerror(struct parser_params*, const YYLTYPE *yylloc, const char*);
#define yyerror0(msg) parser_yyerror(p, NULL, (msg))
#define yyerror1(loc, msg) parser_yyerror(p, (loc), (msg))
#define yyerror(yylloc, p, msg) parser_yyerror(p, yylloc, msg)
#define token_flush(ptr) ((ptr)->lex.ptok = (ptr)->lex.pcur)

#ifdef RIPPER
#define compile_for_eval	(0)
#else
#define compile_for_eval	(p->parent_iseq != 0)
#endif

#define token_column		((int)(p->lex.ptok - p->lex.pbeg))

#define CALL_Q_P(q) ((q) == TOKEN2VAL(tANDDOT))
#define NODE_CALL_Q(q) (CALL_Q_P(q) ? NODE_QCALL : NODE_CALL)
#define NEW_QCALL(q,r,m,a,loc) NEW_NODE(NODE_CALL_Q(q),r,m,a,loc)

#define lambda_beginning_p() (p->lex.lpar_beg == p->lex.paren_nest)

static enum yytokentype yylex(YYSTYPE*, YYLTYPE*, struct parser_params*);

#ifndef RIPPER
static inline void
rb_discard_node(struct parser_params *p, NODE *n)
{
    rb_ast_delete_node(p->ast, n);
}
#endif

#ifdef RIPPER
static inline VALUE
add_mark_object(struct parser_params *p, VALUE obj)
{
    if (!SPECIAL_CONST_P(obj)
	&& !RB_TYPE_P(obj, T_NODE) /* Ripper jumbles NODE objects and other objects... */
    ) {
	rb_ast_add_mark_object(p->ast, obj);
    }
    return obj;
}
#else
static NODE* node_newnode_with_locals(struct parser_params *, enum node_type, VALUE, VALUE, const rb_code_location_t*);
#endif

static NODE* node_newnode(struct parser_params *, enum node_type, VALUE, VALUE, VALUE, const rb_code_location_t*);
#define rb_node_newnode(type, a1, a2, a3, loc) node_newnode(p, (type), (a1), (a2), (a3), (loc))

static NODE *nd_set_loc(NODE *nd, const YYLTYPE *loc);

static int
parser_get_node_id(struct parser_params *p)
{
    int node_id = p->node_id;
    p->node_id++;
    return node_id;
}

#ifndef RIPPER
static inline void
set_line_body(NODE *body, int line)
{
    if (!body) return;
    switch (nd_type(body)) {
      case NODE_RESCUE:
      case NODE_ENSURE:
	nd_set_line(body, line);
    }
}

#define yyparse ruby_yyparse

static NODE* cond(struct parser_params *p, NODE *node, const YYLTYPE *loc);
static NODE* method_cond(struct parser_params *p, NODE *node, const YYLTYPE *loc);
#define new_nil(loc) NEW_NIL(loc)
static NODE *new_if(struct parser_params*,NODE*,NODE*,NODE*,const YYLTYPE*);
static NODE *new_unless(struct parser_params*,NODE*,NODE*,NODE*,const YYLTYPE*);
static NODE *logop(struct parser_params*,ID,NODE*,NODE*,const YYLTYPE*,const YYLTYPE*);

static NODE *newline_node(NODE*);
static void fixpos(NODE*,NODE*);

static int value_expr_gen(struct parser_params*,NODE*);
static void void_expr(struct parser_params*,NODE*);
static NODE *remove_begin(NODE*);
static NODE *remove_begin_all(NODE*);
#define value_expr(node) value_expr_gen(p, (node) = remove_begin(node))
static NODE *void_stmts(struct parser_params*,NODE*);
static void reduce_nodes(struct parser_params*,NODE**);
static void block_dup_check(struct parser_params*,NODE*,NODE*);

static NODE *block_append(struct parser_params*,NODE*,NODE*);
static NODE *list_append(struct parser_params*,NODE*,NODE*);
static NODE *list_concat(NODE*,NODE*);
static NODE *arg_append(struct parser_params*,NODE*,NODE*,const YYLTYPE*);
static NODE *last_arg_append(struct parser_params *p, NODE *args, NODE *last_arg, const YYLTYPE *loc);
static NODE *rest_arg_append(struct parser_params *p, NODE *args, NODE *rest_arg, const YYLTYPE *loc);
static NODE *literal_concat(struct parser_params*,NODE*,NODE*,const YYLTYPE*);
static NODE *new_evstr(struct parser_params*,NODE*,const YYLTYPE*);
static NODE *evstr2dstr(struct parser_params*,NODE*);
static NODE *splat_array(NODE*);
static void mark_lvar_used(struct parser_params *p, NODE *rhs);

static NODE *call_bin_op(struct parser_params*,NODE*,ID,NODE*,const YYLTYPE*,const YYLTYPE*);
static NODE *call_uni_op(struct parser_params*,NODE*,ID,const YYLTYPE*,const YYLTYPE*);
static NODE *new_qcall(struct parser_params* p, ID atype, NODE *recv, ID mid, NODE *args, const YYLTYPE *op_loc, const YYLTYPE *loc);
static NODE *new_command_qcall(struct parser_params* p, ID atype, NODE *recv, ID mid, NODE *args, NODE *block, const YYLTYPE *op_loc, const YYLTYPE *loc);
static NODE *method_add_block(struct parser_params*p, NODE *m, NODE *b, const YYLTYPE *loc) {b->nd_iter = m; b->nd_loc = *loc; return b;}

static bool args_info_empty_p(struct rb_args_info *args);
static NODE *new_args(struct parser_params*,NODE*,NODE*,ID,NODE*,NODE*,const YYLTYPE*);
static NODE *new_args_tail(struct parser_params*,NODE*,ID,ID,const YYLTYPE*);
static NODE *new_array_pattern(struct parser_params *p, NODE *constant, NODE *pre_arg, NODE *aryptn, const YYLTYPE *loc);
static NODE *new_array_pattern_tail(struct parser_params *p, NODE *pre_args, int has_rest, ID rest_arg, NODE *post_args, const YYLTYPE *loc);
static NODE *new_hash_pattern(struct parser_params *p, NODE *constant, NODE *hshptn, const YYLTYPE *loc);
static NODE *new_hash_pattern_tail(struct parser_params *p, NODE *kw_args, ID kw_rest_arg, const YYLTYPE *loc);
static NODE *new_case3(struct parser_params *p, NODE *val, NODE *pat, const YYLTYPE *loc);

static NODE *new_kw_arg(struct parser_params *p, NODE *k, const YYLTYPE *loc);
static NODE *args_with_numbered(struct parser_params*,NODE*,int);

static VALUE negate_lit(struct parser_params*, VALUE);
static NODE *ret_args(struct parser_params*,NODE*);
static NODE *arg_blk_pass(NODE*,NODE*);
static NODE *new_yield(struct parser_params*,NODE*,const YYLTYPE*);
static NODE *dsym_node(struct parser_params*,NODE*,const YYLTYPE*);

static NODE *gettable(struct parser_params*,ID,const YYLTYPE*);
static NODE *assignable(struct parser_params*,ID,NODE*,const YYLTYPE*);

static NODE *aryset(struct parser_params*,NODE*,NODE*,const YYLTYPE*);
static NODE *attrset(struct parser_params*,NODE*,ID,ID,const YYLTYPE*);

static void rb_backref_error(struct parser_params*,NODE*);
static NODE *node_assign(struct parser_params*,NODE*,NODE*,const YYLTYPE*);

static NODE *new_op_assign(struct parser_params *p, NODE *lhs, ID op, NODE *rhs, const YYLTYPE *loc);
static NODE *new_ary_op_assign(struct parser_params *p, NODE *ary, NODE *args, ID op, NODE *rhs, const YYLTYPE *args_loc, const YYLTYPE *loc);
static NODE *new_attr_op_assign(struct parser_params *p, NODE *lhs, ID atype, ID attr, ID op, NODE *rhs, const YYLTYPE *loc);
static NODE *new_const_op_assign(struct parser_params *p, NODE *lhs, ID op, NODE *rhs, const YYLTYPE *loc);
static NODE *new_bodystmt(struct parser_params *p, NODE *head, NODE *rescue, NODE *rescue_else, NODE *ensure, const YYLTYPE *loc);

static NODE *const_decl(struct parser_params *p, NODE* path, const YYLTYPE *loc);

static NODE *opt_arg_append(NODE*, NODE*);
static NODE *kwd_append(NODE*, NODE*);

static NODE *new_hash(struct parser_params *p, NODE *hash, const YYLTYPE *loc);
static NODE *new_unique_key_hash(struct parser_params *p, NODE *hash, const YYLTYPE *loc);

static NODE *new_defined(struct parser_params *p, NODE *expr, const YYLTYPE *loc);

static NODE *new_regexp(struct parser_params *, NODE *, int, const YYLTYPE *);

#define make_list(list, loc) ((list) ? (nd_set_loc(list, loc), list) : NEW_ZLIST(loc))

static NODE *new_xstring(struct parser_params *, NODE *, const YYLTYPE *loc);

static NODE *symbol_append(struct parser_params *p, NODE *symbols, NODE *symbol);

static NODE *match_op(struct parser_params*,NODE*,NODE*,const YYLTYPE*,const YYLTYPE*);

static ID  *local_tbl(struct parser_params*);

static VALUE reg_compile(struct parser_params*, VALUE, int);
static void reg_fragment_setenc(struct parser_params*, VALUE, int);
static int reg_fragment_check(struct parser_params*, VALUE, int);
static NODE *reg_named_capture_assign(struct parser_params* p, VALUE regexp, const YYLTYPE *loc);

static int literal_concat0(struct parser_params *p, VALUE head, VALUE tail);
static NODE *heredoc_dedent(struct parser_params*,NODE*);

static void check_literal_when(struct parser_params *p, NODE *args, const YYLTYPE *loc);

#define get_id(id) (id)
#define get_value(val) (val)
#define get_num(num) (num)
#else  /* RIPPER */
#define NODE_RIPPER NODE_CDECL

static inline int ripper_is_node_yylval(VALUE n);

static inline VALUE
ripper_new_yylval(struct parser_params *p, ID a, VALUE b, VALUE c)
{
    if (ripper_is_node_yylval(c)) c = RNODE(c)->nd_cval;
    add_mark_object(p, b);
    add_mark_object(p, c);
    return (VALUE)NEW_CDECL(a, b, c, &NULL_LOC);
}

static inline int
ripper_is_node_yylval(VALUE n)
{
    return RB_TYPE_P(n, T_NODE) && nd_type(RNODE(n)) == NODE_RIPPER;
}

#define value_expr(node) ((void)(node))
#define remove_begin(node) (node)
#define void_stmts(p,x) (x)
#define rb_dvar_defined(id, base) 0
#define rb_local_defined(id, base) 0
static ID ripper_get_id(VALUE);
#define get_id(id) ripper_get_id(id)
static VALUE ripper_get_value(VALUE);
#define get_value(val) ripper_get_value(val)
#define get_num(num) (int)get_id(num)
static VALUE assignable(struct parser_params*,VALUE);
static int id_is_var(struct parser_params *p, ID id);

#define method_cond(p,node,loc) (node)
#define call_bin_op(p, recv,id,arg1,op_loc,loc) dispatch3(binary, (recv), STATIC_ID2SYM(id), (arg1))
#define match_op(p,node1,node2,op_loc,loc) call_bin_op(0, (node1), idEqTilde, (node2), op_loc, loc)
#define call_uni_op(p, recv,id,op_loc,loc) dispatch2(unary, STATIC_ID2SYM(id), (recv))
#define logop(p,id,node1,node2,op_loc,loc) call_bin_op(0, (node1), (id), (node2), op_loc, loc)

#define new_nil(loc) Qnil

static VALUE new_regexp(struct parser_params *, VALUE, VALUE, const YYLTYPE *);

static VALUE const_decl(struct parser_params *p, VALUE path);

static VALUE var_field(struct parser_params *p, VALUE a);
static VALUE assign_error(struct parser_params *p, VALUE a);

static VALUE parser_reg_compile(struct parser_params*, VALUE, int, VALUE *);

#endif /* !RIPPER */

/* forward declaration */
typedef struct rb_strterm_heredoc_struct rb_strterm_heredoc_t;

RUBY_SYMBOL_EXPORT_BEGIN
VALUE rb_parser_reg_compile(struct parser_params* p, VALUE str, int options);
int rb_reg_fragment_setenc(struct parser_params*, VALUE, int);
enum lex_state_e rb_parser_trace_lex_state(struct parser_params *, enum lex_state_e, enum lex_state_e, int);
VALUE rb_parser_lex_state_name(enum lex_state_e state);
void rb_parser_show_bitstack(struct parser_params *, stack_type, const char *, int);
PRINTF_ARGS(void rb_parser_fatal(struct parser_params *p, const char *fmt, ...), 2, 3);
YYLTYPE *rb_parser_set_location_from_strterm_heredoc(struct parser_params *p, rb_strterm_heredoc_t *here, YYLTYPE *yylloc);
YYLTYPE *rb_parser_set_location_of_none(struct parser_params *p, YYLTYPE *yylloc);
YYLTYPE *rb_parser_set_location(struct parser_params *p, YYLTYPE *yylloc);
RUBY_SYMBOL_EXPORT_END

static void error_duplicate_pattern_variable(struct parser_params *p, ID id, const YYLTYPE *loc);
static void error_duplicate_pattern_key(struct parser_params *p, ID id, const YYLTYPE *loc);
static ID formal_argument(struct parser_params*, ID);
static ID shadowing_lvar(struct parser_params*,ID);
static void new_bv(struct parser_params*,ID);

static void local_push(struct parser_params*,int);
static void local_pop(struct parser_params*);
static void local_var(struct parser_params*, ID);
static void arg_var(struct parser_params*, ID);
static int  local_id(struct parser_params *p, ID id);
static int  local_id_ref(struct parser_params*, ID, ID **);
#ifndef RIPPER
static ID   internal_id(struct parser_params*);
#endif

static const struct vtable *dyna_push(struct parser_params *);
static void dyna_pop(struct parser_params*, const struct vtable *);
static int dyna_in_block(struct parser_params*);
#define dyna_var(p, id) local_var(p, id)
static int dvar_defined(struct parser_params*, ID);
static int dvar_defined_ref(struct parser_params*, ID, ID**);
static int dvar_curr(struct parser_params*,ID);

static int lvar_defined(struct parser_params*, ID);

static NODE *numparam_push(struct parser_params *p);
static void numparam_pop(struct parser_params *p, NODE *prev_inner);

#ifdef RIPPER
# define METHOD_NOT idNOT
#else
# define METHOD_NOT '!'
#endif

#define idFWD_REST   '*'
#ifdef RUBY3_KEYWORDS
#define idFWD_KWREST idPow /* Use simple "**", as tDSTAR is "**arg" */
#else
#define idFWD_KWREST 0
#endif
#define idFWD_BLOCK  '&'

#define RE_OPTION_ONCE (1<<16)
#define RE_OPTION_ENCODING_SHIFT 8
#define RE_OPTION_ENCODING(e) (((e)&0xff)<<RE_OPTION_ENCODING_SHIFT)
#define RE_OPTION_ENCODING_IDX(o) (((o)>>RE_OPTION_ENCODING_SHIFT)&0xff)
#define RE_OPTION_ENCODING_NONE(o) ((o)&RE_OPTION_ARG_ENCODING_NONE)
#define RE_OPTION_MASK  0xff
#define RE_OPTION_ARG_ENCODING_NONE 32

/* structs for managing terminator of string literal and heredocment */
typedef struct rb_strterm_literal_struct {
    union {
	VALUE dummy;
	long nest;
    } u0;
    union {
	VALUE dummy;
	long func;	    /* STR_FUNC_* (e.g., STR_FUNC_ESCAPE and STR_FUNC_EXPAND) */
    } u1;
    union {
	VALUE dummy;
	long paren;	    /* '(' of `%q(...)` */
    } u2;
    union {
	VALUE dummy;
	long term;	    /* ')' of `%q(...)` */
    } u3;
} rb_strterm_literal_t;

#define HERETERM_LENGTH_BITS ((SIZEOF_VALUE - 1) * CHAR_BIT - 1)

struct rb_strterm_heredoc_struct {
    VALUE lastline;	/* the string of line that contains `<<"END"` */
    long offset;	/* the column of END in `<<"END"` */
    int sourceline;	/* lineno of the line that contains `<<"END"` */
    unsigned length	/* the length of END in `<<"END"` */
#if HERETERM_LENGTH_BITS < SIZEOF_INT * CHAR_BIT
    : HERETERM_LENGTH_BITS
# define HERETERM_LENGTH_MAX ((1U << HERETERM_LENGTH_BITS) - 1)
#else
# define HERETERM_LENGTH_MAX UINT_MAX
#endif
    ;
#if HERETERM_LENGTH_BITS < SIZEOF_INT * CHAR_BIT
    unsigned quote: 1;
    unsigned func: 8;
#else
    uint8_t quote;
    uint8_t func;
#endif
};
STATIC_ASSERT(rb_strterm_heredoc_t, sizeof(rb_strterm_heredoc_t) <= 4 * SIZEOF_VALUE);

#define STRTERM_HEREDOC IMEMO_FL_USER0

struct rb_strterm_struct {
    VALUE flags;
    union {
	rb_strterm_literal_t literal;
	rb_strterm_heredoc_t heredoc;
    } u;
};

#ifndef RIPPER
void
rb_strterm_mark(VALUE obj)
{
    rb_strterm_t *strterm = (rb_strterm_t*)obj;
    if (RBASIC(obj)->flags & STRTERM_HEREDOC) {
	rb_strterm_heredoc_t *heredoc = &strterm->u.heredoc;
	rb_gc_mark(heredoc->lastline);
    }
}
#endif

#define yytnamerr(yyres, yystr) (YYSIZE_T)rb_yytnamerr(p, yyres, yystr)
size_t rb_yytnamerr(struct parser_params *p, char *yyres, const char *yystr);

#define TOKEN2ID(tok) ( \
    tTOKEN_LOCAL_BEGIN<(tok)&&(tok)<tTOKEN_LOCAL_END ? TOKEN2LOCALID(tok) : \
    tTOKEN_INSTANCE_BEGIN<(tok)&&(tok)<tTOKEN_INSTANCE_END ? TOKEN2INSTANCEID(tok) : \
    tTOKEN_GLOBAL_BEGIN<(tok)&&(tok)<tTOKEN_GLOBAL_END ? TOKEN2GLOBALID(tok) : \
    tTOKEN_CONST_BEGIN<(tok)&&(tok)<tTOKEN_CONST_END ? TOKEN2CONSTID(tok) : \
    tTOKEN_CLASS_BEGIN<(tok)&&(tok)<tTOKEN_CLASS_END ? TOKEN2CLASSID(tok) : \
    tTOKEN_ATTRSET_BEGIN<(tok)&&(tok)<tTOKEN_ATTRSET_END ? TOKEN2ATTRSETID(tok) : \
    ((tok) / ((tok)<tPRESERVED_ID_END && ((tok)>=128 || rb_ispunct(tok)))))

/****** Ripper *******/

#ifdef RIPPER
#define RIPPER_VERSION "0.1.0"

static inline VALUE intern_sym(const char *name);

#include "eventids1.c"
#include "eventids2.c"

static VALUE ripper_dispatch0(struct parser_params*,ID);
static VALUE ripper_dispatch1(struct parser_params*,ID,VALUE);
static VALUE ripper_dispatch2(struct parser_params*,ID,VALUE,VALUE);
static VALUE ripper_dispatch3(struct parser_params*,ID,VALUE,VALUE,VALUE);
static VALUE ripper_dispatch4(struct parser_params*,ID,VALUE,VALUE,VALUE,VALUE);
static VALUE ripper_dispatch5(struct parser_params*,ID,VALUE,VALUE,VALUE,VALUE,VALUE);
static VALUE ripper_dispatch7(struct parser_params*,ID,VALUE,VALUE,VALUE,VALUE,VALUE,VALUE,VALUE);
static void ripper_error(struct parser_params *p);

#define dispatch0(n)            ripper_dispatch0(p, TOKEN_PASTE(ripper_id_, n))
#define dispatch1(n,a)          ripper_dispatch1(p, TOKEN_PASTE(ripper_id_, n), (a))
#define dispatch2(n,a,b)        ripper_dispatch2(p, TOKEN_PASTE(ripper_id_, n), (a), (b))
#define dispatch3(n,a,b,c)      ripper_dispatch3(p, TOKEN_PASTE(ripper_id_, n), (a), (b), (c))
#define dispatch4(n,a,b,c,d)    ripper_dispatch4(p, TOKEN_PASTE(ripper_id_, n), (a), (b), (c), (d))
#define dispatch5(n,a,b,c,d,e)  ripper_dispatch5(p, TOKEN_PASTE(ripper_id_, n), (a), (b), (c), (d), (e))
#define dispatch7(n,a,b,c,d,e,f,g) ripper_dispatch7(p, TOKEN_PASTE(ripper_id_, n), (a), (b), (c), (d), (e), (f), (g))

#define yyparse ripper_yyparse

#define ID2VAL(id) STATIC_ID2SYM(id)
#define TOKEN2VAL(t) ID2VAL(TOKEN2ID(t))
#define KWD2EID(t, v) ripper_new_yylval(p, keyword_##t, get_value(v), 0)

#define params_new(pars, opts, rest, pars2, kws, kwrest, blk) \
        dispatch7(params, (pars), (opts), (rest), (pars2), (kws), (kwrest), (blk))

#define escape_Qundef(x) ((x)==Qundef ? Qnil : (x))

static inline VALUE
new_args(struct parser_params *p, VALUE pre_args, VALUE opt_args, VALUE rest_arg, VALUE post_args, VALUE tail, YYLTYPE *loc)
{
    NODE *t = (NODE *)tail;
    VALUE kw_args = t->u1.value, kw_rest_arg = t->u2.value, block = t->u3.value;
    return params_new(pre_args, opt_args, rest_arg, post_args, kw_args, kw_rest_arg, escape_Qundef(block));
}

static inline VALUE
new_args_tail(struct parser_params *p, VALUE kw_args, VALUE kw_rest_arg, VALUE block, YYLTYPE *loc)
{
    NODE *t = rb_node_newnode(NODE_ARGS_AUX, kw_args, kw_rest_arg, block, &NULL_LOC);
    add_mark_object(p, kw_args);
    add_mark_object(p, kw_rest_arg);
    add_mark_object(p, block);
    return (VALUE)t;
}

static inline VALUE
args_with_numbered(struct parser_params *p, VALUE args, int max_numparam)
{
    return args;
}

static VALUE
new_array_pattern(struct parser_params *p, VALUE constant, VALUE pre_arg, VALUE aryptn, const YYLTYPE *loc)
{
    NODE *t = (NODE *)aryptn;
    struct rb_ary_pattern_info *apinfo = t->nd_apinfo;
    VALUE pre_args = Qnil, rest_arg = Qnil, post_args = Qnil;

    if (apinfo) {
        pre_args = rb_ary_entry(apinfo->imemo, 0);
        rest_arg = rb_ary_entry(apinfo->imemo, 1);
        post_args = rb_ary_entry(apinfo->imemo, 2);
    }

    if (!NIL_P(pre_arg)) {
	if (!NIL_P(pre_args)) {
	    rb_ary_unshift(pre_args, pre_arg);
	}
	else {
	    pre_args = rb_ary_new_from_args(1, pre_arg);
	}
    }
    return dispatch4(aryptn, constant, pre_args, rest_arg, post_args);
}

static VALUE
new_array_pattern_tail(struct parser_params *p, VALUE pre_args, VALUE has_rest, VALUE rest_arg, VALUE post_args, const YYLTYPE *loc)
{
    NODE *t;
    struct rb_ary_pattern_info *apinfo;

    if (has_rest) {
	rest_arg = dispatch1(var_field, rest_arg ? rest_arg : Qnil);
    }
    else {
	rest_arg = Qnil;
    }

    VALUE tmpbuf = rb_imemo_tmpbuf_auto_free_pointer();
    apinfo = ZALLOC(struct rb_ary_pattern_info);
    rb_imemo_tmpbuf_set_ptr(tmpbuf, apinfo);
    apinfo->imemo = rb_ary_new_from_args(4, pre_args, rest_arg, post_args, tmpbuf);

    t = rb_node_newnode(NODE_ARYPTN, Qnil, Qnil, (VALUE)apinfo, &NULL_LOC);
    RB_OBJ_WRITTEN(p->ast, Qnil, apinfo->imemo);

    return (VALUE)t;
}

#define new_hash(p,h,l) rb_ary_new_from_args(0)

static VALUE
new_unique_key_hash(struct parser_params *p, VALUE ary, const YYLTYPE *loc)
{
    return ary;
}

static VALUE
new_hash_pattern(struct parser_params *p, VALUE constant, VALUE hshptn, const YYLTYPE *loc)
{
    NODE *t = (NODE *)hshptn;
    VALUE kw_args = t->u1.value, kw_rest_arg = t->u2.value;
    return dispatch3(hshptn, constant, kw_args, kw_rest_arg);
}

static VALUE
new_hash_pattern_tail(struct parser_params *p, VALUE kw_args, VALUE kw_rest_arg, const YYLTYPE *loc)
{
    NODE *t;
    if (kw_rest_arg) {
	kw_rest_arg = dispatch1(var_field, kw_rest_arg);
    }
    else {
	kw_rest_arg = Qnil;
    }
    t = rb_node_newnode(NODE_HSHPTN, kw_args, kw_rest_arg, 0, &NULL_LOC);

    add_mark_object(p, kw_args);
    add_mark_object(p, kw_rest_arg);
    return (VALUE)t;
}

#define new_defined(p,expr,loc) dispatch1(defined, (expr))

static VALUE heredoc_dedent(struct parser_params*,VALUE);

#else
#define ID2VAL(id) (id)
#define TOKEN2VAL(t) ID2VAL(t)
#define KWD2EID(t, v) keyword_##t
#endif /* RIPPER */

#ifndef RIPPER
# define Qnone 0
# define Qnull 0
# define ifndef_ripper(x) (x)
#else
# define Qnone Qnil
# define Qnull Qundef
# define ifndef_ripper(x)
#endif

# define rb_warn0(fmt)         WARN_CALL(WARN_ARGS(fmt, 1))
# define rb_warn1(fmt,a)       WARN_CALL(WARN_ARGS(fmt, 2), (a))
# define rb_warn2(fmt,a,b)     WARN_CALL(WARN_ARGS(fmt, 3), (a), (b))
# define rb_warn3(fmt,a,b,c)   WARN_CALL(WARN_ARGS(fmt, 4), (a), (b), (c))
# define rb_warn4(fmt,a,b,c,d) WARN_CALL(WARN_ARGS(fmt, 5), (a), (b), (c), (d))
# define rb_warning0(fmt)         WARNING_CALL(WARNING_ARGS(fmt, 1))
# define rb_warning1(fmt,a)       WARNING_CALL(WARNING_ARGS(fmt, 2), (a))
# define rb_warning2(fmt,a,b)     WARNING_CALL(WARNING_ARGS(fmt, 3), (a), (b))
# define rb_warning3(fmt,a,b,c)   WARNING_CALL(WARNING_ARGS(fmt, 4), (a), (b), (c))
# define rb_warning4(fmt,a,b,c,d) WARNING_CALL(WARNING_ARGS(fmt, 5), (a), (b), (c), (d))
# define rb_warn0L(l,fmt)         WARN_CALL(WARN_ARGS_L(l, fmt, 1))
# define rb_warn1L(l,fmt,a)       WARN_CALL(WARN_ARGS_L(l, fmt, 2), (a))
# define rb_warn2L(l,fmt,a,b)     WARN_CALL(WARN_ARGS_L(l, fmt, 3), (a), (b))
# define rb_warn3L(l,fmt,a,b,c)   WARN_CALL(WARN_ARGS_L(l, fmt, 4), (a), (b), (c))
# define rb_warn4L(l,fmt,a,b,c,d) WARN_CALL(WARN_ARGS_L(l, fmt, 5), (a), (b), (c), (d))
# define rb_warning0L(l,fmt)         WARNING_CALL(WARNING_ARGS_L(l, fmt, 1))
# define rb_warning1L(l,fmt,a)       WARNING_CALL(WARNING_ARGS_L(l, fmt, 2), (a))
# define rb_warning2L(l,fmt,a,b)     WARNING_CALL(WARNING_ARGS_L(l, fmt, 3), (a), (b))
# define rb_warning3L(l,fmt,a,b,c)   WARNING_CALL(WARNING_ARGS_L(l, fmt, 4), (a), (b), (c))
# define rb_warning4L(l,fmt,a,b,c,d) WARNING_CALL(WARNING_ARGS_L(l, fmt, 5), (a), (b), (c), (d))
#ifdef RIPPER
static ID id_warn, id_warning, id_gets, id_assoc;
# define WARN_S_L(s,l) STR_NEW(s,l)
# define WARN_S(s) STR_NEW2(s)
# define WARN_I(i) INT2NUM(i)
# define WARN_ID(i) rb_id2str(i)
# define WARN_IVAL(i) i
# define PRIsWARN "s"
# define WARN_ARGS(fmt,n) p->value, id_warn, n, rb_usascii_str_new_lit(fmt)
# define WARN_ARGS_L(l,fmt,n) WARN_ARGS(fmt,n)
# ifdef HAVE_VA_ARGS_MACRO
# define WARN_CALL(...) rb_funcall(__VA_ARGS__)
# else
# define WARN_CALL rb_funcall
# endif
# define WARNING_ARGS(fmt,n) p->value, id_warning, n, rb_usascii_str_new_lit(fmt)
# define WARNING_ARGS_L(l, fmt,n) WARNING_ARGS(fmt,n)
# ifdef HAVE_VA_ARGS_MACRO
# define WARNING_CALL(...) rb_funcall(__VA_ARGS__)
# else
# define WARNING_CALL rb_funcall
# endif
PRINTF_ARGS(static void ripper_compile_error(struct parser_params*, const char *fmt, ...), 2, 3);
# define compile_error ripper_compile_error
#else
# define WARN_S_L(s,l) s
# define WARN_S(s) s
# define WARN_I(i) i
# define WARN_ID(i) rb_id2name(i)
# define WARN_IVAL(i) NUM2INT(i)
# define PRIsWARN PRIsVALUE
# define WARN_ARGS(fmt,n) WARN_ARGS_L(p->ruby_sourceline,fmt,n)
# define WARN_ARGS_L(l,fmt,n) p->ruby_sourcefile, (l), (fmt)
# define WARN_CALL rb_compile_warn
# define WARNING_ARGS(fmt,n) WARN_ARGS(fmt,n)
# define WARNING_ARGS_L(l,fmt,n) WARN_ARGS_L(l,fmt,n)
# define WARNING_CALL rb_compile_warning
PRINTF_ARGS(static void parser_compile_error(struct parser_params*, const char *fmt, ...), 2, 3);
# define compile_error parser_compile_error
#endif

static void token_info_setup(token_info *ptinfo, const char *ptr, const rb_code_location_t *loc);
static void token_info_push(struct parser_params*, const char *token, const rb_code_location_t *loc);
static void token_info_pop(struct parser_params*, const char *token, const rb_code_location_t *loc);
static void token_info_warn(struct parser_params *p, const char *token, token_info *ptinfo_beg, int same, const rb_code_location_t *loc);

#define WARN_EOL(tok) \
    (looking_at_eol_p(p) ? \
     (void)rb_warning0("`" tok "' at the end of line without an expression") : \
     (void)0)
static int looking_at_eol_p(struct parser_params *p);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 1006 "ripper.y"
{
    VALUE val;
    NODE *node;
    ID id;
    int num;
    st_table *tbl;
    const struct vtable *vars;
    struct rb_strterm_struct *strterm;
}
/* Line 193 of yacc.c.  */
#line 1305 "ripper.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 1330 "ripper.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   13883

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  154
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  266
/* YYNRULES -- Number of rules.  */
#define YYNRULES  761
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1251

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   353

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,    71,
     153,    74,    72,    73,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,   152,   140,     2,     2,     2,   138,   133,     2,
     148,   149,   136,   134,   146,   135,    68,   137,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   128,   151,
     130,   126,   129,   127,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   145,    69,   150,   132,     2,   147,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   143,   131,   144,   141,     2,    88,    89,
      90,    91,    75,    76,    77,    78,    94,    95,    83,    82,
      79,    80,    81,    86,    87,    92,    93,    97,    84,    85,
      96,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      65,    66,    67,    70,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   139,   142
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    12,    14,    18,    21,
      23,    26,    30,    31,    38,    42,    45,    47,    49,    53,
      56,    58,    59,    63,    64,    69,    73,    77,    81,    84,
      88,    92,    96,   100,   104,   109,   111,   115,   119,   125,
     129,   131,   135,   139,   146,   152,   158,   164,   170,   174,
     176,   180,   182,   184,   188,   192,   196,   199,   200,   201,
     202,   209,   211,   213,   214,   215,   220,   222,   224,   226,
     231,   235,   237,   240,   244,   249,   255,   260,   266,   269,
     272,   275,   278,   281,   283,   287,   289,   293,   295,   298,
     302,   308,   311,   316,   319,   324,   326,   330,   332,   336,
     339,   343,   345,   349,   351,   353,   358,   362,   366,   370,
     374,   377,   379,   381,   383,   388,   392,   396,   400,   404,
     407,   409,   411,   413,   416,   418,   422,   424,   426,   428,
     430,   432,   434,   436,   438,   439,   444,   446,   448,   450,
     452,   454,   456,   458,   460,   462,   464,   466,   468,   470,
     472,   474,   476,   478,   480,   482,   484,   486,   488,   490,
     492,   494,   496,   498,   500,   502,   504,   506,   508,   510,
     512,   514,   516,   518,   520,   522,   524,   526,   528,   530,
     532,   534,   536,   538,   540,   542,   544,   546,   548,   550,
     552,   554,   556,   558,   560,   562,   564,   566,   568,   570,
     572,   574,   576,   578,   580,   582,   584,   586,   590,   594,
     601,   607,   613,   619,   625,   630,   634,   638,   642,   645,
     648,   651,   654,   658,   662,   666,   670,   674,   678,   683,
     686,   689,   693,   697,   701,   705,   707,   711,   715,   719,
     723,   727,   730,   733,   737,   741,   745,   749,   750,   755,
     762,   764,   766,   768,   770,   772,   776,   780,   782,   784,
     787,   792,   795,   797,   801,   805,   811,   815,   817,   819,
     821,   823,   826,   831,   834,   836,   839,   842,   847,   849,
     850,   853,   856,   859,   861,   863,   866,   870,   875,   877,
     879,   883,   888,   891,   893,   895,   897,   899,   901,   903,
     905,   907,   909,   911,   913,   914,   919,   920,   924,   925,
     930,   934,   938,   941,   945,   949,   951,   956,   960,   962,
     963,   970,   975,   979,   982,   984,   987,   988,   992,   999,
    1006,  1011,  1016,  1017,  1024,  1025,  1031,  1037,  1044,  1045,
    1052,  1053,  1061,  1062,  1068,  1069,  1070,  1078,  1079,  1080,
    1090,  1092,  1094,  1096,  1098,  1100,  1102,  1104,  1106,  1108,
    1110,  1112,  1114,  1116,  1118,  1120,  1122,  1124,  1126,  1128,
    1130,  1132,  1134,  1136,  1138,  1140,  1142,  1145,  1147,  1149,
    1151,  1157,  1159,  1162,  1164,  1166,  1168,  1172,  1174,  1178,
    1180,  1184,  1190,  1192,  1196,  1199,  1201,  1206,  1209,  1212,
    1215,  1217,  1220,  1221,  1228,  1237,  1242,  1249,  1254,  1257,
    1264,  1267,  1272,  1279,  1282,  1287,  1290,  1295,  1297,  1299,
    1301,  1305,  1310,  1312,  1317,  1319,  1323,  1325,  1327,  1328,
    1329,  1330,  1331,  1332,  1340,  1345,  1347,  1351,  1355,  1359,
    1362,  1367,  1373,  1379,  1382,  1387,  1392,  1396,  1400,  1404,
    1407,  1409,  1414,  1418,  1422,  1423,  1424,  1425,  1431,  1432,
    1433,  1434,  1440,  1442,  1445,  1449,  1454,  1460,  1462,  1464,
    1465,  1466,  1467,  1468,  1469,  1470,  1482,  1484,  1486,  1488,
    1492,  1496,  1498,  1501,  1505,  1507,  1509,  1511,  1515,  1517,
    1521,  1523,  1525,  1527,  1529,  1534,  1539,  1543,  1548,  1553,
    1557,  1558,  1563,  1566,  1567,  1572,  1575,  1576,  1581,  1583,
    1585,  1588,  1592,  1598,  1601,  1606,  1608,  1611,  1615,  1618,
    1623,  1625,  1629,  1631,  1635,  1637,  1641,  1643,  1646,  1648,
    1652,  1654,  1656,  1660,  1663,  1665,  1667,  1671,  1674,  1676,
    1679,  1681,  1685,  1689,  1692,  1695,  1697,  1699,  1701,  1704,
    1707,  1709,  1711,  1713,  1715,  1717,  1719,  1721,  1723,  1725,
    1726,  1730,  1732,  1735,  1738,  1742,  1744,  1751,  1753,  1755,
    1757,  1759,  1762,  1764,  1767,  1769,  1771,  1773,  1775,  1777,
    1779,  1782,  1786,  1790,  1794,  1799,  1800,  1804,  1806,  1809,
    1814,  1815,  1819,  1824,  1829,  1830,  1834,  1835,  1839,  1840,
    1843,  1844,  1847,  1848,  1851,  1853,  1854,  1858,  1859,  1860,
    1861,  1862,  1863,  1872,  1874,  1876,  1878,  1880,  1882,  1884,
    1887,  1889,  1891,  1893,  1895,  1899,  1901,  1904,  1906,  1908,
    1910,  1912,  1914,  1916,  1918,  1920,  1922,  1924,  1926,  1928,
    1930,  1932,  1934,  1936,  1938,  1940,  1942,  1944,  1946,  1948,
    1949,  1954,  1955,  1959,  1965,  1969,  1970,  1974,  1979,  1982,
    1985,  1988,  1990,  1993,  1994,  2001,  2010,  2015,  2022,  2027,
    2034,  2037,  2042,  2049,  2052,  2057,  2060,  2065,  2067,  2068,
    2070,  2072,  2074,  2076,  2078,  2080,  2082,  2084,  2086,  2090,
    2092,  2096,  2098,  2101,  2103,  2106,  2108,  2110,  2114,  2116,
    2120,  2122,  2124,  2127,  2130,  2132,  2136,  2140,  2142,  2146,
    2148,  2152,  2154,  2156,  2159,  2161,  2163,  2165,  2168,  2171,
    2173,  2175,  2176,  2181,  2183,  2186,  2188,  2192,  2196,  2199,
    2204,  2207,  2209,  2211,  2213,  2215,  2217,  2219,  2221,  2223,
    2225,  2227,  2229,  2231,  2233,  2235,  2237,  2239,  2240,  2242,
    2243,  2245,  2248,  2251,  2254,  2255,  2257,  2259,  2261,  2263,
    2265,  2268
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     155,     0,    -1,    -1,   156,   157,    -1,   158,   411,    -1,
     419,    -1,   159,    -1,   158,   418,   159,    -1,     1,   159,
      -1,   167,    -1,    47,   160,    -1,   143,   157,   144,    -1,
      -1,   163,   329,   249,   162,   163,   332,    -1,   163,   329,
     332,    -1,   164,   411,    -1,   419,    -1,   165,    -1,   164,
     418,   165,    -1,     1,   167,    -1,   167,    -1,    -1,    47,
     166,   160,    -1,    -1,    45,   195,   168,   195,    -1,    45,
      54,    54,    -1,    45,    54,    65,    -1,    45,    54,    64,
      -1,     6,   196,    -1,   167,    40,   175,    -1,   167,    41,
     175,    -1,   167,    42,   175,    -1,   167,    43,   175,    -1,
     167,    44,   167,    -1,    48,   143,   163,   144,    -1,   169,
      -1,   184,   126,   179,    -1,   191,   126,   217,    -1,   184,
     126,   216,    44,   167,    -1,   184,   126,   216,    -1,   171,
      -1,   191,   126,   170,    -1,   368,    99,   170,    -1,   233,
     145,   209,   414,    99,   170,    -1,   233,   409,    52,    99,
     170,    -1,   233,   409,    56,    99,   170,    -1,   233,    97,
      56,    99,   170,    -1,   233,    97,    52,    99,   170,    -1,
     369,    99,   170,    -1,   179,    -1,   179,    44,   167,    -1,
     169,    -1,   179,    -1,   171,    37,   171,    -1,   171,    38,
     171,    -1,    39,   412,   171,    -1,   140,   179,    -1,    -1,
      -1,    -1,   200,    25,   172,   173,   303,   174,    -1,   200,
      -1,   171,    -1,    -1,    -1,   177,   175,   254,   178,    -1,
     183,    -1,   180,    -1,   279,    -1,   279,   410,   406,   211,
      -1,   106,   282,   144,    -1,   405,    -1,   182,   211,    -1,
     182,   211,   181,    -1,   233,   409,   406,   211,    -1,   233,
     409,   406,   211,   181,    -1,   233,    97,   406,   211,    -1,
     233,    97,   406,   211,   181,    -1,    32,   211,    -1,    31,
     211,    -1,   252,   210,    -1,    21,   210,    -1,    22,   210,
      -1,   186,    -1,   101,   185,   413,    -1,   186,    -1,   101,
     185,   413,    -1,   188,    -1,   188,   187,    -1,   188,   107,
     190,    -1,   188,   107,   190,   146,   189,    -1,   188,   107,
      -1,   188,   107,   146,   189,    -1,   107,   190,    -1,   107,
     190,   146,   189,    -1,   107,    -1,   107,   146,   189,    -1,
     190,    -1,   101,   185,   413,    -1,   187,   146,    -1,   188,
     187,   146,    -1,   187,    -1,   189,   146,   187,    -1,   365,
      -1,   366,    -1,   233,   145,   209,   414,    -1,   233,   409,
      52,    -1,   233,    97,    52,    -1,   233,   409,    56,    -1,
     233,    97,    56,    -1,    98,    56,    -1,   369,    -1,   365,
      -1,   366,    -1,   233,   145,   209,   414,    -1,   233,   409,
      52,    -1,   233,    97,    52,    -1,   233,   409,    56,    -1,
     233,    97,    56,    -1,    98,    56,    -1,   369,    -1,    52,
      -1,    56,    -1,    98,   192,    -1,   192,    -1,   233,    97,
     192,    -1,    52,    -1,    56,    -1,    53,    -1,   198,    -1,
     199,    -1,   194,    -1,   359,    -1,   195,    -1,    -1,   196,
     146,   197,   195,    -1,   131,    -1,   132,    -1,   133,    -1,
      78,    -1,    79,    -1,    80,    -1,    86,    -1,    87,    -1,
     129,    -1,    82,    -1,   130,    -1,    83,    -1,    81,    -1,
      94,    -1,    95,    -1,   134,    -1,   135,    -1,   136,    -1,
     107,    -1,   137,    -1,   138,    -1,    77,    -1,   108,    -1,
     140,    -1,   141,    -1,    75,    -1,    76,    -1,    92,    -1,
      93,    -1,   147,    -1,    49,    -1,    50,    -1,    51,    -1,
      47,    -1,    48,    -1,    45,    -1,    37,    -1,     7,    -1,
      21,    -1,    16,    -1,     3,    -1,     5,    -1,    46,    -1,
      26,    -1,    15,    -1,    14,    -1,    10,    -1,     9,    -1,
      36,    -1,    20,    -1,    25,    -1,     4,    -1,    22,    -1,
      34,    -1,    39,    -1,    38,    -1,    23,    -1,     8,    -1,
      24,    -1,    30,    -1,    33,    -1,    32,    -1,    13,    -1,
      35,    -1,     6,    -1,    17,    -1,    31,    -1,    11,    -1,
      12,    -1,    18,    -1,    19,    -1,   191,   126,   206,    -1,
     368,    99,   206,    -1,   233,   145,   209,   414,    99,   206,
      -1,   233,   409,    52,    99,   206,    -1,   233,   409,    56,
      99,   206,    -1,   233,    97,    52,    99,   206,    -1,   233,
      97,    56,    99,   206,    -1,    98,    56,    99,   206,    -1,
     369,    99,   206,    -1,   200,    88,   200,    -1,   200,    89,
     200,    -1,   200,    88,    -1,   200,    89,    -1,    90,   200,
      -1,    91,   200,    -1,   200,   134,   200,    -1,   200,   135,
     200,    -1,   200,   136,   200,    -1,   200,   137,   200,    -1,
     200,   138,   200,    -1,   200,    77,   200,    -1,   139,   364,
      77,   200,    -1,    75,   200,    -1,    76,   200,    -1,   200,
     131,   200,    -1,   200,   132,   200,    -1,   200,   133,   200,
      -1,   200,    78,   200,    -1,   203,    -1,   200,    79,   200,
      -1,   200,    80,   200,    -1,   200,    81,   200,    -1,   200,
      86,   200,    -1,   200,    87,   200,    -1,   140,   200,    -1,
     141,   200,    -1,   200,    94,   200,    -1,   200,    95,   200,
      -1,   200,    84,   200,    -1,   200,    85,   200,    -1,    -1,
      46,   412,   201,   200,    -1,   200,   127,   200,   412,   128,
     200,    -1,   218,    -1,   129,    -1,   130,    -1,    82,    -1,
      83,    -1,   200,   202,   200,    -1,   203,   202,   200,    -1,
     200,    -1,   419,    -1,   215,   416,    -1,   215,   146,   403,
     416,    -1,   403,   416,    -1,   200,    -1,   200,    44,   200,
      -1,   148,   209,   413,    -1,   148,   215,   146,   377,   413,
      -1,   148,   377,   413,    -1,   419,    -1,   207,    -1,   419,
      -1,   210,    -1,   215,   146,    -1,   215,   146,   403,   146,
      -1,   403,   146,    -1,   183,    -1,   215,   214,    -1,   403,
     214,    -1,   215,   146,   403,   214,    -1,   213,    -1,    -1,
     212,   210,    -1,   109,   204,    -1,   146,   213,    -1,   419,
      -1,   204,    -1,   107,   204,    -1,   215,   146,   204,    -1,
     215,   146,   107,   204,    -1,   217,    -1,   204,    -1,   215,
     146,   204,    -1,   215,   146,   107,   204,    -1,   107,   204,
      -1,   333,    -1,   334,    -1,   337,    -1,   338,    -1,   339,
      -1,   344,    -1,   342,    -1,   345,    -1,   367,    -1,   369,
      -1,    53,    -1,    -1,   234,   219,   161,   251,    -1,    -1,
     102,   220,   413,    -1,    -1,   102,   167,   221,   413,    -1,
     101,   163,   149,    -1,   233,    97,    56,    -1,    98,    56,
      -1,   104,   205,   150,    -1,   105,   402,   144,    -1,   252,
      -1,    31,   148,   210,   413,    -1,    31,   148,   413,    -1,
      31,    -1,    -1,    46,   412,   148,   222,   171,   413,    -1,
      39,   148,   171,   413,    -1,    39,   148,   413,    -1,   182,
     281,    -1,   280,    -1,   280,   281,    -1,    -1,   110,   223,
     270,    -1,   235,   175,   253,   163,   255,   251,    -1,   236,
     175,   253,   163,   256,   251,    -1,   237,   176,   163,   251,
      -1,   238,   176,   163,   251,    -1,    -1,   239,   175,   411,
     224,   291,   251,    -1,    -1,   239,   411,   225,   291,   251,
      -1,   239,   175,   411,   293,   251,    -1,   240,   257,    25,
     176,   163,   251,    -1,    -1,   241,   193,   370,   226,   161,
     251,    -1,    -1,   241,    94,   171,   227,   417,   161,   251,
      -1,    -1,   242,   193,   228,   161,   251,    -1,    -1,    -1,
     243,   194,   229,   230,   372,   161,   251,    -1,    -1,    -1,
     243,   400,   408,   231,   194,   232,   372,   161,   251,    -1,
      21,    -1,    22,    -1,    23,    -1,    24,    -1,   218,    -1,
       7,    -1,    11,    -1,    12,    -1,    18,    -1,    19,    -1,
      16,    -1,    20,    -1,     3,    -1,     4,    -1,     5,    -1,
      26,    -1,    28,    -1,     8,    -1,     9,    -1,    17,    -1,
      15,    -1,    14,    -1,    10,    -1,    30,    -1,   417,    -1,
      13,    -1,   417,    13,    -1,   417,    -1,    27,    -1,   256,
      -1,   250,   175,   253,   163,   255,    -1,   419,    -1,   249,
     163,    -1,   191,    -1,   184,    -1,   379,    -1,   101,   260,
     413,    -1,   258,    -1,   259,   146,   258,    -1,   259,    -1,
     259,   146,   261,    -1,   259,   146,   261,   146,   259,    -1,
     261,    -1,   261,   146,   259,    -1,   107,   379,    -1,   107,
      -1,   386,   146,   390,   399,    -1,   386,   399,    -1,   390,
     399,    -1,   389,   399,    -1,   398,    -1,   146,   262,    -1,
      -1,   382,   146,   393,   146,   396,   263,    -1,   382,   146,
     393,   146,   396,   146,   382,   263,    -1,   382,   146,   393,
     263,    -1,   382,   146,   393,   146,   382,   263,    -1,   382,
     146,   396,   263,    -1,   382,   146,    -1,   382,   146,   396,
     146,   382,   263,    -1,   382,   263,    -1,   393,   146,   396,
     263,    -1,   393,   146,   396,   146,   382,   263,    -1,   393,
     263,    -1,   393,   146,   382,   263,    -1,   396,   263,    -1,
     396,   146,   382,   263,    -1,   262,    -1,   419,    -1,   266,
      -1,   131,   267,   131,    -1,   131,   264,   267,   131,    -1,
     412,    -1,   412,   151,   268,   412,    -1,   269,    -1,   268,
     146,   269,    -1,    52,    -1,   378,    -1,    -1,    -1,    -1,
      -1,    -1,   271,   272,   273,   274,   276,   275,   277,    -1,
     148,   376,   267,   149,    -1,   376,    -1,   123,   163,   144,
      -1,    29,   161,   251,    -1,   245,   286,   251,    -1,   183,
     278,    -1,   279,   410,   406,   208,    -1,   279,   410,   406,
     208,   281,    -1,   279,   410,   406,   211,   278,    -1,   182,
     207,    -1,   233,   409,   406,   208,    -1,   233,    97,   406,
     207,    -1,   233,    97,   407,    -1,   233,   409,   207,    -1,
     233,    97,   207,    -1,    32,   207,    -1,    32,    -1,   233,
     145,   209,   414,    -1,   143,   282,   144,    -1,   244,   286,
     251,    -1,    -1,    -1,    -1,   283,   284,   285,   265,   163,
      -1,    -1,    -1,    -1,   287,   288,   289,   265,   161,    -1,
     204,    -1,   107,   204,    -1,   290,   146,   204,    -1,   290,
     146,   107,   204,    -1,   248,   290,   253,   163,   292,    -1,
     256,    -1,   291,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   294,   295,   296,   301,   253,   297,   298,   299,   163,
     300,    -1,   256,    -1,   293,    -1,   302,    -1,   302,    40,
     175,    -1,   302,    41,   175,    -1,   303,    -1,   303,   146,
      -1,   303,   146,   312,    -1,   314,    -1,   317,    -1,   304,
      -1,   303,   100,   326,    -1,   305,    -1,   305,   131,   308,
      -1,   308,    -1,   148,    -1,   145,    -1,   323,    -1,   328,
     306,   312,   413,    -1,   328,   306,   317,   413,    -1,   328,
     148,   413,    -1,   328,   307,   312,   414,    -1,   328,   307,
     317,   414,    -1,   328,   145,   414,    -1,    -1,   104,   309,
     312,   414,    -1,   104,   414,    -1,    -1,   105,   310,   317,
     415,    -1,   105,   415,    -1,    -1,   101,   311,   303,   413,
      -1,   303,    -1,   313,    -1,   313,   316,    -1,   313,   107,
      52,    -1,   313,   107,    52,   146,   315,    -1,   313,   107,
      -1,   313,   107,   146,   315,    -1,   314,    -1,   316,   146,
      -1,   313,   316,   146,    -1,   107,    52,    -1,   107,    52,
     146,   315,    -1,   107,    -1,   107,   146,   315,    -1,   316,
      -1,   315,   146,   316,    -1,   303,    -1,   318,   146,   321,
      -1,   318,    -1,   318,   146,    -1,   321,    -1,   318,   146,
     322,    -1,   322,    -1,   319,    -1,   318,   146,   319,    -1,
     320,   303,    -1,   320,    -1,    58,    -1,   112,   348,   124,
      -1,   388,    52,    -1,   388,    -1,   388,    34,    -1,   324,
      -1,   324,    88,   324,    -1,   324,    89,   324,    -1,   324,
      88,    -1,   324,    89,    -1,   326,    -1,   327,    -1,   328,
      -1,    90,   324,    -1,    91,   324,    -1,   333,    -1,   334,
      -1,   337,    -1,   338,    -1,   339,    -1,   344,    -1,   342,
      -1,   345,    -1,   366,    -1,    -1,   110,   325,   270,    -1,
      52,    -1,   132,    52,    -1,    98,   192,    -1,   328,    97,
     192,    -1,    56,    -1,   246,   330,   331,   253,   163,   329,
      -1,   419,    -1,   204,    -1,   217,    -1,   419,    -1,   100,
     191,    -1,   419,    -1,   247,   163,    -1,   419,    -1,   363,
      -1,   359,    -1,   335,    -1,    63,    -1,   336,    -1,   335,
     336,    -1,   112,   348,   119,    -1,   113,   349,   119,    -1,
     114,   350,    67,    -1,   115,   152,   340,   119,    -1,    -1,
     340,   341,   152,    -1,   351,    -1,   341,   351,    -1,   117,
     152,   343,   119,    -1,    -1,   343,   341,   152,    -1,   116,
     152,   346,   119,    -1,   118,   152,   347,   119,    -1,    -1,
     346,    66,   152,    -1,    -1,   347,    66,   152,    -1,    -1,
     348,   351,    -1,    -1,   349,   351,    -1,    -1,   350,   351,
      -1,    66,    -1,    -1,   122,   352,   358,    -1,    -1,    -1,
      -1,    -1,    -1,   121,   353,   354,   355,   356,   357,   163,
     120,    -1,    54,    -1,    55,    -1,    57,    -1,   369,    -1,
     360,    -1,   362,    -1,   111,   361,    -1,   194,    -1,    55,
      -1,    54,    -1,    57,    -1,   111,   348,   119,    -1,   364,
      -1,   139,   364,    -1,    59,    -1,    60,    -1,    61,    -1,
      62,    -1,    52,    -1,    55,    -1,    54,    -1,    56,    -1,
      57,    -1,    34,    -1,    33,    -1,    35,    -1,    36,    -1,
      50,    -1,    49,    -1,    51,    -1,   365,    -1,   366,    -1,
     365,    -1,   366,    -1,    64,    -1,    65,    -1,    -1,   130,
     371,   175,   417,    -1,    -1,   148,   376,   413,    -1,   148,
     382,   146,   377,   413,    -1,   148,   377,   413,    -1,    -1,
     373,   376,   417,    -1,   387,   146,   390,   399,    -1,   387,
     399,    -1,   390,   399,    -1,   389,   399,    -1,   398,    -1,
     146,   374,    -1,    -1,   382,   146,   394,   146,   396,   375,
      -1,   382,   146,   394,   146,   396,   146,   382,   375,    -1,
     382,   146,   394,   375,    -1,   382,   146,   394,   146,   382,
     375,    -1,   382,   146,   396,   375,    -1,   382,   146,   396,
     146,   382,   375,    -1,   382,   375,    -1,   394,   146,   396,
     375,    -1,   394,   146,   396,   146,   382,   375,    -1,   394,
     375,    -1,   394,   146,   382,   375,    -1,   396,   375,    -1,
     396,   146,   382,   375,    -1,   374,    -1,    -1,    91,    -1,
      56,    -1,    55,    -1,    54,    -1,    57,    -1,   378,    -1,
      52,    -1,   379,    -1,   380,    -1,   101,   260,   413,    -1,
     381,    -1,   382,   146,   381,    -1,    58,    -1,   383,   204,
      -1,   383,    -1,   383,   233,    -1,   383,    -1,   385,    -1,
     386,   146,   385,    -1,   384,    -1,   387,   146,   384,    -1,
      77,    -1,   108,    -1,   388,    34,    -1,   388,    52,    -1,
     388,    -1,   380,   126,   204,    -1,   380,   126,   233,    -1,
     392,    -1,   393,   146,   392,    -1,   391,    -1,   394,   146,
     391,    -1,   136,    -1,   107,    -1,   395,    52,    -1,   395,
      -1,   133,    -1,   109,    -1,   397,    52,    -1,   146,   398,
      -1,   419,    -1,   367,    -1,    -1,   148,   401,   171,   413,
      -1,   419,    -1,   403,   416,    -1,   404,    -1,   403,   146,
     404,    -1,   204,   100,   204,    -1,    58,   204,    -1,   112,
     348,   124,   204,    -1,   108,   204,    -1,    52,    -1,    56,
      -1,    53,    -1,    52,    -1,    56,    -1,    53,    -1,   198,
      -1,    52,    -1,    53,    -1,   198,    -1,    68,    -1,    97,
      -1,    68,    -1,    96,    -1,   409,    -1,    97,    -1,    -1,
     418,    -1,    -1,   153,    -1,   412,   149,    -1,   412,   150,
      -1,   412,   144,    -1,    -1,   153,    -1,   146,    -1,   151,
      -1,   153,    -1,   417,    -1,   418,   151,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1204,  1204,  1204,  1230,  1236,  1243,  1250,  1257,  1263,
    1264,  1270,  1283,  1281,  1292,  1303,  1309,  1316,  1323,  1330,
    1336,  1341,  1340,  1350,  1350,  1357,  1364,  1374,  1382,  1389,
    1397,  1405,  1417,  1429,  1439,  1453,  1454,  1462,  1470,  1479,
    1486,  1489,  1496,  1503,  1511,  1518,  1525,  1533,  1540,  1550,
    1555,  1564,  1567,  1568,  1572,  1576,  1580,  1585,  1592,  1594,
    1584,  1602,  1605,  1612,  1612,  1612,  1618,  1619,  1622,  1623,
    1632,  1642,  1652,  1661,  1672,  1679,  1686,  1693,  1700,  1708,
    1716,  1723,  1730,  1739,  1740,  1749,  1750,  1759,  1766,  1773,
    1780,  1787,  1794,  1801,  1808,  1815,  1822,  1831,  1832,  1841,
    1848,  1857,  1864,  1873,  1880,  1887,  1894,  1904,  1911,  1921,
    1928,  1935,  1945,  1952,  1959,  1966,  1973,  1980,  1987,  1994,
    2001,  2011,  2018,  2021,  2028,  2035,  2044,  2045,  2046,  2047,
    2052,  2055,  2062,  2065,  2072,  2072,  2082,  2083,  2084,  2085,
    2086,  2087,  2088,  2089,  2090,  2091,  2092,  2093,  2094,  2095,
    2096,  2097,  2098,  2099,  2100,  2101,  2102,  2103,  2104,  2105,
    2106,  2107,  2108,  2109,  2110,  2111,  2114,  2114,  2114,  2115,
    2115,  2116,  2116,  2116,  2117,  2117,  2117,  2117,  2118,  2118,
    2118,  2118,  2119,  2119,  2119,  2120,  2120,  2120,  2120,  2121,
    2121,  2121,  2121,  2122,  2122,  2122,  2122,  2123,  2123,  2123,
    2123,  2124,  2124,  2124,  2124,  2125,  2125,  2128,  2135,  2142,
    2150,  2158,  2166,  2174,  2182,  2189,  2197,  2206,  2215,  2227,
    2239,  2251,  2263,  2267,  2271,  2275,  2279,  2283,  2287,  2291,
    2295,  2299,  2303,  2307,  2311,  2315,  2316,  2320,  2324,  2328,
    2332,  2336,  2340,  2344,  2348,  2352,  2356,  2360,  2360,  2365,
    2374,  2380,  2381,  2382,  2383,  2386,  2390,  2397,  2404,  2405,
    2409,  2416,  2425,  2430,  2441,  2448,  2474,  2503,  2504,  2507,
    2508,  2509,  2513,  2520,  2529,  2537,  2544,  2552,  2560,  2564,
    2564,  2601,  2610,  2614,  2620,  2627,  2634,  2641,  2650,  2651,
    2654,  2661,  2668,  2677,  2678,  2679,  2680,  2681,  2682,  2683,
    2684,  2685,  2686,  2687,  2695,  2694,  2709,  2709,  2716,  2716,
    2724,  2732,  2739,  2746,  2753,  2761,  2768,  2775,  2782,  2789,
    2789,  2794,  2798,  2802,  2809,  2810,  2819,  2818,  2829,  2840,
    2851,  2861,  2872,  2871,  2888,  2887,  2902,  2911,  2956,  2955,
    2979,  2978,  3001,  3000,  3024,  3030,  3023,  3050,  3051,  3050,
    3076,  3083,  3090,  3097,  3106,  3113,  3119,  3136,  3142,  3148,
    3154,  3160,  3166,  3172,  3178,  3184,  3190,  3196,  3202,  3208,
    3214,  3229,  3236,  3242,  3249,  3250,  3251,  3254,  3255,  3258,
    3259,  3271,  3272,  3281,  3282,  3285,  3293,  3302,  3309,  3318,
    3325,  3332,  3339,  3346,  3355,  3363,  3372,  3376,  3380,  3384,
    3388,  3394,  3399,  3404,  3408,  3412,  3416,  3420,  3424,  3432,
    3436,  3440,  3444,  3448,  3452,  3456,  3460,  3464,  3470,  3471,
    3477,  3486,  3498,  3502,  3511,  3513,  3517,  3522,  3528,  3531,
    3535,  3539,  3543,  3528,  3567,  3575,  3585,  3590,  3596,  3606,
    3620,  3627,  3634,  3643,  3652,  3660,  3668,  3675,  3683,  3691,
    3698,  3705,  3718,  3726,  3736,  3737,  3741,  3736,  3758,  3759,
    3763,  3758,  3782,  3790,  3797,  3805,  3814,  3826,  3827,  3831,
    3837,  3838,  3840,  3841,  3842,  3830,  3855,  3856,  3859,  3860,
    3868,  3878,  3879,  3884,  3892,  3896,  3902,  3905,  3914,  3917,
    3924,  3927,  3928,  3930,  3931,  3940,  3949,  3954,  3963,  3972,
    3977,  3977,  3982,  3988,  3987,  3999,  4004,  4004,  4011,  4020,
    4024,  4033,  4037,  4041,  4045,  4049,  4052,  4056,  4065,  4069,
    4073,  4077,  4083,  4084,  4093,  4102,  4106,  4110,  4114,  4118,
    4122,  4128,  4130,  4139,  4147,  4161,  4162,  4185,  4189,  4195,
    4201,  4202,  4211,  4220,  4232,  4244,  4245,  4246,  4247,  4259,
    4273,  4274,  4275,  4276,  4277,  4278,  4279,  4280,  4281,  4289,
    4288,  4301,  4311,  4324,  4331,  4338,  4347,  4359,  4362,  4369,
    4376,  4379,  4383,  4386,  4393,  4396,  4397,  4400,  4417,  4418,
    4419,  4428,  4438,  4447,  4453,  4463,  4469,  4478,  4480,  4489,
    4499,  4505,  4514,  4523,  4533,  4539,  4549,  4555,  4565,  4575,
    4594,  4600,  4610,  4620,  4661,  4664,  4663,  4680,  4684,  4689,
    4693,  4697,  4679,  4718,  4725,  4732,  4739,  4742,  4743,  4746,
    4756,  4757,  4758,  4759,  4762,  4772,  4773,  4783,  4784,  4785,
    4786,  4789,  4790,  4791,  4792,  4793,  4796,  4797,  4798,  4799,
    4800,  4801,  4802,  4805,  4818,  4827,  4834,  4843,  4844,  4848,
    4847,  4857,  4865,  4874,  4889,  4904,  4904,  4918,  4922,  4926,
    4930,  4934,  4940,  4945,  4950,  4954,  4958,  4962,  4966,  4970,
    4974,  4978,  4982,  4986,  4990,  4994,  4998,  5002,  5007,  5013,
    5022,  5030,  5038,  5046,  5056,  5057,  5065,  5074,  5082,  5103,
    5105,  5118,  5128,  5136,  5146,  5153,  5162,  5169,  5179,  5186,
    5195,  5196,  5199,  5207,  5215,  5225,  5235,  5245,  5252,  5261,
    5268,  5277,  5278,  5281,  5289,  5299,  5300,  5303,  5313,  5317,
    5323,  5328,  5328,  5352,  5353,  5362,  5364,  5387,  5398,  5405,
    5413,  5432,  5433,  5434,  5437,  5438,  5439,  5440,  5443,  5444,
    5445,  5448,  5449,  5452,  5453,  5456,  5457,  5460,  5461,  5464,
    5465,  5468,  5471,  5474,  5477,  5478,  5479,  5482,  5483,  5486,
    5487,  5491
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end-of-input\"", "error", "$undefined", "\"`class'\"",
  "\"`module'\"", "\"`def'\"", "\"`undef'\"", "\"`begin'\"",
  "\"`rescue'\"", "\"`ensure'\"", "\"`end'\"", "\"`if'\"", "\"`unless'\"",
  "\"`then'\"", "\"`elsif'\"", "\"`else'\"", "\"`case'\"", "\"`when'\"",
  "\"`while'\"", "\"`until'\"", "\"`for'\"", "\"`break'\"", "\"`next'\"",
  "\"`redo'\"", "\"`retry'\"", "\"`in'\"", "\"`do'\"",
  "\"`do' for condition\"", "\"`do' for block\"", "\"`do' for lambda\"",
  "\"`return'\"", "\"`yield'\"", "\"`super'\"", "\"`self'\"", "\"`nil'\"",
  "\"`true'\"", "\"`false'\"", "\"`and'\"", "\"`or'\"", "\"`not'\"",
  "\"`if' modifier\"", "\"`unless' modifier\"", "\"`while' modifier\"",
  "\"`until' modifier\"", "\"`rescue' modifier\"", "\"`alias'\"",
  "\"`defined?'\"", "\"`BEGIN'\"", "\"`END'\"", "\"`__LINE__'\"",
  "\"`__FILE__'\"", "\"`__ENCODING__'\"", "\"local variable or method\"",
  "\"method\"", "\"global variable\"", "\"instance variable\"",
  "\"constant\"", "\"class variable\"", "tLABEL", "\"integer literal\"",
  "\"float literal\"", "\"rational literal\"", "\"imaginary literal\"",
  "\"char literal\"", "\"numbered reference\"", "\"back reference\"",
  "\"literal content\"", "tREGEXP_END", "'.'", "\"backslash\"",
  "\"escaped space\"", "\"escaped horizontal tab\"",
  "\"escaped form feed\"", "\"escaped carriage return\"",
  "\"escaped vertical tab\"", "\"unary+\"", "\"unary-\"", "\"**\"",
  "\"<=>\"", "\"==\"", "\"===\"", "\"!=\"", "\">=\"", "\"<=\"", "\"&&\"",
  "\"||\"", "\"=~\"", "\"!~\"", "\"..\"", "\"...\"", "\"(..\"", "\"(...\"",
  "\"[]\"", "\"[]=\"", "\"<<\"", "\">>\"", "\"&.\"", "\"::\"",
  "\":: at EXPR_BEG\"", "\"operator-assignment\"", "\"=>\"", "\"(\"",
  "\"( arg\"", "\")\"", "\"[\"", "\"{\"", "\"{ arg\"", "\"*\"",
  "\"**arg\"", "\"&\"", "\"->\"", "\"symbol literal\"",
  "\"string literal\"", "\"backtick literal\"", "\"regexp literal\"",
  "\"word list\"", "\"verbatim word list\"", "\"symbol list\"",
  "\"verbatim symbol list\"", "\"terminator\"", "\"'}'\"", "tSTRING_DBEG",
  "tSTRING_DVAR", "tLAMBEG", "tLABEL_END", "tLOWEST", "'='", "'?'", "':'",
  "'>'", "'<'", "'|'", "'^'", "'&'", "'+'", "'-'", "'*'", "'/'", "'%'",
  "tUMINUS_NUM", "'!'", "'~'", "tLAST_TOKEN", "'{'", "'}'", "'['", "','",
  "'`'", "'('", "')'", "']'", "';'", "' '", "'\\n'", "$accept", "program",
  "@1", "top_compstmt", "top_stmts", "top_stmt", "begin_block", "bodystmt",
  "@2", "compstmt", "stmts", "stmt_or_begin", "@3", "stmt", "@4",
  "command_asgn", "command_rhs", "expr", "@5", "@6", "@7", "expr_value",
  "expr_value_do", "@8", "@9", "command_call", "block_command",
  "cmd_brace_block", "fcall", "command", "mlhs", "mlhs_inner",
  "mlhs_basic", "mlhs_item", "mlhs_head", "mlhs_post", "mlhs_node", "lhs",
  "cname", "cpath", "fname", "fitem", "undef_list", "@10", "op",
  "reswords", "arg", "@11", "relop", "rel_expr", "arg_value", "aref_args",
  "arg_rhs", "paren_args", "opt_paren_args", "opt_call_args", "call_args",
  "command_args", "@12", "block_arg", "opt_block_arg", "args", "mrhs_arg",
  "mrhs", "primary", "@13", "@14", "@15", "@16", "@17", "@18", "@19",
  "@20", "@21", "@22", "@23", "@24", "@25", "@26", "primary_value",
  "k_begin", "k_if", "k_unless", "k_while", "k_until", "k_case", "k_for",
  "k_class", "k_module", "k_def", "k_do", "k_do_block", "k_rescue",
  "k_ensure", "k_when", "k_else", "k_elsif", "k_end", "k_return", "then",
  "do", "if_tail", "opt_else", "for_var", "f_marg", "f_marg_list",
  "f_margs", "f_rest_marg", "block_args_tail", "opt_block_args_tail",
  "block_param", "opt_block_param", "block_param_def", "opt_bv_decl",
  "bv_decls", "bvar", "lambda", "@27", "@28", "@29", "@30", "@31",
  "f_larglist", "lambda_body", "do_block", "block_call", "method_call",
  "brace_block", "brace_body", "@32", "@33", "@34", "do_body", "@35",
  "@36", "@37", "case_args", "case_body", "cases", "p_case_body", "@38",
  "@39", "@40", "@41", "@42", "@43", "p_cases", "p_top_expr",
  "p_top_expr_body", "p_expr", "p_as", "p_alt", "p_lparen", "p_lbracket",
  "p_expr_basic", "@44", "@45", "@46", "p_args", "p_args_head",
  "p_args_tail", "p_args_post", "p_arg", "p_kwargs", "p_kwarg", "p_kw",
  "p_kw_label", "p_kwrest", "p_kwnorest", "p_value", "p_primitive", "@47",
  "p_variable", "p_var_ref", "p_const", "opt_rescue", "exc_list",
  "exc_var", "opt_ensure", "literal", "strings", "string", "string1",
  "xstring", "regexp", "words", "word_list", "word", "symbols",
  "symbol_list", "qwords", "qsymbols", "qword_list", "qsym_list",
  "string_contents", "xstring_contents", "regexp_contents",
  "string_content", "@48", "@49", "@50", "@51", "@52", "@53",
  "string_dvar", "symbol", "ssym", "sym", "dsym", "numeric",
  "simple_numeric", "user_variable", "keyword_variable", "var_ref",
  "var_lhs", "backref", "superclass", "@54", "f_arglist", "@55",
  "args_tail", "opt_args_tail", "f_args", "args_forward", "f_bad_arg",
  "f_norm_arg", "f_arg_asgn", "f_arg_item", "f_arg", "f_label", "f_kw",
  "f_block_kw", "f_block_kwarg", "f_kwarg", "kwrest_mark", "f_no_kwarg",
  "f_kwrest", "f_opt", "f_block_opt", "f_block_optarg", "f_optarg",
  "restarg_mark", "f_rest_arg", "blkarg_mark", "f_block_arg",
  "opt_f_block_arg", "singleton", "@56", "assoc_list", "assocs", "assoc",
  "operation", "operation2", "operation3", "dot_or_colon", "call_op",
  "call_op2", "opt_terms", "opt_nl", "rparen", "rbracket", "rbrace",
  "trailer", "term", "terms", "none", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,    46,    92,
     323,     9,    12,    13,    11,   132,   133,   134,   135,   140,
     141,   142,   139,   138,   148,   149,   143,   144,   128,   129,
     130,   131,   145,   146,   136,   137,   150,   147,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,    61,    63,    58,    62,
      60,   124,    94,    38,    43,    45,    42,    47,    37,   352,
      33,   126,   353,   123,   125,    91,    44,    96,    40,    41,
      93,    59,    32,    10
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   154,   156,   155,   157,   158,   158,   158,   158,   159,
     159,   160,   162,   161,   161,   163,   164,   164,   164,   164,
     165,   166,   165,   168,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   169,   169,   169,   169,   169,   169,   169,   169,   170,
     170,   170,   171,   171,   171,   171,   171,   172,   173,   174,
     171,   171,   175,   177,   178,   176,   179,   179,   180,   180,
     181,   182,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   184,   184,   185,   185,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   187,   187,   188,
     188,   189,   189,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   192,   192,   193,   193,   193,   194,   194,   194,   194,
     194,   195,   195,   196,   197,   196,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   201,   200,   200,
     200,   202,   202,   202,   202,   203,   203,   204,   205,   205,
     205,   205,   206,   206,   207,   207,   207,   208,   208,   209,
     209,   209,   209,   209,   210,   210,   210,   210,   210,   212,
     211,   213,   214,   214,   215,   215,   215,   215,   216,   216,
     217,   217,   217,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   219,   218,   220,   218,   221,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   222,
     218,   218,   218,   218,   218,   218,   223,   218,   218,   218,
     218,   218,   224,   218,   225,   218,   218,   218,   226,   218,
     227,   218,   228,   218,   229,   230,   218,   231,   232,   218,
     218,   218,   218,   218,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   253,   253,   254,   254,   255,
     255,   256,   256,   257,   257,   258,   258,   259,   259,   260,
     260,   260,   260,   260,   261,   261,   262,   262,   262,   262,
     262,   263,   263,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   265,   265,
     266,   266,   267,   267,   268,   268,   269,   269,   271,   272,
     273,   274,   275,   270,   276,   276,   277,   277,   278,   279,
     279,   279,   279,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   281,   281,   283,   284,   285,   282,   287,   288,
     289,   286,   290,   290,   290,   290,   291,   292,   292,   294,
     295,   296,   297,   298,   299,   293,   300,   300,   301,   301,
     301,   302,   302,   302,   302,   302,   303,   304,   304,   305,
     305,   306,   307,   308,   308,   308,   308,   308,   308,   308,
     309,   308,   308,   310,   308,   308,   311,   308,   312,   312,
     312,   312,   312,   312,   312,   312,   313,   313,   314,   314,
     314,   314,   315,   315,   316,   317,   317,   317,   317,   317,
     317,   318,   318,   319,   319,   320,   320,   321,   321,   322,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   325,
     324,   326,   327,   328,   328,   328,   329,   329,   330,   330,
     330,   331,   331,   332,   332,   333,   333,   334,   335,   335,
     335,   336,   337,   338,   339,   340,   340,   341,   341,   342,
     343,   343,   344,   345,   346,   346,   347,   347,   348,   348,
     349,   349,   350,   350,   351,   352,   351,   353,   354,   355,
     356,   357,   351,   358,   358,   358,   358,   359,   359,   360,
     361,   361,   361,   361,   362,   363,   363,   364,   364,   364,
     364,   365,   365,   365,   365,   365,   366,   366,   366,   366,
     366,   366,   366,   367,   367,   368,   368,   369,   369,   371,
     370,   370,   372,   372,   372,   373,   372,   374,   374,   374,
     374,   374,   375,   375,   376,   376,   376,   376,   376,   376,
     376,   376,   376,   376,   376,   376,   376,   376,   376,   377,
     378,   378,   378,   378,   379,   379,   380,   381,   381,   382,
     382,   383,   384,   384,   385,   385,   386,   386,   387,   387,
     388,   388,   389,   390,   390,   391,   392,   393,   393,   394,
     394,   395,   395,   396,   396,   397,   397,   398,   399,   399,
     400,   401,   400,   402,   402,   403,   403,   404,   404,   404,
     404,   405,   405,   405,   406,   406,   406,   406,   407,   407,
     407,   408,   408,   409,   409,   410,   410,   411,   411,   412,
     412,   413,   414,   415,   416,   416,   416,   417,   417,   418,
     418,   419
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     1,     3,     2,     1,
       2,     3,     0,     6,     3,     2,     1,     1,     3,     2,
       1,     0,     3,     0,     4,     3,     3,     3,     2,     3,
       3,     3,     3,     3,     4,     1,     3,     3,     5,     3,
       1,     3,     3,     6,     5,     5,     5,     5,     3,     1,
       3,     1,     1,     3,     3,     3,     2,     0,     0,     0,
       6,     1,     1,     0,     0,     4,     1,     1,     1,     4,
       3,     1,     2,     3,     4,     5,     4,     5,     2,     2,
       2,     2,     2,     1,     3,     1,     3,     1,     2,     3,
       5,     2,     4,     2,     4,     1,     3,     1,     3,     2,
       3,     1,     3,     1,     1,     4,     3,     3,     3,     3,
       2,     1,     1,     1,     4,     3,     3,     3,     3,     2,
       1,     1,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     6,
       5,     5,     5,     5,     4,     3,     3,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     4,     2,
       2,     3,     3,     3,     3,     1,     3,     3,     3,     3,
       3,     2,     2,     3,     3,     3,     3,     0,     4,     6,
       1,     1,     1,     1,     1,     3,     3,     1,     1,     2,
       4,     2,     1,     3,     3,     5,     3,     1,     1,     1,
       1,     2,     4,     2,     1,     2,     2,     4,     1,     0,
       2,     2,     2,     1,     1,     2,     3,     4,     1,     1,
       3,     4,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     0,     3,     0,     4,
       3,     3,     2,     3,     3,     1,     4,     3,     1,     0,
       6,     4,     3,     2,     1,     2,     0,     3,     6,     6,
       4,     4,     0,     6,     0,     5,     5,     6,     0,     6,
       0,     7,     0,     5,     0,     0,     7,     0,     0,     9,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       5,     1,     2,     1,     1,     1,     3,     1,     3,     1,
       3,     5,     1,     3,     2,     1,     4,     2,     2,     2,
       1,     2,     0,     6,     8,     4,     6,     4,     2,     6,
       2,     4,     6,     2,     4,     2,     4,     1,     1,     1,
       3,     4,     1,     4,     1,     3,     1,     1,     0,     0,
       0,     0,     0,     7,     4,     1,     3,     3,     3,     2,
       4,     5,     5,     2,     4,     4,     3,     3,     3,     2,
       1,     4,     3,     3,     0,     0,     0,     5,     0,     0,
       0,     5,     1,     2,     3,     4,     5,     1,     1,     0,
       0,     0,     0,     0,     0,    11,     1,     1,     1,     3,
       3,     1,     2,     3,     1,     1,     1,     3,     1,     3,
       1,     1,     1,     1,     4,     4,     3,     4,     4,     3,
       0,     4,     2,     0,     4,     2,     0,     4,     1,     1,
       2,     3,     5,     2,     4,     1,     2,     3,     2,     4,
       1,     3,     1,     3,     1,     3,     1,     2,     1,     3,
       1,     1,     3,     2,     1,     1,     3,     2,     1,     2,
       1,     3,     3,     2,     2,     1,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       3,     1,     2,     2,     3,     1,     6,     1,     1,     1,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       2,     3,     3,     3,     4,     0,     3,     1,     2,     4,
       0,     3,     4,     4,     0,     3,     0,     3,     0,     2,
       0,     2,     0,     2,     1,     0,     3,     0,     0,     0,
       0,     0,     8,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       4,     0,     3,     5,     3,     0,     3,     4,     2,     2,
       2,     1,     2,     0,     6,     8,     4,     6,     4,     6,
       2,     4,     6,     2,     4,     2,     4,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     1,     2,     1,     2,     1,     1,     3,     1,     3,
       1,     1,     2,     2,     1,     3,     3,     1,     3,     1,
       3,     1,     1,     2,     1,     1,     1,     2,     2,     1,
       1,     0,     4,     1,     2,     1,     3,     3,     2,     4,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     0,
       1,     2,     2,     2,     0,     1,     1,     1,     1,     1,
       2,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,     1,     0,   362,   363,   364,     0,   355,
     356,   357,   360,   358,   359,   361,   350,   351,   352,   353,
     373,   279,   279,   637,   636,   638,   639,   749,     0,   749,
       0,     0,   641,   640,   642,   731,   733,   633,   632,   732,
     635,   627,   628,   629,   630,   578,   647,   648,     0,     0,
       0,     0,     0,     0,   306,   761,   761,    95,   326,   598,
     598,   600,   602,     0,     0,     0,     0,     0,     0,     0,
       3,   747,     6,     9,    35,    40,    52,    67,   279,    66,
       0,    83,     0,    87,    97,     0,    61,   235,   250,     0,
     304,     0,     0,    63,    63,   747,     0,     0,     0,     0,
     315,    68,   324,   293,   294,   577,   579,   295,   296,   297,
     299,   298,   300,   576,   617,   618,   575,   625,   643,   644,
     301,     0,   302,    71,     5,     8,   176,   187,   177,   200,
     173,   193,   183,   182,   203,   204,   198,   181,   180,   175,
     201,   205,   206,   185,   174,   188,   192,   194,   186,   179,
     195,   202,   197,   196,   189,   199,   184,   172,   191,   190,
     171,   178,   169,   170,   166,   167,   168,   126,   128,   127,
     161,   162,   157,   139,   140,   141,   148,   145,   147,   142,
     143,   163,   164,   149,   150,   154,   158,   144,   146,   136,
     137,   138,   151,   152,   153,   155,   156,   159,   160,   165,
     131,   133,    28,   129,   130,   132,     0,     0,     0,     0,
       0,     0,     0,   598,     0,   274,     0,   257,   284,    81,
     278,   761,     0,   643,   644,     0,   302,   761,   725,    82,
     749,    79,     0,   761,   449,    78,   749,   750,     0,     0,
      23,   247,     0,    10,     0,   350,   351,   318,   450,     0,
     229,     0,   315,   230,   220,   221,   312,     0,    21,     0,
       0,   747,    17,    20,   749,    85,    16,   308,   749,     0,
     754,   754,   258,     0,     0,   754,   723,   749,     0,     0,
       0,    93,   354,     0,   103,   104,   111,   428,   622,   621,
     623,   620,     0,   619,     0,     0,     0,   585,   594,   590,
     596,   626,    56,   241,   242,   757,   758,     4,   759,   748,
       0,     0,     0,     0,     0,     0,     0,   365,   454,   443,
      72,   458,   323,   366,   458,   439,     0,    99,     0,    91,
      88,     0,    57,     0,     0,     0,     0,     0,   253,   254,
       0,     0,     0,     0,   218,   219,     0,     0,     0,   251,
     252,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   743,   744,     0,   761,     0,     0,    62,     0,     0,
       0,     0,     0,   747,   334,   748,     0,   384,   383,     0,
       0,   643,   644,   302,   121,   122,     0,     0,   124,   651,
       0,   643,   644,   302,   342,   196,   189,   199,   184,   166,
     167,   168,   126,   127,   721,   344,   720,     0,    80,   746,
     745,     0,   325,   580,     0,     0,   134,   728,   312,   285,
     730,   281,     0,     0,     0,     0,   275,   283,     0,   761,
       0,     0,     0,     0,   276,   749,     0,   317,   280,   679,
     749,   270,   761,   749,   761,   269,   749,   322,    55,    25,
      27,    26,     0,   319,     0,     0,     0,     0,     0,     0,
      19,     0,   749,   310,    15,   748,    84,   749,   307,   313,
     756,   755,   259,   756,   261,   314,   724,     0,   110,   626,
     101,    96,     0,     0,   761,     0,   327,   429,   604,   624,
     607,   605,   599,   581,   582,   601,   583,   603,     0,     0,
       0,     0,     0,   760,     7,    29,    30,    31,    32,    33,
      53,    54,     0,   455,   454,    73,     0,   459,     0,     0,
      36,   289,     0,    39,   288,   749,     0,    89,   100,    51,
      41,    49,     0,   262,   284,   207,    37,     0,   302,    58,
     227,   234,   236,   237,   238,   245,   246,   239,   240,   216,
     217,   243,   244,   749,   231,   232,   233,   222,   223,   224,
     225,   226,   255,   256,   734,   736,   735,   737,   448,   279,
     446,   749,   761,   734,   736,   735,   737,   447,   279,     0,
     761,   375,     0,   374,     0,     0,     0,     0,   332,     0,
     312,     0,   761,     0,    63,   340,   121,   122,   123,   649,
     338,     0,   761,     0,     0,     0,   345,   741,   742,   347,
     734,   735,   279,    42,   262,   208,    48,   215,     0,     0,
     727,     0,   286,   282,   761,   734,   735,   749,   734,   735,
     726,   316,   751,   264,   271,   266,   273,   321,    24,     0,
     248,    11,    34,     0,   761,   214,    22,    86,    18,   309,
     754,     0,    94,   738,   109,   749,   734,   735,   430,   608,
       0,   584,     0,   587,     0,   592,   589,     0,     0,   593,
     228,   452,   456,     0,   372,   453,   460,   438,   292,     0,
       0,    98,    92,     0,     0,     0,     0,     0,   761,     0,
       0,     0,     0,     0,   445,    76,     0,   451,   271,     0,
       0,   268,   444,    74,   267,   305,   367,   761,   761,   567,
     761,   376,   761,   330,   378,    64,   377,   331,   469,     0,
       0,   369,     0,     0,   738,   311,   749,   734,   735,     0,
       0,     0,     0,   121,   122,   125,   749,     0,   749,   655,
       0,   440,    69,   135,   729,   287,   277,     0,     0,   451,
       0,     0,   749,   761,   749,   260,   102,   451,   431,   609,
     613,   614,   615,   606,   616,   586,   588,   595,   591,   597,
     761,    70,   761,     0,   290,    38,    90,    50,   263,   734,
     735,   749,   734,   735,   561,   565,     0,     0,     0,   506,
     500,   503,   559,     0,    59,   486,   488,   490,   493,   540,
     545,   546,   547,   550,   551,   552,   553,   554,   556,   555,
     557,   558,     0,    47,   212,    46,   213,    77,   752,     0,
      44,   210,    45,   211,    75,   568,   569,   761,   570,   368,
     370,     0,    12,    14,   574,   371,     0,     0,     0,   379,
     381,     0,    65,   470,     0,   336,     0,   462,     0,   335,
     451,     0,     0,     0,     0,   451,   343,   722,   678,     0,
     678,   348,   441,   442,     0,   265,   272,   320,   678,   610,
     749,     0,   419,   418,     0,   291,   451,   548,   549,   122,
     563,     0,     0,   502,     0,     0,   505,   428,   562,     0,
      60,     0,   543,   544,     0,   492,   491,     0,     0,   249,
      43,   209,     0,     0,   572,   573,     0,   382,     0,   328,
     329,   471,   333,   463,     0,     0,   337,     0,   650,   339,
     685,   682,   681,   680,   683,   691,   700,   679,     0,   712,
     701,   716,   715,   711,   677,   749,   749,   684,   686,   687,
     689,   663,   693,   698,   761,   704,   761,   761,   709,   663,
     714,   663,     0,   661,     0,     0,   663,   655,   678,   432,
     435,   611,   417,   749,     0,   687,   402,   695,   696,   761,
     761,   761,   707,   402,   402,   400,   422,   457,   461,   749,
     520,   508,   749,   509,   515,     0,   535,   598,   749,   526,
     531,   534,   528,   530,   538,   753,   560,   487,   489,   541,
     542,   564,   499,   496,   598,   749,   749,   749,   749,     0,
     571,     0,   643,   644,   302,     0,   761,     0,     0,     0,
     464,   761,   341,     0,   395,   387,   389,   749,   392,   385,
     652,   654,     0,     0,   670,   692,     0,   658,   719,   702,
     703,     0,   660,   659,     0,   673,   713,     0,   675,   717,
     346,   656,     0,     0,   749,     0,     0,     0,   420,     0,
     408,   410,     0,   694,     0,   397,   399,   398,     0,   413,
       0,   415,     0,   507,   518,     0,   501,   513,   524,   510,
     516,     0,   504,   527,   533,   539,   537,     0,   494,   495,
     497,   498,   312,     0,   761,     0,   761,    13,   761,     0,
     478,   481,   484,   485,   465,   467,   468,   466,   749,   394,
       0,   688,     0,   705,   662,   749,   690,   663,   663,   699,
     704,   761,   718,   663,   710,   663,   687,   663,     0,     0,
       0,     0,   433,     0,   421,   706,   401,   402,   402,   312,
       0,   697,   761,   402,   708,   402,   402,   426,   749,   424,
     427,     0,   521,   522,   511,     0,   517,   536,   532,   525,
     529,   738,   311,   749,   734,   735,   566,   380,   472,     0,
       0,   482,   386,   388,   390,   393,   653,     0,   666,     0,
     668,   657,     0,   674,     0,   671,   676,   349,   434,     0,
       0,   612,     0,   405,     0,   407,   738,   311,   396,     0,
     414,     0,   411,   416,     0,   423,   519,     0,     0,   514,
     451,   473,   479,   480,   483,     0,     0,   663,   663,   663,
     663,   437,   436,   402,   402,   402,   402,   425,   523,   512,
     474,   391,   667,     0,   664,   669,   672,   406,     0,   403,
     409,   412,     0,   663,   402,   761,   665,   404,   476,   477,
     475
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    70,    71,    72,   243,   579,   906,   580,
     261,   262,   461,   263,   452,    74,   530,    75,   539,   690,
     890,   368,   370,   371,   842,    76,    77,   515,   249,    79,
      80,   264,    81,    82,    83,   481,    84,   216,   388,   389,
     200,   201,   202,   618,   567,   204,    86,   454,   359,    87,
     218,   269,   535,   568,   702,   440,   441,   231,   232,   220,
     426,   572,   523,   524,    88,   366,   268,   467,   639,   287,
     719,   589,   732,   730,   604,   606,   739,   740,   957,   251,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     321,   324,   707,   831,   722,   836,   837,   675,   252,   582,
     715,   838,   839,   380,  1025,  1026,  1027,  1028,  1136,  1061,
     963,   871,   872,   964,  1148,  1149,   486,   487,   658,   758,
     868,  1055,   959,  1132,   325,   101,   102,   322,   512,   513,
     672,   770,   516,   517,   676,   772,   848,   723,  1107,   720,
     843,   911,  1018,  1211,  1230,  1242,  1250,  1099,  1100,  1078,
     795,   796,   897,   898,   797,   882,   884,   881,   982,   983,
     984,  1152,   985,   988,   989,   990,   991,   992,   993,   798,
     799,   887,   800,   801,   802,   708,   827,   903,   833,   103,
     104,   105,   106,   107,   108,   109,   498,   662,   110,   500,
     111,   112,   499,   501,   292,   295,   296,   492,   660,   659,
     759,   869,   961,  1056,   763,   113,   114,   293,   115,   116,
     117,   223,   224,   120,   225,   226,   600,   731,   859,   860,
    1114,  1034,   935,   443,   937,   938,  1126,   940,   956,   942,
     943,   968,   969,   944,   945,   946,   947,   948,   972,   973,
     949,   950,   951,   952,   953,  1037,   407,   605,   274,   444,
     228,   123,   643,   570,   609,   603,   411,   307,   436,   437,
     697,   886,   472,   583,   375,   266
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1040
static const yytype_int16 yypact[] =
{
   -1040,   114,  3745, -1040,  9167, -1040, -1040, -1040,  8625, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040,  9293,  9293, -1040, -1040,
   -1040,  5085,  4644, -1040, -1040, -1040, -1040,   384,  8480,   -27,
     236,   280, -1040, -1040, -1040,  3909,  4791, -1040, -1040,  4056,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, 11057, 11057,
   11057, 11057,   124,  6680,  9419,  9923, 10301,  8909, -1040,  8335,
   -1040, -1040, -1040,   282,   316,   388,   413,   996, 11183, 11057,
   -1040,   799, -1040,  1065, -1040,   374, -1040, -1040,   367,   549,
     495, -1040,   485, 11435, -1040,   520,  1591,   398,    65,   348,
   -1040, 11309, 11309, -1040, -1040,  7662, 11557, 11679, 11801,  8189,
    9293,   424,    95, -1040, -1040,   544, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,   323,   435,
   -1040,   570,   518, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040,   547, -1040, -1040, -1040,   580, 11057,   634,  6831,
   11057, 11057, 11057, -1040, 11057, -1040,   613,  4181,   679, -1040,
   -1040,   640,   496,   353,   453,   696,   553,   655, -1040, -1040,
    7536, -1040,  9293,  9545, -1040, -1040,  7788, -1040, 11309,   863,
   -1040,   671,  6982, -1040,  7133, -1040, -1040,   702,   708,   367,
   -1040,   531, -1040,   759,  4328,  4328,   551,  9419, -1040,  6680,
     713,   799, -1040,  1065,   -27,   745, -1040,  1065,   -27,   750,
     -33,    38, -1040,   679,   765,    38, -1040,   -27,   838,   996,
   11923,   769, -1040,   536,   562,   605,   659, -1040, -1040, -1040,
   -1040, -1040,   600, -1040,   716,   911,   438, -1040, -1040, -1040,
   -1040,   843, -1040, -1040, -1040, -1040, -1040, -1040, -1040,  7914,
   11309, 11309, 11309, 11309,  9419, 11309, 11309, -1040, -1040, -1040,
     824, -1040, -1040, -1040, -1040, -1040, 10427, -1040,  6680,  9038,
     794, 10427, -1040, 11057, 11057, 11057, 11057, 11057, -1040, -1040,
   11057, 11057, 11057, 11057, 11057, 11057, 11057, 11057, 11057, -1040,
   -1040, 11057, 11057, 11057, 11057, 11057, 11057, 11057, 11057, 11057,
   11057, -1040, -1040, 12386,  9293, 12476,  5824,   374,   106,   106,
    7284, 11309,  7284,   799, -1040,   798,   885, -1040, -1040,   662,
     928,   117,   127,   141,   439,   670, 11309,   880, -1040,   832,
     701, -1040, -1040, -1040, -1040,    34,    78,   415,   543,   558,
     612,   626,   632,   720, -1040, -1040, -1040,   732, -1040, -1040,
   -1040, 13736, -1040, -1040, 11183, 11183, -1040, -1040,   585, -1040,
   -1040, -1040,   777, 11057, 11057,  9671, -1040, -1040, 12566,  9293,
   12656, 11057, 11057, 10049, -1040,   -27,   826, -1040, -1040, 11057,
     -27, -1040,   836,   -27,   842, -1040,   133, -1040, -1040, -1040,
   -1040, -1040,  8625, -1040, 11057,   834,   847, 12566, 12656, 11057,
    1065,   236,   -27, -1040, -1040,  8040,   846,   -27, -1040, -1040,
   10175, -1040, -1040, 10301, -1040, -1040, -1040,   671,   731, -1040,
   -1040,   850, 11923, 12746,  9293, 12836, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,   931,    59,
     960,   340, 11057, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040,   851, -1040, -1040, -1040,   990, -1040,   990, 11057,
   -1040,   855,   857,   963, -1040,   -27, 11923,   858, -1040, -1040,
   -1040,   966,   887,  3887, -1040, -1040, -1040,   737,   663, -1040,
     759,  4622,  4622,  4622,  4622,  4769,  4475,  4622,  4622,  4328,
    4328,   849,   849,  3200,  1162,  1162,   886,   436,   436,   759,
     759,   759,  1842,  1842,  5232,  4203,  5526,  4350, -1040,   708,
   -1040,   -27,   866,   588, -1040,   666, -1040, -1040,  4938,   990,
    1010, -1040,  5975,  1012,  6428,   990,    54,   990,  1003,  1018,
     144, 12926,  9293, 13016, -1040,   374, -1040,   731, -1040, -1040,
   -1040, 13106,  9293, 13196,  5824, 11309, -1040, -1040, -1040, -1040,
   -1040, -1040,  3529, -1040,  4034, -1040, -1040, -1040,  8625, 11057,
   -1040, 11057,   679, -1040,   655,  3369,  4497,   -27,   688,   722,
   -1040, -1040, -1040, -1040,  9797, -1040, 10049, -1040, -1040, 11309,
    4181, -1040, -1040,   708,   708, -1040, -1040,   345, -1040, -1040,
      38, 11923,   850,    37,   470,   -27,   271,   349, -1040, -1040,
    1007, -1040,   487, -1040,   877, -1040, -1040,   491,   884, -1040,
     759, -1040, -1040,   893, -1040, -1040, -1040, -1040,   895, 10553,
    9419, -1040,   850, 11923,  9419, 11183, 11057, 13286,  9293, 13376,
   12319,   918, 11183, 11183, -1040,   824,   889,   727,  9671, 11183,
   11183, -1040, -1040,   824, -1040, -1040, -1040, 10679,   738, -1040,
     574, -1040,  1033, -1040, -1040, -1040, -1040, -1040, -1040,  1018,
     990, -1040, 10805,   990,    72,   235,   -27,   156,   312,  7284,
     799, 11309,  5824,   897,   470, -1040,   -27,   990,   133,   921,
    8770,    95,   549, -1040, -1040, -1040, -1040, 11057, 11057,   733,
   11057, 11057,   -27,   920,   133, -1040, -1040,   350, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
     939, -1040,   939, 11057,   927, -1040,   850, -1040,  4181,  5379,
    5673,   -27,   753,   786, -1040, -1040,  2945,  2945,   881, -1040,
     356,   631, -1040,  1024,   978, -1040,   952, -1040, -1040,   742,
   -1040, -1040,   341, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040, 11057, -1040, -1040, -1040, -1040, -1040, -1040, 11183,
   -1040, -1040, -1040, -1040, -1040,   855, -1040,   989, -1040, -1040,
   -1040,  7284, -1040, -1040, -1040, -1040,  7284, 11309,   990, -1040,
   -1040,   990, -1040, -1040,   990, -1040, 11057, -1040,    26, -1040,
     332,   990,  5824,   799,   990, -1040, -1040, -1040,  2196,  5824,
    2402, -1040, -1040, -1040, 11057, -1040, 10049, -1040,  1834, -1040,
    1556,  7133, -1040, -1040,  5824,   944,   787, -1040, -1040, -1040,
   -1040, 12319, 12200, -1040,   577,   949, -1040, -1040, -1040,  1043,
   -1040, 12319,  2945,  2945,   881,   356,   790,  3608,  3608,  4181,
   -1040, -1040, 12045,   106, -1040, -1040,  6554, -1040,   106, -1040,
   -1040, -1040, -1040, -1040, 10931,  6126, -1040,   990, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,  1151, -1040,
   -1040, -1040, -1040, -1040, -1040,   -27,   -27, -1040, -1040,   973,
   -1040,   954, 11057, -1040,   956,   546,   965,   965, -1040,   967,
    1049,   968,  1066, -1040,   990,   799,   974,   921,  2402, -1040,
   -1040, -1040, -1040,   -27,   991,   995,   979, 12167, -1040,   981,
     965,   965, -1040,   982,   992, -1040,   999, -1040, -1040,     3,
     264,   355,   -27, 12286, -1040,  1001, -1040, -1040,   -27,  1011,
   -1040, 12319, -1040, -1040,   744, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040,   -27,   -27,   -27,   -27,  1068,
   -1040,   743,   198,   203,   213,  5824,  1133,  5975,  3608, 11057,
   -1040,   955, -1040,  1151,  1079, -1040,  1022,   -27,  1025, -1040,
   -1040, -1040, 11057,  2196, -1040, -1040,   714, -1040, -1040, -1040,
   -1040,   243, -1040, -1040,  2402, -1040, -1040,  1417, -1040, -1040,
   -1040, -1040,  2402,  5824,   -27,   291,  7410,  1027, -1040, 12167,
    2402, -1040,  1108,   748,   714, -1040, -1040, -1040,  2402, -1040,
    1417, -1040,  1089, -1040,  1028, 12319, -1040,   307,   978,  1031,
   -1040,   652, -1040,   577,   978, -1040, -1040,   800, -1040, -1040,
   -1040, -1040,   248, 13466,  9293, 13556,  1010, -1040,   574,   106,
     801,   377, -1040, -1040, -1040, -1040, -1040, -1040,   -27, -1040,
    1151, -1040,  1097, -1040, -1040,   -27, -1040,  1032,  1037, -1040,
    1121,   965, -1040,  1040, -1040,  1041, -1040,  1040,   990,  1046,
    5824,  7133, -1040,  1069, -1040,   748, -1040,  1051,  1053, -1040,
   13646, -1040,   965,  1054, -1040,  1067,  1054, -1040,   542, -1040,
   -1040, 12319,  1071, -1040,  1072, 12319, -1040, -1040, -1040, -1040,
   -1040,    61,   202,   -27,   286,   313, -1040, -1040, -1040, 11309,
   11309, 12200, -1040, -1040,  1073,  1074, -1040,  2402, -1040,  1417,
   -1040, -1040,  1417, -1040,  1417, -1040, -1040, -1040, -1040,   990,
    1048, -1040,  2402, -1040,  1417, -1040,  1075,  1076, -1040,  1417,
   -1040,  1417, -1040, -1040,  1089, -1040,  1071, 12319, 12319,  1071,
     321, -1040, -1040, -1040, -1040,  1097,  1097,  1040,  1080,  1040,
    1040, -1040, -1040,  1054,  1087,  1054,  1054, -1040, -1040,  1071,
   -1040,  1074, -1040,  1417, -1040, -1040, -1040, -1040,  1417, -1040,
   -1040, -1040,  6277,  1040,  1054,   576, -1040, -1040, -1040, -1040,
   -1040
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1040, -1040, -1040,   972, -1040,    19,   754,  -545, -1040,   -51,
   -1040,   756, -1040,    68, -1040,  -264,  -308,   -83, -1040, -1040,
   -1040,   -66,   -75, -1040, -1040,   -25, -1040,  -323,   645,     4,
    1126,  -154,     7,   -26, -1040,  -391,    11,  2057,  -345,  1127,
     -58,   -11, -1040, -1040,     2, -1040,  2889, -1040,  1147, -1040,
    1411, -1040,   110,    60,   630,  -350,   100,   -15, -1040,  -381,
    -205,    39, -1040,  -307,   -32, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,    32,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040,   538, -1040,   331,  1177,  -364,
   -1040,   146,  -694, -1040, -1027, -1039,   230,   152,   393,   308,
   -1040,   501, -1040,  -886, -1040,    74,   389, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040,   537, -1040, -1040,   -96,   766, -1040,
   -1040, -1040,   962, -1040, -1040, -1040, -1040,  -688, -1040,    42,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,  -603,
   -1040, -1040, -1040, -1040,   399, -1040, -1040, -1040,  -860, -1040,
     274,  -991,  -605,  -822, -1040,   206, -1040,   210,   218, -1040,
    -643, -1040,   414, -1040, -1040,   208, -1040, -1040,   289,   373,
     675, -1040,  1197,  1459,  1483,  1523, -1040,   806,  1936, -1040,
    1965,  2010, -1040, -1040,   -56, -1040, -1040,  -200, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040,     5, -1040, -1040, -1040, -1040,
     -21,  1967,  1113,  1209,  1908,  1709, -1040, -1040,   352, -1040,
    -770,   412,  -776,  -607, -1001,  -829,   207,  -915,  -287,   -62,
     275,   249, -1040, -1040,  -489,  -327,   168,  -975,  -957,   256,
    -879, -1040,  -729, -1040,   120,  -748, -1040, -1040, -1040,    92,
    -393, -1040,  -318, -1040, -1040,   -86, -1040,   -37,   253,   848,
    -577,   329,  -243,   -60,   -55,    -2
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -762
static const yytype_int16 yytable[] =
{
     124,   291,   260,   365,   294,   584,   412,   235,   367,   367,
     203,   308,   367,   205,   571,   410,   309,   240,   841,   372,
     215,   215,   434,   125,   536,   282,   369,   752,   474,   373,
     203,   844,   476,   205,    89,   308,    89,  1005,  1007,   581,
     630,   405,   598,   302,   623,   569,   301,   578,   222,   222,
     749,   282,   623,   272,   276,   221,   221,   330,   374,   737,
     265,   203,  -107,   320,   282,   282,   282,   529,   281,  1124,
      73,  1150,    73,  1175,  -116,  1006,  1008,  1057,   757,   627,
     630,   714,   234,  1173,   955,    89,    89,   794,   934,   283,
     934,   652,   960,   612,   270,   495,   497,  -116,   934,  1029,
     222,   203,  -637,   889,   215,   462,   613,   616,   227,   227,
     569,  1144,   578,   470,     3,   283,   219,   229,  1116,   581,
     471,   317,   267,   222,   222,   664,   237,   222,   379,   390,
     390,  -637,   222,  -354,   655,   682,   430,  1116,   319,   221,
     644,   974,  -112,   877,   878,  1116,  -636,   271,   275,   850,
     529,   529,  -113,   446,  1117,   448,   237,   422,   260,   855,
    1206,  -354,  -354,  -107,  1209,   458,  -120,   644,  1129,  -119,
     315,   316,   914,  1117,   525,  -636,  1231,   305,   665,   306,
     256,  -115,  1054,  -107,   473,  -734,  -107,   854,   934,  1173,
    -107,   471,   227,   456,  1029,  1109,  1103,   485,  1042,  1043,
     408,   308,  1124,  1150,   876,   305,   465,   306,   260,  -734,
    -354,  -112,  -116,   883,  -116,  -118,  -113,  1229,  -107,   427,
    -734,  1065,  1066,  1067,   464,   427,  -120,   367,   367,   367,
     367,   445,   510,   511,   215,  1144,   215,   215,   318,   434,
     124,    89,   726,   630,   505,   506,   507,   508,   282,   999,
    1000,   936,   736,   623,   480,   623,   735,   305,   479,   306,
    -118,  -119,   222,  -103,   222,   222,   265,  1116,   222,   221,
     222,   221,   442,  -104,    89,   644,    89,   260,   979,   981,
     238,  1029,   241,  1029,  1116,   644,   237,  -111,   367,    89,
    -110,    89,   776,   593,   981,   981,  -106,   282,   663,  -115,
     663,   520,  -106,   595,  1118,   586,   531,   917,   234,   319,
      73,  1214,   283,   308,   954,  1125,  1074,   623,  1002,   585,
    1130,   587,   227,  1118,   227,   460,  -117,  1105,   504,   978,
     435,  1138,   438,  1106,  -114,   265,   588,  -117,   781,  1145,
     527,    89,   222,   222,   222,   222,    89,   222,   222,  -112,
    -735,  -112,   931,  -118,  -113,  -118,  -113,  -114,   222,  1154,
      89,   283,   445,   537,  -120,   522,  -120,   576,   215,   569,
     522,   578,   817,  1181,  -108,  -105,   932,    73,  1079,   242,
     824,  -109,   509,  -735,   813,   815,  1029,  1029,  1084,   531,
     531,   820,   822,   317,  1198,   994,   222,  -106,    89,  -119,
     826,  -119,    89,   222,    89,  1076,   668,   755,   994,   994,
    1075,   315,   316,   576,  1131,  1101,   361,  -106,   222,   746,
    -106,   529,  -645,   244,  -106,   577,  1115,   445,   529,   529,
    1090,  1091,   576,   215,   297,   529,   529,  -115,   894,  -115,
     427,   638,   427,   880,   362,   363,   537,   537,  1218,  -112,
     282,   689,  -645,  1155,   203,   889,   480,   205,  -108,   669,
     576,   222,   766,  1224,  -117,  -731,  -117,   766,   298,  -103,
    1153,   -84,  -114,   630,  -114,  -108,  -105,   889,  -105,  -112,
     338,   339,   445,  -638,   915,   623,   895,   576,   215,   896,
     577,   -98,   361,   364,   282,  -108,  -105,    89,  -108,  -105,
     480,  -524,  -108,  -105,   488,   496,  -749,  -631,  1128,   237,
     318,   900,  -638,   333,   283,   233,   222,   624,   577,   729,
     362,   409,   738,  1171,   615,   617,   716,   349,   350,   994,
     477,   710,   236,   712,  -646,  -631,  -631,   237,  -311,  1015,
     299,   615,   617,   970,  1017,   577,  1153,  1120,   746,  1001,
    1153,  1248,  -646,   488,   695,   529,   754,   488,   283,   490,
     491,  -113,   650,   703,   361,   300,  -311,  -311,   981,   645,
     427,   941,   356,   357,   358,  1120,   704,   323,   709,  -113,
    1039,  -104,  -731,   966,  -631,  1189,  1210,  -731,   835,   830,
     445,   830,   362,   428,   994,   576,   215,   742,  1040,   361,
     445,   718,  1228,  1153,   361,   576,   215,   743,   490,   491,
     704,  -639,   490,   491,    89,  -311,    89,   415,  -735,   282,
     203,   326,   427,   205,   222,   756,  -641,   362,   457,   694,
    -643,   327,   362,   483,   222,   986,    89,   222,   701,   765,
    -639,   429,   704,   768,  -120,   862,   331,    78,   367,    78,
     459,   282,   432,   577,   926,  -641,    60,   480,  -643,  -643,
     531,    78,    78,   577,  -111,   853,   488,   531,   531,   414,
     852,   222,   701,  -644,   531,   531,   429,  -119,   851,  -120,
    -640,   484,   861,   283,   459,   930,   445,   699,  1204,   987,
     418,   576,   215,   416,  -642,   237,  -732,  -110,    78,    78,
    -631,  -644,  -644,   694,   701,   828,   834,  -643,   840,  -640,
     840,  -119,    89,    78,  -115,   283,    89,   537,   488,   489,
     222,   490,   491,  -642,   537,   537,   753,  -302,   236,  -631,
     361,   537,   537,   970,  -106,  1168,    78,    78,  -634,   423,
      78,   970,   203,   970,  1163,    78,   522,   829,   775,   577,
    -644,   427,   777,   830,   367,  -302,  -302,  1123,   362,   591,
    1127,    89,   415,   222,    89,   700,  -634,  -634,   873,   361,
     873,   908,   925,   490,   491,  -749,  1157,   644,  1085,   424,
     905,  1143,   488,  1146,   237,   907,   425,   750,  -634,  -120,
     753,   926,  -117,   918,   531,   431,  1086,   362,   601,  -312,
     607,   433,   814,   816,  -302,   361,   691,   592,   967,   821,
     823,   361,  -108,  -732,  -115,  -634,   361,  -634,  -732,   453,
     977,   751,   930,   931,   696,   904,   819,  -312,  -312,   608,
     892,   893,   864,   362,   687,   493,   333,   490,   491,   362,
    1093,  1169,  1170,   488,   362,  1140,   602,   932,  -117,   677,
     230,   537,   699,  -114,    78,  1016,   233,   814,   816,  -114,
     821,   823,   463,    89,  1021,   970,   488,   970,    89,   222,
     282,   -83,   970,  -105,   970,    78,  -312,    78,    78,  -115,
     696,    78,   688,    78,    89,   700,   819,    78,  1094,    78,
    1217,    89,  1219,   602,   478,  1051,   493,  1220,   490,   491,
     469,   619,    78,    89,    78,  1223,    89,  1225,   696,   475,
     705,   970,  -117,  -114,  1226,   482,   713,   449,   717,   493,
     502,   490,   491,  -738,  1157,  1095,   333,   450,   451,   901,
     514,  1081,   596,   596,  1011,   282,   597,   879,    89,  -749,
     528,   590,  1038,   237,  1038,  1038,  1243,    89,  1087,   503,
     305,  1244,   306,   594,    78,    78,    78,    78,    78,    78,
      78,    78,   599,   333,  1096,  -738,  1098,  1038,  1038,  1038,
     830,    78,   721,    78,   901,   632,    78,   488,   641,   696,
     346,   347,   634,   354,   355,   356,   357,   358,   636,   696,
     975,   642,   -98,  -738,  -738,   671,   651,   488,   967,  1063,
     674,  -284,   967,   679,   683,  1133,   967,   680,   967,    78,
     684,    78,   698,   685,   834,    78,    78,    78,   706,   840,
     354,   355,   356,   357,   358,   711,   488,   282,   718,   767,
     494,    78,   490,   491,   696,   721,   769,   771,   971,   818,
    -738,  -285,  -738,   696,   885,  -734,   812,    89,   830,    89,
     661,   845,   490,   491,   849,    41,    42,    43,    44,    78,
      78,   760,   761,   803,   762,   939,   866,   939,   856,   858,
     870,    46,    47,  -286,    78,   939,   888,   965,   889,   666,
    1190,   490,   491,   891,   447,    89,   367,   367,    89,   902,
    -287,  1135,   445,   995,   709,   784,   840,   576,   215,  1032,
    1033,  1046,  1036,  1212,  1213,   310,   311,   312,   313,   314,
      78,  1041,   466,  1044,  1047,   119,   468,   119,  1049,  1038,
    1052,  1059,  1058,   976,  1092,  1060,   222,  1064,  1068,    78,
     967,   920,   967,   921,   922,   923,   924,   967,  1070,   967,
    1038,  1147,   829,   921,   922,   923,   924,  1080,   696,   920,
    1072,   921,   922,   923,   924,   577,  1122,  1083,  1134,   803,
     803,  1122,    89,    89,  1139,   939,   119,   119,  1110,   909,
     285,  1112,   910,  1040,  1151,   912,   967,  1156,  1177,   100,
     975,   100,   916,  1179,  1122,   919,  1182,  1184,   975,  1191,
     975,  1245,  1222,   100,   100,  1188,   285,  1192,  1023,  1194,
    1199,   222,   222,   920,  1121,   921,   922,   923,   924,   382,
     392,   392,   392,  1201,   455,   646,   976,  1207,  1208,  1215,
    1216,   648,   377,  -734,  -735,   394,  1233,    78,   971,    78,
     100,   100,  1142,  1238,   360,   696,   971,    78,   971,   333,
     939,   885,   741,   840,  1167,   100,   832,    78,  1022,    78,
      78,   939,  1023,  1108,   803,   803,   346,   347,  1024,   939,
     696,   696,  1174,   962,   803,   803,   803,   965,   100,   100,
     803,   803,   100,   874,    89,   965,   996,   100,  1227,   863,
     673,  1069,  1071,   631,    78,  1050,   518,  1249,   633,  1158,
     998,   635,  1102,  1159,   637,   353,   354,   355,   356,   357,
     358,  1160,   413,   997,  1166,  1097,   667,   976,   406,  1053,
     647,  1119,   975,  1141,   975,   649,  1137,  1082,     0,   975,
       0,   975,   119,     0,     0,    78,     0,     0,     0,    78,
      78,     0,     0,    78,     0,     0,     0,    78,    78,     0,
       0,     0,     0,     0,    78,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   803,   119,   975,     0,
     971,  1045,   971,  1048,   803,   804,     0,   971,     0,   971,
     119,     0,   119,   681,    78,     0,    78,    78,     0,     0,
       0,     0,     0,     0,   939,     0,   100,     0,     0,     0,
       0,   803,     0,   285,     0,     0,     0,     0,     0,   965,
       0,  1205,     0,     0,     0,     0,   971,   100,     0,   100,
     100,     0,     0,   100,     0,   100,   696,     0,     0,   100,
       0,   100,   119,     0,     0,     0,     0,   119,     0,     0,
       0,     0,     0,     0,   100,     0,   100,     0,     0,     0,
       0,   119,   285,     0,     0,  1193,  1195,     0,   803,     0,
       0,  1200,     0,  1202,  1203,     0,     0,     0,     0,  1187,
       0,   804,   804,     0,    78,     0,     0,   273,     0,   920,
       0,   921,   922,   923,   924,   925,    78,     0,     0,   119,
       0,    78,    78,   119,     0,   119,   100,   100,   100,   100,
     100,   100,   100,   100,   926,     0,     0,    78,     0,     0,
       0,     0,     0,   100,    78,   100,     0,     0,   100,     0,
       0,     0,     0,     0,     0,     0,    78,     0,   928,    78,
    1221,     0,     0,     0,   803,   930,   931,     0,   803,  1178,
    1180,  1237,  1239,  1240,  1241,  1183,     0,  1185,     0,  1186,
       0,   100,     0,   100,   803,     0,     0,   100,   100,   100,
     932,    78,  1247,     0,     0,     0,   804,   804,     0,     0,
      78,     0,     0,   100,     0,     0,   804,   804,   804,     0,
       0,     0,   804,   804,     0,     0,     0,     0,   119,     0,
     803,   803,     0,     0,     0,     0,   857,     0,     0,     0,
       0,   100,   100,     0,     0,   285,     0,     0,     0,     0,
     865,     0,   867,     0,     0,     0,   100,     0,   920,     0,
     921,   922,   923,   924,   925,     0,   332,     0,   417,     0,
       0,   419,   420,   421,     0,     0,     0,     0,     0,  1232,
    1234,  1235,  1236,   926,     0,     0,     0,     0,     0,   285,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1246,     0,   928,   804,     0,
      78,   100,    78,   929,   930,   931,   804,     0,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,     0,     0,     0,     0,   346,   347,     0,     0,   932,
       0,     0,   933,   804,     0,   119,     0,   119,    78,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,   237,
       0,   122,     0,   122,     0,     0,     0,   119,   348,     0,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
       0,     0,     0,     0,     0,     0,     0,   521,     0,    78,
       0,     0,   534,     0,  1003,     0,     0,     0,     0,     0,
     804,     0,     0,     0,     0,     0,     0,     0,     0,   100,
       0,   100,   122,   122,   285,     0,   286,     0,     0,   100,
       0,     0,     0,     0,     0,    78,    78,     0,     0,   100,
       0,   100,   100,  1030,  1031,     0,     0,     0,     0,     0,
       0,     0,   286,   119,     0,     0,   285,   119,     0,     0,
       0,     0,     0,   811,     0,   383,   393,   393,     0,     0,
       0,     0,     0,     0,    78,    78,   100,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   804,  1073,     0,     0,
     804,     0,     0,     0,     0,   620,   622,     0,     0,     0,
       0,     0,   119,     0,   273,   119,   804,     0,     0,     0,
       0,     0,     0,  1088,  1089,     0,     0,   100,     0,     0,
       0,   100,   100,     0,     0,   100,     0,     0,     0,   100,
     100,     0,     0,     0,     0,  1111,   100,   100,     0,     0,
       0,   622,   804,   804,   273,     0,   920,    78,   921,   922,
     923,   924,   925,     0,     0,     0,     0,     0,     0,   811,
     811,     0,     0,     0,     0,     0,   100,     0,   100,   100,
     121,   926,   121,     0,     0,     0,     0,     0,   122,   333,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     678,     0,     0,     0,     0,   928,   346,   347,     0,     0,
       0,   929,   930,   931,   119,     0,     0,     0,     0,   119,
       0,   122,     0,   122,     0,     0,  1172,     0,     0,     0,
       0,   121,   121,  1176,     0,   119,   122,   932,   122,   118,
     933,   118,   119,   351,   352,   353,   354,   355,   356,   357,
     358,     0,   958,     0,   119,     0,     0,   119,     0,   286,
       0,     0,     0,     0,   811,   811,   100,     0,     0,     0,
       0,     0,     0,     0,   811,   811,   811,     0,   100,     0,
     811,   811,     0,   100,   100,  1013,     0,     0,   122,   119,
     118,   118,     0,   122,   284,     0,     0,     0,   119,   100,
     744,     0,   745,     0,     0,     0,   100,   122,   286,     0,
     538,     0,     0,     0,     0,   622,     0,   273,   100,     0,
     284,   100,     0,     0,     0,     0,     0,     0,     0,    85,
       0,    85,     0,   381,   391,   391,   391,     0,     0,     0,
       0,     0,     0,     0,     0,   122,     0,     0,     0,   122,
     392,   122,     0,   100,     0,     0,     0,     0,     0,     0,
     774,     0,   100,     0,     0,     0,   811,     0,     0,     0,
       0,     0,     0,     0,   811,     0,     0,     0,     0,   622,
      85,    85,     0,     0,     0,     0,     0,   121,   825,     0,
       0,     0,     0,   538,   538,     0,     0,     0,   119,     0,
     119,   811,     0,   847,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   805,
     121,     0,   121,   378,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   121,   119,   121,     0,   119,
       0,     0,   392,   806,   122,     0,   118,     0,     0,     0,
       0,     0,     0,     0,   875,     0,     0,     0,   811,     0,
       0,   286,   100,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
       0,   118,     0,   807,     0,     0,     0,   121,     0,     0,
       0,     0,   121,     0,   118,     0,   118,     0,     0,     0,
     100,     0,     0,   100,     0,   286,   121,     0,     0,   121,
       0,     0,     0,   119,   119,   805,   805,   284,   920,     0,
     921,   922,   923,   924,   925,     0,     0,   913,     0,     0,
       0,     0,     0,     0,   811,     0,    85,     0,   811,   806,
     806,   100,     0,   926,   121,     0,   118,   273,   121,     0,
     121,   118,     0,     0,   811,     0,     0,   927,     0,     0,
       0,   122,     0,   122,     0,   118,   284,   928,     0,    85,
       0,    85,     0,   929,   930,   931,     0,   100,   100,   807,
     807,     0,     0,   122,    85,     0,    85,     0,     0,     0,
     811,   811,   121,   121,     0,  1020,     0,     0,     0,   932,
       0,     0,   933,   118,     0,     0,     0,   118,     0,   118,
     805,   805,     0,     0,     0,     0,   100,   100,     0,     0,
     805,   805,   805,  1035,     0,   119,   805,   805,     0,     0,
     286,     0,     0,     0,   806,   806,    85,     0,     0,   764,
       0,    85,     0,   121,   806,   806,   806,     0,     0,     0,
     806,   806,     0,     0,     0,    85,     0,     0,   532,   122,
       0,     0,   286,   122,   538,     0,     0,     0,     0,     0,
       0,   538,   538,     0,   807,   807,     0,     0,   538,   538,
       0,     0,     0,     0,   807,   807,   807,     0,     0,   100,
     807,   807,     0,    85,     0,     0,     0,    85,     0,    85,
    1104,     0,   118,     0,     0,     0,     0,     0,   122,     0,
       0,   122,   805,  1113,     0,     0,     0,     0,     0,   284,
     805,     0,     0,     0,   920,     0,   921,   922,   923,   924,
     925,     0,     0,     0,     0,     0,   806,     0,     0,     0,
       0,   532,   532,     0,   806,     0,     0,   805,     0,   926,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,     0,   121,   284,     0,     0,     0,     0,     0,     0,
       0,   806,     0,   928,     0,     0,   807,     0,     0,   929,
     930,   931,   121,     0,   807,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,     0,     0,     0,   538,     0,
       0,     0,     0,     0,   805,   932,     0,     0,   933,     0,
     122,   807,     0,     0,     0,   122,     0,     0,     0,   118,
       0,   118,     0,     0,     0,     0,     0,     0,   806,     0,
       0,   122,     0,     0,     0,     0,     0,     0,   122,     0,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
     122,     0,     0,   122,     0,     0,     0,     0,   121,     0,
       0,     0,   121,   121,     0,     0,     0,     0,   807,     0,
     121,   121,     0,     0,     0,     0,     0,   121,   121,     0,
     805,  1014,     0,     0,   805,   122,     0,     0,   284,     0,
       0,     0,     0,     0,   122,     0,   808,     0,     0,     0,
     805,     0,     0,     0,   806,     0,     0,   121,   806,    85,
     121,    85,     0,     0,     0,     0,     0,   118,     0,     0,
     284,   118,     0,     0,   806,   809,     0,     0,     0,     0,
       0,    85,     0,     0,     0,     0,   805,   805,     0,     0,
       0,     0,     0,     0,   807,     0,   393,     0,   807,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     806,   806,     0,     0,   807,     0,   118,     0,     0,   118,
     810,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   808,   808,   122,     0,   122,   121,     0,     0,
     807,   807,     0,     0,     0,     0,     0,    85,     0,   121,
       0,    85,   532,     0,   121,     0,     0,     0,     0,   532,
     532,   809,   809,     0,     0,     0,   532,   532,     0,     0,
     121,     0,   122,     0,     0,   122,     0,   121,   393,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   121,
       0,     0,   121,     0,     0,     0,    85,     0,     0,    85,
       0,     0,     0,     0,     0,     0,   810,   810,   118,     0,
       0,     0,     0,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   121,     0,     0,   808,   808,   118,
       0,     0,     0,   121,     0,     0,   118,   808,   808,   808,
       0,     0,     0,   808,   808,     0,     0,     0,   118,   122,
     122,   118,     0,     0,     0,     0,   809,   809,     0,     0,
       0,     0,     0,     0,     0,     0,   809,   809,   809,     0,
       0,     0,   809,   809,     0,     0,     0,     0,     0,  1012,
       0,     0,     0,   118,     0,     0,   532,     0,     0,     0,
       0,     0,   118,     0,     0,     0,     0,     0,    85,     0,
       0,   810,   810,    85,     0,     0,     0,     0,     0,     0,
       0,   810,   810,   810,     0,   217,   217,   810,   810,    85,
       0,     0,     0,     0,     0,     0,    85,     0,     0,   808,
       0,     0,     0,   121,     0,   121,     0,   808,    85,     0,
       0,    85,     0,     0,   391,     0,     0,   250,   253,   254,
     255,     0,     0,     0,   217,   217,     0,     0,   809,     0,
       0,   122,     0,     0,   808,     0,   809,   303,   304,  1010,
       0,   121,     0,    85,   121,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,     0,     0,     0,    23,    24,
      25,    26,   118,   809,   118,     0,     0,     0,     0,   217,
       0,     0,     0,   810,    32,    33,    34,     0,     0,     0,
       0,   810,     0,     0,    41,    42,    43,    44,    45,     0,
       0,   808,     0,     0,     0,     0,     0,     0,     0,     0,
     118,     0,     0,   118,     0,     0,   391,     0,   810,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,   121,
     809,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   792,    59,    60,    61,    62,
      63,    64,    65,    66,     0,     0,     0,     0,     0,     0,
       0,     0,    85,     0,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   279,   810,     0,   808,     0,     0,
       0,   808,     0,     0,     0,     0,   217,   118,   118,   217,
     217,   217,     0,   303,     0,     0,     0,   808,     0,     0,
      85,     0,     0,    85,     0,     0,   809,     0,     0,   217,
     809,   217,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   809,     0,     0,     0,
       0,     0,     0,   808,   808,     0,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   810,     0,     0,     0,   810,     0,     0,     0,     0,
       0,     0,   809,   809,     0,     0,     0,     0,     0,     0,
       0,   810,     0,     0,     0,     0,     0,    85,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
       0,     0,     0,     0,     0,   217,     0,   810,   810,     0,
     533,     0,   540,   541,   542,   543,   544,     0,     0,   545,
     546,   547,   548,   549,   550,   551,   552,   553,     0,     0,
     554,   555,   556,   557,   558,   559,   560,   561,   562,   563,
       0,     0,     0,   217,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
       0,     0,     0,     0,   346,   347,     0,     0,     0,    85,
       0,     0,     0,   614,   614,     0,     0,     0,     0,     0,
       0,     0,   614,   217,   217,     0,     0,     0,   217,     0,
     614,   614,   217,     0,     0,     0,     0,   348,   255,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,     0,
       0,     0,     0,   640,     0,     0,     0,     0,   614,     0,
       0,     0,     0,   237,     0,     0,     0,     0,     0,   217,
       0,     0,   217,     0,     0,     0,     0,     0,     0,  -738,
       0,     0,     0,   217,     0,     0,     0,  -738,  -738,  -738,
       0,     0,  -738,  -738,  -738,     0,  -738,     0,     0,     0,
       0,   670,     0,     0,  -738,  -738,  -738,  -738,  -738,     0,
       0,     0,     0,     0,     0,     0,  -738,  -738,   217,  -738,
    -738,  -738,  -738,  -738,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -738,     0,     0,
       0,     0,     0,     0,     0,     0,  -738,  -738,  -738,  -738,
    -738,  -738,  -738,  -738,  -738,  -738,  -738,  -738,  -738,     0,
       0,     0,     0,  -738,  -738,  -738,  -738,     0,   747,  -738,
       0,     0,     0,     0,     0,  -738,     0,     0,     0,     0,
       0,   217,     0,     0,     0,     0,     0,     0,     0,  -738,
       0,   217,  -738,     0,     0,  -116,  -738,  -738,  -738,  -738,
    -738,  -738,  -738,  -738,  -738,  -738,  -738,  -738,   217,     0,
     217,     0,  -738,  -738,  -738,  -738,     0,     0,  -738,  -738,
    -738,     0,  -738,   217,     0,   217,     0,     0,     0,  -761,
       0,     0,     0,     0,     0,     0,     0,  -761,  -761,  -761,
       0,     0,  -761,  -761,  -761,     0,  -761,     0,     0,     0,
       0,     0,     0,     0,  -761,  -761,  -761,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -761,  -761,   217,  -761,
    -761,  -761,  -761,  -761,   614,   778,     0,   217,     0,     0,
       0,   614,   614,     0,     0,     0,     0,   217,   614,   614,
       0,     0,     0,     0,     0,     0,   217,  -761,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   217,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -761,  -761,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   614,   614,     0,   614,
     614,    23,    24,    25,    26,     0,     0,     0,     0,  -761,
       0,     0,     0,     0,     0,     0,     0,    32,    33,    34,
     784,     0,   217,     0,   785,     0,   986,    41,    42,    43,
      44,    45,  -761,  -761,     0,     0,     0,   233,  -761,     0,
    -761,     0,  -761,     0,     0,   926,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   786,   787,
       0,   899,     0,     0,     0,     0,   788,     0,   614,   789,
       0,     0,   790,   791,     0,   980,   930,     0,   792,    59,
    1004,    61,    62,    63,    64,    65,    66,     0,     0,     0,
       0,     0,     0,     0,     0,   217,     0,     0,     0,     0,
     793,     0,     0,     0,     0,  -761,     4,   279,     5,     6,
       7,     8,     9,   614,     0,   217,    10,    11,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
       0,     0,     0,     0,     0,    20,    21,    22,    23,    24,
      25,    26,     0,     0,    27,     0,     0,     0,     0,     0,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,   217,    41,    42,    43,    44,    45,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   217,     0,     0,     0,    50,    51,     0,     0,     0,
       0,     0,     0,    52,     0,     0,    53,    54,     0,    55,
      56,     0,    57,     0,     0,    58,    59,    60,    61,    62,
      63,    64,    65,    66,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    67,    68,    69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -761,     0,  -761,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   217,  -631,
       0,     0,     0,     0,     0,     0,     0,  -631,  -631,  -631,
       0,   217,  -631,  -631,  -631,     0,  -631,     0,     0,     0,
       0,   686,     0,     0,  -631,     0,  -631,  -631,  -631,     0,
       0,     0,     0,     0,     0,     0,  -631,  -631,     0,  -631,
    -631,  -631,  -631,  -631,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,  -631,     0,     0,
       0,   346,   347,   217,     0,     0,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,     0,
       0,     0,     0,  -631,  -631,  -631,  -631,     0,  -631,  -631,
       0,     0,     0,     0,   348,  -631,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,     0,     0,     0,  -631,
       0,     0,  -631,  -257,     0,  -631,  -631,  -631,  -631,  -631,
    -631,  -631,  -631,  -631,  -631,  -631,  -631,  -631,     0,     0,
       0,     0,     0,  -631,  -631,  -631,  -634,     0,  -631,  -631,
    -631,     0,  -631,     0,  -634,  -634,  -634,     0,     0,  -634,
    -634,  -634,     0,  -634,     0,     0,     0,     0,   686,     0,
       0,  -634,     0,  -634,  -634,  -634,     0,     0,     0,     0,
       0,     0,     0,  -634,  -634,     0,  -634,  -634,  -634,  -634,
    -634,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,  -634,     0,     0,     0,   346,   347,
       0,     0,     0,  -634,  -634,  -634,  -634,  -634,  -634,  -634,
    -634,  -634,  -634,  -634,  -634,  -634,     0,     0,     0,     0,
    -634,  -634,  -634,  -634,     0,  -634,  -634,     0,     0,     0,
       0,   348,  -634,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,     0,     0,     0,  -634,     0,     0,  -634,
       0,     0,  -634,  -634,  -634,  -634,  -634,  -634,  -634,  -634,
    -634,  -634,  -634,  -634,  -634,     0,     0,     0,     0,     0,
    -634,  -634,  -634,  -739,     0,  -634,  -634,  -634,     0,  -634,
       0,  -739,  -739,  -739,     0,     0,  -739,  -739,  -739,     0,
    -739,     0,     0,     0,     0,     0,     0,     0,  -739,  -739,
    -739,  -739,  -739,     0,     0,     0,     0,     0,     0,     0,
    -739,  -739,     0,  -739,  -739,  -739,  -739,  -739,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,  -739,     0,     0,     0,   346,   347,     0,     0,     0,
    -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,  -739,  -739,     0,     0,     0,     0,  -739,  -739,  -739,
    -739,     0,     0,  -739,     0,     0,     0,     0,   348,  -739,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
       0,     0,     0,  -739,     0,     0,  -739,     0,     0,     0,
    -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,  -739,     0,     0,     0,     0,  -739,  -739,  -739,  -739,
    -740,     0,  -739,  -739,  -739,     0,  -739,     0,  -740,  -740,
    -740,     0,     0,  -740,  -740,  -740,     0,  -740,     0,     0,
       0,     0,     0,     0,     0,  -740,  -740,  -740,  -740,  -740,
       0,     0,     0,     0,     0,     0,     0,  -740,  -740,     0,
    -740,  -740,  -740,  -740,  -740,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,  -762,  -762,  -740,     0,
       0,     0,   346,   347,     0,     0,     0,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
       0,     0,     0,     0,  -740,  -740,  -740,  -740,     0,     0,
    -740,     0,     0,     0,     0,     0,  -740,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,     0,     0,     0,
    -740,     0,     0,  -740,     0,     0,     0,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,     0,
       0,     0,     0,  -740,  -740,  -740,  -740,  -311,     0,  -740,
    -740,  -740,     0,  -740,     0,  -311,  -311,  -311,     0,     0,
    -311,  -311,  -311,     0,  -311,     0,     0,     0,     0,     0,
       0,     0,  -311,     0,  -311,  -311,  -311,     0,     0,     0,
       0,     0,     0,     0,  -311,  -311,     0,  -311,  -311,  -311,
    -311,  -311,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   333,   334,   335,   336,   337,   338,   339,   340,
       0,   342,   343,     0,     0,  -311,     0,     0,     0,   346,
     347,     0,     0,     0,  -311,  -311,  -311,  -311,  -311,  -311,
    -311,  -311,  -311,  -311,  -311,  -311,  -311,     0,     0,     0,
       0,  -311,  -311,  -311,  -311,     0,   748,  -311,     0,     0,
       0,     0,     0,  -311,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,     0,     0,     0,  -311,     0,     0,
    -311,     0,     0,  -118,  -311,  -311,  -311,  -311,  -311,  -311,
    -311,  -311,  -311,  -311,  -311,  -311,     0,     0,     0,     0,
       0,  -311,  -311,  -311,  -450,     0,  -311,  -311,  -311,     0,
    -311,     0,  -450,  -450,  -450,     0,     0,  -450,  -450,  -450,
       0,  -450,     0,     0,     0,     0,     0,     0,     0,  -450,
    -450,  -450,  -450,     0,     0,     0,     0,     0,     0,     0,
       0,  -450,  -450,     0,  -450,  -450,  -450,  -450,  -450,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   333,
    -762,  -762,  -762,  -762,   338,   339,     0,     0,  -762,  -762,
       0,     0,  -450,     0,     0,     0,   346,   347,     0,     0,
       0,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,
    -450,  -450,  -450,  -450,     0,     0,     0,     0,  -450,  -450,
    -450,  -450,     0,     0,  -450,     0,     0,     0,     0,     0,
    -450,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,     0,     0,     0,  -450,     0,     0,     0,     0,     0,
       0,  -450,     0,  -450,  -450,  -450,  -450,  -450,  -450,  -450,
    -450,  -450,  -450,     0,     0,     0,     0,  -450,  -450,  -450,
    -450,  -303,   233,  -450,  -450,  -450,     0,  -450,     0,  -303,
    -303,  -303,     0,     0,  -303,  -303,  -303,     0,  -303,     0,
       0,     0,     0,     0,     0,     0,  -303,     0,  -303,  -303,
    -303,     0,     0,     0,     0,     0,     0,     0,  -303,  -303,
       0,  -303,  -303,  -303,  -303,  -303,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   333,   334,   335,   336,
     337,   338,   339,     0,     0,   342,   343,     0,     0,  -303,
       0,     0,     0,   346,   347,     0,     0,     0,  -303,  -303,
    -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,
    -303,     0,     0,     0,     0,  -303,  -303,  -303,  -303,     0,
       0,  -303,     0,     0,     0,     0,     0,  -303,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,     0,     0,
       0,  -303,     0,     0,  -303,     0,     0,     0,  -303,  -303,
    -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,
       0,     0,     0,     0,     0,  -303,  -303,  -303,  -761,     0,
    -303,  -303,  -303,     0,  -303,     0,  -761,  -761,  -761,     0,
       0,  -761,  -761,  -761,     0,  -761,     0,     0,     0,     0,
       0,     0,     0,  -761,  -761,  -761,  -761,     0,     0,     0,
       0,     0,     0,     0,     0,  -761,  -761,     0,  -761,  -761,
    -761,  -761,  -761,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -761,     0,     0,     0,
       0,     0,     0,     0,     0,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,     0,     0,
       0,     0,  -761,  -761,  -761,  -761,     0,     0,  -761,     0,
       0,     0,     0,     0,  -761,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -761,     0,
       0,     0,     0,     0,     0,  -761,     0,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,     0,     0,     0,
       0,  -761,  -761,  -761,  -761,  -318,   233,  -761,  -761,  -761,
       0,  -761,     0,  -318,  -318,  -318,     0,     0,  -318,  -318,
    -318,     0,  -318,     0,     0,     0,     0,     0,     0,     0,
    -318,     0,  -318,  -318,     0,     0,     0,     0,     0,     0,
       0,     0,  -318,  -318,     0,  -318,  -318,  -318,  -318,  -318,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -318,     0,     0,     0,     0,     0,     0,
       0,     0,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,     0,     0,     0,     0,  -318,
    -318,  -318,  -318,     0,     0,  -318,     0,     0,     0,     0,
       0,  -318,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -318,     0,     0,     0,     0,
       0,     0,  -318,     0,  -318,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,     0,     0,     0,     0,     0,  -318,
    -318,  -318,  -738,   230,  -318,  -318,  -318,     0,  -318,     0,
    -738,  -738,  -738,     0,     0,     0,  -738,  -738,     0,  -738,
       0,     0,     0,     0,     0,     0,     0,  -738,  -738,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -738,
    -738,     0,  -738,  -738,  -738,  -738,  -738,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -738,     0,     0,     0,     0,     0,     0,     0,     0,  -738,
    -738,  -738,  -738,  -738,  -738,  -738,  -738,  -738,  -738,  -738,
    -738,  -738,     0,     0,     0,     0,  -738,  -738,  -738,  -738,
       0,   692,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -738,     0,     0,     0,     0,     0,  -116,  -738,
       0,  -738,  -738,  -738,  -738,  -738,  -738,  -738,  -738,  -738,
    -738,     0,     0,     0,     0,  -738,  -738,  -738,  -107,  -738,
       0,  -738,     0,  -738,     0,  -738,     0,  -738,  -738,  -738,
       0,     0,     0,  -738,  -738,     0,  -738,     0,     0,     0,
       0,     0,     0,     0,  -738,  -738,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -738,  -738,     0,  -738,
    -738,  -738,  -738,  -738,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -738,     0,     0,
       0,     0,     0,     0,     0,     0,  -738,  -738,  -738,  -738,
    -738,  -738,  -738,  -738,  -738,  -738,  -738,  -738,  -738,     0,
       0,     0,     0,  -738,  -738,  -738,  -738,     0,   692,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -738,
       0,     0,     0,     0,     0,  -116,  -738,     0,  -738,  -738,
    -738,  -738,  -738,  -738,  -738,  -738,  -738,  -738,     0,     0,
       0,     0,  -738,  -738,  -738,  -738,  -311,     0,  -738,     0,
    -738,     0,  -738,     0,  -311,  -311,  -311,     0,     0,     0,
    -311,  -311,     0,  -311,     0,     0,     0,     0,     0,     0,
       0,  -311,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -311,  -311,     0,  -311,  -311,  -311,  -311,
    -311,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -311,     0,     0,     0,     0,     0,
       0,     0,     0,  -311,  -311,  -311,  -311,  -311,  -311,  -311,
    -311,  -311,  -311,  -311,  -311,  -311,     0,     0,     0,     0,
    -311,  -311,  -311,  -311,     0,   693,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -311,     0,     0,     0,
       0,     0,  -118,  -311,     0,  -311,  -311,  -311,  -311,  -311,
    -311,  -311,  -311,  -311,  -311,     0,     0,     0,     0,     0,
    -311,  -311,  -109,  -311,     0,  -311,     0,  -311,     0,  -311,
       0,  -311,  -311,  -311,     0,     0,     0,  -311,  -311,     0,
    -311,     0,     0,     0,     0,     0,     0,     0,  -311,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -311,  -311,     0,  -311,  -311,  -311,  -311,  -311,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -311,     0,     0,     0,     0,     0,     0,     0,     0,
    -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,
    -311,  -311,  -311,     0,     0,     0,     0,  -311,  -311,  -311,
    -311,     0,   693,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -311,     0,     0,     0,     0,     0,  -118,
    -311,     0,  -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,
    -311,  -311,     0,     0,     0,     0,     0,  -311,  -311,  -311,
       0,     0,  -311,     0,  -311,   257,  -311,     5,     6,     7,
       8,     9,  -761,  -761,  -761,    10,    11,     0,     0,  -761,
      12,     0,    13,    14,    15,    16,    17,    18,    19,     0,
       0,     0,     0,     0,    20,    21,    22,    23,    24,    25,
      26,     0,     0,    27,     0,     0,     0,     0,     0,    28,
      29,   258,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,    41,    42,    43,    44,    45,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,    51,     0,     0,     0,     0,
       0,     0,    52,     0,     0,    53,    54,     0,    55,    56,
       0,    57,     0,     0,    58,    59,    60,    61,    62,    63,
      64,    65,    66,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    67,    68,    69,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -761,   257,  -761,     5,     6,
       7,     8,     9,     0,     0,  -761,    10,    11,     0,  -761,
    -761,    12,     0,    13,    14,    15,    16,    17,    18,    19,
       0,     0,     0,     0,     0,    20,    21,    22,    23,    24,
      25,    26,     0,     0,    27,     0,     0,     0,     0,     0,
      28,    29,   258,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,    41,    42,    43,    44,    45,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,    51,     0,     0,     0,
       0,     0,     0,    52,     0,     0,    53,    54,     0,    55,
      56,     0,    57,     0,     0,    58,    59,    60,    61,    62,
      63,    64,    65,    66,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    67,    68,    69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -761,   257,  -761,     5,
       6,     7,     8,     9,     0,     0,  -761,    10,    11,     0,
       0,  -761,    12,  -761,    13,    14,    15,    16,    17,    18,
      19,     0,     0,     0,     0,     0,    20,    21,    22,    23,
      24,    25,    26,     0,     0,    27,     0,     0,     0,     0,
       0,    28,    29,   258,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,     0,    41,    42,    43,    44,    45,
      46,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,    51,     0,     0,
       0,     0,     0,     0,    52,     0,     0,    53,    54,     0,
      55,    56,     0,    57,     0,     0,    58,    59,    60,    61,
      62,    63,    64,    65,    66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    67,    68,    69,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -761,   257,  -761,
       5,     6,     7,     8,     9,     0,     0,  -761,    10,    11,
       0,     0,  -761,    12,     0,    13,    14,    15,    16,    17,
      18,    19,  -761,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    27,     0,     0,     0,
       0,     0,    28,    29,   258,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,    41,    42,    43,    44,
      45,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,    51,     0,
       0,     0,     0,     0,     0,    52,     0,     0,    53,    54,
       0,    55,    56,     0,    57,     0,     0,    58,    59,    60,
      61,    62,    63,    64,    65,    66,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    67,    68,    69,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -761,   257,
    -761,     5,     6,     7,     8,     9,     0,     0,  -761,    10,
      11,     0,     0,  -761,    12,     0,    13,    14,    15,    16,
      17,    18,    19,     0,     0,     0,     0,     0,    20,    21,
      22,    23,    24,    25,    26,     0,     0,    27,     0,     0,
       0,     0,     0,    28,    29,   258,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,    41,    42,    43,
      44,    45,    46,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,    51,
       0,     0,     0,     0,     0,     0,    52,     0,     0,    53,
      54,     0,    55,    56,     0,    57,     0,     0,    58,    59,
      60,    61,    62,    63,    64,    65,    66,     0,     0,     0,
       0,     0,     0,     0,     0,   257,     0,     5,     6,     7,
       8,     9,     0,  -761,  -761,    10,    11,    67,    68,    69,
      12,     0,    13,    14,    15,    16,    17,    18,    19,  -761,
       0,  -761,     0,     0,    20,    21,    22,    23,    24,    25,
      26,     0,     0,    27,     0,     0,     0,     0,     0,    28,
      29,   258,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,    41,    42,    43,    44,    45,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,    51,     0,     0,     0,     0,
       0,     0,    52,     0,     0,    53,    54,     0,    55,    56,
       0,    57,     0,     0,    58,    59,    60,    61,    62,    63,
      64,    65,    66,     0,     0,     0,     0,     0,     0,     0,
       0,   257,     0,     5,     6,     7,     8,     9,     0,     0,
       0,    10,    11,    67,    68,    69,    12,     0,    13,    14,
      15,    16,    17,    18,    19,  -761,     0,  -761,     0,     0,
      20,    21,    22,    23,    24,    25,    26,     0,     0,    27,
       0,     0,     0,     0,     0,    28,    29,   258,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,    41,
      42,    43,    44,    45,    46,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,    51,     0,     0,     0,     0,     0,     0,    52,     0,
       0,   259,    54,     0,    55,    56,     0,    57,     0,     0,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,     0,     0,     0,     0,     0,     0,     0,  -761,
       0,  -761,   257,  -761,     5,     6,     7,     8,     9,     0,
       0,     0,    10,    11,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,     0,     0,     0,     0,
       0,    20,    21,    22,    23,    24,    25,    26,     0,     0,
      27,     0,     0,     0,     0,     0,    28,    29,   258,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     0,
      41,    42,    43,    44,    45,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,    51,     0,     0,     0,     0,     0,     0,    52,
       0,     0,    53,    54,     0,    55,    56,     0,    57,     0,
       0,    58,    59,    60,    61,    62,    63,    64,    65,    66,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      67,    68,    69,     0,     0,     0,     0,     0,     0,     0,
    -761,     0,  -761,     4,  -761,     5,     6,     7,     8,     9,
       0,     0,     0,    10,    11,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,     0,     0,     0,
       0,     0,    20,    21,    22,    23,    24,    25,    26,     0,
       0,    27,     0,     0,     0,     0,     0,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       0,    41,    42,    43,    44,    45,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,    51,     0,     0,     0,     0,     0,     0,
      52,     0,     0,    53,    54,     0,    55,    56,     0,    57,
       0,     0,    58,    59,    60,    61,    62,    63,    64,    65,
      66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    67,    68,    69,     0,     0,  -761,     0,     0,     0,
       0,     0,     0,  -761,   257,  -761,     5,     6,     7,     8,
       9,     0,     0,     0,    10,    11,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,    20,    21,    22,    23,    24,    25,    26,
       0,     0,    27,     0,     0,     0,     0,     0,    28,    29,
     258,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,    41,    42,    43,    44,    45,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,    51,     0,     0,     0,     0,     0,
       0,    52,     0,     0,    53,    54,     0,    55,    56,     0,
      57,     0,     0,    58,    59,    60,    61,    62,    63,    64,
      65,    66,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    67,    68,    69,     0,     0,  -761,     0,     0,
       0,     0,     0,     0,  -761,   257,  -761,     5,     6,     7,
       8,     9,     0,     0,  -761,    10,    11,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,     0,
       0,     0,     0,     0,    20,    21,    22,    23,    24,    25,
      26,     0,     0,    27,     0,     0,     0,     0,     0,    28,
      29,   258,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,    41,    42,    43,    44,    45,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,    51,     0,     0,     0,     0,
       0,     0,    52,     0,     0,    53,    54,     0,    55,    56,
       0,    57,     0,     0,    58,    59,    60,    61,    62,    63,
      64,    65,    66,     0,     0,     0,     0,     0,     0,     0,
       0,   257,     0,     5,     6,     7,     8,     9,     0,     0,
       0,    10,    11,    67,    68,    69,    12,     0,    13,    14,
      15,    16,    17,    18,    19,  -761,     0,  -761,     0,     0,
      20,    21,    22,    23,    24,    25,    26,     0,     0,    27,
       0,     0,     0,     0,     0,    28,    29,   258,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,    41,
      42,    43,    44,    45,    46,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,    51,     0,     0,     0,     0,     0,     0,    52,     0,
       0,    53,    54,     0,    55,    56,     0,    57,     0,     0,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     0,
    -761,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       6,     7,     0,     9,     0,     0,     0,    10,    11,    67,
      68,    69,    12,     0,    13,    14,    15,    16,    17,    18,
      19,  -761,     0,  -761,     0,     0,    20,    21,    22,    23,
      24,    25,    26,     0,     0,   206,     0,     0,     0,     0,
       0,     0,    29,     0,     0,    32,    33,    34,    35,    36,
      37,    38,    39,    40,   207,    41,    42,    43,    44,    45,
      46,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,    51,     0,     0,
       0,     0,     0,     0,   208,     0,     0,   209,    54,     0,
      55,    56,     0,   210,   211,   212,    58,    59,   213,    61,
      62,    63,    64,    65,    66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     6,     7,     0,     9,
       0,     0,     0,    10,    11,    67,   214,    69,    12,     0,
      13,    14,    15,    16,    17,    18,    19,     0,     0,   237,
       0,     0,    20,    21,    22,    23,    24,    25,    26,     0,
       0,    27,     0,     0,     0,     0,     0,     0,    29,     0,
       0,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       0,    41,    42,    43,    44,    45,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,    51,     0,     0,     0,     0,     0,     0,
     208,     0,     0,   209,    54,     0,    55,    56,     0,     0,
       0,     0,    58,    59,    60,    61,    62,    63,    64,    65,
      66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     7,     0,     9,     0,     0,     0,    10,
      11,    67,    68,    69,    12,     0,    13,    14,    15,    16,
      17,    18,    19,   305,     0,   306,     0,     0,    20,    21,
      22,    23,    24,    25,    26,     0,     0,    27,     0,     0,
       0,     0,     0,     0,    29,     0,     0,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,    41,    42,    43,
      44,    45,    46,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,    51,
       0,     0,     0,     0,     0,     0,   208,     0,     0,   209,
      54,     0,    55,    56,     0,     0,     0,     0,    58,    59,
      60,    61,    62,    63,    64,    65,    66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       8,     9,     0,     0,     0,    10,    11,    67,    68,    69,
      12,     0,    13,    14,    15,    16,    17,    18,    19,     0,
       0,   237,     0,     0,    20,    21,    22,    23,    24,    25,
      26,     0,     0,    27,     0,     0,     0,     0,     0,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,    41,    42,    43,    44,    45,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,    51,     0,     0,     0,     0,
       0,     0,    52,     0,     0,    53,    54,     0,    55,    56,
       0,    57,     0,     0,    58,    59,    60,    61,    62,    63,
      64,    65,    66,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     6,     7,     8,     9,     0,     0,
       0,    10,    11,    67,    68,    69,    12,     0,    13,    14,
      15,    16,    17,    18,    19,   503,     0,     0,     0,     0,
      20,    21,    22,    23,    24,    25,    26,     0,     0,    27,
       0,     0,     0,     0,     0,    28,    29,   258,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,     0,    41,
      42,    43,    44,    45,    46,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,    51,     0,     0,     0,     0,     0,     0,    52,     0,
       0,    53,    54,     0,    55,    56,     0,    57,     0,     0,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   503,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,     0,     0,     0,   150,
     151,   152,   395,   396,   397,   398,   157,   158,   159,     0,
       0,     0,     0,     0,   160,   161,   162,   163,   399,   400,
     401,   402,   168,    37,    38,   403,    40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   170,   171,   172,   173,   174,   175,
     176,   177,   178,     0,     0,   179,   180,     0,     0,     0,
       0,   181,   182,   183,   184,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   185,   186,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,     0,   197,
     198,     0,     0,     0,     0,     0,   199,   404,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,     0,     0,     0,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,     0,     0,     0,     0,     0,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   288,
     289,   169,   290,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     170,   171,   172,   173,   174,   175,   176,   177,   178,     0,
       0,   179,   180,     0,     0,     0,     0,   181,   182,   183,
     184,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   185,   186,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,     0,   197,   198,     0,     0,     0,
       0,     0,   199,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,     0,     0,     0,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
       0,     0,     0,     0,     0,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   239,     0,   169,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   170,   171,   172,   173,   174,
     175,   176,   177,   178,     0,     0,   179,   180,     0,     0,
       0,     0,   181,   182,   183,   184,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   185,   186,     0,
       0,    59,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,     0,
     197,   198,     0,     0,     0,     0,     0,   199,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,     0,     0,     0,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,     0,     0,     0,     0,     0,
     160,   161,   162,   163,   164,   165,   166,   167,   168,     0,
       0,   169,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     170,   171,   172,   173,   174,   175,   176,   177,   178,     0,
       0,   179,   180,     0,     0,     0,     0,   181,   182,   183,
     184,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   185,   186,     0,     0,    59,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,     0,   197,   198,     0,     0,     0,
       0,     0,   199,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,     0,     0,     0,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
       0,     0,     0,     0,     0,   160,   161,   162,   163,   164,
     165,   166,   167,   168,     0,     0,   169,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   170,   171,   172,   173,   174,
     175,   176,   177,   178,     0,     0,   179,   180,     0,     0,
       0,     0,   181,   182,   183,   184,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   185,   186,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,     0,
     197,   198,     5,     6,     7,     0,     9,   199,     0,     0,
      10,    11,     0,     0,     0,    12,     0,    13,    14,    15,
     245,   246,    18,    19,     0,     0,     0,     0,     0,    20,
     247,   248,    23,    24,    25,    26,     0,     0,   206,     0,
       0,     0,     0,     0,     0,   277,     0,     0,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     0,    41,    42,
      43,    44,    45,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   278,     0,     0,
     209,    54,     0,    55,    56,     0,     0,     0,     0,    58,
      59,    60,    61,    62,    63,    64,    65,    66,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     7,     0,     9,     0,     0,   279,    10,
      11,     0,     0,     0,    12,   280,    13,    14,    15,   245,
     246,    18,    19,     0,     0,     0,     0,     0,    20,   247,
     248,    23,    24,    25,    26,     0,     0,   206,     0,     0,
       0,     0,     0,     0,   277,     0,     0,    32,    33,    34,
      35,    36,    37,    38,    39,    40,     0,    41,    42,    43,
      44,    45,    46,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   278,     0,     0,   209,
      54,     0,    55,    56,     0,     0,     0,     0,    58,    59,
      60,    61,    62,    63,    64,    65,    66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     8,     9,     0,     0,   279,    10,    11,
       0,     0,     0,    12,   526,    13,    14,    15,    16,    17,
      18,    19,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    27,     0,     0,     0,
       0,     0,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,    41,    42,    43,    44,
      45,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,    51,     0,
       0,     0,     0,     0,     0,    52,     0,     0,    53,    54,
       0,    55,    56,     0,    57,     0,     0,    58,    59,    60,
      61,    62,    63,    64,    65,    66,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     6,     7,     0,
       9,     0,     0,     0,    10,    11,    67,    68,    69,    12,
       0,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,    20,    21,    22,    23,    24,    25,    26,
       0,     0,   206,     0,     0,     0,     0,     0,     0,    29,
       0,     0,    32,    33,    34,    35,    36,    37,    38,    39,
      40,   207,    41,    42,    43,    44,    45,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,    51,     0,     0,     0,     0,     0,
       0,   208,     0,     0,   209,    54,     0,    55,    56,     0,
     210,   211,   212,    58,    59,   213,    61,    62,    63,    64,
      65,    66,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     8,     9,     0,     0,     0,
      10,    11,    67,   214,    69,    12,     0,    13,    14,    15,
      16,    17,    18,    19,     0,     0,     0,     0,     0,    20,
      21,    22,    23,    24,    25,    26,     0,     0,    27,     0,
       0,     0,     0,     0,    28,    29,     0,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     0,    41,    42,
      43,    44,    45,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
      51,     0,     0,     0,     0,     0,     0,    52,     0,     0,
      53,    54,     0,    55,    56,     0,    57,     0,     0,    58,
      59,    60,    61,    62,    63,    64,    65,    66,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    67,    68,
      69,    12,     0,    13,    14,    15,    16,    17,    18,    19,
       0,     0,     0,     0,     0,    20,    21,    22,    23,    24,
      25,    26,     0,     0,   206,     0,     0,     0,     0,     0,
       0,    29,     0,     0,    32,    33,    34,    35,    36,    37,
      38,    39,    40,   207,    41,    42,    43,    44,    45,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,   439,     0,     0,     0,
       0,     0,     0,   208,     0,     0,   209,    54,     0,    55,
      56,     0,   210,   211,   212,    58,    59,   213,    61,    62,
      63,    64,    65,    66,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,     7,     0,     9,     0,
       0,     0,    10,    11,    67,   214,    69,    12,     0,    13,
      14,    15,   245,   246,    18,    19,     0,     0,     0,     0,
       0,    20,   247,   248,    23,    24,    25,    26,     0,     0,
     206,     0,     0,     0,     0,     0,     0,    29,     0,     0,
      32,    33,    34,    35,    36,    37,    38,    39,    40,   207,
      41,    42,    43,    44,    45,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,    51,     0,     0,     0,     0,     0,     0,   208,
       0,     0,   209,    54,     0,    55,    56,     0,   621,   211,
     212,    58,    59,   213,    61,    62,    63,    64,    65,    66,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     0,     9,     0,     0,     0,    10,    11,
      67,   214,    69,    12,     0,    13,    14,    15,   245,   246,
      18,    19,     0,     0,     0,     0,     0,    20,   247,   248,
      23,    24,    25,    26,     0,     0,   206,     0,     0,     0,
       0,     0,     0,    29,     0,     0,    32,    33,    34,    35,
      36,    37,    38,    39,    40,   207,    41,    42,    43,    44,
      45,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,   439,     0,
       0,     0,     0,     0,     0,   208,     0,     0,   209,    54,
       0,    55,    56,     0,   621,   211,   212,    58,    59,   213,
      61,    62,    63,    64,    65,    66,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     6,     7,     0,
       9,     0,     0,     0,    10,    11,    67,   214,    69,    12,
       0,    13,    14,    15,   245,   246,    18,    19,     0,     0,
       0,     0,     0,    20,   247,   248,    23,    24,    25,    26,
       0,     0,   206,     0,     0,     0,     0,     0,     0,    29,
       0,     0,    32,    33,    34,    35,    36,    37,    38,    39,
      40,   207,    41,    42,    43,    44,    45,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,    51,     0,     0,     0,     0,     0,
       0,   208,     0,     0,   209,    54,     0,    55,    56,     0,
     210,   211,     0,    58,    59,   213,    61,    62,    63,    64,
      65,    66,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     0,     9,     0,     0,     0,
      10,    11,    67,   214,    69,    12,     0,    13,    14,    15,
     245,   246,    18,    19,     0,     0,     0,     0,     0,    20,
     247,   248,    23,    24,    25,    26,     0,     0,   206,     0,
       0,     0,     0,     0,     0,    29,     0,     0,    32,    33,
      34,    35,    36,    37,    38,    39,    40,   207,    41,    42,
      43,    44,    45,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
      51,     0,     0,     0,     0,     0,     0,   208,     0,     0,
     209,    54,     0,    55,    56,     0,     0,   211,   212,    58,
      59,   213,    61,    62,    63,    64,    65,    66,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    67,   214,
      69,    12,     0,    13,    14,    15,   245,   246,    18,    19,
       0,     0,     0,     0,     0,    20,   247,   248,    23,    24,
      25,    26,     0,     0,   206,     0,     0,     0,     0,     0,
       0,    29,     0,     0,    32,    33,    34,    35,    36,    37,
      38,    39,    40,   207,    41,    42,    43,    44,    45,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,    51,     0,     0,     0,
       0,     0,     0,   208,     0,     0,   209,    54,     0,    55,
      56,     0,   621,   211,     0,    58,    59,   213,    61,    62,
      63,    64,    65,    66,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,     7,     0,     9,     0,
       0,     0,    10,    11,    67,   214,    69,    12,     0,    13,
      14,    15,   245,   246,    18,    19,     0,     0,     0,     0,
       0,    20,   247,   248,    23,    24,    25,    26,     0,     0,
     206,     0,     0,     0,     0,     0,     0,    29,     0,     0,
      32,    33,    34,    35,    36,    37,    38,    39,    40,   207,
      41,    42,    43,    44,    45,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,    51,     0,     0,     0,     0,     0,     0,   208,
       0,     0,   209,    54,     0,    55,    56,     0,     0,   211,
       0,    58,    59,   213,    61,    62,    63,    64,    65,    66,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     0,     9,     0,     0,     0,    10,    11,
      67,   214,    69,    12,     0,    13,    14,    15,    16,    17,
      18,    19,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,   206,     0,     0,     0,
       0,     0,     0,    29,     0,     0,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,    41,    42,    43,    44,
      45,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,    51,     0,
       0,     0,     0,     0,     0,   208,     0,     0,   209,    54,
       0,    55,    56,     0,   519,     0,     0,    58,    59,    60,
      61,    62,    63,    64,    65,    66,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     6,     7,     0,
       9,     0,     0,     0,    10,    11,    67,   214,    69,    12,
       0,    13,    14,    15,   245,   246,    18,    19,     0,     0,
       0,     0,     0,    20,   247,   248,    23,    24,    25,    26,
       0,     0,   206,     0,     0,     0,     0,     0,     0,    29,
       0,     0,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,    41,    42,    43,    44,    45,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,    51,     0,     0,     0,     0,     0,
       0,   208,     0,     0,   209,    54,     0,    55,    56,     0,
     773,     0,     0,    58,    59,    60,    61,    62,    63,    64,
      65,    66,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     0,     9,     0,     0,     0,
      10,    11,    67,   214,    69,    12,     0,    13,    14,    15,
     245,   246,    18,    19,     0,     0,     0,     0,     0,    20,
     247,   248,    23,    24,    25,    26,     0,     0,   206,     0,
       0,     0,     0,     0,     0,    29,     0,     0,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     0,    41,    42,
      43,    44,    45,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
      51,     0,     0,     0,     0,     0,     0,   208,     0,     0,
     209,    54,     0,    55,    56,     0,   519,     0,     0,    58,
      59,    60,    61,    62,    63,    64,    65,    66,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    67,   214,
      69,    12,     0,    13,    14,    15,   245,   246,    18,    19,
       0,     0,     0,     0,     0,    20,   247,   248,    23,    24,
      25,    26,     0,     0,   206,     0,     0,     0,     0,     0,
       0,    29,     0,     0,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,    41,    42,    43,    44,    45,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,    51,     0,     0,     0,
       0,     0,     0,   208,     0,     0,   209,    54,     0,    55,
      56,     0,   846,     0,     0,    58,    59,    60,    61,    62,
      63,    64,    65,    66,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,     7,     0,     9,     0,
       0,     0,    10,    11,    67,   214,    69,    12,     0,    13,
      14,    15,   245,   246,    18,    19,     0,     0,     0,     0,
       0,    20,   247,   248,    23,    24,    25,    26,     0,     0,
     206,     0,     0,     0,     0,     0,     0,    29,     0,     0,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     0,
      41,    42,    43,    44,    45,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,    51,     0,     0,     0,     0,     0,     0,   208,
       0,     0,   209,    54,     0,    55,    56,     0,  1019,     0,
       0,    58,    59,    60,    61,    62,    63,    64,    65,    66,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     0,     9,     0,     0,     0,    10,    11,
      67,   214,    69,    12,     0,    13,    14,    15,   245,   246,
      18,    19,     0,     0,     0,     0,     0,    20,   247,   248,
      23,    24,    25,    26,     0,     0,   206,     0,     0,     0,
       0,     0,     0,    29,     0,     0,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,    41,    42,    43,    44,
      45,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,    51,     0,
       0,     0,     0,     0,     0,   208,     0,     0,   209,    54,
       0,    55,    56,     0,     0,     0,     0,    58,    59,    60,
      61,    62,    63,    64,    65,    66,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     6,     7,     0,
       9,     0,     0,     0,    10,    11,    67,   214,    69,    12,
       0,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,    20,    21,    22,    23,    24,    25,    26,
       0,     0,   206,     0,     0,     0,     0,     0,     0,    29,
       0,     0,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,    41,    42,    43,    44,    45,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,    51,     0,     0,     0,     0,     0,
       0,   208,     0,     0,   209,    54,     0,    55,    56,     0,
       0,     0,     0,    58,    59,    60,    61,    62,    63,    64,
      65,    66,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     0,     9,     0,     0,     0,
      10,    11,    67,   214,    69,    12,     0,    13,    14,    15,
      16,    17,    18,    19,     0,     0,     0,     0,     0,    20,
      21,    22,    23,    24,    25,    26,     0,     0,    27,     0,
       0,     0,     0,     0,     0,    29,     0,     0,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     0,    41,    42,
      43,    44,    45,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
      51,     0,     0,     0,     0,     0,     0,   208,     0,     0,
     209,    54,     0,    55,    56,     0,     0,     0,     0,    58,
      59,    60,    61,    62,    63,    64,    65,    66,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    67,    68,
      69,    12,     0,    13,    14,    15,   245,   246,    18,    19,
       0,     0,     0,     0,     0,    20,   247,   248,    23,    24,
      25,    26,     0,     0,   206,     0,     0,     0,     0,     0,
       0,   277,     0,     0,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,    41,    42,    43,    44,    45,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   278,     0,     0,   328,    54,     0,    55,
      56,     0,   329,     0,     0,    58,    59,    60,    61,    62,
      63,    64,    65,    66,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     0,     9,     0,     0,     0,    10,    11,
       0,     0,     0,    12,   279,    13,    14,    15,   245,   246,
      18,    19,     0,     0,     0,     0,     0,    20,   247,   248,
      23,    24,    25,    26,     0,     0,   206,     0,     0,     0,
       0,     0,     0,   277,     0,     0,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,    41,    42,    43,    44,
      45,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   376,     0,     0,    53,    54,
       0,    55,    56,     0,    57,     0,     0,    58,    59,    60,
      61,    62,    63,    64,    65,    66,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     0,     9,     0,     0,     0,
      10,    11,     0,     0,     0,    12,   279,    13,    14,    15,
     245,   246,    18,    19,     0,     0,     0,     0,     0,    20,
     247,   248,    23,    24,    25,    26,     0,     0,   206,     0,
       0,     0,     0,     0,     0,   277,     0,     0,    32,    33,
      34,   384,    36,    37,    38,   385,    40,     0,    41,    42,
      43,    44,    45,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   386,     0,     0,     0,   387,     0,     0,
     209,    54,     0,    55,    56,     0,     0,     0,     0,    58,
      59,    60,    61,    62,    63,    64,    65,    66,     0,     0,
       0,     0,     0,     0,     5,     6,     7,     0,     9,     0,
       0,     0,    10,    11,     0,     0,     0,    12,   279,    13,
      14,    15,   245,   246,    18,    19,     0,     0,     0,     0,
       0,    20,   247,   248,    23,    24,    25,    26,     0,     0,
     206,     0,     0,     0,     0,     0,     0,   277,     0,     0,
      32,    33,    34,   384,    36,    37,    38,   385,    40,     0,
      41,    42,    43,    44,    45,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   387,
       0,     0,   209,    54,     0,    55,    56,     0,     0,     0,
       0,    58,    59,    60,    61,    62,    63,    64,    65,    66,
       0,     0,     0,     0,     0,     0,     5,     6,     7,     0,
       9,     0,     0,     0,    10,    11,     0,     0,     0,    12,
     279,    13,    14,    15,   245,   246,    18,    19,     0,     0,
       0,     0,     0,    20,   247,   248,    23,    24,    25,    26,
       0,     0,   206,     0,     0,     0,     0,     0,     0,   277,
       0,     0,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,    41,    42,    43,    44,    45,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   278,     0,     0,   328,    54,     0,    55,    56,     0,
       0,     0,     0,    58,    59,    60,    61,    62,    63,    64,
      65,    66,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,     0,     0,
       0,    12,   279,    13,    14,    15,   245,   246,    18,    19,
       0,     0,     0,     0,     0,    20,   247,   248,    23,    24,
      25,    26,     0,     0,   206,     0,     0,     0,     0,     0,
       0,   277,     0,     0,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,    41,    42,    43,    44,    45,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1009,     0,     0,   209,    54,     0,    55,
      56,     0,     0,     0,     0,    58,    59,    60,    61,    62,
      63,    64,    65,    66,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     0,     9,     0,     0,     0,    10,    11,
       0,     0,     0,    12,   279,    13,    14,    15,   245,   246,
      18,    19,     0,     0,     0,     0,     0,    20,   247,   248,
      23,    24,    25,    26,     0,     0,   206,     0,     0,     0,
       0,     0,     0,   277,     0,     0,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,    41,    42,    43,    44,
      45,    46,    47,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      33,    34,   784,     0,     0,     0,   785,     0,     0,    41,
      42,    43,    44,    45,     0,  1062,     0,     0,   209,    54,
       0,    55,    56,     0,     0,     0,     0,    58,    59,    60,
      61,    62,    63,    64,    65,    66,     0,     0,     0,     0,
     786,   787,     0,     0,     0,     0,     0,     0,   788,     0,
       0,   789,     0,     0,   790,   791,   279,   980,     0,     0,
     792,    59,    60,    61,    62,    63,    64,    65,    66,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   793,     0,     0,    32,    33,    34,   784,   279,
       0,     0,   785,     0,     0,    41,    42,    43,    44,    45,
       0,     0,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    33,
      34,   784,     0,     0,     0,   785,   786,   787,    41,    42,
      43,    44,    45,     0,   788,     0,     0,   789,     0,     0,
     790,   791,     0,  1077,     0,     0,   792,    59,    60,    61,
      62,    63,    64,    65,    66,     0,     0,     0,     0,   786,
     787,     0,     0,     0,     0,     0,     0,   788,   793,     0,
     789,     0,     0,   790,   791,   279,     0,     0,     0,   792,
      59,    60,    61,    62,    63,    64,    65,    66,   564,   565,
       0,     0,   566,     0,     0,     0,     0,     0,     0,     0,
       0,   793,     0,     0,     0,     0,     0,     0,   279,     0,
       0,   170,   171,   172,   173,   174,   175,   176,   177,   178,
       0,     0,   179,   180,     0,     0,     0,     0,   181,   182,
     183,   184,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   185,   186,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,     0,   197,   198,   573,   574,
       0,     0,   575,   199,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   170,   171,   172,   173,   174,   175,   176,   177,   178,
       0,     0,   179,   180,     0,     0,     0,     0,   181,   182,
     183,   184,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   185,   186,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,     0,   197,   198,   625,   565,
       0,     0,   626,   199,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   170,   171,   172,   173,   174,   175,   176,   177,   178,
       0,     0,   179,   180,     0,     0,     0,     0,   181,   182,
     183,   184,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   185,   186,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,     0,   197,   198,   628,   574,
       0,     0,   629,   199,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   170,   171,   172,   173,   174,   175,   176,   177,   178,
       0,     0,   179,   180,     0,     0,     0,     0,   181,   182,
     183,   184,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   185,   186,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,     0,   197,   198,   653,   565,
       0,     0,   654,   199,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   170,   171,   172,   173,   174,   175,   176,   177,   178,
       0,     0,   179,   180,     0,     0,     0,     0,   181,   182,
     183,   184,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   185,   186,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,     0,   197,   198,   656,   574,
       0,     0,   657,   199,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   170,   171,   172,   173,   174,   175,   176,   177,   178,
       0,     0,   179,   180,     0,     0,     0,     0,   181,   182,
     183,   184,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   185,   186,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,     0,   197,   198,   724,   565,
       0,     0,   725,   199,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   170,   171,   172,   173,   174,   175,   176,   177,   178,
       0,     0,   179,   180,     0,     0,     0,     0,   181,   182,
     183,   184,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   185,   186,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,     0,   197,   198,   727,   574,
       0,     0,   728,   199,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   170,   171,   172,   173,   174,   175,   176,   177,   178,
       0,     0,   179,   180,     0,     0,     0,     0,   181,   182,
     183,   184,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   185,   186,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,     0,   197,   198,   733,   565,
       0,     0,   734,   199,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   170,   171,   172,   173,   174,   175,   176,   177,   178,
       0,     0,   179,   180,     0,     0,     0,     0,   181,   182,
     183,   184,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   185,   186,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,     0,   197,   198,   610,   574,
       0,     0,   611,   199,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   170,   171,   172,   173,   174,   175,   176,   177,   178,
       0,     0,   179,   180,     0,     0,     0,     0,   181,   182,
     183,   184,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   185,   186,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,     0,   197,   198,   779,   565,
       0,     0,   780,   199,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   170,   171,   172,   173,   174,   175,   176,   177,   178,
       0,     0,   179,   180,     0,     0,     0,     0,   181,   182,
     183,   184,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   185,   186,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,     0,   197,   198,   782,   574,
       0,     0,   783,   199,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   170,   171,   172,   173,   174,   175,   176,   177,   178,
       0,     0,   179,   180,     0,     0,     0,     0,   181,   182,
     183,   184,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   185,   186,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,     0,   197,   198,  1161,   565,
       0,     0,  1162,   199,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   170,   171,   172,   173,   174,   175,   176,   177,   178,
       0,     0,   179,   180,     0,     0,     0,     0,   181,   182,
     183,   184,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   185,   186,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,     0,   197,   198,  1164,   574,
       0,     0,  1165,   199,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   170,   171,   172,   173,   174,   175,   176,   177,   178,
       0,     0,   179,   180,     0,     0,     0,     0,   181,   182,
     183,   184,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   185,   186,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,     0,   197,   198,  1196,   565,
       0,     0,  1197,   199,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   170,   171,   172,   173,   174,   175,   176,   177,   178,
       0,     0,   179,   180,     0,     0,     0,     0,   181,   182,
     183,   184,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   185,   186,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,     0,   197,   198,   610,   574,
       0,     0,   611,   199,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   170,   171,   172,   173,   174,   175,   176,   177,   178,
       0,     0,   179,   180,     0,     0,     0,     0,   181,   182,
     183,   184,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   185,   186,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,     0,   197,   198,     0,     0,
       0,     0,     0,   199
};

static const yytype_int16 yycheck[] =
{
       2,    59,    53,    89,    60,   369,   102,    22,    91,    92,
       8,    71,    95,     8,   364,   101,    71,    28,   712,    94,
      16,    17,   227,     4,   331,    57,    92,   634,   271,    95,
      28,   719,   275,    28,     2,    95,     4,   897,   898,    13,
     433,    99,   387,    68,   425,   363,    67,   365,    16,    17,
     627,    83,   433,    55,    56,    16,    17,    83,    95,   604,
      53,    59,    25,    78,    96,    97,    98,   331,    57,  1044,
       2,  1072,     4,  1112,    13,   897,   898,   963,   655,   429,
     473,    27,    22,  1110,   860,    53,    54,   690,   858,    57,
     860,   482,   868,   411,    55,   295,   296,    25,   868,   928,
      68,    99,    68,   100,   100,   259,   414,   415,    16,    17,
     428,  1068,   430,   146,     0,    83,    16,    17,  1033,    13,
     153,    26,    54,    91,    92,    66,   153,    95,    96,    97,
      98,    97,   100,    68,   484,   526,   222,  1052,    78,   100,
     458,   870,    25,   786,   787,  1060,    68,    55,    56,   726,
     414,   415,    25,   236,  1033,   238,   153,   213,   209,   736,
    1151,    96,    97,   126,  1155,   251,    25,   485,  1054,    25,
      37,    38,   146,  1052,   328,    97,  1215,   151,   119,   153,
      56,    25,   958,   146,   146,   148,   149,   732,   958,  1216,
     153,   153,   100,   244,  1023,  1024,  1018,   283,   946,   947,
     100,   261,  1177,  1204,   781,   151,   261,   153,   259,   148,
     145,    13,   151,   790,   153,    13,    13,  1208,   146,   221,
     148,   969,   970,   971,   261,   227,    13,   310,   311,   312,
     313,   233,   315,   316,   230,  1192,   232,   233,   143,   444,
     242,   209,   592,   636,   310,   311,   312,   313,   280,   892,
     893,   858,   602,   634,   280,   636,   601,   151,   279,   153,
      25,    13,   230,   146,   232,   233,   259,  1182,   236,   230,
     238,   232,   233,   146,   242,   593,   244,   328,   881,   882,
      27,  1110,    29,  1112,  1199,   603,   153,   146,   371,   257,
     146,   259,   683,   379,   897,   898,    25,   329,   498,    13,
     500,   326,   146,   386,  1033,   371,   331,   852,   248,   249,
     242,  1171,   280,   373,   859,  1044,    52,   698,   895,   370,
      29,   372,   230,  1052,   232,   257,    13,  1021,   309,   874,
     230,  1060,   232,  1021,    13,   328,   373,    25,   688,  1068,
     329,   309,   310,   311,   312,   313,   314,   315,   316,   151,
     148,   153,   109,   151,   151,   153,   153,    25,   326,    52,
     328,   329,   364,   331,   151,   326,   153,   365,   364,   687,
     331,   689,   695,  1121,    25,    25,   133,   309,   983,   143,
     703,   146,   314,   148,   692,   693,  1215,  1216,   991,   414,
     415,   699,   700,    26,  1142,   884,   364,   126,   366,   151,
     707,   153,   370,   371,   372,   982,    66,   650,   897,   898,
     146,    37,    38,   411,   123,  1018,    68,   146,   386,   624,
     149,   685,    99,   143,   153,   365,  1033,   429,   692,   693,
    1007,  1008,   430,   429,   152,   699,   700,   151,    97,   153,
     442,   452,   444,   788,    96,    97,   414,   415,  1177,   126,
     482,   537,    99,   146,   452,   100,   482,   452,   146,   119,
     458,   429,   662,  1192,   151,    26,   153,   667,   152,   146,
    1075,   126,   151,   866,   153,   126,   126,   100,   146,   126,
      82,    83,   484,    68,   848,   866,   145,   485,   484,   148,
     430,   146,    68,   145,   526,   146,   146,   465,   149,   149,
     526,   146,   153,   153,    66,    67,   150,    68,  1053,   153,
     143,   819,    97,    77,   482,   148,   484,   425,   458,   594,
      96,    97,   605,   146,   414,   415,   586,   129,   130,  1018,
     277,   582,   148,   584,    99,    96,    97,   153,    68,   903,
     152,   431,   432,   870,   908,   485,  1151,  1036,   753,   894,
    1155,  1245,    99,    66,   569,   819,   639,    66,   526,   121,
     122,   126,   470,   578,    68,   152,    96,    97,  1171,   459,
     572,   858,   136,   137,   138,  1064,   578,    28,   580,   126,
      34,   146,   143,   870,   145,  1130,  1163,   148,    14,    15,
     592,    15,    96,    97,  1083,   593,   592,   612,    52,    68,
     602,    25,  1207,  1208,    68,   603,   602,   618,   121,   122,
     612,    68,   121,   122,   582,   145,   584,    99,   148,   651,
     618,   126,   624,   618,   592,   651,    68,    96,    97,   569,
      68,   146,    96,    97,   602,    58,   604,   605,   578,   152,
      97,   145,   644,   152,   126,   741,   126,     2,   731,     4,
      99,   683,    99,   593,    77,    97,   112,   683,    96,    97,
     685,    16,    17,   603,   146,   731,    66,   692,   693,    99,
     730,   639,   612,    68,   699,   700,   145,   126,   729,   126,
      68,   145,   740,   651,    99,   108,   688,    99,   146,   112,
      56,   689,   688,   146,    68,   153,    26,   146,    53,    54,
      68,    96,    97,   643,   644,   707,   708,   145,   710,    97,
     712,   126,   680,    68,   126,   683,   684,   685,    66,   119,
     688,   121,   122,    97,   692,   693,   634,    68,   148,    97,
      68,   699,   700,  1060,   146,  1099,    91,    92,    68,   126,
      95,  1068,   740,  1070,  1094,   100,   707,     9,   680,   689,
     145,   753,   684,    15,   837,    96,    97,  1044,    96,    97,
    1047,   729,    99,   731,   732,    99,    96,    97,   770,    68,
     772,   837,    58,   121,   122,   144,   124,  1095,    34,   100,
     831,  1068,    66,  1070,   153,   836,   146,    99,    68,   126,
     698,    77,   126,   853,   819,    99,    52,    96,    97,    68,
      68,   146,   692,   693,   145,    68,   553,   145,   870,   699,
     700,    68,   146,   143,   126,   145,    68,    97,   148,   148,
     871,    99,   108,   109,   571,   827,    99,    96,    97,    97,
      88,    89,    99,    96,    97,   119,    77,   121,   122,    96,
      97,    40,    41,    66,    96,    97,   145,   133,   126,   518,
     148,   819,    99,   126,   209,   906,   148,   747,   748,   126,
     750,   751,   149,   831,   915,  1192,    66,  1194,   836,   837,
     902,   126,  1199,   146,  1201,   230,   145,   232,   233,   126,
     627,   236,   145,   238,   852,    99,    99,   242,   145,   244,
    1177,   859,  1179,   145,    56,   955,   119,  1184,   121,   122,
     150,   124,   257,   871,   259,  1192,   874,  1194,   655,   144,
     579,  1238,   126,   126,  1201,   146,   585,    54,   587,   119,
      77,   121,   122,    26,   124,  1011,    77,    64,    65,   819,
     106,   987,    52,    52,   902,   967,    56,    56,   906,   149,
     146,    56,   944,   153,   946,   947,  1233,   915,  1004,   151,
     151,  1238,   153,    25,   309,   310,   311,   312,   313,   314,
     315,   316,   130,    77,  1015,    68,  1017,   969,   970,   971,
      15,   326,    17,   328,   864,   149,   331,    66,   144,   726,
      94,    95,   146,   134,   135,   136,   137,   138,   146,   736,
     870,   144,   146,    96,    97,   144,   146,    66,  1060,   967,
      10,   146,  1064,   146,   146,  1056,  1068,    44,  1070,   364,
      44,   366,   146,   126,  1016,   370,   371,   372,     8,  1021,
     134,   135,   136,   137,   138,    13,    66,  1059,    25,   152,
     119,   386,   121,   122,   781,    17,   152,   144,   870,   150,
     143,   146,   145,   790,   791,   148,   128,  1015,    15,  1017,
     119,   720,   121,   122,   723,    59,    60,    61,    62,   414,
     415,    54,    55,   690,    57,   858,   146,   860,   737,   148,
     131,    64,    65,   146,   429,   868,    52,   870,   100,   119,
    1131,   121,   122,   131,   236,  1053,  1169,  1170,  1056,   100,
     146,  1059,  1094,   144,  1096,    52,  1098,  1095,  1094,   126,
     146,    52,   146,  1169,  1170,    40,    41,    42,    43,    44,
     465,   146,   264,   146,   146,     2,   268,     4,    52,  1121,
     146,   126,   131,   870,    56,   146,  1094,   146,   146,   484,
    1192,    52,  1194,    54,    55,    56,    57,  1199,   146,  1201,
    1142,    52,     9,    54,    55,    56,    57,   146,   895,    52,
     151,    54,    55,    56,    57,  1095,  1036,   146,   131,   786,
     787,  1041,  1130,  1131,    56,   958,    53,    54,   146,   838,
      57,   146,   841,    52,   146,   844,  1238,   146,   146,     2,
    1060,     4,   851,   146,  1064,   854,   146,   146,  1068,   120,
    1070,  1242,   144,    16,    17,   149,    83,   146,   101,   146,
     146,  1169,  1170,    52,  1036,    54,    55,    56,    57,    96,
      97,    98,    99,   146,   242,   461,   963,   146,   146,   146,
     146,   465,    96,   148,   148,    98,   146,   582,  1060,   584,
      53,    54,  1064,   146,    87,   982,  1068,   592,  1070,    77,
    1033,   988,   612,  1245,  1098,    68,   708,   602,   917,   604,
     605,  1044,   101,  1023,   881,   882,    94,    95,   107,  1052,
    1007,  1008,  1110,   870,   891,   892,   893,  1060,    91,    92,
     897,   898,    95,   772,  1242,  1068,   887,   100,  1204,   742,
     514,   973,   974,   435,   639,   954,   324,  1245,   440,  1083,
     891,   443,  1018,  1083,   446,   133,   134,   135,   136,   137,
     138,  1083,   105,   889,  1096,  1016,   500,  1054,    99,   957,
     462,  1036,  1192,  1064,  1194,   467,  1060,   988,    -1,  1199,
      -1,  1201,   209,    -1,    -1,   680,    -1,    -1,    -1,   684,
     685,    -1,    -1,   688,    -1,    -1,    -1,   692,   693,    -1,
      -1,    -1,    -1,    -1,   699,   700,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   242,   983,   244,  1238,    -1,
    1192,   949,  1194,   951,   991,   690,    -1,  1199,    -1,  1201,
     257,    -1,   259,   525,   729,    -1,   731,   732,    -1,    -1,
      -1,    -1,    -1,    -1,  1177,    -1,   209,    -1,    -1,    -1,
      -1,  1018,    -1,   280,    -1,    -1,    -1,    -1,    -1,  1192,
      -1,  1148,    -1,    -1,    -1,    -1,  1238,   230,    -1,   232,
     233,    -1,    -1,   236,    -1,   238,  1163,    -1,    -1,   242,
      -1,   244,   309,    -1,    -1,    -1,    -1,   314,    -1,    -1,
      -1,    -1,    -1,    -1,   257,    -1,   259,    -1,    -1,    -1,
      -1,   328,   329,    -1,    -1,  1137,  1138,    -1,  1075,    -1,
      -1,  1143,    -1,  1145,  1146,    -1,    -1,    -1,    -1,  1128,
      -1,   786,   787,    -1,   819,    -1,    -1,    56,    -1,    52,
      -1,    54,    55,    56,    57,    58,   831,    -1,    -1,   366,
      -1,   836,   837,   370,    -1,   372,   309,   310,   311,   312,
     313,   314,   315,   316,    77,    -1,    -1,   852,    -1,    -1,
      -1,    -1,    -1,   326,   859,   328,    -1,    -1,   331,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   871,    -1,   101,   874,
    1189,    -1,    -1,    -1,  1151,   108,   109,    -1,  1155,  1117,
    1118,  1223,  1224,  1225,  1226,  1123,    -1,  1125,    -1,  1127,
      -1,   364,    -1,   366,  1171,    -1,    -1,   370,   371,   372,
     133,   906,  1244,    -1,    -1,    -1,   881,   882,    -1,    -1,
     915,    -1,    -1,   386,    -1,    -1,   891,   892,   893,    -1,
      -1,    -1,   897,   898,    -1,    -1,    -1,    -1,   465,    -1,
    1207,  1208,    -1,    -1,    -1,    -1,   738,    -1,    -1,    -1,
      -1,   414,   415,    -1,    -1,   482,    -1,    -1,    -1,    -1,
     752,    -1,   754,    -1,    -1,    -1,   429,    -1,    52,    -1,
      54,    55,    56,    57,    58,    -1,    25,    -1,   207,    -1,
      -1,   210,   211,   212,    -1,    -1,    -1,    -1,    -1,  1217,
    1218,  1219,  1220,    77,    -1,    -1,    -1,    -1,    -1,   526,
      -1,    -1,   465,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1243,    -1,   101,   983,    -1,
    1015,   484,  1017,   107,   108,   109,   991,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    -1,    -1,    -1,    -1,    94,    95,    -1,    -1,   133,
      -1,    -1,   136,  1018,    -1,   582,    -1,   584,  1053,    -1,
      -1,  1056,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,     2,    -1,     4,    -1,    -1,    -1,   604,   127,    -1,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   326,    -1,  1094,
      -1,    -1,   331,    -1,   896,    -1,    -1,    -1,    -1,    -1,
    1075,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   582,
      -1,   584,    53,    54,   651,    -1,    57,    -1,    -1,   592,
      -1,    -1,    -1,    -1,    -1,  1130,  1131,    -1,    -1,   602,
      -1,   604,   605,   935,   936,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,   680,    -1,    -1,   683,   684,    -1,    -1,
      -1,    -1,    -1,   690,    -1,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,  1169,  1170,   639,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1151,   979,    -1,    -1,
    1155,    -1,    -1,    -1,    -1,   424,   425,    -1,    -1,    -1,
      -1,    -1,   729,    -1,   433,   732,  1171,    -1,    -1,    -1,
      -1,    -1,    -1,  1005,  1006,    -1,    -1,   680,    -1,    -1,
      -1,   684,   685,    -1,    -1,   688,    -1,    -1,    -1,   692,
     693,    -1,    -1,    -1,    -1,  1027,   699,   700,    -1,    -1,
      -1,   470,  1207,  1208,   473,    -1,    52,  1242,    54,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,   786,
     787,    -1,    -1,    -1,    -1,    -1,   729,    -1,   731,   732,
       2,    77,     4,    -1,    -1,    -1,    -1,    -1,   209,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     519,    -1,    -1,    -1,    -1,   101,    94,    95,    -1,    -1,
      -1,   107,   108,   109,   831,    -1,    -1,    -1,    -1,   836,
      -1,   242,    -1,   244,    -1,    -1,  1108,    -1,    -1,    -1,
      -1,    53,    54,  1115,    -1,   852,   257,   133,   259,     2,
     136,     4,   859,   131,   132,   133,   134,   135,   136,   137,
     138,    -1,   148,    -1,   871,    -1,    -1,   874,    -1,   280,
      -1,    -1,    -1,    -1,   881,   882,   819,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   891,   892,   893,    -1,   831,    -1,
     897,   898,    -1,   836,   837,   902,    -1,    -1,   309,   906,
      53,    54,    -1,   314,    57,    -1,    -1,    -1,   915,   852,
     619,    -1,   621,    -1,    -1,    -1,   859,   328,   329,    -1,
     331,    -1,    -1,    -1,    -1,   634,    -1,   636,   871,    -1,
      83,   874,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     2,
      -1,     4,    -1,    96,    97,    98,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   366,    -1,    -1,    -1,   370,
     967,   372,    -1,   906,    -1,    -1,    -1,    -1,    -1,    -1,
     679,    -1,   915,    -1,    -1,    -1,   983,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   991,    -1,    -1,    -1,    -1,   698,
      53,    54,    -1,    -1,    -1,    -1,    -1,   209,   707,    -1,
      -1,    -1,    -1,   414,   415,    -1,    -1,    -1,  1015,    -1,
    1017,  1018,    -1,   722,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   690,
     242,    -1,   244,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   257,  1053,   259,    -1,  1056,
      -1,    -1,  1059,   690,   465,    -1,   209,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   773,    -1,    -1,    -1,  1075,    -1,
      -1,   482,  1015,    -1,  1017,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,
      -1,   244,    -1,   690,    -1,    -1,    -1,   309,    -1,    -1,
      -1,    -1,   314,    -1,   257,    -1,   259,    -1,    -1,    -1,
    1053,    -1,    -1,  1056,    -1,   526,   328,    -1,    -1,   331,
      -1,    -1,    -1,  1130,  1131,   786,   787,   280,    52,    -1,
      54,    55,    56,    57,    58,    -1,    -1,   846,    -1,    -1,
      -1,    -1,    -1,    -1,  1151,    -1,   209,    -1,  1155,   786,
     787,  1094,    -1,    77,   366,    -1,   309,   866,   370,    -1,
     372,   314,    -1,    -1,  1171,    -1,    -1,    91,    -1,    -1,
      -1,   582,    -1,   584,    -1,   328,   329,   101,    -1,   242,
      -1,   244,    -1,   107,   108,   109,    -1,  1130,  1131,   786,
     787,    -1,    -1,   604,   257,    -1,   259,    -1,    -1,    -1,
    1207,  1208,   414,   415,    -1,   914,    -1,    -1,    -1,   133,
      -1,    -1,   136,   366,    -1,    -1,    -1,   370,    -1,   372,
     881,   882,    -1,    -1,    -1,    -1,  1169,  1170,    -1,    -1,
     891,   892,   893,   942,    -1,  1242,   897,   898,    -1,    -1,
     651,    -1,    -1,    -1,   881,   882,   309,    -1,    -1,   660,
      -1,   314,    -1,   465,   891,   892,   893,    -1,    -1,    -1,
     897,   898,    -1,    -1,    -1,   328,    -1,    -1,   331,   680,
      -1,    -1,   683,   684,   685,    -1,    -1,    -1,    -1,    -1,
      -1,   692,   693,    -1,   881,   882,    -1,    -1,   699,   700,
      -1,    -1,    -1,    -1,   891,   892,   893,    -1,    -1,  1242,
     897,   898,    -1,   366,    -1,    -1,    -1,   370,    -1,   372,
    1019,    -1,   465,    -1,    -1,    -1,    -1,    -1,   729,    -1,
      -1,   732,   983,  1032,    -1,    -1,    -1,    -1,    -1,   482,
     991,    -1,    -1,    -1,    52,    -1,    54,    55,    56,    57,
      58,    -1,    -1,    -1,    -1,    -1,   983,    -1,    -1,    -1,
      -1,   414,   415,    -1,   991,    -1,    -1,  1018,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     582,    -1,   584,   526,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1018,    -1,   101,    -1,    -1,   983,    -1,    -1,   107,
     108,   109,   604,    -1,   991,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   465,    -1,    -1,    -1,    -1,    -1,   819,    -1,
      -1,    -1,    -1,    -1,  1075,   133,    -1,    -1,   136,    -1,
     831,  1018,    -1,    -1,    -1,   836,    -1,    -1,    -1,   582,
      -1,   584,    -1,    -1,    -1,    -1,    -1,    -1,  1075,    -1,
      -1,   852,    -1,    -1,    -1,    -1,    -1,    -1,   859,    -1,
      -1,   604,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     871,    -1,    -1,   874,    -1,    -1,    -1,    -1,   680,    -1,
      -1,    -1,   684,   685,    -1,    -1,    -1,    -1,  1075,    -1,
     692,   693,    -1,    -1,    -1,    -1,    -1,   699,   700,    -1,
    1151,   902,    -1,    -1,  1155,   906,    -1,    -1,   651,    -1,
      -1,    -1,    -1,    -1,   915,    -1,   690,    -1,    -1,    -1,
    1171,    -1,    -1,    -1,  1151,    -1,    -1,   729,  1155,   582,
     732,   584,    -1,    -1,    -1,    -1,    -1,   680,    -1,    -1,
     683,   684,    -1,    -1,  1171,   690,    -1,    -1,    -1,    -1,
      -1,   604,    -1,    -1,    -1,    -1,  1207,  1208,    -1,    -1,
      -1,    -1,    -1,    -1,  1151,    -1,   967,    -1,  1155,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1207,  1208,    -1,    -1,  1171,    -1,   729,    -1,    -1,   732,
     690,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   786,   787,  1015,    -1,  1017,   819,    -1,    -1,
    1207,  1208,    -1,    -1,    -1,    -1,    -1,   680,    -1,   831,
      -1,   684,   685,    -1,   836,    -1,    -1,    -1,    -1,   692,
     693,   786,   787,    -1,    -1,    -1,   699,   700,    -1,    -1,
     852,    -1,  1053,    -1,    -1,  1056,    -1,   859,  1059,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   871,
      -1,    -1,   874,    -1,    -1,    -1,   729,    -1,    -1,   732,
      -1,    -1,    -1,    -1,    -1,    -1,   786,   787,   831,    -1,
      -1,    -1,    -1,   836,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   906,    -1,    -1,   881,   882,   852,
      -1,    -1,    -1,   915,    -1,    -1,   859,   891,   892,   893,
      -1,    -1,    -1,   897,   898,    -1,    -1,    -1,   871,  1130,
    1131,   874,    -1,    -1,    -1,    -1,   881,   882,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   891,   892,   893,    -1,
      -1,    -1,   897,   898,    -1,    -1,    -1,    -1,    -1,   902,
      -1,    -1,    -1,   906,    -1,    -1,   819,    -1,    -1,    -1,
      -1,    -1,   915,    -1,    -1,    -1,    -1,    -1,   831,    -1,
      -1,   881,   882,   836,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   891,   892,   893,    -1,    16,    17,   897,   898,   852,
      -1,    -1,    -1,    -1,    -1,    -1,   859,    -1,    -1,   983,
      -1,    -1,    -1,  1015,    -1,  1017,    -1,   991,   871,    -1,
      -1,   874,    -1,    -1,   967,    -1,    -1,    48,    49,    50,
      51,    -1,    -1,    -1,    55,    56,    -1,    -1,   983,    -1,
      -1,  1242,    -1,    -1,  1018,    -1,   991,    68,    69,   902,
      -1,  1053,    -1,   906,  1056,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   915,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,  1015,  1018,  1017,    -1,    -1,    -1,    -1,   100,
      -1,    -1,    -1,   983,    49,    50,    51,    -1,    -1,    -1,
      -1,   991,    -1,    -1,    59,    60,    61,    62,    63,    -1,
      -1,  1075,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1053,    -1,    -1,  1056,    -1,    -1,  1059,    -1,  1018,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1130,  1131,
    1075,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,   111,   112,   113,   114,
     115,   116,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1015,    -1,  1017,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,  1075,    -1,  1151,    -1,    -1,
      -1,  1155,    -1,    -1,    -1,    -1,   207,  1130,  1131,   210,
     211,   212,    -1,   214,    -1,    -1,    -1,  1171,    -1,    -1,
    1053,    -1,    -1,  1056,    -1,    -1,  1151,    -1,    -1,   230,
    1155,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1171,    -1,    -1,    -1,
      -1,    -1,    -1,  1207,  1208,    -1,    -1,    -1,    -1,    -1,
    1242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1151,    -1,    -1,    -1,  1155,    -1,    -1,    -1,    -1,
      -1,    -1,  1207,  1208,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1171,    -1,    -1,    -1,    -1,    -1,  1130,  1131,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1242,
      -1,    -1,    -1,    -1,    -1,   326,    -1,  1207,  1208,    -1,
     331,    -1,   333,   334,   335,   336,   337,    -1,    -1,   340,
     341,   342,   343,   344,   345,   346,   347,   348,    -1,    -1,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
      -1,    -1,    -1,   364,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    94,    95,    -1,    -1,    -1,  1242,
      -1,    -1,    -1,   414,   415,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   423,   424,   425,    -1,    -1,    -1,   429,    -1,
     431,   432,   433,    -1,    -1,    -1,    -1,   127,   439,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,    -1,
      -1,    -1,    -1,   454,    -1,    -1,    -1,    -1,   459,    -1,
      -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,   470,
      -1,    -1,   473,    -1,    -1,    -1,    -1,    -1,    -1,     0,
      -1,    -1,    -1,   484,    -1,    -1,    -1,     8,     9,    10,
      -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,    -1,
      -1,   502,    -1,    -1,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,   519,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    -1,
      -1,    -1,    -1,    94,    95,    96,    97,    -1,    99,   100,
      -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
      -1,   592,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,
      -1,   602,   123,    -1,    -1,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   619,    -1,
     621,    -1,   143,   144,   145,   146,    -1,    -1,   149,   150,
     151,    -1,   153,   634,    -1,   636,    -1,    -1,    -1,     0,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,     9,    10,
      -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,   679,    40,
      41,    42,    43,    44,   685,   686,    -1,   688,    -1,    -1,
      -1,   692,   693,    -1,    -1,    -1,    -1,   698,   699,   700,
      -1,    -1,    -1,    -1,    -1,    -1,   707,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   722,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   747,   748,    -1,   750,
     751,    33,    34,    35,    36,    -1,    -1,    -1,    -1,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    -1,   773,    -1,    56,    -1,    58,    59,    60,    61,
      62,    63,   143,   144,    -1,    -1,    -1,   148,   149,    -1,
     151,    -1,   153,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,
      -1,   812,    -1,    -1,    -1,    -1,    98,    -1,   819,   101,
      -1,    -1,   104,   105,    -1,   107,   108,    -1,   110,   111,
     112,   113,   114,   115,   116,   117,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   846,    -1,    -1,    -1,    -1,
     132,    -1,    -1,    -1,    -1,     0,     1,   139,     3,     4,
       5,     6,     7,   864,    -1,   866,    11,    12,    -1,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,   914,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   942,    -1,    -1,    -1,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,   101,   102,    -1,   104,
     105,    -1,   107,    -1,    -1,   110,   111,   112,   113,   114,
     115,   116,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,   141,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   151,    -1,   153,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1019,     0,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,     9,    10,
      -1,  1032,    13,    14,    15,    -1,    17,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    25,    -1,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    68,    -1,    -1,
      -1,    94,    95,  1094,    -1,    -1,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    -1,
      -1,    -1,    -1,    94,    95,    96,    97,    -1,    99,   100,
      -1,    -1,    -1,    -1,   127,   106,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,    -1,    -1,    -1,   120,
      -1,    -1,   123,   146,    -1,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,    -1,
      -1,    -1,    -1,   144,   145,   146,     0,    -1,   149,   150,
     151,    -1,   153,    -1,     8,     9,    10,    -1,    -1,    13,
      14,    15,    -1,    17,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    25,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    -1,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    68,    -1,    -1,    -1,    94,    95,
      -1,    -1,    -1,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    -1,    -1,    -1,
      94,    95,    96,    97,    -1,    99,   100,    -1,    -1,    -1,
      -1,   127,   106,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,    -1,    -1,    -1,   120,    -1,    -1,   123,
      -1,    -1,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,    -1,
     144,   145,   146,     0,    -1,   149,   150,   151,    -1,   153,
      -1,     8,     9,    10,    -1,    -1,    13,    14,    15,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    68,    -1,    -1,    -1,    94,    95,    -1,    -1,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    -1,    -1,    -1,    -1,    94,    95,    96,
      97,    -1,    -1,   100,    -1,    -1,    -1,    -1,   127,   106,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      -1,    -1,    -1,   120,    -1,    -1,   123,    -1,    -1,    -1,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,    -1,    -1,    -1,    -1,   143,   144,   145,   146,
       0,    -1,   149,   150,   151,    -1,   153,    -1,     8,     9,
      10,    -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,
      40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    68,    -1,
      -1,    -1,    94,    95,    -1,    -1,    -1,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    94,    95,    96,    97,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,   106,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,    -1,    -1,    -1,
     120,    -1,    -1,   123,    -1,    -1,    -1,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,    -1,
      -1,    -1,    -1,   143,   144,   145,   146,     0,    -1,   149,
     150,   151,    -1,   153,    -1,     8,     9,    10,    -1,    -1,
      13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    -1,    40,    41,    42,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
      -1,    86,    87,    -1,    -1,    68,    -1,    -1,    -1,    94,
      95,    -1,    -1,    -1,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    -1,    -1,    -1,
      -1,    94,    95,    96,    97,    -1,    99,   100,    -1,    -1,
      -1,    -1,    -1,   106,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,    -1,    -1,    -1,   120,    -1,    -1,
     123,    -1,    -1,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,
      -1,   144,   145,   146,     0,    -1,   149,   150,   151,    -1,
     153,    -1,     8,     9,    10,    -1,    -1,    13,    14,    15,
      -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    -1,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      78,    79,    80,    81,    82,    83,    -1,    -1,    86,    87,
      -1,    -1,    68,    -1,    -1,    -1,    94,    95,    -1,    -1,
      -1,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    -1,    -1,    -1,    -1,    94,    95,
      96,    97,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
     106,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,    -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,
      -1,   127,    -1,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,    -1,    -1,    -1,    -1,   143,   144,   145,
     146,     0,   148,   149,   150,   151,    -1,   153,    -1,     8,
       9,    10,    -1,    -1,    13,    14,    15,    -1,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      -1,    40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,    68,
      -1,    -1,    -1,    94,    95,    -1,    -1,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    -1,    -1,    -1,    -1,    94,    95,    96,    97,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,   106,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,    -1,
      -1,   120,    -1,    -1,   123,    -1,    -1,    -1,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      -1,    -1,    -1,    -1,    -1,   144,   145,   146,     0,    -1,
     149,   150,   151,    -1,   153,    -1,     8,     9,    10,    -1,
      -1,    13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    -1,    -1,
      -1,    -1,    94,    95,    96,    97,    -1,    -1,   100,    -1,
      -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,
      -1,    -1,    -1,    -1,    -1,   127,    -1,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,    -1,    -1,    -1,
      -1,   143,   144,   145,   146,     0,   148,   149,   150,   151,
      -1,   153,    -1,     8,     9,    10,    -1,    -1,    13,    14,
      15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    -1,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    -1,    -1,    -1,    -1,    94,
      95,    96,    97,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,
      -1,    -1,   127,    -1,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,    -1,    -1,    -1,    -1,    -1,   144,
     145,   146,     0,   148,   149,   150,   151,    -1,   153,    -1,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    -1,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    -1,    -1,    -1,    -1,    94,    95,    96,    97,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,   126,   127,
      -1,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,    -1,    -1,    -1,    -1,   143,   144,   145,   146,     0,
      -1,   149,    -1,   151,    -1,   153,    -1,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    -1,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    -1,
      -1,    -1,    -1,    94,    95,    96,    97,    -1,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,
      -1,    -1,    -1,    -1,    -1,   126,   127,    -1,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,    -1,
      -1,    -1,   143,   144,   145,   146,     0,    -1,   149,    -1,
     151,    -1,   153,    -1,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    -1,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    -1,    -1,    -1,
      94,    95,    96,    97,    -1,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,
      -1,    -1,   126,   127,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,    -1,    -1,    -1,    -1,
     144,   145,   146,     0,    -1,   149,    -1,   151,    -1,   153,
      -1,     8,     9,    10,    -1,    -1,    -1,    14,    15,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    -1,    -1,    -1,    -1,    94,    95,    96,
      97,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,   126,
     127,    -1,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,    -1,    -1,    -1,    -1,    -1,   144,   145,   146,
      -1,    -1,   149,    -1,   151,     1,   153,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    -1,    -1,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,   101,   102,    -1,   104,   105,
      -1,   107,    -1,    -1,   110,   111,   112,   113,   114,   115,
     116,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,   141,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   151,     1,   153,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    -1,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,   101,   102,    -1,   104,
     105,    -1,   107,    -1,    -1,   110,   111,   112,   113,   114,
     115,   116,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,   141,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   151,     1,   153,     3,
       4,     5,     6,     7,    -1,    -1,    10,    11,    12,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    59,    60,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,   101,   102,    -1,
     104,   105,    -1,   107,    -1,    -1,   110,   111,   112,   113,
     114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,     1,   153,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      -1,    -1,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,   101,   102,
      -1,   104,   105,    -1,   107,    -1,    -1,   110,   111,   112,
     113,   114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,     1,
     153,     3,     4,     5,     6,     7,    -1,    -1,    10,    11,
      12,    -1,    -1,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,   101,
     102,    -1,   104,   105,    -1,   107,    -1,    -1,   110,   111,
     112,   113,   114,   115,   116,   117,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,   139,   140,   141,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,   151,
      -1,   153,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,   101,   102,    -1,   104,   105,
      -1,   107,    -1,    -1,   110,   111,   112,   113,   114,   115,
     116,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    11,    12,   139,   140,   141,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,   151,    -1,   153,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,   101,   102,    -1,   104,   105,    -1,   107,    -1,    -1,
     110,   111,   112,   113,   114,   115,   116,   117,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,
      -1,   151,     1,   153,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    11,    12,    -1,    -1,    -1,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,   101,   102,    -1,   104,   105,    -1,   107,    -1,
      -1,   110,   111,   112,   113,   114,   115,   116,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     149,    -1,   151,     1,   153,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    11,    12,    -1,    -1,    -1,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,   101,   102,    -1,   104,   105,    -1,   107,
      -1,    -1,   110,   111,   112,   113,   114,   115,   116,   117,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,   141,    -1,    -1,   144,    -1,    -1,    -1,
      -1,    -1,    -1,   151,     1,   153,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,   101,   102,    -1,   104,   105,    -1,
     107,    -1,    -1,   110,   111,   112,   113,   114,   115,   116,
     117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,   141,    -1,    -1,   144,    -1,    -1,
      -1,    -1,    -1,    -1,   151,     1,   153,     3,     4,     5,
       6,     7,    -1,    -1,    10,    11,    12,    -1,    -1,    -1,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,   101,   102,    -1,   104,   105,
      -1,   107,    -1,    -1,   110,   111,   112,   113,   114,   115,
     116,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    11,    12,   139,   140,   141,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,   151,    -1,   153,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,   101,   102,    -1,   104,   105,    -1,   107,    -1,    -1,
     110,   111,   112,   113,   114,   115,   116,   117,   118,    -1,
     120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,   139,
     140,   141,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,   151,    -1,   153,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,   101,   102,    -1,
     104,   105,    -1,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    11,    12,   139,   140,   141,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,   153,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,   101,   102,    -1,   104,   105,    -1,    -1,
      -1,    -1,   110,   111,   112,   113,   114,   115,   116,   117,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,
      12,   139,   140,   141,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,   151,    -1,   153,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,   101,
     102,    -1,   104,   105,    -1,    -1,    -1,    -1,   110,   111,
     112,   113,   114,   115,   116,   117,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    11,    12,   139,   140,   141,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,   153,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,   101,   102,    -1,   104,   105,
      -1,   107,    -1,    -1,   110,   111,   112,   113,   114,   115,
     116,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    11,    12,   139,   140,   141,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,   151,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,   101,   102,    -1,   104,   105,    -1,   107,    -1,    -1,
     110,   111,   112,   113,   114,   115,   116,   117,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   151,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,   140,
     141,    -1,    -1,    -1,    -1,    -1,   147,   148,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      -1,    86,    87,    -1,    -1,    -1,    -1,    92,    93,    94,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   107,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,    -1,   140,   141,    -1,    -1,    -1,
      -1,    -1,   147,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,   108,    -1,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,    -1,
     140,   141,    -1,    -1,    -1,    -1,    -1,   147,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      -1,    86,    87,    -1,    -1,    -1,    -1,    92,    93,    94,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   107,   108,    -1,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,    -1,   140,   141,    -1,    -1,    -1,
      -1,    -1,   147,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    -1,    -1,    86,    87,    -1,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,   108,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,    -1,
     140,   141,     3,     4,     5,    -1,     7,   147,    -1,    -1,
      11,    12,    -1,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
     101,   102,    -1,   104,   105,    -1,    -1,    -1,    -1,   110,
     111,   112,   113,   114,   115,   116,   117,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,   139,    11,
      12,    -1,    -1,    -1,    16,   146,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,   101,
     102,    -1,   104,   105,    -1,    -1,    -1,    -1,   110,   111,
     112,   113,   114,   115,   116,   117,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,   139,    11,    12,
      -1,    -1,    -1,    16,   146,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,   101,   102,
      -1,   104,   105,    -1,   107,    -1,    -1,   110,   111,   112,
     113,   114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    11,    12,   139,   140,   141,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,   101,   102,    -1,   104,   105,    -1,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      11,    12,   139,   140,   141,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
     101,   102,    -1,   104,   105,    -1,   107,    -1,    -1,   110,
     111,   112,   113,   114,   115,   116,   117,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   139,   140,
     141,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,   101,   102,    -1,   104,
     105,    -1,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,   139,   140,   141,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,   101,   102,    -1,   104,   105,    -1,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,
     139,   140,   141,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,   101,   102,
      -1,   104,   105,    -1,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    11,    12,   139,   140,   141,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,   101,   102,    -1,   104,   105,    -1,
     107,   108,    -1,   110,   111,   112,   113,   114,   115,   116,
     117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      11,    12,   139,   140,   141,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
     101,   102,    -1,   104,   105,    -1,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   139,   140,
     141,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,   101,   102,    -1,   104,
     105,    -1,   107,   108,    -1,   110,   111,   112,   113,   114,
     115,   116,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,   139,   140,   141,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,   101,   102,    -1,   104,   105,    -1,    -1,   108,
      -1,   110,   111,   112,   113,   114,   115,   116,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,
     139,   140,   141,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,   101,   102,
      -1,   104,   105,    -1,   107,    -1,    -1,   110,   111,   112,
     113,   114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    11,    12,   139,   140,   141,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,   101,   102,    -1,   104,   105,    -1,
     107,    -1,    -1,   110,   111,   112,   113,   114,   115,   116,
     117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      11,    12,   139,   140,   141,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
     101,   102,    -1,   104,   105,    -1,   107,    -1,    -1,   110,
     111,   112,   113,   114,   115,   116,   117,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   139,   140,
     141,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,   101,   102,    -1,   104,
     105,    -1,   107,    -1,    -1,   110,   111,   112,   113,   114,
     115,   116,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,   139,   140,   141,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,   101,   102,    -1,   104,   105,    -1,   107,    -1,
      -1,   110,   111,   112,   113,   114,   115,   116,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,
     139,   140,   141,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,   101,   102,
      -1,   104,   105,    -1,    -1,    -1,    -1,   110,   111,   112,
     113,   114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    11,    12,   139,   140,   141,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,   101,   102,    -1,   104,   105,    -1,
      -1,    -1,    -1,   110,   111,   112,   113,   114,   115,   116,
     117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      11,    12,   139,   140,   141,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
     101,   102,    -1,   104,   105,    -1,    -1,    -1,    -1,   110,
     111,   112,   113,   114,   115,   116,   117,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   139,   140,
     141,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,   101,   102,    -1,   104,
     105,    -1,   107,    -1,    -1,   110,   111,   112,   113,   114,
     115,   116,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,
      -1,    -1,    -1,    16,   139,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,   101,   102,
      -1,   104,   105,    -1,   107,    -1,    -1,   110,   111,   112,
     113,   114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      11,    12,    -1,    -1,    -1,    16,   139,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    -1,    -1,    -1,    98,    -1,    -1,
     101,   102,    -1,   104,   105,    -1,    -1,    -1,    -1,   110,
     111,   112,   113,   114,   115,   116,   117,   118,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,    -1,    -1,    -1,    16,   139,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,   101,   102,    -1,   104,   105,    -1,    -1,    -1,
      -1,   110,   111,   112,   113,   114,   115,   116,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,    16,
     139,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,   101,   102,    -1,   104,   105,    -1,
      -1,    -1,    -1,   110,   111,   112,   113,   114,   115,   116,
     117,   118,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,
      -1,    16,   139,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,   101,   102,    -1,   104,
     105,    -1,    -1,    -1,    -1,   110,   111,   112,   113,   114,
     115,   116,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,
      -1,    -1,    -1,    16,   139,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    60,    61,    62,
      63,    64,    65,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    -1,    -1,    -1,    56,    -1,    -1,    59,
      60,    61,    62,    63,    -1,    98,    -1,    -1,   101,   102,
      -1,   104,   105,    -1,    -1,    -1,    -1,   110,   111,   112,
     113,   114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,   101,    -1,    -1,   104,   105,   139,   107,    -1,    -1,
     110,   111,   112,   113,   114,   115,   116,   117,   118,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   132,    -1,    -1,    49,    50,    51,    52,   139,
      -1,    -1,    56,    -1,    -1,    59,    60,    61,    62,    63,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      51,    52,    -1,    -1,    -1,    56,    90,    91,    59,    60,
      61,    62,    63,    -1,    98,    -1,    -1,   101,    -1,    -1,
     104,   105,    -1,   107,    -1,    -1,   110,   111,   112,   113,
     114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    98,   132,    -1,
     101,    -1,    -1,   104,   105,   139,    -1,    -1,    -1,   110,
     111,   112,   113,   114,   115,   116,   117,   118,    52,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,   140,   141,    52,    53,
      -1,    -1,    56,   147,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,   140,   141,    52,    53,
      -1,    -1,    56,   147,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,   140,   141,    52,    53,
      -1,    -1,    56,   147,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,   140,   141,    52,    53,
      -1,    -1,    56,   147,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,   140,   141,    52,    53,
      -1,    -1,    56,   147,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,   140,   141,    52,    53,
      -1,    -1,    56,   147,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,   140,   141,    52,    53,
      -1,    -1,    56,   147,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,   140,   141,    52,    53,
      -1,    -1,    56,   147,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,   140,   141,    52,    53,
      -1,    -1,    56,   147,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,   140,   141,    52,    53,
      -1,    -1,    56,   147,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,   140,   141,    52,    53,
      -1,    -1,    56,   147,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,   140,   141,    52,    53,
      -1,    -1,    56,   147,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,   140,   141,    52,    53,
      -1,    -1,    56,   147,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,   140,   141,    52,    53,
      -1,    -1,    56,   147,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,   140,   141,    52,    53,
      -1,    -1,    56,   147,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,   140,   141,    -1,    -1,
      -1,    -1,    -1,   147
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   155,   156,     0,     1,     3,     4,     5,     6,     7,
      11,    12,    16,    18,    19,    20,    21,    22,    23,    24,
      30,    31,    32,    33,    34,    35,    36,    39,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    59,    60,    61,    62,    63,    64,    65,    75,    76,
      90,    91,    98,   101,   102,   104,   105,   107,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   139,   140,   141,
     157,   158,   159,   167,   169,   171,   179,   180,   182,   183,
     184,   186,   187,   188,   190,   191,   200,   203,   218,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     252,   279,   280,   333,   334,   335,   336,   337,   338,   339,
     342,   344,   345,   359,   360,   362,   363,   364,   365,   366,
     367,   368,   369,   405,   419,   159,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    56,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    86,
      87,    92,    93,    94,    95,   107,   108,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   140,   141,   147,
     194,   195,   196,   198,   199,   359,    39,    58,    98,   101,
     107,   108,   109,   112,   140,   183,   191,   200,   204,   210,
     213,   215,   233,   365,   366,   368,   369,   403,   404,   210,
     148,   211,   212,   148,   207,   211,   148,   153,   412,    54,
     195,   412,   143,   160,   143,    21,    22,    31,    32,   182,
     200,   233,   252,   200,   200,   200,    56,     1,    47,   101,
     163,   164,   165,   167,   185,   186,   419,   167,   220,   205,
     215,   403,   419,   204,   402,   403,   419,    46,    98,   139,
     146,   190,   218,   233,   365,   366,   369,   223,    54,    55,
      57,   194,   348,   361,   348,   349,   350,   152,   152,   152,
     152,   364,   179,   200,   200,   151,   153,   411,   417,   418,
      40,    41,    42,    43,    44,    37,    38,    26,   143,   207,
     211,   244,   281,    28,   245,   278,   126,   146,   101,   107,
     187,   126,    25,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    94,    95,   127,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   202,
     202,    68,    96,    97,   145,   409,   219,   171,   175,   175,
     176,   177,   176,   175,   411,   418,    98,   184,   191,   233,
     257,   365,   366,   369,    52,    56,    94,    98,   192,   193,
     233,   365,   366,   369,   193,    33,    34,    35,    36,    49,
      50,    51,    52,    56,   148,   194,   367,   400,   210,    97,
     409,   410,   281,   336,    99,    99,   146,   204,    56,   204,
     204,   204,   348,   126,   100,   146,   214,   419,    97,   145,
     409,    99,    99,   146,   214,   210,   412,   413,   210,    91,
     209,   210,   215,   377,   403,   419,   171,   413,   171,    54,
      64,    65,   168,   148,   201,   157,   163,    97,   409,    99,
     167,   166,   185,   149,   411,   418,   413,   221,   413,   150,
     146,   153,   416,   146,   416,   144,   416,   412,    56,   364,
     187,   189,   146,    97,   145,   409,   270,   271,    66,   119,
     121,   122,   351,   119,   119,   351,    67,   351,   340,   346,
     343,   347,    77,   151,   159,   175,   175,   175,   175,   167,
     171,   171,   282,   283,   106,   181,   286,   287,   286,   107,
     179,   204,   215,   216,   217,   185,   146,   190,   146,   169,
     170,   179,   191,   200,   204,   206,   217,   233,   369,   172,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,    52,    53,    56,   198,   207,   406,
     407,   209,   215,    52,    53,    56,   198,   207,   406,   161,
     163,    13,   253,   417,   253,   163,   175,   163,   411,   225,
      56,    97,   145,   409,    25,   171,    52,    56,   192,   130,
     370,    97,   145,   409,   228,   401,   229,    68,    97,   408,
      52,    56,   406,   170,   200,   206,   170,   206,   197,   124,
     204,   107,   204,   213,   403,    52,    56,   209,    52,    56,
     404,   413,   149,   413,   146,   413,   146,   413,   195,   222,
     200,   144,   144,   406,   406,   206,   160,   413,   165,   413,
     403,   146,   189,    52,    56,   209,    52,    56,   272,   353,
     352,   119,   341,   351,    66,   119,   119,   341,    66,   119,
     200,   144,   284,   282,    10,   251,   288,   251,   204,   146,
      44,   413,   189,   146,    44,   126,    44,    97,   145,   409,
     173,   412,    99,    99,   207,   211,   412,   414,   146,    99,
      99,   207,   208,   211,   419,   251,     8,   246,   329,   419,
     163,    13,   163,   251,    27,   254,   417,   251,    25,   224,
     293,    17,   248,   291,    52,    56,   209,    52,    56,   176,
     227,   371,   226,    52,    56,   192,   209,   161,   171,   230,
     231,   208,   211,   195,   204,   204,   214,    99,    99,   414,
      99,    99,   377,   403,   171,   416,   187,   414,   273,   354,
      54,    55,    57,   358,   369,   152,   351,   152,   152,   152,
     285,   144,   289,   107,   204,   167,   189,   167,   200,    52,
      56,   209,    52,    56,    52,    56,    90,    91,    98,   101,
     104,   105,   110,   132,   303,   304,   305,   308,   323,   324,
     326,   327,   328,   333,   334,   337,   338,   339,   342,   344,
     345,   366,   128,   170,   206,   170,   206,   181,   150,    99,
     170,   206,   170,   206,   181,   204,   217,   330,   419,     9,
      15,   247,   249,   332,   419,    14,   249,   250,   255,   256,
     419,   256,   178,   294,   291,   251,   107,   204,   290,   251,
     414,   163,   417,   175,   161,   414,   251,   413,   148,   372,
     373,   194,   281,   278,    99,   413,   146,   413,   274,   355,
     131,   265,   266,   419,   265,   204,   414,   324,   324,    56,
     192,   311,   309,   414,   310,   412,   415,   325,    52,   100,
     174,   131,    88,    89,    97,   145,   148,   306,   307,   200,
     170,   206,   100,   331,   419,   163,   162,   163,   175,   251,
     251,   295,   251,   204,   146,   253,   251,   161,   417,   251,
      52,    54,    55,    56,    57,    58,    77,    91,   101,   107,
     108,   109,   133,   136,   374,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   387,   388,   389,   390,   391,   394,
     395,   396,   397,   398,   161,   376,   382,   232,   148,   276,
     376,   356,   262,   264,   267,   380,   382,   383,   385,   386,
     389,   390,   392,   393,   396,   398,   412,   163,   161,   303,
     107,   303,   312,   313,   314,   316,    58,   112,   317,   318,
     319,   320,   321,   322,   388,   144,   270,   326,   308,   324,
     324,   192,   414,   413,   112,   312,   317,   312,   317,    98,
     191,   233,   365,   366,   369,   253,   163,   253,   296,   107,
     204,   163,   251,   101,   107,   258,   259,   260,   261,   379,
     413,   413,   126,   146,   375,   204,   146,   399,   419,    34,
      52,   146,   399,   399,   146,   375,    52,   146,   375,    52,
     251,   417,   146,   372,   376,   275,   357,   267,   131,   126,
     146,   263,    98,   233,   146,   399,   399,   399,   146,   263,
     146,   263,   151,   413,    52,   146,   414,   107,   303,   316,
     146,   348,   415,   146,   303,    34,    52,   348,   413,   413,
     414,   414,    56,    97,   145,   409,   163,   332,   163,   301,
     302,   303,   314,   317,   204,   256,   291,   292,   260,   379,
     146,   413,   146,   204,   374,   377,   381,   394,   396,   384,
     388,   390,   398,   382,   391,   396,   380,   382,   161,   267,
      29,   123,   277,   163,   131,   233,   262,   393,   396,    56,
      97,   385,   390,   382,   392,   396,   382,    52,   268,   269,
     378,   146,   315,   316,    52,   146,   146,   124,   319,   321,
     322,    52,    56,   209,    52,    56,   329,   255,   253,    40,
      41,   146,   413,   258,   261,   259,   413,   146,   375,   146,
     375,   399,   146,   375,   146,   375,   375,   251,   149,   161,
     163,   120,   146,   263,   146,   263,    52,    56,   399,   146,
     263,   146,   263,   263,   146,   412,   315,   146,   146,   315,
     414,   297,   175,   175,   312,   146,   146,   382,   396,   382,
     382,   251,   144,   382,   396,   382,   382,   269,   316,   315,
     298,   259,   375,   146,   375,   375,   375,   263,   146,   263,
     263,   263,   299,   382,   382,   163,   375,   263,   256,   293,
     300
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (&yylloc, p, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
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
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc, p)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (p, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location, p); \
      YYFPRINTF (p, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, struct parser_params *p)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, p)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    struct parser_params *p;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
  YYUSE (p);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      case 52: /* "\"local variable or method\"" */
#line 970 "ripper.y"
	{
#ifndef RIPPER
    rb_parser_printf(p, "%"PRIsVALUE, rb_id2str((yyvaluep->val)));
#else
    rb_parser_printf(p, "%"PRIsVALUE, RNODE((yyvaluep->val))->nd_rval);
#endif
};
#line 5689 "ripper.c"
	break;
      case 53: /* "\"method\"" */
#line 970 "ripper.y"
	{
#ifndef RIPPER
    rb_parser_printf(p, "%"PRIsVALUE, rb_id2str((yyvaluep->val)));
#else
    rb_parser_printf(p, "%"PRIsVALUE, RNODE((yyvaluep->val))->nd_rval);
#endif
};
#line 5700 "ripper.c"
	break;
      case 54: /* "\"global variable\"" */
#line 970 "ripper.y"
	{
#ifndef RIPPER
    rb_parser_printf(p, "%"PRIsVALUE, rb_id2str((yyvaluep->val)));
#else
    rb_parser_printf(p, "%"PRIsVALUE, RNODE((yyvaluep->val))->nd_rval);
#endif
};
#line 5711 "ripper.c"
	break;
      case 55: /* "\"instance variable\"" */
#line 970 "ripper.y"
	{
#ifndef RIPPER
    rb_parser_printf(p, "%"PRIsVALUE, rb_id2str((yyvaluep->val)));
#else
    rb_parser_printf(p, "%"PRIsVALUE, RNODE((yyvaluep->val))->nd_rval);
#endif
};
#line 5722 "ripper.c"
	break;
      case 56: /* "\"constant\"" */
#line 970 "ripper.y"
	{
#ifndef RIPPER
    rb_parser_printf(p, "%"PRIsVALUE, rb_id2str((yyvaluep->val)));
#else
    rb_parser_printf(p, "%"PRIsVALUE, RNODE((yyvaluep->val))->nd_rval);
#endif
};
#line 5733 "ripper.c"
	break;
      case 57: /* "\"class variable\"" */
#line 970 "ripper.y"
	{
#ifndef RIPPER
    rb_parser_printf(p, "%"PRIsVALUE, rb_id2str((yyvaluep->val)));
#else
    rb_parser_printf(p, "%"PRIsVALUE, RNODE((yyvaluep->val))->nd_rval);
#endif
};
#line 5744 "ripper.c"
	break;
      case 58: /* "tLABEL" */
#line 970 "ripper.y"
	{
#ifndef RIPPER
    rb_parser_printf(p, "%"PRIsVALUE, rb_id2str((yyvaluep->val)));
#else
    rb_parser_printf(p, "%"PRIsVALUE, RNODE((yyvaluep->val))->nd_rval);
#endif
};
#line 5755 "ripper.c"
	break;
      case 59: /* "\"integer literal\"" */
#line 977 "ripper.y"
	{
#ifndef RIPPER
    rb_parser_printf(p, "%+"PRIsVALUE, (yyvaluep->val)->nd_lit);
#else
    rb_parser_printf(p, "%+"PRIsVALUE, get_value((yyvaluep->val)));
#endif
};
#line 5766 "ripper.c"
	break;
      case 60: /* "\"float literal\"" */
#line 977 "ripper.y"
	{
#ifndef RIPPER
    rb_parser_printf(p, "%+"PRIsVALUE, (yyvaluep->val)->nd_lit);
#else
    rb_parser_printf(p, "%+"PRIsVALUE, get_value((yyvaluep->val)));
#endif
};
#line 5777 "ripper.c"
	break;
      case 61: /* "\"rational literal\"" */
#line 977 "ripper.y"
	{
#ifndef RIPPER
    rb_parser_printf(p, "%+"PRIsVALUE, (yyvaluep->val)->nd_lit);
#else
    rb_parser_printf(p, "%+"PRIsVALUE, get_value((yyvaluep->val)));
#endif
};
#line 5788 "ripper.c"
	break;
      case 62: /* "\"imaginary literal\"" */
#line 977 "ripper.y"
	{
#ifndef RIPPER
    rb_parser_printf(p, "%+"PRIsVALUE, (yyvaluep->val)->nd_lit);
#else
    rb_parser_printf(p, "%+"PRIsVALUE, get_value((yyvaluep->val)));
#endif
};
#line 5799 "ripper.c"
	break;
      case 63: /* "\"char literal\"" */
#line 977 "ripper.y"
	{
#ifndef RIPPER
    rb_parser_printf(p, "%+"PRIsVALUE, (yyvaluep->val)->nd_lit);
#else
    rb_parser_printf(p, "%+"PRIsVALUE, get_value((yyvaluep->val)));
#endif
};
#line 5810 "ripper.c"
	break;
      case 64: /* "\"numbered reference\"" */
#line 984 "ripper.y"
	{
#ifndef RIPPER
    rb_parser_printf(p, "$%ld", (yyvaluep->val)->nd_nth);
#else
    rb_parser_printf(p, "%"PRIsVALUE, (yyvaluep->val));
#endif
};
#line 5821 "ripper.c"
	break;
      case 65: /* "\"back reference\"" */
#line 991 "ripper.y"
	{
#ifndef RIPPER
    rb_parser_printf(p, "$%c", (int)(yyvaluep->val)->nd_nth);
#else
    rb_parser_printf(p, "%"PRIsVALUE, (yyvaluep->val));
#endif
};
#line 5832 "ripper.c"
	break;
      case 66: /* "\"literal content\"" */
#line 977 "ripper.y"
	{
#ifndef RIPPER
    rb_parser_printf(p, "%+"PRIsVALUE, (yyvaluep->val)->nd_lit);
#else
    rb_parser_printf(p, "%+"PRIsVALUE, get_value((yyvaluep->val)));
#endif
};
#line 5843 "ripper.c"
	break;
      case 99: /* "\"operator-assignment\"" */
#line 970 "ripper.y"
	{
#ifndef RIPPER
    rb_parser_printf(p, "%"PRIsVALUE, rb_id2str((yyvaluep->val)));
#else
    rb_parser_printf(p, "%"PRIsVALUE, RNODE((yyvaluep->val))->nd_rval);
#endif
};
#line 5854 "ripper.c"
	break;
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, struct parser_params *p)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp, p)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    struct parser_params *p;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (p, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (p, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (p, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, p);
  YYFPRINTF (p, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
ruby_parser_yy_stack_print (yytype_int16 *bottom, yytype_int16 *top, struct parser_params *p)
#else
static void
ruby_parser_yy_stack_print (bottom, top, p)
    yytype_int16 *bottom;
    yytype_int16 *top;
    struct parser_params *p;
#endif
#define yy_stack_print(b, t) ruby_parser_yy_stack_print(b, t, p)
{
  YYFPRINTF (p, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (p, " %d", *bottom);
  YYFPRINTF (p, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, struct parser_params *p)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule, p)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
    struct parser_params *p;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (p, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (p, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       , p);
      YYFPRINTF (p, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule, p); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
#ifndef yydebug
int yydebug;
#endif
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (struct parser_params *p, char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
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

      yyarg[0] = yytname[yytype];
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
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
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
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, struct parser_params *p)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp, p)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
    struct parser_params *p;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (p);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (struct parser_params *p);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (struct parser_params *p)
#else
int
yyparse (p)
    struct parser_params *p;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((p, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;
#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif


  /* User initialization code.  */
#line 1002 "ripper.y"
{
    RUBY_SET_YYLLOC_OF_NONE(yylloc);
}
/* Line 1078 of yacc.c.  */
#line 6373 "ripper.c"
  yylsp[0] = yylloc;
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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
	YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((p, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((p, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((p, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((p, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 1204 "ripper.y"
    {
			SET_LEX_STATE(EXPR_BEG);
			local_push(p, ifndef_ripper(1)+0);
		    ;}
    break;

  case 3:
#line 1209 "ripper.y"
    {
#if 0
			if ((yyvsp[(2) - (2)].val) && !compile_for_eval) {
			    NODE *node = (yyvsp[(2) - (2)].val);
			    /* last expression should not be void */
			    if (nd_type(node) == NODE_BLOCK) {
				while (node->nd_next) {
				    node = node->nd_next;
				}
				node = node->nd_head;
			    }
			    node = remove_begin(node);
			    void_expr(p, node);
			}
			p->eval_tree = NEW_SCOPE(0, block_append(p, p->eval_tree, (yyvsp[(2) - (2)].val)), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(program,v1);p->result=v2;}
			local_pop(p);
		    ;}
    break;

  case 4:
#line 1231 "ripper.y"
    {
			(yyval.val) = void_stmts(p, (yyvsp[(1) - (2)].val));
		    ;}
    break;

  case 5:
#line 1237 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_BEGIN(0, &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5;v1=dispatch0(stmts_new);v2=dispatch0(void_stmt);v3=v1;v4=v2;v5=dispatch2(stmts_add,v3,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 6:
#line 1244 "ripper.y"
    {
#if 0
			(yyval.val) = newline_node((yyvsp[(1) - (1)].val));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(stmts_new);v2=v1;v3=(yyvsp[(1) - (1)].val);v4=dispatch2(stmts_add,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 7:
#line 1251 "ripper.y"
    {
#if 0
			(yyval.val) = block_append(p, (yyvsp[(1) - (3)].val), newline_node((yyvsp[(3) - (3)].val)));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(stmts_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 8:
#line 1258 "ripper.y"
    {
			(yyval.val) = remove_begin((yyvsp[(2) - (2)].val));
		    ;}
    break;

  case 10:
#line 1265 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (2)].val);
		    ;}
    break;

  case 11:
#line 1271 "ripper.y"
    {
#if 0
			p->eval_tree_begin = block_append(p, p->eval_tree_begin,
							  NEW_BEGIN((yyvsp[(2) - (3)].val), &(yyloc)));
			(yyval.val) = NEW_BEGIN(0, &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (3)].val);v2=dispatch1(BEGIN,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 12:
#line 1283 "ripper.y"
    {if (!(yyvsp[(2) - (3)].val)) {yyerror1(&(yylsp[(3) - (3)]), "else without rescue is useless");};}
    break;

  case 13:
#line 1286 "ripper.y"
    {
#if 0
			(yyval.val) = new_bodystmt(p, (yyvsp[(1) - (6)].val), (yyvsp[(2) - (6)].val), (yyvsp[(5) - (6)].val), (yyvsp[(6) - (6)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5;v1=escape_Qundef((yyvsp[(1) - (6)].val));v2=escape_Qundef((yyvsp[(2) - (6)].val));v3=escape_Qundef((yyvsp[(5) - (6)].val));v4=escape_Qundef((yyvsp[(6) - (6)].val));v5=dispatch4(bodystmt,v1,v2,v3,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 14:
#line 1295 "ripper.y"
    {
#if 0
			(yyval.val) = new_bodystmt(p, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val), 0, (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5;v1=escape_Qundef((yyvsp[(1) - (3)].val));v2=escape_Qundef((yyvsp[(2) - (3)].val));v3=Qnil;v4=escape_Qundef((yyvsp[(3) - (3)].val));v5=dispatch4(bodystmt,v1,v2,v3,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 15:
#line 1304 "ripper.y"
    {
			(yyval.val) = void_stmts(p, (yyvsp[(1) - (2)].val));
		    ;}
    break;

  case 16:
#line 1310 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_BEGIN(0, &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5;v1=dispatch0(stmts_new);v2=dispatch0(void_stmt);v3=v1;v4=v2;v5=dispatch2(stmts_add,v3,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 17:
#line 1317 "ripper.y"
    {
#if 0
			(yyval.val) = newline_node((yyvsp[(1) - (1)].val));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(stmts_new);v2=v1;v3=(yyvsp[(1) - (1)].val);v4=dispatch2(stmts_add,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 18:
#line 1324 "ripper.y"
    {
#if 0
			(yyval.val) = block_append(p, (yyvsp[(1) - (3)].val), newline_node((yyvsp[(3) - (3)].val)));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(stmts_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 19:
#line 1331 "ripper.y"
    {
			(yyval.val) = remove_begin((yyvsp[(2) - (2)].val));
		    ;}
    break;

  case 20:
#line 1337 "ripper.y"
    {
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 21:
#line 1341 "ripper.y"
    {
			yyerror1(&(yylsp[(1) - (1)]), "BEGIN is permitted only at toplevel");
		    ;}
    break;

  case 22:
#line 1345 "ripper.y"
    {
			(yyval.val) = (yyvsp[(3) - (3)].val);
		    ;}
    break;

  case 23:
#line 1350 "ripper.y"
    {SET_LEX_STATE(EXPR_FNAME|EXPR_FITEM);;}
    break;

  case 24:
#line 1351 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_ALIAS((yyvsp[(2) - (4)].val), (yyvsp[(4) - (4)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(2) - (4)].val);v2=(yyvsp[(4) - (4)].val);v3=dispatch2(alias,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 25:
#line 1358 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_VALIAS((yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(2) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(var_alias,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 26:
#line 1365 "ripper.y"
    {
#if 0
			char buf[2];
			buf[0] = '$';
			buf[1] = (char)(yyvsp[(3) - (3)].val)->nd_nth;
			(yyval.val) = NEW_VALIAS((yyvsp[(2) - (3)].val), rb_intern2(buf, 2), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(2) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(var_alias,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 27:
#line 1375 "ripper.y"
    {
#if 0
			yyerror1(&(yylsp[(3) - (3)]), "can't make alias for the number variables");
			(yyval.val) = NEW_BEGIN(0, &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5;v1=(yyvsp[(2) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(var_alias,v1,v2);v4=v3;v5=dispatch1(alias_error,v4);(yyval.val)=v5;}ripper_error(p);
		    ;}
    break;

  case 28:
#line 1383 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (2)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(undef,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 29:
#line 1390 "ripper.y"
    {
#if 0
			(yyval.val) = new_if(p, (yyvsp[(3) - (3)].val), remove_begin((yyvsp[(1) - (3)].val)), 0, &(yyloc));
			fixpos((yyval.val), (yyvsp[(3) - (3)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(3) - (3)].val);v2=(yyvsp[(1) - (3)].val);v3=dispatch2(if_mod,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 30:
#line 1398 "ripper.y"
    {
#if 0
			(yyval.val) = new_unless(p, (yyvsp[(3) - (3)].val), remove_begin((yyvsp[(1) - (3)].val)), 0, &(yyloc));
			fixpos((yyval.val), (yyvsp[(3) - (3)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(3) - (3)].val);v2=(yyvsp[(1) - (3)].val);v3=dispatch2(unless_mod,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 31:
#line 1406 "ripper.y"
    {
#if 0
			if ((yyvsp[(1) - (3)].val) && nd_type((yyvsp[(1) - (3)].val)) == NODE_BEGIN) {
			    (yyval.val) = NEW_WHILE(cond(p, (yyvsp[(3) - (3)].val), &(yylsp[(3) - (3)])), (yyvsp[(1) - (3)].val)->nd_body, 0, &(yyloc));
			}
			else {
			    (yyval.val) = NEW_WHILE(cond(p, (yyvsp[(3) - (3)].val), &(yylsp[(3) - (3)])), (yyvsp[(1) - (3)].val), 1, &(yyloc));
			}
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(3) - (3)].val);v2=(yyvsp[(1) - (3)].val);v3=dispatch2(while_mod,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 32:
#line 1418 "ripper.y"
    {
#if 0
			if ((yyvsp[(1) - (3)].val) && nd_type((yyvsp[(1) - (3)].val)) == NODE_BEGIN) {
			    (yyval.val) = NEW_UNTIL(cond(p, (yyvsp[(3) - (3)].val), &(yylsp[(3) - (3)])), (yyvsp[(1) - (3)].val)->nd_body, 0, &(yyloc));
			}
			else {
			    (yyval.val) = NEW_UNTIL(cond(p, (yyvsp[(3) - (3)].val), &(yylsp[(3) - (3)])), (yyvsp[(1) - (3)].val), 1, &(yyloc));
			}
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(3) - (3)].val);v2=(yyvsp[(1) - (3)].val);v3=dispatch2(until_mod,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 33:
#line 1430 "ripper.y"
    {
#if 0
			NODE *resq;
			YYLTYPE loc = code_loc_gen(&(yylsp[(2) - (3)]), &(yylsp[(3) - (3)]));
			resq = NEW_RESBODY(0, remove_begin((yyvsp[(3) - (3)].val)), 0, &loc);
			(yyval.val) = NEW_RESCUE(remove_begin((yyvsp[(1) - (3)].val)), resq, 0, &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(rescue_mod,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 34:
#line 1440 "ripper.y"
    {
			if (p->in_def) {
			    rb_warn0("END in method; use at_exit");
			}
#if 0
			{
			    NODE *scope = NEW_NODE(
				NODE_SCOPE, 0 /* tbl */, (yyvsp[(3) - (4)].val) /* body */, 0 /* args */, &(yyloc));
			    (yyval.val) = NEW_POSTEXE(scope, &(yyloc));
			}
#endif
			{VALUE v1,v2;v1=(yyvsp[(3) - (4)].val);v2=dispatch1(END,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 36:
#line 1455 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(3) - (3)].val));
			(yyval.val) = node_assign(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(massign,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 37:
#line 1463 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(3) - (3)].val));
			(yyval.val) = node_assign(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(assign,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 38:
#line 1471 "ripper.y"
    {
#if 0
                        YYLTYPE loc = code_loc_gen(&(yylsp[(4) - (5)]), &(yylsp[(5) - (5)]));
                        value_expr((yyvsp[(3) - (5)].val));
			(yyval.val) = node_assign(p, (yyvsp[(1) - (5)].val), NEW_RESCUE((yyvsp[(3) - (5)].val), NEW_RESBODY(0, remove_begin((yyvsp[(5) - (5)].val)), 0, &loc), 0, &(yyloc)), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6;v1=(yyvsp[(3) - (5)].val);v2=(yyvsp[(5) - (5)].val);v3=dispatch2(rescue_mod,v1,v2);v4=(yyvsp[(1) - (5)].val);v5=v3;v6=dispatch2(massign,v4,v5);(yyval.val)=v6;}
                    ;}
    break;

  case 39:
#line 1480 "ripper.y"
    {
#if 0
			(yyval.val) = node_assign(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(massign,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 41:
#line 1490 "ripper.y"
    {
#if 0
			(yyval.val) = node_assign(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(assign,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 42:
#line 1497 "ripper.y"
    {
#if 0
			(yyval.val) = new_op_assign(p, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(2) - (3)].val);v3=(yyvsp[(3) - (3)].val);v4=dispatch3(opassign,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 43:
#line 1504 "ripper.y"
    {
#if 0
			(yyval.val) = new_ary_op_assign(p, (yyvsp[(1) - (6)].val), (yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val), (yyvsp[(6) - (6)].val), &(yylsp[(3) - (6)]), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=(yyvsp[(1) - (6)].val);v2=escape_Qundef((yyvsp[(3) - (6)].val));v3=dispatch2(aref_field,v1,v2);v4=v3;v5=(yyvsp[(5) - (6)].val);v6=(yyvsp[(6) - (6)].val);v7=dispatch3(opassign,v4,v5,v6);(yyval.val)=v7;}

		    ;}
    break;

  case 44:
#line 1512 "ripper.y"
    {
#if 0
			(yyval.val) = new_attr_op_assign(p, (yyvsp[(1) - (5)].val), (yyvsp[(2) - (5)].val), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8;v1=(yyvsp[(1) - (5)].val);v2=(yyvsp[(2) - (5)].val);v3=(yyvsp[(3) - (5)].val);v4=dispatch3(field,v1,v2,v3);v5=v4;v6=(yyvsp[(4) - (5)].val);v7=(yyvsp[(5) - (5)].val);v8=dispatch3(opassign,v5,v6,v7);(yyval.val)=v8;}
		    ;}
    break;

  case 45:
#line 1519 "ripper.y"
    {
#if 0
			(yyval.val) = new_attr_op_assign(p, (yyvsp[(1) - (5)].val), (yyvsp[(2) - (5)].val), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8;v1=(yyvsp[(1) - (5)].val);v2=(yyvsp[(2) - (5)].val);v3=(yyvsp[(3) - (5)].val);v4=dispatch3(field,v1,v2,v3);v5=v4;v6=(yyvsp[(4) - (5)].val);v7=(yyvsp[(5) - (5)].val);v8=dispatch3(opassign,v5,v6,v7);(yyval.val)=v8;}
		    ;}
    break;

  case 46:
#line 1526 "ripper.y"
    {
#if 0
			YYLTYPE loc = code_loc_gen(&(yylsp[(1) - (5)]), &(yylsp[(3) - (5)]));
			(yyval.val) = new_const_op_assign(p, NEW_COLON2((yyvsp[(1) - (5)].val), (yyvsp[(3) - (5)].val), &loc), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=(yyvsp[(1) - (5)].val);v2=(yyvsp[(3) - (5)].val);v3=dispatch2(const_path_field,v1,v2);v4=v3;v5=(yyvsp[(4) - (5)].val);v6=(yyvsp[(5) - (5)].val);v7=dispatch3(opassign,v4,v5,v6);(yyval.val)=v7;}
		    ;}
    break;

  case 47:
#line 1534 "ripper.y"
    {
#if 0
			(yyval.val) = new_attr_op_assign(p, (yyvsp[(1) - (5)].val), ID2VAL(idCOLON2), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8;v1=(yyvsp[(1) - (5)].val);v2=ID2VAL(idCOLON2);v3=(yyvsp[(3) - (5)].val);v4=dispatch3(field,v1,v2,v3);v5=v4;v6=(yyvsp[(4) - (5)].val);v7=(yyvsp[(5) - (5)].val);v8=dispatch3(opassign,v5,v6,v7);(yyval.val)=v8;}
		    ;}
    break;

  case 48:
#line 1541 "ripper.y"
    {
#if 0
			rb_backref_error(p, (yyvsp[(1) - (3)].val));
			(yyval.val) = NEW_BEGIN(0, &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5;v1=var_field(p, (yyvsp[(1) - (3)].val));v2=(yyvsp[(3) - (3)].val);v3=dispatch2(assign,v1,v2);v4=v3;v5=dispatch1(assign_error,v4);(yyval.val)=v5;}ripper_error(p);
		    ;}
    break;

  case 49:
#line 1551 "ripper.y"
    {
			value_expr((yyvsp[(1) - (1)].val));
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 50:
#line 1556 "ripper.y"
    {
#if 0
			YYLTYPE loc = code_loc_gen(&(yylsp[(2) - (3)]), &(yylsp[(3) - (3)]));
			value_expr((yyvsp[(1) - (3)].val));
			(yyval.val) = NEW_RESCUE((yyvsp[(1) - (3)].val), NEW_RESBODY(0, remove_begin((yyvsp[(3) - (3)].val)), 0, &loc), 0, &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(rescue_mod,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 53:
#line 1569 "ripper.y"
    {
			(yyval.val) = logop(p, idAND, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 54:
#line 1573 "ripper.y"
    {
			(yyval.val) = logop(p, idOR, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 55:
#line 1577 "ripper.y"
    {
			(yyval.val) = call_uni_op(p, method_cond(p, (yyvsp[(3) - (3)].val), &(yylsp[(3) - (3)])), METHOD_NOT, &(yylsp[(1) - (3)]), &(yyloc));
		    ;}
    break;

  case 56:
#line 1581 "ripper.y"
    {
			(yyval.val) = call_uni_op(p, method_cond(p, (yyvsp[(2) - (2)].val), &(yylsp[(2) - (2)])), '!', &(yylsp[(1) - (2)]), &(yyloc));
		    ;}
    break;

  case 57:
#line 1585 "ripper.y"
    {
			value_expr((yyvsp[(1) - (2)].val));
			SET_LEX_STATE(EXPR_BEG|EXPR_LABEL);
			p->command_start = FALSE;
			(yyval.num) = p->in_kwarg;
			p->in_kwarg = 1;
		    ;}
    break;

  case 58:
#line 1592 "ripper.y"
    {(yyval.tbl) = push_pvtbl(p);;}
    break;

  case 59:
#line 1594 "ripper.y"
    {pop_pvtbl(p, (yyvsp[(4) - (5)].tbl));;}
    break;

  case 60:
#line 1595 "ripper.y"
    {
			p->in_kwarg = !!(yyvsp[(3) - (6)].num);
#if 0
			(yyval.val) = new_case3(p, (yyvsp[(1) - (6)].val), NEW_IN((yyvsp[(5) - (6)].val), 0, 0, &(yylsp[(5) - (6)])), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=(yyvsp[(5) - (6)].val);v2=Qnil;v3=Qnil;v4=dispatch3(in,v1,v2,v3);v5=(yyvsp[(1) - (6)].val);v6=v4;v7=dispatch2(case,v5,v6);(yyval.val)=v7;}
		    ;}
    break;

  case 62:
#line 1606 "ripper.y"
    {
			value_expr((yyvsp[(1) - (1)].val));
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 63:
#line 1612 "ripper.y"
    {COND_PUSH(1);;}
    break;

  case 64:
#line 1612 "ripper.y"
    {COND_POP();;}
    break;

  case 65:
#line 1613 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (4)].val);
		    ;}
    break;

  case 69:
#line 1624 "ripper.y"
    {
#if 0
			(yyval.val) = new_qcall(p, (yyvsp[(2) - (4)].val), (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val), &(yylsp[(3) - (4)]), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=(yyvsp[(1) - (4)].val);v2=(yyvsp[(2) - (4)].val);v3=(yyvsp[(3) - (4)].val);v4=dispatch3(call,v1,v2,v3);v5=v4;v6=(yyvsp[(4) - (4)].val);v7=dispatch2(method_add_arg,v5,v6);(yyval.val)=v7;}
		    ;}
    break;

  case 70:
#line 1633 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (3)].val);
#if 0
			(yyval.val)->nd_body->nd_loc = code_loc_gen(&(yylsp[(1) - (3)]), &(yylsp[(3) - (3)]));
			nd_set_line((yyval.val), (yylsp[(1) - (3)]).end_pos.lineno);
#endif
		    ;}
    break;

  case 71:
#line 1643 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_FCALL((yyvsp[(1) - (1)].val), 0, &(yyloc));
			nd_set_line((yyval.val), p->tokline);
#endif
			(yyval.val)=(yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 72:
#line 1653 "ripper.y"
    {
#if 0
			(yyvsp[(1) - (2)].val)->nd_args = (yyvsp[(2) - (2)].val);
			nd_set_last_loc((yyvsp[(1) - (2)].val), (yylsp[(2) - (2)]).end_pos);
			(yyval.val) = (yyvsp[(1) - (2)].val);
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=(yyvsp[(2) - (2)].val);v3=dispatch2(command,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 73:
#line 1662 "ripper.y"
    {
#if 0
			block_dup_check(p, (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val));
			(yyvsp[(1) - (3)].val)->nd_args = (yyvsp[(2) - (3)].val);
			(yyval.val) = method_add_block(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
			fixpos((yyval.val), (yyvsp[(1) - (3)].val));
			nd_set_last_loc((yyvsp[(1) - (3)].val), (yylsp[(2) - (3)]).end_pos);
#endif
			{VALUE v1,v2,v3,v4,v5,v6;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(2) - (3)].val);v3=dispatch2(command,v1,v2);v4=v3;v5=(yyvsp[(3) - (3)].val);v6=dispatch2(method_add_block,v4,v5);(yyval.val)=v6;}
		    ;}
    break;

  case 74:
#line 1673 "ripper.y"
    {
#if 0
			(yyval.val) = new_command_qcall(p, (yyvsp[(2) - (4)].val), (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val), Qnull, &(yylsp[(3) - (4)]), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5;v1=(yyvsp[(1) - (4)].val);v2=(yyvsp[(2) - (4)].val);v3=(yyvsp[(3) - (4)].val);v4=(yyvsp[(4) - (4)].val);v5=dispatch4(command_call,v1,v2,v3,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 75:
#line 1680 "ripper.y"
    {
#if 0
			(yyval.val) = new_command_qcall(p, (yyvsp[(2) - (5)].val), (yyvsp[(1) - (5)].val), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yylsp[(3) - (5)]), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8;v1=(yyvsp[(1) - (5)].val);v2=(yyvsp[(2) - (5)].val);v3=(yyvsp[(3) - (5)].val);v4=(yyvsp[(4) - (5)].val);v5=dispatch4(command_call,v1,v2,v3,v4);v6=v5;v7=(yyvsp[(5) - (5)].val);v8=dispatch2(method_add_block,v6,v7);(yyval.val)=v8;}
		    ;}
    break;

  case 76:
#line 1687 "ripper.y"
    {
#if 0
			(yyval.val) = new_command_qcall(p, ID2VAL(idCOLON2), (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val), Qnull, &(yylsp[(3) - (4)]), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5;v1=(yyvsp[(1) - (4)].val);v2=ID2VAL(idCOLON2);v3=(yyvsp[(3) - (4)].val);v4=(yyvsp[(4) - (4)].val);v5=dispatch4(command_call,v1,v2,v3,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 77:
#line 1694 "ripper.y"
    {
#if 0
			(yyval.val) = new_command_qcall(p, ID2VAL(idCOLON2), (yyvsp[(1) - (5)].val), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yylsp[(3) - (5)]), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8;v1=(yyvsp[(1) - (5)].val);v2=ID2VAL(idCOLON2);v3=(yyvsp[(3) - (5)].val);v4=(yyvsp[(4) - (5)].val);v5=dispatch4(command_call,v1,v2,v3,v4);v6=v5;v7=(yyvsp[(5) - (5)].val);v8=dispatch2(method_add_block,v6,v7);(yyval.val)=v8;}
		   ;}
    break;

  case 78:
#line 1701 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_SUPER((yyvsp[(2) - (2)].val), &(yyloc));
			fixpos((yyval.val), (yyvsp[(2) - (2)].val));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(super,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 79:
#line 1709 "ripper.y"
    {
#if 0
			(yyval.val) = new_yield(p, (yyvsp[(2) - (2)].val), &(yyloc));
			fixpos((yyval.val), (yyvsp[(2) - (2)].val));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(yield,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 80:
#line 1717 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_RETURN(ret_args(p, (yyvsp[(2) - (2)].val)), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(return,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 81:
#line 1724 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_BREAK(ret_args(p, (yyvsp[(2) - (2)].val)), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(break,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 82:
#line 1731 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_NEXT(ret_args(p, (yyvsp[(2) - (2)].val)), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(next,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 84:
#line 1741 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (3)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (3)].val);v2=dispatch1(mlhs_paren,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 86:
#line 1751 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN(NEW_LIST((yyvsp[(2) - (3)].val), &(yyloc)), 0, &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (3)].val);v2=dispatch1(mlhs_paren,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 87:
#line 1760 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN((yyvsp[(1) - (1)].val), 0, &(yyloc));
#endif
			(yyval.val)=(yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 88:
#line 1767 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN(list_append(p, (yyvsp[(1) - (2)].val),(yyvsp[(2) - (2)].val)), 0, &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=(yyvsp[(2) - (2)].val);v3=dispatch2(mlhs_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 89:
#line 1774 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(mlhs_add_star,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 90:
#line 1781 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN((yyvsp[(1) - (5)].val), NEW_POSTARG((yyvsp[(3) - (5)].val),(yyvsp[(5) - (5)].val),&(yyloc)), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6;v1=(yyvsp[(1) - (5)].val);v2=(yyvsp[(3) - (5)].val);v3=dispatch2(mlhs_add_star,v1,v2);v4=v3;v5=(yyvsp[(5) - (5)].val);v6=dispatch2(mlhs_add_post,v4,v5);(yyval.val)=v6;}
		    ;}
    break;

  case 91:
#line 1788 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN((yyvsp[(1) - (2)].val), NODE_SPECIAL_NO_NAME_REST, &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=Qnil;v3=dispatch2(mlhs_add_star,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 92:
#line 1795 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN((yyvsp[(1) - (4)].val), NEW_POSTARG(NODE_SPECIAL_NO_NAME_REST, (yyvsp[(4) - (4)].val), &(yyloc)), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6;v1=(yyvsp[(1) - (4)].val);v2=Qnil;v3=dispatch2(mlhs_add_star,v1,v2);v4=v3;v5=(yyvsp[(4) - (4)].val);v6=dispatch2(mlhs_add_post,v4,v5);(yyval.val)=v6;}
		    ;}
    break;

  case 93:
#line 1802 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN(0, (yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(mlhs_new);v2=v1;v3=(yyvsp[(2) - (2)].val);v4=dispatch2(mlhs_add_star,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 94:
#line 1809 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN(0, NEW_POSTARG((yyvsp[(2) - (4)].val),(yyvsp[(4) - (4)].val),&(yyloc)), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=dispatch0(mlhs_new);v2=v1;v3=(yyvsp[(2) - (4)].val);v4=dispatch2(mlhs_add_star,v2,v3);v5=v4;v6=(yyvsp[(4) - (4)].val);v7=dispatch2(mlhs_add_post,v5,v6);(yyval.val)=v7;}
		    ;}
    break;

  case 95:
#line 1816 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN(0, NODE_SPECIAL_NO_NAME_REST, &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(mlhs_new);v2=v1;v3=Qnil;v4=dispatch2(mlhs_add_star,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 96:
#line 1823 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN(0, NEW_POSTARG(NODE_SPECIAL_NO_NAME_REST, (yyvsp[(3) - (3)].val), &(yyloc)), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=dispatch0(mlhs_new);v2=v1;v3=Qnil;v4=dispatch2(mlhs_add_star,v2,v3);v5=v4;v6=(yyvsp[(3) - (3)].val);v7=dispatch2(mlhs_add_post,v5,v6);(yyval.val)=v7;}
		    ;}
    break;

  case 98:
#line 1833 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (3)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (3)].val);v2=dispatch1(mlhs_paren,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 99:
#line 1842 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_LIST((yyvsp[(1) - (2)].val), &(yylsp[(1) - (2)]));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(mlhs_new);v2=v1;v3=(yyvsp[(1) - (2)].val);v4=dispatch2(mlhs_add,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 100:
#line 1849 "ripper.y"
    {
#if 0
			(yyval.val) = list_append(p, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(2) - (3)].val);v3=dispatch2(mlhs_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 101:
#line 1858 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_LIST((yyvsp[(1) - (1)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(mlhs_new);v2=v1;v3=(yyvsp[(1) - (1)].val);v4=dispatch2(mlhs_add,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 102:
#line 1865 "ripper.y"
    {
#if 0
			(yyval.val) = list_append(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(mlhs_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 103:
#line 1874 "ripper.y"
    {
#if 0
			(yyval.val) = assignable(p, (yyvsp[(1) - (1)].val), 0, &(yyloc));
#endif
			(yyval.val)=assignable(p, var_field(p, (yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 104:
#line 1881 "ripper.y"
    {
#if 0
			(yyval.val) = assignable(p, (yyvsp[(1) - (1)].val), 0, &(yyloc));
#endif
			(yyval.val)=assignable(p, var_field(p, (yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 105:
#line 1888 "ripper.y"
    {
#if 0
			(yyval.val) = aryset(p, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (4)].val);v2=escape_Qundef((yyvsp[(3) - (4)].val));v3=dispatch2(aref_field,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 106:
#line 1895 "ripper.y"
    {
			if ((yyvsp[(2) - (3)].val) == tANDDOT) {
			    yyerror1(&(yylsp[(2) - (3)]), "&. inside multiple assignment destination");
			}
#if 0
			(yyval.val) = attrset(p, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(2) - (3)].val);v3=(yyvsp[(3) - (3)].val);v4=dispatch3(field,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 107:
#line 1905 "ripper.y"
    {
#if 0
			(yyval.val) = attrset(p, (yyvsp[(1) - (3)].val), idCOLON2, (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(const_path_field,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 108:
#line 1912 "ripper.y"
    {
			if ((yyvsp[(2) - (3)].val) == tANDDOT) {
			    yyerror1(&(yylsp[(2) - (3)]), "&. inside multiple assignment destination");
			}
#if 0
			(yyval.val) = attrset(p, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(2) - (3)].val);v3=(yyvsp[(3) - (3)].val);v4=dispatch3(field,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 109:
#line 1922 "ripper.y"
    {
#if 0
			(yyval.val) = const_decl(p, NEW_COLON2((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc)), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(const_path_field,v1,v2);(yyval.val)=const_decl(p, v3);}
		    ;}
    break;

  case 110:
#line 1929 "ripper.y"
    {
#if 0
			(yyval.val) = const_decl(p, NEW_COLON3((yyvsp[(2) - (2)].val), &(yyloc)), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(top_const_field,v1);(yyval.val)=const_decl(p, v2);}
		    ;}
    break;

  case 111:
#line 1936 "ripper.y"
    {
#if 0
			rb_backref_error(p, (yyvsp[(1) - (1)].val));
			(yyval.val) = NEW_BEGIN(0, &(yyloc));
#endif
			{VALUE v1,v2;v1=var_field(p, (yyvsp[(1) - (1)].val));v2=dispatch1(assign_error,v1);(yyval.val)=v2;}ripper_error(p);
		    ;}
    break;

  case 112:
#line 1946 "ripper.y"
    {
#if 0
			(yyval.val) = assignable(p, (yyvsp[(1) - (1)].val), 0, &(yyloc));
#endif
			(yyval.val)=assignable(p, var_field(p, (yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 113:
#line 1953 "ripper.y"
    {
#if 0
			(yyval.val) = assignable(p, (yyvsp[(1) - (1)].val), 0, &(yyloc));
#endif
			(yyval.val)=assignable(p, var_field(p, (yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 114:
#line 1960 "ripper.y"
    {
#if 0
			(yyval.val) = aryset(p, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (4)].val);v2=escape_Qundef((yyvsp[(3) - (4)].val));v3=dispatch2(aref_field,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 115:
#line 1967 "ripper.y"
    {
#if 0
			(yyval.val) = attrset(p, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(2) - (3)].val);v3=(yyvsp[(3) - (3)].val);v4=dispatch3(field,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 116:
#line 1974 "ripper.y"
    {
#if 0
			(yyval.val) = attrset(p, (yyvsp[(1) - (3)].val), idCOLON2, (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(1) - (3)].val);v2=ID2VAL(idCOLON2);v3=(yyvsp[(3) - (3)].val);v4=dispatch3(field,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 117:
#line 1981 "ripper.y"
    {
#if 0
			(yyval.val) = attrset(p, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(2) - (3)].val);v3=(yyvsp[(3) - (3)].val);v4=dispatch3(field,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 118:
#line 1988 "ripper.y"
    {
#if 0
			(yyval.val) = const_decl(p, NEW_COLON2((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc)), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(const_path_field,v1,v2);(yyval.val)=const_decl(p, v3);}
		    ;}
    break;

  case 119:
#line 1995 "ripper.y"
    {
#if 0
			(yyval.val) = const_decl(p, NEW_COLON3((yyvsp[(2) - (2)].val), &(yyloc)), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(top_const_field,v1);(yyval.val)=const_decl(p, v2);}
		    ;}
    break;

  case 120:
#line 2002 "ripper.y"
    {
#if 0
			rb_backref_error(p, (yyvsp[(1) - (1)].val));
			(yyval.val) = NEW_BEGIN(0, &(yyloc));
#endif
			{VALUE v1,v2;v1=var_field(p, (yyvsp[(1) - (1)].val));v2=dispatch1(assign_error,v1);(yyval.val)=v2;}ripper_error(p);
		    ;}
    break;

  case 121:
#line 2012 "ripper.y"
    {
#if 0
			yyerror1(&(yylsp[(1) - (1)]), "class/module name must be CONSTANT");
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(class_name_error,v1);(yyval.val)=v2;}ripper_error(p);
		    ;}
    break;

  case 123:
#line 2022 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_COLON3((yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(top_const_ref,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 124:
#line 2029 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_COLON2(0, (yyval.val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(const_ref,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 125:
#line 2036 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_COLON2((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(const_path_ref,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 129:
#line 2048 "ripper.y"
    {
			SET_LEX_STATE(EXPR_ENDFN);
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 131:
#line 2056 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_LIT(ID2SYM((yyvsp[(1) - (1)].val)), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(symbol_literal,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 133:
#line 2066 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_UNDEF((yyvsp[(1) - (1)].val), &(yyloc));
#endif
			(yyval.val)=rb_ary_new3(1, get_value((yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 134:
#line 2072 "ripper.y"
    {SET_LEX_STATE(EXPR_FNAME|EXPR_FITEM);;}
    break;

  case 135:
#line 2073 "ripper.y"
    {
#if 0
			NODE *undef = NEW_UNDEF((yyvsp[(4) - (4)].val), &(yylsp[(4) - (4)]));
			(yyval.val) = block_append(p, (yyvsp[(1) - (4)].val), undef);
#endif
			(yyval.val)=rb_ary_push((yyvsp[(1) - (4)].val), get_value((yyvsp[(4) - (4)].val)));
		    ;}
    break;

  case 136:
#line 2082 "ripper.y"
    { ifndef_ripper((yyval.val) = '|'); ;}
    break;

  case 137:
#line 2083 "ripper.y"
    { ifndef_ripper((yyval.val) = '^'); ;}
    break;

  case 138:
#line 2084 "ripper.y"
    { ifndef_ripper((yyval.val) = '&'); ;}
    break;

  case 139:
#line 2085 "ripper.y"
    { ifndef_ripper((yyval.val) = tCMP); ;}
    break;

  case 140:
#line 2086 "ripper.y"
    { ifndef_ripper((yyval.val) = tEQ); ;}
    break;

  case 141:
#line 2087 "ripper.y"
    { ifndef_ripper((yyval.val) = tEQQ); ;}
    break;

  case 142:
#line 2088 "ripper.y"
    { ifndef_ripper((yyval.val) = tMATCH); ;}
    break;

  case 143:
#line 2089 "ripper.y"
    { ifndef_ripper((yyval.val) = tNMATCH); ;}
    break;

  case 144:
#line 2090 "ripper.y"
    { ifndef_ripper((yyval.val) = '>'); ;}
    break;

  case 145:
#line 2091 "ripper.y"
    { ifndef_ripper((yyval.val) = tGEQ); ;}
    break;

  case 146:
#line 2092 "ripper.y"
    { ifndef_ripper((yyval.val) = '<'); ;}
    break;

  case 147:
#line 2093 "ripper.y"
    { ifndef_ripper((yyval.val) = tLEQ); ;}
    break;

  case 148:
#line 2094 "ripper.y"
    { ifndef_ripper((yyval.val) = tNEQ); ;}
    break;

  case 149:
#line 2095 "ripper.y"
    { ifndef_ripper((yyval.val) = tLSHFT); ;}
    break;

  case 150:
#line 2096 "ripper.y"
    { ifndef_ripper((yyval.val) = tRSHFT); ;}
    break;

  case 151:
#line 2097 "ripper.y"
    { ifndef_ripper((yyval.val) = '+'); ;}
    break;

  case 152:
#line 2098 "ripper.y"
    { ifndef_ripper((yyval.val) = '-'); ;}
    break;

  case 153:
#line 2099 "ripper.y"
    { ifndef_ripper((yyval.val) = '*'); ;}
    break;

  case 154:
#line 2100 "ripper.y"
    { ifndef_ripper((yyval.val) = '*'); ;}
    break;

  case 155:
#line 2101 "ripper.y"
    { ifndef_ripper((yyval.val) = '/'); ;}
    break;

  case 156:
#line 2102 "ripper.y"
    { ifndef_ripper((yyval.val) = '%'); ;}
    break;

  case 157:
#line 2103 "ripper.y"
    { ifndef_ripper((yyval.val) = tPOW); ;}
    break;

  case 158:
#line 2104 "ripper.y"
    { ifndef_ripper((yyval.val) = tDSTAR); ;}
    break;

  case 159:
#line 2105 "ripper.y"
    { ifndef_ripper((yyval.val) = '!'); ;}
    break;

  case 160:
#line 2106 "ripper.y"
    { ifndef_ripper((yyval.val) = '~'); ;}
    break;

  case 161:
#line 2107 "ripper.y"
    { ifndef_ripper((yyval.val) = tUPLUS); ;}
    break;

  case 162:
#line 2108 "ripper.y"
    { ifndef_ripper((yyval.val) = tUMINUS); ;}
    break;

  case 163:
#line 2109 "ripper.y"
    { ifndef_ripper((yyval.val) = tAREF); ;}
    break;

  case 164:
#line 2110 "ripper.y"
    { ifndef_ripper((yyval.val) = tASET); ;}
    break;

  case 165:
#line 2111 "ripper.y"
    { ifndef_ripper((yyval.val) = '`'); ;}
    break;

  case 207:
#line 2129 "ripper.y"
    {
#if 0
			(yyval.val) = node_assign(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(assign,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 208:
#line 2136 "ripper.y"
    {
#if 0
			(yyval.val) = new_op_assign(p, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(2) - (3)].val);v3=(yyvsp[(3) - (3)].val);v4=dispatch3(opassign,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 209:
#line 2143 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(6) - (6)].val));
			(yyval.val) = new_ary_op_assign(p, (yyvsp[(1) - (6)].val), (yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val), (yyvsp[(6) - (6)].val), &(yylsp[(3) - (6)]), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=(yyvsp[(1) - (6)].val);v2=escape_Qundef((yyvsp[(3) - (6)].val));v3=dispatch2(aref_field,v1,v2);v4=v3;v5=(yyvsp[(5) - (6)].val);v6=(yyvsp[(6) - (6)].val);v7=dispatch3(opassign,v4,v5,v6);(yyval.val)=v7;}
		    ;}
    break;

  case 210:
#line 2151 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(5) - (5)].val));
			(yyval.val) = new_attr_op_assign(p, (yyvsp[(1) - (5)].val), (yyvsp[(2) - (5)].val), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8;v1=(yyvsp[(1) - (5)].val);v2=(yyvsp[(2) - (5)].val);v3=(yyvsp[(3) - (5)].val);v4=dispatch3(field,v1,v2,v3);v5=v4;v6=(yyvsp[(4) - (5)].val);v7=(yyvsp[(5) - (5)].val);v8=dispatch3(opassign,v5,v6,v7);(yyval.val)=v8;}
		    ;}
    break;

  case 211:
#line 2159 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(5) - (5)].val));
			(yyval.val) = new_attr_op_assign(p, (yyvsp[(1) - (5)].val), (yyvsp[(2) - (5)].val), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8;v1=(yyvsp[(1) - (5)].val);v2=(yyvsp[(2) - (5)].val);v3=(yyvsp[(3) - (5)].val);v4=dispatch3(field,v1,v2,v3);v5=v4;v6=(yyvsp[(4) - (5)].val);v7=(yyvsp[(5) - (5)].val);v8=dispatch3(opassign,v5,v6,v7);(yyval.val)=v8;}
		    ;}
    break;

  case 212:
#line 2167 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(5) - (5)].val));
			(yyval.val) = new_attr_op_assign(p, (yyvsp[(1) - (5)].val), ID2VAL(idCOLON2), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8;v1=(yyvsp[(1) - (5)].val);v2=ID2VAL(idCOLON2);v3=(yyvsp[(3) - (5)].val);v4=dispatch3(field,v1,v2,v3);v5=v4;v6=(yyvsp[(4) - (5)].val);v7=(yyvsp[(5) - (5)].val);v8=dispatch3(opassign,v5,v6,v7);(yyval.val)=v8;}
		    ;}
    break;

  case 213:
#line 2175 "ripper.y"
    {
#if 0
			YYLTYPE loc = code_loc_gen(&(yylsp[(1) - (5)]), &(yylsp[(3) - (5)]));
			(yyval.val) = new_const_op_assign(p, NEW_COLON2((yyvsp[(1) - (5)].val), (yyvsp[(3) - (5)].val), &loc), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=(yyvsp[(1) - (5)].val);v2=(yyvsp[(3) - (5)].val);v3=dispatch2(const_path_field,v1,v2);v4=v3;v5=(yyvsp[(4) - (5)].val);v6=(yyvsp[(5) - (5)].val);v7=dispatch3(opassign,v4,v5,v6);(yyval.val)=v7;}
		    ;}
    break;

  case 214:
#line 2183 "ripper.y"
    {
#if 0
			(yyval.val) = new_const_op_assign(p, NEW_COLON3((yyvsp[(2) - (4)].val), &(yyloc)), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6;v1=(yyvsp[(2) - (4)].val);v2=dispatch1(top_const_field,v1);v3=v2;v4=(yyvsp[(3) - (4)].val);v5=(yyvsp[(4) - (4)].val);v6=dispatch3(opassign,v3,v4,v5);(yyval.val)=v6;}
		    ;}
    break;

  case 215:
#line 2190 "ripper.y"
    {
#if 0
			rb_backref_error(p, (yyvsp[(1) - (3)].val));
			(yyval.val) = NEW_BEGIN(0, &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6;v1=var_field(p, (yyvsp[(1) - (3)].val));v2=(yyvsp[(2) - (3)].val);v3=(yyvsp[(3) - (3)].val);v4=dispatch3(opassign,v1,v2,v3);v5=v4;v6=dispatch1(assign_error,v5);(yyval.val)=v6;}ripper_error(p);
		    ;}
    break;

  case 216:
#line 2198 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(1) - (3)].val));
			value_expr((yyvsp[(3) - (3)].val));
			(yyval.val) = NEW_DOT2((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(dot2,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 217:
#line 2207 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(1) - (3)].val));
			value_expr((yyvsp[(3) - (3)].val));
			(yyval.val) = NEW_DOT3((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(dot3,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 218:
#line 2216 "ripper.y"
    {
#if 0
                        YYLTYPE loc;
                        loc.beg_pos = (yylsp[(2) - (2)]).end_pos;
                        loc.end_pos = (yylsp[(2) - (2)]).end_pos;

			value_expr((yyvsp[(1) - (2)].val));
			(yyval.val) = NEW_DOT2((yyvsp[(1) - (2)].val), new_nil(&loc), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=Qnil;v3=dispatch2(dot2,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 219:
#line 2228 "ripper.y"
    {
#if 0
                        YYLTYPE loc;
                        loc.beg_pos = (yylsp[(2) - (2)]).end_pos;
                        loc.end_pos = (yylsp[(2) - (2)]).end_pos;

			value_expr((yyvsp[(1) - (2)].val));
			(yyval.val) = NEW_DOT3((yyvsp[(1) - (2)].val), new_nil(&loc), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=Qnil;v3=dispatch2(dot3,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 220:
#line 2240 "ripper.y"
    {
#if 0
                        YYLTYPE loc;
                        loc.beg_pos = (yylsp[(1) - (2)]).beg_pos;
                        loc.end_pos = (yylsp[(1) - (2)]).beg_pos;

			value_expr((yyvsp[(2) - (2)].val));
			(yyval.val) = NEW_DOT2(new_nil(&loc), (yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=Qnil;v2=(yyvsp[(2) - (2)].val);v3=dispatch2(dot2,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 221:
#line 2252 "ripper.y"
    {
#if 0
                        YYLTYPE loc;
                        loc.beg_pos = (yylsp[(1) - (2)]).beg_pos;
                        loc.end_pos = (yylsp[(1) - (2)]).beg_pos;

			value_expr((yyvsp[(2) - (2)].val));
			(yyval.val) = NEW_DOT3(new_nil(&loc), (yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=Qnil;v2=(yyvsp[(2) - (2)].val);v3=dispatch2(dot3,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 222:
#line 2264 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), '+', (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 223:
#line 2268 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), '-', (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 224:
#line 2272 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), '*', (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 225:
#line 2276 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), '/', (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 226:
#line 2280 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), '%', (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 227:
#line 2284 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), idPow, (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 228:
#line 2288 "ripper.y"
    {
			(yyval.val) = call_uni_op(p, call_bin_op(p, (yyvsp[(2) - (4)].val), idPow, (yyvsp[(4) - (4)].val), &(yylsp[(2) - (4)]), &(yyloc)), idUMinus, &(yylsp[(1) - (4)]), &(yyloc));
		    ;}
    break;

  case 229:
#line 2292 "ripper.y"
    {
			(yyval.val) = call_uni_op(p, (yyvsp[(2) - (2)].val), idUPlus, &(yylsp[(1) - (2)]), &(yyloc));
		    ;}
    break;

  case 230:
#line 2296 "ripper.y"
    {
			(yyval.val) = call_uni_op(p, (yyvsp[(2) - (2)].val), idUMinus, &(yylsp[(1) - (2)]), &(yyloc));
		    ;}
    break;

  case 231:
#line 2300 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), '|', (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 232:
#line 2304 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), '^', (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 233:
#line 2308 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), '&', (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 234:
#line 2312 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), idCmp, (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 236:
#line 2317 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), idEq, (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 237:
#line 2321 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), idEqq, (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 238:
#line 2325 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), idNeq, (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 239:
#line 2329 "ripper.y"
    {
			(yyval.val) = match_op(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 240:
#line 2333 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), idNeqTilde, (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 241:
#line 2337 "ripper.y"
    {
			(yyval.val) = call_uni_op(p, method_cond(p, (yyvsp[(2) - (2)].val), &(yylsp[(2) - (2)])), '!', &(yylsp[(1) - (2)]), &(yyloc));
		    ;}
    break;

  case 242:
#line 2341 "ripper.y"
    {
			(yyval.val) = call_uni_op(p, (yyvsp[(2) - (2)].val), '~', &(yylsp[(1) - (2)]), &(yyloc));
		    ;}
    break;

  case 243:
#line 2345 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), idLTLT, (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 244:
#line 2349 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), idGTGT, (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 245:
#line 2353 "ripper.y"
    {
			(yyval.val) = logop(p, idANDOP, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 246:
#line 2357 "ripper.y"
    {
			(yyval.val) = logop(p, idOROP, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 247:
#line 2360 "ripper.y"
    {p->in_defined = 1;;}
    break;

  case 248:
#line 2361 "ripper.y"
    {
			p->in_defined = 0;
			(yyval.val) = new_defined(p, (yyvsp[(4) - (4)].val), &(yyloc));
		    ;}
    break;

  case 249:
#line 2366 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(1) - (6)].val));
			(yyval.val) = new_if(p, (yyvsp[(1) - (6)].val), (yyvsp[(3) - (6)].val), (yyvsp[(6) - (6)].val), &(yyloc));
			fixpos((yyval.val), (yyvsp[(1) - (6)].val));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(1) - (6)].val);v2=(yyvsp[(3) - (6)].val);v3=(yyvsp[(6) - (6)].val);v4=dispatch3(ifop,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 250:
#line 2375 "ripper.y"
    {
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 251:
#line 2380 "ripper.y"
    {(yyval.val) = '>';;}
    break;

  case 252:
#line 2381 "ripper.y"
    {(yyval.val) = '<';;}
    break;

  case 253:
#line 2382 "ripper.y"
    {(yyval.val) = idGE;;}
    break;

  case 254:
#line 2383 "ripper.y"
    {(yyval.val) = idLE;;}
    break;

  case 255:
#line 2387 "ripper.y"
    {
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 256:
#line 2391 "ripper.y"
    {
			rb_warning1("comparison '%s' after comparison", WARN_ID((yyvsp[(2) - (3)].val)));
			(yyval.val) = call_bin_op(p, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
		    ;}
    break;

  case 257:
#line 2398 "ripper.y"
    {
			value_expr((yyvsp[(1) - (1)].val));
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 259:
#line 2406 "ripper.y"
    {
			(yyval.val) = (yyvsp[(1) - (2)].val);
		    ;}
    break;

  case 260:
#line 2410 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(3) - (4)].val) ? arg_append(p, (yyvsp[(1) - (4)].val), new_hash(p, (yyvsp[(3) - (4)].val), &(yylsp[(3) - (4)])), &(yyloc)) : (yyvsp[(1) - (4)].val);
#endif
			{VALUE v1,v2,v3,v4,v5;v1=(yyvsp[(3) - (4)].val);v2=dispatch1(bare_assoc_hash,v1);v3=(yyvsp[(1) - (4)].val);v4=v2;v5=dispatch2(args_add,v3,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 261:
#line 2417 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(1) - (2)].val) ? NEW_LIST(new_hash(p, (yyvsp[(1) - (2)].val), &(yylsp[(1) - (2)])), &(yyloc)) : 0;
#endif
			{VALUE v1,v2,v3,v4,v5,v6;v1=dispatch0(args_new);v2=(yyvsp[(1) - (2)].val);v3=dispatch1(bare_assoc_hash,v2);v4=v1;v5=v3;v6=dispatch2(args_add,v4,v5);(yyval.val)=v6;}
		    ;}
    break;

  case 262:
#line 2426 "ripper.y"
    {
			value_expr((yyvsp[(1) - (1)].val));
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 263:
#line 2431 "ripper.y"
    {
#if 0
			YYLTYPE loc = code_loc_gen(&(yylsp[(2) - (3)]), &(yylsp[(3) - (3)]));
			value_expr((yyvsp[(1) - (3)].val));
			(yyval.val) = NEW_RESCUE((yyvsp[(1) - (3)].val), NEW_RESBODY(0, remove_begin((yyvsp[(3) - (3)].val)), 0, &loc), 0, &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(rescue_mod,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 264:
#line 2442 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (3)].val);
#endif
			{VALUE v1,v2;v1=escape_Qundef((yyvsp[(2) - (3)].val));v2=dispatch1(arg_paren,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 265:
#line 2449 "ripper.y"
    {
			if (!local_id(p, idFWD_REST) ||
#if idFWD_KWREST
			    !local_id(p, idFWD_KWREST) ||
#endif
			    !local_id(p, idFWD_BLOCK)) {
			    compile_error(p, "unexpected ...");
			    (yyval.val) = Qnone;
			}
			else {
#if 0
			    NODE *splat = NEW_SPLAT(NEW_LVAR(idFWD_REST, &(yylsp[(4) - (5)])), &(yylsp[(4) - (5)]));
#if idFWD_KWREST
			    NODE *kwrest = list_append(p, NEW_LIST(0, &(yylsp[(4) - (5)])), NEW_LVAR(idFWD_KWREST, &(yylsp[(4) - (5)])));
#endif
			    NODE *block = NEW_BLOCK_PASS(NEW_LVAR(idFWD_BLOCK, &(yylsp[(4) - (5)])), &(yylsp[(4) - (5)]));
			    (yyval.val) = rest_arg_append(p, (yyvsp[(2) - (5)].val), splat, &(yyloc));
#if idFWD_KWREST
			    (yyval.val) = arg_append(p, (yyval.val), new_hash(p, kwrest, &(yylsp[(4) - (5)])), &(yylsp[(4) - (5)]));
#endif
			    (yyval.val) = arg_blk_pass((yyval.val), block);
#endif
			{VALUE v1,v2,v3,v4,v5;v1=(yyvsp[(2) - (5)].val);v2=(yyvsp[(4) - (5)].val);v3=dispatch2(args_add,v1,v2);v4=v3;v5=dispatch1(arg_paren,v4);(yyval.val)=v5;}
			}
		    ;}
    break;

  case 266:
#line 2475 "ripper.y"
    {
			if (!local_id(p, idFWD_REST) ||
#if idFWD_KWREST
			    !local_id(p, idFWD_KWREST) ||
#endif
			    !local_id(p, idFWD_BLOCK)) {
			    compile_error(p, "unexpected ...");
			    (yyval.val) = Qnone;
			}
			else {
#if 0
			    NODE *splat = NEW_SPLAT(NEW_LVAR(idFWD_REST, &(yylsp[(2) - (3)])), &(yylsp[(2) - (3)]));
#if idFWD_KWREST
			    NODE *kwrest = list_append(p, NEW_LIST(0, &(yylsp[(2) - (3)])), NEW_LVAR(idFWD_KWREST, &(yylsp[(2) - (3)])));
#endif
			    NODE *block = NEW_BLOCK_PASS(NEW_LVAR(idFWD_BLOCK, &(yylsp[(2) - (3)])), &(yylsp[(2) - (3)]));
#if idFWD_KWREST
			    (yyval.val) = arg_append(p, splat, new_hash(p, kwrest, &(yylsp[(2) - (3)])), &(yylsp[(2) - (3)]));
#else
			    (yyval.val) = splat;
#endif
			    (yyval.val) = arg_blk_pass((yyval.val), block);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (3)].val);v2=dispatch1(arg_paren,v1);(yyval.val)=v2;}
			}
		    ;}
    break;

  case 271:
#line 2510 "ripper.y"
    {
		      (yyval.val) = (yyvsp[(1) - (2)].val);
		    ;}
    break;

  case 272:
#line 2514 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(3) - (4)].val) ? arg_append(p, (yyvsp[(1) - (4)].val), new_hash(p, (yyvsp[(3) - (4)].val), &(yylsp[(3) - (4)])), &(yyloc)) : (yyvsp[(1) - (4)].val);
#endif
			{VALUE v1,v2,v3,v4,v5;v1=(yyvsp[(3) - (4)].val);v2=dispatch1(bare_assoc_hash,v1);v3=(yyvsp[(1) - (4)].val);v4=v2;v5=dispatch2(args_add,v3,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 273:
#line 2521 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(1) - (2)].val) ? NEW_LIST(new_hash(p, (yyvsp[(1) - (2)].val), &(yylsp[(1) - (2)])), &(yylsp[(1) - (2)])) : 0;
#endif
			{VALUE v1,v2,v3,v4,v5,v6;v1=dispatch0(args_new);v2=(yyvsp[(1) - (2)].val);v3=dispatch1(bare_assoc_hash,v2);v4=v1;v5=v3;v6=dispatch2(args_add,v4,v5);(yyval.val)=v6;}
		    ;}
    break;

  case 274:
#line 2530 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(1) - (1)].val));
			(yyval.val) = NEW_LIST((yyvsp[(1) - (1)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(args_new);v2=v1;v3=(yyvsp[(1) - (1)].val);v4=dispatch2(args_add,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 275:
#line 2538 "ripper.y"
    {
#if 0
			(yyval.val) = arg_blk_pass((yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=(yyvsp[(2) - (2)].val);v3=dispatch2(args_add_block,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 276:
#line 2545 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(1) - (2)].val) ? NEW_LIST(new_hash(p, (yyvsp[(1) - (2)].val), &(yylsp[(1) - (2)])), &(yylsp[(1) - (2)])) : 0;
			(yyval.val) = arg_blk_pass((yyval.val), (yyvsp[(2) - (2)].val));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8,v9;v1=dispatch0(args_new);v2=(yyvsp[(1) - (2)].val);v3=dispatch1(bare_assoc_hash,v2);v4=v1;v5=v3;v6=dispatch2(args_add,v4,v5);v7=v6;v8=(yyvsp[(2) - (2)].val);v9=dispatch2(args_add_block,v7,v8);(yyval.val)=v9;}
		    ;}
    break;

  case 277:
#line 2553 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(3) - (4)].val) ? arg_append(p, (yyvsp[(1) - (4)].val), new_hash(p, (yyvsp[(3) - (4)].val), &(yylsp[(3) - (4)])), &(yyloc)) : (yyvsp[(1) - (4)].val);
			(yyval.val) = arg_blk_pass((yyval.val), (yyvsp[(4) - (4)].val));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8;v1=(yyvsp[(3) - (4)].val);v2=dispatch1(bare_assoc_hash,v1);v3=(yyvsp[(1) - (4)].val);v4=v2;v5=dispatch2(args_add,v3,v4);v6=v5;v7=(yyvsp[(4) - (4)].val);v8=dispatch2(args_add_block,v6,v7);(yyval.val)=v8;}
		    ;}
    break;

  case 278:
#line 2561 "ripper.y"
    {{VALUE v1,v2,v3,v4;v1=dispatch0(args_new);v2=v1;v3=(yyvsp[(1) - (1)].val);v4=dispatch2(args_add_block,v2,v3);(yyval.val)=v4;};}
    break;

  case 279:
#line 2564 "ripper.y"
    {
			/* If call_args starts with a open paren '(' or '[',
			 * look-ahead reading of the letters calls CMDARG_PUSH(0),
			 * but the push must be done after CMDARG_PUSH(1).
			 * So this code makes them consistent by first cancelling
			 * the premature CMDARG_PUSH(0), doing CMDARG_PUSH(1),
			 * and finally redoing CMDARG_PUSH(0).
			 */
			int lookahead = 0;
			switch (yychar) {
			  case '(': case tLPAREN: case tLPAREN_ARG: case '[': case tLBRACK:
			    lookahead = 1;
			}
			if (lookahead) CMDARG_POP();
			CMDARG_PUSH(1);
			if (lookahead) CMDARG_PUSH(0);
		    ;}
    break;

  case 280:
#line 2582 "ripper.y"
    {
			/* call_args can be followed by tLBRACE_ARG (that does CMDARG_PUSH(0) in the lexer)
			 * but the push must be done after CMDARG_POP() in the parser.
			 * So this code does CMDARG_POP() to pop 0 pushed by tLBRACE_ARG,
			 * CMDARG_POP() to pop 1 pushed by command_args,
			 * and CMDARG_PUSH(0) to restore back the flag set by tLBRACE_ARG.
			 */
			int lookahead = 0;
			switch (yychar) {
			  case tLBRACE_ARG:
			    lookahead = 1;
			}
			if (lookahead) CMDARG_POP();
			CMDARG_POP();
			if (lookahead) CMDARG_PUSH(0);
			(yyval.val) = (yyvsp[(2) - (2)].val);
		    ;}
    break;

  case 281:
#line 2602 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_BLOCK_PASS((yyvsp[(2) - (2)].val), &(yyloc));
#endif
			(yyval.val)=(yyvsp[(2) - (2)].val);
		    ;}
    break;

  case 282:
#line 2611 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (2)].val);
		    ;}
    break;

  case 283:
#line 2615 "ripper.y"
    {
			(yyval.val) = 0;
		    ;}
    break;

  case 284:
#line 2621 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_LIST((yyvsp[(1) - (1)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(args_new);v2=v1;v3=(yyvsp[(1) - (1)].val);v4=dispatch2(args_add,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 285:
#line 2628 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_SPLAT((yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(args_new);v2=v1;v3=(yyvsp[(2) - (2)].val);v4=dispatch2(args_add_star,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 286:
#line 2635 "ripper.y"
    {
#if 0
			(yyval.val) = last_arg_append(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(args_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 287:
#line 2642 "ripper.y"
    {
#if 0
			(yyval.val) = rest_arg_append(p, (yyvsp[(1) - (4)].val), (yyvsp[(4) - (4)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (4)].val);v2=(yyvsp[(4) - (4)].val);v3=dispatch2(args_add_star,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 290:
#line 2655 "ripper.y"
    {
#if 0
			(yyval.val) = last_arg_append(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5;v1=(yyvsp[(1) - (3)].val);v2=dispatch1(mrhs_new_from_args,v1);v3=v2;v4=(yyvsp[(3) - (3)].val);v5=dispatch2(mrhs_add,v3,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 291:
#line 2662 "ripper.y"
    {
#if 0
			(yyval.val) = rest_arg_append(p, (yyvsp[(1) - (4)].val), (yyvsp[(4) - (4)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5;v1=(yyvsp[(1) - (4)].val);v2=dispatch1(mrhs_new_from_args,v1);v3=v2;v4=(yyvsp[(4) - (4)].val);v5=dispatch2(mrhs_add_star,v3,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 292:
#line 2669 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_SPLAT((yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(mrhs_new);v2=v1;v3=(yyvsp[(2) - (2)].val);v4=dispatch2(mrhs_add_star,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 303:
#line 2688 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_FCALL((yyvsp[(1) - (1)].val), 0, &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(fcall,v1);v3=dispatch0(args_new);v4=v2;v5=v3;v6=dispatch2(method_add_arg,v4,v5);(yyval.val)=v6;}
		    ;}
    break;

  case 304:
#line 2695 "ripper.y"
    {
			CMDARG_PUSH(0);
		    ;}
    break;

  case 305:
#line 2700 "ripper.y"
    {
			CMDARG_POP();
#if 0
			set_line_body((yyvsp[(3) - (4)].val), (yylsp[(1) - (4)]).end_pos.lineno);
			(yyval.val) = NEW_BEGIN((yyvsp[(3) - (4)].val), &(yyloc));
			nd_set_line((yyval.val), (yylsp[(1) - (4)]).end_pos.lineno);
#endif
			{VALUE v1,v2;v1=(yyvsp[(3) - (4)].val);v2=dispatch1(begin,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 306:
#line 2709 "ripper.y"
    {SET_LEX_STATE(EXPR_ENDARG);;}
    break;

  case 307:
#line 2710 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_BEGIN(0, &(yyloc));
#endif
			{VALUE v1,v2;v1=0;v2=dispatch1(paren,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 308:
#line 2716 "ripper.y"
    {SET_LEX_STATE(EXPR_ENDARG);;}
    break;

  case 309:
#line 2717 "ripper.y"
    {
#if 0
			if (nd_type((yyvsp[(2) - (4)].val)) == NODE_SELF) (yyvsp[(2) - (4)].val)->nd_state = 0;
			(yyval.val) = (yyvsp[(2) - (4)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (4)].val);v2=dispatch1(paren,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 310:
#line 2725 "ripper.y"
    {
#if 0
			if (nd_type((yyvsp[(2) - (3)].val)) == NODE_SELF) (yyvsp[(2) - (3)].val)->nd_state = 0;
			(yyval.val) = (yyvsp[(2) - (3)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (3)].val);v2=dispatch1(paren,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 311:
#line 2733 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_COLON2((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(const_path_ref,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 312:
#line 2740 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_COLON3((yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(top_const_ref,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 313:
#line 2747 "ripper.y"
    {
#if 0
			(yyval.val) = make_list((yyvsp[(2) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=escape_Qundef((yyvsp[(2) - (3)].val));v2=dispatch1(array,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 314:
#line 2754 "ripper.y"
    {
#if 0
			(yyval.val) = new_hash(p, (yyvsp[(2) - (3)].val), &(yyloc));
			(yyval.val)->nd_brace = TRUE;
#endif
			{VALUE v1,v2;v1=escape_Qundef((yyvsp[(2) - (3)].val));v2=dispatch1(hash,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 315:
#line 2762 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_RETURN(0, &(yyloc));
#endif
			{VALUE v1;v1=dispatch0(return0);(yyval.val)=v1;}
		    ;}
    break;

  case 316:
#line 2769 "ripper.y"
    {
#if 0
			(yyval.val) = new_yield(p, (yyvsp[(3) - (4)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(3) - (4)].val);v2=dispatch1(paren,v1);v3=v2;v4=dispatch1(yield,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 317:
#line 2776 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_YIELD(0, &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5;v1=dispatch0(args_new);v2=v1;v3=dispatch1(paren,v2);v4=v3;v5=dispatch1(yield,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 318:
#line 2783 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_YIELD(0, &(yyloc));
#endif
			{VALUE v1;v1=dispatch0(yield0);(yyval.val)=v1;}
		    ;}
    break;

  case 319:
#line 2789 "ripper.y"
    {p->in_defined = 1;;}
    break;

  case 320:
#line 2790 "ripper.y"
    {
			p->in_defined = 0;
			(yyval.val) = new_defined(p, (yyvsp[(5) - (6)].val), &(yyloc));
		    ;}
    break;

  case 321:
#line 2795 "ripper.y"
    {
			(yyval.val) = call_uni_op(p, method_cond(p, (yyvsp[(3) - (4)].val), &(yylsp[(3) - (4)])), METHOD_NOT, &(yylsp[(1) - (4)]), &(yyloc));
		    ;}
    break;

  case 322:
#line 2799 "ripper.y"
    {
			(yyval.val) = call_uni_op(p, method_cond(p, new_nil(&(yylsp[(2) - (3)])), &(yylsp[(2) - (3)])), METHOD_NOT, &(yylsp[(1) - (3)]), &(yyloc));
		    ;}
    break;

  case 323:
#line 2803 "ripper.y"
    {
#if 0
			(yyval.val) = method_add_block(p, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8,v9;v1=(yyvsp[(1) - (2)].val);v2=dispatch1(fcall,v1);v3=dispatch0(args_new);v4=v2;v5=v3;v6=dispatch2(method_add_arg,v4,v5);v7=v6;v8=(yyvsp[(2) - (2)].val);v9=dispatch2(method_add_block,v7,v8);(yyval.val)=v9;}
		    ;}
    break;

  case 325:
#line 2811 "ripper.y"
    {
#if 0
			block_dup_check(p, (yyvsp[(1) - (2)].val)->nd_args, (yyvsp[(2) - (2)].val));
			(yyval.val) = method_add_block(p, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=(yyvsp[(2) - (2)].val);v3=dispatch2(method_add_block,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 326:
#line 2819 "ripper.y"
    {
			token_info_push(p, "->", &(yylsp[(1) - (1)]));
		    ;}
    break;

  case 327:
#line 2823 "ripper.y"
    {
			(yyval.val) = (yyvsp[(3) - (3)].val);
#if 0
                        nd_set_first_loc((yyval.val), (yylsp[(1) - (3)]).beg_pos);
#endif
		    ;}
    break;

  case 328:
#line 2833 "ripper.y"
    {
#if 0
			(yyval.val) = new_if(p, (yyvsp[(2) - (6)].val), (yyvsp[(4) - (6)].val), (yyvsp[(5) - (6)].val), &(yyloc));
			fixpos((yyval.val), (yyvsp[(2) - (6)].val));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(2) - (6)].val);v2=(yyvsp[(4) - (6)].val);v3=escape_Qundef((yyvsp[(5) - (6)].val));v4=dispatch3(if,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 329:
#line 2844 "ripper.y"
    {
#if 0
			(yyval.val) = new_unless(p, (yyvsp[(2) - (6)].val), (yyvsp[(4) - (6)].val), (yyvsp[(5) - (6)].val), &(yyloc));
			fixpos((yyval.val), (yyvsp[(2) - (6)].val));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(2) - (6)].val);v2=(yyvsp[(4) - (6)].val);v3=escape_Qundef((yyvsp[(5) - (6)].val));v4=dispatch3(unless,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 330:
#line 2854 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_WHILE(cond(p, (yyvsp[(2) - (4)].val), &(yylsp[(2) - (4)])), (yyvsp[(3) - (4)].val), 1, &(yyloc));
			fixpos((yyval.val), (yyvsp[(2) - (4)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(2) - (4)].val);v2=(yyvsp[(3) - (4)].val);v3=dispatch2(while,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 331:
#line 2864 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_UNTIL(cond(p, (yyvsp[(2) - (4)].val), &(yylsp[(2) - (4)])), (yyvsp[(3) - (4)].val), 1, &(yyloc));
			fixpos((yyval.val), (yyvsp[(2) - (4)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(2) - (4)].val);v2=(yyvsp[(3) - (4)].val);v3=dispatch2(until,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 332:
#line 2872 "ripper.y"
    {
			(yyval.val) = p->case_labels;
			p->case_labels = Qnil;
		    ;}
    break;

  case 333:
#line 2878 "ripper.y"
    {
			if (RTEST(p->case_labels)) rb_hash_clear(p->case_labels);
			p->case_labels = (yyvsp[(4) - (6)].val);
#if 0
			(yyval.val) = NEW_CASE((yyvsp[(2) - (6)].val), (yyvsp[(5) - (6)].val), &(yyloc));
			fixpos((yyval.val), (yyvsp[(2) - (6)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(2) - (6)].val);v2=(yyvsp[(5) - (6)].val);v3=dispatch2(case,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 334:
#line 2888 "ripper.y"
    {
			(yyval.val) = p->case_labels;
			p->case_labels = 0;
		    ;}
    break;

  case 335:
#line 2894 "ripper.y"
    {
			if (RTEST(p->case_labels)) rb_hash_clear(p->case_labels);
			p->case_labels = (yyvsp[(3) - (5)].val);
#if 0
			(yyval.val) = NEW_CASE2((yyvsp[(4) - (5)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=Qnil;v2=(yyvsp[(4) - (5)].val);v3=dispatch2(case,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 336:
#line 2905 "ripper.y"
    {
#if 0
			(yyval.val) = new_case3(p, (yyvsp[(2) - (5)].val), (yyvsp[(4) - (5)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(2) - (5)].val);v2=(yyvsp[(4) - (5)].val);v3=dispatch2(case,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 337:
#line 2914 "ripper.y"
    {
#if 0
			/*
			 *  for a, b, c in e
			 *  #=>
			 *  e.each{|*x| a, b, c = x}
			 *
			 *  for a in e
			 *  #=>
			 *  e.each{|x| a, = x}
			 */
			ID id = internal_id(p);
			NODE *m = NEW_ARGS_AUX(0, 0, &NULL_LOC);
			NODE *args, *scope, *internal_var = NEW_DVAR(id, &(yylsp[(2) - (6)]));
			ID *tbl = ALLOC_N(ID, 3);
			tbl[0] = 1 /* length of local var table */; tbl[1] = id /* internal id */;
                        rb_ast_add_local_table(p->ast, tbl);

			switch (nd_type((yyvsp[(2) - (6)].val))) {
			  case NODE_LASGN:
			  case NODE_DASGN:
			  case NODE_DASGN_CURR: /* e.each {|internal_var| a = internal_var; ... } */
			    (yyvsp[(2) - (6)].val)->nd_value = internal_var;
			    id = 0;
			    m->nd_plen = 1;
			    m->nd_next = (yyvsp[(2) - (6)].val);
			    break;
			  case NODE_MASGN: /* e.each {|*internal_var| a, b, c = (internal_var.length == 1 && Array === (tmp = internal_var[0]) ? tmp : internal_var); ... } */
			    m->nd_next = node_assign(p, (yyvsp[(2) - (6)].val), NEW_FOR_MASGN(internal_var, &(yylsp[(2) - (6)])), &(yylsp[(2) - (6)]));
			    break;
			  default: /* e.each {|*internal_var| @a, B, c[1], d.attr = internal_val; ... } */
			    m->nd_next = node_assign(p, NEW_MASGN(NEW_LIST((yyvsp[(2) - (6)].val), &(yylsp[(2) - (6)])), 0, &(yylsp[(2) - (6)])), internal_var, &(yylsp[(2) - (6)]));
			}
			/* {|*internal_id| <m> = internal_id; ... } */
			args = new_args(p, m, 0, id, 0, new_args_tail(p, 0, 0, 0, &(yylsp[(2) - (6)])), &(yylsp[(2) - (6)]));
			scope = NEW_NODE(NODE_SCOPE, tbl, (yyvsp[(5) - (6)].val), args, &(yyloc));
			(yyval.val) = NEW_FOR((yyvsp[(4) - (6)].val), scope, &(yyloc));
			fixpos((yyval.val), (yyvsp[(2) - (6)].val));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(2) - (6)].val);v2=(yyvsp[(4) - (6)].val);v3=(yyvsp[(5) - (6)].val);v4=dispatch3(for,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 338:
#line 2956 "ripper.y"
    {
			if (p->in_def) {
			    YYLTYPE loc = code_loc_gen(&(yylsp[(1) - (3)]), &(yylsp[(2) - (3)]));
			    yyerror1(&loc, "class definition in method body");
			}
			(yyvsp[(1) - (3)].num) = p->in_class;
			p->in_class = 1;
			local_push(p, 0);
		    ;}
    break;

  case 339:
#line 2967 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_CLASS((yyvsp[(2) - (6)].val), (yyvsp[(5) - (6)].val), (yyvsp[(3) - (6)].val), &(yyloc));
			nd_set_line((yyval.val)->nd_body, (yylsp[(6) - (6)]).end_pos.lineno);
			set_line_body((yyvsp[(5) - (6)].val), (yylsp[(3) - (6)]).end_pos.lineno);
			nd_set_line((yyval.val), (yylsp[(3) - (6)]).end_pos.lineno);
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(2) - (6)].val);v2=(yyvsp[(3) - (6)].val);v3=(yyvsp[(5) - (6)].val);v4=dispatch3(class,v1,v2,v3);(yyval.val)=v4;}
			local_pop(p);
			p->in_class = (yyvsp[(1) - (6)].num) & 1;
		    ;}
    break;

  case 340:
#line 2979 "ripper.y"
    {
			(yyval.num) = (p->in_class << 1) | p->in_def;
			p->in_def = 0;
			p->in_class = 0;
			local_push(p, 0);
		    ;}
    break;

  case 341:
#line 2988 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_SCLASS((yyvsp[(3) - (7)].val), (yyvsp[(6) - (7)].val), &(yyloc));
			nd_set_line((yyval.val)->nd_body, (yylsp[(7) - (7)]).end_pos.lineno);
			set_line_body((yyvsp[(6) - (7)].val), nd_line((yyvsp[(3) - (7)].val)));
			fixpos((yyval.val), (yyvsp[(3) - (7)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(3) - (7)].val);v2=(yyvsp[(6) - (7)].val);v3=dispatch2(sclass,v1,v2);(yyval.val)=v3;}
			local_pop(p);
			p->in_def = (yyvsp[(4) - (7)].num) & 1;
			p->in_class = ((yyvsp[(4) - (7)].num) >> 1) & 1;
		    ;}
    break;

  case 342:
#line 3001 "ripper.y"
    {
			if (p->in_def) {
			    YYLTYPE loc = code_loc_gen(&(yylsp[(1) - (2)]), &(yylsp[(2) - (2)]));
			    yyerror1(&loc, "module definition in method body");
			}
			(yyvsp[(1) - (2)].num) = p->in_class;
			p->in_class = 1;
			local_push(p, 0);
		    ;}
    break;

  case 343:
#line 3012 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MODULE((yyvsp[(2) - (5)].val), (yyvsp[(4) - (5)].val), &(yyloc));
			nd_set_line((yyval.val)->nd_body, (yylsp[(5) - (5)]).end_pos.lineno);
			set_line_body((yyvsp[(4) - (5)].val), (yylsp[(2) - (5)]).end_pos.lineno);
			nd_set_line((yyval.val), (yylsp[(2) - (5)]).end_pos.lineno);
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(2) - (5)].val);v2=(yyvsp[(4) - (5)].val);v3=dispatch2(module,v1,v2);(yyval.val)=v3;}
			local_pop(p);
			p->in_class = (yyvsp[(1) - (5)].num) & 1;
		    ;}
    break;

  case 344:
#line 3024 "ripper.y"
    {
			numparam_name(p, get_id((yyvsp[(2) - (2)].val)));
			local_push(p, 0);
			(yyval.id) = p->cur_arg;
			p->cur_arg = 0;
		    ;}
    break;

  case 345:
#line 3030 "ripper.y"
    {
			(yyval.num) = p->in_def;
			p->in_def = 1;
		    ;}
    break;

  case 346:
#line 3037 "ripper.y"
    {
#if 0
			NODE *body = remove_begin((yyvsp[(6) - (7)].val));
			reduce_nodes(p, &body);
			(yyval.val) = NEW_DEFN((yyvsp[(2) - (7)].val), (yyvsp[(5) - (7)].val), body, &(yyloc));
			nd_set_line((yyval.val)->nd_defn, (yylsp[(7) - (7)]).end_pos.lineno);
			set_line_body(body, (yylsp[(1) - (7)]).beg_pos.lineno);
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(2) - (7)].val);v2=(yyvsp[(5) - (7)].val);v3=(yyvsp[(6) - (7)].val);v4=dispatch3(def,v1,v2,v3);(yyval.val)=v4;}
			local_pop(p);
			p->in_def = (yyvsp[(4) - (7)].num) & 1;
			p->cur_arg = (yyvsp[(3) - (7)].id);
		    ;}
    break;

  case 347:
#line 3050 "ripper.y"
    {SET_LEX_STATE(EXPR_FNAME);;}
    break;

  case 348:
#line 3051 "ripper.y"
    {
			numparam_name(p, get_id((yyvsp[(5) - (5)].val)));
			(yyvsp[(4) - (5)].num) = p->in_def;
			p->in_def = 1;
			SET_LEX_STATE(EXPR_ENDFN|EXPR_LABEL); /* force for args */
			local_push(p, 0);
			(yyval.id) = p->cur_arg;
			p->cur_arg = 0;
		    ;}
    break;

  case 349:
#line 3063 "ripper.y"
    {
#if 0
			NODE *body = remove_begin((yyvsp[(8) - (9)].val));
			reduce_nodes(p, &body);
			(yyval.val) = NEW_DEFS((yyvsp[(2) - (9)].val), (yyvsp[(5) - (9)].val), (yyvsp[(7) - (9)].val), body, &(yyloc));
			nd_set_line((yyval.val)->nd_defn, (yylsp[(9) - (9)]).end_pos.lineno);
			set_line_body(body, (yylsp[(1) - (9)]).beg_pos.lineno);
#endif
			{VALUE v1,v2,v3,v4,v5,v6;v1=(yyvsp[(2) - (9)].val);v2=(yyvsp[(3) - (9)].val);v3=(yyvsp[(5) - (9)].val);v4=(yyvsp[(7) - (9)].val);v5=(yyvsp[(8) - (9)].val);v6=dispatch5(defs,v1,v2,v3,v4,v5);(yyval.val)=v6;}
			local_pop(p);
			p->in_def = (yyvsp[(4) - (9)].num) & 1;
			p->cur_arg = (yyvsp[(6) - (9)].id);
		    ;}
    break;

  case 350:
#line 3077 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_BREAK(0, &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=dispatch0(args_new);v2=v1;v3=dispatch1(break,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 351:
#line 3084 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_NEXT(0, &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=dispatch0(args_new);v2=v1;v3=dispatch1(next,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 352:
#line 3091 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_REDO(&(yyloc));
#endif
			{VALUE v1;v1=dispatch0(redo);(yyval.val)=v1;}
		    ;}
    break;

  case 353:
#line 3098 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_RETRY(&(yyloc));
#endif
			{VALUE v1;v1=dispatch0(retry);(yyval.val)=v1;}
		    ;}
    break;

  case 354:
#line 3107 "ripper.y"
    {
			value_expr((yyvsp[(1) - (1)].val));
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 355:
#line 3114 "ripper.y"
    {
			token_info_push(p, "begin", &(yyloc));
		    ;}
    break;

  case 356:
#line 3120 "ripper.y"
    {
			WARN_EOL("if");
			token_info_push(p, "if", &(yyloc));
			if (p->token_info && p->token_info->nonspc &&
			    p->token_info->next && !strcmp(p->token_info->next->token, "else")) {
			    const char *tok = p->lex.ptok;
			    const char *beg = p->lex.pbeg + p->token_info->next->beg.column;
			    beg += rb_strlen_lit("else");
			    while (beg < tok && ISSPACE(*beg)) beg++;
			    if (beg == tok) {
				p->token_info->nonspc = 0;
			    }
			}
		    ;}
    break;

  case 357:
#line 3137 "ripper.y"
    {
			token_info_push(p, "unless", &(yyloc));
		    ;}
    break;

  case 358:
#line 3143 "ripper.y"
    {
			token_info_push(p, "while", &(yyloc));
		    ;}
    break;

  case 359:
#line 3149 "ripper.y"
    {
			token_info_push(p, "until", &(yyloc));
		    ;}
    break;

  case 360:
#line 3155 "ripper.y"
    {
			token_info_push(p, "case", &(yyloc));
		    ;}
    break;

  case 361:
#line 3161 "ripper.y"
    {
			token_info_push(p, "for", &(yyloc));
		    ;}
    break;

  case 362:
#line 3167 "ripper.y"
    {
			token_info_push(p, "class", &(yyloc));
		    ;}
    break;

  case 363:
#line 3173 "ripper.y"
    {
			token_info_push(p, "module", &(yyloc));
		    ;}
    break;

  case 364:
#line 3179 "ripper.y"
    {
			token_info_push(p, "def", &(yyloc));
		    ;}
    break;

  case 365:
#line 3185 "ripper.y"
    {
			token_info_push(p, "do", &(yyloc));
		    ;}
    break;

  case 366:
#line 3191 "ripper.y"
    {
			token_info_push(p, "do", &(yyloc));
		    ;}
    break;

  case 367:
#line 3197 "ripper.y"
    {
			token_info_warn(p, "rescue", p->token_info, 1, &(yyloc));
		    ;}
    break;

  case 368:
#line 3203 "ripper.y"
    {
			token_info_warn(p, "ensure", p->token_info, 1, &(yyloc));
		    ;}
    break;

  case 369:
#line 3209 "ripper.y"
    {
			token_info_warn(p, "when", p->token_info, 0, &(yyloc));
		    ;}
    break;

  case 370:
#line 3215 "ripper.y"
    {
			token_info *ptinfo_beg = p->token_info;
			int same = ptinfo_beg && strcmp(ptinfo_beg->token, "case") != 0;
			token_info_warn(p, "else", p->token_info, same, &(yyloc));
			if (same) {
			    token_info e;
			    e.next = ptinfo_beg->next;
			    e.token = "else";
			    token_info_setup(&e, p->lex.pbeg, &(yyloc));
			    if (!e.nonspc) *ptinfo_beg = e;
			}
		    ;}
    break;

  case 371:
#line 3230 "ripper.y"
    {
			WARN_EOL("elsif");
			token_info_warn(p, "elsif", p->token_info, 1, &(yyloc));
		    ;}
    break;

  case 372:
#line 3237 "ripper.y"
    {
			token_info_pop(p, "end", &(yyloc));
		    ;}
    break;

  case 373:
#line 3243 "ripper.y"
    {
			if (p->in_class && !p->in_def && !dyna_in_block(p))
			    yyerror1(&(yylsp[(1) - (1)]), "Invalid return in class/module body");
		    ;}
    break;

  case 380:
#line 3262 "ripper.y"
    {
#if 0
			(yyval.val) = new_if(p, (yyvsp[(2) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc));
			fixpos((yyval.val), (yyvsp[(2) - (5)].val));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(2) - (5)].val);v2=(yyvsp[(4) - (5)].val);v3=escape_Qundef((yyvsp[(5) - (5)].val));v4=dispatch3(elsif,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 382:
#line 3273 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (2)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(else,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 385:
#line 3286 "ripper.y"
    {
#if 0
			(yyval.val) = assignable(p, (yyvsp[(1) - (1)].val), 0, &(yyloc));
			mark_lvar_used(p, (yyval.val));
#endif
			(yyval.val)=assignable(p, (yyvsp[(1) - (1)].val));
		    ;}
    break;

  case 386:
#line 3294 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (3)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (3)].val);v2=dispatch1(mlhs_paren,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 387:
#line 3303 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_LIST((yyvsp[(1) - (1)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(mlhs_new);v2=v1;v3=(yyvsp[(1) - (1)].val);v4=dispatch2(mlhs_add,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 388:
#line 3310 "ripper.y"
    {
#if 0
			(yyval.val) = list_append(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(mlhs_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 389:
#line 3319 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN((yyvsp[(1) - (1)].val), 0, &(yyloc));
#endif
			(yyval.val)=(yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 390:
#line 3326 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(mlhs_add_star,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 391:
#line 3333 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN((yyvsp[(1) - (5)].val), NEW_POSTARG((yyvsp[(3) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc)), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6;v1=(yyvsp[(1) - (5)].val);v2=(yyvsp[(3) - (5)].val);v3=dispatch2(mlhs_add_star,v1,v2);v4=v3;v5=(yyvsp[(5) - (5)].val);v6=dispatch2(mlhs_add_post,v4,v5);(yyval.val)=v6;}
		    ;}
    break;

  case 392:
#line 3340 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN(0, (yyvsp[(1) - (1)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(mlhs_new);v2=v1;v3=(yyvsp[(1) - (1)].val);v4=dispatch2(mlhs_add_star,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 393:
#line 3347 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_MASGN(0, NEW_POSTARG((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc)), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=dispatch0(mlhs_new);v2=v1;v3=(yyvsp[(1) - (3)].val);v4=dispatch2(mlhs_add_star,v2,v3);v5=v4;v6=(yyvsp[(3) - (3)].val);v7=dispatch2(mlhs_add_post,v5,v6);(yyval.val)=v7;}
		    ;}
    break;

  case 394:
#line 3356 "ripper.y"
    {
#if 0
			(yyval.val) = assignable(p, (yyvsp[(2) - (2)].val), 0, &(yyloc));
			mark_lvar_used(p, (yyval.val));
#endif
			(yyval.val)=assignable(p, (yyvsp[(2) - (2)].val));
		    ;}
    break;

  case 395:
#line 3364 "ripper.y"
    {
#if 0
			(yyval.val) = NODE_SPECIAL_NO_NAME_REST;
#endif
			(yyval.val)=Qnil;
		    ;}
    break;

  case 396:
#line 3373 "ripper.y"
    {
			(yyval.val) = new_args_tail(p, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val), &(yylsp[(3) - (4)]));
		    ;}
    break;

  case 397:
#line 3377 "ripper.y"
    {
			(yyval.val) = new_args_tail(p, (yyvsp[(1) - (2)].val), Qnone, (yyvsp[(2) - (2)].val), &(yylsp[(1) - (2)]));
		    ;}
    break;

  case 398:
#line 3381 "ripper.y"
    {
			(yyval.val) = new_args_tail(p, Qnone, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val), &(yylsp[(1) - (2)]));
		    ;}
    break;

  case 399:
#line 3385 "ripper.y"
    {
			(yyval.val) = new_args_tail(p, Qnone, ID2VAL(idNil), (yyvsp[(2) - (2)].val), &(yylsp[(1) - (2)]));
		    ;}
    break;

  case 400:
#line 3389 "ripper.y"
    {
			(yyval.val) = new_args_tail(p, Qnone, Qnone, (yyvsp[(1) - (1)].val), &(yylsp[(1) - (1)]));
		    ;}
    break;

  case 401:
#line 3395 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (2)].val);
		    ;}
    break;

  case 402:
#line 3399 "ripper.y"
    {
			(yyval.val) = new_args_tail(p, Qnone, Qnone, Qnone, &(yylsp[(0) - (0)]));
		    ;}
    break;

  case 403:
#line 3405 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (6)].val), (yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val), Qnone, (yyvsp[(6) - (6)].val), &(yyloc));
		    ;}
    break;

  case 404:
#line 3409 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (8)].val), (yyvsp[(3) - (8)].val), (yyvsp[(5) - (8)].val), (yyvsp[(7) - (8)].val), (yyvsp[(8) - (8)].val), &(yyloc));
		    ;}
    break;

  case 405:
#line 3413 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), Qnone, Qnone, (yyvsp[(4) - (4)].val), &(yyloc));
		    ;}
    break;

  case 406:
#line 3417 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (6)].val), (yyvsp[(3) - (6)].val), Qnone, (yyvsp[(5) - (6)].val), (yyvsp[(6) - (6)].val), &(yyloc));
		    ;}
    break;

  case 407:
#line 3421 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (4)].val), Qnone, (yyvsp[(3) - (4)].val), Qnone, (yyvsp[(4) - (4)].val), &(yyloc));
		    ;}
    break;

  case 408:
#line 3425 "ripper.y"
    {
#if 0
			/* magic number for rest_id in iseq_set_arguments() */
			(yyval.val) = new_args(p, (yyvsp[(1) - (2)].val), Qnone, NODE_SPECIAL_EXCESSIVE_COMMA, Qnone, new_args_tail(p, Qnone, Qnone, Qnone, &(yylsp[(1) - (2)])), &(yyloc));
#endif
			{VALUE v1;v1=dispatch0(excessed_comma);(yyval.val)=new_args(p, (yyvsp[(1) - (2)].val), Qnone, v1, Qnone, new_args_tail(p, Qnone, Qnone, Qnone, NULL), NULL);}
		    ;}
    break;

  case 409:
#line 3433 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (6)].val), Qnone, (yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val), (yyvsp[(6) - (6)].val), &(yyloc));
		    ;}
    break;

  case 410:
#line 3437 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (2)].val), Qnone, Qnone, Qnone, (yyvsp[(2) - (2)].val), &(yyloc));
		    ;}
    break;

  case 411:
#line 3441 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), Qnone, (yyvsp[(4) - (4)].val), &(yyloc));
		    ;}
    break;

  case 412:
#line 3445 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, (yyvsp[(1) - (6)].val), (yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val), (yyvsp[(6) - (6)].val), &(yyloc));
		    ;}
    break;

  case 413:
#line 3449 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, (yyvsp[(1) - (2)].val), Qnone, Qnone, (yyvsp[(2) - (2)].val), &(yyloc));
		    ;}
    break;

  case 414:
#line 3453 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, (yyvsp[(1) - (4)].val), Qnone, (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val), &(yyloc));
		    ;}
    break;

  case 415:
#line 3457 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, Qnone, (yyvsp[(1) - (2)].val), Qnone, (yyvsp[(2) - (2)].val), &(yyloc));
		    ;}
    break;

  case 416:
#line 3461 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, Qnone, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val), &(yyloc));
		    ;}
    break;

  case 417:
#line 3465 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, Qnone, Qnone, Qnone, (yyvsp[(1) - (1)].val), &(yyloc));
		    ;}
    break;

  case 419:
#line 3472 "ripper.y"
    {
			p->command_start = TRUE;
		    ;}
    break;

  case 420:
#line 3478 "ripper.y"
    {
			p->cur_arg = 0;
			p->max_numparam = ORDINAL_PARAM;
#if 0
			(yyval.val) = 0;
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8,v9,v10,v11;v1=Qnil;v2=Qnil;v3=Qnil;v4=Qnil;v5=Qnil;v6=Qnil;v7=Qnil;v8=dispatch7(params,v1,v2,v3,v4,v5,v6,v7);v9=v8;v10=escape_Qundef((yyvsp[(2) - (3)].val));v11=dispatch2(block_var,v9,v10);(yyval.val)=v11;}
		    ;}
    break;

  case 421:
#line 3487 "ripper.y"
    {
			p->cur_arg = 0;
			p->max_numparam = ORDINAL_PARAM;
#if 0
			(yyval.val) = (yyvsp[(2) - (4)].val);
#endif
			{VALUE v1,v2,v3;v1=escape_Qundef((yyvsp[(2) - (4)].val));v2=escape_Qundef((yyvsp[(3) - (4)].val));v3=dispatch2(block_var,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 422:
#line 3499 "ripper.y"
    {
		      (yyval.val) = 0;
		    ;}
    break;

  case 423:
#line 3503 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			(yyval.val)=(yyvsp[(3) - (4)].val);
		    ;}
    break;

  case 424:
#line 3512 "ripper.y"
    {(yyval.val)=rb_ary_new3(1, get_value((yyvsp[(1) - (1)].val)));;}
    break;

  case 425:
#line 3514 "ripper.y"
    {(yyval.val)=rb_ary_push((yyvsp[(1) - (3)].val), get_value((yyvsp[(3) - (3)].val)));;}
    break;

  case 426:
#line 3518 "ripper.y"
    {
			new_bv(p, get_id((yyvsp[(1) - (1)].val)));
			(yyval.val)=get_value((yyvsp[(1) - (1)].val));
		    ;}
    break;

  case 427:
#line 3523 "ripper.y"
    {
			(yyval.val) = 0;
		    ;}
    break;

  case 428:
#line 3528 "ripper.y"
    {
			(yyval.vars) = dyna_push(p);
		    ;}
    break;

  case 429:
#line 3531 "ripper.y"
    {
			(yyval.num) = p->lex.lpar_beg;
			p->lex.lpar_beg = p->lex.paren_nest;
		    ;}
    break;

  case 430:
#line 3535 "ripper.y"
    {
			(yyval.num) = p->max_numparam;
			p->max_numparam = 0;
		    ;}
    break;

  case 431:
#line 3539 "ripper.y"
    {
			(yyval.node) = numparam_push(p);
		    ;}
    break;

  case 432:
#line 3543 "ripper.y"
    {
			CMDARG_PUSH(0);
		    ;}
    break;

  case 433:
#line 3547 "ripper.y"
    {
			int max_numparam = p->max_numparam;
			p->lex.lpar_beg = (yyvsp[(2) - (7)].num);
			p->max_numparam = (yyvsp[(3) - (7)].num);
			CMDARG_POP();
			(yyvsp[(5) - (7)].val) = args_with_numbered(p, (yyvsp[(5) - (7)].val), max_numparam);
#if 0
                        {
                            YYLTYPE loc = code_loc_gen(&(yylsp[(5) - (7)]), &(yylsp[(7) - (7)]));
                            (yyval.val) = NEW_LAMBDA((yyvsp[(5) - (7)].val), (yyvsp[(7) - (7)].val), &loc);
                            nd_set_line((yyval.val)->nd_body, (yylsp[(7) - (7)]).end_pos.lineno);
                            nd_set_line((yyval.val), (yylsp[(5) - (7)]).end_pos.lineno);
                        }
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(5) - (7)].val);v2=(yyvsp[(7) - (7)].val);v3=dispatch2(lambda,v1,v2);(yyval.val)=v3;}
			numparam_pop(p, (yyvsp[(4) - (7)].node));
			dyna_pop(p, (yyvsp[(1) - (7)].vars));
		    ;}
    break;

  case 434:
#line 3568 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (4)].val);
			p->max_numparam = ORDINAL_PARAM;
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (4)].val);v2=dispatch1(paren,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 435:
#line 3576 "ripper.y"
    {
#if 0
			if (!args_info_empty_p((yyvsp[(1) - (1)].val)->nd_ainfo))
			    p->max_numparam = ORDINAL_PARAM;
#endif
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 436:
#line 3586 "ripper.y"
    {
			token_info_pop(p, "}", &(yylsp[(3) - (3)]));
			(yyval.val) = (yyvsp[(2) - (3)].val);
		    ;}
    break;

  case 437:
#line 3591 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (3)].val);
		    ;}
    break;

  case 438:
#line 3597 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (3)].val);
#if 0
			(yyval.val)->nd_body->nd_loc = code_loc_gen(&(yylsp[(1) - (3)]), &(yylsp[(3) - (3)]));
			nd_set_line((yyval.val), (yylsp[(1) - (3)]).end_pos.lineno);
#endif
		    ;}
    break;

  case 439:
#line 3607 "ripper.y"
    {
#if 0
			if (nd_type((yyvsp[(1) - (2)].val)) == NODE_YIELD) {
			    compile_error(p, "block given to yield");
			}
			else {
			    block_dup_check(p, (yyvsp[(1) - (2)].val)->nd_args, (yyvsp[(2) - (2)].val));
			}
			(yyval.val) = method_add_block(p, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val), &(yyloc));
			fixpos((yyval.val), (yyvsp[(1) - (2)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=(yyvsp[(2) - (2)].val);v3=dispatch2(method_add_block,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 440:
#line 3621 "ripper.y"
    {
#if 0
			(yyval.val) = new_qcall(p, (yyvsp[(2) - (4)].val), (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val), &(yylsp[(3) - (4)]), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=(yyvsp[(1) - (4)].val);v2=(yyvsp[(2) - (4)].val);v3=(yyvsp[(3) - (4)].val);v4=dispatch3(call,v1,v2,v3);v5=v4;v6=(yyvsp[(4) - (4)].val);v7=v6==Qundef ? v5 : dispatch2(method_add_arg,v5,v6);(yyval.val)=v7;}
		    ;}
    break;

  case 441:
#line 3628 "ripper.y"
    {
#if 0
			(yyval.val) = new_command_qcall(p, (yyvsp[(2) - (5)].val), (yyvsp[(1) - (5)].val), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yylsp[(3) - (5)]), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8;v1=(yyvsp[(1) - (5)].val);v2=(yyvsp[(2) - (5)].val);v3=(yyvsp[(3) - (5)].val);v4=(yyvsp[(4) - (5)].val);v5=dispatch4(command_call,v1,v2,v3,v4);v6=v5;v7=(yyvsp[(5) - (5)].val);v8=v7==Qundef ? v6 : dispatch2(method_add_block,v6,v7);(yyval.val)=v8;}
		    ;}
    break;

  case 442:
#line 3635 "ripper.y"
    {
#if 0
			(yyval.val) = new_command_qcall(p, (yyvsp[(2) - (5)].val), (yyvsp[(1) - (5)].val), (yyvsp[(3) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yylsp[(3) - (5)]), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7,v8;v1=(yyvsp[(1) - (5)].val);v2=(yyvsp[(2) - (5)].val);v3=(yyvsp[(3) - (5)].val);v4=(yyvsp[(4) - (5)].val);v5=dispatch4(command_call,v1,v2,v3,v4);v6=v5;v7=(yyvsp[(5) - (5)].val);v8=dispatch2(method_add_block,v6,v7);(yyval.val)=v8;}
		    ;}
    break;

  case 443:
#line 3644 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(1) - (2)].val);
			(yyval.val)->nd_args = (yyvsp[(2) - (2)].val);
			nd_set_last_loc((yyvsp[(1) - (2)].val), (yylsp[(2) - (2)]).end_pos);
#endif
			{VALUE v1,v2,v3,v4,v5;v1=(yyvsp[(1) - (2)].val);v2=dispatch1(fcall,v1);v3=v2;v4=(yyvsp[(2) - (2)].val);v5=dispatch2(method_add_arg,v3,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 444:
#line 3653 "ripper.y"
    {
#if 0
			(yyval.val) = new_qcall(p, (yyvsp[(2) - (4)].val), (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val), &(yylsp[(3) - (4)]), &(yyloc));
			nd_set_line((yyval.val), (yylsp[(3) - (4)]).end_pos.lineno);
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=(yyvsp[(1) - (4)].val);v2=(yyvsp[(2) - (4)].val);v3=(yyvsp[(3) - (4)].val);v4=dispatch3(call,v1,v2,v3);v5=v4;v6=(yyvsp[(4) - (4)].val);v7=v6==Qundef ? v5 : dispatch2(method_add_arg,v5,v6);(yyval.val)=v7;}
		    ;}
    break;

  case 445:
#line 3661 "ripper.y"
    {
#if 0
			(yyval.val) = new_qcall(p, ID2VAL(idCOLON2), (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val), &(yylsp[(3) - (4)]), &(yyloc));
			nd_set_line((yyval.val), (yylsp[(3) - (4)]).end_pos.lineno);
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=(yyvsp[(1) - (4)].val);v2=ID2VAL(idCOLON2);v3=(yyvsp[(3) - (4)].val);v4=dispatch3(call,v1,v2,v3);v5=v4;v6=(yyvsp[(4) - (4)].val);v7=dispatch2(method_add_arg,v5,v6);(yyval.val)=v7;}
		    ;}
    break;

  case 446:
#line 3669 "ripper.y"
    {
#if 0
			(yyval.val) = new_qcall(p, ID2VAL(idCOLON2), (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), Qnull, &(yylsp[(3) - (3)]), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(1) - (3)].val);v2=ID2VAL(idCOLON2);v3=(yyvsp[(3) - (3)].val);v4=dispatch3(call,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 447:
#line 3676 "ripper.y"
    {
#if 0
			(yyval.val) = new_qcall(p, (yyvsp[(2) - (3)].val), (yyvsp[(1) - (3)].val), ID2VAL(idCall), (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
			nd_set_line((yyval.val), (yylsp[(2) - (3)]).end_pos.lineno);
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(2) - (3)].val);v3=ID2VAL(idCall);v4=dispatch3(call,v1,v2,v3);v5=v4;v6=(yyvsp[(3) - (3)].val);v7=dispatch2(method_add_arg,v5,v6);(yyval.val)=v7;}
		    ;}
    break;

  case 448:
#line 3684 "ripper.y"
    {
#if 0
			(yyval.val) = new_qcall(p, ID2VAL(idCOLON2), (yyvsp[(1) - (3)].val), ID2VAL(idCall), (yyvsp[(3) - (3)].val), &(yylsp[(2) - (3)]), &(yyloc));
			nd_set_line((yyval.val), (yylsp[(2) - (3)]).end_pos.lineno);
#endif
			{VALUE v1,v2,v3,v4,v5,v6,v7;v1=(yyvsp[(1) - (3)].val);v2=ID2VAL(idCOLON2);v3=ID2VAL(idCall);v4=dispatch3(call,v1,v2,v3);v5=v4;v6=(yyvsp[(3) - (3)].val);v7=dispatch2(method_add_arg,v5,v6);(yyval.val)=v7;}
		    ;}
    break;

  case 449:
#line 3692 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_SUPER((yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(super,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 450:
#line 3699 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_ZSUPER(&(yyloc));
#endif
			{VALUE v1;v1=dispatch0(zsuper);(yyval.val)=v1;}
		    ;}
    break;

  case 451:
#line 3706 "ripper.y"
    {
#if 0
			if ((yyvsp[(1) - (4)].val) && nd_type((yyvsp[(1) - (4)].val)) == NODE_SELF)
			    (yyval.val) = NEW_FCALL(tAREF, (yyvsp[(3) - (4)].val), &(yyloc));
			else
			    (yyval.val) = NEW_CALL((yyvsp[(1) - (4)].val), tAREF, (yyvsp[(3) - (4)].val), &(yyloc));
			fixpos((yyval.val), (yyvsp[(1) - (4)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (4)].val);v2=escape_Qundef((yyvsp[(3) - (4)].val));v3=dispatch2(aref,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 452:
#line 3719 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (3)].val);
#if 0
			(yyval.val)->nd_body->nd_loc = code_loc_gen(&(yylsp[(1) - (3)]), &(yylsp[(3) - (3)]));
			nd_set_line((yyval.val), (yylsp[(1) - (3)]).end_pos.lineno);
#endif
		    ;}
    break;

  case 453:
#line 3727 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (3)].val);
#if 0
			(yyval.val)->nd_body->nd_loc = code_loc_gen(&(yylsp[(1) - (3)]), &(yylsp[(3) - (3)]));
			nd_set_line((yyval.val), (yylsp[(1) - (3)]).end_pos.lineno);
#endif
		    ;}
    break;

  case 454:
#line 3736 "ripper.y"
    {(yyval.vars) = dyna_push(p);;}
    break;

  case 455:
#line 3737 "ripper.y"
    {
			(yyval.num) = p->max_numparam;
			p->max_numparam = 0;
		    ;}
    break;

  case 456:
#line 3741 "ripper.y"
    {
			(yyval.node) = numparam_push(p);
		    ;}
    break;

  case 457:
#line 3745 "ripper.y"
    {
			int max_numparam = p->max_numparam;
			p->max_numparam = (yyvsp[(2) - (5)].num);
			(yyvsp[(4) - (5)].val) = args_with_numbered(p, (yyvsp[(4) - (5)].val), max_numparam);
#if 0
			(yyval.val) = NEW_ITER((yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=escape_Qundef((yyvsp[(4) - (5)].val));v2=(yyvsp[(5) - (5)].val);v3=dispatch2(brace_block,v1,v2);(yyval.val)=v3;}
			numparam_pop(p, (yyvsp[(3) - (5)].node));
			dyna_pop(p, (yyvsp[(1) - (5)].vars));
		    ;}
    break;

  case 458:
#line 3758 "ripper.y"
    {(yyval.vars) = dyna_push(p);;}
    break;

  case 459:
#line 3759 "ripper.y"
    {
			(yyval.num) = p->max_numparam;
			p->max_numparam = 0;
		    ;}
    break;

  case 460:
#line 3763 "ripper.y"
    {
			(yyval.node) = numparam_push(p);
			CMDARG_PUSH(0);
		    ;}
    break;

  case 461:
#line 3768 "ripper.y"
    {
			int max_numparam = p->max_numparam;
			p->max_numparam = (yyvsp[(2) - (5)].num);
			(yyvsp[(4) - (5)].val) = args_with_numbered(p, (yyvsp[(4) - (5)].val), max_numparam);
#if 0
			(yyval.val) = NEW_ITER((yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=escape_Qundef((yyvsp[(4) - (5)].val));v2=(yyvsp[(5) - (5)].val);v3=dispatch2(do_block,v1,v2);(yyval.val)=v3;}
			CMDARG_POP();
			numparam_pop(p, (yyvsp[(3) - (5)].node));
			dyna_pop(p, (yyvsp[(1) - (5)].vars));
		    ;}
    break;

  case 462:
#line 3783 "ripper.y"
    {
#if 0
			check_literal_when(p, (yyvsp[(1) - (1)].val), &(yylsp[(1) - (1)]));
			(yyval.val) = NEW_LIST((yyvsp[(1) - (1)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(args_new);v2=v1;v3=(yyvsp[(1) - (1)].val);v4=dispatch2(args_add,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 463:
#line 3791 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_SPLAT((yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=dispatch0(args_new);v2=v1;v3=(yyvsp[(2) - (2)].val);v4=dispatch2(args_add_star,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 464:
#line 3798 "ripper.y"
    {
#if 0
			check_literal_when(p, (yyvsp[(3) - (3)].val), &(yylsp[(3) - (3)]));
			(yyval.val) = last_arg_append(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(args_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 465:
#line 3806 "ripper.y"
    {
#if 0
			(yyval.val) = rest_arg_append(p, (yyvsp[(1) - (4)].val), (yyvsp[(4) - (4)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (4)].val);v2=(yyvsp[(4) - (4)].val);v3=dispatch2(args_add_star,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 466:
#line 3817 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_WHEN((yyvsp[(2) - (5)].val), (yyvsp[(4) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc));
			fixpos((yyval.val), (yyvsp[(2) - (5)].val));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(2) - (5)].val);v2=(yyvsp[(4) - (5)].val);v3=escape_Qundef((yyvsp[(5) - (5)].val));v4=dispatch3(when,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 469:
#line 3831 "ripper.y"
    {
			SET_LEX_STATE(EXPR_BEG|EXPR_LABEL);
			p->command_start = FALSE;
			(yyval.num) = p->in_kwarg;
			p->in_kwarg = 1;
		    ;}
    break;

  case 470:
#line 3837 "ripper.y"
    {(yyval.tbl) = push_pvtbl(p);;}
    break;

  case 471:
#line 3838 "ripper.y"
    {(yyval.tbl) = push_pktbl(p);;}
    break;

  case 472:
#line 3840 "ripper.y"
    {pop_pktbl(p, (yyvsp[(4) - (6)].tbl));;}
    break;

  case 473:
#line 3841 "ripper.y"
    {pop_pvtbl(p, (yyvsp[(3) - (7)].tbl));;}
    break;

  case 474:
#line 3842 "ripper.y"
    {
			p->in_kwarg = !!(yyvsp[(2) - (8)].num);
		    ;}
    break;

  case 475:
#line 3847 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_IN((yyvsp[(5) - (11)].val), (yyvsp[(10) - (11)].val), (yyvsp[(11) - (11)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(5) - (11)].val);v2=(yyvsp[(10) - (11)].val);v3=escape_Qundef((yyvsp[(11) - (11)].val));v4=dispatch3(in,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 479:
#line 3861 "ripper.y"
    {
#if 0
			(yyval.val) = new_if(p, (yyvsp[(3) - (3)].val), remove_begin((yyvsp[(1) - (3)].val)), 0, &(yyloc));
			fixpos((yyval.val), (yyvsp[(3) - (3)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(3) - (3)].val);v2=(yyvsp[(1) - (3)].val);v3=dispatch2(if_mod,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 480:
#line 3869 "ripper.y"
    {
#if 0
			(yyval.val) = new_unless(p, (yyvsp[(3) - (3)].val), remove_begin((yyvsp[(1) - (3)].val)), 0, &(yyloc));
			fixpos((yyval.val), (yyvsp[(3) - (3)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(3) - (3)].val);v2=(yyvsp[(1) - (3)].val);v3=dispatch2(unless_mod,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 482:
#line 3880 "ripper.y"
    {
			(yyval.val) = new_array_pattern_tail(p, Qnone, 1, 0, Qnone, &(yyloc));
			(yyval.val) = new_array_pattern(p, Qnone, get_value((yyvsp[(1) - (2)].val)), (yyval.val), &(yyloc));
		    ;}
    break;

  case 483:
#line 3885 "ripper.y"
    {
			(yyval.val) = new_array_pattern(p, Qnone, get_value((yyvsp[(1) - (3)].val)), (yyvsp[(3) - (3)].val), &(yyloc));
#if 0
			nd_set_first_loc((yyval.val), (yylsp[(1) - (3)]).beg_pos);
#endif

		    ;}
    break;

  case 484:
#line 3893 "ripper.y"
    {
			(yyval.val) = new_array_pattern(p, Qnone, Qnone, (yyvsp[(1) - (1)].val), &(yyloc));
		    ;}
    break;

  case 485:
#line 3897 "ripper.y"
    {
			(yyval.val) = new_hash_pattern(p, Qnone, (yyvsp[(1) - (1)].val), &(yyloc));
		    ;}
    break;

  case 487:
#line 3906 "ripper.y"
    {
#if 0
			NODE *n = NEW_LIST((yyvsp[(1) - (3)].val), &(yyloc));
			n = list_append(p, n, (yyvsp[(3) - (3)].val));
			(yyval.val) = new_hash(p, n, &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(1) - (3)].val);v2=STATIC_ID2SYM(id_assoc);v3=(yyvsp[(3) - (3)].val);v4=dispatch3(binary,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 489:
#line 3918 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_NODE(NODE_OR, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), 0, &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(1) - (3)].val);v2=STATIC_ID2SYM(idOr);v3=(yyvsp[(3) - (3)].val);v4=dispatch3(binary,v1,v2,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 491:
#line 3927 "ripper.y"
    {(yyval.tbl) = push_pktbl(p);;}
    break;

  case 492:
#line 3928 "ripper.y"
    {(yyval.tbl) = push_pktbl(p);;}
    break;

  case 494:
#line 3932 "ripper.y"
    {
			pop_pktbl(p, (yyvsp[(2) - (4)].tbl));
			(yyval.val) = new_array_pattern(p, (yyvsp[(1) - (4)].val), Qnone, (yyvsp[(3) - (4)].val), &(yyloc));
#if 0
			nd_set_first_loc((yyval.val), (yylsp[(1) - (4)]).beg_pos);
#endif

		    ;}
    break;

  case 495:
#line 3941 "ripper.y"
    {
			pop_pktbl(p, (yyvsp[(2) - (4)].tbl));
			(yyval.val) = new_hash_pattern(p, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), &(yyloc));
#if 0
			nd_set_first_loc((yyval.val), (yylsp[(1) - (4)]).beg_pos);
#endif

		    ;}
    break;

  case 496:
#line 3950 "ripper.y"
    {
			(yyval.val) = new_array_pattern_tail(p, Qnone, 0, 0, Qnone, &(yyloc));
			(yyval.val) = new_array_pattern(p, (yyvsp[(1) - (3)].val), Qnone, (yyval.val), &(yyloc));
		    ;}
    break;

  case 497:
#line 3955 "ripper.y"
    {
			pop_pktbl(p, (yyvsp[(2) - (4)].tbl));
			(yyval.val) = new_array_pattern(p, (yyvsp[(1) - (4)].val), Qnone, (yyvsp[(3) - (4)].val), &(yyloc));
#if 0
			nd_set_first_loc((yyval.val), (yylsp[(1) - (4)]).beg_pos);
#endif

		    ;}
    break;

  case 498:
#line 3964 "ripper.y"
    {
			pop_pktbl(p, (yyvsp[(2) - (4)].tbl));
			(yyval.val) = new_hash_pattern(p, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), &(yyloc));
#if 0
			nd_set_first_loc((yyval.val), (yylsp[(1) - (4)]).beg_pos);
#endif

		    ;}
    break;

  case 499:
#line 3973 "ripper.y"
    {
			(yyval.val) = new_array_pattern_tail(p, Qnone, 0, 0, Qnone, &(yyloc));
			(yyval.val) = new_array_pattern(p, (yyvsp[(1) - (3)].val), Qnone, (yyval.val), &(yyloc));
		    ;}
    break;

  case 500:
#line 3977 "ripper.y"
    {(yyval.tbl) = push_pktbl(p);;}
    break;

  case 501:
#line 3978 "ripper.y"
    {
			pop_pktbl(p, (yyvsp[(2) - (4)].tbl));
			(yyval.val) = new_array_pattern(p, Qnone, Qnone, (yyvsp[(3) - (4)].val), &(yyloc));
		    ;}
    break;

  case 502:
#line 3983 "ripper.y"
    {
			(yyval.val) = new_array_pattern_tail(p, Qnone, 0, 0, Qnone, &(yyloc));
			(yyval.val) = new_array_pattern(p, Qnone, Qnone, (yyval.val), &(yyloc));
		    ;}
    break;

  case 503:
#line 3988 "ripper.y"
    {
			(yyval.tbl) = push_pktbl(p);
			(yyvsp[(1) - (1)].num) = p->in_kwarg;
			p->in_kwarg = 0;
		    ;}
    break;

  case 504:
#line 3994 "ripper.y"
    {
			pop_pktbl(p, (yyvsp[(2) - (4)].tbl));
			p->in_kwarg = (yyvsp[(1) - (4)].num);
			(yyval.val) = new_hash_pattern(p, Qnone, (yyvsp[(3) - (4)].val), &(yyloc));
		    ;}
    break;

  case 505:
#line 4000 "ripper.y"
    {
			(yyval.val) = new_hash_pattern_tail(p, Qnone, 0, &(yyloc));
			(yyval.val) = new_hash_pattern(p, Qnone, (yyval.val), &(yyloc));
		    ;}
    break;

  case 506:
#line 4004 "ripper.y"
    {(yyval.tbl) = push_pktbl(p);;}
    break;

  case 507:
#line 4005 "ripper.y"
    {
			pop_pktbl(p, (yyvsp[(2) - (4)].tbl));
			(yyval.val) = (yyvsp[(3) - (4)].val);
		    ;}
    break;

  case 508:
#line 4012 "ripper.y"
    {
#if 0
			NODE *pre_args = NEW_LIST((yyvsp[(1) - (1)].val), &(yyloc));
			(yyval.val) = new_array_pattern_tail(p, pre_args, 0, 0, Qnone, &(yyloc));
#endif
			(yyval.val) = new_array_pattern_tail(p, rb_ary_new_from_args(1, get_value((yyvsp[(1) - (1)].val))), 0, 0, Qnone, &(yyloc));

		    ;}
    break;

  case 509:
#line 4021 "ripper.y"
    {
			(yyval.val) = new_array_pattern_tail(p, (yyvsp[(1) - (1)].val), 1, 0, Qnone, &(yyloc));
		    ;}
    break;

  case 510:
#line 4025 "ripper.y"
    {
#if 0
			(yyval.val) = new_array_pattern_tail(p, list_concat((yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val)), 0, 0, Qnone, &(yyloc));
#endif
			VALUE pre_args = rb_ary_concat((yyvsp[(1) - (2)].val), get_value((yyvsp[(2) - (2)].val)));
			(yyval.val) = new_array_pattern_tail(p, pre_args, 0, 0, Qnone, &(yyloc));

		    ;}
    break;

  case 511:
#line 4034 "ripper.y"
    {
			(yyval.val) = new_array_pattern_tail(p, (yyvsp[(1) - (3)].val), 1, (yyvsp[(3) - (3)].val), Qnone, &(yyloc));
		    ;}
    break;

  case 512:
#line 4038 "ripper.y"
    {
			(yyval.val) = new_array_pattern_tail(p, (yyvsp[(1) - (5)].val), 1, (yyvsp[(3) - (5)].val), (yyvsp[(5) - (5)].val), &(yyloc));
		    ;}
    break;

  case 513:
#line 4042 "ripper.y"
    {
			(yyval.val) = new_array_pattern_tail(p, (yyvsp[(1) - (2)].val), 1, 0, Qnone, &(yyloc));
		    ;}
    break;

  case 514:
#line 4046 "ripper.y"
    {
			(yyval.val) = new_array_pattern_tail(p, (yyvsp[(1) - (4)].val), 1, 0, (yyvsp[(4) - (4)].val), &(yyloc));
		    ;}
    break;

  case 516:
#line 4053 "ripper.y"
    {
			(yyval.val) = (yyvsp[(1) - (2)].val);
		    ;}
    break;

  case 517:
#line 4057 "ripper.y"
    {
#if 0
			(yyval.val) = list_concat((yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val));
#endif
			(yyval.val)=rb_ary_concat((yyvsp[(1) - (3)].val), get_value((yyvsp[(2) - (3)].val)));
		    ;}
    break;

  case 518:
#line 4066 "ripper.y"
    {
			(yyval.val) = new_array_pattern_tail(p, Qnone, 1, (yyvsp[(2) - (2)].val), Qnone, &(yyloc));
		    ;}
    break;

  case 519:
#line 4070 "ripper.y"
    {
			(yyval.val) = new_array_pattern_tail(p, Qnone, 1, (yyvsp[(2) - (4)].val), (yyvsp[(4) - (4)].val), &(yyloc));
		    ;}
    break;

  case 520:
#line 4074 "ripper.y"
    {
			(yyval.val) = new_array_pattern_tail(p, Qnone, 1, 0, Qnone, &(yyloc));
		    ;}
    break;

  case 521:
#line 4078 "ripper.y"
    {
			(yyval.val) = new_array_pattern_tail(p, Qnone, 1, 0, (yyvsp[(3) - (3)].val), &(yyloc));
		    ;}
    break;

  case 523:
#line 4085 "ripper.y"
    {
#if 0
			(yyval.val) = list_concat((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val)=rb_ary_concat((yyvsp[(1) - (3)].val), get_value((yyvsp[(3) - (3)].val)));
		    ;}
    break;

  case 524:
#line 4094 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_LIST((yyvsp[(1) - (1)].val), &(yyloc));
#endif
			(yyval.val)=rb_ary_new_from_args(1, get_value((yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 525:
#line 4103 "ripper.y"
    {
			(yyval.val) =  new_hash_pattern_tail(p, new_unique_key_hash(p, (yyvsp[(1) - (3)].val), &(yyloc)), (yyvsp[(3) - (3)].val), &(yyloc));
		    ;}
    break;

  case 526:
#line 4107 "ripper.y"
    {
			(yyval.val) =  new_hash_pattern_tail(p, new_unique_key_hash(p, (yyvsp[(1) - (1)].val), &(yyloc)), 0, &(yyloc));
		    ;}
    break;

  case 527:
#line 4111 "ripper.y"
    {
			(yyval.val) =  new_hash_pattern_tail(p, new_unique_key_hash(p, (yyvsp[(1) - (2)].val), &(yyloc)), 0, &(yyloc));
		    ;}
    break;

  case 528:
#line 4115 "ripper.y"
    {
			(yyval.val) =  new_hash_pattern_tail(p, new_hash(p, Qnone, &(yyloc)), (yyvsp[(1) - (1)].val), &(yyloc));
		    ;}
    break;

  case 529:
#line 4119 "ripper.y"
    {
			(yyval.val) =  new_hash_pattern_tail(p, new_unique_key_hash(p, (yyvsp[(1) - (3)].val), &(yyloc)), ID2VAL(idNil), &(yyloc));
		    ;}
    break;

  case 530:
#line 4123 "ripper.y"
    {
			(yyval.val) =  new_hash_pattern_tail(p, new_hash(p, Qnone, &(yyloc)), ID2VAL(idNil), &(yyloc));
		    ;}
    break;

  case 531:
#line 4129 "ripper.y"
    {(yyval.val)=rb_ary_new_from_args(1, (yyvsp[(1) - (1)].val));;}
    break;

  case 532:
#line 4131 "ripper.y"
    {
#if 0
			(yyval.val) = list_concat((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val)=rb_ary_push((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
		    ;}
    break;

  case 533:
#line 4140 "ripper.y"
    {
			error_duplicate_pattern_key(p, get_id((yyvsp[(1) - (2)].val)), &(yylsp[(1) - (2)]));
#if 0
			(yyval.val) = list_append(p, NEW_LIST(NEW_LIT(ID2SYM((yyvsp[(1) - (2)].val)), &(yyloc)), &(yyloc)), (yyvsp[(2) - (2)].val));
#endif
			(yyval.val)=rb_ary_new_from_args(2, get_value((yyvsp[(1) - (2)].val)), get_value((yyvsp[(2) - (2)].val)));
		    ;}
    break;

  case 534:
#line 4148 "ripper.y"
    {
			error_duplicate_pattern_key(p, get_id((yyvsp[(1) - (1)].val)), &(yylsp[(1) - (1)]));
			if ((yyvsp[(1) - (1)].val) && !is_local_id(get_id((yyvsp[(1) - (1)].val)))) {
			    yyerror1(&(yylsp[(1) - (1)]), "key must be valid as local variables");
			}
			error_duplicate_pattern_variable(p, get_id((yyvsp[(1) - (1)].val)), &(yylsp[(1) - (1)]));
#if 0
			(yyval.val) = list_append(p, NEW_LIST(NEW_LIT(ID2SYM((yyvsp[(1) - (1)].val)), &(yyloc)), &(yyloc)), assignable(p, (yyvsp[(1) - (1)].val), 0, &(yyloc)));
#endif
			(yyval.val)=rb_ary_new_from_args(2, get_value((yyvsp[(1) - (1)].val)), Qnil);
		    ;}
    break;

  case 536:
#line 4163 "ripper.y"
    {
			YYLTYPE loc = code_loc_gen(&(yylsp[(1) - (3)]), &(yylsp[(3) - (3)]));
#if 0
			if (!(yyvsp[(2) - (3)].val) || nd_type((yyvsp[(2) - (3)].val)) == NODE_STR) {
			    NODE *node = dsym_node(p, (yyvsp[(2) - (3)].val), &loc);
			    (yyval.val) = SYM2ID(node->nd_lit);
			}
#endif
			if (ripper_is_node_yylval((yyvsp[(2) - (3)].val)) && RNODE((yyvsp[(2) - (3)].val))->nd_cval) {
			    VALUE label = RNODE((yyvsp[(2) - (3)].val))->nd_cval;
			    VALUE rval = RNODE((yyvsp[(2) - (3)].val))->nd_rval;
			    (yyval.val) = ripper_new_yylval(p, rb_intern_str(label), rval, label);
			    RNODE((yyval.val))->nd_loc = loc;
			}

			else {
			    yyerror1(&loc, "symbol literal with interpolation is not allowed");
			    (yyval.val) = 0;
			}
		    ;}
    break;

  case 537:
#line 4186 "ripper.y"
    {
		        (yyval.val) = (yyvsp[(2) - (2)].val);
		    ;}
    break;

  case 538:
#line 4190 "ripper.y"
    {
		        (yyval.val) = 0;
		    ;}
    break;

  case 539:
#line 4196 "ripper.y"
    {
		        (yyval.val) = 0;
		    ;}
    break;

  case 541:
#line 4203 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(1) - (3)].val));
			value_expr((yyvsp[(3) - (3)].val));
			(yyval.val) = NEW_DOT2((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(dot2,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 542:
#line 4212 "ripper.y"
    {
#if 0
			value_expr((yyvsp[(1) - (3)].val));
			value_expr((yyvsp[(3) - (3)].val));
			(yyval.val) = NEW_DOT3((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(dot3,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 543:
#line 4221 "ripper.y"
    {
#if 0
			YYLTYPE loc;
			loc.beg_pos = (yylsp[(2) - (2)]).end_pos;
			loc.end_pos = (yylsp[(2) - (2)]).end_pos;

			value_expr((yyvsp[(1) - (2)].val));
			(yyval.val) = NEW_DOT2((yyvsp[(1) - (2)].val), new_nil(&loc), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=Qnil;v3=dispatch2(dot2,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 544:
#line 4233 "ripper.y"
    {
#if 0
			YYLTYPE loc;
			loc.beg_pos = (yylsp[(2) - (2)]).end_pos;
			loc.end_pos = (yylsp[(2) - (2)]).end_pos;

			value_expr((yyvsp[(1) - (2)].val));
			(yyval.val) = NEW_DOT3((yyvsp[(1) - (2)].val), new_nil(&loc), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=Qnil;v3=dispatch2(dot3,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 548:
#line 4248 "ripper.y"
    {
#if 0
			YYLTYPE loc;
			loc.beg_pos = (yylsp[(1) - (2)]).beg_pos;
			loc.end_pos = (yylsp[(1) - (2)]).beg_pos;

			value_expr((yyvsp[(2) - (2)].val));
			(yyval.val) = NEW_DOT2(new_nil(&loc), (yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=Qnil;v2=(yyvsp[(2) - (2)].val);v3=dispatch2(dot2,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 549:
#line 4260 "ripper.y"
    {
#if 0
			YYLTYPE loc;
			loc.beg_pos = (yylsp[(1) - (2)]).beg_pos;
			loc.end_pos = (yylsp[(1) - (2)]).beg_pos;

			value_expr((yyvsp[(2) - (2)].val));
			(yyval.val) = NEW_DOT3(new_nil(&loc), (yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=Qnil;v2=(yyvsp[(2) - (2)].val);v3=dispatch2(dot3,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 558:
#line 4282 "ripper.y"
    {
#if 0
			if (!((yyval.val) = gettable(p, (yyvsp[(1) - (1)].val), &(yyloc)))) (yyval.val) = NEW_BEGIN(0, &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(var_ref,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 559:
#line 4289 "ripper.y"
    {
			token_info_push(p, "->", &(yylsp[(1) - (1)]));
		    ;}
    break;

  case 560:
#line 4293 "ripper.y"
    {
			(yyval.val) = (yyvsp[(3) - (3)].val);
#if 0
			nd_set_first_loc((yyval.val), (yylsp[(1) - (3)]).beg_pos);
#endif
		    ;}
    break;

  case 561:
#line 4302 "ripper.y"
    {
#if 0
			error_duplicate_pattern_variable(p, (yyvsp[(1) - (1)].val), &(yylsp[(1) - (1)]));
			(yyval.val) = assignable(p, (yyvsp[(1) - (1)].val), 0, &(yyloc));
#endif
			(yyval.val)=assignable(p, var_field(p, (yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 562:
#line 4312 "ripper.y"
    {
#if 0
			NODE *n = gettable(p, (yyvsp[(2) - (2)].val), &(yyloc));
			if (!(nd_type(n) == NODE_LVAR || nd_type(n) == NODE_DVAR)) {
			    compile_error(p, "%"PRIsVALUE": no such local variable", rb_id2str((yyvsp[(2) - (2)].val)));
			}
			(yyval.val) = n;
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(var_ref,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 563:
#line 4325 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_COLON3((yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(top_const_ref,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 564:
#line 4332 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_COLON2((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(const_path_ref,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 565:
#line 4339 "ripper.y"
    {
#if 0
			(yyval.val) = gettable(p, (yyvsp[(1) - (1)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(var_ref,v1);(yyval.val)=v2;}
		   ;}
    break;

  case 566:
#line 4350 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_RESBODY((yyvsp[(2) - (6)].val),
					 (yyvsp[(3) - (6)].val) ? block_append(p, node_assign(p, (yyvsp[(3) - (6)].val), NEW_ERRINFO(&(yylsp[(3) - (6)])), &(yylsp[(3) - (6)])), (yyvsp[(5) - (6)].val)) : (yyvsp[(5) - (6)].val),
					 (yyvsp[(6) - (6)].val), &(yyloc));
			fixpos((yyval.val), (yyvsp[(2) - (6)].val)?(yyvsp[(2) - (6)].val):(yyvsp[(5) - (6)].val));
#endif
			{VALUE v1,v2,v3,v4,v5;v1=escape_Qundef((yyvsp[(2) - (6)].val));v2=escape_Qundef((yyvsp[(3) - (6)].val));v3=escape_Qundef((yyvsp[(5) - (6)].val));v4=escape_Qundef((yyvsp[(6) - (6)].val));v5=dispatch4(rescue,v1,v2,v3,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 568:
#line 4363 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_LIST((yyvsp[(1) - (1)].val), &(yyloc));
#endif
			(yyval.val)=rb_ary_new3(1, get_value((yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 569:
#line 4370 "ripper.y"
    {
#if 0
			if (!((yyval.val) = splat_array((yyvsp[(1) - (1)].val)))) (yyval.val) = (yyvsp[(1) - (1)].val);
#endif
			(yyval.val)=(yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 571:
#line 4380 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (2)].val);
		    ;}
    break;

  case 573:
#line 4387 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (2)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(ensure,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 577:
#line 4401 "ripper.y"
    {
#if 0
			NODE *node = (yyvsp[(1) - (1)].val);
			if (!node) {
			    node = NEW_STR(STR_NEW0(), &(yyloc));
                            RB_OBJ_WRITTEN(p->ast, Qnil, node->nd_lit);
			}
			else {
			    node = evstr2dstr(p, node);
			}
			(yyval.val) = node;
#endif
			(yyval.val)=(yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 580:
#line 4420 "ripper.y"
    {
#if 0
			(yyval.val) = literal_concat(p, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=(yyvsp[(2) - (2)].val);v3=dispatch2(string_concat,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 581:
#line 4429 "ripper.y"
    {
#if 0
			(yyval.val) = heredoc_dedent(p, (yyvsp[(2) - (3)].val));
			if ((yyval.val)) nd_set_loc((yyval.val), &(yyloc));
#endif
			{VALUE v1,v2;v1=heredoc_dedent(p, (yyvsp[(2) - (3)].val));v2=dispatch1(string_literal,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 582:
#line 4439 "ripper.y"
    {
#if 0
			(yyval.val) = new_xstring(p, heredoc_dedent(p, (yyvsp[(2) - (3)].val)), &(yyloc));
#endif
			{VALUE v1,v2;v1=heredoc_dedent(p, (yyvsp[(2) - (3)].val));v2=dispatch1(xstring_literal,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 583:
#line 4448 "ripper.y"
    {
			(yyval.val) = new_regexp(p, (yyvsp[(2) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc));
		    ;}
    break;

  case 584:
#line 4454 "ripper.y"
    {
#if 0
			(yyval.val) = make_list((yyvsp[(3) - (4)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(3) - (4)].val);v2=dispatch1(array,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 585:
#line 4463 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			{VALUE v1;v1=dispatch0(words_new);(yyval.val)=v1;}
		    ;}
    break;

  case 586:
#line 4470 "ripper.y"
    {
#if 0
			(yyval.val) = list_append(p, (yyvsp[(1) - (3)].val), evstr2dstr(p, (yyvsp[(2) - (3)].val)));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(2) - (3)].val);v3=dispatch2(words_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 587:
#line 4479 "ripper.y"
    {{VALUE v1,v2,v3,v4;v1=dispatch0(word_new);v2=v1;v3=(yyvsp[(1) - (1)].val);v4=dispatch2(word_add,v2,v3);(yyval.val)=v4;};}
    break;

  case 588:
#line 4481 "ripper.y"
    {
#if 0
			(yyval.val) = literal_concat(p, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=(yyvsp[(2) - (2)].val);v3=dispatch2(word_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 589:
#line 4490 "ripper.y"
    {
#if 0
			(yyval.val) = make_list((yyvsp[(3) - (4)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(3) - (4)].val);v2=dispatch1(array,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 590:
#line 4499 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			{VALUE v1;v1=dispatch0(symbols_new);(yyval.val)=v1;}
		    ;}
    break;

  case 591:
#line 4506 "ripper.y"
    {
#if 0
			(yyval.val) = symbol_append(p, (yyvsp[(1) - (3)].val), evstr2dstr(p, (yyvsp[(2) - (3)].val)));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(2) - (3)].val);v3=dispatch2(symbols_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 592:
#line 4515 "ripper.y"
    {
#if 0
			(yyval.val) = make_list((yyvsp[(3) - (4)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(3) - (4)].val);v2=dispatch1(array,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 593:
#line 4524 "ripper.y"
    {
#if 0
			(yyval.val) = make_list((yyvsp[(3) - (4)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(3) - (4)].val);v2=dispatch1(array,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 594:
#line 4533 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			{VALUE v1;v1=dispatch0(qwords_new);(yyval.val)=v1;}
		    ;}
    break;

  case 595:
#line 4540 "ripper.y"
    {
#if 0
			(yyval.val) = list_append(p, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(2) - (3)].val);v3=dispatch2(qwords_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 596:
#line 4549 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			{VALUE v1;v1=dispatch0(qsymbols_new);(yyval.val)=v1;}
		    ;}
    break;

  case 597:
#line 4556 "ripper.y"
    {
#if 0
			(yyval.val) = symbol_append(p, (yyvsp[(1) - (3)].val), (yyvsp[(2) - (3)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(2) - (3)].val);v3=dispatch2(qsymbols_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 598:
#line 4565 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			{VALUE v1;v1=dispatch0(string_content);(yyval.val)=v1;}
#if 0
#endif
			(yyval.val) = ripper_new_yylval(p, 0, (yyval.val), 0);

		    ;}
    break;

  case 599:
#line 4576 "ripper.y"
    {
#if 0
			(yyval.val) = literal_concat(p, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=(yyvsp[(2) - (2)].val);v3=dispatch2(string_add,v1,v2);(yyval.val)=v3;}
#if 0
#endif
			if (ripper_is_node_yylval((yyvsp[(1) - (2)].val)) && ripper_is_node_yylval((yyvsp[(2) - (2)].val)) &&
			    !RNODE((yyvsp[(1) - (2)].val))->nd_cval) {
			    RNODE((yyvsp[(1) - (2)].val))->nd_cval = RNODE((yyvsp[(2) - (2)].val))->nd_cval;
			    RNODE((yyvsp[(1) - (2)].val))->nd_rval = add_mark_object(p, (yyval.val));
			    (yyval.val) = (yyvsp[(1) - (2)].val);
			}

		    ;}
    break;

  case 600:
#line 4594 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			{VALUE v1;v1=dispatch0(xstring_new);(yyval.val)=v1;}
		    ;}
    break;

  case 601:
#line 4601 "ripper.y"
    {
#if 0
			(yyval.val) = literal_concat(p, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val), &(yyloc));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=(yyvsp[(2) - (2)].val);v3=dispatch2(xstring_add,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 602:
#line 4610 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			{VALUE v1;v1=dispatch0(regexp_new);(yyval.val)=v1;}
#if 0
#endif
			(yyval.val) = ripper_new_yylval(p, 0, (yyval.val), 0);

		    ;}
    break;

  case 603:
#line 4621 "ripper.y"
    {
#if 0
			NODE *head = (yyvsp[(1) - (2)].val), *tail = (yyvsp[(2) - (2)].val);
			if (!head) {
			    (yyval.val) = tail;
			}
			else if (!tail) {
			    (yyval.val) = head;
			}
			else {
			    switch (nd_type(head)) {
			      case NODE_STR:
				nd_set_type(head, NODE_DSTR);
				break;
			      case NODE_DSTR:
				break;
			      default:
				head = list_append(p, NEW_DSTR(Qnil, &(yyloc)), head);
				break;
			    }
			    (yyval.val) = list_append(p, head, tail);
			}
#endif
			VALUE s1 = 1, s2 = 0, n1 = (yyvsp[(1) - (2)].val), n2 = (yyvsp[(2) - (2)].val);
			if (ripper_is_node_yylval(n1)) {
			    s1 = RNODE(n1)->nd_cval;
			    n1 = RNODE(n1)->nd_rval;
			}
			if (ripper_is_node_yylval(n2)) {
			    s2 = RNODE(n2)->nd_cval;
			    n2 = RNODE(n2)->nd_rval;
			}
			(yyval.val) = dispatch2(regexp_add, n1, n2);
			if (!s1 && s2) {
			    (yyval.val) = ripper_new_yylval(p, 0, (yyval.val), s2);
			}

		    ;}
    break;

  case 604:
#line 4662 "ripper.y"
    {(yyval.val)=ripper_new_yylval(p, 0, get_value((yyvsp[(1) - (1)].val)), (yyvsp[(1) - (1)].val));;}
    break;

  case 605:
#line 4664 "ripper.y"
    {
			/* need to backup p->lex.strterm so that a string literal `%&foo,#$&,bar&` can be parsed */
			(yyval.strterm) = p->lex.strterm;
			p->lex.strterm = 0;
			SET_LEX_STATE(EXPR_BEG);
		    ;}
    break;

  case 606:
#line 4671 "ripper.y"
    {
			p->lex.strterm = (yyvsp[(2) - (3)].strterm);
#if 0
			(yyval.val) = NEW_EVSTR((yyvsp[(3) - (3)].val), &(yyloc));
			nd_set_line((yyval.val), (yylsp[(3) - (3)]).end_pos.lineno);
#endif
			{VALUE v1,v2;v1=(yyvsp[(3) - (3)].val);v2=dispatch1(string_dvar,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 607:
#line 4680 "ripper.y"
    {
			CMDARG_PUSH(0);
			COND_PUSH(0);
		    ;}
    break;

  case 608:
#line 4684 "ripper.y"
    {
			/* need to backup p->lex.strterm so that a string literal `%!foo,#{ !0 },bar!` can be parsed */
			(yyval.strterm) = p->lex.strterm;
			p->lex.strterm = 0;
		    ;}
    break;

  case 609:
#line 4689 "ripper.y"
    {
			(yyval.num) = p->lex.state;
			SET_LEX_STATE(EXPR_BEG);
		    ;}
    break;

  case 610:
#line 4693 "ripper.y"
    {
			(yyval.num) = p->lex.brace_nest;
			p->lex.brace_nest = 0;
		    ;}
    break;

  case 611:
#line 4697 "ripper.y"
    {
			(yyval.num) = p->heredoc_indent;
			p->heredoc_indent = 0;
		    ;}
    break;

  case 612:
#line 4702 "ripper.y"
    {
			COND_POP();
			CMDARG_POP();
			p->lex.strterm = (yyvsp[(3) - (8)].strterm);
			SET_LEX_STATE((yyvsp[(4) - (8)].num));
			p->lex.brace_nest = (yyvsp[(5) - (8)].num);
			p->heredoc_indent = (yyvsp[(6) - (8)].num);
			p->heredoc_line_indent = -1;
#if 0
			if ((yyvsp[(7) - (8)].val)) (yyvsp[(7) - (8)].val)->flags &= ~NODE_FL_NEWLINE;
			(yyval.val) = new_evstr(p, (yyvsp[(7) - (8)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(7) - (8)].val);v2=dispatch1(string_embexpr,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 613:
#line 4719 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_GVAR((yyvsp[(1) - (1)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(var_ref,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 614:
#line 4726 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_IVAR((yyvsp[(1) - (1)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(var_ref,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 615:
#line 4733 "ripper.y"
    {
#if 0
			(yyval.val) = NEW_CVAR((yyvsp[(1) - (1)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(var_ref,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 619:
#line 4747 "ripper.y"
    {
			SET_LEX_STATE(EXPR_END);
#if 0
			(yyval.val) = NEW_LIT(ID2SYM((yyvsp[(2) - (2)].val)), &(yyloc));
#endif
			{VALUE v1,v2,v3,v4;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(symbol,v1);v3=v2;v4=dispatch1(symbol_literal,v3);(yyval.val)=v4;}
		    ;}
    break;

  case 624:
#line 4763 "ripper.y"
    {
			SET_LEX_STATE(EXPR_END);
#if 0
			(yyval.val) = dsym_node(p, (yyvsp[(2) - (3)].val), &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (3)].val);v2=dispatch1(dyna_symbol,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 626:
#line 4774 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (2)].val);
			RB_OBJ_WRITE(p->ast, &(yyval.val)->nd_lit, negate_lit(p, (yyval.val)->nd_lit));
#endif
			{VALUE v1,v2,v3;v1=ID2VAL(idUMinus);v2=(yyvsp[(2) - (2)].val);v3=dispatch2(unary,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 636:
#line 4796 "ripper.y"
    {(yyval.val) = KWD2EID(nil, (yyvsp[(1) - (1)].val));;}
    break;

  case 637:
#line 4797 "ripper.y"
    {(yyval.val) = KWD2EID(self, (yyvsp[(1) - (1)].val));;}
    break;

  case 638:
#line 4798 "ripper.y"
    {(yyval.val) = KWD2EID(true, (yyvsp[(1) - (1)].val));;}
    break;

  case 639:
#line 4799 "ripper.y"
    {(yyval.val) = KWD2EID(false, (yyvsp[(1) - (1)].val));;}
    break;

  case 640:
#line 4800 "ripper.y"
    {(yyval.val) = KWD2EID(_FILE__, (yyvsp[(1) - (1)].val));;}
    break;

  case 641:
#line 4801 "ripper.y"
    {(yyval.val) = KWD2EID(_LINE__, (yyvsp[(1) - (1)].val));;}
    break;

  case 642:
#line 4802 "ripper.y"
    {(yyval.val) = KWD2EID(_ENCODING__, (yyvsp[(1) - (1)].val));;}
    break;

  case 643:
#line 4806 "ripper.y"
    {
#if 0
			if (!((yyval.val) = gettable(p, (yyvsp[(1) - (1)].val), &(yyloc)))) (yyval.val) = NEW_BEGIN(0, &(yyloc));
#endif
			if (id_is_var(p, get_id((yyvsp[(1) - (1)].val)))) {
			    (yyval.val) = dispatch1(var_ref, (yyvsp[(1) - (1)].val));
			}
			else {
			    (yyval.val) = dispatch1(vcall, (yyvsp[(1) - (1)].val));
			}

		    ;}
    break;

  case 644:
#line 4819 "ripper.y"
    {
#if 0
			if (!((yyval.val) = gettable(p, (yyvsp[(1) - (1)].val), &(yyloc)))) (yyval.val) = NEW_BEGIN(0, &(yyloc));
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(var_ref,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 645:
#line 4828 "ripper.y"
    {
#if 0
			(yyval.val) = assignable(p, (yyvsp[(1) - (1)].val), 0, &(yyloc));
#endif
			(yyval.val)=assignable(p, var_field(p, (yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 646:
#line 4835 "ripper.y"
    {
#if 0
			(yyval.val) = assignable(p, (yyvsp[(1) - (1)].val), 0, &(yyloc));
#endif
			(yyval.val)=assignable(p, var_field(p, (yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 649:
#line 4848 "ripper.y"
    {
			SET_LEX_STATE(EXPR_BEG);
			p->command_start = TRUE;
		    ;}
    break;

  case 650:
#line 4853 "ripper.y"
    {
			(yyval.val) = (yyvsp[(3) - (4)].val);
		    ;}
    break;

  case 651:
#line 4857 "ripper.y"
    {
#if 0
			(yyval.val) = 0;
#endif
			(yyval.val)=Qnil;
		    ;}
    break;

  case 652:
#line 4866 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(2) - (3)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (3)].val);v2=dispatch1(paren,v1);(yyval.val)=v2;}
			SET_LEX_STATE(EXPR_BEG);
			p->command_start = TRUE;
		    ;}
    break;

  case 653:
#line 4875 "ripper.y"
    {
			arg_var(p, idFWD_REST);
#if idFWD_KWREST
			arg_var(p, idFWD_KWREST);
#endif
			arg_var(p, idFWD_BLOCK);
#if 0
			(yyval.val) = new_args_tail(p, Qnone, idFWD_KWREST, idFWD_BLOCK, &(yylsp[(4) - (5)]));
			(yyval.val) = new_args(p, (yyvsp[(2) - (5)].val), Qnone, idFWD_REST, Qnone, (yyval.val), &(yylsp[(4) - (5)]));
#endif
			{VALUE v1,v2;v1=params_new((yyvsp[(2) - (5)].val), Qnone, (yyvsp[(4) - (5)].val), Qnone, Qnone, Qnone, Qnone);v2=dispatch1(paren,v1);(yyval.val)=v2;}
			SET_LEX_STATE(EXPR_BEG);
			p->command_start = TRUE;
		    ;}
    break;

  case 654:
#line 4890 "ripper.y"
    {
			arg_var(p, idFWD_REST);
#if idFWD_KWREST
			arg_var(p, idFWD_KWREST);
#endif
			arg_var(p, idFWD_BLOCK);
#if 0
			(yyval.val) = new_args_tail(p, Qnone, idFWD_KWREST, idFWD_BLOCK, &(yylsp[(2) - (3)]));
			(yyval.val) = new_args(p, Qnone, Qnone, idFWD_REST, Qnone, (yyval.val), &(yylsp[(2) - (3)]));
#endif
			{VALUE v1,v2;v1=params_new(Qnone, Qnone, (yyvsp[(2) - (3)].val), Qnone, Qnone, Qnone, Qnone);v2=dispatch1(paren,v1);(yyval.val)=v2;}
			SET_LEX_STATE(EXPR_BEG);
			p->command_start = TRUE;
		    ;}
    break;

  case 655:
#line 4904 "ripper.y"
    {
			(yyval.num) = p->in_kwarg;
			p->in_kwarg = 1;
			SET_LEX_STATE(p->lex.state|EXPR_LABEL); /* force for args */
		    ;}
    break;

  case 656:
#line 4910 "ripper.y"
    {
			p->in_kwarg = !!(yyvsp[(1) - (3)].num);
			(yyval.val) = (yyvsp[(2) - (3)].val);
			SET_LEX_STATE(EXPR_BEG);
			p->command_start = TRUE;
		    ;}
    break;

  case 657:
#line 4919 "ripper.y"
    {
			(yyval.val) = new_args_tail(p, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val), &(yylsp[(3) - (4)]));
		    ;}
    break;

  case 658:
#line 4923 "ripper.y"
    {
			(yyval.val) = new_args_tail(p, (yyvsp[(1) - (2)].val), Qnone, (yyvsp[(2) - (2)].val), &(yylsp[(1) - (2)]));
		    ;}
    break;

  case 659:
#line 4927 "ripper.y"
    {
			(yyval.val) = new_args_tail(p, Qnone, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val), &(yylsp[(1) - (2)]));
		    ;}
    break;

  case 660:
#line 4931 "ripper.y"
    {
			(yyval.val) = new_args_tail(p, Qnone, ID2VAL(idNil), (yyvsp[(2) - (2)].val), &(yylsp[(1) - (2)]));
		    ;}
    break;

  case 661:
#line 4935 "ripper.y"
    {
			(yyval.val) = new_args_tail(p, Qnone, Qnone, (yyvsp[(1) - (1)].val), &(yylsp[(1) - (1)]));
		    ;}
    break;

  case 662:
#line 4941 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (2)].val);
		    ;}
    break;

  case 663:
#line 4945 "ripper.y"
    {
			(yyval.val) = new_args_tail(p, Qnone, Qnone, Qnone, &(yylsp[(0) - (0)]));
		    ;}
    break;

  case 664:
#line 4951 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (6)].val), (yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val), Qnone, (yyvsp[(6) - (6)].val), &(yyloc));
		    ;}
    break;

  case 665:
#line 4955 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (8)].val), (yyvsp[(3) - (8)].val), (yyvsp[(5) - (8)].val), (yyvsp[(7) - (8)].val), (yyvsp[(8) - (8)].val), &(yyloc));
		    ;}
    break;

  case 666:
#line 4959 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), Qnone, Qnone, (yyvsp[(4) - (4)].val), &(yyloc));
		    ;}
    break;

  case 667:
#line 4963 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (6)].val), (yyvsp[(3) - (6)].val), Qnone, (yyvsp[(5) - (6)].val), (yyvsp[(6) - (6)].val), &(yyloc));
		    ;}
    break;

  case 668:
#line 4967 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (4)].val), Qnone, (yyvsp[(3) - (4)].val), Qnone, (yyvsp[(4) - (4)].val), &(yyloc));
		    ;}
    break;

  case 669:
#line 4971 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (6)].val), Qnone, (yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val), (yyvsp[(6) - (6)].val), &(yyloc));
		    ;}
    break;

  case 670:
#line 4975 "ripper.y"
    {
			(yyval.val) = new_args(p, (yyvsp[(1) - (2)].val), Qnone, Qnone, Qnone, (yyvsp[(2) - (2)].val), &(yyloc));
		    ;}
    break;

  case 671:
#line 4979 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), Qnone, (yyvsp[(4) - (4)].val), &(yyloc));
		    ;}
    break;

  case 672:
#line 4983 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, (yyvsp[(1) - (6)].val), (yyvsp[(3) - (6)].val), (yyvsp[(5) - (6)].val), (yyvsp[(6) - (6)].val), &(yyloc));
		    ;}
    break;

  case 673:
#line 4987 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, (yyvsp[(1) - (2)].val), Qnone, Qnone, (yyvsp[(2) - (2)].val), &(yyloc));
		    ;}
    break;

  case 674:
#line 4991 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, (yyvsp[(1) - (4)].val), Qnone, (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val), &(yyloc));
		    ;}
    break;

  case 675:
#line 4995 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, Qnone, (yyvsp[(1) - (2)].val), Qnone, (yyvsp[(2) - (2)].val), &(yyloc));
		    ;}
    break;

  case 676:
#line 4999 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, Qnone, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val), (yyvsp[(4) - (4)].val), &(yyloc));
		    ;}
    break;

  case 677:
#line 5003 "ripper.y"
    {
			(yyval.val) = new_args(p, Qnone, Qnone, Qnone, Qnone, (yyvsp[(1) - (1)].val), &(yyloc));
		    ;}
    break;

  case 678:
#line 5007 "ripper.y"
    {
			(yyval.val) = new_args_tail(p, Qnone, Qnone, Qnone, &(yylsp[(0) - (0)]));
			(yyval.val) = new_args(p, Qnone, Qnone, Qnone, Qnone, (yyval.val), &(yylsp[(0) - (0)]));
		    ;}
    break;

  case 679:
#line 5014 "ripper.y"
    {
#if 0
			(yyval.val) = idDot3;
#endif
			{VALUE v1;v1=dispatch0(args_forward);(yyval.val)=v1;}
		    ;}
    break;

  case 680:
#line 5023 "ripper.y"
    {
#if 0
			yyerror1(&(yylsp[(1) - (1)]), "formal argument cannot be a constant");
			(yyval.val) = 0;
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(param_error,v1);(yyval.val)=v2;}ripper_error(p);
		    ;}
    break;

  case 681:
#line 5031 "ripper.y"
    {
#if 0
			yyerror1(&(yylsp[(1) - (1)]), "formal argument cannot be an instance variable");
			(yyval.val) = 0;
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(param_error,v1);(yyval.val)=v2;}ripper_error(p);
		    ;}
    break;

  case 682:
#line 5039 "ripper.y"
    {
#if 0
			yyerror1(&(yylsp[(1) - (1)]), "formal argument cannot be a global variable");
			(yyval.val) = 0;
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(param_error,v1);(yyval.val)=v2;}ripper_error(p);
		    ;}
    break;

  case 683:
#line 5047 "ripper.y"
    {
#if 0
			yyerror1(&(yylsp[(1) - (1)]), "formal argument cannot be a class variable");
			(yyval.val) = 0;
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (1)].val);v2=dispatch1(param_error,v1);(yyval.val)=v2;}ripper_error(p);
		    ;}
    break;

  case 685:
#line 5058 "ripper.y"
    {
			formal_argument(p, get_id((yyvsp[(1) - (1)].val)));
			p->max_numparam = ORDINAL_PARAM;
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 686:
#line 5066 "ripper.y"
    {
			ID id = get_id((yyvsp[(1) - (1)].val));
			arg_var(p, id);
			p->cur_arg = id;
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 687:
#line 5075 "ripper.y"
    {
			p->cur_arg = 0;
#if 0
			(yyval.val) = NEW_ARGS_AUX((yyvsp[(1) - (1)].val), 1, &NULL_LOC);
#endif
			(yyval.val)=get_value((yyvsp[(1) - (1)].val));
		    ;}
    break;

  case 688:
#line 5083 "ripper.y"
    {
#if 0
			ID tid = internal_id(p);
			YYLTYPE loc;
			loc.beg_pos = (yylsp[(2) - (3)]).beg_pos;
			loc.end_pos = (yylsp[(2) - (3)]).beg_pos;
			arg_var(p, tid);
			if (dyna_in_block(p)) {
			    (yyvsp[(2) - (3)].val)->nd_value = NEW_DVAR(tid, &loc);
			}
			else {
			    (yyvsp[(2) - (3)].val)->nd_value = NEW_LVAR(tid, &loc);
			}
			(yyval.val) = NEW_ARGS_AUX(tid, 1, &NULL_LOC);
			(yyval.val)->nd_next = (yyvsp[(2) - (3)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (3)].val);v2=dispatch1(mlhs_paren,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 689:
#line 5104 "ripper.y"
    {(yyval.val)=rb_ary_new3(1, get_value((yyvsp[(1) - (1)].val)));;}
    break;

  case 690:
#line 5106 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(1) - (3)].val);
			(yyval.val)->nd_plen++;
			(yyval.val)->nd_next = block_append(p, (yyval.val)->nd_next, (yyvsp[(3) - (3)].val)->nd_next);
			rb_discard_node(p, (yyvsp[(3) - (3)].val));
#endif
			(yyval.val)=rb_ary_push((yyvsp[(1) - (3)].val), get_value((yyvsp[(3) - (3)].val)));
		    ;}
    break;

  case 691:
#line 5119 "ripper.y"
    {
			ID id = get_id((yyvsp[(1) - (1)].val));
			arg_var(p, formal_argument(p, id));
			p->cur_arg = id;
			p->max_numparam = ORDINAL_PARAM;
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 692:
#line 5129 "ripper.y"
    {
			p->cur_arg = 0;
#if 0
			(yyval.val) = new_kw_arg(p, assignable(p, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val), &(yyloc)), &(yyloc));
#endif
			(yyval.val)=rb_assoc_new(get_value(assignable(p, (yyvsp[(1) - (2)].val))), get_value((yyvsp[(2) - (2)].val)));
		    ;}
    break;

  case 693:
#line 5137 "ripper.y"
    {
			p->cur_arg = 0;
#if 0
			(yyval.val) = new_kw_arg(p, assignable(p, (yyvsp[(1) - (1)].val), NODE_SPECIAL_REQUIRED_KEYWORD, &(yyloc)), &(yyloc));
#endif
			(yyval.val)=rb_assoc_new(get_value(assignable(p, (yyvsp[(1) - (1)].val))), 0);
		    ;}
    break;

  case 694:
#line 5147 "ripper.y"
    {
#if 0
			(yyval.val) = new_kw_arg(p, assignable(p, (yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val), &(yyloc)), &(yyloc));
#endif
			(yyval.val)=rb_assoc_new(get_value(assignable(p, (yyvsp[(1) - (2)].val))), get_value((yyvsp[(2) - (2)].val)));
		    ;}
    break;

  case 695:
#line 5154 "ripper.y"
    {
#if 0
			(yyval.val) = new_kw_arg(p, assignable(p, (yyvsp[(1) - (1)].val), NODE_SPECIAL_REQUIRED_KEYWORD, &(yyloc)), &(yyloc));
#endif
			(yyval.val)=rb_assoc_new(get_value(assignable(p, (yyvsp[(1) - (1)].val))), 0);
		    ;}
    break;

  case 696:
#line 5163 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(1) - (1)].val);
#endif
			(yyval.val)=rb_ary_new3(1, get_value((yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 697:
#line 5170 "ripper.y"
    {
#if 0
			(yyval.val) = kwd_append((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val)=rb_ary_push((yyvsp[(1) - (3)].val), get_value((yyvsp[(3) - (3)].val)));
		    ;}
    break;

  case 698:
#line 5180 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(1) - (1)].val);
#endif
			(yyval.val)=rb_ary_new3(1, get_value((yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 699:
#line 5187 "ripper.y"
    {
#if 0
			(yyval.val) = kwd_append((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val)=rb_ary_push((yyvsp[(1) - (3)].val), get_value((yyvsp[(3) - (3)].val)));
		    ;}
    break;

  case 702:
#line 5200 "ripper.y"
    {
#if 0
#endif
			{VALUE v1,v2;v1=Qnil;v2=dispatch1(nokw_param,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 703:
#line 5208 "ripper.y"
    {
			arg_var(p, shadowing_lvar(p, get_id((yyvsp[(2) - (2)].val))));
#if 0
			(yyval.val) = (yyvsp[(2) - (2)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(kwrest_param,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 704:
#line 5216 "ripper.y"
    {
#if 0
			(yyval.val) = internal_id(p);
			arg_var(p, (yyval.val));
#endif
			{VALUE v1,v2;v1=Qnil;v2=dispatch1(kwrest_param,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 705:
#line 5226 "ripper.y"
    {
			p->cur_arg = 0;
#if 0
			(yyval.val) = NEW_OPT_ARG(0, assignable(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc)), &(yyloc));
#endif
			(yyval.val)=rb_assoc_new(get_value(assignable(p, (yyvsp[(1) - (3)].val))), get_value((yyvsp[(3) - (3)].val)));
		    ;}
    break;

  case 706:
#line 5236 "ripper.y"
    {
			p->cur_arg = 0;
#if 0
			(yyval.val) = NEW_OPT_ARG(0, assignable(p, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), &(yyloc)), &(yyloc));
#endif
			(yyval.val)=rb_assoc_new(get_value(assignable(p, (yyvsp[(1) - (3)].val))), get_value((yyvsp[(3) - (3)].val)));
		    ;}
    break;

  case 707:
#line 5246 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(1) - (1)].val);
#endif
			(yyval.val)=rb_ary_new3(1, get_value((yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 708:
#line 5253 "ripper.y"
    {
#if 0
			(yyval.val) = opt_arg_append((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val)=rb_ary_push((yyvsp[(1) - (3)].val), get_value((yyvsp[(3) - (3)].val)));
		    ;}
    break;

  case 709:
#line 5262 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(1) - (1)].val);
#endif
			(yyval.val)=rb_ary_new3(1, get_value((yyvsp[(1) - (1)].val)));
		    ;}
    break;

  case 710:
#line 5269 "ripper.y"
    {
#if 0
			(yyval.val) = opt_arg_append((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
#endif
			(yyval.val)=rb_ary_push((yyvsp[(1) - (3)].val), get_value((yyvsp[(3) - (3)].val)));
		    ;}
    break;

  case 713:
#line 5282 "ripper.y"
    {
			arg_var(p, shadowing_lvar(p, get_id((yyvsp[(2) - (2)].val))));
#if 0
			(yyval.val) = (yyvsp[(2) - (2)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(rest_param,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 714:
#line 5290 "ripper.y"
    {
#if 0
			(yyval.val) = internal_id(p);
			arg_var(p, (yyval.val));
#endif
			{VALUE v1,v2;v1=Qnil;v2=dispatch1(rest_param,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 717:
#line 5304 "ripper.y"
    {
			arg_var(p, shadowing_lvar(p, get_id((yyvsp[(2) - (2)].val))));
#if 0
			(yyval.val) = (yyvsp[(2) - (2)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(blockarg,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 718:
#line 5314 "ripper.y"
    {
			(yyval.val) = (yyvsp[(2) - (2)].val);
		    ;}
    break;

  case 719:
#line 5318 "ripper.y"
    {
			(yyval.val) = Qnull;
		    ;}
    break;

  case 720:
#line 5324 "ripper.y"
    {
			value_expr((yyvsp[(1) - (1)].val));
			(yyval.val) = (yyvsp[(1) - (1)].val);
		    ;}
    break;

  case 721:
#line 5328 "ripper.y"
    {SET_LEX_STATE(EXPR_BEG);;}
    break;

  case 722:
#line 5329 "ripper.y"
    {
#if 0
			switch (nd_type((yyvsp[(3) - (4)].val))) {
			  case NODE_STR:
			  case NODE_DSTR:
			  case NODE_XSTR:
			  case NODE_DXSTR:
			  case NODE_DREGX:
			  case NODE_LIT:
			  case NODE_LIST:
			  case NODE_ZLIST:
			    yyerror1(&(yylsp[(3) - (4)]), "can't define singleton method for literals");
			    break;
			  default:
			    value_expr((yyvsp[(3) - (4)].val));
			    break;
			}
			(yyval.val) = (yyvsp[(3) - (4)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(3) - (4)].val);v2=dispatch1(paren,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 724:
#line 5354 "ripper.y"
    {
#if 0
			(yyval.val) = (yyvsp[(1) - (2)].val);
#endif
			{VALUE v1,v2;v1=(yyvsp[(1) - (2)].val);v2=dispatch1(assoclist_from_args,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 725:
#line 5363 "ripper.y"
    {(yyval.val)=rb_ary_new3(1, get_value((yyvsp[(1) - (1)].val)));;}
    break;

  case 726:
#line 5365 "ripper.y"
    {
#if 0
			NODE *assocs = (yyvsp[(1) - (3)].val);
			NODE *tail = (yyvsp[(3) - (3)].val);
			if (!assocs) {
			    assocs = tail;
			}
			else if (tail) {
                            if (assocs->nd_head &&
                                !tail->nd_head && nd_type(tail->nd_next) == NODE_LIST &&
                                nd_type(tail->nd_next->nd_head) == NODE_HASH) {
                                /* DSTAR */
                                tail = tail->nd_next->nd_head->nd_head;
                            }
			    assocs = list_concat(assocs, tail);
			}
			(yyval.val) = assocs;
#endif
			(yyval.val)=rb_ary_push((yyvsp[(1) - (3)].val), get_value((yyvsp[(3) - (3)].val)));
		    ;}
    break;

  case 727:
#line 5388 "ripper.y"
    {
#if 0
			if (nd_type((yyvsp[(1) - (3)].val)) == NODE_STR) {
			    nd_set_type((yyvsp[(1) - (3)].val), NODE_LIT);
			    RB_OBJ_WRITE(p->ast, &(yyvsp[(1) - (3)].val)->nd_lit, rb_fstring((yyvsp[(1) - (3)].val)->nd_lit));
			}
			(yyval.val) = list_append(p, NEW_LIST((yyvsp[(1) - (3)].val), &(yyloc)), (yyvsp[(3) - (3)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (3)].val);v2=(yyvsp[(3) - (3)].val);v3=dispatch2(assoc_new,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 728:
#line 5399 "ripper.y"
    {
#if 0
			(yyval.val) = list_append(p, NEW_LIST(NEW_LIT(ID2SYM((yyvsp[(1) - (2)].val)), &(yylsp[(1) - (2)])), &(yyloc)), (yyvsp[(2) - (2)].val));
#endif
			{VALUE v1,v2,v3;v1=(yyvsp[(1) - (2)].val);v2=(yyvsp[(2) - (2)].val);v3=dispatch2(assoc_new,v1,v2);(yyval.val)=v3;}
		    ;}
    break;

  case 729:
#line 5406 "ripper.y"
    {
#if 0
			YYLTYPE loc = code_loc_gen(&(yylsp[(1) - (4)]), &(yylsp[(3) - (4)]));
			(yyval.val) = list_append(p, NEW_LIST(dsym_node(p, (yyvsp[(2) - (4)].val), &loc), &loc), (yyvsp[(4) - (4)].val));
#endif
			{VALUE v1,v2,v3,v4,v5;v1=(yyvsp[(2) - (4)].val);v2=dispatch1(dyna_symbol,v1);v3=v2;v4=(yyvsp[(4) - (4)].val);v5=dispatch2(assoc_new,v3,v4);(yyval.val)=v5;}
		    ;}
    break;

  case 730:
#line 5414 "ripper.y"
    {
#if 0
                        if (nd_type((yyvsp[(2) - (2)].val)) == NODE_HASH &&
                            !((yyvsp[(2) - (2)].val)->nd_head && (yyvsp[(2) - (2)].val)->nd_head->nd_alen)) {
                            static VALUE empty_hash;
                            if (!empty_hash) {
                                empty_hash = rb_obj_freeze(rb_hash_new());
                                rb_gc_register_mark_object(empty_hash);
                            }
                            (yyval.val) = list_append(p, NEW_LIST(0, &(yyloc)), NEW_LIT(empty_hash, &(yyloc)));
                        }
                        else
                            (yyval.val) = list_append(p, NEW_LIST(0, &(yyloc)), (yyvsp[(2) - (2)].val));
#endif
			{VALUE v1,v2;v1=(yyvsp[(2) - (2)].val);v2=dispatch1(assoc_splat,v1);(yyval.val)=v2;}
		    ;}
    break;

  case 757:
#line 5482 "ripper.y"
    {yyerrok;token_flush(p);;}
    break;

  case 758:
#line 5483 "ripper.y"
    {token_flush(p);;}
    break;

  case 760:
#line 5487 "ripper.y"
    {yyerrok;;}
    break;

  case 761:
#line 5491 "ripper.y"
    {
			(yyval.val) = Qnull;
		    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 12100 "ripper.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, p, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (p, 0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (p, yymsg, yystate, yychar);
	    yyerror (&yylloc, p, yymsg);
	  }
	else
	  {
	    yyerror (&yylloc, p, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval, &yylloc, p);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
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

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp, p);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, p, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc, p);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp, p);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 5495 "ripper.y"

# undef p
# undef yylex
# undef yylval
# define yylval  (*p->lval)

static int regx_options(struct parser_params*);
static int tokadd_string(struct parser_params*,int,int,int,long*,rb_encoding**,rb_encoding**);
static void tokaddmbc(struct parser_params *p, int c, rb_encoding *enc);
static enum yytokentype parse_string(struct parser_params*,rb_strterm_literal_t*);
static enum yytokentype here_document(struct parser_params*,rb_strterm_heredoc_t*);

#ifndef RIPPER
# define set_yylval_node(x) {				\
  YYLTYPE _cur_loc;					\
  rb_parser_set_location(p, &_cur_loc);			\
  yylval.node = (x);					\
}
# define set_yylval_str(x) \
do { \
  set_yylval_node(NEW_STR(x, &_cur_loc)); \
  RB_OBJ_WRITTEN(p->ast, Qnil, x); \
} while(0)
# define set_yylval_literal(x) \
do { \
  set_yylval_node(NEW_LIT(x, &_cur_loc)); \
  RB_OBJ_WRITTEN(p->ast, Qnil, x); \
} while(0)
# define set_yylval_num(x) (yylval.num = (x))
# define set_yylval_id(x)  (yylval.id = (x))
# define set_yylval_name(x)  (yylval.id = (x))
# define yylval_id() (yylval.id)
#else
static inline VALUE
ripper_yylval_id(struct parser_params *p, ID x)
{
    return ripper_new_yylval(p, x, ID2SYM(x), 0);
}
# define set_yylval_str(x) (yylval.val = add_mark_object(p, (x)))
# define set_yylval_num(x) (yylval.val = ripper_new_yylval(p, (x), 0, 0))
# define set_yylval_id(x)  (void)(x)
# define set_yylval_name(x) (void)(yylval.val = ripper_yylval_id(p, x))
# define set_yylval_literal(x) add_mark_object(p, (x))
# define set_yylval_node(x) (void)(x)
# define yylval_id() yylval.id
# define _cur_loc NULL_LOC /* dummy */
#endif

#define set_yylval_noname() set_yylval_id(keyword_nil)

#ifndef RIPPER
#define literal_flush(p, ptr) ((p)->lex.ptok = (ptr))
#define dispatch_scan_event(p, t) ((void)0)
#define dispatch_delayed_token(p, t) ((void)0)
#define has_delayed_token(p) (0)
#else
#define literal_flush(p, ptr) ((void)(ptr))

#define yylval_rval (*(RB_TYPE_P(yylval.val, T_NODE) ? &yylval.node->nd_rval : &yylval.val))

static inline VALUE
intern_sym(const char *name)
{
    ID id = rb_intern_const(name);
    return ID2SYM(id);
}

static int
ripper_has_scan_event(struct parser_params *p)
{
    if (p->lex.pcur < p->lex.ptok) rb_raise(rb_eRuntimeError, "lex.pcur < lex.ptok");
    return p->lex.pcur > p->lex.ptok;
}

static VALUE
ripper_scan_event_val(struct parser_params *p, enum yytokentype t)
{
    VALUE str = STR_NEW(p->lex.ptok, p->lex.pcur - p->lex.ptok);
    VALUE rval = ripper_dispatch1(p, ripper_token2eventid(t), str);
    token_flush(p);
    return rval;
}

static void
ripper_dispatch_scan_event(struct parser_params *p, enum yytokentype t)
{
    if (!ripper_has_scan_event(p)) return;
    add_mark_object(p, yylval_rval = ripper_scan_event_val(p, t));
}
#define dispatch_scan_event(p, t) ripper_dispatch_scan_event(p, t)

static void
ripper_dispatch_delayed_token(struct parser_params *p, enum yytokentype t)
{
    int saved_line = p->ruby_sourceline;
    const char *saved_tokp = p->lex.ptok;

    if (NIL_P(p->delayed.token)) return;
    p->ruby_sourceline = p->delayed.line;
    p->lex.ptok = p->lex.pbeg + p->delayed.col;
    add_mark_object(p, yylval_rval = ripper_dispatch1(p, ripper_token2eventid(t), p->delayed.token));
    p->delayed.token = Qnil;
    p->ruby_sourceline = saved_line;
    p->lex.ptok = saved_tokp;
}
#define dispatch_delayed_token(p, t) ripper_dispatch_delayed_token(p, t)
#define has_delayed_token(p) (!NIL_P(p->delayed.token))
#endif /* RIPPER */

#include "ruby/regex.h"
#include "ruby/util.h"

static inline int
is_identchar(const char *ptr, const char *MAYBE_UNUSED(ptr_end), rb_encoding *enc)
{
    return rb_enc_isalnum((unsigned char)*ptr, enc) || *ptr == '_' || !ISASCII(*ptr);
}

static inline int
parser_is_identchar(struct parser_params *p)
{
    return !(p)->eofp && is_identchar(p->lex.pcur-1, p->lex.pend, p->enc);
}

static inline int
parser_isascii(struct parser_params *p)
{
    return ISASCII(*(p->lex.pcur-1));
}

static void
token_info_setup(token_info *ptinfo, const char *ptr, const rb_code_location_t *loc)
{
    int column = 1, nonspc = 0, i;
    for (i = 0; i < loc->beg_pos.column; i++, ptr++) {
	if (*ptr == '\t') {
	    column = (((column - 1) / TAB_WIDTH) + 1) * TAB_WIDTH;
	}
	column++;
	if (*ptr != ' ' && *ptr != '\t') {
	    nonspc = 1;
	}
    }

    ptinfo->beg = loc->beg_pos;
    ptinfo->indent = column;
    ptinfo->nonspc = nonspc;
}

static void
token_info_push(struct parser_params *p, const char *token, const rb_code_location_t *loc)
{
    token_info *ptinfo;

    if (!p->token_info_enabled) return;
    ptinfo = ALLOC(token_info);
    ptinfo->token = token;
    ptinfo->next = p->token_info;
    token_info_setup(ptinfo, p->lex.pbeg, loc);

    p->token_info = ptinfo;
}

static void
token_info_pop(struct parser_params *p, const char *token, const rb_code_location_t *loc)
{
    token_info *ptinfo_beg = p->token_info;

    if (!ptinfo_beg) return;
    p->token_info = ptinfo_beg->next;

    /* indentation check of matched keywords (begin..end, if..end, etc.) */
    token_info_warn(p, token, ptinfo_beg, 1, loc);
    ruby_sized_xfree(ptinfo_beg, sizeof(*ptinfo_beg));
}

static void
token_info_warn(struct parser_params *p, const char *token, token_info *ptinfo_beg, int same, const rb_code_location_t *loc)
{
    token_info ptinfo_end_body, *ptinfo_end = &ptinfo_end_body;
    if (!p->token_info_enabled) return;
    if (!ptinfo_beg) return;
    token_info_setup(ptinfo_end, p->lex.pbeg, loc);
    if (ptinfo_beg->beg.lineno == ptinfo_end->beg.lineno) return; /* ignore one-line block */
    if (ptinfo_beg->nonspc || ptinfo_end->nonspc) return; /* ignore keyword in the middle of a line */
    if (ptinfo_beg->indent == ptinfo_end->indent) return; /* the indents are matched */
    if (!same && ptinfo_beg->indent < ptinfo_end->indent) return;
    rb_warn3L(ptinfo_end->beg.lineno,
	      "mismatched indentations at '%s' with '%s' at %d",
	      WARN_S(token), WARN_S(ptinfo_beg->token), WARN_I(ptinfo_beg->beg.lineno));
}

static int
parser_precise_mbclen(struct parser_params *p, const char *ptr)
{
    int len = rb_enc_precise_mbclen(ptr, p->lex.pend, p->enc);
    if (!MBCLEN_CHARFOUND_P(len)) {
	compile_error(p, "invalid multibyte char (%s)", rb_enc_name(p->enc));
	return -1;
    }
    return len;
}

#ifndef RIPPER
static void ruby_show_error_line(VALUE errbuf, const YYLTYPE *yylloc, int lineno, VALUE str);

static inline void
parser_show_error_line(struct parser_params *p, const YYLTYPE *yylloc)
{
    VALUE str;
    int lineno = p->ruby_sourceline;
    if (!yylloc) {
	return;
    }
    else if (yylloc->beg_pos.lineno == lineno) {
	str = p->lex.lastline;
    }
    else {
	return;
    }
    ruby_show_error_line(p->error_buffer, yylloc, lineno, str);
}

static int
parser_yyerror(struct parser_params *p, const YYLTYPE *yylloc, const char *msg)
{
    YYLTYPE current;

    if (!yylloc) {
	yylloc = RUBY_SET_YYLLOC(current);
    }
    else if ((p->ruby_sourceline != yylloc->beg_pos.lineno &&
	      p->ruby_sourceline != yylloc->end_pos.lineno) ||
	     (yylloc->beg_pos.lineno == yylloc->end_pos.lineno &&
	      yylloc->beg_pos.column == yylloc->end_pos.column)) {
	yylloc = 0;
    }
    compile_error(p, "%s", msg);
    parser_show_error_line(p, yylloc);
    return 0;
}

static void
ruby_show_error_line(VALUE errbuf, const YYLTYPE *yylloc, int lineno, VALUE str)
{
    VALUE mesg;
    const int max_line_margin = 30;
    const char *ptr, *ptr_end, *pt, *pb;
    const char *pre = "", *post = "", *pend;
    const char *code = "", *caret = "";
    const char *lim;
    const char *const pbeg = RSTRING_PTR(str);
    char *buf;
    long len;
    int i;

    if (!yylloc) return;
    pend = RSTRING_END(str);
    if (pend > pbeg && pend[-1] == '\n') {
	if (--pend > pbeg && pend[-1] == '\r') --pend;
    }

    pt = pend;
    if (lineno == yylloc->end_pos.lineno &&
	(pend - pbeg) > yylloc->end_pos.column) {
	pt = pbeg + yylloc->end_pos.column;
    }

    ptr = ptr_end = pt;
    lim = ptr - pbeg > max_line_margin ? ptr - max_line_margin : pbeg;
    while ((lim < ptr) && (*(ptr-1) != '\n')) ptr--;

    lim = pend - ptr_end > max_line_margin ? ptr_end + max_line_margin : pend;
    while ((ptr_end < lim) && (*ptr_end != '\n') && (*ptr_end != '\r')) ptr_end++;

    len = ptr_end - ptr;
    if (len > 4) {
	if (ptr > pbeg) {
	    ptr = rb_enc_prev_char(pbeg, ptr, pt, rb_enc_get(str));
	    if (ptr > pbeg) pre = "...";
	}
	if (ptr_end < pend) {
	    ptr_end = rb_enc_prev_char(pt, ptr_end, pend, rb_enc_get(str));
	    if (ptr_end < pend) post = "...";
	}
    }
    pb = pbeg;
    if (lineno == yylloc->beg_pos.lineno) {
	pb += yylloc->beg_pos.column;
	if (pb > pt) pb = pt;
    }
    if (pb < ptr) pb = ptr;
    if (len <= 4 && yylloc->beg_pos.lineno == yylloc->end_pos.lineno) {
	return;
    }
    if (RTEST(errbuf)) {
	mesg = rb_attr_get(errbuf, idMesg);
	if (RSTRING_LEN(mesg) > 0 && *(RSTRING_END(mesg)-1) != '\n')
	    rb_str_cat_cstr(mesg, "\n");
    }
    else {
	mesg = rb_enc_str_new(0, 0, rb_enc_get(str));
    }
    if (!errbuf && rb_stderr_tty_p()) {
#define CSI_BEGIN "\033["
#define CSI_SGR "m"
	rb_str_catf(mesg,
		    CSI_BEGIN""CSI_SGR"%s" /* pre */
		    CSI_BEGIN"1"CSI_SGR"%.*s"
		    CSI_BEGIN"1;4"CSI_SGR"%.*s"
		    CSI_BEGIN";1"CSI_SGR"%.*s"
		    CSI_BEGIN""CSI_SGR"%s" /* post */
		    "\n",
		    pre,
		    (int)(pb - ptr), ptr,
		    (int)(pt - pb), pb,
		    (int)(ptr_end - pt), pt,
		    post);
    }
    else {
	char *p2;

	len = ptr_end - ptr;
	lim = pt < pend ? pt : pend;
	i = (int)(lim - ptr);
	buf = ALLOCA_N(char, i+2);
	code = ptr;
	caret = p2 = buf;
	if (ptr <= pb) {
	    while (ptr < pb) {
		*p2++ = *ptr++ == '\t' ? '\t' : ' ';
	    }
	    *p2++ = '^';
	    ptr++;
	}
	if (lim > ptr) {
	    memset(p2, '~', (lim - ptr));
	    p2 += (lim - ptr);
	}
	*p2 = '\0';
	rb_str_catf(mesg, "%s%.*s%s\n""%s%s\n",
		    pre, (int)len, code, post,
		    pre, caret);
    }
    if (!errbuf) rb_write_error_str(mesg);
}
#else
static int
parser_yyerror(struct parser_params *p, const YYLTYPE *yylloc, const char *msg)
{
    const char *pcur = 0, *ptok = 0;
    if (yylloc &&
	p->ruby_sourceline == yylloc->beg_pos.lineno &&
	p->ruby_sourceline == yylloc->end_pos.lineno) {
	pcur = p->lex.pcur;
	ptok = p->lex.ptok;
	p->lex.ptok = p->lex.pbeg + yylloc->beg_pos.column;
	p->lex.pcur = p->lex.pbeg + yylloc->end_pos.column;
    }
    dispatch1(parse_error, STR_NEW2(msg));
    ripper_error(p);
    if (pcur) {
	p->lex.ptok = ptok;
	p->lex.pcur = pcur;
    }
    return 0;
}

static inline void
parser_show_error_line(struct parser_params *p, const YYLTYPE *yylloc)
{
}
#endif /* !RIPPER */

#ifndef RIPPER
static int
vtable_size(const struct vtable *tbl)
{
    if (!DVARS_TERMINAL_P(tbl)) {
	return tbl->pos;
    }
    else {
	return 0;
    }
}
#endif

static struct vtable *
vtable_alloc_gen(struct parser_params *p, int line, struct vtable *prev)
{
    struct vtable *tbl = ALLOC(struct vtable);
    tbl->pos = 0;
    tbl->capa = 8;
    tbl->tbl = ALLOC_N(ID, tbl->capa);
    tbl->prev = prev;
#ifndef RIPPER
    if (p->debug) {
	rb_parser_printf(p, "vtable_alloc:%d: %p\n", line, (void *)tbl);
    }
#endif
    return tbl;
}
#define vtable_alloc(prev) vtable_alloc_gen(p, __LINE__, prev)

static void
vtable_free_gen(struct parser_params *p, int line, const char *name,
		struct vtable *tbl)
{
#ifndef RIPPER
    if (p->debug) {
	rb_parser_printf(p, "vtable_free:%d: %s(%p)\n", line, name, (void *)tbl);
    }
#endif
    if (!DVARS_TERMINAL_P(tbl)) {
	if (tbl->tbl) {
	    ruby_sized_xfree(tbl->tbl, tbl->capa * sizeof(ID));
	}
	ruby_sized_xfree(tbl, sizeof(tbl));
    }
}
#define vtable_free(tbl) vtable_free_gen(p, __LINE__, #tbl, tbl)

static void
vtable_add_gen(struct parser_params *p, int line, const char *name,
	       struct vtable *tbl, ID id)
{
#ifndef RIPPER
    if (p->debug) {
	rb_parser_printf(p, "vtable_add:%d: %s(%p), %s\n",
			 line, name, (void *)tbl, rb_id2name(id));
    }
#endif
    if (DVARS_TERMINAL_P(tbl)) {
	rb_parser_fatal(p, "vtable_add: vtable is not allocated (%p)", (void *)tbl);
	return;
    }
    if (tbl->pos == tbl->capa) {
	tbl->capa = tbl->capa * 2;
	SIZED_REALLOC_N(tbl->tbl, ID, tbl->capa, tbl->pos);
    }
    tbl->tbl[tbl->pos++] = id;
}
#define vtable_add(tbl, id) vtable_add_gen(p, __LINE__, #tbl, tbl, id)

#ifndef RIPPER
static void
vtable_pop_gen(struct parser_params *p, int line, const char *name,
	       struct vtable *tbl, int n)
{
    if (p->debug) {
	rb_parser_printf(p, "vtable_pop:%d: %s(%p), %d\n",
			 line, name, (void *)tbl, n);
    }
    if (tbl->pos < n) {
	rb_parser_fatal(p, "vtable_pop: unreachable (%d < %d)", tbl->pos, n);
	return;
    }
    tbl->pos -= n;
}
#define vtable_pop(tbl, n) vtable_pop_gen(p, __LINE__, #tbl, tbl, n)
#endif

static int
vtable_included(const struct vtable * tbl, ID id)
{
    int i;

    if (!DVARS_TERMINAL_P(tbl)) {
	for (i = 0; i < tbl->pos; i++) {
	    if (tbl->tbl[i] == id) {
		return i+1;
	    }
	}
    }
    return 0;
}

static void parser_prepare(struct parser_params *p);

#ifndef RIPPER
static NODE *parser_append_options(struct parser_params *p, NODE *node);

static VALUE
debug_lines(VALUE fname)
{
    ID script_lines;
    CONST_ID(script_lines, "SCRIPT_LINES__");
    if (rb_const_defined_at(rb_cObject, script_lines)) {
	VALUE hash = rb_const_get_at(rb_cObject, script_lines);
	if (RB_TYPE_P(hash, T_HASH)) {
	    VALUE lines = rb_ary_new();
	    rb_hash_aset(hash, fname, lines);
	    return lines;
	}
    }
    return 0;
}

static int
e_option_supplied(struct parser_params *p)
{
    return strcmp(p->ruby_sourcefile, "-e") == 0;
}

static VALUE
yycompile0(VALUE arg)
{
    int n;
    NODE *tree;
    struct parser_params *p = (struct parser_params *)arg;
    VALUE cov = Qfalse;

    if (!compile_for_eval && !NIL_P(p->ruby_sourcefile_string)) {
	p->debug_lines = debug_lines(p->ruby_sourcefile_string);
	if (p->debug_lines && p->ruby_sourceline > 0) {
	    VALUE str = STR_NEW0();
	    n = p->ruby_sourceline;
	    do {
		rb_ary_push(p->debug_lines, str);
	    } while (--n);
	}

	if (!e_option_supplied(p)) {
	    cov = Qtrue;
	}
    }

    parser_prepare(p);
#define RUBY_DTRACE_PARSE_HOOK(name) \
    if (RUBY_DTRACE_PARSE_##name##_ENABLED()) { \
	RUBY_DTRACE_PARSE_##name(p->ruby_sourcefile, p->ruby_sourceline); \
    }
    RUBY_DTRACE_PARSE_HOOK(BEGIN);
    n = yyparse(p);
    RUBY_DTRACE_PARSE_HOOK(END);
    p->debug_lines = 0;

    p->lex.strterm = 0;
    p->lex.pcur = p->lex.pbeg = p->lex.pend = 0;
    p->lex.prevline = p->lex.lastline = p->lex.nextline = 0;
    if (n || p->error_p) {
	VALUE mesg = p->error_buffer;
	if (!mesg) {
	    mesg = rb_class_new_instance(0, 0, rb_eSyntaxError);
	}
	rb_set_errinfo(mesg);
	return FALSE;
    }
    tree = p->eval_tree;
    if (!tree) {
	tree = NEW_NIL(&NULL_LOC);
    }
    else {
	VALUE opt = p->compile_option;
	NODE *prelude;
	NODE *body = parser_append_options(p, tree->nd_body);
	if (!opt) opt = rb_obj_hide(rb_ident_hash_new());
	rb_hash_aset(opt, rb_sym_intern_ascii_cstr("coverage_enabled"), cov);
	prelude = block_append(p, p->eval_tree_begin, body);
	tree->nd_body = prelude;
        RB_OBJ_WRITE(p->ast, &p->ast->body.compile_option, opt);
    }
    p->ast->body.root = tree;
    p->ast->body.line_count = p->line_count;
    return TRUE;
}

static rb_ast_t *
yycompile(VALUE vparser, struct parser_params *p, VALUE fname, int line)
{
    rb_ast_t *ast;
    if (NIL_P(fname)) {
	p->ruby_sourcefile_string = Qnil;
	p->ruby_sourcefile = "(none)";
    }
    else {
	p->ruby_sourcefile_string = rb_fstring(fname);
	p->ruby_sourcefile = StringValueCStr(fname);
    }
    p->ruby_sourceline = line - 1;

    p->ast = ast = rb_ast_new();
    rb_suppress_tracing(yycompile0, (VALUE)p);
    p->ast = 0;
    RB_GC_GUARD(vparser); /* prohibit tail call optimization */

    return ast;
}
#endif /* !RIPPER */

static rb_encoding *
must_be_ascii_compatible(VALUE s)
{
    rb_encoding *enc = rb_enc_get(s);
    if (!rb_enc_asciicompat(enc)) {
	rb_raise(rb_eArgError, "invalid source encoding");
    }
    return enc;
}

static VALUE
lex_get_str(struct parser_params *p, VALUE s)
{
    char *beg, *end, *start;
    long len;

    beg = RSTRING_PTR(s);
    len = RSTRING_LEN(s);
    start = beg;
    if (p->lex.gets_.ptr) {
	if (len == p->lex.gets_.ptr) return Qnil;
	beg += p->lex.gets_.ptr;
	len -= p->lex.gets_.ptr;
    }
    end = memchr(beg, '\n', len);
    if (end) len = ++end - beg;
    p->lex.gets_.ptr += len;
    return rb_str_subseq(s, beg - start, len);
}

static VALUE
lex_getline(struct parser_params *p)
{
    VALUE line = (*p->lex.gets)(p, p->lex.input);
    if (NIL_P(line)) return line;
    must_be_ascii_compatible(line);
#ifndef RIPPER
    if (p->debug_lines) {
	rb_enc_associate(line, p->enc);
	rb_ary_push(p->debug_lines, line);
    }
#endif
    p->line_count++;
    return line;
}

static const rb_data_type_t parser_data_type;

#ifndef RIPPER
static rb_ast_t*
parser_compile_string(VALUE vparser, VALUE fname, VALUE s, int line)
{
    struct parser_params *p;

    TypedData_Get_Struct(vparser, struct parser_params, &parser_data_type, p);

    p->lex.gets = lex_get_str;
    p->lex.gets_.ptr = 0;
    p->lex.input = rb_str_new_frozen(s);
    p->lex.pbeg = p->lex.pcur = p->lex.pend = 0;

    return yycompile(vparser, p, fname, line);
}

rb_ast_t*
rb_parser_compile_string(VALUE vparser, const char *f, VALUE s, int line)
{
    return rb_parser_compile_string_path(vparser, rb_filesystem_str_new_cstr(f), s, line);
}

rb_ast_t*
rb_parser_compile_string_path(VALUE vparser, VALUE f, VALUE s, int line)
{
    must_be_ascii_compatible(s);
    return parser_compile_string(vparser, f, s, line);
}

VALUE rb_io_gets_internal(VALUE io);

static VALUE
lex_io_gets(struct parser_params *p, VALUE io)
{
    return rb_io_gets_internal(io);
}

rb_ast_t*
rb_parser_compile_file_path(VALUE vparser, VALUE fname, VALUE file, int start)
{
    struct parser_params *p;

    TypedData_Get_Struct(vparser, struct parser_params, &parser_data_type, p);

    p->lex.gets = lex_io_gets;
    p->lex.input = file;
    p->lex.pbeg = p->lex.pcur = p->lex.pend = 0;

    return yycompile(vparser, p, fname, start);
}

static VALUE
lex_generic_gets(struct parser_params *p, VALUE input)
{
    return (*p->lex.gets_.call)(input, p->line_count);
}

rb_ast_t*
rb_parser_compile_generic(VALUE vparser, VALUE (*lex_gets)(VALUE, int), VALUE fname, VALUE input, int start)
{
    struct parser_params *p;

    TypedData_Get_Struct(vparser, struct parser_params, &parser_data_type, p);

    p->lex.gets = lex_generic_gets;
    p->lex.gets_.call = lex_gets;
    p->lex.input = input;
    p->lex.pbeg = p->lex.pcur = p->lex.pend = 0;

    return yycompile(vparser, p, fname, start);
}
#endif  /* !RIPPER */

#define STR_FUNC_ESCAPE 0x01
#define STR_FUNC_EXPAND 0x02
#define STR_FUNC_REGEXP 0x04
#define STR_FUNC_QWORDS 0x08
#define STR_FUNC_SYMBOL 0x10
#define STR_FUNC_INDENT 0x20
#define STR_FUNC_LABEL  0x40
#define STR_FUNC_LIST   0x4000
#define STR_FUNC_TERM   0x8000

enum string_type {
    str_label  = STR_FUNC_LABEL,
    str_squote = (0),
    str_dquote = (STR_FUNC_EXPAND),
    str_xquote = (STR_FUNC_EXPAND),
    str_regexp = (STR_FUNC_REGEXP|STR_FUNC_ESCAPE|STR_FUNC_EXPAND),
    str_sword  = (STR_FUNC_QWORDS|STR_FUNC_LIST),
    str_dword  = (STR_FUNC_QWORDS|STR_FUNC_EXPAND|STR_FUNC_LIST),
    str_ssym   = (STR_FUNC_SYMBOL),
    str_dsym   = (STR_FUNC_SYMBOL|STR_FUNC_EXPAND)
};

static VALUE
parser_str_new(const char *ptr, long len, rb_encoding *enc, int func, rb_encoding *enc0)
{
    VALUE str;

    str = rb_enc_str_new(ptr, len, enc);
    if (!(func & STR_FUNC_REGEXP) && rb_enc_asciicompat(enc)) {
	if (rb_enc_str_coderange(str) == ENC_CODERANGE_7BIT) {
	}
	else if (enc0 == rb_usascii_encoding() && enc != rb_utf8_encoding()) {
	    rb_enc_associate(str, rb_ascii8bit_encoding());
	}
    }

    return str;
}

#define lex_goto_eol(p) ((p)->lex.pcur = (p)->lex.pend)
#define lex_eol_p(p) ((p)->lex.pcur >= (p)->lex.pend)
#define lex_eol_n_p(p,n) ((p)->lex.pcur+(n) >= (p)->lex.pend)
#define peek(p,c) peek_n(p, (c), 0)
#define peek_n(p,c,n) (!lex_eol_n_p(p, n) && (c) == (unsigned char)(p)->lex.pcur[n])
#define peekc(p) peekc_n(p, 0)
#define peekc_n(p,n) (lex_eol_n_p(p, n) ? -1 : (unsigned char)(p)->lex.pcur[n])

#ifdef RIPPER
static void
add_delayed_token(struct parser_params *p, const char *tok, const char *end)
{
    if (tok < end) {
	if (!has_delayed_token(p)) {
	    p->delayed.token = rb_str_buf_new(end - tok);
	    rb_enc_associate(p->delayed.token, p->enc);
	    p->delayed.line = p->ruby_sourceline;
	    p->delayed.col = rb_long2int(tok - p->lex.pbeg);
	}
	rb_str_buf_cat(p->delayed.token, tok, end - tok);
	p->lex.ptok = end;
    }
}
#else
#define add_delayed_token(p, tok, end) ((void)(tok), (void)(end))
#endif

static int
nextline(struct parser_params *p)
{
    VALUE v = p->lex.nextline;
    p->lex.nextline = 0;
    if (!v) {
	if (p->eofp)
	    return -1;

	if (p->lex.pend > p->lex.pbeg && *(p->lex.pend-1) != '\n') {
	    goto end_of_input;
	}

	if (!p->lex.input || NIL_P(v = lex_getline(p))) {
	  end_of_input:
	    p->eofp = 1;
	    lex_goto_eol(p);
	    return -1;
	}
	p->cr_seen = FALSE;
    }
    else if (NIL_P(v)) {
	/* after here-document without terminator */
	goto end_of_input;
    }
    add_delayed_token(p, p->lex.ptok, p->lex.pend);
    if (p->heredoc_end > 0) {
	p->ruby_sourceline = p->heredoc_end;
	p->heredoc_end = 0;
    }
    p->ruby_sourceline++;
    p->lex.pbeg = p->lex.pcur = RSTRING_PTR(v);
    p->lex.pend = p->lex.pcur + RSTRING_LEN(v);
    token_flush(p);
    p->lex.prevline = p->lex.lastline;
    p->lex.lastline = v;
    return 0;
}

static int
parser_cr(struct parser_params *p, int c)
{
    if (peek(p, '\n')) {
	p->lex.pcur++;
	c = '\n';
    }
    else if (!p->cr_seen) {
	p->cr_seen = TRUE;
	/* carried over with p->lex.nextline for nextc() */
	rb_warn0("encountered \\r in middle of line, treated as a mere space");
    }
    return c;
}

static inline int
nextc(struct parser_params *p)
{
    int c;

    if (UNLIKELY((p->lex.pcur == p->lex.pend) || p->eofp || RTEST(p->lex.nextline))) {
	if (nextline(p)) return -1;
    }
    c = (unsigned char)*p->lex.pcur++;
    if (UNLIKELY(c == '\r')) {
	c = parser_cr(p, c);
    }

    return c;
}

static void
pushback(struct parser_params *p, int c)
{
    if (c == -1) return;
    p->lex.pcur--;
    if (p->lex.pcur > p->lex.pbeg && p->lex.pcur[0] == '\n' && p->lex.pcur[-1] == '\r') {
	p->lex.pcur--;
    }
}

#define was_bol(p) ((p)->lex.pcur == (p)->lex.pbeg + 1)

#define tokfix(p) ((p)->tokenbuf[(p)->tokidx]='\0')
#define tok(p) (p)->tokenbuf
#define toklen(p) (p)->tokidx

static int
looking_at_eol_p(struct parser_params *p)
{
    const char *ptr = p->lex.pcur;
    while (ptr < p->lex.pend) {
	int c = (unsigned char)*ptr++;
	int eol = (c == '\n' || c == '#');
	if (eol || !ISSPACE(c)) {
	    return eol;
	}
    }
    return TRUE;
}

static char*
newtok(struct parser_params *p)
{
    p->tokidx = 0;
    p->tokline = p->ruby_sourceline;
    if (!p->tokenbuf) {
	p->toksiz = 60;
	p->tokenbuf = ALLOC_N(char, 60);
    }
    if (p->toksiz > 4096) {
	p->toksiz = 60;
	REALLOC_N(p->tokenbuf, char, 60);
    }
    return p->tokenbuf;
}

static char *
tokspace(struct parser_params *p, int n)
{
    p->tokidx += n;

    if (p->tokidx >= p->toksiz) {
	do {p->toksiz *= 2;} while (p->toksiz < p->tokidx);
	REALLOC_N(p->tokenbuf, char, p->toksiz);
    }
    return &p->tokenbuf[p->tokidx-n];
}

static void
tokadd(struct parser_params *p, int c)
{
    p->tokenbuf[p->tokidx++] = (char)c;
    if (p->tokidx >= p->toksiz) {
	p->toksiz *= 2;
	REALLOC_N(p->tokenbuf, char, p->toksiz);
    }
}

static int
tok_hex(struct parser_params *p, size_t *numlen)
{
    int c;

    c = scan_hex(p->lex.pcur, 2, numlen);
    if (!*numlen) {
	yyerror0("invalid hex escape");
	token_flush(p);
	return 0;
    }
    p->lex.pcur += *numlen;
    return c;
}

#define tokcopy(p, n) memcpy(tokspace(p, n), (p)->lex.pcur - (n), (n))

static int
escaped_control_code(int c)
{
    int c2 = 0;
    switch (c) {
      case ' ':
	c2 = 's';
	break;
      case '\n':
	c2 = 'n';
	break;
      case '\t':
	c2 = 't';
	break;
      case '\v':
	c2 = 'v';
	break;
      case '\r':
	c2 = 'r';
	break;
      case '\f':
	c2 = 'f';
	break;
    }
    return c2;
}

#define WARN_SPACE_CHAR(c, prefix) \
    rb_warn1("invalid character syntax; use "prefix"\\%c", WARN_I(c2))

static int
tokadd_codepoint(struct parser_params *p, rb_encoding **encp,
		 int regexp_literal, int wide)
{
    size_t numlen;
    int codepoint = scan_hex(p->lex.pcur, wide ? p->lex.pend - p->lex.pcur : 4, &numlen);
    literal_flush(p, p->lex.pcur);
    p->lex.pcur += numlen;
    if (wide ? (numlen == 0 || numlen > 6) : (numlen < 4))  {
	yyerror0("invalid Unicode escape");
	return wide && numlen > 0;
    }
    if (codepoint > 0x10ffff) {
	yyerror0("invalid Unicode codepoint (too large)");
	return wide;
    }
    if ((codepoint & 0xfffff800) == 0xd800) {
	yyerror0("invalid Unicode codepoint");
	return wide;
    }
    if (regexp_literal) {
	tokcopy(p, (int)numlen);
    }
    else if (codepoint >= 0x80) {
	rb_encoding *utf8 = rb_utf8_encoding();
	if (*encp && utf8 != *encp) {
	    YYLTYPE loc = RUBY_INIT_YYLLOC();
	    compile_error(p, "UTF-8 mixed within %s source", rb_enc_name(*encp));
	    parser_show_error_line(p, &loc);
	    return wide;
	}
	*encp = utf8;
	tokaddmbc(p, codepoint, *encp);
    }
    else {
	tokadd(p, codepoint);
    }
    return TRUE;
}

/* return value is for ?\u3042 */
static void
tokadd_utf8(struct parser_params *p, rb_encoding **encp,
	    int term, int symbol_literal, int regexp_literal)
{
    /*
     * If `term` is not -1, then we allow multiple codepoints in \u{}
     * upto `term` byte, otherwise we're parsing a character literal.
     * And then add the codepoints to the current token.
     */
    static const char multiple_codepoints[] = "Multiple codepoints at single character literal";

    const int open_brace = '{', close_brace = '}';

    if (regexp_literal) { tokadd(p, '\\'); tokadd(p, 'u'); }

    if (peek(p, open_brace)) {  /* handle \u{...} form */
	const char *second = NULL;
	int c, last = nextc(p);
	if (p->lex.pcur >= p->lex.pend) goto unterminated;
	while (ISSPACE(c = *p->lex.pcur) && ++p->lex.pcur < p->lex.pend);
	while (c != close_brace) {
	    if (c == term) goto unterminated;
	    if (second == multiple_codepoints)
		second = p->lex.pcur;
	    if (regexp_literal) tokadd(p, last);
	    if (!tokadd_codepoint(p, encp, regexp_literal, TRUE)) {
		break;
	    }
	    while (ISSPACE(c = *p->lex.pcur)) {
		if (++p->lex.pcur >= p->lex.pend) goto unterminated;
		last = c;
	    }
	    if (term == -1 && !second)
		second = multiple_codepoints;
	}

	if (c != close_brace) {
	  unterminated:
	    token_flush(p);
	    yyerror0("unterminated Unicode escape");
	    return;
	}
	if (second && second != multiple_codepoints) {
	    const char *pcur = p->lex.pcur;
	    p->lex.pcur = second;
	    dispatch_scan_event(p, tSTRING_CONTENT);
	    token_flush(p);
	    p->lex.pcur = pcur;
	    yyerror0(multiple_codepoints);
	    token_flush(p);
	}

	if (regexp_literal) tokadd(p, close_brace);
	nextc(p);
    }
    else {			/* handle \uxxxx form */
	if (!tokadd_codepoint(p, encp, regexp_literal, FALSE)) {
	    token_flush(p);
	    return;
	}
    }
}

#define ESCAPE_CONTROL 1
#define ESCAPE_META    2

static int
read_escape(struct parser_params *p, int flags, rb_encoding **encp)
{
    int c;
    size_t numlen;

    switch (c = nextc(p)) {
      case '\\':	/* Backslash */
	return c;

      case 'n':	/* newline */
	return '\n';

      case 't':	/* horizontal tab */
	return '\t';

      case 'r':	/* carriage-return */
	return '\r';

      case 'f':	/* form-feed */
	return '\f';

      case 'v':	/* vertical tab */
	return '\13';

      case 'a':	/* alarm(bell) */
	return '\007';

      case 'e':	/* escape */
	return 033;

      case '0': case '1': case '2': case '3': /* octal constant */
      case '4': case '5': case '6': case '7':
	pushback(p, c);
	c = scan_oct(p->lex.pcur, 3, &numlen);
	p->lex.pcur += numlen;
	return c;

      case 'x':	/* hex constant */
	c = tok_hex(p, &numlen);
	if (numlen == 0) return 0;
	return c;

      case 'b':	/* backspace */
	return '\010';

      case 's':	/* space */
	return ' ';

      case 'M':
	if (flags & ESCAPE_META) goto eof;
	if ((c = nextc(p)) != '-') {
	    goto eof;
	}
	if ((c = nextc(p)) == '\\') {
	    if (peek(p, 'u')) goto eof;
	    return read_escape(p, flags|ESCAPE_META, encp) | 0x80;
	}
	else if (c == -1 || !ISASCII(c)) goto eof;
	else {
	    int c2 = escaped_control_code(c);
	    if (c2) {
		if (ISCNTRL(c) || !(flags & ESCAPE_CONTROL)) {
		    WARN_SPACE_CHAR(c2, "\\M-");
		}
		else {
		    WARN_SPACE_CHAR(c2, "\\C-\\M-");
		}
	    }
	    else if (ISCNTRL(c)) goto eof;
	    return ((c & 0xff) | 0x80);
	}

      case 'C':
	if ((c = nextc(p)) != '-') {
	    goto eof;
	}
      case 'c':
	if (flags & ESCAPE_CONTROL) goto eof;
	if ((c = nextc(p))== '\\') {
	    if (peek(p, 'u')) goto eof;
	    c = read_escape(p, flags|ESCAPE_CONTROL, encp);
	}
	else if (c == '?')
	    return 0177;
	else if (c == -1 || !ISASCII(c)) goto eof;
	else {
	    int c2 = escaped_control_code(c);
	    if (c2) {
		if (ISCNTRL(c)) {
		    if (flags & ESCAPE_META) {
			WARN_SPACE_CHAR(c2, "\\M-");
		    }
		    else {
			WARN_SPACE_CHAR(c2, "");
		    }
		}
		else {
		    if (flags & ESCAPE_META) {
			WARN_SPACE_CHAR(c2, "\\M-\\C-");
		    }
		    else {
			WARN_SPACE_CHAR(c2, "\\C-");
		    }
		}
	    }
	    else if (ISCNTRL(c)) goto eof;
	}
	return c & 0x9f;

      eof:
      case -1:
        yyerror0("Invalid escape character syntax");
	token_flush(p);
	return '\0';

      default:
	return c;
    }
}

static void
tokaddmbc(struct parser_params *p, int c, rb_encoding *enc)
{
    int len = rb_enc_codelen(c, enc);
    rb_enc_mbcput(c, tokspace(p, len), enc);
}

static int
tokadd_escape(struct parser_params *p, rb_encoding **encp)
{
    int c;
    int flags = 0;
    size_t numlen;

  first:
    switch (c = nextc(p)) {
      case '\n':
	return 0;		/* just ignore */

      case '0': case '1': case '2': case '3': /* octal constant */
      case '4': case '5': case '6': case '7':
	{
	    ruby_scan_oct(--p->lex.pcur, 3, &numlen);
	    if (numlen == 0) goto eof;
	    p->lex.pcur += numlen;
	    tokcopy(p, (int)numlen + 1);
	}
	return 0;

      case 'x':	/* hex constant */
	{
	    tok_hex(p, &numlen);
	    if (numlen == 0) return -1;
	    tokcopy(p, (int)numlen + 2);
	}
	return 0;

      case 'M':
	if (flags & ESCAPE_META) goto eof;
	if ((c = nextc(p)) != '-') {
	    pushback(p, c);
	    goto eof;
	}
	tokcopy(p, 3);
	flags |= ESCAPE_META;
	goto escaped;

      case 'C':
	if (flags & ESCAPE_CONTROL) goto eof;
	if ((c = nextc(p)) != '-') {
	    pushback(p, c);
	    goto eof;
	}
	tokcopy(p, 3);
	goto escaped;

      case 'c':
	if (flags & ESCAPE_CONTROL) goto eof;
	tokcopy(p, 2);
	flags |= ESCAPE_CONTROL;
      escaped:
	if ((c = nextc(p)) == '\\') {
	    goto first;
	}
	else if (c == -1) goto eof;
	tokadd(p, c);
	return 0;

      eof:
      case -1:
        yyerror0("Invalid escape character syntax");
	token_flush(p);
	return -1;

      default:
	tokadd(p, '\\');
	tokadd(p, c);
    }
    return 0;
}

static int
regx_options(struct parser_params *p)
{
    int kcode = 0;
    int kopt = 0;
    int options = 0;
    int c, opt, kc;

    newtok(p);
    while (c = nextc(p), ISALPHA(c)) {
        if (c == 'o') {
            options |= RE_OPTION_ONCE;
        }
        else if (rb_char_to_option_kcode(c, &opt, &kc)) {
	    if (kc >= 0) {
		if (kc != rb_ascii8bit_encindex()) kcode = c;
		kopt = opt;
	    }
	    else {
		options |= opt;
	    }
        }
        else {
	    tokadd(p, c);
        }
    }
    options |= kopt;
    pushback(p, c);
    if (toklen(p)) {
	YYLTYPE loc = RUBY_INIT_YYLLOC();
	tokfix(p);
	compile_error(p, "unknown regexp option%s - %*s",
		      toklen(p) > 1 ? "s" : "", toklen(p), tok(p));
	parser_show_error_line(p, &loc);
    }
    return options | RE_OPTION_ENCODING(kcode);
}

static int
tokadd_mbchar(struct parser_params *p, int c)
{
    int len = parser_precise_mbclen(p, p->lex.pcur-1);
    if (len < 0) return -1;
    tokadd(p, c);
    p->lex.pcur += --len;
    if (len > 0) tokcopy(p, len);
    return c;
}

static inline int
simple_re_meta(int c)
{
    switch (c) {
      case '$': case '*': case '+': case '.':
      case '?': case '^': case '|':
      case ')': case ']': case '}': case '>':
	return TRUE;
      default:
	return FALSE;
    }
}

static int
parser_update_heredoc_indent(struct parser_params *p, int c)
{
    if (p->heredoc_line_indent == -1) {
	if (c == '\n') p->heredoc_line_indent = 0;
    }
    else {
	if (c == ' ') {
	    p->heredoc_line_indent++;
	    return TRUE;
	}
	else if (c == '\t') {
	    int w = (p->heredoc_line_indent / TAB_WIDTH) + 1;
	    p->heredoc_line_indent = w * TAB_WIDTH;
	    return TRUE;
	}
	else if (c != '\n') {
	    if (p->heredoc_indent > p->heredoc_line_indent) {
		p->heredoc_indent = p->heredoc_line_indent;
	    }
	    p->heredoc_line_indent = -1;
	}
    }
    return FALSE;
}

static void
parser_mixed_error(struct parser_params *p, rb_encoding *enc1, rb_encoding *enc2)
{
    YYLTYPE loc = RUBY_INIT_YYLLOC();
    const char *n1 = rb_enc_name(enc1), *n2 = rb_enc_name(enc2);
    compile_error(p, "%s mixed within %s source", n1, n2);
    parser_show_error_line(p, &loc);
}

static void
parser_mixed_escape(struct parser_params *p, const char *beg, rb_encoding *enc1, rb_encoding *enc2)
{
    const char *pos = p->lex.pcur;
    p->lex.pcur = beg;
    parser_mixed_error(p, enc1, enc2);
    p->lex.pcur = pos;
}

static int
tokadd_string(struct parser_params *p,
	      int func, int term, int paren, long *nest,
	      rb_encoding **encp, rb_encoding **enc)
{
    int c;
    bool erred = false;

#define mixed_error(enc1, enc2) \
    (void)(erred || (parser_mixed_error(p, enc1, enc2), erred = true))
#define mixed_escape(beg, enc1, enc2) \
    (void)(erred || (parser_mixed_escape(p, beg, enc1, enc2), erred = true))

    while ((c = nextc(p)) != -1) {
	if (p->heredoc_indent > 0) {
	    parser_update_heredoc_indent(p, c);
	}

	if (paren && c == paren) {
	    ++*nest;
	}
	else if (c == term) {
	    if (!nest || !*nest) {
		pushback(p, c);
		break;
	    }
	    --*nest;
	}
	else if ((func & STR_FUNC_EXPAND) && c == '#' && p->lex.pcur < p->lex.pend) {
	    int c2 = *p->lex.pcur;
	    if (c2 == '$' || c2 == '@' || c2 == '{') {
		pushback(p, c);
		break;
	    }
	}
	else if (c == '\\') {
	    literal_flush(p, p->lex.pcur - 1);
	    c = nextc(p);
	    switch (c) {
	      case '\n':
		if (func & STR_FUNC_QWORDS) break;
		if (func & STR_FUNC_EXPAND) {
		    if (!(func & STR_FUNC_INDENT) || (p->heredoc_indent < 0))
			continue;
		    if (c == term) {
			c = '\\';
			goto terminate;
		    }
		}
		tokadd(p, '\\');
		break;

	      case '\\':
		if (func & STR_FUNC_ESCAPE) tokadd(p, c);
		break;

	      case 'u':
		if ((func & STR_FUNC_EXPAND) == 0) {
		    tokadd(p, '\\');
		    break;
		}
		tokadd_utf8(p, enc, term,
			    func & STR_FUNC_SYMBOL,
			    func & STR_FUNC_REGEXP);
		continue;

	      default:
		if (c == -1) return -1;
		if (!ISASCII(c)) {
		    if ((func & STR_FUNC_EXPAND) == 0) tokadd(p, '\\');
		    goto non_ascii;
		}
		if (func & STR_FUNC_REGEXP) {
		    if (c == term && !simple_re_meta(c)) {
			tokadd(p, c);
			continue;
		    }
		    pushback(p, c);
		    if ((c = tokadd_escape(p, enc)) < 0)
			return -1;
		    if (*enc && *enc != *encp) {
			mixed_escape(p->lex.ptok+2, *enc, *encp);
		    }
		    continue;
		}
		else if (func & STR_FUNC_EXPAND) {
		    pushback(p, c);
		    if (func & STR_FUNC_ESCAPE) tokadd(p, '\\');
		    c = read_escape(p, 0, enc);
		}
		else if ((func & STR_FUNC_QWORDS) && ISSPACE(c)) {
		    /* ignore backslashed spaces in %w */
		}
		else if (c != term && !(paren && c == paren)) {
		    tokadd(p, '\\');
		    pushback(p, c);
		    continue;
		}
	    }
	}
	else if (!parser_isascii(p)) {
	  non_ascii:
	    if (!*enc) {
		*enc = *encp;
	    }
	    else if (*enc != *encp) {
		mixed_error(*enc, *encp);
		continue;
	    }
	    if (tokadd_mbchar(p, c) == -1) return -1;
	    continue;
	}
	else if ((func & STR_FUNC_QWORDS) && ISSPACE(c)) {
	    pushback(p, c);
	    break;
	}
        if (c & 0x80) {
	    if (!*enc) {
		*enc = *encp;
	    }
	    else if (*enc != *encp) {
		mixed_error(*enc, *encp);
		continue;
	    }
        }
	tokadd(p, c);
    }
  terminate:
    if (*enc) *encp = *enc;
    return c;
}

static inline rb_strterm_t *
new_strterm(VALUE v1, VALUE v2, VALUE v3, VALUE v0)
{
    return (rb_strterm_t*)rb_imemo_new(imemo_parser_strterm, v1, v2, v3, v0);
}

/* imemo_parser_strterm for literal */
#define NEW_STRTERM(func, term, paren) \
    new_strterm((VALUE)(func), (VALUE)(paren), (VALUE)(term), 0)

#ifdef RIPPER
static void
flush_string_content(struct parser_params *p, rb_encoding *enc)
{
    VALUE content = yylval.val;
    if (!ripper_is_node_yylval(content))
	content = ripper_new_yylval(p, 0, 0, content);
    if (has_delayed_token(p)) {
	ptrdiff_t len = p->lex.pcur - p->lex.ptok;
	if (len > 0) {
	    rb_enc_str_buf_cat(p->delayed.token, p->lex.ptok, len, enc);
	}
	dispatch_delayed_token(p, tSTRING_CONTENT);
	p->lex.ptok = p->lex.pcur;
	RNODE(content)->nd_rval = yylval.val;
    }
    dispatch_scan_event(p, tSTRING_CONTENT);
    if (yylval.val != content)
	RNODE(content)->nd_rval = yylval.val;
    yylval.val = content;
}
#else
#define flush_string_content(p, enc) ((void)(enc))
#endif

RUBY_FUNC_EXPORTED const unsigned int ruby_global_name_punct_bits[(0x7e - 0x20 + 31) / 32];
/* this can be shared with ripper, since it's independent from struct
 * parser_params. */
#ifndef RIPPER
#define BIT(c, idx) (((c) / 32 - 1 == idx) ? (1U << ((c) % 32)) : 0)
#define SPECIAL_PUNCT(idx) ( \
	BIT('~', idx) | BIT('*', idx) | BIT('$', idx) | BIT('?', idx) | \
	BIT('!', idx) | BIT('@', idx) | BIT('/', idx) | BIT('\\', idx) | \
	BIT(';', idx) | BIT(',', idx) | BIT('.', idx) | BIT('=', idx) | \
	BIT(':', idx) | BIT('<', idx) | BIT('>', idx) | BIT('\"', idx) | \
	BIT('&', idx) | BIT('`', idx) | BIT('\'', idx) | BIT('+', idx) | \
	BIT('0', idx))
const unsigned int ruby_global_name_punct_bits[] = {
    SPECIAL_PUNCT(0),
    SPECIAL_PUNCT(1),
    SPECIAL_PUNCT(2),
};
#undef BIT
#undef SPECIAL_PUNCT
#endif

static enum yytokentype
parser_peek_variable_name(struct parser_params *p)
{
    int c;
    const char *ptr = p->lex.pcur;

    if (ptr + 1 >= p->lex.pend) return 0;
    c = *ptr++;
    switch (c) {
      case '$':
	if ((c = *ptr) == '-') {
	    if (++ptr >= p->lex.pend) return 0;
	    c = *ptr;
	}
	else if (is_global_name_punct(c) || ISDIGIT(c)) {
	    return tSTRING_DVAR;
	}
	break;
      case '@':
	if ((c = *ptr) == '@') {
	    if (++ptr >= p->lex.pend) return 0;
	    c = *ptr;
	}
	break;
      case '{':
	p->lex.pcur = ptr;
	p->command_start = TRUE;
	return tSTRING_DBEG;
      default:
	return 0;
    }
    if (!ISASCII(c) || c == '_' || ISALPHA(c))
	return tSTRING_DVAR;
    return 0;
}

#define IS_ARG() IS_lex_state(EXPR_ARG_ANY)
#define IS_END() IS_lex_state(EXPR_END_ANY)
#define IS_BEG() (IS_lex_state(EXPR_BEG_ANY) || IS_lex_state_all(EXPR_ARG|EXPR_LABELED))
#define IS_SPCARG(c) (IS_ARG() && space_seen && !ISSPACE(c))
#define IS_LABEL_POSSIBLE() (\
	(IS_lex_state(EXPR_LABEL|EXPR_ENDFN) && !cmd_state) || \
	IS_ARG())
#define IS_LABEL_SUFFIX(n) (peek_n(p, ':',(n)) && !peek_n(p, ':', (n)+1))
#define IS_AFTER_OPERATOR() IS_lex_state(EXPR_FNAME | EXPR_DOT)

static inline enum yytokentype
parser_string_term(struct parser_params *p, int func)
{
    p->lex.strterm = 0;
    if (func & STR_FUNC_REGEXP) {
	set_yylval_num(regx_options(p));
	dispatch_scan_event(p, tREGEXP_END);
	SET_LEX_STATE(EXPR_END);
	return tREGEXP_END;
    }
    if ((func & STR_FUNC_LABEL) && IS_LABEL_SUFFIX(0)) {
	nextc(p);
	SET_LEX_STATE(EXPR_BEG|EXPR_LABEL);
	return tLABEL_END;
    }
    SET_LEX_STATE(EXPR_END);
    return tSTRING_END;
}

static enum yytokentype
parse_string(struct parser_params *p, rb_strterm_literal_t *quote)
{
    int func = (int)quote->u1.func;
    int term = (int)quote->u3.term;
    int paren = (int)quote->u2.paren;
    int c, space = 0;
    rb_encoding *enc = p->enc;
    rb_encoding *base_enc = 0;
    VALUE lit;

    if (func & STR_FUNC_TERM) {
	if (func & STR_FUNC_QWORDS) nextc(p); /* delayed term */
	SET_LEX_STATE(EXPR_END);
	p->lex.strterm = 0;
	return func & STR_FUNC_REGEXP ? tREGEXP_END : tSTRING_END;
    }
    c = nextc(p);
    if ((func & STR_FUNC_QWORDS) && ISSPACE(c)) {
	do {c = nextc(p);} while (ISSPACE(c));
	space = 1;
    }
    if (func & STR_FUNC_LIST) {
	quote->u1.func &= ~STR_FUNC_LIST;
	space = 1;
    }
    if (c == term && !quote->u0.nest) {
	if (func & STR_FUNC_QWORDS) {
	    quote->u1.func |= STR_FUNC_TERM;
	    pushback(p, c); /* dispatch the term at tSTRING_END */
	    add_delayed_token(p, p->lex.ptok, p->lex.pcur);
	    return ' ';
	}
	return parser_string_term(p, func);
    }
    if (space) {
	pushback(p, c);
	add_delayed_token(p, p->lex.ptok, p->lex.pcur);
	return ' ';
    }
    newtok(p);
    if ((func & STR_FUNC_EXPAND) && c == '#') {
	int t = parser_peek_variable_name(p);
	if (t) return t;
	tokadd(p, '#');
	c = nextc(p);
    }
    pushback(p, c);
    if (tokadd_string(p, func, term, paren, &quote->u0.nest,
		      &enc, &base_enc) == -1) {
	if (p->eofp) {
#ifndef RIPPER
# define unterminated_literal(mesg) yyerror0(mesg)
#else
# define unterminated_literal(mesg) compile_error(p,  mesg)
#endif
	    literal_flush(p, p->lex.pcur);
	    if (func & STR_FUNC_QWORDS) {
		/* no content to add, bailing out here */
		unterminated_literal("unterminated list meets end of file");
		p->lex.strterm = 0;
		return tSTRING_END;
	    }
	    if (func & STR_FUNC_REGEXP) {
		unterminated_literal("unterminated regexp meets end of file");
	    }
	    else {
		unterminated_literal("unterminated string meets end of file");
	    }
	    quote->u1.func |= STR_FUNC_TERM;
	}
    }

    tokfix(p);
    lit = STR_NEW3(tok(p), toklen(p), enc, func);
    set_yylval_str(lit);
    flush_string_content(p, enc);

    return tSTRING_CONTENT;
}

static enum yytokentype
heredoc_identifier(struct parser_params *p)
{
    /*
     * term_len is length of `<<"END"` except `END`,
     * in this case term_len is 4 (<, <, " and ").
     */
    long len, offset = p->lex.pcur - p->lex.pbeg;
    int c = nextc(p), term, func = 0, quote = 0;
    enum yytokentype token = tSTRING_BEG;
    int indent = 0;

    if (c == '-') {
	c = nextc(p);
	func = STR_FUNC_INDENT;
	offset++;
    }
    else if (c == '~') {
	c = nextc(p);
	func = STR_FUNC_INDENT;
	offset++;
	indent = INT_MAX;
    }
    switch (c) {
      case '\'':
	func |= str_squote; goto quoted;
      case '"':
	func |= str_dquote; goto quoted;
      case '`':
	token = tXSTRING_BEG;
	func |= str_xquote; goto quoted;

      quoted:
	quote++;
	offset++;
	term = c;
	len = 0;
	while ((c = nextc(p)) != term) {
	    if (c == -1 || c == '\r' || c == '\n') {
		yyerror(NULL, p, "unterminated here document identifier");
		return -1;
	    }
	}
	break;

      default:
	if (!parser_is_identchar(p)) {
	    pushback(p, c);
	    if (func & STR_FUNC_INDENT) {
		pushback(p, indent > 0 ? '~' : '-');
	    }
	    return 0;
	}
	func |= str_dquote;
	do {
	    int n = parser_precise_mbclen(p, p->lex.pcur-1);
	    if (n < 0) return 0;
	    p->lex.pcur += --n;
	} while ((c = nextc(p)) != -1 && parser_is_identchar(p));
	pushback(p, c);
	break;
    }

    len = p->lex.pcur - (p->lex.pbeg + offset) - quote;
    if ((unsigned long)len >= HERETERM_LENGTH_MAX)
	yyerror(NULL, p, "too long here document identifier");
    dispatch_scan_event(p, tHEREDOC_BEG);
    lex_goto_eol(p);

    p->lex.strterm = new_strterm(0, 0, 0, p->lex.lastline);
    p->lex.strterm->flags |= STRTERM_HEREDOC;
    rb_strterm_heredoc_t *here = &p->lex.strterm->u.heredoc;
    here->offset = offset;
    here->sourceline = p->ruby_sourceline;
    here->length = (int)len;
    here->quote = quote;
    here->func = func;

    token_flush(p);
    p->heredoc_indent = indent;
    p->heredoc_line_indent = 0;
    return token;
}

static void
heredoc_restore(struct parser_params *p, rb_strterm_heredoc_t *here)
{
    VALUE line;

    p->lex.strterm = 0;
    line = here->lastline;
    p->lex.lastline = line;
    p->lex.pbeg = RSTRING_PTR(line);
    p->lex.pend = p->lex.pbeg + RSTRING_LEN(line);
    p->lex.pcur = p->lex.pbeg + here->offset + here->length + here->quote;
    p->lex.ptok = p->lex.pbeg + here->offset - here->quote;
    p->heredoc_end = p->ruby_sourceline;
    p->ruby_sourceline = (int)here->sourceline;
    if (p->eofp) p->lex.nextline = Qnil;
    p->eofp = 0;
}

static int
dedent_string(VALUE string, int width)
{
    char *str;
    long len;
    int i, col = 0;

    RSTRING_GETMEM(string, str, len);
    for (i = 0; i < len && col < width; i++) {
	if (str[i] == ' ') {
	    col++;
	}
	else if (str[i] == '\t') {
	    int n = TAB_WIDTH * (col / TAB_WIDTH + 1);
	    if (n > width) break;
	    col = n;
	}
	else {
	    break;
	}
    }
    if (!i) return 0;
    rb_str_modify(string);
    str = RSTRING_PTR(string);
    if (RSTRING_LEN(string) != len)
	rb_fatal("literal string changed: %+"PRIsVALUE, string);
    MEMMOVE(str, str + i, char, len - i);
    rb_str_set_len(string, len - i);
    return i;
}

#ifndef RIPPER
static NODE *
heredoc_dedent(struct parser_params *p, NODE *root)
{
    NODE *node, *str_node, *prev_node;
    int indent = p->heredoc_indent;
    VALUE prev_lit = 0;

    if (indent <= 0) return root;
    p->heredoc_indent = 0;
    if (!root) return root;

    prev_node = node = str_node = root;
    if (nd_type(root) == NODE_LIST) str_node = root->nd_head;

    while (str_node) {
	VALUE lit = str_node->nd_lit;
	if (str_node->flags & NODE_FL_NEWLINE) {
	    dedent_string(lit, indent);
	}
	if (!prev_lit) {
	    prev_lit = lit;
	}
	else if (!literal_concat0(p, prev_lit, lit)) {
	    return 0;
	}
	else {
	    NODE *end = node->nd_end;
	    node = prev_node->nd_next = node->nd_next;
	    if (!node) {
		if (nd_type(prev_node) == NODE_DSTR)
		    nd_set_type(prev_node, NODE_STR);
		break;
	    }
	    node->nd_end = end;
	    goto next_str;
	}

	str_node = 0;
	while ((node = (prev_node = node)->nd_next) != 0) {
	  next_str:
	    if (nd_type(node) != NODE_LIST) break;
	    if ((str_node = node->nd_head) != 0) {
		enum node_type type = nd_type(str_node);
		if (type == NODE_STR || type == NODE_DSTR) break;
		prev_lit = 0;
		str_node = 0;
	    }
	}
    }
    return root;
}
#else /* RIPPER */
static VALUE
heredoc_dedent(struct parser_params *p, VALUE array)
{
    int indent = p->heredoc_indent;

    if (indent <= 0) return array;
    p->heredoc_indent = 0;
    dispatch2(heredoc_dedent, array, INT2NUM(indent));
    return array;
}

/*
 *  call-seq:
 *    Ripper.dedent_string(input, width)   -> Integer
 *
 *  USE OF RIPPER LIBRARY ONLY.
 *
 *  Strips up to +width+ leading whitespaces from +input+,
 *  and returns the stripped column width.
 */
static VALUE
parser_dedent_string(VALUE self, VALUE input, VALUE width)
{
    int wid, col;

    StringValue(input);
    wid = NUM2UINT(width);
    col = dedent_string(input, wid);
    return INT2NUM(col);
}
#endif

static int
whole_match_p(struct parser_params *p, const char *eos, long len, int indent)
{
    const char *ptr = p->lex.pbeg;
    long n;

    if (indent) {
	while (*ptr && ISSPACE(*ptr)) ptr++;
    }
    n = p->lex.pend - (ptr + len);
    if (n < 0) return FALSE;
    if (n > 0 && ptr[len] != '\n') {
	if (ptr[len] != '\r') return FALSE;
	if (n <= 1 || ptr[len+1] != '\n') return FALSE;
    }
    return strncmp(eos, ptr, len) == 0;
}

static int
word_match_p(struct parser_params *p, const char *word, long len)
{
    if (strncmp(p->lex.pcur, word, len)) return 0;
    if (p->lex.pcur + len == p->lex.pend) return 1;
    int c = (unsigned char)p->lex.pcur[len];
    if (ISSPACE(c)) return 1;
    switch (c) {
      case '\0': case '\004': case '\032': return 1;
    }
    return 0;
}

#define NUM_SUFFIX_R   (1<<0)
#define NUM_SUFFIX_I   (1<<1)
#define NUM_SUFFIX_ALL 3

static int
number_literal_suffix(struct parser_params *p, int mask)
{
    int c, result = 0;
    const char *lastp = p->lex.pcur;

    while ((c = nextc(p)) != -1) {
	if ((mask & NUM_SUFFIX_I) && c == 'i') {
	    result |= (mask & NUM_SUFFIX_I);
	    mask &= ~NUM_SUFFIX_I;
	    /* r after i, rational of complex is disallowed */
	    mask &= ~NUM_SUFFIX_R;
	    continue;
	}
	if ((mask & NUM_SUFFIX_R) && c == 'r') {
	    result |= (mask & NUM_SUFFIX_R);
	    mask &= ~NUM_SUFFIX_R;
	    continue;
	}
	if (!ISASCII(c) || ISALPHA(c) || c == '_') {
	    p->lex.pcur = lastp;
	    literal_flush(p, p->lex.pcur);
	    return 0;
	}
	pushback(p, c);
	break;
    }
    return result;
}

static enum yytokentype
set_number_literal(struct parser_params *p, VALUE v,
		   enum yytokentype type, int suffix)
{
    if (suffix & NUM_SUFFIX_I) {
	v = rb_complex_raw(INT2FIX(0), v);
	type = tIMAGINARY;
    }
    set_yylval_literal(v);
    SET_LEX_STATE(EXPR_END);
    return type;
}

static enum yytokentype
set_integer_literal(struct parser_params *p, VALUE v, int suffix)
{
    enum yytokentype type = tINTEGER;
    if (suffix & NUM_SUFFIX_R) {
	v = rb_rational_raw1(v);
	type = tRATIONAL;
    }
    return set_number_literal(p, v, type, suffix);
}

#ifdef RIPPER
static void
dispatch_heredoc_end(struct parser_params *p)
{
    VALUE str;
    if (has_delayed_token(p))
	dispatch_delayed_token(p, tSTRING_CONTENT);
    str = STR_NEW(p->lex.ptok, p->lex.pend - p->lex.ptok);
    ripper_dispatch1(p, ripper_token2eventid(tHEREDOC_END), str);
    lex_goto_eol(p);
    token_flush(p);
}

#else
#define dispatch_heredoc_end(p) ((void)0)
#endif

static enum yytokentype
here_document(struct parser_params *p, rb_strterm_heredoc_t *here)
{
    int c, func, indent = 0;
    const char *eos, *ptr, *ptr_end;
    long len;
    VALUE str = 0;
    rb_encoding *enc = p->enc;
    rb_encoding *base_enc = 0;
    int bol;

    eos = RSTRING_PTR(here->lastline) + here->offset;
    len = here->length;
    indent = (func = here->func) & STR_FUNC_INDENT;

    if ((c = nextc(p)) == -1) {
      error:
#ifdef RIPPER
	if (!has_delayed_token(p)) {
	    dispatch_scan_event(p, tSTRING_CONTENT);
	}
	else {
	    if ((len = p->lex.pcur - p->lex.ptok) > 0) {
		if (!(func & STR_FUNC_REGEXP) && rb_enc_asciicompat(enc)) {
		    int cr = ENC_CODERANGE_UNKNOWN;
		    rb_str_coderange_scan_restartable(p->lex.ptok, p->lex.pcur, enc, &cr);
		    if (cr != ENC_CODERANGE_7BIT &&
			p->enc == rb_usascii_encoding() &&
			enc != rb_utf8_encoding()) {
			enc = rb_ascii8bit_encoding();
		    }
		}
		rb_enc_str_buf_cat(p->delayed.token, p->lex.ptok, len, enc);
	    }
	    dispatch_delayed_token(p, tSTRING_CONTENT);
	}
	lex_goto_eol(p);
#endif
	heredoc_restore(p, &p->lex.strterm->u.heredoc);
	compile_error(p, "can't find string \"%.*s\" anywhere before EOF",
		      (int)len, eos);
	token_flush(p);
	p->lex.strterm = 0;
	SET_LEX_STATE(EXPR_END);
	return tSTRING_END;
    }
    bol = was_bol(p);
    if (!bol) {
	/* not beginning of line, cannot be the terminator */
    }
    else if (p->heredoc_line_indent == -1) {
	/* `heredoc_line_indent == -1` means
	 * - "after an interpolation in the same line", or
	 * - "in a continuing line"
	 */
	p->heredoc_line_indent = 0;
    }
    else if (whole_match_p(p, eos, len, indent)) {
	dispatch_heredoc_end(p);
      restore:
	heredoc_restore(p, &p->lex.strterm->u.heredoc);
	token_flush(p);
	p->lex.strterm = 0;
	SET_LEX_STATE(EXPR_END);
	return tSTRING_END;
    }

    if (!(func & STR_FUNC_EXPAND)) {
	do {
	    ptr = RSTRING_PTR(p->lex.lastline);
	    ptr_end = p->lex.pend;
	    if (ptr_end > ptr) {
		switch (ptr_end[-1]) {
		  case '\n':
		    if (--ptr_end == ptr || ptr_end[-1] != '\r') {
			ptr_end++;
			break;
		    }
		  case '\r':
		    --ptr_end;
		}
	    }

	    if (p->heredoc_indent > 0) {
		long i = 0;
		while (ptr + i < ptr_end && parser_update_heredoc_indent(p, ptr[i]))
		    i++;
		p->heredoc_line_indent = 0;
	    }

	    if (str)
		rb_str_cat(str, ptr, ptr_end - ptr);
	    else
		str = STR_NEW(ptr, ptr_end - ptr);
	    if (ptr_end < p->lex.pend) rb_str_cat(str, "\n", 1);
	    lex_goto_eol(p);
	    if (p->heredoc_indent > 0) {
		goto flush_str;
	    }
	    if (nextc(p) == -1) {
		if (str) {
		    str = 0;
		}
		goto error;
	    }
	} while (!whole_match_p(p, eos, len, indent));
    }
    else {
	/*	int mb = ENC_CODERANGE_7BIT, *mbp = &mb;*/
	newtok(p);
	if (c == '#') {
	    int t = parser_peek_variable_name(p);
	    if (p->heredoc_line_indent != -1) {
		if (p->heredoc_indent > p->heredoc_line_indent) {
		    p->heredoc_indent = p->heredoc_line_indent;
		}
		p->heredoc_line_indent = -1;
	    }
	    if (t) return t;
	    tokadd(p, '#');
	    c = nextc(p);
	}
	do {
	    pushback(p, c);
	    enc = p->enc;
	    if ((c = tokadd_string(p, func, '\n', 0, NULL, &enc, &base_enc)) == -1) {
		if (p->eofp) goto error;
		goto restore;
	    }
	    if (c != '\n') {
		if (c == '\\') p->heredoc_line_indent = -1;
	      flush:
		str = STR_NEW3(tok(p), toklen(p), enc, func);
	      flush_str:
		set_yylval_str(str);
#ifndef RIPPER
		if (bol) yylval.node->flags |= NODE_FL_NEWLINE;
#endif
		flush_string_content(p, enc);
		return tSTRING_CONTENT;
	    }
	    tokadd(p, nextc(p));
	    if (p->heredoc_indent > 0) {
		lex_goto_eol(p);
		goto flush;
	    }
	    /*	    if (mbp && mb == ENC_CODERANGE_UNKNOWN) mbp = 0;*/
	    if ((c = nextc(p)) == -1) goto error;
	} while (!whole_match_p(p, eos, len, indent));
	str = STR_NEW3(tok(p), toklen(p), enc, func);
    }
    dispatch_heredoc_end(p);
#ifdef RIPPER
    str = ripper_new_yylval(p, ripper_token2eventid(tSTRING_CONTENT),
			    yylval.val, str);
#endif
    heredoc_restore(p, &p->lex.strterm->u.heredoc);
    token_flush(p);
    p->lex.strterm = NEW_STRTERM(func | STR_FUNC_TERM, 0, 0);
    set_yylval_str(str);
#ifndef RIPPER
    if (bol) yylval.node->flags |= NODE_FL_NEWLINE;
#endif
    return tSTRING_CONTENT;
}

#include "lex.c"

static int
arg_ambiguous(struct parser_params *p, char c)
{
#ifndef RIPPER
    rb_warning1("ambiguous first argument; put parentheses or a space even after `%c' operator", WARN_I(c));
#else
    dispatch1(arg_ambiguous, rb_usascii_str_new(&c, 1));
#endif
    return TRUE;
}

static ID
formal_argument(struct parser_params *p, ID lhs)
{
    switch (id_type(lhs)) {
      case ID_LOCAL:
	break;
#ifndef RIPPER
      case ID_CONST:
	yyerror0("formal argument cannot be a constant");
	return 0;
      case ID_INSTANCE:
	yyerror0("formal argument cannot be an instance variable");
	return 0;
      case ID_GLOBAL:
	yyerror0("formal argument cannot be a global variable");
	return 0;
      case ID_CLASS:
	yyerror0("formal argument cannot be a class variable");
	return 0;
      default:
	yyerror0("formal argument must be local variable");
	return 0;
#else
      default:
	lhs = dispatch1(param_error, lhs);
	ripper_error(p);
	return 0;
#endif
    }
    shadowing_lvar(p, lhs);
    return lhs;
}

static int
lvar_defined(struct parser_params *p, ID id)
{
    return (dyna_in_block(p) && dvar_defined(p, id)) || local_id(p, id);
}

/* emacsen -*- hack */
static long
parser_encode_length(struct parser_params *p, const char *name, long len)
{
    long nlen;

    if (len > 5 && name[nlen = len - 5] == '-') {
	if (rb_memcicmp(name + nlen + 1, "unix", 4) == 0)
	    return nlen;
    }
    if (len > 4 && name[nlen = len - 4] == '-') {
	if (rb_memcicmp(name + nlen + 1, "dos", 3) == 0)
	    return nlen;
	if (rb_memcicmp(name + nlen + 1, "mac", 3) == 0 &&
	    !(len == 8 && rb_memcicmp(name, "utf8-mac", len) == 0))
	    /* exclude UTF8-MAC because the encoding named "UTF8" doesn't exist in Ruby */
	    return nlen;
    }
    return len;
}

static void
parser_set_encode(struct parser_params *p, const char *name)
{
    int idx = rb_enc_find_index(name);
    rb_encoding *enc;
    VALUE excargs[3];

    if (idx < 0) {
	excargs[1] = rb_sprintf("unknown encoding name: %s", name);
      error:
	excargs[0] = rb_eArgError;
	excargs[2] = rb_make_backtrace();
	rb_ary_unshift(excargs[2], rb_sprintf("%"PRIsVALUE":%d", p->ruby_sourcefile_string, p->ruby_sourceline));
	rb_exc_raise(rb_make_exception(3, excargs));
    }
    enc = rb_enc_from_index(idx);
    if (!rb_enc_asciicompat(enc)) {
	excargs[1] = rb_sprintf("%s is not ASCII compatible", rb_enc_name(enc));
	goto error;
    }
    p->enc = enc;
#ifndef RIPPER
    if (p->debug_lines) {
	VALUE lines = p->debug_lines;
	long i, n = RARRAY_LEN(lines);
	for (i = 0; i < n; ++i) {
	    rb_enc_associate_index(RARRAY_AREF(lines, i), idx);
	}
    }
#endif
}

static int
comment_at_top(struct parser_params *p)
{
    const char *ptr = p->lex.pbeg, *ptr_end = p->lex.pcur - 1;
    if (p->line_count != (p->has_shebang ? 2 : 1)) return 0;
    while (ptr < ptr_end) {
	if (!ISSPACE(*ptr)) return 0;
	ptr++;
    }
    return 1;
}

typedef long (*rb_magic_comment_length_t)(struct parser_params *p, const char *name, long len);
typedef void (*rb_magic_comment_setter_t)(struct parser_params *p, const char *name, const char *val);

static void
magic_comment_encoding(struct parser_params *p, const char *name, const char *val)
{
    if (!comment_at_top(p)) {
	return;
    }
    parser_set_encode(p, val);
}

static int
parser_get_bool(struct parser_params *p, const char *name, const char *val)
{
    switch (*val) {
      case 't': case 'T':
	if (strcasecmp(val, "true") == 0) {
	    return TRUE;
	}
	break;
      case 'f': case 'F':
	if (strcasecmp(val, "false") == 0) {
	    return FALSE;
	}
	break;
    }
    rb_compile_warning(p->ruby_sourcefile, p->ruby_sourceline, "invalid value for %s: %s", name, val);
    return -1;
}

static void
parser_set_token_info(struct parser_params *p, const char *name, const char *val)
{
    int b = parser_get_bool(p, name, val);
    if (b >= 0) p->token_info_enabled = b;
}

static void
parser_set_compile_option_flag(struct parser_params *p, const char *name, const char *val)
{
    int b;

    if (p->token_seen) {
	rb_warning1("`%s' is ignored after any tokens", WARN_S(name));
	return;
    }

    b = parser_get_bool(p, name, val);
    if (b < 0) return;

    if (!p->compile_option)
	p->compile_option = rb_obj_hide(rb_ident_hash_new());
    rb_hash_aset(p->compile_option, ID2SYM(rb_intern(name)),
		 (b ? Qtrue : Qfalse));
}

# if WARN_PAST_SCOPE
static void
parser_set_past_scope(struct parser_params *p, const char *name, const char *val)
{
    int b = parser_get_bool(p, name, val);
    if (b >= 0) p->past_scope_enabled = b;
}
# endif

struct magic_comment {
    const char *name;
    rb_magic_comment_setter_t func;
    rb_magic_comment_length_t length;
};

static const struct magic_comment magic_comments[] = {
    {"coding", magic_comment_encoding, parser_encode_length},
    {"encoding", magic_comment_encoding, parser_encode_length},
    {"frozen_string_literal", parser_set_compile_option_flag},
    {"warn_indent", parser_set_token_info},
# if WARN_PAST_SCOPE
    {"warn_past_scope", parser_set_past_scope},
# endif
};

static const char *
magic_comment_marker(const char *str, long len)
{
    long i = 2;

    while (i < len) {
	switch (str[i]) {
	  case '-':
	    if (str[i-1] == '*' && str[i-2] == '-') {
		return str + i + 1;
	    }
	    i += 2;
	    break;
	  case '*':
	    if (i + 1 >= len) return 0;
	    if (str[i+1] != '-') {
		i += 4;
	    }
	    else if (str[i-1] != '-') {
		i += 2;
	    }
	    else {
		return str + i + 2;
	    }
	    break;
	  default:
	    i += 3;
	    break;
	}
    }
    return 0;
}

static int
parser_magic_comment(struct parser_params *p, const char *str, long len)
{
    int indicator = 0;
    VALUE name = 0, val = 0;
    const char *beg, *end, *vbeg, *vend;
#define str_copy(_s, _p, _n) ((_s) \
	? (void)(rb_str_resize((_s), (_n)), \
	   MEMCPY(RSTRING_PTR(_s), (_p), char, (_n)), (_s)) \
	: (void)((_s) = STR_NEW((_p), (_n))))

    if (len <= 7) return FALSE;
    if (!!(beg = magic_comment_marker(str, len))) {
	if (!(end = magic_comment_marker(beg, str + len - beg)))
	    return FALSE;
	indicator = TRUE;
	str = beg;
	len = end - beg - 3;
    }

    /* %r"([^\\s\'\":;]+)\\s*:\\s*(\"(?:\\\\.|[^\"])*\"|[^\"\\s;]+)[\\s;]*" */
    while (len > 0) {
	const struct magic_comment *mc = magic_comments;
	char *s;
	int i;
	long n = 0;

	for (; len > 0 && *str; str++, --len) {
	    switch (*str) {
	      case '\'': case '"': case ':': case ';':
		continue;
	    }
	    if (!ISSPACE(*str)) break;
	}
	for (beg = str; len > 0; str++, --len) {
	    switch (*str) {
	      case '\'': case '"': case ':': case ';':
		break;
	      default:
		if (ISSPACE(*str)) break;
		continue;
	    }
	    break;
	}
	for (end = str; len > 0 && ISSPACE(*str); str++, --len);
	if (!len) break;
	if (*str != ':') {
	    if (!indicator) return FALSE;
	    continue;
	}

	do str++; while (--len > 0 && ISSPACE(*str));
	if (!len) break;
	if (*str == '"') {
	    for (vbeg = ++str; --len > 0 && *str != '"'; str++) {
		if (*str == '\\') {
		    --len;
		    ++str;
		}
	    }
	    vend = str;
	    if (len) {
		--len;
		++str;
	    }
	}
	else {
	    for (vbeg = str; len > 0 && *str != '"' && *str != ';' && !ISSPACE(*str); --len, str++);
	    vend = str;
	}
	if (indicator) {
	    while (len > 0 && (*str == ';' || ISSPACE(*str))) --len, str++;
	}
	else {
	    while (len > 0 && (ISSPACE(*str))) --len, str++;
	    if (len) return FALSE;
	}

	n = end - beg;
	str_copy(name, beg, n);
	s = RSTRING_PTR(name);
	for (i = 0; i < n; ++i) {
	    if (s[i] == '-') s[i] = '_';
	}
	do {
	    if (STRNCASECMP(mc->name, s, n) == 0 && !mc->name[n]) {
		n = vend - vbeg;
		if (mc->length) {
		    n = (*mc->length)(p, vbeg, n);
		}
		str_copy(val, vbeg, n);
		(*mc->func)(p, mc->name, RSTRING_PTR(val));
		break;
	    }
	} while (++mc < magic_comments + numberof(magic_comments));
#ifdef RIPPER
	str_copy(val, vbeg, vend - vbeg);
	dispatch2(magic_comment, name, val);
#endif
    }

    return TRUE;
}

static void
set_file_encoding(struct parser_params *p, const char *str, const char *send)
{
    int sep = 0;
    const char *beg = str;
    VALUE s;

    for (;;) {
	if (send - str <= 6) return;
	switch (str[6]) {
	  case 'C': case 'c': str += 6; continue;
	  case 'O': case 'o': str += 5; continue;
	  case 'D': case 'd': str += 4; continue;
	  case 'I': case 'i': str += 3; continue;
	  case 'N': case 'n': str += 2; continue;
	  case 'G': case 'g': str += 1; continue;
	  case '=': case ':':
	    sep = 1;
	    str += 6;
	    break;
	  default:
	    str += 6;
	    if (ISSPACE(*str)) break;
	    continue;
	}
	if (STRNCASECMP(str-6, "coding", 6) == 0) break;
    }
    for (;;) {
	do {
	    if (++str >= send) return;
	} while (ISSPACE(*str));
	if (sep) break;
	if (*str != '=' && *str != ':') return;
	sep = 1;
	str++;
    }
    beg = str;
    while ((*str == '-' || *str == '_' || ISALNUM(*str)) && ++str < send);
    s = rb_str_new(beg, parser_encode_length(p, beg, str - beg));
    parser_set_encode(p, RSTRING_PTR(s));
    rb_str_resize(s, 0);
}

static void
parser_prepare(struct parser_params *p)
{
    int c = nextc(p);
    p->token_info_enabled = !compile_for_eval && RTEST(ruby_verbose);
    switch (c) {
      case '#':
	if (peek(p, '!')) p->has_shebang = 1;
	break;
      case 0xef:		/* UTF-8 BOM marker */
	if (p->lex.pend - p->lex.pcur >= 2 &&
	    (unsigned char)p->lex.pcur[0] == 0xbb &&
	    (unsigned char)p->lex.pcur[1] == 0xbf) {
	    p->enc = rb_utf8_encoding();
	    p->lex.pcur += 2;
	    p->lex.pbeg = p->lex.pcur;
	    return;
	}
	break;
      case EOF:
	return;
    }
    pushback(p, c);
    p->enc = rb_enc_get(p->lex.lastline);
}

#ifndef RIPPER
#define ambiguous_operator(tok, op, syn) ( \
    rb_warning0("`"op"' after local variable or literal is interpreted as binary operator"), \
    rb_warning0("even though it seems like "syn""))
#else
#define ambiguous_operator(tok, op, syn) \
    dispatch2(operator_ambiguous, TOKEN2VAL(tok), rb_str_new_cstr(syn))
#endif
#define warn_balanced(tok, op, syn) ((void) \
    (!IS_lex_state_for(last_state, EXPR_CLASS|EXPR_DOT|EXPR_FNAME|EXPR_ENDFN) && \
     space_seen && !ISSPACE(c) && \
     (ambiguous_operator(tok, op, syn), 0)), \
     (enum yytokentype)(tok))

static VALUE
parse_rational(struct parser_params *p, char *str, int len, int seen_point)
{
    VALUE v;
    char *point = &str[seen_point];
    size_t fraclen = len-seen_point-1;
    memmove(point, point+1, fraclen+1);
    v = rb_cstr_to_inum(str, 10, FALSE);
    return rb_rational_new(v, rb_int_positive_pow(10, fraclen));
}

static enum yytokentype
no_digits(struct parser_params *p)
{
    yyerror0("numeric literal without digits");
    if (peek(p, '_')) nextc(p);
    /* dummy 0, for tUMINUS_NUM at numeric */
    return set_integer_literal(p, INT2FIX(0), 0);
}

static enum yytokentype
parse_numeric(struct parser_params *p, int c)
{
    int is_float, seen_point, seen_e, nondigit;
    int suffix;

    is_float = seen_point = seen_e = nondigit = 0;
    SET_LEX_STATE(EXPR_END);
    newtok(p);
    if (c == '-' || c == '+') {
	tokadd(p, c);
	c = nextc(p);
    }
    if (c == '0') {
	int start = toklen(p);
	c = nextc(p);
	if (c == 'x' || c == 'X') {
	    /* hexadecimal */
	    c = nextc(p);
	    if (c != -1 && ISXDIGIT(c)) {
		do {
		    if (c == '_') {
			if (nondigit) break;
			nondigit = c;
			continue;
		    }
		    if (!ISXDIGIT(c)) break;
		    nondigit = 0;
		    tokadd(p, c);
		} while ((c = nextc(p)) != -1);
	    }
	    pushback(p, c);
	    tokfix(p);
	    if (toklen(p) == start) {
		return no_digits(p);
	    }
	    else if (nondigit) goto trailing_uc;
	    suffix = number_literal_suffix(p, NUM_SUFFIX_ALL);
	    return set_integer_literal(p, rb_cstr_to_inum(tok(p), 16, FALSE), suffix);
	}
	if (c == 'b' || c == 'B') {
	    /* binary */
	    c = nextc(p);
	    if (c == '0' || c == '1') {
		do {
		    if (c == '_') {
			if (nondigit) break;
			nondigit = c;
			continue;
		    }
		    if (c != '0' && c != '1') break;
		    nondigit = 0;
		    tokadd(p, c);
		} while ((c = nextc(p)) != -1);
	    }
	    pushback(p, c);
	    tokfix(p);
	    if (toklen(p) == start) {
		return no_digits(p);
	    }
	    else if (nondigit) goto trailing_uc;
	    suffix = number_literal_suffix(p, NUM_SUFFIX_ALL);
	    return set_integer_literal(p, rb_cstr_to_inum(tok(p), 2, FALSE), suffix);
	}
	if (c == 'd' || c == 'D') {
	    /* decimal */
	    c = nextc(p);
	    if (c != -1 && ISDIGIT(c)) {
		do {
		    if (c == '_') {
			if (nondigit) break;
			nondigit = c;
			continue;
		    }
		    if (!ISDIGIT(c)) break;
		    nondigit = 0;
		    tokadd(p, c);
		} while ((c = nextc(p)) != -1);
	    }
	    pushback(p, c);
	    tokfix(p);
	    if (toklen(p) == start) {
		return no_digits(p);
	    }
	    else if (nondigit) goto trailing_uc;
	    suffix = number_literal_suffix(p, NUM_SUFFIX_ALL);
	    return set_integer_literal(p, rb_cstr_to_inum(tok(p), 10, FALSE), suffix);
	}
	if (c == '_') {
	    /* 0_0 */
	    goto octal_number;
	}
	if (c == 'o' || c == 'O') {
	    /* prefixed octal */
	    c = nextc(p);
	    if (c == -1 || c == '_' || !ISDIGIT(c)) {
		return no_digits(p);
	    }
	}
	if (c >= '0' && c <= '7') {
	    /* octal */
	  octal_number:
	    do {
		if (c == '_') {
		    if (nondigit) break;
		    nondigit = c;
		    continue;
		}
		if (c < '0' || c > '9') break;
		if (c > '7') goto invalid_octal;
		nondigit = 0;
		tokadd(p, c);
	    } while ((c = nextc(p)) != -1);
	    if (toklen(p) > start) {
		pushback(p, c);
		tokfix(p);
		if (nondigit) goto trailing_uc;
		suffix = number_literal_suffix(p, NUM_SUFFIX_ALL);
		return set_integer_literal(p, rb_cstr_to_inum(tok(p), 8, FALSE), suffix);
	    }
	    if (nondigit) {
		pushback(p, c);
		goto trailing_uc;
	    }
	}
	if (c > '7' && c <= '9') {
	  invalid_octal:
	    yyerror0("Invalid octal digit");
	}
	else if (c == '.' || c == 'e' || c == 'E') {
	    tokadd(p, '0');
	}
	else {
	    pushback(p, c);
	    suffix = number_literal_suffix(p, NUM_SUFFIX_ALL);
	    return set_integer_literal(p, INT2FIX(0), suffix);
	}
    }

    for (;;) {
	switch (c) {
	  case '0': case '1': case '2': case '3': case '4':
	  case '5': case '6': case '7': case '8': case '9':
	    nondigit = 0;
	    tokadd(p, c);
	    break;

	  case '.':
	    if (nondigit) goto trailing_uc;
	    if (seen_point || seen_e) {
		goto decode_num;
	    }
	    else {
		int c0 = nextc(p);
		if (c0 == -1 || !ISDIGIT(c0)) {
		    pushback(p, c0);
		    goto decode_num;
		}
		c = c0;
	    }
	    seen_point = toklen(p);
	    tokadd(p, '.');
	    tokadd(p, c);
	    is_float++;
	    nondigit = 0;
	    break;

	  case 'e':
	  case 'E':
	    if (nondigit) {
		pushback(p, c);
		c = nondigit;
		goto decode_num;
	    }
	    if (seen_e) {
		goto decode_num;
	    }
	    nondigit = c;
	    c = nextc(p);
	    if (c != '-' && c != '+' && !ISDIGIT(c)) {
		pushback(p, c);
		nondigit = 0;
		goto decode_num;
	    }
	    tokadd(p, nondigit);
	    seen_e++;
	    is_float++;
	    tokadd(p, c);
	    nondigit = (c == '-' || c == '+') ? c : 0;
	    break;

	  case '_':	/* `_' in number just ignored */
	    if (nondigit) goto decode_num;
	    nondigit = c;
	    break;

	  default:
	    goto decode_num;
	}
	c = nextc(p);
    }

  decode_num:
    pushback(p, c);
    if (nondigit) {
      trailing_uc:
	literal_flush(p, p->lex.pcur - 1);
	YYLTYPE loc = RUBY_INIT_YYLLOC();
	compile_error(p, "trailing `%c' in number", nondigit);
	parser_show_error_line(p, &loc);
    }
    tokfix(p);
    if (is_float) {
	enum yytokentype type = tFLOAT;
	VALUE v;

	suffix = number_literal_suffix(p, seen_e ? NUM_SUFFIX_I : NUM_SUFFIX_ALL);
	if (suffix & NUM_SUFFIX_R) {
	    type = tRATIONAL;
	    v = parse_rational(p, tok(p), toklen(p), seen_point);
	}
	else {
	    double d = strtod(tok(p), 0);
	    if (errno == ERANGE) {
		rb_warning1("Float %s out of range", WARN_S(tok(p)));
		errno = 0;
	    }
	    v = DBL2NUM(d);
	}
	return set_number_literal(p, v, type, suffix);
    }
    suffix = number_literal_suffix(p, NUM_SUFFIX_ALL);
    return set_integer_literal(p, rb_cstr_to_inum(tok(p), 10, FALSE), suffix);
}

static enum yytokentype
parse_qmark(struct parser_params *p, int space_seen)
{
    rb_encoding *enc;
    register int c;
    VALUE lit;

    if (IS_END()) {
	SET_LEX_STATE(EXPR_VALUE);
	return '?';
    }
    c = nextc(p);
    if (c == -1) {
	compile_error(p, "incomplete character syntax");
	return 0;
    }
    if (rb_enc_isspace(c, p->enc)) {
	if (!IS_ARG()) {
	    int c2 = escaped_control_code(c);
	    if (c2) {
		WARN_SPACE_CHAR(c2, "?");
	    }
	}
      ternary:
	pushback(p, c);
	SET_LEX_STATE(EXPR_VALUE);
	return '?';
    }
    newtok(p);
    enc = p->enc;
    if (!parser_isascii(p)) {
	if (tokadd_mbchar(p, c) == -1) return 0;
    }
    else if ((rb_enc_isalnum(c, p->enc) || c == '_') &&
	     p->lex.pcur < p->lex.pend && is_identchar(p->lex.pcur, p->lex.pend, p->enc)) {
	if (space_seen) {
	    const char *start = p->lex.pcur - 1, *ptr = start;
	    do {
		int n = parser_precise_mbclen(p, ptr);
		if (n < 0) return -1;
		ptr += n;
	    } while (ptr < p->lex.pend && is_identchar(ptr, p->lex.pend, p->enc));
	    rb_warn2("`?' just followed by `%.*s' is interpreted as" \
		     " a conditional operator, put a space after `?'",
		     WARN_I((int)(ptr - start)), WARN_S_L(start, (ptr - start)));
	}
	goto ternary;
    }
    else if (c == '\\') {
	if (peek(p, 'u')) {
	    nextc(p);
	    enc = rb_utf8_encoding();
	    tokadd_utf8(p, &enc, -1, 0, 0);
	}
	else if (!lex_eol_p(p) && !(c = *p->lex.pcur, ISASCII(c))) {
	    nextc(p);
	    if (tokadd_mbchar(p, c) == -1) return 0;
	}
	else {
	    c = read_escape(p, 0, &enc);
	    tokadd(p, c);
	}
    }
    else {
	tokadd(p, c);
    }
    tokfix(p);
    lit = STR_NEW3(tok(p), toklen(p), enc, 0);
    set_yylval_str(lit);
    SET_LEX_STATE(EXPR_END);
    return tCHAR;
}

static enum yytokentype
parse_percent(struct parser_params *p, const int space_seen, const enum lex_state_e last_state)
{
    register int c;
    const char *ptok = p->lex.pcur;

    if (IS_BEG()) {
	int term;
	int paren;

	c = nextc(p);
      quotation:
	if (c == -1 || !ISALNUM(c)) {
	    term = c;
	    c = 'Q';
	}
	else {
	    term = nextc(p);
	    if (rb_enc_isalnum(term, p->enc) || !parser_isascii(p)) {
		yyerror0("unknown type of %string");
		return 0;
	    }
	}
	if (c == -1 || term == -1) {
	    compile_error(p, "unterminated quoted string meets end of file");
	    return 0;
	}
	paren = term;
	if (term == '(') term = ')';
	else if (term == '[') term = ']';
	else if (term == '{') term = '}';
	else if (term == '<') term = '>';
	else paren = 0;

	p->lex.ptok = ptok-1;
	switch (c) {
	  case 'Q':
	    p->lex.strterm = NEW_STRTERM(str_dquote, term, paren);
	    return tSTRING_BEG;

	  case 'q':
	    p->lex.strterm = NEW_STRTERM(str_squote, term, paren);
	    return tSTRING_BEG;

	  case 'W':
	    p->lex.strterm = NEW_STRTERM(str_dword, term, paren);
	    return tWORDS_BEG;

	  case 'w':
	    p->lex.strterm = NEW_STRTERM(str_sword, term, paren);
	    return tQWORDS_BEG;

	  case 'I':
	    p->lex.strterm = NEW_STRTERM(str_dword, term, paren);
	    return tSYMBOLS_BEG;

	  case 'i':
	    p->lex.strterm = NEW_STRTERM(str_sword, term, paren);
	    return tQSYMBOLS_BEG;

	  case 'x':
	    p->lex.strterm = NEW_STRTERM(str_xquote, term, paren);
	    return tXSTRING_BEG;

	  case 'r':
	    p->lex.strterm = NEW_STRTERM(str_regexp, term, paren);
	    return tREGEXP_BEG;

	  case 's':
	    p->lex.strterm = NEW_STRTERM(str_ssym, term, paren);
	    SET_LEX_STATE(EXPR_FNAME|EXPR_FITEM);
	    return tSYMBEG;

	  default:
	    yyerror0("unknown type of %string");
	    return 0;
	}
    }
    if ((c = nextc(p)) == '=') {
	set_yylval_id('%');
	SET_LEX_STATE(EXPR_BEG);
	return tOP_ASGN;
    }
    if (IS_SPCARG(c) || (IS_lex_state(EXPR_FITEM) && c == 's')) {
	goto quotation;
    }
    SET_LEX_STATE(IS_AFTER_OPERATOR() ? EXPR_ARG : EXPR_BEG);
    pushback(p, c);
    return warn_balanced('%', "%%", "string literal");
}

static int
tokadd_ident(struct parser_params *p, int c)
{
    do {
	if (tokadd_mbchar(p, c) == -1) return -1;
	c = nextc(p);
    } while (parser_is_identchar(p));
    pushback(p, c);
    return 0;
}

static ID
tokenize_ident(struct parser_params *p, const enum lex_state_e last_state)
{
    ID ident = TOK_INTERN();

    set_yylval_name(ident);

    return ident;
}

static int
parse_numvar(struct parser_params *p)
{
    size_t len;
    int overflow;
    unsigned long n = ruby_scan_digits(tok(p)+1, toklen(p)-1, 10, &len, &overflow);
    const unsigned long nth_ref_max =
	((FIXNUM_MAX < INT_MAX) ? FIXNUM_MAX : INT_MAX) >> 1;
    /* NTH_REF is left-shifted to be ORed with back-ref flag and
     * turned into a Fixnum, in compile.c */

    if (overflow || n > nth_ref_max) {
	/* compile_error()? */
	rb_warn1("`%s' is too big for a number variable, always nil", WARN_S(tok(p)));
	return 0;		/* $0 is $PROGRAM_NAME, not NTH_REF */
    }
    else {
	return (int)n;
    }
}

static enum yytokentype
parse_gvar(struct parser_params *p, const enum lex_state_e last_state)
{
    const char *ptr = p->lex.pcur;
    register int c;

    SET_LEX_STATE(EXPR_END);
    p->lex.ptok = ptr - 1; /* from '$' */
    newtok(p);
    c = nextc(p);
    switch (c) {
      case '_':		/* $_: last read line string */
	c = nextc(p);
	if (parser_is_identchar(p)) {
	    tokadd(p, '$');
	    tokadd(p, '_');
	    break;
	}
	pushback(p, c);
	c = '_';
	/* fall through */
      case '~':		/* $~: match-data */
      case '*':		/* $*: argv */
      case '$':		/* $$: pid */
      case '?':		/* $?: last status */
      case '!':		/* $!: error string */
      case '@':		/* $@: error position */
      case '/':		/* $/: input record separator */
      case '\\':		/* $\: output record separator */
      case ';':		/* $;: field separator */
      case ',':		/* $,: output field separator */
      case '.':		/* $.: last read line number */
      case '=':		/* $=: ignorecase */
      case ':':		/* $:: load path */
      case '<':		/* $<: reading filename */
      case '>':		/* $>: default output handle */
      case '\"':		/* $": already loaded files */
	tokadd(p, '$');
	tokadd(p, c);
	goto gvar;

      case '-':
	tokadd(p, '$');
	tokadd(p, c);
	c = nextc(p);
	if (parser_is_identchar(p)) {
	    if (tokadd_mbchar(p, c) == -1) return 0;
	}
	else {
	    pushback(p, c);
	    pushback(p, '-');
	    return '$';
	}
      gvar:
	set_yylval_name(TOK_INTERN());
	return tGVAR;

      case '&':		/* $&: last match */
      case '`':		/* $`: string before last match */
      case '\'':		/* $': string after last match */
      case '+':		/* $+: string matches last paren. */
	if (IS_lex_state_for(last_state, EXPR_FNAME)) {
	    tokadd(p, '$');
	    tokadd(p, c);
	    goto gvar;
	}
	set_yylval_node(NEW_BACK_REF(c, &_cur_loc));
	return tBACK_REF;

      case '1': case '2': case '3':
      case '4': case '5': case '6':
      case '7': case '8': case '9':
	tokadd(p, '$');
	do {
	    tokadd(p, c);
	    c = nextc(p);
	} while (c != -1 && ISDIGIT(c));
	pushback(p, c);
	if (IS_lex_state_for(last_state, EXPR_FNAME)) goto gvar;
	tokfix(p);
	set_yylval_node(NEW_NTH_REF(parse_numvar(p), &_cur_loc));
	return tNTH_REF;

      default:
	if (!parser_is_identchar(p)) {
	    YYLTYPE loc = RUBY_INIT_YYLLOC();
	    if (c == -1 || ISSPACE(c)) {
		compile_error(p, "`$' without identifiers is not allowed as a global variable name");
	    }
	    else {
		pushback(p, c);
		compile_error(p, "`$%c' is not allowed as a global variable name", c);
	    }
	    parser_show_error_line(p, &loc);
	    set_yylval_noname();
	    return tGVAR;
	}
	/* fall through */
      case '0':
	tokadd(p, '$');
    }

    if (tokadd_ident(p, c)) return 0;
    SET_LEX_STATE(EXPR_END);
    tokenize_ident(p, last_state);
    return tGVAR;
}

#ifndef RIPPER
static bool
parser_numbered_param(struct parser_params *p, int n)
{
    if (n < 0) return false;

    if (DVARS_TERMINAL_P(p->lvtbl->args) || DVARS_TERMINAL_P(p->lvtbl->args->prev)) {
	return false;
    }
    if (p->max_numparam == ORDINAL_PARAM) {
	compile_error(p, "ordinary parameter is defined");
	return false;
    }
    struct vtable *args = p->lvtbl->args;
    if (p->max_numparam < n) {
	p->max_numparam = n;
    }
    while (n > args->pos) {
	vtable_add(args, NUMPARAM_IDX_TO_ID(args->pos+1));
    }
    return true;
}
#endif

static enum yytokentype
parse_atmark(struct parser_params *p, const enum lex_state_e last_state)
{
    const char *ptr = p->lex.pcur;
    enum yytokentype result = tIVAR;
    register int c = nextc(p);
    YYLTYPE loc;

    p->lex.ptok = ptr - 1; /* from '@' */
    newtok(p);
    tokadd(p, '@');
    if (c == '@') {
	result = tCVAR;
	tokadd(p, '@');
	c = nextc(p);
    }
    SET_LEX_STATE(IS_lex_state_for(last_state, EXPR_FNAME) ? EXPR_ENDFN : EXPR_END);
    if (c == -1 || !parser_is_identchar(p)) {
	pushback(p, c);
	RUBY_SET_YYLLOC(loc);
	if (result == tIVAR) {
	    compile_error(p, "`@' without identifiers is not allowed as an instance variable name");
	}
	else {
	    compile_error(p, "`@@' without identifiers is not allowed as a class variable name");
	}
	parser_show_error_line(p, &loc);
	set_yylval_noname();
	SET_LEX_STATE(EXPR_END);
	return result;
    }
    else if (ISDIGIT(c)) {
	pushback(p, c);
	RUBY_SET_YYLLOC(loc);
	if (result == tIVAR) {
	    compile_error(p, "`@%c' is not allowed as an instance variable name", c);
	}
	else {
	    compile_error(p, "`@@%c' is not allowed as a class variable name", c);
	}
	parser_show_error_line(p, &loc);
	set_yylval_noname();
	SET_LEX_STATE(EXPR_END);
	return result;
    }

    if (tokadd_ident(p, c)) return 0;
    tokenize_ident(p, last_state);
    return result;
}

static enum yytokentype
parse_ident(struct parser_params *p, int c, int cmd_state)
{
    enum yytokentype result;
    int mb = ENC_CODERANGE_7BIT;
    const enum lex_state_e last_state = p->lex.state;
    ID ident;

    do {
	if (!ISASCII(c)) mb = ENC_CODERANGE_UNKNOWN;
	if (tokadd_mbchar(p, c) == -1) return 0;
	c = nextc(p);
    } while (parser_is_identchar(p));
    if ((c == '!' || c == '?') && !peek(p, '=')) {
	result = tFID;
	tokadd(p, c);
    }
    else if (c == '=' && IS_lex_state(EXPR_FNAME) &&
	     (!peek(p, '~') && !peek(p, '>') && (!peek(p, '=') || (peek_n(p, '>', 1))))) {
	result = tIDENTIFIER;
	tokadd(p, c);
    }
    else {
	result = tCONSTANT;	/* assume provisionally */
	pushback(p, c);
    }
    tokfix(p);

    if (IS_LABEL_POSSIBLE()) {
	if (IS_LABEL_SUFFIX(0)) {
	    SET_LEX_STATE(EXPR_ARG|EXPR_LABELED);
	    nextc(p);
	    set_yylval_name(TOK_INTERN());
	    return tLABEL;
	}
    }
    if (mb == ENC_CODERANGE_7BIT && !IS_lex_state(EXPR_DOT)) {
	const struct kwtable *kw;

	/* See if it is a reserved word.  */
	kw = rb_reserved_word(tok(p), toklen(p));
	if (kw) {
	    enum lex_state_e state = p->lex.state;
	    if (IS_lex_state_for(state, EXPR_FNAME)) {
		SET_LEX_STATE(EXPR_ENDFN);
		set_yylval_name(rb_intern2(tok(p), toklen(p)));
		return kw->id[0];
	    }
	    SET_LEX_STATE(kw->state);
	    if (IS_lex_state(EXPR_BEG)) {
		p->command_start = TRUE;
	    }
	    if (kw->id[0] == keyword_do) {
		if (lambda_beginning_p()) {
		    p->lex.lpar_beg = -1; /* make lambda_beginning_p() == FALSE in the body of "-> do ... end" */
		    return keyword_do_LAMBDA;
		}
		if (COND_P()) return keyword_do_cond;
		if (CMDARG_P() && !IS_lex_state_for(state, EXPR_CMDARG))
		    return keyword_do_block;
		return keyword_do;
	    }
	    if (IS_lex_state_for(state, (EXPR_BEG | EXPR_LABELED)))
		return kw->id[0];
	    else {
		if (kw->id[0] != kw->id[1])
		    SET_LEX_STATE(EXPR_BEG | EXPR_LABEL);
		return kw->id[1];
	    }
	}
    }

    if (IS_lex_state(EXPR_BEG_ANY | EXPR_ARG_ANY | EXPR_DOT)) {
	if (cmd_state) {
	    SET_LEX_STATE(EXPR_CMDARG);
	}
	else {
	    SET_LEX_STATE(EXPR_ARG);
	}
    }
    else if (p->lex.state == EXPR_FNAME) {
	SET_LEX_STATE(EXPR_ENDFN);
    }
    else {
	SET_LEX_STATE(EXPR_END);
    }

    ident = tokenize_ident(p, last_state);
    if (result == tCONSTANT && is_local_id(ident)) result = tIDENTIFIER;
    if (!IS_lex_state_for(last_state, EXPR_DOT|EXPR_FNAME) &&
	(result == tIDENTIFIER) && /* not EXPR_FNAME, not attrasgn */
	lvar_defined(p, ident)) {
	SET_LEX_STATE(EXPR_END|EXPR_LABEL);
    }
    return result;
}

static enum yytokentype
parser_yylex(struct parser_params *p)
{
    register int c;
    int space_seen = 0;
    int cmd_state;
    int label;
    enum lex_state_e last_state;
    int fallthru = FALSE;
    int token_seen = p->token_seen;

    if (p->lex.strterm) {
	if (p->lex.strterm->flags & STRTERM_HEREDOC) {
	    return here_document(p, &p->lex.strterm->u.heredoc);
	}
	else {
	    token_flush(p);
	    return parse_string(p, &p->lex.strterm->u.literal);
	}
    }
    cmd_state = p->command_start;
    p->command_start = FALSE;
    p->token_seen = TRUE;
  retry:
    last_state = p->lex.state;
#ifndef RIPPER
    token_flush(p);
#endif
    switch (c = nextc(p)) {
      case '\0':		/* NUL */
      case '\004':		/* ^D */
      case '\032':		/* ^Z */
      case -1:			/* end of script. */
	return 0;

	/* white spaces */
      case ' ': case '\t': case '\f': case '\r':
      case '\13': /* '\v' */
	space_seen = 1;
#ifdef RIPPER
	while ((c = nextc(p))) {
	    switch (c) {
	      case ' ': case '\t': case '\f': case '\r':
	      case '\13': /* '\v' */
		break;
	      default:
		goto outofloop;
	    }
	}
      outofloop:
	pushback(p, c);
	dispatch_scan_event(p, tSP);
#endif
	goto retry;

      case '#':		/* it's a comment */
	p->token_seen = token_seen;
	/* no magic_comment in shebang line */
	if (!parser_magic_comment(p, p->lex.pcur, p->lex.pend - p->lex.pcur)) {
	    if (comment_at_top(p)) {
		set_file_encoding(p, p->lex.pcur, p->lex.pend);
	    }
	}
	lex_goto_eol(p);
        dispatch_scan_event(p, tCOMMENT);
        fallthru = TRUE;
	/* fall through */
      case '\n':
	p->token_seen = token_seen;
	c = (IS_lex_state(EXPR_BEG|EXPR_CLASS|EXPR_FNAME|EXPR_DOT) &&
	     !IS_lex_state(EXPR_LABELED));
	if (c || IS_lex_state_all(EXPR_ARG|EXPR_LABELED)) {
            if (!fallthru) {
                dispatch_scan_event(p, tIGNORED_NL);
            }
            fallthru = FALSE;
	    if (!c && p->in_kwarg) {
		goto normal_newline;
	    }
	    goto retry;
	}
	while (1) {
	    switch (c = nextc(p)) {
	      case ' ': case '\t': case '\f': case '\r':
	      case '\13': /* '\v' */
		space_seen = 1;
		break;
	      case '#':
		pushback(p, c);
		if (space_seen) dispatch_scan_event(p, tSP);
		goto retry;
	      case '&':
	      case '.': {
		dispatch_delayed_token(p, tIGNORED_NL);
		if (peek(p, '.') == (c == '&')) {
		    pushback(p, c);
		    dispatch_scan_event(p, tSP);
		    goto retry;
		}
	      }
	      default:
		p->ruby_sourceline--;
		p->lex.nextline = p->lex.lastline;
	      case -1:		/* EOF no decrement*/
#ifndef RIPPER
		if (p->lex.prevline && !p->eofp) p->lex.lastline = p->lex.prevline;
		p->lex.pbeg = RSTRING_PTR(p->lex.lastline);
		p->lex.pend = p->lex.pcur = p->lex.pbeg + RSTRING_LEN(p->lex.lastline);
		pushback(p, 1); /* always pushback */
		p->lex.ptok = p->lex.pcur;
#else
		lex_goto_eol(p);
		if (c != -1) {
		    p->lex.ptok = p->lex.pcur;
		}
#endif
		goto normal_newline;
	    }
	}
      normal_newline:
	p->command_start = TRUE;
	SET_LEX_STATE(EXPR_BEG);
	return '\n';

      case '*':
	if ((c = nextc(p)) == '*') {
	    if ((c = nextc(p)) == '=') {
		set_yylval_id(idPow);
		SET_LEX_STATE(EXPR_BEG);
		return tOP_ASGN;
	    }
	    pushback(p, c);
	    if (IS_SPCARG(c)) {
		rb_warning0("`**' interpreted as argument prefix");
		c = tDSTAR;
	    }
	    else if (IS_BEG()) {
		c = tDSTAR;
	    }
	    else {
		c = warn_balanced((enum ruby_method_ids)tPOW, "**", "argument prefix");
	    }
	}
	else {
	    if (c == '=') {
                set_yylval_id('*');
		SET_LEX_STATE(EXPR_BEG);
		return tOP_ASGN;
	    }
	    pushback(p, c);
	    if (IS_SPCARG(c)) {
		rb_warning0("`*' interpreted as argument prefix");
		c = tSTAR;
	    }
	    else if (IS_BEG()) {
		c = tSTAR;
	    }
	    else {
		c = warn_balanced('*', "*", "argument prefix");
	    }
	}
	SET_LEX_STATE(IS_AFTER_OPERATOR() ? EXPR_ARG : EXPR_BEG);
	return c;

      case '!':
	c = nextc(p);
	if (IS_AFTER_OPERATOR()) {
	    SET_LEX_STATE(EXPR_ARG);
	    if (c == '@') {
		return '!';
	    }
	}
	else {
	    SET_LEX_STATE(EXPR_BEG);
	}
	if (c == '=') {
	    return tNEQ;
	}
	if (c == '~') {
	    return tNMATCH;
	}
	pushback(p, c);
	return '!';

      case '=':
	if (was_bol(p)) {
	    /* skip embedded rd document */
	    if (word_match_p(p, "begin", 5)) {
		int first_p = TRUE;

		lex_goto_eol(p);
		dispatch_scan_event(p, tEMBDOC_BEG);
		for (;;) {
		    lex_goto_eol(p);
		    if (!first_p) {
			dispatch_scan_event(p, tEMBDOC);
		    }
		    first_p = FALSE;
		    c = nextc(p);
		    if (c == -1) {
			compile_error(p, "embedded document meets end of file");
			return 0;
		    }
		    if (c == '=' && word_match_p(p, "end", 3)) {
			break;
		    }
		    pushback(p, c);
		}
		lex_goto_eol(p);
		dispatch_scan_event(p, tEMBDOC_END);
		goto retry;
	    }
	}

	SET_LEX_STATE(IS_AFTER_OPERATOR() ? EXPR_ARG : EXPR_BEG);
	if ((c = nextc(p)) == '=') {
	    if ((c = nextc(p)) == '=') {
		return tEQQ;
	    }
	    pushback(p, c);
	    return tEQ;
	}
	if (c == '~') {
	    return tMATCH;
	}
	else if (c == '>') {
	    return tASSOC;
	}
	pushback(p, c);
	return '=';

      case '<':
	c = nextc(p);
	if (c == '<' &&
	    !IS_lex_state(EXPR_DOT | EXPR_CLASS) &&
	    !IS_END() &&
	    (!IS_ARG() || IS_lex_state(EXPR_LABELED) || space_seen)) {
	    int token = heredoc_identifier(p);
	    if (token) return token < 0 ? 0 : token;
	}
	if (IS_AFTER_OPERATOR()) {
	    SET_LEX_STATE(EXPR_ARG);
	}
	else {
	    if (IS_lex_state(EXPR_CLASS))
		p->command_start = TRUE;
	    SET_LEX_STATE(EXPR_BEG);
	}
	if (c == '=') {
	    if ((c = nextc(p)) == '>') {
		return tCMP;
	    }
	    pushback(p, c);
	    return tLEQ;
	}
	if (c == '<') {
	    if ((c = nextc(p)) == '=') {
		set_yylval_id(idLTLT);
		SET_LEX_STATE(EXPR_BEG);
		return tOP_ASGN;
	    }
	    pushback(p, c);
	    return warn_balanced((enum ruby_method_ids)tLSHFT, "<<", "here document");
	}
	pushback(p, c);
	return '<';

      case '>':
	SET_LEX_STATE(IS_AFTER_OPERATOR() ? EXPR_ARG : EXPR_BEG);
	if ((c = nextc(p)) == '=') {
	    return tGEQ;
	}
	if (c == '>') {
	    if ((c = nextc(p)) == '=') {
		set_yylval_id(idGTGT);
		SET_LEX_STATE(EXPR_BEG);
		return tOP_ASGN;
	    }
	    pushback(p, c);
	    return tRSHFT;
	}
	pushback(p, c);
	return '>';

      case '"':
	label = (IS_LABEL_POSSIBLE() ? str_label : 0);
	p->lex.strterm = NEW_STRTERM(str_dquote | label, '"', 0);
	p->lex.ptok = p->lex.pcur-1;
	return tSTRING_BEG;

      case '`':
	if (IS_lex_state(EXPR_FNAME)) {
	    SET_LEX_STATE(EXPR_ENDFN);
	    return c;
	}
	if (IS_lex_state(EXPR_DOT)) {
	    if (cmd_state)
		SET_LEX_STATE(EXPR_CMDARG);
	    else
		SET_LEX_STATE(EXPR_ARG);
	    return c;
	}
	p->lex.strterm = NEW_STRTERM(str_xquote, '`', 0);
	return tXSTRING_BEG;

      case '\'':
	label = (IS_LABEL_POSSIBLE() ? str_label : 0);
	p->lex.strterm = NEW_STRTERM(str_squote | label, '\'', 0);
	p->lex.ptok = p->lex.pcur-1;
	return tSTRING_BEG;

      case '?':
	return parse_qmark(p, space_seen);

      case '&':
	if ((c = nextc(p)) == '&') {
	    SET_LEX_STATE(EXPR_BEG);
	    if ((c = nextc(p)) == '=') {
                set_yylval_id(idANDOP);
		SET_LEX_STATE(EXPR_BEG);
		return tOP_ASGN;
	    }
	    pushback(p, c);
	    return tANDOP;
	}
	else if (c == '=') {
            set_yylval_id('&');
	    SET_LEX_STATE(EXPR_BEG);
	    return tOP_ASGN;
	}
	else if (c == '.') {
	    set_yylval_id(idANDDOT);
	    SET_LEX_STATE(EXPR_DOT);
	    return tANDDOT;
	}
	pushback(p, c);
	if (IS_SPCARG(c)) {
	    if ((c != ':') ||
		(c = peekc_n(p, 1)) == -1 ||
		!(c == '\'' || c == '"' ||
		  is_identchar((p->lex.pcur+1), p->lex.pend, p->enc))) {
		rb_warning0("`&' interpreted as argument prefix");
	    }
	    c = tAMPER;
	}
	else if (IS_BEG()) {
	    c = tAMPER;
	}
	else {
	    c = warn_balanced('&', "&", "argument prefix");
	}
	SET_LEX_STATE(IS_AFTER_OPERATOR() ? EXPR_ARG : EXPR_BEG);
	return c;

      case '|':
	if ((c = nextc(p)) == '|') {
	    SET_LEX_STATE(EXPR_BEG);
	    if ((c = nextc(p)) == '=') {
                set_yylval_id(idOROP);
		SET_LEX_STATE(EXPR_BEG);
		return tOP_ASGN;
	    }
	    pushback(p, c);
	    if (IS_lex_state_for(last_state, EXPR_BEG)) {
		c = '|';
		pushback(p, '|');
		return c;
	    }
	    return tOROP;
	}
	if (c == '=') {
            set_yylval_id('|');
	    SET_LEX_STATE(EXPR_BEG);
	    return tOP_ASGN;
	}
	SET_LEX_STATE(IS_AFTER_OPERATOR() ? EXPR_ARG : EXPR_BEG|EXPR_LABEL);
	pushback(p, c);
	return '|';

      case '+':
	c = nextc(p);
	if (IS_AFTER_OPERATOR()) {
	    SET_LEX_STATE(EXPR_ARG);
	    if (c == '@') {
		return tUPLUS;
	    }
	    pushback(p, c);
	    return '+';
	}
	if (c == '=') {
            set_yylval_id('+');
	    SET_LEX_STATE(EXPR_BEG);
	    return tOP_ASGN;
	}
	if (IS_BEG() || (IS_SPCARG(c) && arg_ambiguous(p, '+'))) {
	    SET_LEX_STATE(EXPR_BEG);
	    pushback(p, c);
	    if (c != -1 && ISDIGIT(c)) {
		return parse_numeric(p, '+');
	    }
	    return tUPLUS;
	}
	SET_LEX_STATE(EXPR_BEG);
	pushback(p, c);
	return warn_balanced('+', "+", "unary operator");

      case '-':
	c = nextc(p);
	if (IS_AFTER_OPERATOR()) {
	    SET_LEX_STATE(EXPR_ARG);
	    if (c == '@') {
		return tUMINUS;
	    }
	    pushback(p, c);
	    return '-';
	}
	if (c == '=') {
            set_yylval_id('-');
	    SET_LEX_STATE(EXPR_BEG);
	    return tOP_ASGN;
	}
	if (c == '>') {
	    SET_LEX_STATE(EXPR_ENDFN);
	    return tLAMBDA;
	}
	if (IS_BEG() || (IS_SPCARG(c) && arg_ambiguous(p, '-'))) {
	    SET_LEX_STATE(EXPR_BEG);
	    pushback(p, c);
	    if (c != -1 && ISDIGIT(c)) {
		return tUMINUS_NUM;
	    }
	    return tUMINUS;
	}
	SET_LEX_STATE(EXPR_BEG);
	pushback(p, c);
	return warn_balanced('-', "-", "unary operator");

      case '.': {
        int is_beg = IS_BEG();
	SET_LEX_STATE(EXPR_BEG);
	if ((c = nextc(p)) == '.') {
	    if ((c = nextc(p)) == '.') {
		if (p->lex.paren_nest == 0 && looking_at_eol_p(p)) {
		    rb_warn0("... at EOL, should be parenthesized?");
		}
		return is_beg ? tBDOT3 : tDOT3;
	    }
	    pushback(p, c);
	    return is_beg ? tBDOT2 : tDOT2;
	}
	pushback(p, c);
	if (c != -1 && ISDIGIT(c)) {
	    char prev = p->lex.pcur-1 > p->lex.pbeg ? *(p->lex.pcur-2) : 0;
	    parse_numeric(p, '.');
	    if (ISDIGIT(prev)) {
		yyerror0("unexpected fraction part after numeric literal");
	    }
	    else {
		yyerror0("no .<digit> floating literal anymore; put 0 before dot");
	    }
	    SET_LEX_STATE(EXPR_END);
	    p->lex.ptok = p->lex.pcur;
	    goto retry;
	}
	set_yylval_id('.');
	SET_LEX_STATE(EXPR_DOT);
	return '.';
      }

      case '0': case '1': case '2': case '3': case '4':
      case '5': case '6': case '7': case '8': case '9':
	return parse_numeric(p, c);

      case ')':
	COND_POP();
	CMDARG_POP();
	SET_LEX_STATE(EXPR_ENDFN);
	p->lex.paren_nest--;
	return c;

      case ']':
	COND_POP();
	CMDARG_POP();
	SET_LEX_STATE(EXPR_END);
	p->lex.paren_nest--;
	return c;

      case '}':
	/* tSTRING_DEND does COND_POP and CMDARG_POP in the yacc's rule */
	if (!p->lex.brace_nest--) return tSTRING_DEND;
	COND_POP();
	CMDARG_POP();
	SET_LEX_STATE(EXPR_END);
	p->lex.paren_nest--;
	return c;

      case ':':
	c = nextc(p);
	if (c == ':') {
	    if (IS_BEG() || IS_lex_state(EXPR_CLASS) || IS_SPCARG(-1)) {
		SET_LEX_STATE(EXPR_BEG);
		return tCOLON3;
	    }
	    set_yylval_id(idCOLON2);
	    SET_LEX_STATE(EXPR_DOT);
	    return tCOLON2;
	}
	if (IS_END() || ISSPACE(c) || c == '#') {
	    pushback(p, c);
	    c = warn_balanced(':', ":", "symbol literal");
	    SET_LEX_STATE(EXPR_BEG);
	    return c;
	}
	switch (c) {
	  case '\'':
	    p->lex.strterm = NEW_STRTERM(str_ssym, c, 0);
	    break;
	  case '"':
	    p->lex.strterm = NEW_STRTERM(str_dsym, c, 0);
	    break;
	  default:
	    pushback(p, c);
	    break;
	}
	SET_LEX_STATE(EXPR_FNAME);
	return tSYMBEG;

      case '/':
	if (IS_BEG()) {
	    p->lex.strterm = NEW_STRTERM(str_regexp, '/', 0);
	    return tREGEXP_BEG;
	}
	if ((c = nextc(p)) == '=') {
            set_yylval_id('/');
	    SET_LEX_STATE(EXPR_BEG);
	    return tOP_ASGN;
	}
	pushback(p, c);
	if (IS_SPCARG(c)) {
	    arg_ambiguous(p, '/');
	    p->lex.strterm = NEW_STRTERM(str_regexp, '/', 0);
	    return tREGEXP_BEG;
	}
	SET_LEX_STATE(IS_AFTER_OPERATOR() ? EXPR_ARG : EXPR_BEG);
	return warn_balanced('/', "/", "regexp literal");

      case '^':
	if ((c = nextc(p)) == '=') {
            set_yylval_id('^');
	    SET_LEX_STATE(EXPR_BEG);
	    return tOP_ASGN;
	}
	SET_LEX_STATE(IS_AFTER_OPERATOR() ? EXPR_ARG : EXPR_BEG);
	pushback(p, c);
	return '^';

      case ';':
	SET_LEX_STATE(EXPR_BEG);
	p->command_start = TRUE;
	return ';';

      case ',':
	SET_LEX_STATE(EXPR_BEG|EXPR_LABEL);
	return ',';

      case '~':
	if (IS_AFTER_OPERATOR()) {
	    if ((c = nextc(p)) != '@') {
		pushback(p, c);
	    }
	    SET_LEX_STATE(EXPR_ARG);
	}
	else {
	    SET_LEX_STATE(EXPR_BEG);
	}
	return '~';

      case '(':
	if (IS_BEG()) {
	    c = tLPAREN;
	}
	else if (!space_seen) {
	    /* foo( ... ) => method call, no ambiguity */
	}
	else if (IS_ARG() || IS_lex_state_all(EXPR_END|EXPR_LABEL)) {
	    c = tLPAREN_ARG;
	}
	else if (IS_lex_state(EXPR_ENDFN) && !lambda_beginning_p()) {
	    rb_warning0("parentheses after method name is interpreted as "
			"an argument list, not a decomposed argument");
	}
	p->lex.paren_nest++;
	COND_PUSH(0);
	CMDARG_PUSH(0);
	SET_LEX_STATE(EXPR_BEG|EXPR_LABEL);
	return c;

      case '[':
	p->lex.paren_nest++;
	if (IS_AFTER_OPERATOR()) {
	    if ((c = nextc(p)) == ']') {
		SET_LEX_STATE(EXPR_ARG);
		if ((c = nextc(p)) == '=') {
		    return tASET;
		}
		pushback(p, c);
		return tAREF;
	    }
	    pushback(p, c);
	    SET_LEX_STATE(EXPR_ARG|EXPR_LABEL);
	    return '[';
	}
	else if (IS_BEG()) {
	    c = tLBRACK;
	}
	else if (IS_ARG() && (space_seen || IS_lex_state(EXPR_LABELED))) {
	    c = tLBRACK;
	}
	SET_LEX_STATE(EXPR_BEG|EXPR_LABEL);
	COND_PUSH(0);
	CMDARG_PUSH(0);
	return c;

      case '{':
	++p->lex.brace_nest;
	if (lambda_beginning_p())
	    c = tLAMBEG;
	else if (IS_lex_state(EXPR_LABELED))
	    c = tLBRACE;      /* hash */
	else if (IS_lex_state(EXPR_ARG_ANY | EXPR_END | EXPR_ENDFN))
	    c = '{';          /* block (primary) */
	else if (IS_lex_state(EXPR_ENDARG))
	    c = tLBRACE_ARG;  /* block (expr) */
	else
	    c = tLBRACE;      /* hash */
	if (c != tLBRACE) {
	    p->command_start = TRUE;
	    SET_LEX_STATE(EXPR_BEG);
	}
	else {
	    SET_LEX_STATE(EXPR_BEG|EXPR_LABEL);
	}
	++p->lex.paren_nest;  /* after lambda_beginning_p() */
	COND_PUSH(0);
	CMDARG_PUSH(0);
	return c;

      case '\\':
	c = nextc(p);
	if (c == '\n') {
	    space_seen = 1;
	    dispatch_scan_event(p, tSP);
	    goto retry; /* skip \\n */
	}
	if (c == ' ') return tSP;
	if (ISSPACE(c)) return c;
	pushback(p, c);
	return '\\';

      case '%':
	return parse_percent(p, space_seen, last_state);

      case '$':
	return parse_gvar(p, last_state);

      case '@':
	return parse_atmark(p, last_state);

      case '_':
	if (was_bol(p) && whole_match_p(p, "__END__", 7, 0)) {
	    p->ruby__end__seen = 1;
	    p->eofp = 1;
#ifndef RIPPER
	    return -1;
#else
            lex_goto_eol(p);
            dispatch_scan_event(p, k__END__);
            return 0;
#endif
	}
	newtok(p);
	break;

      default:
	if (!parser_is_identchar(p)) {
	    compile_error(p, "Invalid char `\\x%02X' in expression", c);
            token_flush(p);
	    goto retry;
	}

	newtok(p);
	break;
    }

    return parse_ident(p, c, cmd_state);
}

static enum yytokentype
yylex(YYSTYPE *lval, YYLTYPE *yylloc, struct parser_params *p)
{
    enum yytokentype t;

    p->lval = lval;
    lval->val = Qundef;
    t = parser_yylex(p);

    if (p->lex.strterm && (p->lex.strterm->flags & STRTERM_HEREDOC))
	RUBY_SET_YYLLOC_FROM_STRTERM_HEREDOC(*yylloc);
    else
	RUBY_SET_YYLLOC(*yylloc);

    if (has_delayed_token(p))
	dispatch_delayed_token(p, t);
    else if (t != 0)
	dispatch_scan_event(p, t);

    return t;
}

#define LVAR_USED ((ID)1 << (sizeof(ID) * CHAR_BIT - 1))

static NODE*
node_newnode(struct parser_params *p, enum node_type type, VALUE a0, VALUE a1, VALUE a2, const rb_code_location_t *loc)
{
    NODE *n = rb_ast_newnode(p->ast, type);

    rb_node_init(n, type, a0, a1, a2);

    nd_set_loc(n, loc);
    nd_set_node_id(n, parser_get_node_id(p));
    return n;
}

static NODE *
nd_set_loc(NODE *nd, const YYLTYPE *loc)
{
    nd->nd_loc = *loc;
    nd_set_line(nd, loc->beg_pos.lineno);
    return nd;
}

#ifndef RIPPER
static enum node_type
nodetype(NODE *node)			/* for debug */
{
    return (enum node_type)nd_type(node);
}

static int
nodeline(NODE *node)
{
    return nd_line(node);
}

static NODE*
newline_node(NODE *node)
{
    if (node) {
	node = remove_begin(node);
	node->flags |= NODE_FL_NEWLINE;
    }
    return node;
}

static void
fixpos(NODE *node, NODE *orig)
{
    if (!node) return;
    if (!orig) return;
    nd_set_line(node, nd_line(orig));
}

static void
parser_warning(struct parser_params *p, NODE *node, const char *mesg)
{
    rb_compile_warning(p->ruby_sourcefile, nd_line(node), "%s", mesg);
}

static void
parser_warn(struct parser_params *p, NODE *node, const char *mesg)
{
    rb_compile_warn(p->ruby_sourcefile, nd_line(node), "%s", mesg);
}

static NODE*
block_append(struct parser_params *p, NODE *head, NODE *tail)
{
    NODE *end, *h = head, *nd;

    if (tail == 0) return head;

    if (h == 0) return tail;
    switch (nd_type(h)) {
      case NODE_LIT:
      case NODE_STR:
      case NODE_SELF:
      case NODE_TRUE:
      case NODE_FALSE:
      case NODE_NIL:
	parser_warning(p, h, "unused literal ignored");
	return tail;
      default:
	h = end = NEW_BLOCK(head, &head->nd_loc);
	end->nd_end = end;
	head = end;
	break;
      case NODE_BLOCK:
	end = h->nd_end;
	break;
    }

    nd = end->nd_head;
    switch (nd_type(nd)) {
      case NODE_RETURN:
      case NODE_BREAK:
      case NODE_NEXT:
      case NODE_REDO:
      case NODE_RETRY:
	if (RTEST(ruby_verbose)) {
	    parser_warning(p, tail, "statement not reached");
	}
	break;

      default:
	break;
    }

    if (nd_type(tail) != NODE_BLOCK) {
	tail = NEW_BLOCK(tail, &tail->nd_loc);
	tail->nd_end = tail;
    }
    end->nd_next = tail;
    h->nd_end = tail->nd_end;
    nd_set_last_loc(head, nd_last_loc(tail));
    return head;
}

/* append item to the list */
static NODE*
list_append(struct parser_params *p, NODE *list, NODE *item)
{
    NODE *last;

    if (list == 0) return NEW_LIST(item, &item->nd_loc);
    if (list->nd_next) {
	last = list->nd_next->nd_end;
    }
    else {
	last = list;
    }

    list->nd_alen += 1;
    last->nd_next = NEW_LIST(item, &item->nd_loc);
    list->nd_next->nd_end = last->nd_next;

    nd_set_last_loc(list, nd_last_loc(item));

    return list;
}

/* concat two lists */
static NODE*
list_concat(NODE *head, NODE *tail)
{
    NODE *last;

    if (head->nd_next) {
	last = head->nd_next->nd_end;
    }
    else {
	last = head;
    }

    head->nd_alen += tail->nd_alen;
    last->nd_next = tail;
    if (tail->nd_next) {
	head->nd_next->nd_end = tail->nd_next->nd_end;
    }
    else {
	head->nd_next->nd_end = tail;
    }

    nd_set_last_loc(head, nd_last_loc(tail));

    return head;
}

static int
literal_concat0(struct parser_params *p, VALUE head, VALUE tail)
{
    if (NIL_P(tail)) return 1;
    if (!rb_enc_compatible(head, tail)) {
	compile_error(p, "string literal encodings differ (%s / %s)",
		      rb_enc_name(rb_enc_get(head)),
		      rb_enc_name(rb_enc_get(tail)));
	rb_str_resize(head, 0);
	rb_str_resize(tail, 0);
	return 0;
    }
    rb_str_buf_append(head, tail);
    return 1;
}

/* concat two string literals */
static NODE *
literal_concat(struct parser_params *p, NODE *head, NODE *tail, const YYLTYPE *loc)
{
    enum node_type htype;
    NODE *headlast;
    VALUE lit;

    if (!head) return tail;
    if (!tail) return head;

    htype = nd_type(head);
    if (htype == NODE_EVSTR) {
	NODE *node = NEW_DSTR(STR_NEW0(), loc);
        RB_OBJ_WRITTEN(p->ast, Qnil, node->nd_lit);
	head = list_append(p, node, head);
	htype = NODE_DSTR;
    }
    if (p->heredoc_indent > 0) {
	switch (htype) {
	  case NODE_STR:
	    nd_set_type(head, NODE_DSTR);
	  case NODE_DSTR:
	    return list_append(p, head, tail);
	  default:
	    break;
	}
    }
    switch (nd_type(tail)) {
      case NODE_STR:
	if (htype == NODE_DSTR && (headlast = head->nd_next->nd_end->nd_head) &&
	    nd_type(headlast) == NODE_STR) {
	    htype = NODE_STR;
	    lit = headlast->nd_lit;
	}
	else {
	    lit = head->nd_lit;
	}
	if (htype == NODE_STR) {
	    if (!literal_concat0(p, lit, tail->nd_lit)) {
	      error:
		rb_discard_node(p, head);
		rb_discard_node(p, tail);
		return 0;
	    }
	    rb_discard_node(p, tail);
	}
	else {
	    list_append(p, head, tail);
	}
	break;

      case NODE_DSTR:
	if (htype == NODE_STR) {
	    if (!literal_concat0(p, head->nd_lit, tail->nd_lit))
		goto error;
	    tail->nd_lit = head->nd_lit;
	    rb_discard_node(p, head);
	    head = tail;
	}
	else if (NIL_P(tail->nd_lit)) {
	  append:
	    head->nd_alen += tail->nd_alen - 1;
	    head->nd_next->nd_end->nd_next = tail->nd_next;
	    head->nd_next->nd_end = tail->nd_next->nd_end;
	    rb_discard_node(p, tail);
	}
	else if (htype == NODE_DSTR && (headlast = head->nd_next->nd_end->nd_head) &&
		 nd_type(headlast) == NODE_STR) {
	    lit = headlast->nd_lit;
	    if (!literal_concat0(p, lit, tail->nd_lit))
		goto error;
	    tail->nd_lit = Qnil;
	    goto append;
	}
	else {
	    list_concat(head, NEW_NODE(NODE_LIST, NEW_STR(tail->nd_lit, loc), tail->nd_alen, tail->nd_next, loc));
	}
	break;

      case NODE_EVSTR:
	if (htype == NODE_STR) {
	    nd_set_type(head, NODE_DSTR);
	    head->nd_alen = 1;
	}
	list_append(p, head, tail);
	break;
    }
    return head;
}

static NODE *
evstr2dstr(struct parser_params *p, NODE *node)
{
    if (nd_type(node) == NODE_EVSTR) {
	NODE * dstr = NEW_DSTR(STR_NEW0(), &node->nd_loc);
        RB_OBJ_WRITTEN(p->ast, Qnil, dstr->nd_lit);
	node = list_append(p, dstr, node);
    }
    return node;
}

static NODE *
new_evstr(struct parser_params *p, NODE *node, const YYLTYPE *loc)
{
    NODE *head = node;

    if (node) {
	switch (nd_type(node)) {
	  case NODE_STR: case NODE_DSTR: case NODE_EVSTR:
	    return node;
	}
    }
    return NEW_EVSTR(head, loc);
}

static NODE *
call_bin_op(struct parser_params *p, NODE *recv, ID id, NODE *arg1,
		const YYLTYPE *op_loc, const YYLTYPE *loc)
{
    NODE *expr;
    value_expr(recv);
    value_expr(arg1);
    expr = NEW_OPCALL(recv, id, NEW_LIST(arg1, &arg1->nd_loc), loc);
    nd_set_line(expr, op_loc->beg_pos.lineno);
    return expr;
}

static NODE *
call_uni_op(struct parser_params *p, NODE *recv, ID id, const YYLTYPE *op_loc, const YYLTYPE *loc)
{
    NODE *opcall;
    value_expr(recv);
    opcall = NEW_OPCALL(recv, id, 0, loc);
    nd_set_line(opcall, op_loc->beg_pos.lineno);
    return opcall;
}

static NODE *
new_qcall(struct parser_params* p, ID atype, NODE *recv, ID mid, NODE *args, const YYLTYPE *op_loc, const YYLTYPE *loc)
{
    NODE *qcall = NEW_QCALL(atype, recv, mid, args, loc);
    nd_set_line(qcall, op_loc->beg_pos.lineno);
    return qcall;
}

static NODE*
new_command_qcall(struct parser_params* p, ID atype, NODE *recv, ID mid, NODE *args, NODE *block, const YYLTYPE *op_loc, const YYLTYPE *loc)
{
    NODE *ret;
    if (block) block_dup_check(p, args, block);
    ret = new_qcall(p, atype, recv, mid, args, op_loc, loc);
    if (block) ret = method_add_block(p, ret, block, loc);
    fixpos(ret, recv);
    return ret;
}

#define nd_once_body(node) (nd_type(node) == NODE_ONCE ? (node)->nd_body : node)
static NODE*
match_op(struct parser_params *p, NODE *node1, NODE *node2, const YYLTYPE *op_loc, const YYLTYPE *loc)
{
    NODE *n;
    int line = op_loc->beg_pos.lineno;

    value_expr(node1);
    value_expr(node2);
    if (node1 && (n = nd_once_body(node1)) != 0) {
	switch (nd_type(n)) {
	  case NODE_DREGX:
	    {
		NODE *match = NEW_MATCH2(node1, node2, loc);
		nd_set_line(match, line);
		return match;
	    }

	  case NODE_LIT:
	    if (RB_TYPE_P(n->nd_lit, T_REGEXP)) {
		const VALUE lit = n->nd_lit;
		NODE *match = NEW_MATCH2(node1, node2, loc);
		match->nd_args = reg_named_capture_assign(p, lit, loc);
		nd_set_line(match, line);
		return match;
	    }
	}
    }

    if (node2 && (n = nd_once_body(node2)) != 0) {
        NODE *match3;

	switch (nd_type(n)) {
	  case NODE_LIT:
	    if (!RB_TYPE_P(n->nd_lit, T_REGEXP)) break;
	    /* fallthru */
	  case NODE_DREGX:
	    match3 = NEW_MATCH3(node2, node1, loc);
	    return match3;
	}
    }

    n = NEW_CALL(node1, tMATCH, NEW_LIST(node2, &node2->nd_loc), loc);
    nd_set_line(n, line);
    return n;
}

# if WARN_PAST_SCOPE
static int
past_dvar_p(struct parser_params *p, ID id)
{
    struct vtable *past = p->lvtbl->past;
    while (past) {
	if (vtable_included(past, id)) return 1;
	past = past->prev;
    }
    return 0;
}
# endif

/* As Ripper#warn does not have arguments for the location, so the
 * following messages cannot be separated */
#define WARN_LOCATION(type) do { \
    if (p->warn_location) { \
	int line; \
	VALUE file = rb_source_location(&line); \
	rb_warn3(type" in eval may not return location in binding;" \
		 " use Binding#source_location instead\n" \
		 "%"PRIsWARN":%d: warning: in `%"PRIsWARN"'", \
		 file, WARN_I(line), rb_id2str(rb_frame_this_func())); \
    } \
} while (0)

static int
numparam_nested_p(struct parser_params *p)
{
    struct local_vars *local = p->lvtbl;
    NODE *outer = local->numparam.outer;
    NODE *inner = local->numparam.inner;
    if (outer || inner) {
	NODE *used = outer ? outer : inner;
	compile_error(p, "numbered parameter is already used in\n"
		      "%s:%d: %s block here",
		      p->ruby_sourcefile, nd_line(used),
		      outer ? "outer" : "inner");
	parser_show_error_line(p, &used->nd_loc);
	return 1;
    }
    return 0;
}

static NODE*
gettable(struct parser_params *p, ID id, const YYLTYPE *loc)
{
    ID *vidp = NULL;
    NODE *node;
    switch (id) {
      case keyword_self:
	return NEW_SELF(loc);
      case keyword_nil:
	return NEW_NIL(loc);
      case keyword_true:
	return NEW_TRUE(loc);
      case keyword_false:
	return NEW_FALSE(loc);
      case keyword__FILE__:
	WARN_LOCATION("__FILE__");
	{
	    VALUE file = p->ruby_sourcefile_string;
	    if (NIL_P(file))
		file = rb_str_new(0, 0);
	    else
		file = rb_str_dup(file);
	    node = NEW_STR(file, loc);
            RB_OBJ_WRITTEN(p->ast, Qnil, file);
	}
	return node;
      case keyword__LINE__:
	WARN_LOCATION("__LINE__");
	return NEW_LIT(INT2FIX(p->tokline), loc);
      case keyword__ENCODING__:
        node = NEW_LIT(rb_enc_from_encoding(p->enc), loc);
        RB_OBJ_WRITTEN(p->ast, Qnil, node->nd_lit);
        return node;

    }
    switch (id_type(id)) {
      case ID_LOCAL:
	if (dyna_in_block(p) && dvar_defined_ref(p, id, &vidp)) {
	    if (NUMPARAM_ID_P(id) && numparam_nested_p(p)) return 0;
	    if (id == p->cur_arg) {
                compile_error(p, "circular argument reference - %"PRIsWARN, rb_id2str(id));
                return 0;
	    }
	    if (vidp) *vidp |= LVAR_USED;
	    node = NEW_DVAR(id, loc);
	    return node;
	}
	if (local_id_ref(p, id, &vidp)) {
	    if (id == p->cur_arg) {
                compile_error(p, "circular argument reference - %"PRIsWARN, rb_id2str(id));
                return 0;
	    }
	    if (vidp) *vidp |= LVAR_USED;
	    node = NEW_LVAR(id, loc);
	    return node;
	}
	if (dyna_in_block(p) && NUMPARAM_ID_P(id) &&
	    parser_numbered_param(p, NUMPARAM_ID_TO_IDX(id))) {
	    if (numparam_nested_p(p)) return 0;
	    node = NEW_DVAR(id, loc);
	    struct local_vars *local = p->lvtbl;
	    if (!local->numparam.current) local->numparam.current = node;
	    return node;
	}
# if WARN_PAST_SCOPE
	if (!p->in_defined && RTEST(ruby_verbose) && past_dvar_p(p, id)) {
	    rb_warning1("possible reference to past scope - %"PRIsWARN, rb_id2str(id));
	}
# endif
	/* method call without arguments */
	return NEW_VCALL(id, loc);
      case ID_GLOBAL:
	return NEW_GVAR(id, loc);
      case ID_INSTANCE:
	return NEW_IVAR(id, loc);
      case ID_CONST:
	return NEW_CONST(id, loc);
      case ID_CLASS:
	return NEW_CVAR(id, loc);
    }
    compile_error(p, "identifier %"PRIsVALUE" is not valid to get", rb_id2str(id));
    return 0;
}

static NODE *
opt_arg_append(NODE *opt_list, NODE *opt)
{
    NODE *opts = opt_list;
    opts->nd_loc.end_pos = opt->nd_loc.end_pos;

    while (opts->nd_next) {
	opts = opts->nd_next;
	opts->nd_loc.end_pos = opt->nd_loc.end_pos;
    }
    opts->nd_next = opt;

    return opt_list;
}

static NODE *
kwd_append(NODE *kwlist, NODE *kw)
{
    if (kwlist) {
	NODE *kws = kwlist;
	kws->nd_loc.end_pos = kw->nd_loc.end_pos;
	while (kws->nd_next) {
	    kws = kws->nd_next;
	    kws->nd_loc.end_pos = kw->nd_loc.end_pos;
	}
	kws->nd_next = kw;
    }
    return kwlist;
}

static NODE *
new_defined(struct parser_params *p, NODE *expr, const YYLTYPE *loc)
{
    return NEW_DEFINED(remove_begin_all(expr), loc);
}

static NODE*
symbol_append(struct parser_params *p, NODE *symbols, NODE *symbol)
{
    if (nd_type(symbol) == NODE_DSTR) {
	nd_set_type(symbol, NODE_DSYM);
    }
    else {
	nd_set_type(symbol, NODE_LIT);
	RB_OBJ_WRITTEN(p->ast, Qnil, symbol->nd_lit = rb_str_intern(symbol->nd_lit));
    }
    return list_append(p, symbols, symbol);
}

static NODE *
new_regexp(struct parser_params *p, NODE *node, int options, const YYLTYPE *loc)
{
    NODE *list, *prev;
    VALUE lit;

    if (!node) {
	node = NEW_LIT(reg_compile(p, STR_NEW0(), options), loc);
	RB_OBJ_WRITTEN(p->ast, Qnil, node->nd_lit);
        return node;
    }
    switch (nd_type(node)) {
      case NODE_STR:
	{
	    VALUE src = node->nd_lit;
	    nd_set_type(node, NODE_LIT);
	    nd_set_loc(node, loc);
	    RB_OBJ_WRITTEN(p->ast, Qnil, node->nd_lit = reg_compile(p, src, options));
	}
	break;
      default:
	lit = STR_NEW0();
	node = NEW_NODE(NODE_DSTR, lit, 1, NEW_LIST(node, loc), loc);
        RB_OBJ_WRITTEN(p->ast, Qnil, lit);
	/* fall through */
      case NODE_DSTR:
	nd_set_type(node, NODE_DREGX);
	nd_set_loc(node, loc);
	node->nd_cflag = options & RE_OPTION_MASK;
	if (!NIL_P(node->nd_lit)) reg_fragment_check(p, node->nd_lit, options);
	for (list = (prev = node)->nd_next; list; list = list->nd_next) {
	    if (nd_type(list->nd_head) == NODE_STR) {
		VALUE tail = list->nd_head->nd_lit;
		if (reg_fragment_check(p, tail, options) && prev && !NIL_P(prev->nd_lit)) {
		    VALUE lit = prev == node ? prev->nd_lit : prev->nd_head->nd_lit;
		    if (!literal_concat0(p, lit, tail)) {
			return NEW_NIL(loc); /* dummy node on error */
		    }
		    rb_str_resize(tail, 0);
		    prev->nd_next = list->nd_next;
		    rb_discard_node(p, list->nd_head);
		    rb_discard_node(p, list);
		    list = prev;
		}
		else {
		    prev = list;
		}
	    }
	    else {
		prev = 0;
	    }
	}
	if (!node->nd_next) {
	    VALUE src = node->nd_lit;
	    nd_set_type(node, NODE_LIT);
	    RB_OBJ_WRITTEN(p->ast, Qnil, node->nd_lit = reg_compile(p, src, options));
	}
	if (options & RE_OPTION_ONCE) {
	    node = NEW_NODE(NODE_ONCE, 0, node, 0, loc);
	}
	break;
    }
    return node;
}

static NODE *
new_kw_arg(struct parser_params *p, NODE *k, const YYLTYPE *loc)
{
    if (!k) return 0;
    return NEW_KW_ARG(0, (k), loc);
}

static NODE *
new_xstring(struct parser_params *p, NODE *node, const YYLTYPE *loc)
{
    if (!node) {
	VALUE lit = STR_NEW0();
	NODE *xstr = NEW_XSTR(lit, loc);
	RB_OBJ_WRITTEN(p->ast, Qnil, lit);
	return xstr;
    }
    switch (nd_type(node)) {
      case NODE_STR:
	nd_set_type(node, NODE_XSTR);
	nd_set_loc(node, loc);
	break;
      case NODE_DSTR:
	nd_set_type(node, NODE_DXSTR);
	nd_set_loc(node, loc);
	break;
      default:
	node = NEW_NODE(NODE_DXSTR, Qnil, 1, NEW_LIST(node, loc), loc);
	break;
    }
    return node;
}

static void
check_literal_when(struct parser_params *p, NODE *arg, const YYLTYPE *loc)
{
    VALUE lit;

    if (!arg || !p->case_labels) return;

    lit = rb_node_case_when_optimizable_literal(arg);
    if (lit == Qundef) return;
    if (nd_type(arg) == NODE_STR) {
	RB_OBJ_WRITTEN(p->ast, Qnil, arg->nd_lit = lit);
    }

    if (NIL_P(p->case_labels)) {
	p->case_labels = rb_obj_hide(rb_hash_new());
    }
    else {
	VALUE line = rb_hash_lookup(p->case_labels, lit);
	if (!NIL_P(line)) {
	    rb_warning1("duplicated `when' clause with line %d is ignored",
			WARN_IVAL(line));
	    return;
	}
    }
    rb_hash_aset(p->case_labels, lit, INT2NUM(p->ruby_sourceline));
}

#else  /* !RIPPER */
static int
id_is_var(struct parser_params *p, ID id)
{
    if (is_notop_id(id)) {
	switch (id & ID_SCOPE_MASK) {
	  case ID_GLOBAL: case ID_INSTANCE: case ID_CONST: case ID_CLASS:
	    return 1;
	  case ID_LOCAL:
	    if (dyna_in_block(p)) {
		if (NUMPARAM_ID_P(id) || dvar_defined(p, id)) return 1;
	    }
	    if (local_id(p, id)) return 1;
	    /* method call without arguments */
	    return 0;
	}
    }
    compile_error(p, "identifier %"PRIsVALUE" is not valid to get", rb_id2str(id));
    return 0;
}

static VALUE
new_regexp(struct parser_params *p, VALUE re, VALUE opt, const YYLTYPE *loc)
{
    VALUE src = 0, err;
    int options = 0;
    if (ripper_is_node_yylval(re)) {
	src = RNODE(re)->nd_cval;
	re = RNODE(re)->nd_rval;
    }
    if (ripper_is_node_yylval(opt)) {
	options = (int)RNODE(opt)->nd_tag;
	opt = RNODE(opt)->nd_rval;
    }
    if (src && NIL_P(parser_reg_compile(p, src, options, &err))) {
	compile_error(p, "%"PRIsVALUE, err);
    }
    return dispatch2(regexp_literal, re, opt);
}
#endif /* !RIPPER */


#ifndef RIPPER
static const char rb_parser_lex_state_names[][8] = {
    "BEG",    "END",    "ENDARG", "ENDFN",  "ARG",
    "CMDARG", "MID",    "FNAME",  "DOT",    "CLASS",
    "LABEL",  "LABELED","FITEM",
};

static VALUE
append_lex_state_name(enum lex_state_e state, VALUE buf)
{
    int i, sep = 0;
    unsigned int mask = 1;
    static const char none[] = "NONE";

    for (i = 0; i < EXPR_MAX_STATE; ++i, mask <<= 1) {
	if ((unsigned)state & mask) {
	    if (sep) {
		rb_str_cat(buf, "|", 1);
	    }
	    sep = 1;
	    rb_str_cat_cstr(buf, rb_parser_lex_state_names[i]);
	}
    }
    if (!sep) {
	rb_str_cat(buf, none, sizeof(none)-1);
    }
    return buf;
}

static void
flush_debug_buffer(struct parser_params *p, VALUE out, VALUE str)
{
    VALUE mesg = p->debug_buffer;

    if (!NIL_P(mesg) && RSTRING_LEN(mesg)) {
	p->debug_buffer = Qnil;
	rb_io_puts(1, &mesg, out);
    }
    if (!NIL_P(str) && RSTRING_LEN(str)) {
	rb_io_write(p->debug_output, str);
    }
}

enum lex_state_e
rb_parser_trace_lex_state(struct parser_params *p, enum lex_state_e from,
			  enum lex_state_e to, int line)
{
    VALUE mesg;
    mesg = rb_str_new_cstr("lex_state: ");
    append_lex_state_name(from, mesg);
    rb_str_cat_cstr(mesg, " -> ");
    append_lex_state_name(to, mesg);
    rb_str_catf(mesg, " at line %d\n", line);
    flush_debug_buffer(p, p->debug_output, mesg);
    return to;
}

VALUE
rb_parser_lex_state_name(enum lex_state_e state)
{
    return rb_fstring(append_lex_state_name(state, rb_str_new(0, 0)));
}

static void
append_bitstack_value(stack_type stack, VALUE mesg)
{
    if (stack == 0) {
	rb_str_cat_cstr(mesg, "0");
    }
    else {
	stack_type mask = (stack_type)1U << (CHAR_BIT * sizeof(stack_type) - 1);
	for (; mask && !(stack & mask); mask >>= 1) continue;
	for (; mask; mask >>= 1) rb_str_cat(mesg, stack & mask ? "1" : "0", 1);
    }
}

void
rb_parser_show_bitstack(struct parser_params *p, stack_type stack,
			const char *name, int line)
{
    VALUE mesg = rb_sprintf("%s: ", name);
    append_bitstack_value(stack, mesg);
    rb_str_catf(mesg, " at line %d\n", line);
    flush_debug_buffer(p, p->debug_output, mesg);
}

void
rb_parser_fatal(struct parser_params *p, const char *fmt, ...)
{
    va_list ap;
    VALUE mesg = rb_str_new_cstr("internal parser error: ");

    va_start(ap, fmt);
    rb_str_vcatf(mesg, fmt, ap);
    va_end(ap);
    parser_yyerror(p, NULL, RSTRING_PTR(mesg));
    RB_GC_GUARD(mesg);

    mesg = rb_str_new(0, 0);
    append_lex_state_name(p->lex.state, mesg);
    compile_error(p, "lex.state: %"PRIsVALUE, mesg);
    rb_str_resize(mesg, 0);
    append_bitstack_value(p->cond_stack, mesg);
    compile_error(p, "cond_stack: %"PRIsVALUE, mesg);
    rb_str_resize(mesg, 0);
    append_bitstack_value(p->cmdarg_stack, mesg);
    compile_error(p, "cmdarg_stack: %"PRIsVALUE, mesg);
    if (p->debug_output == rb_stdout)
	p->debug_output = rb_stderr;
    p->debug = TRUE;
}

YYLTYPE *
rb_parser_set_location_from_strterm_heredoc(struct parser_params *p, rb_strterm_heredoc_t *here, YYLTYPE *yylloc)
{
    int sourceline = here->sourceline;
    int beg_pos = (int)here->offset - here->quote
	- (rb_strlen_lit("<<-") - !(here->func & STR_FUNC_INDENT));
    int end_pos = (int)here->offset + here->length + here->quote;

    yylloc->beg_pos.lineno = sourceline;
    yylloc->beg_pos.column = beg_pos;
    yylloc->end_pos.lineno = sourceline;
    yylloc->end_pos.column = end_pos;
    return yylloc;
}

YYLTYPE *
rb_parser_set_location_of_none(struct parser_params *p, YYLTYPE *yylloc)
{
    yylloc->beg_pos.lineno = p->ruby_sourceline;
    yylloc->beg_pos.column = (int)(p->lex.ptok - p->lex.pbeg);
    yylloc->end_pos.lineno = p->ruby_sourceline;
    yylloc->end_pos.column = (int)(p->lex.ptok - p->lex.pbeg);
    return yylloc;
}

YYLTYPE *
rb_parser_set_location(struct parser_params *p, YYLTYPE *yylloc)
{
    yylloc->beg_pos.lineno = p->ruby_sourceline;
    yylloc->beg_pos.column = (int)(p->lex.ptok - p->lex.pbeg);
    yylloc->end_pos.lineno = p->ruby_sourceline;
    yylloc->end_pos.column = (int)(p->lex.pcur - p->lex.pbeg);
    return yylloc;
}
#endif /* !RIPPER */

static int
assignable0(struct parser_params *p, ID id, const char **err)
{
    if (!id) return -1;
    switch (id) {
      case keyword_self:
	*err = "Can't change the value of self";
	return -1;
      case keyword_nil:
	*err = "Can't assign to nil";
	return -1;
      case keyword_true:
	*err = "Can't assign to true";
	return -1;
      case keyword_false:
	*err = "Can't assign to false";
	return -1;
      case keyword__FILE__:
	*err = "Can't assign to __FILE__";
	return -1;
      case keyword__LINE__:
	*err = "Can't assign to __LINE__";
	return -1;
      case keyword__ENCODING__:
	*err = "Can't assign to __ENCODING__";
	return -1;
    }
    switch (id_type(id)) {
      case ID_LOCAL:
	if (dyna_in_block(p)) {
	    if (p->max_numparam > NO_PARAM && NUMPARAM_ID_P(id)) {
		compile_error(p, "Can't assign to numbered parameter _%d",
			      NUMPARAM_ID_TO_IDX(id));
		return -1;
	    }
	    if (dvar_curr(p, id)) return NODE_DASGN_CURR;
	    if (dvar_defined(p, id)) return NODE_DASGN;
	    if (local_id(p, id)) return NODE_LASGN;
	    dyna_var(p, id);
	    return NODE_DASGN_CURR;
	}
	else {
	    if (!local_id(p, id)) local_var(p, id);
	    return NODE_LASGN;
	}
	break;
      case ID_GLOBAL: return NODE_GASGN;
      case ID_INSTANCE: return NODE_IASGN;
      case ID_CONST:
	if (!p->in_def) return NODE_CDECL;
	*err = "dynamic constant assignment";
	return -1;
      case ID_CLASS: return NODE_CVASGN;
      default:
	compile_error(p, "identifier %"PRIsVALUE" is not valid to set", rb_id2str(id));
    }
    return -1;
}

#ifndef RIPPER
static NODE*
assignable(struct parser_params *p, ID id, NODE *val, const YYLTYPE *loc)
{
    const char *err = 0;
    int node_type = assignable0(p, id, &err);
    switch (node_type) {
      case NODE_DASGN_CURR: return NEW_DASGN_CURR(id, val, loc);
      case NODE_DASGN: return NEW_DASGN(id, val, loc);
      case NODE_LASGN: return NEW_LASGN(id, val, loc);
      case NODE_GASGN: return NEW_GASGN(id, val, loc);
      case NODE_IASGN: return NEW_IASGN(id, val, loc);
      case NODE_CDECL: return NEW_CDECL(id, val, 0, loc);
      case NODE_CVASGN: return NEW_CVASGN(id, val, loc);
    }
    if (err) yyerror1(loc, err);
    return NEW_BEGIN(0, loc);
}
#else
static VALUE
assignable(struct parser_params *p, VALUE lhs)
{
    const char *err = 0;
    assignable0(p, get_id(lhs), &err);
    if (err) lhs = assign_error(p, lhs);
    return lhs;
}
#endif

static int
is_private_local_id(ID name)
{
    VALUE s;
    if (name == idUScore) return 1;
    if (!is_local_id(name)) return 0;
    s = rb_id2str(name);
    if (!s) return 0;
    return RSTRING_PTR(s)[0] == '_';
}

static int
shadowing_lvar_0(struct parser_params *p, ID name)
{
    if (is_private_local_id(name)) return 1;
    if (dyna_in_block(p)) {
	if (dvar_curr(p, name)) {
	    yyerror0("duplicated argument name");
	}
	else if (dvar_defined(p, name) || local_id(p, name)) {
	    vtable_add(p->lvtbl->vars, name);
	    if (p->lvtbl->used) {
		vtable_add(p->lvtbl->used, (ID)p->ruby_sourceline | LVAR_USED);
	    }
	    return 0;
	}
    }
    else {
	if (local_id(p, name)) {
	    yyerror0("duplicated argument name");
	}
    }
    return 1;
}

static ID
shadowing_lvar(struct parser_params *p, ID name)
{
    shadowing_lvar_0(p, name);
    return name;
}

static void
new_bv(struct parser_params *p, ID name)
{
    if (!name) return;
    if (!is_local_id(name)) {
	compile_error(p, "invalid local variable - %"PRIsVALUE,
		      rb_id2str(name));
	return;
    }
    if (!shadowing_lvar_0(p, name)) return;
    dyna_var(p, name);
}

#ifndef RIPPER
static NODE *
aryset(struct parser_params *p, NODE *recv, NODE *idx, const YYLTYPE *loc)
{
    return NEW_ATTRASGN(recv, tASET, idx, loc);
}

static void
block_dup_check(struct parser_params *p, NODE *node1, NODE *node2)
{
    if (node2 && node1 && nd_type(node1) == NODE_BLOCK_PASS) {
	compile_error(p, "both block arg and actual block given");
    }
}

static NODE *
attrset(struct parser_params *p, NODE *recv, ID atype, ID id, const YYLTYPE *loc)
{
    if (!CALL_Q_P(atype)) id = rb_id_attrset(id);
    return NEW_ATTRASGN(recv, id, 0, loc);
}

static void
rb_backref_error(struct parser_params *p, NODE *node)
{
    switch (nd_type(node)) {
      case NODE_NTH_REF:
	compile_error(p, "Can't set variable $%ld", node->nd_nth);
	break;
      case NODE_BACK_REF:
	compile_error(p, "Can't set variable $%c", (int)node->nd_nth);
	break;
    }
}

static NODE *
arg_append(struct parser_params *p, NODE *node1, NODE *node2, const YYLTYPE *loc)
{
    if (!node1) return NEW_LIST(node2, &node2->nd_loc);
    switch (nd_type(node1))  {
      case NODE_LIST:
	return list_append(p, node1, node2);
      case NODE_BLOCK_PASS:
	node1->nd_head = arg_append(p, node1->nd_head, node2, loc);
	node1->nd_loc.end_pos = node1->nd_head->nd_loc.end_pos;
	return node1;
      case NODE_ARGSPUSH:
	node1->nd_body = list_append(p, NEW_LIST(node1->nd_body, &node1->nd_body->nd_loc), node2);
	node1->nd_loc.end_pos = node1->nd_body->nd_loc.end_pos;
	nd_set_type(node1, NODE_ARGSCAT);
	return node1;
      case NODE_ARGSCAT:
        if (nd_type(node1->nd_body) != NODE_LIST) break;
        node1->nd_body = list_append(p, node1->nd_body, node2);
        node1->nd_loc.end_pos = node1->nd_body->nd_loc.end_pos;
        return node1;
    }
    return NEW_ARGSPUSH(node1, node2, loc);
}

static NODE *
arg_concat(struct parser_params *p, NODE *node1, NODE *node2, const YYLTYPE *loc)
{
    if (!node2) return node1;
    switch (nd_type(node1)) {
      case NODE_BLOCK_PASS:
	if (node1->nd_head)
	    node1->nd_head = arg_concat(p, node1->nd_head, node2, loc);
	else
	    node1->nd_head = NEW_LIST(node2, loc);
	return node1;
      case NODE_ARGSPUSH:
	if (nd_type(node2) != NODE_LIST) break;
	node1->nd_body = list_concat(NEW_LIST(node1->nd_body, loc), node2);
	nd_set_type(node1, NODE_ARGSCAT);
	return node1;
      case NODE_ARGSCAT:
	if (nd_type(node2) != NODE_LIST ||
	    nd_type(node1->nd_body) != NODE_LIST) break;
	node1->nd_body = list_concat(node1->nd_body, node2);
	return node1;
    }
    return NEW_ARGSCAT(node1, node2, loc);
}

static NODE *
last_arg_append(struct parser_params *p, NODE *args, NODE *last_arg, const YYLTYPE *loc)
{
    NODE *n1;
    if ((n1 = splat_array(args)) != 0) {
	return list_append(p, n1, last_arg);
    }
    return arg_append(p, args, last_arg, loc);
}

static NODE *
rest_arg_append(struct parser_params *p, NODE *args, NODE *rest_arg, const YYLTYPE *loc)
{
    NODE *n1;
    if ((nd_type(rest_arg) == NODE_LIST) && (n1 = splat_array(args)) != 0) {
	return list_concat(n1, rest_arg);
    }
    return arg_concat(p, args, rest_arg, loc);
}

static NODE *
splat_array(NODE* node)
{
    if (nd_type(node) == NODE_SPLAT) node = node->nd_head;
    if (nd_type(node) == NODE_LIST) return node;
    return 0;
}

static void
mark_lvar_used(struct parser_params *p, NODE *rhs)
{
    ID *vidp = NULL;
    if (!rhs) return;
    switch (nd_type(rhs)) {
      case NODE_LASGN:
	if (local_id_ref(p, rhs->nd_vid, &vidp)) {
	    if (vidp) *vidp |= LVAR_USED;
	}
	break;
      case NODE_DASGN:
      case NODE_DASGN_CURR:
	if (dvar_defined_ref(p, rhs->nd_vid, &vidp)) {
	    if (vidp) *vidp |= LVAR_USED;
	}
	break;
#if 0
      case NODE_MASGN:
	for (rhs = rhs->nd_head; rhs; rhs = rhs->nd_next) {
	    mark_lvar_used(p, rhs->nd_head);
	}
	break;
#endif
    }
}

static NODE *
node_assign(struct parser_params *p, NODE *lhs, NODE *rhs, const YYLTYPE *loc)
{
    if (!lhs) return 0;

    switch (nd_type(lhs)) {
      case NODE_GASGN:
      case NODE_IASGN:
      case NODE_LASGN:
      case NODE_DASGN:
      case NODE_DASGN_CURR:
      case NODE_MASGN:
      case NODE_CDECL:
      case NODE_CVASGN:
	lhs->nd_value = rhs;
	nd_set_loc(lhs, loc);
	break;

      case NODE_ATTRASGN:
	lhs->nd_args = arg_append(p, lhs->nd_args, rhs, loc);
	nd_set_loc(lhs, loc);
	break;

      default:
	/* should not happen */
	break;
    }

    return lhs;
}

static NODE *
value_expr_check(struct parser_params *p, NODE *node)
{
    NODE *void_node = 0, *vn;

    if (!node) {
	rb_warning0("empty expression");
    }
    while (node) {
	switch (nd_type(node)) {
	  case NODE_RETURN:
	  case NODE_BREAK:
	  case NODE_NEXT:
	  case NODE_REDO:
	  case NODE_RETRY:
	    return void_node ? void_node : node;

	  case NODE_CASE3:
	    if (!node->nd_body || nd_type(node->nd_body) != NODE_IN) {
		compile_error(p, "unexpected node");
		return NULL;
	    }
	    if (node->nd_body->nd_body) {
		return NULL;
	    }
	    /* single line pattern matching */
	    return void_node ? void_node : node;

	  case NODE_BLOCK:
	    while (node->nd_next) {
		node = node->nd_next;
	    }
	    node = node->nd_head;
	    break;

	  case NODE_BEGIN:
	    node = node->nd_body;
	    break;

	  case NODE_IF:
	  case NODE_UNLESS:
	    if (!node->nd_body) {
		return NULL;
	    }
	    else if (!node->nd_else) {
		return NULL;
	    }
	    vn = value_expr_check(p, node->nd_body);
	    if (!vn) return NULL;
	    if (!void_node) void_node = vn;
	    node = node->nd_else;
	    break;

	  case NODE_AND:
	  case NODE_OR:
	    node = node->nd_1st;
	    break;

	  case NODE_LASGN:
	  case NODE_DASGN:
	  case NODE_DASGN_CURR:
	  case NODE_MASGN:
	    mark_lvar_used(p, node);
	    return NULL;

	  default:
	    return NULL;
	}
    }

    return NULL;
}

static int
value_expr_gen(struct parser_params *p, NODE *node)
{
    NODE *void_node = value_expr_check(p, node);
    if (void_node) {
	yyerror1(&void_node->nd_loc, "void value expression");
	/* or "control never reach"? */
	return FALSE;
    }
    return TRUE;
}
static void
void_expr(struct parser_params *p, NODE *node)
{
    const char *useless = 0;

    if (!RTEST(ruby_verbose)) return;

    if (!node || !(node = nd_once_body(node))) return;
    switch (nd_type(node)) {
      case NODE_OPCALL:
	switch (node->nd_mid) {
	  case '+':
	  case '-':
	  case '*':
	  case '/':
	  case '%':
	  case tPOW:
	  case tUPLUS:
	  case tUMINUS:
	  case '|':
	  case '^':
	  case '&':
	  case tCMP:
	  case '>':
	  case tGEQ:
	  case '<':
	  case tLEQ:
	  case tEQ:
	  case tNEQ:
	    useless = rb_id2name(node->nd_mid);
	    break;
	}
	break;

      case NODE_LVAR:
      case NODE_DVAR:
      case NODE_GVAR:
      case NODE_IVAR:
      case NODE_CVAR:
      case NODE_NTH_REF:
      case NODE_BACK_REF:
	useless = "a variable";
	break;
      case NODE_CONST:
	useless = "a constant";
	break;
      case NODE_LIT:
      case NODE_STR:
      case NODE_DSTR:
      case NODE_DREGX:
	useless = "a literal";
	break;
      case NODE_COLON2:
      case NODE_COLON3:
	useless = "::";
	break;
      case NODE_DOT2:
	useless = "..";
	break;
      case NODE_DOT3:
	useless = "...";
	break;
      case NODE_SELF:
	useless = "self";
	break;
      case NODE_NIL:
	useless = "nil";
	break;
      case NODE_TRUE:
	useless = "true";
	break;
      case NODE_FALSE:
	useless = "false";
	break;
      case NODE_DEFINED:
	useless = "defined?";
	break;
    }

    if (useless) {
	rb_warn1L(nd_line(node), "possibly useless use of %s in void context", WARN_S(useless));
    }
}

static NODE *
void_stmts(struct parser_params *p, NODE *node)
{
    NODE *const n = node;
    if (!RTEST(ruby_verbose)) return n;
    if (!node) return n;
    if (nd_type(node) != NODE_BLOCK) return n;

    while (node->nd_next) {
	void_expr(p, node->nd_head);
	node = node->nd_next;
    }
    return n;
}

static NODE *
remove_begin(NODE *node)
{
    NODE **n = &node, *n1 = node;
    while (n1 && nd_type(n1) == NODE_BEGIN && n1->nd_body) {
	*n = n1 = n1->nd_body;
    }
    return node;
}

static NODE *
remove_begin_all(NODE *node)
{
    NODE **n = &node, *n1 = node;
    while (n1 && nd_type(n1) == NODE_BEGIN) {
	*n = n1 = n1->nd_body;
    }
    return node;
}

static void
reduce_nodes(struct parser_params *p, NODE **body)
{
    NODE *node = *body;

    if (!node) {
	*body = NEW_NIL(&NULL_LOC);
	return;
    }
#define subnodes(n1, n2) \
    ((!node->n1) ? (node->n2 ? (body = &node->n2, 1) : 0) : \
     (!node->n2) ? (body = &node->n1, 1) : \
     (reduce_nodes(p, &node->n1), body = &node->n2, 1))

    while (node) {
	int newline = (int)(node->flags & NODE_FL_NEWLINE);
	switch (nd_type(node)) {
	  end:
	  case NODE_NIL:
	    *body = 0;
	    return;
	  case NODE_RETURN:
	    *body = node = node->nd_stts;
	    if (newline && node) node->flags |= NODE_FL_NEWLINE;
	    continue;
	  case NODE_BEGIN:
	    *body = node = node->nd_body;
	    if (newline && node) node->flags |= NODE_FL_NEWLINE;
	    continue;
	  case NODE_BLOCK:
	    body = &node->nd_end->nd_head;
	    break;
	  case NODE_IF:
	  case NODE_UNLESS:
	    if (subnodes(nd_body, nd_else)) break;
	    return;
	  case NODE_CASE:
	    body = &node->nd_body;
	    break;
	  case NODE_WHEN:
	    if (!subnodes(nd_body, nd_next)) goto end;
	    break;
	  case NODE_ENSURE:
	    if (!subnodes(nd_head, nd_resq)) goto end;
	    break;
	  case NODE_RESCUE:
	    if (node->nd_else) {
		body = &node->nd_resq;
		break;
	    }
	    if (!subnodes(nd_head, nd_resq)) goto end;
	    break;
	  default:
	    return;
	}
	node = *body;
	if (newline && node) node->flags |= NODE_FL_NEWLINE;
    }

#undef subnodes
}

static int
is_static_content(NODE *node)
{
    if (!node) return 1;
    switch (nd_type(node)) {
      case NODE_HASH:
	if (!(node = node->nd_head)) break;
      case NODE_LIST:
	do {
	    if (!is_static_content(node->nd_head)) return 0;
	} while ((node = node->nd_next) != 0);
      case NODE_LIT:
      case NODE_STR:
      case NODE_NIL:
      case NODE_TRUE:
      case NODE_FALSE:
      case NODE_ZLIST:
	break;
      default:
	return 0;
    }
    return 1;
}

static int
assign_in_cond(struct parser_params *p, NODE *node)
{
    switch (nd_type(node)) {
      case NODE_MASGN:
      case NODE_LASGN:
      case NODE_DASGN:
      case NODE_DASGN_CURR:
      case NODE_GASGN:
      case NODE_IASGN:
	break;

      default:
	return 0;
    }

    if (!node->nd_value) return 1;
    if (is_static_content(node->nd_value)) {
	/* reports always */
	parser_warn(p, node->nd_value, "found `= literal' in conditional, should be ==");
    }
    return 1;
}

enum cond_type {
    COND_IN_OP,
    COND_IN_COND,
    COND_IN_FF
};

#define SWITCH_BY_COND_TYPE(t, w, arg) \
    switch (t) { \
      case COND_IN_OP: break; \
      case COND_IN_COND: rb_##w##0(arg "literal in condition"); break; \
      case COND_IN_FF: rb_##w##0(arg "literal in flip-flop"); break; \
    }

static NODE *cond0(struct parser_params*,NODE*,enum cond_type,const YYLTYPE*);

static NODE*
range_op(struct parser_params *p, NODE *node, const YYLTYPE *loc)
{
    enum node_type type;

    if (node == 0) return 0;

    type = nd_type(node);
    value_expr(node);
    if (type == NODE_LIT && FIXNUM_P(node->nd_lit)) {
	if (!e_option_supplied(p)) parser_warn(p, node, "integer literal in flip-flop");
	return NEW_CALL(node, tEQ, NEW_LIST(NEW_GVAR(rb_intern("$."), loc), loc), loc);
    }
    return cond0(p, node, COND_IN_FF, loc);
}

static NODE*
cond0(struct parser_params *p, NODE *node, enum cond_type type, const YYLTYPE *loc)
{
    if (node == 0) return 0;
    if (!(node = nd_once_body(node))) return 0;
    assign_in_cond(p, node);

    switch (nd_type(node)) {
      case NODE_DSTR:
      case NODE_EVSTR:
      case NODE_STR:
	SWITCH_BY_COND_TYPE(type, warn, "string ")
	break;

      case NODE_DREGX:
	if (!e_option_supplied(p)) SWITCH_BY_COND_TYPE(type, warning, "regex ")

	return NEW_MATCH2(node, NEW_GVAR(idLASTLINE, loc), loc);

      case NODE_AND:
      case NODE_OR:
	node->nd_1st = cond0(p, node->nd_1st, COND_IN_COND, loc);
	node->nd_2nd = cond0(p, node->nd_2nd, COND_IN_COND, loc);
	break;

      case NODE_DOT2:
      case NODE_DOT3:
	node->nd_beg = range_op(p, node->nd_beg, loc);
	node->nd_end = range_op(p, node->nd_end, loc);
	if (nd_type(node) == NODE_DOT2) nd_set_type(node,NODE_FLIP2);
	else if (nd_type(node) == NODE_DOT3) nd_set_type(node, NODE_FLIP3);
	break;

      case NODE_DSYM:
	SWITCH_BY_COND_TYPE(type, warning, "string ")
	break;

      case NODE_LIT:
	if (RB_TYPE_P(node->nd_lit, T_REGEXP)) {
	    if (!e_option_supplied(p)) SWITCH_BY_COND_TYPE(type, warn, "regex ")
	    nd_set_type(node, NODE_MATCH);
	}
	else if (node->nd_lit == Qtrue ||
		 node->nd_lit == Qfalse) {
	    /* booleans are OK, e.g., while true */
	}
	else {
	    SWITCH_BY_COND_TYPE(type, warning, "")
	}
      default:
	break;
    }
    return node;
}

static NODE*
cond(struct parser_params *p, NODE *node, const YYLTYPE *loc)
{
    if (node == 0) return 0;
    return cond0(p, node, COND_IN_COND, loc);
}

static NODE*
method_cond(struct parser_params *p, NODE *node, const YYLTYPE *loc)
{
    if (node == 0) return 0;
    return cond0(p, node, COND_IN_OP, loc);
}

static NODE*
new_if(struct parser_params *p, NODE *cc, NODE *left, NODE *right, const YYLTYPE *loc)
{
    if (!cc) return right;
    cc = cond0(p, cc, COND_IN_COND, loc);
    return newline_node(NEW_IF(cc, left, right, loc));
}

static NODE*
new_unless(struct parser_params *p, NODE *cc, NODE *left, NODE *right, const YYLTYPE *loc)
{
    if (!cc) return right;
    cc = cond0(p, cc, COND_IN_COND, loc);
    return newline_node(NEW_UNLESS(cc, left, right, loc));
}

static NODE*
logop(struct parser_params *p, ID id, NODE *left, NODE *right,
	  const YYLTYPE *op_loc, const YYLTYPE *loc)
{
    enum node_type type = id == idAND || id == idANDOP ? NODE_AND : NODE_OR;
    NODE *op;
    value_expr(left);
    if (left && (enum node_type)nd_type(left) == type) {
	NODE *node = left, *second;
	while ((second = node->nd_2nd) != 0 && (enum node_type)nd_type(second) == type) {
	    node = second;
	}
	node->nd_2nd = NEW_NODE(type, second, right, 0, loc);
	nd_set_line(node->nd_2nd, op_loc->beg_pos.lineno);
	left->nd_loc.end_pos = loc->end_pos;
	return left;
    }
    op = NEW_NODE(type, left, right, 0, loc);
    nd_set_line(op, op_loc->beg_pos.lineno);
    return op;
}

static void
no_blockarg(struct parser_params *p, NODE *node)
{
    if (node && nd_type(node) == NODE_BLOCK_PASS) {
	compile_error(p, "block argument should not be given");
    }
}

static NODE *
ret_args(struct parser_params *p, NODE *node)
{
    if (node) {
	no_blockarg(p, node);
	if (nd_type(node) == NODE_LIST) {
	    if (node->nd_next == 0) {
		node = node->nd_head;
	    }
	    else {
		nd_set_type(node, NODE_VALUES);
	    }
	}
    }
    return node;
}

static NODE *
new_yield(struct parser_params *p, NODE *node, const YYLTYPE *loc)
{
    if (node) no_blockarg(p, node);

    return NEW_YIELD(node, loc);
}

static VALUE
negate_lit(struct parser_params *p, VALUE lit)
{
    if (FIXNUM_P(lit)) {
	return LONG2FIX(-FIX2LONG(lit));
    }
    if (SPECIAL_CONST_P(lit)) {
#if USE_FLONUM
	if (FLONUM_P(lit)) {
	    return DBL2NUM(-RFLOAT_VALUE(lit));
	}
#endif
	goto unknown;
    }
    switch (BUILTIN_TYPE(lit)) {
      case T_BIGNUM:
	BIGNUM_NEGATE(lit);
	lit = rb_big_norm(lit);
	break;
      case T_RATIONAL:
	RRATIONAL_SET_NUM(lit, negate_lit(p, RRATIONAL(lit)->num));
	break;
      case T_COMPLEX:
	RCOMPLEX_SET_REAL(lit, negate_lit(p, RCOMPLEX(lit)->real));
	RCOMPLEX_SET_IMAG(lit, negate_lit(p, RCOMPLEX(lit)->imag));
	break;
      case T_FLOAT:
	RFLOAT(lit)->float_value = -RFLOAT_VALUE(lit);
	break;
      unknown:
      default:
	rb_parser_fatal(p, "unknown literal type (%s) passed to negate_lit",
			rb_builtin_class_name(lit));
	break;
    }
    return lit;
}

static NODE *
arg_blk_pass(NODE *node1, NODE *node2)
{
    if (node2) {
        if (!node1) return node2;
	node2->nd_head = node1;
	nd_set_first_lineno(node2, nd_first_lineno(node1));
	nd_set_first_column(node2, nd_first_column(node1));
	return node2;
    }
    return node1;
}

static bool
args_info_empty_p(struct rb_args_info *args)
{
    if (args->pre_args_num) return false;
    if (args->post_args_num) return false;
    if (args->rest_arg) return false;
    if (args->opt_args) return false;
    if (args->block_arg) return false;
    if (args->kw_args) return false;
    if (args->kw_rest_arg) return false;
    return true;
}

static NODE*
new_args(struct parser_params *p, NODE *pre_args, NODE *opt_args, ID rest_arg, NODE *post_args, NODE *tail, const YYLTYPE *loc)
{
    int saved_line = p->ruby_sourceline;
    struct rb_args_info *args = tail->nd_ainfo;

    args->pre_args_num   = pre_args ? rb_long2int(pre_args->nd_plen) : 0;
    args->pre_init       = pre_args ? pre_args->nd_next : 0;

    args->post_args_num  = post_args ? rb_long2int(post_args->nd_plen) : 0;
    args->post_init      = post_args ? post_args->nd_next : 0;
    args->first_post_arg = post_args ? post_args->nd_pid : 0;

    args->rest_arg       = rest_arg;

    args->opt_args       = opt_args;

    args->ruby2_keywords = rest_arg == idFWD_REST;

    p->ruby_sourceline = saved_line;
    nd_set_loc(tail, loc);

    return tail;
}

static NODE*
new_args_tail(struct parser_params *p, NODE *kw_args, ID kw_rest_arg, ID block, const YYLTYPE *loc)
{
    int saved_line = p->ruby_sourceline;
    NODE *node;
    VALUE tmpbuf = rb_imemo_tmpbuf_auto_free_pointer();
    struct rb_args_info *args = ZALLOC(struct rb_args_info);
    rb_imemo_tmpbuf_set_ptr(tmpbuf, args);
    args->imemo = tmpbuf;
    node = NEW_NODE(NODE_ARGS, 0, 0, args, &NULL_LOC);
    RB_OBJ_WRITTEN(p->ast, Qnil, tmpbuf);
    if (p->error_p) return node;

    args->block_arg      = block;
    args->kw_args        = kw_args;

    if (kw_args) {
	/*
	 * def foo(k1: 1, kr1:, k2: 2, **krest, &b)
	 * variable order: k1, kr1, k2, &b, internal_id, krest
	 * #=> <reorder>
	 * variable order: kr1, k1, k2, internal_id, krest, &b
	 */
	ID kw_bits = internal_id(p), *required_kw_vars, *kw_vars;
	struct vtable *vtargs = p->lvtbl->args;
	NODE *kwn = kw_args;

	vtable_pop(vtargs, !!block + !!kw_rest_arg);
	required_kw_vars = kw_vars = &vtargs->tbl[vtargs->pos];
	while (kwn) {
	    if (!NODE_REQUIRED_KEYWORD_P(kwn->nd_body))
		--kw_vars;
	    --required_kw_vars;
	    kwn = kwn->nd_next;
	}

	for (kwn = kw_args; kwn; kwn = kwn->nd_next) {
	    ID vid = kwn->nd_body->nd_vid;
	    if (NODE_REQUIRED_KEYWORD_P(kwn->nd_body)) {
		*required_kw_vars++ = vid;
	    }
	    else {
		*kw_vars++ = vid;
	    }
	}

	arg_var(p, kw_bits);
	if (kw_rest_arg) arg_var(p, kw_rest_arg);
	if (block) arg_var(p, block);

	args->kw_rest_arg = NEW_DVAR(kw_rest_arg, loc);
	args->kw_rest_arg->nd_cflag = kw_bits;
    }
    else if (kw_rest_arg == idNil) {
	args->no_kwarg = 1;
    }
    else if (kw_rest_arg) {
	args->kw_rest_arg = NEW_DVAR(kw_rest_arg, loc);
    }

    p->ruby_sourceline = saved_line;
    return node;
}

static NODE *
args_with_numbered(struct parser_params *p, NODE *args, int max_numparam)
{
    if (max_numparam > NO_PARAM) {
	if (!args) {
	    YYLTYPE loc = RUBY_INIT_YYLLOC();
	    args = new_args_tail(p, 0, 0, 0, 0);
	    nd_set_loc(args, &loc);
	}
	args->nd_ainfo->pre_args_num = max_numparam;
    }
    return args;
}

static NODE*
new_array_pattern(struct parser_params *p, NODE *constant, NODE *pre_arg, NODE *aryptn, const YYLTYPE *loc)
{
    struct rb_ary_pattern_info *apinfo = aryptn->nd_apinfo;

    aryptn->nd_pconst = constant;

    if (pre_arg) {
	NODE *pre_args = NEW_LIST(pre_arg, loc);
	if (apinfo->pre_args) {
	    apinfo->pre_args = list_concat(pre_args, apinfo->pre_args);
	}
	else {
	    apinfo->pre_args = pre_args;
	}
    }
    return aryptn;
}

static NODE*
new_array_pattern_tail(struct parser_params *p, NODE *pre_args, int has_rest, ID rest_arg, NODE *post_args, const YYLTYPE *loc)
{
    int saved_line = p->ruby_sourceline;
    NODE *node;
    VALUE tmpbuf = rb_imemo_tmpbuf_auto_free_pointer();
    struct rb_ary_pattern_info *apinfo = ZALLOC(struct rb_ary_pattern_info);
    rb_imemo_tmpbuf_set_ptr(tmpbuf, apinfo);
    node = NEW_NODE(NODE_ARYPTN, 0, 0, apinfo, loc);
    apinfo->imemo = tmpbuf;
    RB_OBJ_WRITTEN(p->ast, Qnil, tmpbuf);

    apinfo->pre_args = pre_args;

    if (has_rest) {
	if (rest_arg) {
	    apinfo->rest_arg = assignable(p, rest_arg, 0, loc);
	}
	else {
	    apinfo->rest_arg = NODE_SPECIAL_NO_NAME_REST;
	}
    }
    else {
	apinfo->rest_arg = NULL;
    }

    apinfo->post_args = post_args;

    p->ruby_sourceline = saved_line;
    return node;
}

static NODE*
new_hash_pattern(struct parser_params *p, NODE *constant, NODE *hshptn, const YYLTYPE *loc)
{
    hshptn->nd_pconst = constant;
    return hshptn;
}

static NODE*
new_hash_pattern_tail(struct parser_params *p, NODE *kw_args, ID kw_rest_arg, const YYLTYPE *loc)
{
    int saved_line = p->ruby_sourceline;
    NODE *node, *kw_rest_arg_node;

    if (kw_rest_arg == idNil) {
	kw_rest_arg_node = NODE_SPECIAL_NO_REST_KEYWORD;
    }
    else if (kw_rest_arg) {
	kw_rest_arg_node = assignable(p, kw_rest_arg, 0, loc);
    }
    else {
	kw_rest_arg_node = NULL;
    }

    node = NEW_NODE(NODE_HSHPTN, 0, kw_args, kw_rest_arg_node, loc);

    p->ruby_sourceline = saved_line;
    return node;
}

static NODE *
new_case3(struct parser_params *p, NODE *val, NODE *pat, const YYLTYPE *loc)
{
    NODE *node = NEW_CASE3(val, pat, loc);

    if (rb_warning_category_enabled_p(RB_WARN_CATEGORY_EXPERIMENTAL))
	rb_warn0L(nd_line(node), "Pattern matching is experimental, and the behavior may change in future versions of Ruby!");
    return node;
}

static NODE*
dsym_node(struct parser_params *p, NODE *node, const YYLTYPE *loc)
{
    VALUE lit;

    if (!node) {
	return NEW_LIT(ID2SYM(idNULL), loc);
    }

    switch (nd_type(node)) {
      case NODE_DSTR:
	nd_set_type(node, NODE_DSYM);
	nd_set_loc(node, loc);
	break;
      case NODE_STR:
	lit = node->nd_lit;
	RB_OBJ_WRITTEN(p->ast, Qnil, node->nd_lit = ID2SYM(rb_intern_str(lit)));
	nd_set_type(node, NODE_LIT);
	nd_set_loc(node, loc);
	break;
      default:
	node = NEW_NODE(NODE_DSYM, Qnil, 1, NEW_LIST(node, loc), loc);
	break;
    }
    return node;
}

static int
append_literal_keys(st_data_t k, st_data_t v, st_data_t h)
{
    NODE *node = (NODE *)v;
    NODE **result = (NODE **)h;
    node->nd_alen = 2;
    node->nd_next->nd_end = node->nd_next;
    node->nd_next->nd_next = 0;
    if (*result)
	list_concat(*result, node);
    else
	*result = node;
    return ST_CONTINUE;
}

static NODE *
remove_duplicate_keys(struct parser_params *p, NODE *hash)
{
    st_table *literal_keys = st_init_numtable_with_size(hash->nd_alen / 2);
    NODE *result = 0;
    rb_code_location_t loc = hash->nd_loc;
    while (hash && hash->nd_head && hash->nd_next) {
	NODE *head = hash->nd_head;
	NODE *value = hash->nd_next;
	NODE *next = value->nd_next;
	VALUE key = (VALUE)head;
	st_data_t data;
	if (nd_type(head) == NODE_LIT &&
	    st_lookup(literal_keys, (key = head->nd_lit), &data)) {
	    rb_compile_warn(p->ruby_sourcefile, nd_line((NODE *)data),
			    "key %+"PRIsVALUE" is duplicated and overwritten on line %d",
			    head->nd_lit, nd_line(head));
	    head = ((NODE *)data)->nd_next;
	    head->nd_head = block_append(p, head->nd_head, value->nd_head);
	}
	else {
	    st_insert(literal_keys, (st_data_t)key, (st_data_t)hash);
	}
	hash = next;
    }
    st_foreach(literal_keys, append_literal_keys, (st_data_t)&result);
    st_free_table(literal_keys);
    if (hash) {
	if (!result) result = hash;
	else list_concat(result, hash);
    }
    result->nd_loc = loc;
    return result;
}

static NODE *
new_hash(struct parser_params *p, NODE *hash, const YYLTYPE *loc)
{
    if (hash) hash = remove_duplicate_keys(p, hash);
    return NEW_HASH(hash, loc);
}
#endif

static void
error_duplicate_pattern_variable(struct parser_params *p, ID id, const YYLTYPE *loc)
{
    if (is_private_local_id(id)) {
	return;
    }
    if (st_is_member(p->pvtbl, id)) {
	yyerror1(loc, "duplicated variable name");
    }
    else {
	st_insert(p->pvtbl, (st_data_t)id, 0);
    }
}

static void
error_duplicate_pattern_key(struct parser_params *p, VALUE key, const YYLTYPE *loc)
{
    if (!p->pktbl) {
	p->pktbl = st_init_numtable();
    }
    else if (st_is_member(p->pktbl, key)) {
	yyerror1(loc, "duplicated key name");
	return;
    }
    st_insert(p->pktbl, (st_data_t)key, 0);
}

#ifndef RIPPER
static NODE *
new_unique_key_hash(struct parser_params *p, NODE *hash, const YYLTYPE *loc)
{
    return NEW_HASH(hash, loc);
}
#endif /* !RIPPER */

#ifndef RIPPER
static NODE *
new_op_assign(struct parser_params *p, NODE *lhs, ID op, NODE *rhs, const YYLTYPE *loc)
{
    NODE *asgn;

    if (lhs) {
	ID vid = lhs->nd_vid;
	YYLTYPE lhs_loc = lhs->nd_loc;
	if (op == tOROP) {
	    lhs->nd_value = rhs;
	    nd_set_loc(lhs, loc);
	    asgn = NEW_OP_ASGN_OR(gettable(p, vid, &lhs_loc), lhs, loc);
	    if (is_notop_id(vid)) {
		switch (id_type(vid)) {
		  case ID_GLOBAL:
		  case ID_INSTANCE:
		  case ID_CLASS:
		    asgn->nd_aid = vid;
		}
	    }
	}
	else if (op == tANDOP) {
	    lhs->nd_value = rhs;
	    nd_set_loc(lhs, loc);
	    asgn = NEW_OP_ASGN_AND(gettable(p, vid, &lhs_loc), lhs, loc);
	}
	else {
	    asgn = lhs;
	    asgn->nd_value = NEW_CALL(gettable(p, vid, &lhs_loc), op, NEW_LIST(rhs, &rhs->nd_loc), loc);
	    nd_set_loc(asgn, loc);
	}
    }
    else {
	asgn = NEW_BEGIN(0, loc);
    }
    return asgn;
}

static NODE *
new_ary_op_assign(struct parser_params *p, NODE *ary,
		  NODE *args, ID op, NODE *rhs, const YYLTYPE *args_loc, const YYLTYPE *loc)
{
    NODE *asgn;

    args = make_list(args, args_loc);
    if (nd_type(args) == NODE_BLOCK_PASS) {
	args = NEW_ARGSCAT(args, rhs, loc);
    }
    else {
	args = arg_concat(p, args, rhs, loc);
    }
    asgn = NEW_OP_ASGN1(ary, op, args, loc);
    fixpos(asgn, ary);
    return asgn;
}

static NODE *
new_attr_op_assign(struct parser_params *p, NODE *lhs,
		   ID atype, ID attr, ID op, NODE *rhs, const YYLTYPE *loc)
{
    NODE *asgn;

    asgn = NEW_OP_ASGN2(lhs, CALL_Q_P(atype), attr, op, rhs, loc);
    fixpos(asgn, lhs);
    return asgn;
}

static NODE *
new_const_op_assign(struct parser_params *p, NODE *lhs, ID op, NODE *rhs, const YYLTYPE *loc)
{
    NODE *asgn;

    if (lhs) {
	asgn = NEW_OP_CDECL(lhs, op, rhs, loc);
    }
    else {
	asgn = NEW_BEGIN(0, loc);
    }
    fixpos(asgn, lhs);
    return asgn;
}

static NODE *
const_decl(struct parser_params *p, NODE *path, const YYLTYPE *loc)
{
    if (p->in_def) {
	yyerror1(loc, "dynamic constant assignment");
    }
    return NEW_CDECL(0, 0, (path), loc);
}
#else
static VALUE
const_decl(struct parser_params *p, VALUE path)
{
    if (p->in_def) {
	path = dispatch1(assign_error, path);
	ripper_error(p);
    }
    return path;
}

static VALUE
assign_error(struct parser_params *p, VALUE a)
{
    a = dispatch1(assign_error, a);
    ripper_error(p);
    return a;
}

static VALUE
var_field(struct parser_params *p, VALUE a)
{
    return ripper_new_yylval(p, get_id(a), dispatch1(var_field, a), 0);
}
#endif

#ifndef RIPPER
static NODE *
new_bodystmt(struct parser_params *p, NODE *head, NODE *rescue, NODE *rescue_else, NODE *ensure, const YYLTYPE *loc)
{
    NODE *result = head;
    if (rescue) {
        NODE *tmp = rescue_else ? rescue_else : rescue;
        YYLTYPE rescue_loc = code_loc_gen(&head->nd_loc, &tmp->nd_loc);

        result = NEW_RESCUE(head, rescue, rescue_else, &rescue_loc);
        nd_set_line(result, rescue->nd_loc.beg_pos.lineno);
    }
    else if (rescue_else) {
        result = block_append(p, result, rescue_else);
    }
    if (ensure) {
        result = NEW_ENSURE(result, ensure, loc);
    }
    fixpos(result, head);
    return result;
}
#endif

static void
warn_unused_var(struct parser_params *p, struct local_vars *local)
{
    int cnt;

    if (!local->used) return;
    cnt = local->used->pos;
    if (cnt != local->vars->pos) {
	rb_parser_fatal(p, "local->used->pos != local->vars->pos");
    }
#ifndef RIPPER
    ID *v = local->vars->tbl;
    ID *u = local->used->tbl;
    for (int i = 0; i < cnt; ++i) {
	if (!v[i] || (u[i] & LVAR_USED)) continue;
	if (is_private_local_id(v[i])) continue;
	rb_warn1L((int)u[i], "assigned but unused variable - %"PRIsWARN, rb_id2str(v[i]));
    }
#endif
}

static void
local_push(struct parser_params *p, int toplevel_scope)
{
    struct local_vars *local;
    int inherits_dvars = toplevel_scope && compile_for_eval;
    int warn_unused_vars = RTEST(ruby_verbose);

    local = ALLOC(struct local_vars);
    local->prev = p->lvtbl;
    local->args = vtable_alloc(0);
    local->vars = vtable_alloc(inherits_dvars ? DVARS_INHERIT : DVARS_TOPSCOPE);
#ifndef RIPPER
    if (toplevel_scope && compile_for_eval) warn_unused_vars = 0;
    if (toplevel_scope && e_option_supplied(p)) warn_unused_vars = 0;
    local->numparam.outer = 0;
    local->numparam.inner = 0;
    local->numparam.current = 0;
#endif
    local->used = warn_unused_vars ? vtable_alloc(0) : 0;

# if WARN_PAST_SCOPE
    local->past = 0;
# endif
    CMDARG_PUSH(0);
    COND_PUSH(0);
    p->lvtbl = local;
}

static void
local_pop(struct parser_params *p)
{
    struct local_vars *local = p->lvtbl->prev;
    if (p->lvtbl->used) {
	warn_unused_var(p, p->lvtbl);
	vtable_free(p->lvtbl->used);
    }
# if WARN_PAST_SCOPE
    while (p->lvtbl->past) {
	struct vtable *past = p->lvtbl->past;
	p->lvtbl->past = past->prev;
	vtable_free(past);
    }
# endif
    vtable_free(p->lvtbl->args);
    vtable_free(p->lvtbl->vars);
    CMDARG_POP();
    COND_POP();
    ruby_sized_xfree(p->lvtbl, sizeof(*p->lvtbl));
    p->lvtbl = local;
}

#ifndef RIPPER
static ID*
local_tbl(struct parser_params *p)
{
    int cnt_args = vtable_size(p->lvtbl->args);
    int cnt_vars = vtable_size(p->lvtbl->vars);
    int cnt = cnt_args + cnt_vars;
    int i, j;
    ID *buf;

    if (cnt <= 0) return 0;
    buf = ALLOC_N(ID, cnt + 2);
    MEMCPY(buf+1, p->lvtbl->args->tbl, ID, cnt_args);
    /* remove IDs duplicated to warn shadowing */
    for (i = 0, j = cnt_args+1; i < cnt_vars; ++i) {
	ID id = p->lvtbl->vars->tbl[i];
	if (!vtable_included(p->lvtbl->args, id)) {
	    buf[j++] = id;
	}
    }
    if (--j < cnt) {
	REALLOC_N(buf, ID, (cnt = j) + 2);
    }
    buf[0] = cnt;
    rb_ast_add_local_table(p->ast, buf);

    return buf;
}

static NODE*
node_newnode_with_locals(struct parser_params *p, enum node_type type, VALUE a1, VALUE a2, const rb_code_location_t *loc)
{
    ID *a0;
    NODE *n;

    a0 = local_tbl(p);
    n = NEW_NODE(type, a0, a1, a2, loc);
    return n;
}

#endif

static void
numparam_name(struct parser_params *p, ID id)
{
    if (!NUMPARAM_ID_P(id)) return;
    rb_warn1("`_%d' is reserved for numbered parameter; consider another name",
	     WARN_I(NUMPARAM_ID_TO_IDX(id)));
}

static void
arg_var(struct parser_params *p, ID id)
{
    numparam_name(p, id);
    vtable_add(p->lvtbl->args, id);
}

static void
local_var(struct parser_params *p, ID id)
{
    numparam_name(p, id);
    vtable_add(p->lvtbl->vars, id);
    if (p->lvtbl->used) {
	vtable_add(p->lvtbl->used, (ID)p->ruby_sourceline);
    }
}

static int
local_id_ref(struct parser_params *p, ID id, ID **vidrefp)
{
    struct vtable *vars, *args, *used;

    vars = p->lvtbl->vars;
    args = p->lvtbl->args;
    used = p->lvtbl->used;

    while (vars && !DVARS_TERMINAL_P(vars->prev)) {
	vars = vars->prev;
	args = args->prev;
	if (used) used = used->prev;
    }

    if (vars && vars->prev == DVARS_INHERIT) {
	return rb_local_defined(id, p->parent_iseq);
    }
    else if (vtable_included(args, id)) {
	return 1;
    }
    else {
	int i = vtable_included(vars, id);
	if (i && used && vidrefp) *vidrefp = &used->tbl[i-1];
	return i != 0;
    }
}

static int
local_id(struct parser_params *p, ID id)
{
    return local_id_ref(p, id, NULL);
}

static NODE *
numparam_push(struct parser_params *p)
{
#ifndef RIPPER
    struct local_vars *local = p->lvtbl;
    NODE *inner = local->numparam.inner;
    if (!local->numparam.outer) {
	local->numparam.outer = local->numparam.current;
    }
    local->numparam.inner = 0;
    local->numparam.current = 0;
    return inner;
#else
    return 0;
#endif
}

static void
numparam_pop(struct parser_params *p, NODE *prev_inner)
{
#ifndef RIPPER
    struct local_vars *local = p->lvtbl;
    if (prev_inner) {
	/* prefer first one */
	local->numparam.inner = prev_inner;
    }
    else if (local->numparam.current) {
	/* current and inner are exclusive */
	local->numparam.inner = local->numparam.current;
    }
    if (p->max_numparam > NO_PARAM) {
	/* current and outer are exclusive */
	local->numparam.current = local->numparam.outer;
	local->numparam.outer = 0;
    }
    else {
	/* no numbered parameter */
	local->numparam.current = 0;
    }
#endif
}

static const struct vtable *
dyna_push(struct parser_params *p)
{
    p->lvtbl->args = vtable_alloc(p->lvtbl->args);
    p->lvtbl->vars = vtable_alloc(p->lvtbl->vars);
    if (p->lvtbl->used) {
	p->lvtbl->used = vtable_alloc(p->lvtbl->used);
    }
    return p->lvtbl->args;
}

static void
dyna_pop_vtable(struct parser_params *p, struct vtable **vtblp)
{
    struct vtable *tmp = *vtblp;
    *vtblp = tmp->prev;
# if WARN_PAST_SCOPE
    if (p->past_scope_enabled) {
	tmp->prev = p->lvtbl->past;
	p->lvtbl->past = tmp;
	return;
    }
# endif
    vtable_free(tmp);
}

static void
dyna_pop_1(struct parser_params *p)
{
    struct vtable *tmp;

    if ((tmp = p->lvtbl->used) != 0) {
	warn_unused_var(p, p->lvtbl);
	p->lvtbl->used = p->lvtbl->used->prev;
	vtable_free(tmp);
    }
    dyna_pop_vtable(p, &p->lvtbl->args);
    dyna_pop_vtable(p, &p->lvtbl->vars);
}

static void
dyna_pop(struct parser_params *p, const struct vtable *lvargs)
{
    while (p->lvtbl->args != lvargs) {
	dyna_pop_1(p);
	if (!p->lvtbl->args) {
	    struct local_vars *local = p->lvtbl->prev;
	    ruby_sized_xfree(p->lvtbl, sizeof(*p->lvtbl));
	    p->lvtbl = local;
	}
    }
    dyna_pop_1(p);
}

static int
dyna_in_block(struct parser_params *p)
{
    return !DVARS_TERMINAL_P(p->lvtbl->vars) && p->lvtbl->vars->prev != DVARS_TOPSCOPE;
}

static int
dvar_defined_ref(struct parser_params *p, ID id, ID **vidrefp)
{
    struct vtable *vars, *args, *used;
    int i;

    args = p->lvtbl->args;
    vars = p->lvtbl->vars;
    used = p->lvtbl->used;

    while (!DVARS_TERMINAL_P(vars)) {
	if (vtable_included(args, id)) {
	    return 1;
	}
	if ((i = vtable_included(vars, id)) != 0) {
	    if (used && vidrefp) *vidrefp = &used->tbl[i-1];
	    return 1;
	}
	args = args->prev;
	vars = vars->prev;
	if (!vidrefp) used = 0;
	if (used) used = used->prev;
    }

    if (vars == DVARS_INHERIT) {
        return rb_dvar_defined(id, p->parent_iseq);
    }

    return 0;
}

static int
dvar_defined(struct parser_params *p, ID id)
{
    return dvar_defined_ref(p, id, NULL);
}

static int
dvar_curr(struct parser_params *p, ID id)
{
    return (vtable_included(p->lvtbl->args, id) ||
	    vtable_included(p->lvtbl->vars, id));
}

static void
reg_fragment_enc_error(struct parser_params* p, VALUE str, int c)
{
    compile_error(p,
        "regexp encoding option '%c' differs from source encoding '%s'",
        c, rb_enc_name(rb_enc_get(str)));
}

#ifndef RIPPER
int
rb_reg_fragment_setenc(struct parser_params* p, VALUE str, int options)
{
    int c = RE_OPTION_ENCODING_IDX(options);

    if (c) {
	int opt, idx;
	rb_char_to_option_kcode(c, &opt, &idx);
	if (idx != ENCODING_GET(str) &&
	    rb_enc_str_coderange(str) != ENC_CODERANGE_7BIT) {
            goto error;
	}
	ENCODING_SET(str, idx);
    }
    else if (RE_OPTION_ENCODING_NONE(options)) {
        if (!ENCODING_IS_ASCII8BIT(str) &&
            rb_enc_str_coderange(str) != ENC_CODERANGE_7BIT) {
            c = 'n';
            goto error;
        }
	rb_enc_associate(str, rb_ascii8bit_encoding());
    }
    else if (p->enc == rb_usascii_encoding()) {
	if (rb_enc_str_coderange(str) != ENC_CODERANGE_7BIT) {
	    /* raise in re.c */
	    rb_enc_associate(str, rb_usascii_encoding());
	}
	else {
	    rb_enc_associate(str, rb_ascii8bit_encoding());
	}
    }
    return 0;

  error:
    return c;
}

static void
reg_fragment_setenc(struct parser_params* p, VALUE str, int options)
{
    int c = rb_reg_fragment_setenc(p, str, options);
    if (c) reg_fragment_enc_error(p, str, c);
}

static int
reg_fragment_check(struct parser_params* p, VALUE str, int options)
{
    VALUE err;
    reg_fragment_setenc(p, str, options);
    err = rb_reg_check_preprocess(str);
    if (err != Qnil) {
        err = rb_obj_as_string(err);
        compile_error(p, "%"PRIsVALUE, err);
	return 0;
    }
    return 1;
}

typedef struct {
    struct parser_params* parser;
    rb_encoding *enc;
    NODE *succ_block;
    const YYLTYPE *loc;
} reg_named_capture_assign_t;

static int
reg_named_capture_assign_iter(const OnigUChar *name, const OnigUChar *name_end,
          int back_num, int *back_refs, OnigRegex regex, void *arg0)
{
    reg_named_capture_assign_t *arg = (reg_named_capture_assign_t*)arg0;
    struct parser_params* p = arg->parser;
    rb_encoding *enc = arg->enc;
    long len = name_end - name;
    const char *s = (const char *)name;
    ID var;
    NODE *node, *succ;

    if (!len) return ST_CONTINUE;
    if (rb_enc_symname_type(s, len, enc, (1U<<ID_LOCAL)) != ID_LOCAL)
        return ST_CONTINUE;

    var = intern_cstr(s, len, enc);
    if (len < MAX_WORD_LENGTH && rb_reserved_word(s, (int)len)) {
        if (!lvar_defined(p, var)) return ST_CONTINUE;
    }
    node = node_assign(p, assignable(p, var, 0, arg->loc), NEW_LIT(ID2SYM(var), arg->loc), arg->loc);
    succ = arg->succ_block;
    if (!succ) succ = NEW_BEGIN(0, arg->loc);
    succ = block_append(p, succ, node);
    arg->succ_block = succ;
    return ST_CONTINUE;
}

static NODE *
reg_named_capture_assign(struct parser_params* p, VALUE regexp, const YYLTYPE *loc)
{
    reg_named_capture_assign_t arg;

    arg.parser = p;
    arg.enc = rb_enc_get(regexp);
    arg.succ_block = 0;
    arg.loc = loc;
    onig_foreach_name(RREGEXP_PTR(regexp), reg_named_capture_assign_iter, &arg);

    if (!arg.succ_block) return 0;
    return arg.succ_block->nd_next;
}

static VALUE
parser_reg_compile(struct parser_params* p, VALUE str, int options)
{
    reg_fragment_setenc(p, str, options);
    return rb_parser_reg_compile(p, str, options);
}

VALUE
rb_parser_reg_compile(struct parser_params* p, VALUE str, int options)
{
    return rb_reg_compile(str, options & RE_OPTION_MASK, p->ruby_sourcefile, p->ruby_sourceline);
}

static VALUE
reg_compile(struct parser_params* p, VALUE str, int options)
{
    VALUE re;
    VALUE err;

    err = rb_errinfo();
    re = parser_reg_compile(p, str, options);
    if (NIL_P(re)) {
	VALUE m = rb_attr_get(rb_errinfo(), idMesg);
	rb_set_errinfo(err);
	compile_error(p, "%"PRIsVALUE, m);
	return Qnil;
    }
    return re;
}
#else
static VALUE
parser_reg_compile(struct parser_params* p, VALUE str, int options, VALUE *errmsg)
{
    VALUE err = rb_errinfo();
    VALUE re;
    str = ripper_is_node_yylval(str) ? RNODE(str)->nd_cval : str;
    int c = rb_reg_fragment_setenc(p, str, options);
    if (c) reg_fragment_enc_error(p, str, c);
    re = rb_parser_reg_compile(p, str, options);
    if (NIL_P(re)) {
	*errmsg = rb_attr_get(rb_errinfo(), idMesg);
	rb_set_errinfo(err);
    }
    return re;
}
#endif

#ifndef RIPPER
void
rb_parser_set_options(VALUE vparser, int print, int loop, int chomp, int split)
{
    struct parser_params *p;
    TypedData_Get_Struct(vparser, struct parser_params, &parser_data_type, p);
    p->do_print = print;
    p->do_loop = loop;
    p->do_chomp = chomp;
    p->do_split = split;
}

void
rb_parser_warn_location(VALUE vparser, int warn)
{
    struct parser_params *p;
    TypedData_Get_Struct(vparser, struct parser_params, &parser_data_type, p);
    p->warn_location = warn;
}

static NODE *
parser_append_options(struct parser_params *p, NODE *node)
{
    static const YYLTYPE default_location = {{1, 0}, {1, 0}};
    const YYLTYPE *const LOC = &default_location;

    if (p->do_print) {
	NODE *print = NEW_FCALL(rb_intern("print"),
				NEW_LIST(NEW_GVAR(idLASTLINE, LOC), LOC),
				LOC);
	node = block_append(p, node, print);
    }

    if (p->do_loop) {
	if (p->do_split) {
	    NODE *args = NEW_LIST(NEW_GVAR(rb_intern("$;"), LOC), LOC);
	    NODE *split = NEW_GASGN(rb_intern("$F"),
				    NEW_CALL(NEW_GVAR(idLASTLINE, LOC),
					     rb_intern("split"), args, LOC),
				    LOC);
	    node = block_append(p, split, node);
	}
	if (p->do_chomp) {
	    NODE *chomp = NEW_CALL(NEW_GVAR(idLASTLINE, LOC),
				   rb_intern("chomp!"), 0, LOC);
	    node = block_append(p, chomp, node);
	}

	node = NEW_WHILE(NEW_VCALL(idGets, LOC), node, 1, LOC);
    }

    return node;
}

void
rb_init_parse(void)
{
    /* just to suppress unused-function warnings */
    (void)nodetype;
    (void)nodeline;
}

static ID
internal_id(struct parser_params *p)
{
    const ID max_id = RB_ID_SERIAL_MAX & ~0xffff;
    ID id = (ID)vtable_size(p->lvtbl->args) + (ID)vtable_size(p->lvtbl->vars);
    id = max_id - id;
    return ID_STATIC_SYM | ID_INTERNAL | (id << ID_SCOPE_SHIFT);
}
#endif /* !RIPPER */

static void
parser_initialize(struct parser_params *p)
{
    /* note: we rely on TypedData_Make_Struct to set most fields to 0 */
    p->command_start = TRUE;
    p->ruby_sourcefile_string = Qnil;
    p->lex.lpar_beg = -1; /* make lambda_beginning_p() == FALSE at first */
    p->node_id = 0;
#ifdef RIPPER
    p->delayed.token = Qnil;
    p->result = Qnil;
    p->parsing_thread = Qnil;
#else
    p->error_buffer = Qfalse;
#endif
    p->debug_buffer = Qnil;
    p->debug_output = rb_stdout;
    p->enc = rb_utf8_encoding();
}

#ifdef RIPPER
#define parser_mark ripper_parser_mark
#define parser_free ripper_parser_free
#endif

static void
parser_mark(void *ptr)
{
    struct parser_params *p = (struct parser_params*)ptr;

    rb_gc_mark(p->lex.input);
    rb_gc_mark(p->lex.prevline);
    rb_gc_mark(p->lex.lastline);
    rb_gc_mark(p->lex.nextline);
    rb_gc_mark(p->ruby_sourcefile_string);
    rb_gc_mark((VALUE)p->lex.strterm);
    rb_gc_mark((VALUE)p->ast);
    rb_gc_mark(p->case_labels);
#ifndef RIPPER
    rb_gc_mark(p->debug_lines);
    rb_gc_mark(p->compile_option);
    rb_gc_mark(p->error_buffer);
#else
    rb_gc_mark(p->delayed.token);
    rb_gc_mark(p->value);
    rb_gc_mark(p->result);
    rb_gc_mark(p->parsing_thread);
#endif
    rb_gc_mark(p->debug_buffer);
    rb_gc_mark(p->debug_output);
#ifdef YYMALLOC
    rb_gc_mark((VALUE)p->heap);
#endif
}

static void
parser_free(void *ptr)
{
    struct parser_params *p = (struct parser_params*)ptr;
    struct local_vars *local, *prev;

    if (p->tokenbuf) {
        ruby_sized_xfree(p->tokenbuf, p->toksiz);
    }
    for (local = p->lvtbl; local; local = prev) {
	if (local->vars) xfree(local->vars);
	prev = local->prev;
	xfree(local);
    }
    {
	token_info *ptinfo;
	while ((ptinfo = p->token_info) != 0) {
	    p->token_info = ptinfo->next;
	    xfree(ptinfo);
	}
    }
    xfree(ptr);
}

static size_t
parser_memsize(const void *ptr)
{
    struct parser_params *p = (struct parser_params*)ptr;
    struct local_vars *local;
    size_t size = sizeof(*p);

    size += p->toksiz;
    for (local = p->lvtbl; local; local = local->prev) {
	size += sizeof(*local);
	if (local->vars) size += local->vars->capa * sizeof(ID);
    }
    return size;
}

static const rb_data_type_t parser_data_type = {
#ifndef RIPPER
    "parser",
#else
    "ripper",
#endif
    {
	parser_mark,
	parser_free,
	parser_memsize,
    },
    0, 0, RUBY_TYPED_FREE_IMMEDIATELY
};

#ifndef RIPPER
#undef rb_reserved_word

const struct kwtable *
rb_reserved_word(const char *str, unsigned int len)
{
    return reserved_word(str, len);
}

VALUE
rb_parser_new(void)
{
    struct parser_params *p;
    VALUE parser = TypedData_Make_Struct(0, struct parser_params,
					 &parser_data_type, p);
    parser_initialize(p);
    return parser;
}

VALUE
rb_parser_set_context(VALUE vparser, const struct rb_iseq_struct *base, int main)
{
    struct parser_params *p;

    TypedData_Get_Struct(vparser, struct parser_params, &parser_data_type, p);
    p->error_buffer = main ? Qfalse : Qnil;
    p->parent_iseq = base;
    return vparser;
}
#endif

#ifdef RIPPER
#define rb_parser_end_seen_p ripper_parser_end_seen_p
#define rb_parser_encoding ripper_parser_encoding
#define rb_parser_get_yydebug ripper_parser_get_yydebug
#define rb_parser_set_yydebug ripper_parser_set_yydebug
#define rb_parser_get_debug_output ripper_parser_get_debug_output
#define rb_parser_set_debug_output ripper_parser_set_debug_output
static VALUE ripper_parser_end_seen_p(VALUE vparser);
static VALUE ripper_parser_encoding(VALUE vparser);
static VALUE ripper_parser_get_yydebug(VALUE self);
static VALUE ripper_parser_set_yydebug(VALUE self, VALUE flag);
static VALUE ripper_parser_get_debug_output(VALUE self);
static VALUE ripper_parser_set_debug_output(VALUE self, VALUE output);

/*
 *  call-seq:
 *    ripper.error?   -> Boolean
 *
 *  Return true if parsed source has errors.
 */
static VALUE
ripper_error_p(VALUE vparser)
{
    struct parser_params *p;

    TypedData_Get_Struct(vparser, struct parser_params, &parser_data_type, p);
    return p->error_p ? Qtrue : Qfalse;
}
#endif

/*
 *  call-seq:
 *    ripper.end_seen?   -> Boolean
 *
 *  Return true if parsed source ended by +\_\_END\_\_+.
 */
VALUE
rb_parser_end_seen_p(VALUE vparser)
{
    struct parser_params *p;

    TypedData_Get_Struct(vparser, struct parser_params, &parser_data_type, p);
    return p->ruby__end__seen ? Qtrue : Qfalse;
}

/*
 *  call-seq:
 *    ripper.encoding   -> encoding
 *
 *  Return encoding of the source.
 */
VALUE
rb_parser_encoding(VALUE vparser)
{
    struct parser_params *p;

    TypedData_Get_Struct(vparser, struct parser_params, &parser_data_type, p);
    return rb_enc_from_encoding(p->enc);
}

#ifdef RIPPER
/*
 *  call-seq:
 *    ripper.yydebug   -> true or false
 *
 *  Get yydebug.
 */
VALUE
rb_parser_get_yydebug(VALUE self)
{
    struct parser_params *p;

    TypedData_Get_Struct(self, struct parser_params, &parser_data_type, p);
    return p->debug ? Qtrue : Qfalse;
}
#endif

/*
 *  call-seq:
 *    ripper.yydebug = flag
 *
 *  Set yydebug.
 */
VALUE
rb_parser_set_yydebug(VALUE self, VALUE flag)
{
    struct parser_params *p;

    TypedData_Get_Struct(self, struct parser_params, &parser_data_type, p);
    p->debug = RTEST(flag);
    return flag;
}

/*
 *  call-seq:
 *    ripper.debug_output   -> obj
 *
 *  Get debug output.
 */
VALUE
rb_parser_get_debug_output(VALUE self)
{
    struct parser_params *p;

    TypedData_Get_Struct(self, struct parser_params, &parser_data_type, p);
    return p->debug_output;
}

/*
 *  call-seq:
 *    ripper.debug_output = obj
 *
 *  Set debug output.
 */
VALUE
rb_parser_set_debug_output(VALUE self, VALUE output)
{
    struct parser_params *p;

    TypedData_Get_Struct(self, struct parser_params, &parser_data_type, p);
    return p->debug_output = output;
}

#ifndef RIPPER
#ifdef YYMALLOC
#define HEAPCNT(n, size) ((n) * (size) / sizeof(YYSTYPE))
/* Keep the order; NEWHEAP then xmalloc and ADD2HEAP to get rid of
 * potential memory leak */
#define NEWHEAP() rb_imemo_tmpbuf_parser_heap(0, p->heap, 0)
#define ADD2HEAP(new, cnt, ptr) ((p->heap = (new))->ptr = (ptr), \
			   (new)->cnt = (cnt), (ptr))

void *
rb_parser_malloc(struct parser_params *p, size_t size)
{
    size_t cnt = HEAPCNT(1, size);
    rb_imemo_tmpbuf_t *n = NEWHEAP();
    void *ptr = xmalloc(size);

    return ADD2HEAP(n, cnt, ptr);
}

void *
rb_parser_calloc(struct parser_params *p, size_t nelem, size_t size)
{
    size_t cnt = HEAPCNT(nelem, size);
    rb_imemo_tmpbuf_t *n = NEWHEAP();
    void *ptr = xcalloc(nelem, size);

    return ADD2HEAP(n, cnt, ptr);
}

void *
rb_parser_realloc(struct parser_params *p, void *ptr, size_t size)
{
    rb_imemo_tmpbuf_t *n;
    size_t cnt = HEAPCNT(1, size);

    if (ptr && (n = p->heap) != NULL) {
	do {
	    if (n->ptr == ptr) {
		n->ptr = ptr = xrealloc(ptr, size);
		if (n->cnt) n->cnt = cnt;
		return ptr;
	    }
	} while ((n = n->next) != NULL);
    }
    n = NEWHEAP();
    ptr = xrealloc(ptr, size);
    return ADD2HEAP(n, cnt, ptr);
}

void
rb_parser_free(struct parser_params *p, void *ptr)
{
    rb_imemo_tmpbuf_t **prev = &p->heap, *n;

    while ((n = *prev) != NULL) {
	if (n->ptr == ptr) {
	    *prev = n->next;
	    rb_gc_force_recycle((VALUE)n);
	    break;
	}
	prev = &n->next;
    }
    xfree(ptr);
}
#endif

void
rb_parser_printf(struct parser_params *p, const char *fmt, ...)
{
    va_list ap;
    VALUE mesg = p->debug_buffer;

    if (NIL_P(mesg)) p->debug_buffer = mesg = rb_str_new(0, 0);
    va_start(ap, fmt);
    rb_str_vcatf(mesg, fmt, ap);
    va_end(ap);
    if (RSTRING_END(mesg)[-1] == '\n') {
	rb_io_write(p->debug_output, mesg);
	p->debug_buffer = Qnil;
    }
}

static void
parser_compile_error(struct parser_params *p, const char *fmt, ...)
{
    va_list ap;

    rb_io_flush(p->debug_output);
    p->error_p = 1;
    va_start(ap, fmt);
    p->error_buffer =
	rb_syntax_error_append(p->error_buffer,
			       p->ruby_sourcefile_string,
			       p->ruby_sourceline,
			       rb_long2int(p->lex.pcur - p->lex.pbeg),
			       p->enc, fmt, ap);
    va_end(ap);
}

static size_t
count_char(const char *str, int c)
{
    int n = 0;
    while (str[n] == c) ++n;
    return n;
}

/*
 * strip enclosing double-quotes, same as the default yytnamerr except
 * for that single-quotes matching back-quotes do not stop stripping.
 *
 *  "\"`class' keyword\"" => "`class' keyword"
 */
RUBY_FUNC_EXPORTED size_t
rb_yytnamerr(struct parser_params *p, char *yyres, const char *yystr)
{
    if (*yystr == '"') {
	size_t yyn = 0, bquote = 0;
	const char *yyp = yystr;

	while (*++yyp) {
	    switch (*yyp) {
	      case '`':
		if (!bquote) {
		    bquote = count_char(yyp+1, '`') + 1;
		    if (yyres) memcpy(&yyres[yyn], yyp, bquote);
		    yyn += bquote;
		    yyp += bquote - 1;
		    break;
		}
		goto default_char;

	      case '\'':
		if (bquote && count_char(yyp+1, '\'') + 1 == bquote) {
		    if (yyres) memcpy(yyres + yyn, yyp, bquote);
		    yyn += bquote;
		    yyp += bquote - 1;
		    bquote = 0;
		    break;
		}
		if (yyp[1] && yyp[1] != '\'' && yyp[2] == '\'') {
		    if (yyres) memcpy(yyres + yyn, yyp, 3);
		    yyn += 3;
		    yyp += 2;
		    break;
		}
		goto do_not_strip_quotes;

	      case ',':
		goto do_not_strip_quotes;

	      case '\\':
		if (*++yyp != '\\')
		    goto do_not_strip_quotes;
		/* Fall through.  */
	      default_char:
	      default:
		if (yyres)
		    yyres[yyn] = *yyp;
		yyn++;
		break;

	      case '"':
	      case '\0':
		if (yyres)
		    yyres[yyn] = '\0';
		return yyn;
	    }
	}
      do_not_strip_quotes: ;
    }

    if (!yyres) return strlen(yystr);

    return (YYSIZE_T)(yystpcpy(yyres, yystr) - yyres);
}
#endif

#ifdef RIPPER
#ifdef RIPPER_DEBUG
/* :nodoc: */
static VALUE
ripper_validate_object(VALUE self, VALUE x)
{
    if (x == Qfalse) return x;
    if (x == Qtrue) return x;
    if (x == Qnil) return x;
    if (x == Qundef)
	rb_raise(rb_eArgError, "Qundef given");
    if (FIXNUM_P(x)) return x;
    if (SYMBOL_P(x)) return x;
    switch (BUILTIN_TYPE(x)) {
      case T_STRING:
      case T_OBJECT:
      case T_ARRAY:
      case T_BIGNUM:
      case T_FLOAT:
      case T_COMPLEX:
      case T_RATIONAL:
	break;
      case T_NODE:
	if (nd_type((NODE *)x) != NODE_RIPPER) {
	    rb_raise(rb_eArgError, "NODE given: %p", (void *)x);
	}
	x = ((NODE *)x)->nd_rval;
	break;
      default:
	rb_raise(rb_eArgError, "wrong type of ruby object: %p (%s)",
		 (void *)x, rb_obj_classname(x));
    }
    if (!RBASIC_CLASS(x)) {
	rb_raise(rb_eArgError, "hidden ruby object: %p (%s)",
		 (void *)x, rb_builtin_type_name(TYPE(x)));
    }
    return x;
}
#endif

#define validate(x) ((x) = get_value(x))

static VALUE
ripper_dispatch0(struct parser_params *p, ID mid)
{
    return rb_funcall(p->value, mid, 0);
}

static VALUE
ripper_dispatch1(struct parser_params *p, ID mid, VALUE a)
{
    validate(a);
    return rb_funcall(p->value, mid, 1, a);
}

static VALUE
ripper_dispatch2(struct parser_params *p, ID mid, VALUE a, VALUE b)
{
    validate(a);
    validate(b);
    return rb_funcall(p->value, mid, 2, a, b);
}

static VALUE
ripper_dispatch3(struct parser_params *p, ID mid, VALUE a, VALUE b, VALUE c)
{
    validate(a);
    validate(b);
    validate(c);
    return rb_funcall(p->value, mid, 3, a, b, c);
}

static VALUE
ripper_dispatch4(struct parser_params *p, ID mid, VALUE a, VALUE b, VALUE c, VALUE d)
{
    validate(a);
    validate(b);
    validate(c);
    validate(d);
    return rb_funcall(p->value, mid, 4, a, b, c, d);
}

static VALUE
ripper_dispatch5(struct parser_params *p, ID mid, VALUE a, VALUE b, VALUE c, VALUE d, VALUE e)
{
    validate(a);
    validate(b);
    validate(c);
    validate(d);
    validate(e);
    return rb_funcall(p->value, mid, 5, a, b, c, d, e);
}

static VALUE
ripper_dispatch7(struct parser_params *p, ID mid, VALUE a, VALUE b, VALUE c, VALUE d, VALUE e, VALUE f, VALUE g)
{
    validate(a);
    validate(b);
    validate(c);
    validate(d);
    validate(e);
    validate(f);
    validate(g);
    return rb_funcall(p->value, mid, 7, a, b, c, d, e, f, g);
}

static ID
ripper_get_id(VALUE v)
{
    NODE *nd;
    if (!RB_TYPE_P(v, T_NODE)) return 0;
    nd = (NODE *)v;
    if (nd_type(nd) != NODE_RIPPER) return 0;
    return nd->nd_vid;
}

static VALUE
ripper_get_value(VALUE v)
{
    NODE *nd;
    if (v == Qundef) return Qnil;
    if (!RB_TYPE_P(v, T_NODE)) return v;
    nd = (NODE *)v;
    if (nd_type(nd) != NODE_RIPPER) return Qnil;
    return nd->nd_rval;
}

static void
ripper_error(struct parser_params *p)
{
    p->error_p = TRUE;
}

static void
ripper_compile_error(struct parser_params *p, const char *fmt, ...)
{
    VALUE str;
    va_list args;

    va_start(args, fmt);
    str = rb_vsprintf(fmt, args);
    va_end(args);
    rb_funcall(p->value, rb_intern("compile_error"), 1, str);
    ripper_error(p);
}

static VALUE
ripper_lex_get_generic(struct parser_params *p, VALUE src)
{
    VALUE line = rb_funcallv_public(src, id_gets, 0, 0);
    if (!NIL_P(line) && !RB_TYPE_P(line, T_STRING)) {
	rb_raise(rb_eTypeError,
		 "gets returned %"PRIsVALUE" (expected String or nil)",
		 rb_obj_class(line));
    }
    return line;
}

static VALUE
ripper_lex_io_get(struct parser_params *p, VALUE src)
{
    return rb_io_gets(src);
}

static VALUE
ripper_s_allocate(VALUE klass)
{
    struct parser_params *p;
    VALUE self = TypedData_Make_Struct(klass, struct parser_params,
				       &parser_data_type, p);
    p->value = self;
    return self;
}

#define ripper_initialized_p(r) ((r)->lex.input != 0)

/*
 *  call-seq:
 *    Ripper.new(src, filename="(ripper)", lineno=1) -> ripper
 *
 *  Create a new Ripper object.
 *  _src_ must be a String, an IO, or an Object which has #gets method.
 *
 *  This method does not starts parsing.
 *  See also Ripper#parse and Ripper.parse.
 */
static VALUE
ripper_initialize(int argc, VALUE *argv, VALUE self)
{
    struct parser_params *p;
    VALUE src, fname, lineno;

    TypedData_Get_Struct(self, struct parser_params, &parser_data_type, p);
    rb_scan_args(argc, argv, "12", &src, &fname, &lineno);
    if (RB_TYPE_P(src, T_FILE)) {
        p->lex.gets = ripper_lex_io_get;
    }
    else if (rb_respond_to(src, id_gets)) {
        p->lex.gets = ripper_lex_get_generic;
    }
    else {
        StringValue(src);
        p->lex.gets = lex_get_str;
    }
    p->lex.input = src;
    p->eofp = 0;
    if (NIL_P(fname)) {
        fname = STR_NEW2("(ripper)");
	OBJ_FREEZE(fname);
    }
    else {
	StringValueCStr(fname);
	fname = rb_str_new_frozen(fname);
    }
    parser_initialize(p);

    p->ruby_sourcefile_string = fname;
    p->ruby_sourcefile = RSTRING_PTR(fname);
    p->ruby_sourceline = NIL_P(lineno) ? 0 : NUM2INT(lineno) - 1;

    return Qnil;
}

static VALUE
ripper_parse0(VALUE parser_v)
{
    struct parser_params *p;

    TypedData_Get_Struct(parser_v, struct parser_params, &parser_data_type, p);
    parser_prepare(p);
    p->ast = rb_ast_new();
    ripper_yyparse((void*)p);
    rb_ast_dispose(p->ast);
    p->ast = 0;
    return p->result;
}

static VALUE
ripper_ensure(VALUE parser_v)
{
    struct parser_params *p;

    TypedData_Get_Struct(parser_v, struct parser_params, &parser_data_type, p);
    p->parsing_thread = Qnil;
    return Qnil;
}

/*
 *  call-seq:
 *    ripper.parse
 *
 *  Start parsing and returns the value of the root action.
 */
static VALUE
ripper_parse(VALUE self)
{
    struct parser_params *p;

    TypedData_Get_Struct(self, struct parser_params, &parser_data_type, p);
    if (!ripper_initialized_p(p)) {
        rb_raise(rb_eArgError, "method called for uninitialized object");
    }
    if (!NIL_P(p->parsing_thread)) {
        if (p->parsing_thread == rb_thread_current())
            rb_raise(rb_eArgError, "Ripper#parse is not reentrant");
        else
            rb_raise(rb_eArgError, "Ripper#parse is not multithread-safe");
    }
    p->parsing_thread = rb_thread_current();
    rb_ensure(ripper_parse0, self, ripper_ensure, self);

    return p->result;
}

/*
 *  call-seq:
 *    ripper.column   -> Integer
 *
 *  Return column number of current parsing line.
 *  This number starts from 0.
 */
static VALUE
ripper_column(VALUE self)
{
    struct parser_params *p;
    long col;

    TypedData_Get_Struct(self, struct parser_params, &parser_data_type, p);
    if (!ripper_initialized_p(p)) {
        rb_raise(rb_eArgError, "method called for uninitialized object");
    }
    if (NIL_P(p->parsing_thread)) return Qnil;
    col = p->lex.ptok - p->lex.pbeg;
    return LONG2NUM(col);
}

/*
 *  call-seq:
 *    ripper.filename   -> String
 *
 *  Return current parsing filename.
 */
static VALUE
ripper_filename(VALUE self)
{
    struct parser_params *p;

    TypedData_Get_Struct(self, struct parser_params, &parser_data_type, p);
    if (!ripper_initialized_p(p)) {
        rb_raise(rb_eArgError, "method called for uninitialized object");
    }
    return p->ruby_sourcefile_string;
}

/*
 *  call-seq:
 *    ripper.lineno   -> Integer
 *
 *  Return line number of current parsing line.
 *  This number starts from 1.
 */
static VALUE
ripper_lineno(VALUE self)
{
    struct parser_params *p;

    TypedData_Get_Struct(self, struct parser_params, &parser_data_type, p);
    if (!ripper_initialized_p(p)) {
        rb_raise(rb_eArgError, "method called for uninitialized object");
    }
    if (NIL_P(p->parsing_thread)) return Qnil;
    return INT2NUM(p->ruby_sourceline);
}

/*
 *  call-seq:
 *    ripper.state   -> Integer
 *
 *  Return scanner state of current token.
 */
static VALUE
ripper_state(VALUE self)
{
    struct parser_params *p;

    TypedData_Get_Struct(self, struct parser_params, &parser_data_type, p);
    if (!ripper_initialized_p(p)) {
	rb_raise(rb_eArgError, "method called for uninitialized object");
    }
    if (NIL_P(p->parsing_thread)) return Qnil;
    return INT2NUM(p->lex.state);
}

/*
 *  call-seq:
 *    ripper.token   -> String
 *
 *  Return the current token string.
 */
static VALUE
ripper_token(VALUE self)
{
    struct parser_params *p;
    long pos, len;

    TypedData_Get_Struct(self, struct parser_params, &parser_data_type, p);
    if (!ripper_initialized_p(p)) {
        rb_raise(rb_eArgError, "method called for uninitialized object");
    }
    if (NIL_P(p->parsing_thread)) return Qnil;
    pos = p->lex.ptok - p->lex.pbeg;
    len = p->lex.pcur - p->lex.ptok;
    return rb_str_subseq(p->lex.lastline, pos, len);
}

#ifdef RIPPER_DEBUG
/* :nodoc: */
static VALUE
ripper_assert_Qundef(VALUE self, VALUE obj, VALUE msg)
{
    StringValue(msg);
    if (obj == Qundef) {
        rb_raise(rb_eArgError, "%"PRIsVALUE, msg);
    }
    return Qnil;
}

/* :nodoc: */
static VALUE
ripper_value(VALUE self, VALUE obj)
{
    return ULONG2NUM(obj);
}
#endif

/*
 *  call-seq:
 *    Ripper.lex_state_name(integer)   -> string
 *
 *  Returns a string representation of lex_state.
 */
static VALUE
ripper_lex_state_name(VALUE self, VALUE state)
{
    return rb_parser_lex_state_name(NUM2INT(state));
}

void
Init_ripper(void)
{
    ripper_init_eventids1();
    ripper_init_eventids2();
    id_warn = rb_intern_const("warn");
    id_warning = rb_intern_const("warning");
    id_gets = rb_intern_const("gets");
    id_assoc = rb_intern_const("=>");

    (void)yystpcpy; /* may not used in newer bison */

    InitVM(ripper);
}

void
InitVM_ripper(void)
{
    VALUE Ripper;

    Ripper = rb_define_class("Ripper", rb_cObject);
    /* version of Ripper */
    rb_define_const(Ripper, "Version", rb_usascii_str_new2(RIPPER_VERSION));
    rb_define_alloc_func(Ripper, ripper_s_allocate);
    rb_define_method(Ripper, "initialize", ripper_initialize, -1);
    rb_define_method(Ripper, "parse", ripper_parse, 0);
    rb_define_method(Ripper, "column", ripper_column, 0);
    rb_define_method(Ripper, "filename", ripper_filename, 0);
    rb_define_method(Ripper, "lineno", ripper_lineno, 0);
    rb_define_method(Ripper, "state", ripper_state, 0);
    rb_define_method(Ripper, "token", ripper_token, 0);
    rb_define_method(Ripper, "end_seen?", rb_parser_end_seen_p, 0);
    rb_define_method(Ripper, "encoding", rb_parser_encoding, 0);
    rb_define_method(Ripper, "yydebug", rb_parser_get_yydebug, 0);
    rb_define_method(Ripper, "yydebug=", rb_parser_set_yydebug, 1);
    rb_define_method(Ripper, "debug_output", rb_parser_get_debug_output, 0);
    rb_define_method(Ripper, "debug_output=", rb_parser_set_debug_output, 1);
    rb_define_method(Ripper, "error?", ripper_error_p, 0);
#ifdef RIPPER_DEBUG
    rb_define_method(Ripper, "assert_Qundef", ripper_assert_Qundef, 2);
    rb_define_method(Ripper, "rawVALUE", ripper_value, 1);
    rb_define_method(Ripper, "validate_object", ripper_validate_object, 1);
#endif

    rb_define_singleton_method(Ripper, "dedent_string", parser_dedent_string, 2);
    rb_define_private_method(Ripper, "dedent_string", parser_dedent_string, 2);

    rb_define_singleton_method(Ripper, "lex_state_name", ripper_lex_state_name, 1);

    /* ignore newline, +/- is a sign. */
    rb_define_const(Ripper, "EXPR_BEG", INT2NUM(EXPR_BEG));
    /* newline significant, +/- is an operator. */
    rb_define_const(Ripper, "EXPR_END", INT2NUM(EXPR_END));
    /* ditto, and unbound braces. */
    rb_define_const(Ripper, "EXPR_ENDARG", INT2NUM(EXPR_ENDARG));
    /* ditto, and unbound braces. */
    rb_define_const(Ripper, "EXPR_ENDFN", INT2NUM(EXPR_ENDFN));
    /* newline significant, +/- is an operator. */
    rb_define_const(Ripper, "EXPR_ARG", INT2NUM(EXPR_ARG));
    /* newline significant, +/- is an operator. */
    rb_define_const(Ripper, "EXPR_CMDARG", INT2NUM(EXPR_CMDARG));
    /* newline significant, +/- is an operator. */
    rb_define_const(Ripper, "EXPR_MID", INT2NUM(EXPR_MID));
    /* ignore newline, no reserved words. */
    rb_define_const(Ripper, "EXPR_FNAME", INT2NUM(EXPR_FNAME));
    /* right after `.' or `::', no reserved words. */
    rb_define_const(Ripper, "EXPR_DOT", INT2NUM(EXPR_DOT));
    /* immediate after `class', no here document. */
    rb_define_const(Ripper, "EXPR_CLASS", INT2NUM(EXPR_CLASS));
    /* flag bit, label is allowed. */
    rb_define_const(Ripper, "EXPR_LABEL", INT2NUM(EXPR_LABEL));
    /* flag bit, just after a label. */
    rb_define_const(Ripper, "EXPR_LABELED", INT2NUM(EXPR_LABELED));
    /* symbol literal as FNAME. */
    rb_define_const(Ripper, "EXPR_FITEM", INT2NUM(EXPR_FITEM));
    /* equals to +EXPR_BEG+ */
    rb_define_const(Ripper, "EXPR_VALUE", INT2NUM(EXPR_VALUE));
    /* equals to <tt>(EXPR_BEG | EXPR_MID | EXPR_CLASS)</tt> */
    rb_define_const(Ripper, "EXPR_BEG_ANY", INT2NUM(EXPR_BEG_ANY));
    /* equals to <tt>(EXPR_ARG | EXPR_CMDARG)</tt> */
    rb_define_const(Ripper, "EXPR_ARG_ANY", INT2NUM(EXPR_ARG_ANY));
    /* equals to <tt>(EXPR_END | EXPR_ENDARG | EXPR_ENDFN)</tt> */
    rb_define_const(Ripper, "EXPR_END_ANY", INT2NUM(EXPR_END_ANY));
    /* equals to +0+ */
    rb_define_const(Ripper, "EXPR_NONE", INT2NUM(EXPR_NONE));

    ripper_init_eventids1_table(Ripper);
    ripper_init_eventids2_table(Ripper);

# if 0
    /* Hack to let RDoc document SCRIPT_LINES__ */

    /*
     * When a Hash is assigned to +SCRIPT_LINES__+ the contents of files loaded
     * after the assignment will be added as an Array of lines with the file
     * name as the key.
     */
    rb_define_global_const("SCRIPT_LINES__", Qnil);
#endif

}
#endif /* RIPPER */

/*
 * Local variables:
 * mode: c
 * c-file-style: "ruby"
 * End:
 */

