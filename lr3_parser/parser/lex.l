%option noyywrap
%option never-interactive

DIGIT [0-9]

%x QUOTES
%x DOUBLEQUOTES

%{
	#include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <string>
    #include <ctype.h>
	#include <clocale>
    using namespace std;
	
	char str[1024];
    int lineNumber = 1;
%}

%%

\n { lineNumber++; }
[\r\t\f\v ]+ {}

алг { printf("%s - KW_ALG\n", yytext); }
нач { printf("%s - KW_NACH\n", yytext); }
кон { printf("%s - KW_KON\n", yytext); }
исп { printf("%s - KW_ISP\n", yytext); }
кон_исп { printf("%s - KW_KON_ISP\n", yytext); }
дано { printf("%s - KW_DANO\n", yytext); }
надо { printf("%s - KW_NADO\n", yytext); }
арг { printf("%s - KW_ARG\n", yytext); }
рез { printf("%s - KW_REZ\n", yytext); }
аргрез { printf("%s - KW_ARGREZ\n", yytext); }
знач { printf("%s - KW_ZNACH\n", yytext); }
таб { printf("%s - KW_TAB\n", yytext); }
целтаб { printf("%s - KW_CELTAB\n", yytext); }
вещтаб { printf("%s - KW_VESHTAB\n", yytext); }
логтаб { printf("%s - KW_LOGTAB\n", yytext); }
литтаб { printf("%s - KW_LITTAB\n", yytext); }
и { printf("%s - KW_I\n", yytext); }
или { printf("%s - KW_ILI\n", yytext); }
не { printf("%s - KW_NE\n", yytext); }
да { printf("%s - KW_DA\n", yytext); }
нет { printf("%s - KW_NET\n", yytext); }
утв { printf("%s - KW_UTV\n", yytext); }
выход { printf("%s - KW_VIHOD\n", yytext); }
ввод { printf("%s - KW_VVOD\n", yytext); }
вывод { printf("%s - KW_VIVOD\n", yytext); }
нс { printf("%s - KW_NS\n", yytext); }
если { printf("%s - KW_ESLI\n", yytext); }
то { printf("%s - KW_TO\n", yytext); }
иначе { printf("%s - KW_INACHE\n", yytext); }
все { printf("%s - KW_VSE\n", yytext); }
выбор { printf("%s - KW_VIBOR\n", yytext); }
при { printf("%s - KW_PRI\n", yytext); }
нц { printf("%s - KW_NC\n", yytext); }
кц { printf("%s - KW_KC\n", yytext); }
кц_при { printf("%s - KW_KC_PRI\n", yytext); }
раз { printf("%s - KW_RAZ\n", yytext); }
пока { printf("%s - KW_POKA\n", yytext); }
для { printf("%s - KW_DLYA\n", yytext); }
от { printf("%s - KW_OT\n", yytext); }
до { printf("%s - KW_DO\n", yytext); }
шаг { printf("%s - KW_SHAG\n", yytext); }

цел { printf("%s - TYPE_CEL\n", yytext); }
вещ { printf("%s - TYPE_VESH\n", yytext); }
лог { printf("%s - TYPE_LOG\n", yytext); }
сим { printf("%s - TYPE_SIM\n", yytext); }
лит { printf("%s - TYPE_LIT\n", yytext); }

"+" { printf("%s - OPERATOR_PLUS\n", yytext); }
"-" { printf("%s - OPERATOR_MINUS\n", yytext); }
"*" { printf("%s - OPERATOR_MUL\n", yytext); }
"/" { printf("%s - OPERATOR_DIV\n", yytext); }
"**" { printf("%s - OPERATOR_POW\n", yytext); }

":=" { printf("%s - OPERATOR_ASSIGNMENT\n", yytext); }
"=" { printf("%s - OPERATOR_EQUAL\n", yytext); }
"<>" { printf("%s - OPERATOR_NOT_EQUAL\n", yytext); }
"<" { printf("%s - OPERATOR_LESS\n", yytext); }
">" { printf("%s - OPERATOR_MORE\n", yytext); }
"<=" { printf("%s - OPERATOR_LESS_OR_EQUAL\n", yytext); }
">=" { printf("%s - OPERATOR_MORE_OR_EQUAL\n", yytext); }

