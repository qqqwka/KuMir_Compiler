#pragma once
#include <iostream>
#include <string>
#include <list>
using namespace std;

class ProgramNode;
class ExprNode;
class ExprListNode;
class StmtNode;
class BlockStmtNode;
class StmtListNode;
class ElementNode;
class ElementListNode;

class ParamListNode;
class ParamNode;
class ParamModifierNode;
class CycleStmtNode;
class WhileStmtNode;
class ForStmtNode;
class IfStmtNode;
class TimesStmtNode;
class TypeNode;
class ArrTypeNode;
class SwitchCaseStmtNode;
class VarListNode;
class VarNode;
class VarDeclarationNode;
class CaseListNode;
class SimpleCaseNode;
class OutputNode;
class InputNode;

class AlgImplNode;
class AlgFuncImplNode;
class AlgProcImplNode;
class ParamDeclarationListNode;


class ProgramNode{
public:
    int id;
    ElementListNode* element_list = NULL;

    ProgramNode(ElementListNode* element_list);
	void toDot(string &dot);
};

class TypeNode{
public:
    enum Type{
        bool_, char_, float_, int_, string_
    };

    int id;
    Type type;
    string* name = NULL;
    int Int = 0;
    bool Bool;
    char Char = 0;
    float Float = 0;


    TypeNode(Type type);
    void toDot(string& dot);
};

class ArrTypeNode{
public:
    enum Type{
        inttab, floattab, booltab, chartab, stringtab, tab
    };

    int id;
    Type type;
    string *name;
	int Int = 0;
	TypeNode* type = NULL;

    ArrTypeNode(Type type);
    ArrTypeNode(TypeNode* type, Type type);
    void toDot(string &dot);

};

class ExprNode{
public:
	enum Type{
        int_lit, char_lit, float_lit, string_lit, bool_lit,
		id_, expr_list, plus, minus, mul_expr, div_expr, less, greater, pow_expr, and_expr, or_expr, 
        greater_equal, less_equal, not_equal, equal_expr,
		uminus, uplus, not_expr, arr_expr, arr_range_expr, id_expr_list
    };

	int id;
    Type type;
    char Char = 0;
    string* String = NULL;
    int Int = 0;
    float Float = 0;
    bool Bool;
    string* ParentID = NULL;
    string* name = NULL;

    ExprNode* expr_left = NULL;
    ExprNode* expr_right = NULL;
    ExprListNode* expr_list = NULL;

	ExprNode();
    ExprNode(Value* value, Type type);
    ExprNode(ExprNode* exprNode, Type type, TypeNode* typeNode);

	static ExprNode* OperatorExpr(Type type, ExprNode* left, ExprNode* right);
    static ExprNode* ExprFromBoolLiteral(Type type, bool value);
    static ExprNode* ExprFromIntLiteral(Type type, int value);
    static ExprNode* ExprFromFloatLiteral(Type type, float value);
    static ExprNode* ExprFromCharLiteral(Type type, char value);
    static ExprNode* ExprFromStringLiteral(Type type, string* value);
	static ExprNode* IdExpr(Type type, string* name, ExprNode* expr, ExprListNode* expr_list);

	void toDot(string &dot, const string &pos = "");
};


class ExprListNode{
public:

	int id;
    list<ExprNode*>* exprs = NULL;

    ExprListNode(ExprNode* expr);
    ExprListNode(ExprListNode* exprs);
    static ExprListNode* Append(ExprListNode* list, ExprNode* expr);

	void toDot(string &dot, const string &type="expr_list");
   
};

class StmtNode{
public:
	
	enum Type
    {
        input_, output_, func_stmt, id_stmt, assign_stmt, cycle_stmt, while_stmt, for_stmt, if_stmt, times_stmt, switch_case_stmt, var_list_stmt, expr_, id_
    };

    int id;
    Type type;
    ExprNode* expr = NULL;
	ExprNode* expr_left = NULL;
    ExprNode* expr_right = NULL;
	ExprListNode* expr_list = NULL;
    bool isStatic;
    
	InputNode* input_list = NULL;
	OutputNode* output_list = NULL;
	
    IfStmtNode* if_stmt = NULL;
    WhileStmtNode* while_stmt = NULL;
    ForStmtNode* for_stmt = NULL;
	VarListNode* var_list = NULL;
	CycleStmtNode* cycle_stmt = NULL;
	TimesStmtNode* times_stmt = NULL;
	SwitchCaseStmtNode* switch_case_stmt = NULL;

