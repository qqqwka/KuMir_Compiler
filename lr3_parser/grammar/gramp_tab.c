
/*  A Bison parser, made from gramp.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	ALG	258
#define	BEGIN	259
#define	END	260
#define	ARG	261
#define	RES	262
#define	ARGRES	263
#define	DANO	264
#define	NADO	265
#define	NS	266
#define	ENDL	267
#define	INT	268
#define	FLOAT	269
#define	BOOL	270
#define	CHAR	271
#define	STRING	272
#define	TAB	273
#define	INTTAB	274
#define	FLOATTAB	275
#define	BOOLTAB	276
#define	CHARTAB	277
#define	STRINGTAB	278
#define	ID	279
#define	INPUT	280
#define	OUTPUT	281
#define	NOT	282
#define	IF	283
#define	THEN	284
#define	ELSE	285
#define	CYCLE_BEGIN	286
#define	CYCLE_END	287
#define	CYCLE_END_IF	288
#define	DONE	289
#define	STEP	290
#define	FROM	291
#define	TO	292
#define	SWITCH	293
#define	CASE	294
#define	WHILE	295
#define	FOR	296
#define	TIMES	297
#define	INT_LITERAL	298
#define	FLOAT_LITERAL	299
#define	CHAR_LITERAL	300
#define	STRING_LITERAL	301
#define	BOOL_LITERAL	302
#define	ASSIGN	303
#define	OR	304
#define	AND	305
#define	NOT_EQUAL	306
#define	GREATER_EQUAL	307
#define	LESS_EQUAL	308
#define	UMINUS	309
#define	UPLUS	310
#define	POW	311


#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		275
#define	YYFLAG		-32768
#define	YYNTBASE	70

#define YYTRANSLATE(x) ((unsigned)(x) <= 311 ? yytranslate[x] : 101)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,    66,
    67,    61,    59,    48,    60,     2,    62,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,    58,     2,    55,
    52,    54,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
    68,     2,    69,     2,     2,     2,     2,     2,     2,     2,
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
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    49,    50,    51,    53,    56,    57,    63,    64,
    65
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     3,     5,     8,    10,    12,    13,    16,    18,    22,
    24,    26,    31,    33,    37,    39,    41,    43,    45,    47,
    49,    51,    54,    58,    61,    65,    69,    74,    80,    87,
    95,   103,   113,   120,   128,   139,   151,   164,   178,   184,
   193,   199,   206,   207,   209,   211,   214,   216,   220,   222,
   224,   226,   228,   230,   235,   237,   241,   245,   249,   253,
   257,   261,   265,   269,   273,   277,   281,   285,   288,   291,
   296,   303,   306,   308,   310,   312,   314,   316,   318,   320,
   322,   324,   326,   329,   336,   346,   356,   369,   378,   390,
   402,   417,   425,   436,   447,   461,   464,   472,   484,   486,
   490,   492,   497,   502,   503,   507,   509,   513,   515,   517,
   519,   521
};

static const short yyrhs[] = {    86,
    71,     0,    91,     0,    71,    72,     0,    92,     0,    93,
     0,     0,    74,    86,     0,    75,     0,    74,    86,    75,
     0,    76,     0,    77,     0,    24,    66,    87,    67,     0,
    24,     0,    88,    49,    88,     0,    78,     0,    81,     0,
    82,     0,    80,     0,    79,     0,    83,     0,    96,     0,
    25,    24,     0,    76,    48,    24,     0,    26,    88,     0,
    77,    48,    88,     0,    77,    48,    11,     0,    31,    86,
    73,    32,     0,    31,    86,    73,    33,    75,     0,    31,
    88,    42,    86,    73,    32,     0,    31,    88,    42,    86,
    73,    33,    75,     0,    28,    75,    86,    29,    86,    73,
    34,     0,    28,    75,    86,    29,    86,    73,    30,    73,
    34,     0,    31,    40,    88,    86,    73,    32,     0,    31,
    40,    88,    86,    73,    33,    75,     0,    31,    41,    24,
    36,    88,    37,    88,    86,    73,    32,     0,    31,    41,
    24,    36,    88,    37,    88,    86,    73,    33,    75,     0,
    31,    41,    24,    36,    88,    37,    88,    35,    88,    86,
    73,    32,     0,    31,    41,    24,    36,    88,    37,    88,
    35,    88,    86,    73,    33,    75,     0,    38,    88,    86,
    84,    34,     0,    38,    88,    86,    84,    30,    88,    86,
    34,     0,    39,    88,    58,    86,    73,     0,    84,    39,
    88,    58,    86,    73,     0,     0,    86,     0,    12,     0,
    86,    12,     0,    88,     0,    87,    48,    88,     0,    43,
     0,    45,     0,    44,     0,    46,     0,    47,     0,    24,
    66,    87,    67,     0,    24,     0,    88,    59,    88,     0,
    88,    60,    88,     0,    88,    61,    88,     0,    88,    62,
    88,     0,    88,    55,    88,     0,    88,    54,    88,     0,
    88,    51,    88,     0,    88,    50,    88,     0,    88,    56,
    88,     0,    88,    57,    88,     0,    88,    53,    88,     0,
    88,    52,    88,     0,    60,    88,     0,    59,    88,     0,
    88,    68,    88,    69,     0,    88,    68,    88,    58,    88,
    69,     0,    27,    88,     0,    15,     0,    16,     0,    14,
     0,    13,     0,    17,     0,    19,     0,    20,     0,    21,
     0,    22,     0,    23,     0,    89,    18,     0,     3,    97,
    86,     4,    73,     5,     0,     3,    97,    86,     9,    88,
    86,     4,    73,     5,     0,     3,    97,    86,    10,    88,
    86,     4,    73,     5,     0,     3,    97,    86,     9,    88,
    86,    10,    88,    86,     4,    73,     5,     0,     3,    89,
    24,    97,    86,     4,    73,     5,     0,     3,    89,    24,
    97,    86,     9,    88,    86,     4,    73,     5,     0,     3,
    89,    24,    97,    86,    10,    88,    86,     4,    73,     5,
     0,     3,    89,    24,    97,    86,     9,    88,    86,    10,
    88,    86,     4,    73,     5,     0,     3,    24,    97,    86,
     4,    73,     5,     0,     3,    24,    97,    86,     9,    88,
    86,     4,    73,     5,     0,     3,    24,    97,    86,    10,
    88,    86,     4,    73,     5,     0,     3,    24,    97,    86,
     9,    88,    86,    10,    88,    86,     4,    73,     5,     0,
    89,    24,     0,    90,    24,    68,    88,    58,    88,    69,
     0,    90,    24,    68,    88,    58,    88,    48,    88,    58,
    88,    69,     0,    94,     0,    94,    49,    88,     0,    95,
     0,    96,    48,    85,    95,     0,    96,    48,    85,    24,
     0,     0,    66,    98,    67,     0,   100,     0,    98,    48,
   100,     0,     6,     0,     7,     0,     8,     0,    94,     0,
    99,    94,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    24,    27,    28,    31,    32,    35,    36,    39,    40,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    57,    58,    61,    62,    63,    66,    67,    70,    71,
    74,    75,    78,    79,    82,    83,    84,    85,    88,    89,
    92,    93,    96,    97,   100,   101,   104,   105,   108,   109,
   110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
   120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
   130,   131,   135,   136,   137,   138,   139,   142,   143,   144,
   145,   146,   147,   150,   151,   152,   153,   156,   157,   158,
   159,   162,   163,   164,   165,   168,   169,   170,   173,   174,
   177,   178,   179,   182,   183,   186,   187,   190,   191,   192,
   195,   196
};

static const char * const yytname[] = {   "$","error","$undefined.","ALG","BEGIN",
"END","ARG","RES","ARGRES","DANO","NADO","NS","ENDL","INT","FLOAT","BOOL","CHAR",
"STRING","TAB","INTTAB","FLOATTAB","BOOLTAB","CHARTAB","STRINGTAB","ID","INPUT",
"OUTPUT","NOT","IF","THEN","ELSE","CYCLE_BEGIN","CYCLE_END","CYCLE_END_IF","DONE",
"STEP","FROM","TO","SWITCH","CASE","WHILE","FOR","TIMES","INT_LITERAL","FLOAT_LITERAL",
"CHAR_LITERAL","STRING_LITERAL","BOOL_LITERAL","','","ASSIGN","OR","AND","'='",
"NOT_EQUAL","'>'","'<'","GREATER_EQUAL","LESS_EQUAL","':'","'+'","'-'","'*'",
"'/'","UMINUS","UPLUS","POW","'('","')'","'['","']'","Program","ProgramElementList",
"ProgramElement","BlockStatement","StatementList","Statement","InputList","OutputList",
"CycleStatement","TimesStatement","IfStatement","WhileStatement","ForStatement",
"SwitchCaseStatement","CaseList","EndlOpt","EndlList","ExpressionList","Expression",
"Type","ArrType","AlgorithmImplementation","AlgorithmFunctionImplementation",
"AlgorithmProcedureImplementation","VarDeclaration","Var","VarList","ParamDeclarationList",
"ParamList","ParamModifier","Param",""
};
#endif

static const short yyr1[] = {     0,
    70,    71,    71,    72,    72,    73,    73,    74,    74,    75,
    75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
    75,    76,    76,    77,    77,    77,    78,    78,    79,    79,
    80,    80,    81,    81,    82,    82,    82,    82,    83,    83,
    84,    84,    85,    85,    86,    86,    87,    87,    88,    88,
    88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
    88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
    88,    88,    89,    89,    89,    89,    89,    90,    90,    90,
    90,    90,    90,    91,    91,    91,    91,    92,    92,    92,
    92,    93,    93,    93,    93,    94,    94,    94,    95,    95,
    96,    96,    96,    97,    97,    98,    98,    99,    99,    99,
   100,   100
};

static const short yyr2[] = {     0,
     2,     1,     2,     1,     1,     0,     2,     1,     3,     1,
     1,     4,     1,     3,     1,     1,     1,     1,     1,     1,
     1,     2,     3,     2,     3,     3,     4,     5,     6,     7,
     7,     9,     6,     7,    10,    11,    12,    13,     5,     8,
     5,     6,     0,     1,     1,     2,     1,     3,     1,     1,
     1,     1,     1,     4,     1,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     2,     2,     4,
     6,     2,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     2,     6,     9,     9,    12,     8,    11,    11,
    14,     7,    10,    10,    13,     2,     7,    11,     1,     3,
     1,     4,     4,     0,     3,     1,     3,     1,     1,     1,
     1,     2
};

static const short yydefact[] = {     0,
    45,     0,   104,    46,     1,     2,     0,     0,     0,     3,
     4,     5,   108,   109,   110,    76,    75,    73,    74,    77,
    78,    79,    80,    81,    82,     0,     0,   111,     0,     0,
   106,     0,   104,     0,    83,    96,     0,     0,   105,   112,
     6,     0,     0,     0,   104,     0,   107,    55,     0,     0,
     0,     0,     0,     0,    49,    51,    50,    52,    53,     0,
     0,     0,     0,     8,    10,    11,    15,    19,    18,    16,
    17,    20,     0,    99,   101,    21,    55,     0,     0,     0,
     0,     0,     0,    22,    24,    72,     0,     0,     0,     6,
     0,     0,    69,    68,    84,     7,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    43,     0,     0,     0,     6,     0,     0,
     0,     0,     0,    47,     0,     0,     0,     0,     0,     0,
     9,    23,    26,    25,    14,    63,    62,    67,    66,    61,
    60,    64,    65,    56,    57,    58,    59,     0,   100,     0,
    44,     0,     6,     0,     6,     0,     0,     0,     6,     0,
     0,     0,     0,    54,     0,     6,     0,    27,     0,     6,
     0,     0,     0,    70,   103,   102,    54,     0,     0,     0,
    92,     0,     0,     0,     0,     0,     0,    97,    48,     6,
     0,     0,    28,     0,     0,     0,    39,     0,     0,    85,
     0,    86,     6,     0,     6,    88,     0,     0,     0,     0,
    33,     0,     0,    29,     0,     0,     0,     0,    71,     6,
     0,     0,     0,     6,     0,     6,     0,     6,    31,    34,
     0,    30,     6,     0,     0,     0,    93,     0,    94,     0,
     0,     0,     0,     0,     0,     6,    41,    40,     6,    87,
     6,    89,     0,    90,    98,    32,     0,     0,    42,     0,
     6,     6,    35,     0,    95,     0,     0,    36,    91,    37,
     0,    38,     0,     0,     0
};

static const short yydefgoto[] = {   273,
     5,    10,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,   172,   150,     2,   123,    73,    26,    27,
     6,    11,    12,    74,    75,    76,     8,    29,    30,    31
};

static const short yypact[] = {     2,
-32768,     3,   -47,-32768,    50,-32768,    94,     2,   138,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,    58,    45,-32768,   -37,   394,
-32768,    42,   -47,    61,-32768,-32768,    26,    94,-32768,-32768,
   407,   -22,   -22,     2,   -47,   -22,-32768,    -2,    75,   -22,
   -22,   407,   278,   -22,-32768,-32768,-32768,-32768,-32768,   -22,
   -22,    98,     2,-32768,    57,    74,-32768,-32768,-32768,-32768,
-32768,-32768,   499,    70,-32768,    78,    67,    36,    36,    68,
     2,   558,   -22,-32768,   634,    88,     2,   -22,   119,   359,
   439,    36,    88,    88,-32768,   359,   146,   101,   -22,   -22,
   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
   -22,   -22,   -22,     2,   -22,    71,     5,   407,   -22,   -22,
   163,   -22,   -36,   634,     4,    36,   159,   107,     2,   -11,
-32768,-32768,-32768,   634,   634,   652,   290,   227,   227,   145,
   145,   145,   145,    97,    97,    88,    88,   478,   634,   702,
   185,   -35,   407,   -22,   407,   194,    36,    36,   407,   -22,
   -22,   458,   -22,   200,     2,   359,   -22,-32768,   407,   359,
   -22,    10,   -22,-32768,-32768,-32768,-32768,   213,    36,   225,
-32768,   126,    22,   226,    36,    36,   -22,-32768,   634,   359,
   184,   418,-32768,   188,   577,   -22,-32768,   -22,   518,-32768,
    38,-32768,   407,   -22,   407,-32768,   164,   125,   596,     9,
-32768,   407,   -22,-32768,   407,     2,    36,   615,-32768,   407,
   229,    36,   231,   407,   -22,   407,   -22,   407,-32768,-32768,
     6,-32768,   359,    -5,     2,   232,-32768,   198,-32768,   233,
    36,   234,   538,   206,   -22,   359,-32768,-32768,   359,-32768,
   407,-32768,   207,-32768,-32768,-32768,    36,   192,-32768,   238,
   407,   359,-32768,   407,-32768,   240,   196,-32768,-32768,-32768,
   407,-32768,   246,   247,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,   108,-32768,   -49,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,    -8,   117,    81,   241,-32768,
-32768,-32768,-32768,    -3,   103,-32768,   -25,-32768,-32768,   217
};


#define	YYLAST		726


static const short yytable[] = {    32,
     4,    77,    87,    28,    51,     3,     4,    44,   155,   -13,
    38,   163,   163,     1,     4,     4,     4,     1,     7,    81,
    55,    56,    57,    58,    59,   205,    40,   171,   248,    39,
   164,   177,   165,     4,    28,    80,    60,    61,   228,   196,
   245,   220,   229,   197,    90,    41,   131,     1,   198,     4,
    42,    43,     9,     4,    96,   100,   101,   102,   103,   104,
   105,   106,   107,    83,   108,   109,   110,   111,    37,   116,
   117,   118,   121,   112,   153,    35,   119,   120,   125,     4,
   154,    36,     4,   130,    45,   100,   101,   102,   103,   104,
   105,   106,   107,    46,   108,   109,   110,   111,    84,    13,
    14,    15,    95,   112,    97,   151,    16,    17,    18,    19,
    20,   133,    21,    22,    23,    24,    25,   166,   113,   193,
   170,    98,    78,    79,    77,   114,    82,    51,   226,   203,
    85,    86,   115,    91,    92,   204,     4,     4,   168,   169,
    93,    94,   127,    55,    56,    57,    58,    59,   182,   183,
    16,    17,    18,    19,    20,   112,   190,   110,   111,    60,
    61,    33,   230,   124,   112,   232,   159,   224,   126,   132,
   201,   160,   161,   225,     4,     4,   207,   208,   134,   135,
   136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   167,   124,     4,   128,   181,   157,
   158,   251,   162,   108,   109,   110,   111,   233,   234,     4,
   261,   -12,   112,   238,   268,   211,   212,   200,     4,   214,
   215,   272,   246,   263,   264,   156,   249,   270,   271,   202,
   206,   152,   253,   237,   179,   239,   250,   252,   254,   256,
   185,   186,   265,   189,   269,   274,   275,   192,   262,    34,
     0,   195,   176,   199,    47,     0,     0,     0,     0,     0,
   178,     0,   180,     0,     0,     0,   184,   209,     0,     0,
     0,     0,     0,   191,     0,     0,   217,   194,   218,     0,
   104,   105,   106,   107,   222,   108,   109,   110,   111,     1,
     0,     0,     0,   231,   112,     0,     0,   210,     0,     0,
     0,    77,     0,     0,    51,   241,     0,   243,     0,     0,
   221,     0,   223,     0,     0,     0,     0,    88,    89,     0,
    55,    56,    57,    58,    59,   257,     0,   236,     0,     0,
     0,   240,     0,   242,     0,   244,    60,    61,     0,     0,
   247,   102,   103,   104,   105,   106,   107,     0,   108,   109,
   110,   111,     0,   258,     0,     0,   259,   112,   260,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   266,   267,
     4,    16,    17,    18,    19,    20,     0,    21,    22,    23,
    24,    25,    48,    49,    50,    51,    52,     0,     0,    53,
     0,     0,     0,     0,     0,     0,    54,     0,     0,     0,
     0,    55,    56,    57,    58,    59,    16,    17,    18,    19,
    20,     0,    21,    22,    23,    24,    25,    60,    61,    16,
    17,    18,    19,    20,     0,    21,    22,    23,    24,    25,
    48,    49,    50,    51,    52,     0,     0,    53,     0,     0,
     0,     0,     0,     0,    54,     0,     0,     0,     0,    55,
    56,    57,    58,    59,   213,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    60,    61,   100,   101,   102,
   103,   104,   105,   106,   107,     0,   108,   109,   110,   111,
   129,     0,     0,     0,     0,   112,     0,     0,   100,   101,
   102,   103,   104,   105,   106,   107,     0,   108,   109,   110,
   111,     0,     0,     0,     0,   187,   112,   100,   101,   102,
   103,   104,   105,   106,   107,     0,   108,   109,   110,   111,
     0,     0,     0,     0,     0,   112,   188,   100,   101,   102,
   103,   104,   105,   106,   107,   173,   108,   109,   110,   111,
     0,     0,     0,     0,     0,   112,   174,    99,   100,   101,
   102,   103,   104,   105,   106,   107,     0,   108,   109,   110,
   111,     0,     0,     0,     0,     0,   112,   100,   101,   102,
   103,   104,   105,   106,   107,     0,   108,   109,   110,   111,
     0,     0,     0,     0,     0,   112,   219,   100,   101,   102,
   103,   104,   105,   106,   107,     0,   108,   109,   110,   111,
     0,     0,     0,     0,     0,   112,   255,   100,   101,   102,
   103,   104,   105,   106,   107,   122,   108,   109,   110,   111,
     0,     0,     0,     0,     0,   112,   100,   101,   102,   103,
   104,   105,   106,   107,   216,   108,   109,   110,   111,     0,
     0,     0,     0,     0,   112,   100,   101,   102,   103,   104,
   105,   106,   107,   227,   108,   109,   110,   111,     0,     0,
     0,     0,     0,   112,   100,   101,   102,   103,   104,   105,
   106,   107,   235,   108,   109,   110,   111,     0,     0,     0,
     0,     0,   112,   100,   101,   102,   103,   104,   105,   106,
   107,     0,   108,   109,   110,   111,     0,     0,     0,     0,
     0,   112,   101,   102,   103,   104,   105,   106,   107,     0,
   108,   109,   110,   111,    16,    17,    18,    19,    20,   112,
    21,    22,    23,    24,    25,   175
};

static const short yycheck[] = {     8,
    12,    24,    52,     7,    27,     3,    12,    33,     4,    12,
    48,    48,    48,    12,    12,    12,    12,    12,    66,    45,
    43,    44,    45,    46,    47,     4,    30,    39,    34,    67,
    67,    67,    29,    12,    38,    44,    59,    60,    30,    30,
    35,     4,    34,    34,    53,     4,    96,    12,    39,    12,
     9,    10,     3,    12,    63,    50,    51,    52,    53,    54,
    55,    56,    57,    66,    59,    60,    61,    62,    24,    78,
    79,     4,    81,    68,     4,    18,     9,    10,    87,    12,
    10,    24,    12,    92,    24,    50,    51,    52,    53,    54,
    55,    56,    57,    68,    59,    60,    61,    62,    24,     6,
     7,     8,     5,    68,    48,   114,    13,    14,    15,    16,
    17,    11,    19,    20,    21,    22,    23,   126,    49,   169,
   129,    48,    42,    43,    24,    48,    46,    27,     4,     4,
    50,    51,    66,    53,    54,    10,    12,    12,    32,    33,
    60,    61,    24,    43,    44,    45,    46,    47,   157,   158,
    13,    14,    15,    16,    17,    68,   165,    61,    62,    59,
    60,    24,   212,    83,    68,   215,     4,     4,    88,    24,
   179,     9,    10,    10,    12,    12,   185,   186,    98,    99,
   100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
   110,   111,   112,   113,    36,   115,    12,    90,     5,   119,
   120,     4,   122,    59,    60,    61,    62,   216,   217,    12,
     4,    12,    68,   222,   264,    32,    33,     5,    12,    32,
    33,   271,   231,    32,    33,   118,   235,    32,    33,     5,
     5,   115,   241,     5,   154,     5,     5,     5,     5,    34,
   160,   161,     5,   163,     5,     0,     0,   167,   257,     9,
    -1,   171,   150,   173,    38,    -1,    -1,    -1,    -1,    -1,
   153,    -1,   155,    -1,    -1,    -1,   159,   187,    -1,    -1,
    -1,    -1,    -1,   166,    -1,    -1,   196,   170,   198,    -1,
    54,    55,    56,    57,   204,    59,    60,    61,    62,    12,
    -1,    -1,    -1,   213,    68,    -1,    -1,   190,    -1,    -1,
    -1,    24,    -1,    -1,    27,   225,    -1,   227,    -1,    -1,
   203,    -1,   205,    -1,    -1,    -1,    -1,    40,    41,    -1,
    43,    44,    45,    46,    47,   245,    -1,   220,    -1,    -1,
    -1,   224,    -1,   226,    -1,   228,    59,    60,    -1,    -1,
   233,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
    61,    62,    -1,   246,    -1,    -1,   249,    68,   251,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   261,   262,
    12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    -1,    -1,    31,
    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
    -1,    43,    44,    45,    46,    47,    13,    14,    15,    16,
    17,    -1,    19,    20,    21,    22,    23,    59,    60,    13,
    14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    -1,    -1,    31,    -1,    -1,
    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    43,
    44,    45,    46,    47,    37,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    59,    60,    50,    51,    52,
    53,    54,    55,    56,    57,    -1,    59,    60,    61,    62,
    42,    -1,    -1,    -1,    -1,    68,    -1,    -1,    50,    51,
    52,    53,    54,    55,    56,    57,    -1,    59,    60,    61,
    62,    -1,    -1,    -1,    -1,    48,    68,    50,    51,    52,
    53,    54,    55,    56,    57,    -1,    59,    60,    61,    62,
    -1,    -1,    -1,    -1,    -1,    68,    69,    50,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    -1,    -1,    -1,    -1,    -1,    68,    69,    49,    50,    51,
    52,    53,    54,    55,    56,    57,    -1,    59,    60,    61,
    62,    -1,    -1,    -1,    -1,    -1,    68,    50,    51,    52,
    53,    54,    55,    56,    57,    -1,    59,    60,    61,    62,
    -1,    -1,    -1,    -1,    -1,    68,    69,    50,    51,    52,
    53,    54,    55,    56,    57,    -1,    59,    60,    61,    62,
    -1,    -1,    -1,    -1,    -1,    68,    69,    50,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    -1,    -1,    -1,    -1,    -1,    68,    50,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
    -1,    -1,    -1,    -1,    68,    50,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
    -1,    -1,    -1,    68,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    -1,    -1,    -1,
    -1,    -1,    68,    50,    51,    52,    53,    54,    55,    56,
    57,    -1,    59,    60,    61,    62,    -1,    -1,    -1,    -1,
    -1,    68,    51,    52,    53,    54,    55,    56,    57,    -1,
    59,    60,    61,    62,    13,    14,    15,    16,    17,    68,
    19,    20,    21,    22,    23,    24
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

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
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(FROM,TO,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (from, to, count)
     char *from;
     char *to;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *from, char *to, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 192 "bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#else
#define YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#endif

int
yyparse(YYPARSE_PARAM)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

}
   /* the action file gets copied in in place of this dollarsign */
#line 487 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 197 "gramp.y"
