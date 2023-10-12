%option noyywrap
%option never-interactive

DIGIT [0-9]

%x CHAR
%x STRING
%x ML_COMMENT
%x SHIELD_STRING

%{
	#include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <iostream>
    #include <string>
    #include <ctype.h>
    using namespace std;

    #include "locale.h"

    setlocale(LC_ALL, "Russian");

    char str[1024];
    string stdstr = "";
    int lineNumber = 1;
    int octothorpeCount = 0;
%}

%%

%{
    void removeUnderline();
    void removeType(char *typeName);
	void convertCharacterCodeToString(char characterCode[], int startPosition, char *string);
%}

\n { lineNumber++; }
" " { }

as { printf("Found KW_AS: %s\n", yytext); }
