
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
#define	YYNTBASE	70

#define YYTRANSLATE(x) ((unsigned)(x) <= 310 ? yytranslate[x] : 101)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,    65,
    66,    61,    59,    48,    60,     2,    62,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,    58,    69,    55,
    52,    54,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
    67,     2,    68,     2,     2,     2,     2,     2,     2,     2,
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
    46,    47,    49,    50,    51,    53,    56,    57,    63,    64
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     3,     5,     8,    10,    12,    13,    16,    18,    22,
    26,    28,    30,    35,    37,    41,    43,    45,    47,    49,
    51,    53,    55,    58,    62,    65,    69,    73,    78,    84,
    91,    99,   107,   117,   124,   132,   143,   155,   168,   182,
   188,   197,   203,   210,   211,   213,   215,   218,   220,   224,
   226,   228,   230,   232,   234,   239,   241,   245,   249,   253,
   257,   261,   265,   269,   273,   277,   281,   285,   289,   292,
   295,   300,   307,   310,   312,   314,   316,   318,   320,   322,
   324,   326,   328,   330,   333,   340,   350,   360,   373,   382,
   394,   406,   421,   429,   440,   451,   465,   468,   476,   488,
   490,   494,   496,   501,   506,   507,   511,   513,   517,   519,
   521,   523,   525
};

static const short yyrhs[] = {    86,
    71,     0,    91,     0,    71,    72,     0,    92,     0,    93,
     0,     0,    74,    86,     0,    75,     0,    74,    86,    75,
     0,    74,    69,    75,     0,    76,     0,    77,     0,    24,
    65,    87,    66,     0,    24,     0,    88,    49,    88,     0,
    78,     0,    81,     0,    82,     0,    80,     0,    79,     0,
    83,     0,    96,     0,    25,    24,     0,    76,    48,    24,
     0,    26,    88,     0,    77,    48,    88,     0,    77,    48,
    11,     0,    31,    86,    73,    32,     0,    31,    86,    73,
    33,    75,     0,    31,    88,    42,    86,    73,    32,     0,
    31,    88,    42,    86,    73,    33,    75,     0,    28,    75,
    86,    29,    86,    73,    34,     0,    28,    75,    86,    29,
    86,    73,    30,    73,    34,     0,    31,    40,    88,    86,
    73,    32,     0,    31,    40,    88,    86,    73,    33,    75,
     0,    31,    41,    24,    36,    88,    37,    88,    86,    73,
    32,     0,    31,    41,    24,    36,    88,    37,    88,    86,
    73,    33,    75,     0,    31,    41,    24,    36,    88,    37,
    88,    35,    88,    86,    73,    32,     0,    31,    41,    24,
    36,    88,    37,    88,    35,    88,    86,    73,    33,    75,
     0,    38,    88,    86,    84,    34,     0,    38,    88,    86,
    84,    30,    88,    86,    34,     0,    39,    88,    58,    86,
    73,     0,    84,    39,    88,    58,    86,    73,     0,     0,
    86,     0,    12,     0,    86,    12,     0,    88,     0,    87,
    48,    88,     0,    43,     0,    45,     0,    44,     0,    46,
     0,    47,     0,    24,    65,    87,    66,     0,    24,     0,
    88,    59,    88,     0,    88,    60,    88,     0,    88,    61,
    88,     0,    88,    62,    88,     0,    88,    55,    88,     0,
    88,    54,    88,     0,    88,    51,    88,     0,    88,    50,
    88,     0,    88,    56,    88,     0,    88,    57,    88,     0,
    88,    53,    88,     0,    88,    52,    88,     0,    60,    88,
     0,    59,    88,     0,    88,    67,    88,    68,     0,    88,
    67,    88,    58,    88,    68,     0,    27,    88,     0,    15,
     0,    16,     0,    14,     0,    13,     0,    17,     0,    19,
     0,    20,     0,    21,     0,    22,     0,    23,     0,    89,
    18,     0,     3,    97,    86,     4,    73,     5,     0,     3,
    97,    86,     9,    88,    86,     4,    73,     5,     0,     3,
    97,    86,    10,    88,    86,     4,    73,     5,     0,     3,
    97,    86,     9,    88,    86,    10,    88,    86,     4,    73,
     5,     0,     3,    89,    24,    97,    86,     4,    73,     5,
     0,     3,    89,    24,    97,    86,     9,    88,    86,     4,
    73,     5,     0,     3,    89,    24,    97,    86,    10,    88,
    86,     4,    73,     5,     0,     3,    89,    24,    97,    86,
     9,    88,    86,    10,    88,    86,     4,    73,     5,     0,
     3,    24,    97,    86,     4,    73,     5,     0,     3,    24,
    97,    86,     9,    88,    86,     4,    73,     5,     0,     3,
    24,    97,    86,    10,    88,    86,     4,    73,     5,     0,
     3,    24,    97,    86,     9,    88,    86,    10,    88,    86,
     4,    73,     5,     0,    89,    24,     0,    90,    24,    67,
    88,    58,    88,    68,     0,    90,    24,    67,    88,    58,
    88,    48,    88,    58,    88,    68,     0,    94,     0,    94,
    49,    88,     0,    95,     0,    96,    48,    85,    95,     0,
    96,    48,    85,    24,     0,     0,    65,    98,    66,     0,
   100,     0,    98,    48,   100,     0,     6,     0,     7,     0,
     8,     0,    94,     0,    99,    94,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    23,    26,    27,    30,    31,    34,    35,    38,    39,    40,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    54,    57,    58,    61,    62,    63,    66,    67,    70,
    71,    74,    75,    78,    79,    82,    83,    84,    85,    88,
    89,    92,    93,    96,    97,   100,   101,   104,   105,   108,
   109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
   119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
   129,   130,   131,   135,   136,   137,   138,   139,   142,   143,
   144,   145,   146,   147,   150,   151,   152,   153,   156,   157,
   158,   159,   162,   163,   164,   165,   168,   169,   170,   173,
   174,   177,   178,   179,   182,   183,   186,   187,   190,   191,
   192,   195,   196
};

