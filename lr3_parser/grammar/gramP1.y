
%token ALG BEGIN END /* исп кон_исп */ ARG RES ARGRES DANO NADO UTV
%token INT FLOAT BOOL CHAR STRING TAB INTTAB FLOATTAB BOOLTAB CHARTAB STRINGTAB
%token ID
%token NOT TRUE FALSE BREAK INPUT OUTPUT 
%token IF THEN ELSE CYCLE_BEGIN CYCLE_END CYCLE_END_IF DONE STOP STEP FROM TO SWITCH CASE WHILE FOR TIMES
%token INT_LITERAL FLOAT_LITERAL CHAR_LITERAL STRING_LITERAL BOOL_LITERAL

%nonassoc ENDL
%nonassoc '{' '}' 
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

BlockStatement: /* */
              | StatementList EndlList
              ;
			  
StatementList: Statement
             | StatementList ',' Statement
             ;
			 
Statement: Expression
		 | CycleStatement
         | WhileStatement
         | ForStatement
		 | IfStatement
		 | TimesStatement
		 | SwitchCaseStatement
         ;
		 
CycleStatement: CYCLE_BEGIN EndlList BlockStatement CYCLE_END EndlList
			  | CYCLE_BEGIN EndlList BlockStatement CYCLE_END_IF Statement EndlList
			  ;

TimesStatement: CYCLE_BEGIN Expression TIMES EndlList BlockStatement CYCLE_END EndlList
			  | CYCLE_BEGIN Expression TIMES EndlList BlockStatement  CYCLE_END_IF Statement EndlList
			  ;

IfStatement: IF Statement EndlList THEN EndlList BlockStatement  DONE EndlList
		   | IF Statement EndlList THEN EndlList BlockStatement  ELSE EndlList BlockStatement EndlList DONE EndlList
		   ;

WhileStatement: CYCLE_BEGIN WHILE Expression EndlList BlockStatement  CYCLE_END EndlList
			  | CYCLE_BEGIN WHILE Expression EndlList BlockStatement  CYCLE_END_IF Statement EndlList
			  ;

ForStatement: CYCLE_BEGIN FOR Expression FROM Expression TO Expression EndlList BlockStatement  CYCLE_END EndlList
			| CYCLE_BEGIN FOR Expression FROM Expression TO Expression EndlList BlockStatement  CYCLE_END_IF Statement EndlList
			| CYCLE_BEGIN FOR Expression FROM Expression TO Expression STEP Expression EndlList BlockStatement  CYCLE_END EndlList
			| CYCLE_BEGIN FOR Expression FROM Expression TO Expression STEP Expression EndlList BlockStatement  CYCLE_END_IF Statement EndlList
	        ;
			
SwitchCaseStatement: SWITCH Expression EndlList CaseList EndlList DONE
				   | SWITCH Expression EndlList CaseList EndlList ELSE Expression EndlList DONE EndlList
				   ;

CaseList: CASE Expression ':' Expression
		| CaseList EndlList CASE Expression ':' Expression
		;

EndlList: ENDL
        /* | EndlList ENDL */
        ;

ExpressionList: Expression
			  | ExpressionList ',' Expression
			  ;

Expression: INT_LITERAL
          | CHAR_LITERAL
          | FLOAT_LITERAL
          | STRING_LITERAL
		  | BOOL_LITERAL
          | '(' Expression ')'
          | ID '(' ExpressionList ')'
          | ID '(' ')' 
		  /* | ID */
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
		  | Expression ASSIGN Expression
          | '-' Expression 
          | '+' Expression 
          | Expression '[' Expression  ']'
          | ID '[' Expression ']'
          | ID '[' Expression ']' '[' Expression ']'
          | ID '[' Expression ']' '[' Expression ']' '[' Expression ']'
          | ID '[' Expression ':' Expression ']'
		  | NOT Expression
          ;

Type: BOOL 
    | CHAR 
    | FLOAT
    | INT 
    | STRING 
    | TAB
    | INTTAB
    | FLOATTAB
    | BOOLTAB
    | CHARTAB
    | STRINGTAB
    ;		  

ProgramElementList: ProgramElement
                  | ProgramElementList ProgramElement
                  ;

ProgramElement: AlgorithmImplementation
			  | AlgorithmFunctionImplementation
			  | AlgorithmProcedureImplementation
			  ;
			  
AlgorithmImplementation: ALG ParamDeclaration EndlList BEGIN BlockStatement END EndlList
					   | ALG ParamDeclaration EndlList DANO Expression EndlList BEGIN BlockStatement END EndlList
					   | ALG ParamDeclaration EndlList NADO Expression EndlList BEGIN BlockStatement END EndlList
					   | ALG ParamDeclaration EndlList DANO Expression EndlList NADO Expression EndlList BEGIN BlockStatement END EndlList
					   ;
					   
AlgorithmFunctionImplementation: ALG Type ID ParamDeclaration EndlList BEGIN BlockStatement END EndlList
					           | ALG Type ID ParamDeclaration EndlList DANO Expression EndlList BEGIN BlockStatement END EndlList
					           | ALG Type ID ParamDeclaration EndlList NADO Expression EndlList BEGIN BlockStatement END EndlList
					           | ALG Type ID ParamDeclaration EndlList DANO Expression EndlList NADO Expression EndlList BEGIN BlockStatement END EndlList
							   ;
					   
AlgorithmProcedureImplementation: ALG ID ParamDeclaration EndlList BEGIN BlockStatement END EndlList
					            | ALG ID ParamDeclaration EndlList DANO Expression EndlList BEGIN BlockStatement END EndlList
					            | ALG ID ParamDeclaration EndlList NADO Expression EndlList BEGIN BlockStatement END EndlList
					            | ALG ID ParamDeclaration EndlList DANO Expression EndlList NADO Expression EndlList BEGIN BlockStatement END EndlList
								;

ParamDeclaration: /* empty */
				| '(' ParamList ')'
				;

ParamList: Param
		 | ParamList ',' Param
		 ;
		 
Param: Type ID
	 | ARG Type ID
	 | RES Type ID
	 | ARGRES Type ID
	 ;
		  