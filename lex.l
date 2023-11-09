%option noyywrap
%option never-interactive
%option stack


%x END_OF_LINE_COMMENT


%{
	#include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <string>
    #include <ctype.h>
	#include <clocale>
    using namespace std;
    
	
    char str[1024];
    string stdstr = "";
    int lineNumber = 1;
    int octothorpeCount = 0;
%}
%%
%{
    char bufferString[20480]; // Массив символов - буфер для строковых выражений.
    int line = 1;
    int multilineBegin;
%}
\n { lineNumber++; }
" " { }

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

"|" {bufferString[0] = 0; yy_push_state(END_OF_LINE_COMMENT);}
<END_OF_LINE_COMMENT>[^\n]* {strcat(bufferString, yytext);}
<END_OF_LINE_COMMENT>[\r\n] {printf("(%s) - END_OF_LINE_COMMENT\n", bufferString);  line += 1; yy_pop_state();}
<END_OF_LINE_COMMENT><<EOF>> {printf("(%s) - END_OF_LINE_COMMENT\n", bufferString); BEGIN(INITIAL);}


"+" { printf("%s - OPERATOR_PLUS\n", yytext); }
"-" { printf("%s - OPERATOR_MINUS\n", yytext); }
"*" { printf("%s - OPERATOR_MUL\n", yytext); }
"/" { printf("%s - OPERATOR_DIV\n", yytext); }

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
"{" { printf("%s - LEFT_FIGURE_BRACKET\n", yytext); }
"}" { printf("%s - RIGHT_FIGURE_BRACKET\n", yytext); }

"," { printf("Found COMMA: %s\n", yytext); }
";" { printf("Found SEMICOLON: %s\n", yytext); }
":" { printf("Found COLON: %s\n", yytext); }

[0-9]+ {printf("%s - INT_NUMBER\n", yytext);}

$[0-9A-F]+ {printf("%s - HEX_INT_NUMBER\n", yytext);}

[A-Za-z0-9_А-Яа-я@!]* {printf("%s - IDENTIFIER\n", yytext);}

[0-9]*\.[0-9]+ {printf("%s - DOUBLE_NUMBER\n", yytext);} 

[0-9]+\.?[0-9]*(e(\-|\+)?[0-9]+)? {printf("%s - EXP_DOUBLE_NUMBER\n", yytext);} 

(\"[^"\n]?\")|(\'[^\'\n]?\') {printf("%s - CHAR\n", yytext);}

(\"[^"\n]*\")|(\'[^\'\n]*\') {printf("%s - STRING\n", yytext);} 



[ \t] {
    // Игнорирование лишних пробелов и табуляций. 
}

. {
    bufferString[0] = 0;
    strcat(bufferString, yytext);
    printf("%s - UNRECOGNIZED TOKEN.", bufferString);
}

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