static const char * const yytname[] = {   "$","error","$undefined.","ALG","BEGIN",
"END","ARG","RES","ARGRES","DANO","NADO","NS","ENDL","INT","FLOAT","BOOL","CHAR",
"STRING","TAB","INTTAB","FLOATTAB","BOOLTAB","CHARTAB","STRINGTAB","ID","INPUT",
"OUTPUT","NOT","IF","THEN","ELSE","CYCLE_BEGIN","CYCLE_END","CYCLE_END_IF","DONE",
"STEP","FROM","TO","SWITCH","CASE","WHILE","FOR","TIMES","INT_LITERAL","FLOAT_LITERAL",
"CHAR_LITERAL","STRING_LITERAL","BOOL_LITERAL","','","ASSIGN","OR","AND","'='",
"NOT_EQUAL","'>'","'<'","GREATER_EQUAL","LESS_EQUAL","':'","'+'","'-'","'*'",
"'/'","UMINUS","UPLUS","'('","')'","'['","']'","';'","Program","ProgramElementList",
"ProgramElement","BlockStatement","StatementList","Statement","InputList","OutputList",
"CycleStatement","TimesStatement","IfStatement","WhileStatement","ForStatement",
"SwitchCaseStatement","CaseList","EndlOpt","EndlList","ExpressionList","Expression",
"Type","ArrType","AlgorithmImplementation","AlgorithmFunctionImplementation",
"AlgorithmProcedureImplementation","VarDeclaration","Var","VarList","ParamDeclarationList",
"ParamList","ParamModifier","Param",""
};
#endif

