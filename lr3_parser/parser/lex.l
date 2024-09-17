%{
// #include "_tab.h"
//#include "parser_tab.cpp"
extern int yyparse();
%}


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

алг { //printf("%s - KW_ALG\n", yytext); 
return ALG; }
нач { //printf("%s - KW_NACH\n", yytext);
return BEGIN; }
кон { //printf("%s - KW_KON\n", yytext);
return END; }
дано { //printf("%s - KW_DANO\n", yytext);
return DANO; }
надо { //printf("%s - KW_NADO\n", yytext);
return NADO; }
арг { //printf("%s - KW_ARG\n", yytext);
return ARG; }
рез { //printf("%s - KW_REZ\n", yytext);
return RES; }
аргрез { //printf("%s - KW_ARGREZ\n", yytext);
return ARGRES; }
таб { //printf("%s - KW_TAB\n", yytext);
return TAB; }
целтаб { //printf("%s - KW_CELTAB\n", yytext);
return INTTAB; }
вещтаб { //printf("%s - KW_VESHTAB\n", yytext);
return FLOATTAB; }
логтаб { //printf("%s - KW_LOGTAB\n", yytext);
return BOOLTAB; }
симтаб { //printf("%s - KW_SIMTAB\n", yytext);
return CHARTAB; }
литтаб { //printf("%s - KW_LITTAB\n", yytext);
return STRINGTAB; }
и { //printf("%s - KW_I\n", yytext);
return AND; }
или { //printf("%s - KW_ILI\n", yytext);
return OR; }
не { //printf("%s - KW_NE\n", yytext);
return NOT; }
да { //printf("%s - KW_DA\n", yytext);
yylval.bool_literal = true;
return BOOL_LITERAL; }
нет { //printf("%s - KW_NET\n", yytext);
yylval.bool_literal = false;
return BOOL_LITERAL; }
утв { //printf("%s - KW_UTV\n", yytext); }
выход { //printf("%s - KW_VIHOD\n", yytext); }
ввод { //printf("%s - KW_VVOD\n", yytext);
return INPUT; }
вывод { //printf("%s - KW_VIVOD\n", yytext);
return OUTPUT; }
нс { //printf("%s - KW_NS\n", yytext);
return NS; }
если { //printf("%s - KW_ESLI\n", yytext);
return IF; }
то { //printf("%s - KW_TO\n", yytext);
return THEN; }
иначе { //printf("%s - KW_INACHE\n", yytext);
return ELSE; }
все { //printf("%s - KW_VSE\n", yytext);
return DONE; }
выбор { //printf("%s - KW_VIBOR\n", yytext);
return SWITCH; }
при { //printf("%s - KW_PRI\n", yytext);
return CASE; }
нц { //printf("%s - KW_NC\n", yytext);
return CYCLE_BEGIN; }
кц { //printf("%s - KW_KC\n", yytext);
return CYCLE_END; }
кц_при { //printf("%s - KW_KC_PRI\n", yytext);
return CYCLE_END_IF; }
раз { //printf("%s - KW_RAZ\n", yytext);
return TIMES; }
пока { //printf("%s - KW_POKA\n", yytext);
return WHILE; }
для { //printf("%s - KW_DLYA\n", yytext);
return FOR; }
от { //printf("%s - KW_OT\n", yytext);
return FROM; }
до { //printf("%s - KW_DO\n", yytext);
return TO; }
шаг { //printf("%s - KW_SHAG\n", yytext);
return STEP; }

цел { //printf("%s - TYPE_CEL\n", yytext);
return INT; }
вещ { //printf("%s - TYPE_VESH\n", yytext);
return FLOAT; }
лог { //printf("%s - TYPE_LOG\n", yytext);
return BOOL; }
сим { //printf("%s - TYPE_SIM\n", yytext);
return CHAR; }
лит { //printf("%s - TYPE_LIT\n", yytext);
return STRING; }

"+" { //printf("%s - OPERATOR_PLUS\n", yytext);
return '+'; }
"-" { //printf("%s - OPERATOR_MINUS\n", yytext);
return '-'; }
"*" { //printf("%s - OPERATOR_MUL\n", yytext);
return '*'; }
"/" { //printf("%s - OPERATOR_DIV\n", yytext);
return '/'; }
"**" { //printf("%s - OPERATOR_POW\n", yytext);
return POW; }

":=" { //printf("%s - OPERATOR_ASSIGNMENT\n", yytext);
return ASSIGN; }
"=" { //printf("%s - OPERATOR_EQUAL\n", yytext);
return '='; }
"<>" { //printf("%s - OPERATOR_NOT_EQUAL\n", yytext);
return NOT_EQUAL; }
"<" { //printf("%s - OPERATOR_LESS\n", yytext);
return '<'; }
">" { //printf("%s - OPERATOR_MORE\n", yytext);
return '>'; }
"<=" { //printf("%s - OPERATOR_LESS_OR_EQUAL\n", yytext);
return LESS_EQUAL; }
">=" { //printf("%s - OPERATOR_MORE_OR_EQUAL\n", yytext);
return GREATER_EQUAL; }

"(" { //printf("%s - LEFT_ROUND_BRACKET\n", yytext);
return '('; }
")" { //printf("%s - RIGHT_ROUND_BRACKET\n", yytext);
return ')'; }
"[" { //printf("%s - LEFT_SQUARE_BRACKET\n", yytext);
return '['; }
"]" { //printf("%s - RIGHT_SQUARE_BRACKET\n", yytext);
return ']'; }

"," { //printf("%s - COMMA\n", yytext);
return ','; }
";" { //printf("%s - SEMICOLON\n", yytext);
return ';'; }
":" { //printf("%s - COLON\n", yytext);
return ':'; }

[0-9]+ {int result = atoi(yytext);
		printf("%d - INT_NUMBER\n", result);
		yylval.int_literal = atoi(result);
		return INT_LITERAL; }

$[0-9A-F]+ {
			int result = (int)strtol(yytext+1, NULL, 16);
			printf("%d - HEX_INT_NUMBER\n", result);
			yylval.int_literal = atoi(result);
			return INT_LITERAL; } 

[0-9]*\.[0-9]* {double result = atof(yytext);
				int resultlen = strlen(yytext);
				printf("%.*f - DOUBLE_NUMBER\n", resultlen, result);
				yylval.float_literal = atof(result);
				return FLOAT_LITERAL; }

({DIGIT}*\.)?{DIGIT}*((e|E)(\+|\-)?{DIGIT}{DIGIT}*)? {
				int resultlen = strlen(yytext);
				double result = atof(yytext);
				printf("%.*f - EXP_DOUBLE_NUMBER\n", resultlen, result);
				yylval.float_literal = atof(result);
				return FLOAT_LITERAL; } 

[A-Za-z_А-Яа-я@][A-Za-z0-9_А-Яа-я@]* {printf("%s - IDENTIFIER\n", yytext);
										yylval.identifier = new string(yytext);
										return ID; }

\|.* { printf("%s - COMMENT\n", yytext); }
\#.* { printf("%s - ALG_DESCRIPTION_COMMENT\n", yytext); }

\' { strcpy(str,""); BEGIN(QUOTES); }
<QUOTES>\n {lineNumber++;
			printf("CHAR ERROR: no closing quotation mark in line %d\n", lineNumber-1); BEGIN(INITIAL);}
<QUOTES>[^'\n] {strcat(str, yytext);}
<QUOTES>\' {
    if(strlen(str) == 1) {
        printf("%c - CHAR\n", str[0]);
		yylval.char_literal = str[0];
		return CHAR_LITERAL;
    }
    else if(strlen(str) == 0)
    {
        printf("Empty char in line %d\n", lineNumber);
    }
    else
    {
        printf("%s - STRING\n", str);
		yylval.string_literal = new string(str)
		return STRING_LITERAL;
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
		yylval.char_literal = str[0];
		return CHAR_LITERAL;
    }
    else if(strlen(str) == 0)
    {
        printf("Empty char in line %d\n", lineNumber);
    }
    else
    {
        printf("%s - STRING\n", str);
		yylval.string_literal = new string(str)
		return STRING_LITERAL;
    }
    BEGIN(INITIAL);
}
<DOUBLEQUOTES><<EOF>> { printf("CHAR ERROR: no closing quotation mark at the end of file\n");
				BEGIN(INITIAL);
}

. { printf("ERROR: UNRECOGNIZED TOKEN: %s\n", yytext); }


%%

/*int main(int argc, char** argv) {

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
}*/

int main(int argc, char** argv) {

	setlocale(LC_CTYPE, "Russian");

    if (argc != 2) {
        printf("Filename is not found");
        return 1;
    }

    const char *filename = argv[1];

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("File opening error");
        return 1;
    }

    yyin = file;
    yyparse();
    fclose(file);

    string dot;
    global_program->toDot(dot);
    std::cout << dot << "\n";

    std::ofstream out("dot-tree.txt");
    out << dot << "\n";

    return 0;