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
	
	//#pragma warning(disable: 4996)
	
	#include <clocale>
	
    using namespace std;
	
    //#include <cstdlib>  

	//#include <Windows.h>
	//#undef min
	//#undef max


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

алг { printf("Found KW_ALG: %s\n", yytext); }
нач { printf("Found KW_NACH: %s\n", yytext); }
кон { printf("Found KW_KON: %s\n", yytext); }
исп { printf("Found KW_ISP: %s\n", yytext); }
кон_исп { printf("Found KW_KON_ISP: %s\n", yytext); }
дано { printf("Found KW_DANO: %s\n", yytext); }
надо { printf("Found KW_NADO: %s\n", yytext); }
арг { printf("Found KW_ARG: %s\n", yytext); }
рез { printf("Found KW_REZ: %s\n", yytext); }
аргрез { printf("Found KW_ARGREZ: %s\n", yytext); }
знач { printf("Found KW_ZNACH: %s\n", yytext); }
таб { printf("Found KW_TAB: %s\n", yytext); }
целтаб { printf("Found KW_CELTAB: %s\n", yytext); }
вещтаб { printf("Found KW_VESHTAB: %s\n", yytext); }
логтаб { printf("Found KW_LOGTAB: %s\n", yytext); }
литтаб { printf("Found KW_LITTAB: %s\n", yytext); }
и { printf("Found KW_I: %s\n", yytext); }
или { printf("Found KW_ILI: %s\n", yytext); }
не { printf("Found KW_NE: %s\n", yytext); }
да { printf("Found KW_DA: %s\n", yytext); }
нет { printf("Found KW_NET: %s\n", yytext); }
утв { printf("Found KW_UTV: %s\n", yytext); }
выход { printf("Found KW_VIHOD: %s\n", yytext); }
ввод { printf("Found KW_VVOD: %s\n", yytext); }
вывод { printf("Found KW_VIVOD: %s\n", yytext); }
нс { printf("Found KW_NS: %s\n", yytext); }
если { printf("Found KW_ESLI: %s\n", yytext); }
то { printf("Found KW_TO: %s\n", yytext); }
иначе { printf("Found KW_INACHE: %s\n", yytext); }
все { printf("Found KW_VSE: %s\n", yytext); }
выбор { printf("Found KW_VIBOR: %s\n", yytext); }
при { printf("Found KW_PRI: %s\n", yytext); }
нц { printf("Found KW_NC: %s\n", yytext); }
кц { printf("Found KW_KC: %s\n", yytext); }
кц_при { printf("Found KW_KC_PRI: %s\n", yytext); }
раз { printf("Found KW_RAZ: %s\n", yytext); }
пока { printf("Found KW_POKA: %s\n", yytext); }
для { printf("Found KW_DLYA: %s\n", yytext); }
от { printf("Found KW_OT: %s\n", yytext); }
до { printf("Found KW_DO: %s\n", yytext); }
шаг { printf("Found KW_SHAG: %s\n", yytext); }

цел { printf("Found TYPE_CEL: %s\n", yytext); }
вещ { printf("Found TYPE_VESH: %s\n", yytext); }
лог { printf("Found TYPE_LOG: %s\n", yytext); }
сим { printf("Found TYPE_SIM: %s\n", yytext); }
лит { printf("Found TYPE_LIT: %s\n", yytext); }

"+" { printf("Found OPERATOR_PLUS: %s\n", yytext); }
"-" { printf("Found OPERATOR_MINUS: %s\n", yytext); }
"*" { printf("Found OPERATOR_MUL: %s\n", yytext); }
"/" { printf("Found OPERATOR_DIV: %s\n", yytext); }
"%" { printf("Found OPERATOR_MOD: %s\n", yytext); }