static const short yyr1[] = {     0,
    70,    71,    71,    72,    72,    73,    73,    74,    74,    74,
    75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
    75,    75,    76,    76,    77,    77,    77,    78,    78,    79,
    79,    80,    80,    81,    81,    82,    82,    82,    82,    83,
    83,    84,    84,    85,    85,    86,    86,    87,    87,    88,
    88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
    88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
    88,    88,    88,    89,    89,    89,    89,    89,    90,    90,
    90,    90,    90,    90,    91,    91,    91,    91,    92,    92,
    92,    92,    93,    93,    93,    93,    94,    94,    94,    95,
    95,    96,    96,    96,    97,    97,    98,    98,    99,    99,
    99,   100,   100
};

static const short yyr2[] = {     0,
     2,     1,     2,     1,     1,     0,     2,     1,     3,     3,
     1,     1,     4,     1,     3,     1,     1,     1,     1,     1,
     1,     1,     2,     3,     2,     3,     3,     4,     5,     6,
     7,     7,     9,     6,     7,    10,    11,    12,    13,     5,
     8,     5,     6,     0,     1,     1,     2,     1,     3,     1,
     1,     1,     1,     1,     4,     1,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
     4,     6,     2,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     2,     6,     9,     9,    12,     8,    11,
    11,    14,     7,    10,    10,    13,     2,     7,    11,     1,
     3,     1,     4,     4,     0,     3,     1,     3,     1,     1,
     1,     1,     2
};

static const short yydefact[] = {     0,
    46,     0,   105,    47,     1,     2,     0,     0,     0,     3,
     4,     5,   109,   110,   111,    77,    76,    74,    75,    78,
    79,    80,    81,    82,    83,     0,     0,   112,     0,     0,
   107,     0,   105,     0,    84,    97,     0,     0,   106,   113,
     6,     0,     0,     0,   105,     0,   108,    56,     0,     0,
     0,     0,     0,     0,    50,    52,    51,    53,    54,     0,
     0,     0,     0,     8,    11,    12,    16,    20,    19,    17,
    18,    21,     0,   100,   102,    22,    56,     0,     0,     0,
     0,     0,     0,    23,    25,    73,     0,     0,     0,     6,
     0,     0,    70,    69,    85,     0,     7,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    44,     0,     0,     0,     6,     0,
     0,     0,     0,     0,    48,     0,     0,     0,     0,     0,
     0,    10,     9,    24,    27,    26,    15,    64,    63,    68,
    67,    62,    61,    65,    66,    57,    58,    59,    60,     0,
   101,     0,    45,     0,     6,     0,     6,     0,     0,     0,
     6,     0,     0,     0,     0,    55,     0,     6,     0,    28,
     0,     6,     0,     0,     0,    71,   104,   103,    55,     0,
     0,     0,    93,     0,     0,     0,     0,     0,     0,    98,
    49,     6,     0,     0,    29,     0,     0,     0,    40,     0,
     0,    86,     0,    87,     6,     0,     6,    89,     0,     0,
     0,     0,    34,     0,     0,    30,     0,     0,     0,     0,
    72,     6,     0,     0,     0,     6,     0,     6,     0,     6,
    32,    35,     0,    31,     6,     0,     0,     0,    94,     0,
    95,     0,     0,     0,     0,     0,     0,     6,    42,    41,
     6,    88,     6,    90,     0,    91,    99,    33,     0,     0,
    43,     0,     6,     6,    36,     0,    96,     0,     0,    37,
    92,    38,     0,    39,     0,     0,     0
};

static const short yydefgoto[] = {   275,
     5,    10,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,   174,   152,     2,   124,    73,    26,    27,
     6,    11,    12,    74,    75,    76,     8,    29,    30,    31
};

