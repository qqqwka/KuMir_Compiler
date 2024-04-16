
%token ALG BEGIN END ARG RES ARGRES DANO NADO NS ENDL
%token INT FLOAT BOOL CHAR STRING TAB INTTAB FLOATTAB BOOLTAB CHARTAB STRINGTAB
%token ID INPUT OUTPUT
%token NOT IF THEN ELSE CYCLE_BEGIN CYCLE_END CYCLE_END_IF DONE STEP FROM TO SWITCH CASE WHILE FOR TIMES
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
%right NOT
%nonassoc '(' ')' '[' ']'

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
		 | ID 
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

CaseList: CASE Expression ':' EndlList BlockStatement
		| CaseList CASE Expression ':' EndlList BlockStatement
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