"=" { printf("Found OPERATOR_ASSIGNMENT: %s\n", yytext); }
"==" { printf("Found OPERATOR_EQUAL: %s\n", yytext); }
"!=" { printf("Found OPERATOR_NOT_EQUAL: %s\n", yytext); }
"<" { printf("Found OPERATOR_LESS: %s\n", yytext); }
">" { printf("Found OPERATOR_MORE: %s\n", yytext); }
"<=" { printf("Found OPERATOR_LESS_OR_EQUAL: %s\n", yytext); }
">=" { printf("Found OPERATOR_MORE_OR_EQUAL: %s\n", yytext); }

"&" { printf("Found OPERATOR_AMPERSAND: %s\n", yytext); }
"|" { printf("Found OPERATOR_BIT_OR: %s\n", yytext); }
"!" { printf("Found OPERATOR_BIT_NOT: %s\n", yytext); }
"^" { printf("Found OPERATOR_BIT_XOR: %s\n", yytext); }
"<<" { printf("Found OPERATOR_BIT_LEFT_SHIFT: %s\n", yytext); }
">>" { printf("Found OPERATOR_BIT_RIGHT_SHIFT: %s\n", yytext); }

"&&" { printf("Found OPERATOR_AND: %s\n", yytext); }
"||" { printf("Found OPERATOR_OR: %s\n", yytext); }

"+=" { printf("Found OPERATOR_PLUS_ASSIGNMENT: %s\n", yytext); }
"-=" { printf("Found OPERATOR_MINUS_ASSIGNMENT: %s\n", yytext); }
"*=" { printf("Found OPERATOR_MUL_ASSIGNMENT: %s\n", yytext); }
"/=" { printf("Found OPERATOR_DIV_ASSIGNMENT: %s\n", yytext); }
"%=" { printf("Found OPERATOR_MOD_ASSIGNMENT: %s\n", yytext); }
"&=" { printf("Found OPERATOR_BIT_AND_ASSIGNMENT: %s\n", yytext); }
"|=" { printf("Found OPERATOR_BIT_OR_ASSIGNMENT: %s\n", yytext); }
"^=" { printf("Found OPERATOR_BIT_XOR_ASSIGNMENT: %s\n", yytext); }
"<<=" { printf("Found OPERATOR_BIT_LEFT_SHIFT_ASSIGNMENT: %s\n", yytext); }
">>=" { printf("Found OPERATOR_BIT_RIGHT_SHIFT_ASSIGNMENT: %s\n", yytext); }

"." { printf("Found OPERATOR_POINT: %s\n", yytext); }
".." { printf("Found OPERATOR_RANGE: %s\n", yytext); }
"..=" { printf("Found OPERATOR_RANGE_ASSIGMENT: %s\n", yytext); }
"->" { printf("Found OPERATOR_ARROW: %s\n", yytext); }

"(" { printf("Found LEFT_ROUND_BRACKET: %s\n", yytext); }
")" { printf("Found RIGHT_ROUND_BRACKET: %s\n", yytext); }
"[" { printf("Found LEFT_SQUARE_BRACKET: %s\n", yytext); }
"]" { printf("Found RIGHT_SQUARE_BRACKET: %s\n", yytext); }
"{" { printf("Found LEFT_FIGURE_BRACKET: %s\n", yytext); }
"}" { printf("Found RIGHT_FIGURE_BRACKET: %s\n", yytext); }

"," { printf("Found COMMA: %s\n", yytext); }
";" { printf("Found SEMICOLON: %s\n", yytext); }
":" { printf("Found COLON: %s\n", yytext); }
"::" { printf("Found TWO_COLON: %s\n", yytext); }

%%

int main(int argc, char** argv) {

	//_setmode(_fileno(stdout), _O_U16TEXT);
    //_setmode(_fileno(stdin),  _O_U16TEXT);
    //_setmode(_fileno(stderr), _O_U16TEXT);
	
	//setlocale(LC_ALL, "Russian");
	//std::system("chcp 1251");
	
	//SetConsoleCP(65001);
	//SetConsoleOutputCP(65001);
	setlocale(LC_CTYPE, "Russian");
	
	
	//SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);
    
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