static const short yypact[] = {     5,
-32768,     7,   -45,-32768,    35,-32768,   141,     5,   262,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,    44,    28,-32768,   -44,   418,
-32768,    93,   -45,    40,-32768,-32768,     2,   141,-32768,-32768,
   431,   -13,   -13,     5,   -45,   -13,-32768,   -11,    42,   -13,
   -13,   431,   247,   -13,-32768,-32768,-32768,-32768,-32768,   -13,
   -13,    82,   -10,-32768,    66,    73,-32768,-32768,-32768,-32768,
-32768,-32768,   520,    55,-32768,    84,    80,   327,   327,   165,
     5,   576,   -13,-32768,   648,    86,     5,   -13,   144,   383,
   463,   327,    86,    86,-32768,   431,   383,   154,    -3,   -13,
   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
   -13,   -13,   -13,   -13,     5,   -13,   210,    11,   431,   -13,
   -13,   203,   -13,   -41,   648,    36,   327,   129,    53,     5,
     0,-32768,-32768,-32768,-32768,   648,   648,   297,    56,    21,
    21,    79,    79,    79,    79,   156,   156,    86,    86,   500,
   648,   703,   169,   -39,   431,   -13,   431,   193,   327,   327,
   431,   -13,   -13,   481,   -13,    -9,     5,   383,   -13,-32768,
   431,   383,   -13,    33,   -13,-32768,-32768,-32768,-32768,   200,
   327,   216,-32768,   220,    14,   222,   327,   327,   -13,-32768,
   648,   383,    98,   442,-32768,   168,   594,   -13,-32768,   -13,
   538,-32768,    49,-32768,   431,   -13,   431,-32768,   224,   116,
   612,   142,-32768,   431,   -13,-32768,   431,     5,   327,   630,
-32768,   431,   228,   327,   235,   431,   -13,   431,   -13,   431,
-32768,-32768,    39,-32768,   383,     1,     5,   236,-32768,   123,
-32768,   237,   327,   238,   557,   213,   -13,   383,-32768,-32768,
   383,-32768,   431,-32768,   138,-32768,-32768,-32768,   327,   176,
-32768,   239,   431,   383,-32768,   431,-32768,   244,   205,-32768,
-32768,-32768,   431,-32768,   250,   253,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,   112,-32768,   -47,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,    -8,   139,    83,   245,-32768,
-32768,-32768,-32768,    -1,   105,-32768,   -17,-32768,-32768,   223
};


#define	YYLAST		727