"(" { printf("%s - LEFT_ROUND_BRACKET\n", yytext); }
")" { printf("%s - RIGHT_ROUND_BRACKET\n", yytext); }
"[" { printf("%s - LEFT_SQUARE_BRACKET\n", yytext); }
"]" { printf("%s - RIGHT_SQUARE_BRACKET\n", yytext); }

"," { printf("%s - COMMA\n", yytext); }
";" { printf("%s - SEMICOLON\n", yytext); }
":" { printf("%s - COLON\n", yytext); }

[0-9]+ {int result = atoi(yytext);
		printf("%d - INT_NUMBER\n", result);}

$[0-9A-F]+ {
			int result = (int)strtol(yytext+1, NULL, 16);
			printf("%d - HEX_INT_NUMBER\n", result);} 

[0-9]*\.[0-9]* {double result = atof(yytext);
				int resultlen = strlen(yytext);
				printf("%.*f - DOUBLE_NUMBER\n", resultlen, result);}

({DIGIT}*\.)?{DIGIT}*((e|E)(\+|\-)?{DIGIT}{DIGIT}*)? {
				int resultlen = strlen(yytext);
				double result = atof(yytext);
				printf("%.*f - EXP_DOUBLE_NUMBER\n", resultlen, result);} 

[A-Za-z_А-Яа-я@][A-Za-z0-9_А-Яа-я@]* {printf("%s - IDENTIFIER\n", yytext);}

\|.* { printf("%s - COMMENT\n", yytext); }
\#.* { printf("%s - ALG_DESCRIPTION_COMMENT\n", yytext); }

\' { strcpy(str,""); BEGIN(QUOTES); }
<QUOTES>\n {lineNumber++;
			printf("CHAR ERROR: no closing quotation mark in line %d\n", lineNumber-1); BEGIN(INITIAL);}
<QUOTES>[^'\n] {strcat(str, yytext);}
<QUOTES>\' {
    if(strlen(str) == 1) {
        printf("%c - CHAR\n", str[0]);
    }
    else if(strlen(str) == 0)
    {
        printf("Empty char in line %d\n", lineNumber);
    }
    else
    {
        printf("%s - STRING\n", str);
    }
    BEGIN(INITIAL);
}
<QUOTES><<EOF>> { printf("CHAR ERROR: no closing quotation mark at the end of file\n"); BEGIN(INITIAL);}


\" { strcpy(str,""); BEGIN(DOUBLEQUOTES); }
<DOUBLEQUOTES>\n {lineNumber++;
			printf("CHAR ERROR: no closing quotation mark in line %d\n", lineNumber-1);
			BEGIN(INITIAL);
}
<DOUBLEQUOTES>[^"\n] {strcat(str, yytext);}
<DOUBLEQUOTES>\" {
    if(strlen(str) == 1) {
        printf("%c - CHAR\n", str[0]);
    }
    else if(strlen(str) == 0)
    {
        printf("Empty char in line %d\n", lineNumber);
    }
    else
    {
        printf("%s - STRING\n", str);
    }
    BEGIN(INITIAL);
}
<DOUBLEQUOTES><<EOF>> { printf("CHAR ERROR: no closing quotation mark at the end of file\n");
				BEGIN(INITIAL);
}

. { printf("ERROR: UNRECOGNIZED TOKEN: %s\n", yytext); }


%%

int main(int argc, char** argv) {

	setlocale(LC_CTYPE, "Russian");

	if (argc != 2) {
        printf("Filename is not found");
        return 1;
    }

    const char *filename= argv[1];
    
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("File opening error");
        return 1;
    }

    yyin = file;
    yylex();
    fclose(file);

    return 0;
}