    static StmtNode* InputStmt(Type type, InputNode* input_list);
	static StmtNode* OutputStmt(Type type, OutputNode* output_list);
    static StmtNode* FunctionStmt(Type type, string* name, ExprListNode* expr_list);
	static StmtNode* IDStmt(Type type, string* name);
	static StmtNode* AssignStmt(Type type, ExprNode* left, ExprNode* right);
	static StmtNode* DeclarationCycle(Type type, CycleStmtNode* cycle_stmt);
	static StmtNode* DeclarationWhile(Type type, WhileStmtNode* while_stmt);
	static StmtNode* DeclarationFor(Type type, ForStmtNode* for_stmt);
	static StmtNode* DeclarationIf(Type type, IfStmtNode* if_stmt);
	static StmtNode* DeclarationTimes(Type type, TimesStmtNode* times_stmt);
	static StmtNode* DeclarationSwitchCase(Type type, SwitchCaseStmtNode* switch_case_stmt);
	static StmtNode* VarListStmt(Type type, VarListNode* var_list);
    StmtNode();
	
    void toDot(string& dot);
	
};


class StmtListNode{
public:
	
	int id;
    list<StmtNode*>* stmts = NULL;

    StmtListNode(StmtNode* stmt);
	StmtListNode(StmtListNode* list);
    static StmtListNode* Append(StmtListNode* list, StmtNode* stmt);

	void toDot(string &dot, const string &type = "stmt_list");

};

class BlockStmtNode{
public:
	
	int id;
    StmtListNode* stmts = NULL;

    BlockStmtNode(StmtListNode* stmts);

	void toDot(string &dot);

};

class ElementNode{
public:

	int id;
	AlgFuncImplNode* algfunc_impl = NULL;
	AlgProcImplNode* algproc_impl = NULL;
    

    static ElementNode* addAlgFunc(AlgFuncImplNode* algfunc_imp);
    static ElementNode* addAlgProc(AlgProcImplNode* algproc_impl);

    void toDot(string& dot);

};


class ElementListNode{
public:
	
	int id;
    list<ElementNode*>* elements = NULL;
	AlgImplNode* alg_impl = NULL;
	
	ElementListNode(AlgImplNode* alg_impl);
    ElementListNode(ElementNode* element);
    ElementListNode(ElementListNode* elements);
    static ElementListNode* Append(ElementListNode* elements, ElementNode* element);

    void toDot(string& dot);

};


class ParamListNode{
public:
	
	int id;
    list<ParamNode*>* params = NULL;

    ParamListNode(ParamNode* param);
    ParamListNode(ParamListNode* list);
    static ParamListNode* Append(ParamListNode* params, ParamNode* param);

    void toDot(string& dot);

};


class ParamNode{
public:
	
	int id;
    Type type;
    string *name;
	int Int = 0;
	VarDeclarationNode* var_decl = NULL;
	ParamModifierNode* param_modif = NULL;
	
    ParamNode(VarDeclarationNode* var_decl);
	ParamNode(ParamModifierNode* param_modif, VarDeclarationNode* var_decl);

    void toDot(string &dot);
	
};


class ParamModifierNode{
public:
	
	enum Type{
        arg_, res_, argres_
    };

    int id;
    Type type;


    ParamModifierNode(Type type);
    void toDot(string& dot);
	
};


class CycleStmtNode{
public:
	
	int id;
    string* name = NULL;
    TypeNode* type = NULL;
	
	BlockStmtNode* block_stmt = NULL;
	StmtNode* stmt = NULL;
	
    static CycleStmtNode* CycleStatement(BlockStmtNode* block_stmt, StmtNode* stmt);

    void toDot(string& dot);
	
};


class WhileStmtNode{
public:
	
	int id;
    string* name = NULL;
    TypeNode* type = NULL;
	
	ExprNode* expr = NULL;
	BlockStmtNode* block_stmt = NULL;
	StmtNode* stmt = NULL;
	
    static WhileStmtNode* WhileStatement(ExprNode* expr, BlockStmtNode* block_stmt, StmtNode* stmt);

    void toDot(string& dot);
};


class ForStmtNode{
public:
	
	int id;
    string* name = NULL;
    TypeNode* type = NULL;
	
	ExprNode* expr_first = NULL;
	ExprNode* expr_second = NULL;
	ExprNode* expr_third = NULL;
	
	BlockStmtNode* block_stmt = NULL;
	StmtNode* stmt = NULL;
	
    static ForStmtNode* ForStatement(string* name, ExprNode* expr_first, ExprNode* expr_second, ExprNode* expr_third, BlockStmtNode* block_stmt, StmtNode* stmt);

    void toDot(string& dot);
};


class IfStmtNode{
public:
	
	int id;
    string* name = NULL;
    TypeNode* type = NULL;
	
	StmtNode* stmt = NULL;
	
	BlockStmtNode* block_stmt_first = NULL;
	BlockStmtNode* block_stmt_second = NULL;
	
    static IfStmtNode* IfStatement(StmtNode* stmt, BlockStmtNode* block_stmt_first, BlockStmtNode* block_stmt_second);

    void toDot(string& dot);
};


class TimesStmtNode{
public:
	
	int id;
    string* name = NULL;
    TypeNode* type = NULL;
	