static const short yytable[] = {    32,
   -14,     1,   -13,    38,    87,    28,   165,   135,   165,     3,
    77,     4,     4,    51,   157,    44,     1,   207,     4,     7,
    77,    39,     4,    51,   166,     4,   179,    81,    40,    55,
    56,    57,    58,    59,   250,    80,    28,     9,   173,    55,
    56,    57,    58,    59,    90,    60,    61,     4,   132,   133,
     1,    37,   222,    83,    97,    60,    61,   -14,    96,   -13,
     4,    35,   198,    45,   167,    84,   199,    36,    46,   117,
   118,   200,   122,   247,   105,   106,   107,   108,   126,   109,
   110,   111,   112,   131,   170,   171,    95,   113,   101,   102,
   103,   104,   105,   106,   107,   108,    41,   109,   110,   111,
   112,    42,    43,   114,     4,   113,   153,   103,   104,   105,
   106,   107,   108,    98,   109,   110,   111,   112,   168,   228,
    99,   172,   113,   195,    78,    79,   253,     4,    82,   213,
   214,   115,    85,    86,     4,    91,    92,   109,   110,   111,
   112,   263,    93,    94,   116,   113,    13,    14,    15,     4,
   184,   185,   113,    16,    17,    18,    19,    20,   192,    21,
    22,    23,    24,    25,   169,   125,   232,   128,   119,   234,
   127,   230,   203,   120,   121,   231,     4,   134,   209,   210,
     4,   136,   137,   138,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   183,   125,   216,
   217,   129,   159,   160,   202,   164,   161,   265,   266,   235,
   236,   162,   163,   155,     4,   240,   111,   112,   270,   156,
   204,     4,   113,   205,   248,   274,   208,   226,   251,   206,
   158,     4,   239,   227,   255,     4,   272,   273,   181,   241,
   252,   254,   256,   267,   187,   188,   258,   191,   271,   276,
   264,   194,   277,    34,   154,   197,   178,   201,     1,     0,
    47,     0,     0,     0,     0,     0,   180,     0,   182,     0,
    77,   211,   186,    51,    16,    17,    18,    19,    20,   193,
   219,     0,   220,   196,     0,    33,    88,    89,   224,    55,
    56,    57,    58,    59,     0,     0,     0,   233,     0,     0,
     0,     0,     0,   212,     0,    60,    61,     0,     0,   243,
     0,   245,     0,     0,     0,     0,   223,     0,   225,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   259,
     0,     0,     0,   238,     0,     0,     0,   242,     1,   244,
     0,   246,     0,     0,     0,     0,   249,   102,   103,   104,
   105,   106,   107,   108,     0,   109,   110,   111,   112,   260,
     0,     0,   261,   113,   262,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   268,   269,   101,   102,   103,   104,
   105,   106,   107,   108,     0,   109,   110,   111,   112,     0,
     0,     0,     0,   113,     4,    16,    17,    18,    19,    20,
     0,    21,    22,    23,    24,    25,    48,    49,    50,    51,
    52,     0,     0,    53,     0,     0,     0,     0,     0,     0,
    54,     0,     0,     0,     0,    55,    56,    57,    58,    59,
    16,    17,    18,    19,    20,     0,    21,    22,    23,    24,
    25,    60,    61,    16,    17,    18,    19,    20,     0,    21,
    22,    23,    24,    25,    48,    49,    50,    51,    52,     0,
     0,    53,     0,     0,     0,     0,     0,     0,    54,     0,
     0,     0,     0,    55,    56,    57,    58,    59,   215,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    60,
    61,   101,   102,   103,   104,   105,   106,   107,   108,     0,
   109,   110,   111,   112,   130,     0,     0,     0,   113,     0,
     0,     0,   101,   102,   103,   104,   105,   106,   107,   108,
     0,   109,   110,   111,   112,     0,     0,     0,   189,   113,
   101,   102,   103,   104,   105,   106,   107,   108,     0,   109,
   110,   111,   112,     0,     0,     0,     0,   113,   190,   101,
   102,   103,   104,   105,   106,   107,   108,   175,   109,   110,
   111,   112,     0,     0,     0,     0,   113,   176,   100,   101,
   102,   103,   104,   105,   106,   107,   108,     0,   109,   110,
   111,   112,     0,     0,     0,     0,   113,   101,   102,   103,
   104,   105,   106,   107,   108,     0,   109,   110,   111,   112,
     0,     0,     0,     0,   113,   221,   101,   102,   103,   104,
   105,   106,   107,   108,     0,   109,   110,   111,   112,     0,
     0,     0,     0,   113,   257,   101,   102,   103,   104,   105,
   106,   107,   108,   123,   109,   110,   111,   112,     0,     0,
     0,     0,   113,   101,   102,   103,   104,   105,   106,   107,
   108,   218,   109,   110,   111,   112,     0,     0,     0,     0,
   113,   101,   102,   103,   104,   105,   106,   107,   108,   229,
   109,   110,   111,   112,     0,     0,     0,     0,   113,   101,
   102,   103,   104,   105,   106,   107,   108,   237,   109,   110,
   111,   112,     0,     0,     0,     0,   113,   101,   102,   103,
   104,   105,   106,   107,   108,     0,   109,   110,   111,   112,
     0,     0,     0,     0,   113,    16,    17,    18,    19,    20,
     0,    21,    22,    23,    24,    25,   177
};

