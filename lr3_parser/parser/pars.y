%{
    #include <iostream>
    #include "classesnodes.h"
    void yyerror(char const* s);
    extern int yylex(void);
    using namespace std;
    ProgramNode* global_program;
%}

%union {
		int int_literal;
		string* string_literal;
		string* identifier;
		bool bool_literal;
		float float_literal;
		char char_literal;
		
		ProgramNode* prg;
		ExprNode* expr;
		ExprListNode* expr_list;
		StmtNode* stmt;
		BlockStmtNode* block_stmt;
		StmtListNode* stmt_list;
		ElementNode* element;
		ElementListNode* element_list;
		//ID '(' ExpressionList ')' 
		//ID 
		//FuncDeclNode* function_stmt;
		//FuncParamNode* function_param;
		ParamListNode* param_list;
		ParamNode* param;
		ParamModifierNode* param_modif;
		CycleStmtNode* cycle_stmt;
		WhileStmtNode* while_stmt;
		ForStmtNode* for_stmt;
		IfStmtNode* if_stmt;
		TimesStmtNode* times_stmt;
		TypeNode* type;
		ArrTypeNode* arr_type;
		SwitchCaseStmtNode* switchcase_stmt;
		VarListNode* var_list;
		VarNode* var;
		VarDeclarationNode* var_decl;
		CaseListNode* case_list;
		SimpleCaseNode* simple_case;
		OutputNode* output_list;
		InputNode* input_list;

		AlgImplNode* alg_impl;
		AlgFuncImplNode* alg_func_impl;
		AlgProcImplNode* alg_proc_impl;
		ParamDeclarationListNode* param_decl_list;
}

%type <prg>Program
%type <element_list>ProgramElementList
%type <element>ProgramElement 
%type <block_stmt>BlockStatement
%type <stmt_list>StatementList
%type <stmt>Statement
%type <input_stmt>InputList
%type <output_stmt>OutputList
%type <cycle_stmt>CycleStatement 
%type <times_stmt>TimesStatement 
%type <if_stmt>IfStatement
%type <while_stmt>WhileStatement 
%type <for_stmt>ForStatement
%type <switchcase_stmt>SwitchCaseStatement 
%type <case_list>CaseList
%type <simple_case>SimpleCase
%type <expr_list>ExpressionList
%type <expr>Expression 
%type <type>Type
%type <type>ArrType
%type <alg_impl>AlgorithmImplementation 
%type <alg_func_impl>AlgorithmFunctionImplementation 
%type <alg_proc_impl>AlgorithmProcedureImplementation 
%type <var_decl>VarDeclaration 
%type <var>Var
%type <var_list>VarList 
%type <param_decl_list>ParamDeclarationList 
%type <param_list>ParamList 
%type <param_modif>ParamModifier 
%type <param>Param

%type <int_literal>INT_LITERAL
%type <string_literal>STRING_LITERAL
%type <identifier>ID
%type <bool_literal>TRUE
%type <bool_literal>FALSE
%type <float_literal>FLOAT_LITERAL
%type <char_literal>CHAR_LITERAL



%token ALG BEGIN END ARG RES ARGRES DANO NADO NS ENDL
%token INT FLOAT BOOL CHAR STRING TAB INTTAB FLOATTAB BOOLTAB CHARTAB STRINGTAB
%token ID INPUT OUTPUT
%token TRUE FALSE NOT IF THEN ELSE CYCLE_BEGIN CYCLE_END CYCLE_END_IF DONE STEP FROM TO SWITCH CASE WHILE FOR TIMES
%token INT_LITERAL FLOAT_LITERAL CHAR_LITERAL STRING_LITERAL BOOL_LITERAL

%left ','
%right ASSIGN
%left OR
%left AND
%left '=' NOT_EQUAL
%left '>' '<' GREATER_EQUAL LESS_EQUAL 
%left ':'
%left '+' '-'
%left '*' '/'
%left UMINUS UPLUS
%left POW
%right NOT
%nonassoc '(' ')' '[' ']'

%start Program

%% 

Program: EndlList ProgramElementList 
	   ;

ProgramElementList: AlgorithmImplementation
                  | ProgramElementList ProgramElement
                  ;

ProgramElement: AlgorithmFunctionImplementation
			  | AlgorithmProcedureImplementation
			  ;

BlockStatement: /* */
              | StatementList EndlList
              ;
			  
StatementList: Statement
             | StatementList EndlList Statement
             ;
			 
Statement: InputList
		 | OutputList
		 | ID '(' ExpressionList ')' 
		 | ID { $$ = $1 }
		 | Expression ASSIGN Expression
		 | CycleStatement
         | WhileStatement
         | ForStatement
		 | IfStatement
		 | TimesStatement
		 | SwitchCaseStatement
		 | VarList
         ;

InputList: INPUT ID
		 | InputList ',' ID
		 ;

OutputList: OUTPUT Expression
		  | OutputList ',' Expression
		  | OutputList ',' NS
		  ;
	 
CycleStatement: CYCLE_BEGIN EndlList BlockStatement CYCLE_END 
			  | CYCLE_BEGIN EndlList BlockStatement CYCLE_END_IF Statement 
			  ;

