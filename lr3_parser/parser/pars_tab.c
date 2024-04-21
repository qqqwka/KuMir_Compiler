
/*  A Bison parser, made from pars.y with Bison version GNU Bison version 1.24
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
#define	TRUE	282
#define	FALSE	283
#define	NOT	284
#define	IF	285
#define	THEN	286
#define	ELSE	287
#define	CYCLE_BEGIN	288
#define	CYCLE_END	289
#define	CYCLE_END_IF	290
#define	DONE	291
#define	STEP	292
#define	FROM	293
#define	TO	294
#define	SWITCH	295
#define	CASE	296
#define	WHILE	297
#define	FOR	298
#define	TIMES	299
#define	INT_LITERAL	300
#define	FLOAT_LITERAL	301
#define	CHAR_LITERAL	302
#define	STRING_LITERAL	303
#define	BOOL_LITERAL	304
#define	ASSIGN	305
#define	OR	306
#define	AND	307
#define	NOT_EQUAL	308
#define	GREATER_EQUAL	309
#define	LESS_EQUAL	310
#define	UMINUS	311
#define	UPLUS	312
#define	POW	313


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



#define	YYFINAL		277
#define	YYFLAG		-32768
#define	YYNTBASE	72

#define YYTRANSLATE(x) ((unsigned)(x) <= 313 ? yytranslate[x] : 103)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,    68,
    69,    63,    61,    50,    62,     2,    64,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,    60,     2,    57,
    54,    56,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
    70,     2,    71,     2,     2,     2,     2,     2,     2,     2,
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
    46,    47,    48,    49,    51,    52,    53,    55,    58,    59,
    65,    66,    67
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     3,     5,     8,    10,    12,    13,    16,    18,    22,
    24,    26,    31,    33,    37,    39,    41,    43,    45,    47,
    49,    51,    54,    58,    61,    65,    69,    74,    80,    87,
    95,   103,   113,   120,   128,   139,   151,   164,   178,   184,
   193,   199,   206,   207,   209,   211,   214,   216,   220,   222,
   224,   226,   228,   230,   235,   237,   241,   245,   249,   253,
   257,   261,   265,   269,   273,   277,   281,   285,   289,   292,
   295,   300,   307,   310,   312,   314,   316,   318,   320,   322,
   324,   326,   328,   330,   333,   340,   350,   360,   373,   382,
   394,   406,   421,   429,   440,   451,   465,   468,   476,   488,
   490,   494,   496,   501,   506,   507,   511,   513,   517,   519,
   521,   523,   525
};

static const short yyrhs[] = {    88,
    73,     0,    93,     0,    73,    74,     0,    94,     0,    95,
     0,     0,    76,    88,     0,    77,     0,    76,    88,    77,
     0,    78,     0,    79,     0,    24,    68,    89,    69,     0,
    24,     0,    90,    51,    90,     0,    80,     0,    83,     0,
    84,     0,    82,     0,    81,     0,    85,     0,    98,     0,
    25,    24,     0,    78,    50,    24,     0,    26,    90,     0,
    79,    50,    90,     0,    79,    50,    11,     0,    33,    88,
    75,    34,     0,    33,    88,    75,    35,    77,     0,    33,
    90,    44,    88,    75,    34,     0,    33,    90,    44,    88,
    75,    35,    77,     0,    30,    77,    88,    31,    88,    75,
    36,     0,    30,    77,    88,    31,    88,    75,    32,    75,
    36,     0,    33,    42,    90,    88,    75,    34,     0,    33,
    42,    90,    88,    75,    35,    77,     0,    33,    43,    24,
    38,    90,    39,    90,    88,    75,    34,     0,    33,    43,
    24,    38,    90,    39,    90,    88,    75,    35,    77,     0,
    33,    43,    24,    38,    90,    39,    90,    37,    90,    88,
    75,    34,     0,    33,    43,    24,    38,    90,    39,    90,
    37,    90,    88,    75,    35,    77,     0,    40,    90,    88,
    86,    36,     0,    40,    90,    88,    86,    32,    90,    88,
    36,     0,    41,    90,    60,    88,    75,     0,    86,    41,
    90,    60,    88,    75,     0,     0,    88,     0,    12,     0,
    88,    12,     0,    90,     0,    89,    50,    90,     0,    45,
     0,    47,     0,    46,     0,    48,     0,    49,     0,    24,
    68,    89,    69,     0,    24,     0,    90,    61,    90,     0,
    90,    62,    90,     0,    90,    63,    90,     0,    90,    64,
    90,     0,    90,    57,    90,     0,    90,    56,    90,     0,
    90,    67,    90,     0,    90,    53,    90,     0,    90,    52,
    90,     0,    90,    58,    90,     0,    90,    59,    90,     0,
    90,    55,    90,     0,    90,    54,    90,     0,    62,    90,
     0,    61,    90,     0,    90,    70,    90,    71,     0,    90,
    70,    90,    60,    90,    71,     0,    29,    90,     0,    15,
     0,    16,     0,    14,     0,    13,     0,    17,     0,    19,
     0,    20,     0,    21,     0,    22,     0,    23,     0,    91,
    18,     0,     3,    99,    88,     4,    75,     5,     0,     3,
    99,    88,     9,    90,    88,     4,    75,     5,     0,     3,
    99,    88,    10,    90,    88,     4,    75,     5,     0,     3,
    99,    88,     9,    90,    88,    10,    90,    88,     4,    75,
     5,     0,     3,    91,    24,    99,    88,     4,    75,     5,
     0,     3,    91,    24,    99,    88,     9,    90,    88,     4,
    75,     5,     0,     3,    91,    24,    99,    88,    10,    90,
    88,     4,    75,     5,     0,     3,    91,    24,    99,    88,
     9,    90,    88,    10,    90,    88,     4,    75,     5,     0,
     3,    24,    99,    88,     4,    75,     5,     0,     3,    24,
    99,    88,     9,    90,    88,     4,    75,     5,     0,     3,
    24,    99,    88,    10,    90,    88,     4,    75,     5,     0,
     3,    24,    99,    88,     9,    90,    88,    10,    90,    88,
     4,    75,     5,     0,    91,    24,     0,    92,    24,    70,
    90,    60,    90,    71,     0,    92,    24,    70,    90,    60,
    90,    50,    90,    60,    90,    71,     0,    96,     0,    96,
    51,    90,     0,    97,     0,    98,    50,    87,    97,     0,
    98,    50,    87,    24,     0,     0,    68,   100,    69,     0,
   102,     0,   100,    50,   102,     0,     6,     0,     7,     0,
     8,     0,    96,     0,   101,    96,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   117,   120,   121,   124,   125,   128,   129,   132,   133,   136,
   137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   150,   151,   154,   155,   156,   159,   160,   163,   164,
   167,   168,   171,   172,   175,   176,   177,   178,   181,   182,
   185,   186,   189,   190,   193,   194,   197,   198,   201,   202,
   203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
   213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
   223,   224,   225,   229,   230,   231,   232,   233,   236,   237,
   238,   239,   240,   241,   244,   245,   246,   247,   250,   251,
   252,   253,   256,   257,   258,   259,   262,   263,   264,   267,
   268,   271,   272,   273,   276,   277,   280,   281,   284,   285,
   286,   289,   290
};

static const char * const yytname[] = {   "$","error","$undefined.","ALG","BEGIN",
"END","ARG","RES","ARGRES","DANO","NADO","NS","ENDL","INT","FLOAT","BOOL","CHAR",
"STRING","TAB","INTTAB","FLOATTAB","BOOLTAB","CHARTAB","STRINGTAB","ID","INPUT",
"OUTPUT","TRUE","FALSE","NOT","IF","THEN","ELSE","CYCLE_BEGIN","CYCLE_END","CYCLE_END_IF",
"DONE","STEP","FROM","TO","SWITCH","CASE","WHILE","FOR","TIMES","INT_LITERAL",
"FLOAT_LITERAL","CHAR_LITERAL","STRING_LITERAL","BOOL_LITERAL","','","ASSIGN",
"OR","AND","'='","NOT_EQUAL","'>'","'<'","GREATER_EQUAL","LESS_EQUAL","':'",
"'+'","'-'","'*'","'/'","UMINUS","UPLUS","POW","'('","')'","'['","']'","Program",
"ProgramElementList","ProgramElement","BlockStatement","StatementList","Statement",
"InputList","OutputList","CycleStatement","TimesStatement","IfStatement","WhileStatement",
"ForStatement","SwitchCaseStatement","CaseList","EndlOpt","EndlList","ExpressionList",
"Expression","Type","ArrType","AlgorithmImplementation","AlgorithmFunctionImplementation",
"AlgorithmProcedureImplementation","VarDeclaration","Var","VarList","ParamDeclarationList",
"ParamList","ParamModifier","Param",""
};
#endif

static const short yyr1[] = {     0,
    72,    73,    73,    74,    74,    75,    75,    76,    76,    77,
    77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
    77,    78,    78,    79,    79,    79,    80,    80,    81,    81,
    82,    82,    83,    83,    84,    84,    84,    84,    85,    85,
    86,    86,    87,    87,    88,    88,    89,    89,    90,    90,
    90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
    90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
    90,    90,    90,    91,    91,    91,    91,    91,    92,    92,
    92,    92,    92,    92,    93,    93,    93,    93,    94,    94,
    94,    94,    95,    95,    95,    95,    96,    96,    96,    97,
    97,    98,    98,    98,    99,    99,   100,   100,   101,   101,
   101,   102,   102
};

static const short yyr2[] = {     0,
     2,     1,     2,     1,     1,     0,     2,     1,     3,     1,
     1,     4,     1,     3,     1,     1,     1,     1,     1,     1,
     1,     2,     3,     2,     3,     3,     4,     5,     6,     7,
     7,     9,     6,     7,    10,    11,    12,    13,     5,     8,
     5,     6,     0,     1,     1,     2,     1,     3,     1,     1,
     1,     1,     1,     4,     1,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
     4,     6,     2,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     2,     6,     9,     9,    12,     8,    11,
    11,    14,     7,    10,    10,    13,     2,     7,    11,     1,
     3,     1,     4,     4,     0,     3,     1,     3,     1,     1,
     1,     1,     2
};

static const short yydefact[] = {     0,
    45,     0,   105,    46,     1,     2,     0,     0,     0,     3,
     4,     5,   109,   110,   111,    77,    76,    74,    75,    78,
    79,    80,    81,    82,    83,     0,     0,   112,     0,     0,
   107,     0,   105,     0,    84,    97,     0,     0,   106,   113,
     6,     0,     0,     0,   105,     0,   108,    55,     0,     0,
     0,     0,     0,     0,    49,    51,    50,    52,    53,     0,
     0,     0,     0,     8,    10,    11,    15,    19,    18,    16,
    17,    20,     0,   100,   102,    21,    55,     0,     0,     0,
     0,     0,     0,    22,    24,    73,     0,     0,     0,     6,
     0,     0,    70,    69,    85,     7,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    43,     0,     0,     0,     6,     0,
     0,     0,     0,     0,    47,     0,     0,     0,     0,     0,
     0,     9,    23,    26,    25,    14,    64,    63,    68,    67,
    61,    60,    65,    66,    56,    57,    58,    59,    62,     0,
   101,     0,    44,     0,     6,     0,     6,     0,     0,     0,
     6,     0,     0,     0,     0,    54,     0,     6,     0,    27,
     0,     6,     0,     0,     0,    71,   104,   103,    54,     0,
     0,     0,    93,     0,     0,     0,     0,     0,     0,    98,
    48,     6,     0,     0,    28,     0,     0,     0,    39,     0,
     0,    86,     0,    87,     6,     0,     6,    89,     0,     0,
     0,     0,    33,     0,     0,    29,     0,     0,     0,     0,
    72,     6,     0,     0,     0,     6,     0,     6,     0,     6,
    31,    34,     0,    30,     6,     0,     0,     0,    94,     0,
    95,     0,     0,     0,     0,     0,     0,     6,    41,    40,
     6,    88,     6,    90,     0,    91,    99,    32,     0,     0,
    42,     0,     6,     6,    35,     0,    96,     0,     0,    36,
    92,    37,     0,    38,     0,     0,     0
};

static const short yydefgoto[] = {   275,
     5,    10,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,   174,   152,     2,   124,    73,    26,    27,
     6,    11,    12,    74,    75,    76,     8,    29,    30,    31
};

static const short yypact[] = {     2,
-32768,     9,   -50,-32768,    37,-32768,   686,     2,   133,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,    26,    27,-32768,   -39,   402,
-32768,    44,   -50,    50,-32768,-32768,     6,   686,-32768,-32768,
   415,   -23,   -23,     2,   -50,   -23,-32768,    -3,    54,   -23,
   -23,   415,   308,   -23,-32768,-32768,-32768,-32768,-32768,   -23,
   -23,   103,     2,-32768,    68,    71,-32768,-32768,-32768,-32768,
-32768,-32768,   486,    77,-32768,    82,    67,    34,    34,    73,
     2,   545,   -23,-32768,   621,    88,     2,   -23,   136,   365,
   426,    34,    36,    36,-32768,   365,   145,   116,   -23,   -23,
   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,
   -23,   -23,   -23,   -23,     2,   -23,   164,    16,   415,   -23,
   -23,    90,   -23,   -37,   621,     4,    34,   134,    46,     2,
   -10,-32768,-32768,-32768,   621,   621,   657,   674,    53,    53,
   151,   151,   151,   151,   170,   170,    36,    36,    88,   465,
   621,   732,   163,   -35,   415,   -23,   415,   193,    34,    34,
   415,   -23,   -23,   445,   -23,   205,     2,   365,   -23,-32768,
   415,   365,   -23,    11,   -23,-32768,-32768,-32768,-32768,   200,
    34,   215,-32768,   197,    25,   222,    34,    34,   -23,-32768,
   621,   365,   107,   238,-32768,   119,   564,   -23,-32768,   -23,
   505,-32768,   101,-32768,   415,   -23,   415,-32768,   218,   126,
   583,   -28,-32768,   415,   -23,-32768,   415,     2,    34,   602,
-32768,   415,   227,    34,   231,   415,   -23,   415,   -23,   415,
-32768,-32768,     5,-32768,   365,    -9,     2,   233,-32768,   127,
-32768,   236,    34,   237,   525,   207,   -23,   365,-32768,-32768,
   365,-32768,   415,-32768,   196,-32768,-32768,-32768,    34,   121,
-32768,   239,   415,   365,-32768,   415,-32768,   242,   189,-32768,
-32768,-32768,   415,-32768,   249,   250,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,   112,-32768,   -47,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,    -8,   137,    83,   245,-32768,
-32768,-32768,-32768,     3,   105,-32768,   -26,-32768,-32768,   217
};


#define	YYLAST		756


static const short yytable[] = {    32,
    77,     4,     4,   230,    87,    51,    44,   231,   -13,    28,
    38,     3,   165,     1,   165,     4,     1,     7,    81,   157,
     4,    55,    56,    57,    58,    59,   250,     4,   207,    39,
   173,   166,    40,   179,   167,    80,     4,    60,    61,     9,
    28,   247,   198,    35,    90,     1,   199,    41,   132,    36,
    37,   200,    42,    43,    96,     4,   100,   101,   102,   103,
   104,   105,   106,   107,    83,   108,   109,   110,   111,   117,
   118,   112,   122,    45,   113,    46,   119,    84,   126,   170,
   171,   120,   121,   131,     4,   100,   101,   102,   103,   104,
   105,   106,   107,   161,   108,   109,   110,   111,   162,   163,
   112,     4,   112,   113,   222,   113,   153,    95,   104,   105,
   106,   107,     4,   108,   109,   110,   111,    97,   168,   112,
    98,   172,   113,   195,    78,    79,   134,   114,    82,   228,
   253,   115,    85,    86,   116,    91,    92,     4,     4,    77,
   213,   214,    93,    94,    51,    16,    17,    18,    19,    20,
   184,   185,   216,   217,   265,   266,    33,   113,   192,   128,
    55,    56,    57,    58,    59,   125,   232,   155,   133,   234,
   127,   169,   203,   156,     4,     4,    60,    61,   209,   210,
   135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   183,   125,   263,
   205,   129,   159,   160,   202,   164,   206,     4,     4,   235,
   236,   108,   109,   110,   111,   240,   -12,   112,   270,   204,
   113,   226,   272,   273,   248,   274,   208,   227,   251,     4,
   158,   239,   110,   111,   255,   241,   112,   252,   181,   113,
   254,   256,   258,   267,   187,   188,   271,   191,   276,   277,
   264,   194,   154,    34,    47,   197,   178,   201,     0,     0,
     0,     0,     0,     0,     0,     0,   180,     0,   182,     0,
     0,   211,   186,     0,     0,     0,   215,     0,     0,   193,
   219,     0,   220,   196,     0,     0,     0,     0,   224,   100,
   101,   102,   103,   104,   105,   106,   107,   233,   108,   109,
   110,   111,     0,   212,   112,     0,     0,   113,     0,   243,
     0,   245,     0,     0,     0,     0,   223,     0,   225,     1,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   259,
     0,    77,     0,   238,     0,     0,    51,   242,     0,   244,
     0,   246,     0,     0,     0,     0,   249,     0,     0,    88,
    89,     0,    55,    56,    57,    58,    59,     0,     0,   260,
     0,     0,   261,     0,   262,     0,     0,     0,    60,    61,
     0,     0,     0,     0,   268,   269,     4,    16,    17,    18,
    19,    20,     0,    21,    22,    23,    24,    25,    48,    49,
    50,     0,     0,    51,    52,     0,     0,    53,     0,     0,
     0,     0,     0,     0,    54,     0,     0,     0,     0,    55,
    56,    57,    58,    59,    16,    17,    18,    19,    20,     0,
    21,    22,    23,    24,    25,    60,    61,    16,    17,    18,
    19,    20,     0,    21,    22,    23,    24,    25,    48,    49,
    50,     0,     0,    51,    52,     0,     0,    53,     0,     0,
     0,     0,     0,     0,    54,     0,     0,     0,     0,    55,
    56,    57,    58,    59,     0,     0,     0,     0,     0,   130,
     0,     0,     0,     0,     0,    60,    61,   100,   101,   102,
   103,   104,   105,   106,   107,     0,   108,   109,   110,   111,
     0,     0,   112,     0,   189,   113,   100,   101,   102,   103,
   104,   105,   106,   107,     0,   108,   109,   110,   111,     0,
     0,   112,     0,     0,   113,   190,   100,   101,   102,   103,
   104,   105,   106,   107,   175,   108,   109,   110,   111,     0,
     0,   112,     0,     0,   113,   176,    99,   100,   101,   102,
   103,   104,   105,   106,   107,     0,   108,   109,   110,   111,
     0,     0,   112,     0,     0,   113,   100,   101,   102,   103,
   104,   105,   106,   107,     0,   108,   109,   110,   111,     0,
     0,   112,     0,     0,   113,   221,   100,   101,   102,   103,
   104,   105,   106,   107,     0,   108,   109,   110,   111,     0,
     0,   112,     0,     0,   113,   257,   100,   101,   102,   103,
   104,   105,   106,   107,   123,   108,   109,   110,   111,     0,
     0,   112,     0,     0,   113,   100,   101,   102,   103,   104,
   105,   106,   107,   218,   108,   109,   110,   111,     0,     0,
   112,     0,     0,   113,   100,   101,   102,   103,   104,   105,
   106,   107,   229,   108,   109,   110,   111,     0,     0,   112,
     0,     0,   113,   100,   101,   102,   103,   104,   105,   106,
   107,   237,   108,   109,   110,   111,     0,     0,   112,     0,
     0,   113,   100,   101,   102,   103,   104,   105,   106,   107,
     0,   108,   109,   110,   111,     0,     0,   112,     0,     0,
   113,    13,    14,    15,     0,     0,     0,     0,    16,    17,
    18,    19,    20,     0,    21,    22,    23,    24,    25,   101,
   102,   103,   104,   105,   106,   107,     0,   108,   109,   110,
   111,     0,     0,   112,     0,     0,   113,   102,   103,   104,
   105,   106,   107,     0,   108,   109,   110,   111,     0,     0,
   112,     0,     0,   113,    16,    17,    18,    19,    20,     0,
    21,    22,    23,    24,    25,   177
};

static const short yycheck[] = {     8,
    24,    12,    12,    32,    52,    29,    33,    36,    12,     7,
    50,     3,    50,    12,    50,    12,    12,    68,    45,     4,
    12,    45,    46,    47,    48,    49,    36,    12,     4,    69,
    41,    69,    30,    69,    31,    44,    12,    61,    62,     3,
    38,    37,    32,    18,    53,    12,    36,     4,    96,    24,
    24,    41,     9,    10,    63,    12,    52,    53,    54,    55,
    56,    57,    58,    59,    68,    61,    62,    63,    64,    78,
    79,    67,    81,    24,    70,    70,     4,    24,    87,    34,
    35,     9,    10,    92,    12,    52,    53,    54,    55,    56,
    57,    58,    59,     4,    61,    62,    63,    64,     9,    10,
    67,    12,    67,    70,     4,    70,   115,     5,    56,    57,
    58,    59,    12,    61,    62,    63,    64,    50,   127,    67,
    50,   130,    70,   171,    42,    43,    11,    51,    46,     4,
     4,    50,    50,    51,    68,    53,    54,    12,    12,    24,
    34,    35,    60,    61,    29,    13,    14,    15,    16,    17,
   159,   160,    34,    35,    34,    35,    24,    70,   167,    24,
    45,    46,    47,    48,    49,    83,   214,     4,    24,   217,
    88,    38,   181,    10,    12,    12,    61,    62,   187,   188,
    98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
   108,   109,   110,   111,   112,   113,   114,     5,   116,     4,
     4,    90,   120,   121,     5,   123,    10,    12,    12,   218,
   219,    61,    62,    63,    64,   224,    12,    67,   266,     5,
    70,     4,    34,    35,   233,   273,     5,    10,   237,    12,
   119,     5,    63,    64,   243,     5,    67,     5,   156,    70,
     5,     5,    36,     5,   162,   163,     5,   165,     0,     0,
   259,   169,   116,     9,    38,   173,   152,   175,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,   157,    -1,
    -1,   189,   161,    -1,    -1,    -1,    39,    -1,    -1,   168,
   198,    -1,   200,   172,    -1,    -1,    -1,    -1,   206,    52,
    53,    54,    55,    56,    57,    58,    59,   215,    61,    62,
    63,    64,    -1,   192,    67,    -1,    -1,    70,    -1,   227,
    -1,   229,    -1,    -1,    -1,    -1,   205,    -1,   207,    12,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
    -1,    24,    -1,   222,    -1,    -1,    29,   226,    -1,   228,
    -1,   230,    -1,    -1,    -1,    -1,   235,    -1,    -1,    42,
    43,    -1,    45,    46,    47,    48,    49,    -1,    -1,   248,
    -1,    -1,   251,    -1,   253,    -1,    -1,    -1,    61,    62,
    -1,    -1,    -1,    -1,   263,   264,    12,    13,    14,    15,
    16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
    26,    -1,    -1,    29,    30,    -1,    -1,    33,    -1,    -1,
    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    45,
    46,    47,    48,    49,    13,    14,    15,    16,    17,    -1,
    19,    20,    21,    22,    23,    61,    62,    13,    14,    15,
    16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
    26,    -1,    -1,    29,    30,    -1,    -1,    33,    -1,    -1,
    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    45,
    46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    44,
    -1,    -1,    -1,    -1,    -1,    61,    62,    52,    53,    54,
    55,    56,    57,    58,    59,    -1,    61,    62,    63,    64,
    -1,    -1,    67,    -1,    50,    70,    52,    53,    54,    55,
    56,    57,    58,    59,    -1,    61,    62,    63,    64,    -1,
    -1,    67,    -1,    -1,    70,    71,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
    -1,    67,    -1,    -1,    70,    71,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    -1,    61,    62,    63,    64,
    -1,    -1,    67,    -1,    -1,    70,    52,    53,    54,    55,
    56,    57,    58,    59,    -1,    61,    62,    63,    64,    -1,
    -1,    67,    -1,    -1,    70,    71,    52,    53,    54,    55,
    56,    57,    58,    59,    -1,    61,    62,    63,    64,    -1,
    -1,    67,    -1,    -1,    70,    71,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
    -1,    67,    -1,    -1,    70,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
    67,    -1,    -1,    70,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    -1,    -1,    67,
    -1,    -1,    70,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    -1,    -1,    67,    -1,
    -1,    70,    52,    53,    54,    55,    56,    57,    58,    59,
    -1,    61,    62,    63,    64,    -1,    -1,    67,    -1,    -1,
    70,     6,     7,     8,    -1,    -1,    -1,    -1,    13,    14,
    15,    16,    17,    -1,    19,    20,    21,    22,    23,    53,
    54,    55,    56,    57,    58,    59,    -1,    61,    62,    63,
    64,    -1,    -1,    67,    -1,    -1,    70,    54,    55,    56,
    57,    58,    59,    -1,    61,    62,    63,    64,    -1,    -1,
    67,    -1,    -1,    70,    13,    14,    15,    16,    17,    -1,
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
#line 299 "pars.y"