static const short yycheck[] = {     8,
    12,    12,    12,    48,    52,     7,    48,    11,    48,     3,
    24,    12,    12,    27,     4,    33,    12,     4,    12,    65,
    24,    66,    12,    27,    66,    12,    66,    45,    30,    43,
    44,    45,    46,    47,    34,    44,    38,     3,    39,    43,
    44,    45,    46,    47,    53,    59,    60,    12,    96,    97,
    12,    24,     4,    65,    63,    59,    60,    69,    69,    69,
    12,    18,    30,    24,    29,    24,    34,    24,    67,    78,
    79,    39,    81,    35,    54,    55,    56,    57,    87,    59,
    60,    61,    62,    92,    32,    33,     5,    67,    50,    51,
    52,    53,    54,    55,    56,    57,     4,    59,    60,    61,
    62,     9,    10,    49,    12,    67,   115,    52,    53,    54,
    55,    56,    57,    48,    59,    60,    61,    62,   127,     4,
    48,   130,    67,   171,    42,    43,     4,    12,    46,    32,
    33,    48,    50,    51,    12,    53,    54,    59,    60,    61,
    62,     4,    60,    61,    65,    67,     6,     7,     8,    12,
   159,   160,    67,    13,    14,    15,    16,    17,   167,    19,
    20,    21,    22,    23,    36,    83,   214,    24,     4,   217,
    88,    30,   181,     9,    10,    34,    12,    24,   187,   188,
    12,    99,   100,   101,   102,   103,   104,   105,   106,   107,
   108,   109,   110,   111,   112,   113,   114,     5,   116,    32,
    33,    90,   120,   121,     5,   123,     4,    32,    33,   218,
   219,     9,    10,     4,    12,   224,    61,    62,   266,    10,
     5,    12,    67,     4,   233,   273,     5,     4,   237,    10,
   119,    12,     5,    10,   243,    12,    32,    33,   156,     5,
     5,     5,     5,     5,   162,   163,    34,   165,     5,     0,
   259,   169,     0,     9,   116,   173,   152,   175,    12,    -1,
    38,    -1,    -1,    -1,    -1,    -1,   155,    -1,   157,    -1,
    24,   189,   161,    27,    13,    14,    15,    16,    17,   168,
   198,    -1,   200,   172,    -1,    24,    40,    41,   206,    43,
    44,    45,    46,    47,    -1,    -1,    -1,   215,    -1,    -1,
    -1,    -1,    -1,   192,    -1,    59,    60,    -1,    -1,   227,
    -1,   229,    -1,    -1,    -1,    -1,   205,    -1,   207,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
    -1,    -1,    -1,   222,    -1,    -1,    -1,   226,    12,   228,
    -1,   230,    -1,    -1,    -1,    -1,   235,    51,    52,    53,
    54,    55,    56,    57,    -1,    59,    60,    61,    62,   248,
    -1,    -1,   251,    67,   253,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   263,   264,    50,    51,    52,    53,
    54,    55,    56,    57,    -1,    59,    60,    61,    62,    -1,
    -1,    -1,    -1,    67,    12,    13,    14,    15,    16,    17,
    -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
    38,    -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,
    13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
    23,    59,    60,    13,    14,    15,    16,    17,    -1,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
    -1,    -1,    -1,    43,    44,    45,    46,    47,    37,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
    60,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
    59,    60,    61,    62,    42,    -1,    -1,    -1,    67,    -1,
    -1,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
    -1,    59,    60,    61,    62,    -1,    -1,    -1,    48,    67,
    50,    51,    52,    53,    54,    55,    56,    57,    -1,    59,
    60,    61,    62,    -1,    -1,    -1,    -1,    67,    68,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    -1,    -1,    -1,    -1,    67,    68,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
    61,    62,    -1,    -1,    -1,    -1,    67,    50,    51,    52,
    53,    54,    55,    56,    57,    -1,    59,    60,    61,    62,
    -1,    -1,    -1,    -1,    67,    68,    50,    51,    52,    53,
    54,    55,    56,    57,    -1,    59,    60,    61,    62,    -1,
    -1,    -1,    -1,    67,    68,    50,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
    -1,    -1,    67,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    -1,    -1,    -1,    -1,
    67,    50,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    -1,    -1,    -1,    -1,    67,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    -1,    -1,    -1,    -1,    67,    50,    51,    52,
    53,    54,    55,    56,    57,    -1,    59,    60,    61,    62,
    -1,    -1,    -1,    -1,    67,    13,    14,    15,    16,    17,
    -1,    19,    20,    21,    22,    23,    24
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