TimesStatement: CYCLE_BEGIN Expression TIMES EndlList BlockStatement CYCLE_END 
			  | CYCLE_BEGIN Expression TIMES EndlList BlockStatement  CYCLE_END_IF Statement 
			  ;

IfStatement: IF Statement EndlList THEN EndlList BlockStatement DONE 
		   | IF Statement EndlList THEN EndlList BlockStatement ELSE BlockStatement DONE 
		   ;
		   
WhileStatement: CYCLE_BEGIN WHILE Expression EndlList BlockStatement  CYCLE_END 
			  | CYCLE_BEGIN WHILE Expression EndlList BlockStatement  CYCLE_END_IF Statement 
			  ;

ForStatement: CYCLE_BEGIN FOR ID FROM Expression TO Expression EndlList BlockStatement  CYCLE_END 
			| CYCLE_BEGIN FOR ID FROM Expression TO Expression EndlList BlockStatement  CYCLE_END_IF Statement 
			| CYCLE_BEGIN FOR ID FROM Expression TO Expression STEP Expression EndlList BlockStatement  CYCLE_END 
			| CYCLE_BEGIN FOR ID FROM Expression TO Expression STEP Expression EndlList BlockStatement  CYCLE_END_IF Statement 
	        ;
			
SwitchCaseStatement: SWITCH Expression EndlList CaseList DONE 
				   | SWITCH Expression EndlList CaseList ELSE Expression EndlList DONE 
				   ;

SimpleCase: CASE Expression ':' EndlList BlockStatement
		  ;

CaseList: SimpleCase
		| CaseList SimpleCase
		;

EndlOpt: /* empty */
       | EndlList
       ;

EndlList: ENDL
        | EndlList ENDL    
        ;

ExpressionList: Expression
			  | ExpressionList ',' Expression
			  ;

Expression: INT_LITERAL
          | CHAR_LITERAL
          | FLOAT_LITERAL
          | STRING_LITERAL
		  | BOOL_LITERAL
          | ID '(' ExpressionList ')'
		  | ID
          | Expression '+' Expression
          | Expression '-' Expression
          | Expression '*' Expression
          | Expression '/' Expression
          | Expression '<' Expression
          | Expression '>' Expression
		  | Expression POW Expression
          | Expression AND Expression
          | Expression OR  Expression
          | Expression GREATER_EQUAL  Expression
          | Expression LESS_EQUAL  Expression
          | Expression NOT_EQUAL  Expression
          | Expression '=' Expression
          | '-' Expression %prec UMINUS
          | '+' Expression %prec UPLUS
          | Expression '[' Expression ']'
          | Expression '[' Expression ':' Expression ']'
		  | NOT Expression
          ;


Type: BOOL 
    | CHAR 
    | FLOAT
    | INT 
    | STRING 
    ;

ArrType: INTTAB
       | FLOATTAB
       | BOOLTAB
       | CHARTAB
       | STRINGTAB
	   | Type TAB
	   ;
			  
AlgorithmImplementation: ALG ParamDeclarationList EndlList BEGIN BlockStatement END 
					   | ALG ParamDeclarationList EndlList DANO Expression EndlList BEGIN BlockStatement END 
					   | ALG ParamDeclarationList EndlList NADO Expression EndlList BEGIN BlockStatement END 
					   | ALG ParamDeclarationList EndlList DANO Expression EndlList NADO Expression EndlList BEGIN BlockStatement END 
					   ;
					   
AlgorithmFunctionImplementation: ALG Type ID ParamDeclarationList EndlList BEGIN BlockStatement END 
					           | ALG Type ID ParamDeclarationList EndlList DANO Expression EndlList BEGIN BlockStatement END 
					           | ALG Type ID ParamDeclarationList EndlList NADO Expression EndlList BEGIN BlockStatement END 
					           | ALG Type ID ParamDeclarationList EndlList DANO Expression EndlList NADO Expression EndlList BEGIN BlockStatement END 
							   ;
					   
AlgorithmProcedureImplementation: ALG ID ParamDeclarationList EndlList BEGIN BlockStatement END 
					            | ALG ID ParamDeclarationList EndlList DANO Expression EndlList BEGIN BlockStatement END 
					            | ALG ID ParamDeclarationList EndlList NADO Expression EndlList BEGIN BlockStatement END
					            | ALG ID ParamDeclarationList EndlList DANO Expression EndlList NADO Expression EndlList BEGIN BlockStatement END 
								;
	
VarDeclaration: Type ID
			  | ArrType ID '[' Expression ':' Expression ']' 
			  | ArrType ID '[' Expression ':' Expression ',' Expression ':' Expression ']' 
              ;	
	
Var: VarDeclaration
   | VarDeclaration ASSIGN Expression
   ;
			  
VarList: Var 
	   | VarList ',' EndlOpt Var
	   | VarList ',' EndlOpt ID
	   ;
	   
ParamDeclarationList: /* empty */
				| '(' ParamList ')'
				;

ParamList: Param
		 | ParamList ',' Param
		 ;

ParamModifier: ARG
			 | RES
			 | ARGRES
			 ;

Param: VarDeclaration
	 | ParamModifier VarDeclaration
	 ;
	 
%%

void yyerror(char const *s)
{
       printf("%s\n", s);
}