	ExprNode* expr = NULL;
	BlockStmtNode* block_stmt = NULL;
	StmtNode* stmt = NULL;
	
    static TimesStmtNode* TimesStatement(ExprNode* expr, BlockStmtNode* block_stmt, StmtNode* stmt);

    void toDot(string& dot);
};


class SwitchCaseStmtNode{
public:
	
	int id;
    string* name = NULL;
    TypeNode* type = NULL;
	
	CaseListNode* case_list = NULL;
	
	ExprNode* expr_first = NULL;
	ExprNode* expr_second = NULL;
	
    static SwitchCaseStmtNode* SwitchCaseStatement(ExprNode* expr_first, CaseListNode* case_list, ExprNode* expr_second);

    void toDot(string& dot);
};

class SimpleCaseNode{
public:
	
	int id;
	
	ExprNode* expr = NULL;
	BlockStmtNode* block_stmt = NULL;
	
    SimpleCaseNode(ExprNode* expr, BlockStmtNode* block_stmt);

    void toDot(string& dot);
	
};

class CaseListNode{
public:
	
	int id;
	
	list<SimpleCaseNode*>* cases = NULL;
	
    CaseListNode(SimpleCaseNode* case_);
	CaseListNode(CaseListNode* list);
	static CaseListNode* Append(CaseListNode* list, SimpleCaseNode* case_);

    void toDot(string& dot);
};

class VarListNode{
public:
	
	int id;
	string* name = NULL;
	VarNode* var = NULL;
    list<VarNode*>* vars = NULL;

    VarListNode(VarNode* var);
    VarListNode(VarListNode* list);
    static VarListNode* Append(VarListNode* vars, VarNode* var);
	static VarListNode* VarListID(VarListNode* vars, string* name);

    void toDot(string& dot);
	
};


class VarNode{
public:
	
	int id;
    
	VarDeclarationNode* var_decl = NULL;
	
	ExprNode* expr = NULL;
	
    VarNode(VarDeclarationNode* var_decl);
	VarNode(VarDeclarationNode* var_decl, ExprNode* expr);
    void toDot(string &dot);
	
};


class VarDeclarationNode{
public:
	
	int id;
    Type type;
    string *name;
	int Int = 0;
	TypeNode* type = NULL;
	ArrTypeNode* arr_type = NULL;
	
	ExprNode* expr_first = NULL;
	ExprNode* expr_second = NULL;
	ExprNode* expr_third = NULL;
	ExprNode* expr_fourth = NULL;
	
    VarDeclarationNode(TypeNode* type, string* name);
	VarDeclarationNode(ArrTypeNode* arr_type, string* name, ExprNode* expr_first, ExprNode* expr_second);
	VarDeclarationNode(ArrTypeNode* arr_type, string* name, ExprNode* expr_first, ExprNode* expr_second, ExprNode* expr_third, ExprNode* expr_fourth);
    void toDot(string &dot);
	
};


class AlgImplNode{
public:
	
	int id;
    string* name = NULL;
    TypeNode* type = NULL;
	
	ParamDeclarationListNode* param_decl = NULL;
	BlockStmtNode* block_stmt = NULL;
	ExprNode* expr_first = NULL;
	ExprNode* expr_second = NULL;
	
    static AlgImplNode* AlgImplement(ParamDeclarationListNode* param_decl, ExprNode* expr_first, ExprNode* expr_second, BlockStmtNode* block_stmt);

    void toDot(string& dot);
	
};


class AlgFuncImplNode{
public:
	
	int id;
    string* name = NULL;
    TypeNode* type = NULL;
	
	ParamDeclarationListNode* param_decl = NULL;
	BlockStmtNode* block_stmt = NULL;
	ExprNode* expr_first = NULL;
	ExprNode* expr_second = NULL;
	
    static AlgFuncImplNode* AlgFuncImplement(TypeNode* type, string* name, ParamDeclarationListNode* param_decl, ExprNode* expr_first, ExprNode* expr_second, BlockStmtNode* block_stmt);

    void toDot(string& dot);

};


class AlgProcImplNode{
public:

	int id;
    string* name = NULL;
    TypeNode* type = NULL;
	
	ParamDeclarationListNode* param_decl = NULL;
	BlockStmtNode* block_stmt = NULL;
	ExprNode* expr_first = NULL;
	ExprNode* expr_second = NULL;
	
    static AlgProcImplNode* AlgProcImplement(string* name, ParamDeclarationListNode* param_decl, ExprNode* expr_first, ExprNode* expr_second, BlockStmtNode* block_stmt);

    void toDot(string& dot);
};


class ParamDeclarationListNode{
public:
	
	int id;
    
	ParamListNode* param_list = NULL;

    ParamDeclarationListNode(ParamListNode* param_list);

    void toDot(string& dot);
};

void connectVerticesDots(string& s, int parentId, int childId);
void createVertexDot(string& s, int id, string name = "", string type = "", string value = "", string pos = "");   