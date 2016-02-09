%{
#include <stdio.h>
#include <iostream>
extern int yylex();
#include "ass6_13CS10055_translator.h"
#include <string.h>
void yyerror(const char* s);
%}



%union {
  int intval;
  float floatval;
  char charval;
  char *strval;
  struct idAttributes id_attr;
  struct expAttributes exp_attr;
  struct var_decl_attr_struct var_decl_attr;
  union initAttributes initializer_attr;
  opSpecifier u_op_attr;
  int instr;
  struct lNode *N_attr;
  struct pNode *param_attr;
}

%token AUTO_KEYWORD;
%token RESTRICT_KEYWORD;
%token UNSIGNED_KEYWORD;
%token BREAK_KEYWORD;
%token EXTERN_KEYWORD;
%token RETURN_KEYWORD;
%token VOID_KEYWORD;
%token CASE_KEYWORD;
%token FLOAT_KEYWORD;
%token SHORT_KEYWORD;
%token VOLATILE_KEYWORD;
%token CHAR_KEYWORD;
%token FOR_KEYWORD;
%token SIGNED_KEYWORD;
%token WHILE_KEYWORD;
%token CONST_KEYWORD;
%token GOTO_KEYWORD;
%token SIZEOF_KEYWORD;
%token BOOL_KEYWORD;
%token CONTINUE_KEYWORD;
%token IF_KEYWORD;
%token STATIC_KEYWORD;
%token COMPLEX_KEYWORD;
%token DEFAULT_KEYWORD;
%token INLINE_KEYWORD;
%token STRUCT_KEYWORD;
%token IMAGINARY_KEYWORD;
%token DO_KEYWORD;
%token INT_KEYWORD;
%token SWITCH_KEYWORD;
%token DOUBLE_KEYWORD;
%token LONG_KEYWORD;
%token TYPEDEF_KEYWORD;
%token ELSE_KEYWORD;
%token REGISTER_KEYWORD;
%token UNION_KEYWORD;
%token <id_attr> IDENTIFIER;
%token <intval>  INTEGER_CONSTANT;
%token <floatval> FLOAT_CONSTANT;
%token <charval> CHAR_CONSTANT;
%token <strval> STRING_LITERAL;
%token VAL_AT;
%token PLUS_PLUS;
%token MINUS_MINUS;
%token LEFT_SHIFT;
%token RIGHT_SHIFT;
%token LESS_EQUAL;
%token GREATER_EQUAL;
%token EQUAL_EQUAL;
%token NOT_EQUAL;
%token LOGICAL_AND;
%token LOGICAL_OR;
%token ELLIPSES;
%token STAR_EQUAL;
%token BY_EQUAL;
%token PERCENT_EQUAL;
%token PLUS_EQUAL;
%token MINUS_EQUAL;
%token LEFT_SHIFT_EQUAL;
%token RIGHT_SHIFT_EQUAL;
%token AND_EQUAL;
%token BITWISENOT_EQUAL;
%token OR_EQUAL;


%type<exp_attr> primary_expression;
%type<exp_attr> expression;
%type<exp_attr> postfix_expression;
%type<exp_attr> constant_expression;
%type<exp_attr> statement;
%type<exp_attr> compound_statement;
%type<exp_attr> selection_statement;
%type<exp_attr> iteration_statement;
%type<exp_attr> jump_statement;
%type<exp_attr> block_item_list;
%type<exp_attr> block_item;
%type<exp_attr> expression_statement;
%type<exp_attr> unary_expression;
%type<exp_attr> cast_expression;
%type<exp_attr> multiplicative_expression;
%type<exp_attr> additive_expression;
%type<exp_attr> shift_expression;
%type<exp_attr> relational_expression;
%type<exp_attr> equality_expression;
%type<exp_attr> and_expression;
%type<exp_attr> exclusive_or_expression;
%type<exp_attr> inclusive_or_expression;
%type<exp_attr> logical_and_expression;
%type<exp_attr> logical_or_expression;
%type<exp_attr> conditional_expression;
%type<exp_attr> assignment_expression;
%type<var_decl_attr> type_specifier;
%type<var_decl_attr> declaration_specifiers;
%type<var_decl_attr> direct_declarator;
%type<var_decl_attr> declarator;
%type<var_decl_attr> parameter_declaration;
%type<var_decl_attr> init_declarator;
%type<initializer_attr> initializer;
%type<var_decl_attr> init_declarator_list;
%type<var_decl_attr> pointer;
%type<u_op_attr> unary_operator;
%type<instr> M;
%type<N_attr> N;
%type<param_attr> argument_expression_list;


%nonassoc IF_CONFLICT;
%nonassoc ELSE_KEYWORD;

%start translation_unit;
%%


primary_expression
	: IDENTIFIER
	  {
	  	$1.loc = localST->lookup($1.var);//Check in local symboltable
	  	if(!($1.loc))//If not present in local symbol table check for global symbol table
	  	{
	  		$1.loc = globalST->lookup($1.var);
	  	}
	  	$$.loc = $1.loc;
	  	$$.type = ($1.loc)->Type;
	  	$$.array = $$.loc;
	  	$$.Eloc1 = 0;
	  }
	| INTEGER_CONSTANT
	  {
	  	$$.val.InitIntVal = $1;//Assign the value
	  	$$.type = create_tNode(INT,-1);//Create a new node of int type
	  	$$.loc = localST->gentemp(INT);//Generate a temporary in the local symbol table
	  	char *Arg1 = new char[10];
	  	sprintf(Arg1,"%d",$1);
	  	char *res = strdup(($$.loc)->srName);
	  	quadArrayRow tempQRow(Arg1,0,res,ASSIGN,0,0,$$.loc);//Generate a new temprary quadArrayRow
	  	globalQArray->emit(tempQRow);
	  }
	| FLOAT_CONSTANT
	  {
		$$.val.InitDoubleVal = $1;//Assign the value
		$$.type = create_tNode(DOUBLE,-1);
		$$.loc = localST->gentemp(DOUBLE);
	  	char *Arg1 = new char[10];
	  	sprintf(Arg1,"%lf",$1);
	  	char *res = strdup(($$.loc)->srName);
	  	quadArrayRow tempQRow(Arg1,0,res,ASSIGN,0,0,$$.loc);//Generate a new temprary quadArrayRow
	  	globalQArray->emit(tempQRow);//Add the generated row to the global quad array
	  }
	| CHAR_CONSTANT
	  {
	  	$$.val.InitCharVal = $1;
	  	$$.type = create_tNode(CHAR,-1);
	  	$$.loc = localST->gentemp(CHAR);
	  	char *Arg1 = new char[10];
	  	sprintf(Arg1,"%d",$1);
	  	char *res = strdup(($$.loc)->srName);
	  	quadArrayRow tempQRow(Arg1,0,res,ASSIGN,0,0,$$.loc);
	  	globalQArray->emit(tempQRow);
	  }
	| STRING_LITERAL
	  {
	  	constsTable[count_toc] = strdup($1);
	  	char *temp = new char[10];
	  	sprintf(temp,".LC%d",count_toc);
	  	count_toc++;
	  	$$.loc = new symbolTableRow(temp);
	  }
	| '(' expression ')'
	  {
	  		$$ = $2;//Assigns all the attributes of expression inside the braces to $$
	  }
	;

postfix_expression
	: primary_expression
	  {
	  	$$ = $1;
	  }
	| postfix_expression '[' expression ']'
	  {
	  	$$.array = $1.array;
	  	$$.type = ($1.type)->right;
	  	if(!($1.Eloc1)){
	  		$$.Eloc1 = localST->gentemp(INT);
	  		symbolTableRow *u = localST->gentemp(INT);
	  		int m = calculateWidth(($1.type)->right);
	  		char *Arg1 = new char[10];
	  		sprintf(Arg1,"%d",m);
	  		char *res = strdup(u->srName);
	  		quadArrayRow x(Arg1,0,res,ASSIGN,0,0,u);
	  		globalQArray->emit(x);
	  		Arg1 = strdup(($3.loc)->srName);
	  		char *Arg2 = strdup(u->srName);
	  		res = strdup(($$.Eloc1)->srName);
	  		quadArrayRow y(Arg1,Arg2,res,INTO,$3.loc,u,$$.Eloc1);
	  		globalQArray->emit(y);
	  	}
	  	else{
	  		symbolTableRow *temp = localST->gentemp(INT);
		  	$$.Eloc1 = localST->gentemp(INT);
		  	symbolTableRow *u = localST->gentemp(INT);
		  	int n = calculateWidth($$.type);
		  	char *Arg1 = new char[10];
		  	sprintf(Arg1,"%d",n);
		  	char *res = strdup(u->srName);
		  	quadArrayRow a(Arg1,0,res,ASSIGN,0,0,u);
	  		globalQArray->emit(a);
		  	Arg1 = strdup(($3.loc)->srName);
		  	char *Arg2 = strdup(u->srName);
		  	res = strdup(temp->srName);
		  	quadArrayRow x(Arg1,Arg2,res,INTO,$3.loc,u,temp);
		  	globalQArray->emit(x);
		  	Arg1 = strdup(($1.Eloc1)->srName);
		  	Arg2 = strdup(temp->srName);
		  	res = strdup(($$.Eloc1)->srName);
		  	quadArrayRow y(Arg1,Arg2,res,PLUS,$1.Eloc1,temp,$$.Eloc1);
		  	globalQArray->emit(y);
	  	}
	  	flag_array = 1;
	  }
	| postfix_expression '(' ')'
	  {
	  	int count = 0;
	  	symbolTableRow *t = globalST->lookup(($1.loc)->srName);
	  	$$.loc = localST->gentemp(((((t->srNestedTable)->table)[count]).Type)->tNodeType);
	  	char *res;
	  	opSpecifier q;
	  	if((($$.loc)->Type)->tNodeType == VOID){
	  		res = 0;
	  		q = call_void; 
	  	}
	  	else{
	  		res = strdup(($$.loc)->srName);
	  		q = call;
	  	} 
	  	char *Arg1 = strdup(($1.loc)->srName);
	  	char *Arg2 = new char[10];
	  	sprintf(Arg2,"%d",count);
	  	quadArrayRow x(Arg1,Arg2,res,q,$1.loc,0,$$.loc);
	  	globalQArray->emit(x);
	  	$$.type = ($$.loc)->Type;
	  }
	| postfix_expression '(' argument_expression_list ')'
	  {
	  	pNode *temp = $3;
	  	int count = 0;
	  	//printf("Yo\n");
	  	while(temp){
	  		char *Arg1 = strdup((temp->parameter)->srName);
	  		quadArrayRow x(Arg1,0,0,PARAM,temp->parameter,0,0);
	  		globalQArray->emit(x);
	  		count++;
	  		temp = temp->next;
	  	}
	  	symbolTableRow *t = globalST->lookup(($1.loc)->srName);
	  	$$.loc = localST->gentemp(((((t->srNestedTable)->table)[count]).Type)->tNodeType);
	  	char *res;
	  	opSpecifier q;
	  	if((($$.loc)->Type)->tNodeType == VOID){
	  		res = 0;
	  		q = call_void; 
	  	}
	  	else{
	  		res = strdup(($$.loc)->srName);
	  		q = call;
	  	} 
	  	char *Arg1 = strdup(($1.loc)->srName);
	  	char *Arg2 = new char[10];
	  	sprintf(Arg2,"%d",count);
	  	quadArrayRow x(Arg1,Arg2,res,q,$1.loc,0,$$.loc);
	  	globalQArray->emit(x);
	  	$$.type = ($$.loc)->Type;
	  	//printf("Yo\n");
	  }
	| postfix_expression '.' IDENTIFIER
	  {
	  	// To be skipped
	  }
	| postfix_expression VAL_AT IDENTIFIER
	  {
	  	// To be skipped
	  }
	| postfix_expression PLUS_PLUS
	  {
	  	$$.loc = localST->gentemp(($1.type)->tNodeType);
	  	char *Arg1 = strdup(($1.loc)->srName);
	  	char *res = strdup(($$.loc)->srName);
	  	quadArrayRow x(Arg1,0,res,ASSIGN,$1.loc,0,$$.loc);
	  	globalQArray->emit(x);
	  	symbolTableRow *u = localST->gentemp(INT);
	  	Arg1 = new char[10];
	  	sprintf(Arg1,"1");
	  	res = strdup(u->srName);
	  	quadArrayRow o(Arg1,0,res,ASSIGN,0,0,u);
	  	globalQArray->emit(o);
	  	Arg1 = strdup(($1.loc)->srName);
	  	char *Arg2 = strdup(u->srName);
	  	res = strdup(($1.loc)->srName);
	  	quadArrayRow y(Arg1,Arg2,res,PLUS,$1.loc,u,$1.loc);
	  	globalQArray->emit(y);
	  	$$.type = $1.type;
	  }
	| postfix_expression MINUS_MINUS
	  {
	  	$$.loc = localST->gentemp(($1.type)->tNodeType);
	  	char *Arg1 = strdup(($1.loc)->srName);
	  	char *res = strdup(($$.loc)->srName);
	  	quadArrayRow x(Arg1,0,res,ASSIGN,$1.loc,0,$$.loc);
	  	globalQArray->emit(x);
	  	symbolTableRow *u = localST->gentemp(INT);
	  	Arg1 = new char[10];
	  	sprintf(Arg1,"1");
	  	res = strdup(u->srName);
	  	quadArrayRow o(Arg1,0,res,ASSIGN,0,0,u);
	  	globalQArray->emit(o);
	  	Arg1 = strdup(($1.loc)->srName);
	  	char *Arg2 = strdup(u->srName);
	  	res = strdup(($1.loc)->srName);
	  	quadArrayRow y(Arg1,Arg2,res,MINUS,$1.loc,u,$1.loc);
	  	globalQArray->emit(y);
	  	$$.type = $1.type;
	  }
	| '(' type_name ')' '{' initializer_list '}'
	  {
	  	// To be skipped
	  }
	| '(' type_name ')' '{' initializer_list ',' '}'
	  {
	  	// To be skipped
	  }
	;

argument_expression_list
	: assignment_expression
	  {
	  	//printf("I am in trouble\n");
	  	//printf("%s\n",($1.loc)->srName);
	  	$$ = make_param_list($1.loc);
	  	//printf("Help me\n");
	  }
	| argument_expression_list ',' assignment_expression
	  {
	  	//printf("Help me\n");
	  	$$ = merge_param_list($1,make_param_list($3.loc));
	  }
	;

unary_expression
	: postfix_expression
	  {
	  	$$ = $1;
	  	if($1.Eloc1){
	  		$$.loc = localST->gentemp(($1.type)->tNodeType);
	  		char *Arg1 = strdup(($1.array)->srName);
	  		char *Arg2 = strdup(($1.Eloc1)->srName);
	  		char *res = strdup(($$.loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,EQ_BRACKET,$1.loc,$1.Eloc1,$$.loc);
	  		globalQArray->emit(x);
	  		//$$.Eloc1 = 0;
	  	}
	  }
	| PLUS_PLUS unary_expression
	  {
	  	$$.loc = localST->gentemp(($2.type)->tNodeType);
	  	symbolTableRow *u = localST->gentemp(INT);
	  	char *Arg1 = new char[10];
	  	sprintf(Arg1,"1");
	  	char *res = strdup(u->srName);
	  	quadArrayRow o(Arg1,0,res,ASSIGN,0,0,u);
	  	globalQArray->emit(o);
	  	Arg1 = strdup(($2.loc)->srName);
	  	char *Arg2 = strdup(u->srName);
	  	res = strdup(($2.loc)->srName);
	  	quadArrayRow y(Arg1,Arg2,res,PLUS,$2.loc,u,$2.loc);
	  	globalQArray->emit(y);
	  	Arg1 = strdup(($2.loc)->srName);
	  	res = strdup(($$.loc)->srName);
	  	quadArrayRow x(Arg1,0,res,ASSIGN,$2.loc,0,$$.loc);
	  	globalQArray->emit(x);
	  	$$.type = $2.type;
	  }
	| MINUS_MINUS unary_expression
	  {
	  	$$.loc = localST->gentemp(($2.type)->tNodeType);
	  	symbolTableRow *u = localST->gentemp(INT);
	  	char *Arg1 = new char[10];
	  	sprintf(Arg1,"1");
	  	char *res = strdup(u->srName);
	  	quadArrayRow o(Arg1,0,res,ASSIGN,0,0,u);
	  	globalQArray->emit(o);
	  	Arg1 = strdup(($2.loc)->srName);
	  	char *Arg2 = strdup(u->srName);
	  	res = strdup(($2.loc)->srName);
	  	quadArrayRow y(Arg1,Arg2,res,MINUS,$2.loc,u,$2.loc);
	  	globalQArray->emit(y);
	  	Arg1 = strdup(($2.loc)->srName);
	  	res = strdup(($$.loc)->srName);
	  	quadArrayRow x(Arg1,0,res,ASSIGN,$2.loc,0,$$.loc);
	  	globalQArray->emit(x);
	  	$$.type = $2.type;
	  }
	| unary_operator cast_expression
	  {
	  	if(($1 == U_STAR) && ((star_count > 1 && left_or_right == 1)||(left_or_right == 2))){
	  		$$.loc = localST->gentemp_cmplx(($2.type)->right);
	  		char *Arg1 = strdup(($2.loc)->srName);
		  	char *res = strdup(($$.loc)->srName);
		  	quadArrayRow x(Arg1,0,res,$1,$2.loc,0,$$.loc);
		  	globalQArray->emit(x);
		  	$$.type = ($$.loc)->Type;
	  		star_count--;
	  	}
	  	else if($1 == U_ADDR){
	  		tNode *tu = create_tNode(POINTER,-1);
	  		tu->right = $2.type;
	  		$$.loc = localST->gentemp_cmplx(tu);
	  		char *Arg1 = strdup(($2.loc)->srName);
		  	char *res = strdup(($$.loc)->srName);
		  	quadArrayRow x(Arg1,0,res,$1,$2.loc,0,$$.loc);
		  	globalQArray->emit(x);
		  	$$.type = ($$.loc)->Type;
	  	}
	  	else if(!(star_count == 1 && left_or_right == 1)){
	  		$$.loc = localST->gentemp(($2.type)->tNodeType);
	  		char *Arg1 = strdup(($2.loc)->srName);
		  	char *res = strdup(($$.loc)->srName);
		  	quadArrayRow x(Arg1,0,res,$1,$2.loc,0,$$.loc);
		  	globalQArray->emit(x);
		  	$$.type = ($$.loc)->Type;
	  	}
	  	else
	  		$$ = $2;	
	  }
	;

unary_operator
	: '&'
	  {
	  	$$ = U_ADDR;
	  }
	| '*'
	  {
	  	$$ = U_STAR;
	  	if(left_or_right == 1){
	  		is_left = 1;
	  	}
	  	star_count++;
	  }
	| '+'
	  {
	  	$$ = U_PLUS;
	  }
	| '-'
	  {
	  	$$ = U_MINUS;
	  }
	| '~'
	  {
	  	$$ = BW_U_NOT;
	  }
	| '!'
	  {
	  	$$ = U_NEGATION;
	  }
	;

cast_expression
	: unary_expression
	  {
	  	$$ = $1;
	  }
	| '(' type_name ')' cast_expression
	  {
	  	// To be skipped
	  }
	;

multiplicative_expression
	: cast_expression
	  {
	  	$$ = $1;
	  }
	| multiplicative_expression '*' cast_expression
	  {
	  	if(typecheck($1.type, $3.type)){
	  		$$.loc = localST->gentemp(($1.type)->tNodeType);
	  		char *Arg1 = strdup(($1.loc)->srName);
	  		char *Arg2 = strdup(($3.loc)->srName);
	  		char *res = strdup(($$.loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,INTO,$1.loc,$3.loc,$$.loc);
	  		globalQArray->emit(x);
	  		$$.type = $1.type;
	  	}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		if(($1.type)->tNodeType == INT && ($3.type)->tNodeType == DOUBLE){
	  			temp1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",($1.loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,$1.loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(temp1->srName);
	  			char *Arg2 = strdup(($3.loc)->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,INTO,temp1,$3.loc,temp2);
	  			globalQArray->emit(y);
	  			$$.type = $3.type;
	  		}
	  		else if(($1.type)->tNodeType == INT && ($3.type)->tNodeType == CHAR){
	  			temp1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",($3.loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,$3.loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(INT);
	  			Arg1 = strdup(($1.loc)->srName);
	  			char *Arg2 = strdup(temp1->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,INTO,$1.loc,temp1,temp2);
	  			globalQArray->emit(y);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->tNodeType == DOUBLE && ($3.type)->tNodeType == INT){
	  			temp1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",($3.loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,$3.loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(($1.loc)->srName);
	  			char *Arg2 = strdup(temp1->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,INTO,$1.loc,temp1,temp2);
	  			globalQArray->emit(y);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->tNodeType == CHAR && ($3.type)->tNodeType == INT){
	  			temp1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",($1.loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,$1.loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(INT);
	  			Arg1 = strdup(temp1->srName);
	  			char *Arg2 = strdup(($3.loc)->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,INTO,temp1,$3.loc,temp2);
	  			globalQArray->emit(y);
	  			$$.type = $3.type;
	  		}
	  		$$.loc = temp2;
	  	}
	  }
	| multiplicative_expression '/' cast_expression
	  {
	  	if(typecheck($1.type, $3.type)){
	  		$$.loc = localST->gentemp(($1.type)->tNodeType);
	  		char *Arg1 = strdup(($1.loc)->srName);
	  		char *Arg2 = strdup(($3.loc)->srName);
	  		char *res = strdup(($$.loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,DIV,$1.loc,$3.loc,$$.loc);
	  		globalQArray->emit(x);
	  		$$.type = $1.type;
	  	}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		if(($1.type)->tNodeType == INT && ($3.type)->tNodeType == DOUBLE){
	  			temp1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",($1.loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,$1.loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(temp1->srName);
	  			char *Arg2 = strdup(($3.loc)->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,DIV,temp1,$3.loc,temp2);
	  			globalQArray->emit(y);
	  			$$.type = $3.type;
	  		}
	  		else if(($1.type)->tNodeType == INT && ($3.type)->tNodeType == CHAR){
	  			temp1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",($3.loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,$3.loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(INT);
	  			Arg1 = strdup(($1.loc)->srName);
	  			char *Arg2 = strdup(temp1->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,DIV,$1.loc,temp1,temp2);
	  			globalQArray->emit(y);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->tNodeType == DOUBLE && ($3.type)->tNodeType == INT){
	  			temp1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",($3.loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,$3.loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(($1.loc)->srName);
	  			char *Arg2 = strdup(temp1->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,DIV,$1.loc,temp1,temp2);
	  			globalQArray->emit(y);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->tNodeType == CHAR && ($3.type)->tNodeType == INT){
	  			temp1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",($1.loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,$1.loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(INT);
	  			Arg1 = strdup(temp1->srName);
	  			char *Arg2 = strdup(($3.loc)->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,DIV,temp1,$3.loc,temp2);
	  			globalQArray->emit(y);
	  			$$.type = $3.type;
	  		}
	  		$$.loc = temp2;
	  	}
	  }
	| multiplicative_expression '%' cast_expression
	  {
	  	if(typecheck($1.type, $3.type)){
	  		$$.loc = localST->gentemp(($1.type)->tNodeType);
	  		char *Arg1 = strdup(($1.loc)->srName);
	  		char *Arg2 = strdup(($3.loc)->srName);
	  		char *res = strdup(($$.loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,PERCENT,$1.loc,$3.loc,$$.loc);
	  		globalQArray->emit(x);
	  		$$.type = $1.type;
	  	}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		if(($1.type)->tNodeType == INT && ($3.type)->tNodeType == DOUBLE){
	  			temp1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",($1.loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,$1.loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(temp1->srName);
	  			char *Arg2 = strdup(($3.loc)->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,PERCENT,temp1,$3.loc,temp2);
	  			globalQArray->emit(y);
	  			$$.type = $3.type;
	  		}
	  		else if(($1.type)->tNodeType == INT && ($3.type)->tNodeType == CHAR){
	  			temp1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",($3.loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,$3.loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(INT);
	  			Arg1 = strdup(($1.loc)->srName);
	  			char *Arg2 = strdup(temp1->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,PERCENT,$1.loc,temp1,temp2);
	  			globalQArray->emit(y);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->tNodeType == DOUBLE && ($3.type)->tNodeType == INT){
	  			temp1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",($3.loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,$3.loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(($1.loc)->srName);
	  			char *Arg2 = strdup(temp1->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,PERCENT,$1.loc,temp1,temp2);
	  			globalQArray->emit(y);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->tNodeType == CHAR && ($3.type)->tNodeType == INT){
	  			temp1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",($1.loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,$1.loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(INT);
	  			Arg1 = strdup(temp1->srName);
	  			char *Arg2 = strdup(($3.loc)->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,PERCENT,temp1,$3.loc,temp2);
	  			globalQArray->emit(y);
	  			$$.type = $3.type;
	  		}
	  		$$.loc = temp2;
	  	}
	  }
	;

additive_expression
	: multiplicative_expression
	  {
	  	$$ = $1;
	  }
	| additive_expression '+' multiplicative_expression
	  {
	  	if(typecheck($1.type, $3.type)){
	  		$$.loc = localST->gentemp(($1.type)->tNodeType);
	  		char *Arg1 = strdup(($1.loc)->srName);
	  		char *Arg2 = strdup(($3.loc)->srName);
	  		char *res = strdup(($$.loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,PLUS,$1.loc,$3.loc,$$.loc);
	  		globalQArray->emit(x);
	  		$$.type = $1.type;
	  	}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		if(($1.type)->tNodeType == INT && ($3.type)->tNodeType == DOUBLE){
	  			temp1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",($1.loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,$1.loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(temp1->srName);
	  			char *Arg2 = strdup(($3.loc)->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,PLUS,temp1,$3.loc,temp2);
	  			globalQArray->emit(y);
	  			$$.type = $3.type;
	  		}
	  		else if(($1.type)->tNodeType == INT && ($3.type)->tNodeType == CHAR){
	  			temp1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",($3.loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,$3.loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(INT);
	  			Arg1 = strdup(($1.loc)->srName);
	  			char *Arg2 = strdup(temp1->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,PLUS,$1.loc,temp1,temp2);
	  			globalQArray->emit(y);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->tNodeType == DOUBLE && ($3.type)->tNodeType == INT){
	  			temp1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",($3.loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,$3.loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(($1.loc)->srName);
	  			char *Arg2 = strdup(temp1->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,PLUS,$1.loc,temp1,temp2);
	  			globalQArray->emit(y);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->tNodeType == CHAR && ($3.type)->tNodeType == INT){
	  			temp1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",($1.loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,$1.loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(INT);
	  			Arg1 = strdup(temp1->srName);
	  			char *Arg2 = strdup(($3.loc)->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,PLUS,temp1,$3.loc,temp2);
	  			globalQArray->emit(y);
	  			$$.type = $3.type;
	  		}
	  		$$.loc = temp2;
	  	}
	  }
	| additive_expression '-' multiplicative_expression
	  {
	  	if(typecheck($1.type, $3.type)){
	  		$$.loc = localST->gentemp(($1.type)->tNodeType);
	  		char *Arg1 = strdup(($1.loc)->srName);
	  		char *Arg2 = strdup(($3.loc)->srName);
	  		char *res = strdup(($$.loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,MINUS,$1.loc,$3.loc,$$.loc);
	  		globalQArray->emit(x);
	  		$$.type = $1.type;
	  	}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		if(($1.type)->tNodeType == INT && ($3.type)->tNodeType == DOUBLE){
	  			temp1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",($1.loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,$1.loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(temp1->srName);
	  			char *Arg2 = strdup(($3.loc)->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,MINUS,temp1,$3.loc,temp2);
	  			globalQArray->emit(y);
	  			$$.type = $3.type;
	  		}
	  		else if(($1.type)->tNodeType == INT && ($3.type)->tNodeType == CHAR){
	  			temp1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",($3.loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,$3.loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(INT);
	  			Arg1 = strdup(($1.loc)->srName);
	  			char *Arg2 = strdup(temp1->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,MINUS,$1.loc,temp1,temp2);
	  			globalQArray->emit(y);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->tNodeType == DOUBLE && ($3.type)->tNodeType == INT){
	  			temp1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",($3.loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,$3.loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(($1.loc)->srName);
	  			char *Arg2 = strdup(temp1->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,MINUS,$1.loc,temp1,temp2);
	  			globalQArray->emit(y);
	  			$$.type = $1.type;
	  		}
	  		else if(($1.type)->tNodeType == CHAR && ($3.type)->tNodeType == INT){
	  			temp1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",($1.loc)->srName);
	  			char *res = strdup(temp1->srName);
	  			quadArrayRow x(Arg1,0,res,ASSIGN,$1.loc,0,temp1);
	  			globalQArray->emit(x);
	  			temp2 = localST->gentemp(INT);
	  			Arg1 = strdup(temp1->srName);
	  			char *Arg2 = strdup(($3.loc)->srName);
	  			res = strdup(temp2->srName);
	  			quadArrayRow y(Arg1,Arg2,res,MINUS,temp1,$3.loc,temp2);
	  			globalQArray->emit(y);
	  			$$.type = $3.type;
	  		}
	  		$$.loc = temp2;
	  	}
	  }
	;

shift_expression
	: additive_expression
	  {
	  	$$ = $1;
	  }
	| shift_expression LEFT_SHIFT additive_expression
	  {
	  	if(typecheck($1.type, $3.type)){
	  		$$.loc = localST->gentemp(($1.type)->tNodeType);
	  		char *Arg1 = strdup(($1.loc)->srName);
	  		char *Arg2 = strdup(($3.loc)->srName);
	  		char *res = strdup(($$.loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,SHIFTLEFT,$1.loc,$3.loc,$$.loc);
	  		globalQArray->emit(x);
	  		$$.type = $1.type;
	  	}
	  }
	| shift_expression RIGHT_SHIFT additive_expression
	  {
	  	if(typecheck($1.type, $3.type)){
	  		$$.loc = localST->gentemp(($1.type)->tNodeType);
	  		char *Arg1 = strdup(($1.loc)->srName);
	  		char *Arg2 = strdup(($3.loc)->srName);
	  		char *res = strdup(($$.loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,SHIFTRIGHT,$1.loc,$3.loc,$$.loc);
	  		globalQArray->emit(x);
	  		$$.type = $1.type;
	  	}
	  }
	;

relational_expression
	: shift_expression
	  {
	  	$$ = $1;
	  }
	| relational_expression '<' shift_expression
	  {
	  	$$.TrueList = makelist(instCounter);
	  	char *Arg1 = strdup(($1.loc)->srName);
	  	char *Arg2 = strdup(($3.loc)->srName);
	  	quadArrayRow x(Arg1,Arg2,0,goto_LESSTHAN,$1.loc,$3.loc,0);
	  	globalQArray->emit(x);
	  	$$.FalseList = makelist(instCounter);
	  	quadArrayRow y(0,0,0,GOTO,0,0,0);
	  	globalQArray->emit(y);
	  	$$.type = create_tNode(BOOL,-1);	
	  }
	| relational_expression '>' shift_expression
	  {
	  	$$.TrueList = makelist(instCounter);
	  	char *Arg1 = strdup(($1.loc)->srName);
	  	char *Arg2 = strdup(($3.loc)->srName);
	  	quadArrayRow x(Arg1,Arg2,0,goto_GREATERTHAN,$1.loc,$3.loc,0);
	  	globalQArray->emit(x);
	  	$$.FalseList = makelist(instCounter);
	  	quadArrayRow y(0,0,0,GOTO,0,0,0);
	  	globalQArray->emit(y);
	  	$$.type = create_tNode(BOOL,-1);
	  }
	| relational_expression LESS_EQUAL shift_expression
	  {
	  	$$.TrueList = makelist(instCounter);
	  	char *Arg1 = strdup(($1.loc)->srName);
	  	char *Arg2 = strdup(($3.loc)->srName);
	  	quadArrayRow x(Arg1,Arg2,0,goto_LESSTHANEQ,$1.loc,$3.loc,0);
	  	globalQArray->emit(x);
	  	$$.FalseList = makelist(instCounter);
	  	quadArrayRow y(0,0,0,GOTO,0,0,0);
	  	globalQArray->emit(y);
	  	$$.type = create_tNode(BOOL,-1);
	  }
	| relational_expression GREATER_EQUAL shift_expression
	  {
	  	$$.TrueList = makelist(instCounter);
	  	char *Arg1 = strdup(($1.loc)->srName);
	  	char *Arg2 = strdup(($3.loc)->srName);
	  	quadArrayRow x(Arg1,Arg2,0,goto_GREATERTHANEQ,$1.loc,$3.loc,0);
	  	globalQArray->emit(x);
	  	$$.FalseList = makelist(instCounter);
	  	quadArrayRow y(0,0,0,GOTO,0,0,0);
	  	globalQArray->emit(y);
	  	$$.type = create_tNode(BOOL,-1);
	  }
	;

equality_expression
	: relational_expression
	  {
	  	$$ = $1;
	  }
	| equality_expression EQUAL_EQUAL relational_expression
	  {
	  	$$.TrueList = makelist(instCounter);
	  	char *Arg1 = strdup(($1.loc)->srName);
	  	char *Arg2 = strdup(($3.loc)->srName);
	  	quadArrayRow x(Arg1,Arg2,0,goto_EQUALTO,$1.loc,$3.loc,0);
	  	globalQArray->emit(x);
	  	$$.FalseList = makelist(instCounter);
	  	quadArrayRow y(0,0,0,GOTO,0,0,0);
	  	globalQArray->emit(y);
	  	$$.type = create_tNode(BOOL,-1);
	  }
	| equality_expression NOT_EQUAL relational_expression
	  {
	  	$$.TrueList = makelist(instCounter);
	  	char *Arg1 = strdup(($1.loc)->srName);
	  	char *Arg2 = strdup(($3.loc)->srName);
	  	quadArrayRow x(Arg1,Arg2,0,goto_NOTEQUALTO,$1.loc,$3.loc,0);
	  	globalQArray->emit(x);
	  	$$.FalseList = makelist(instCounter);
	  	quadArrayRow y(0,0,0,GOTO,0,0,0);
	  	globalQArray->emit(y);
	  	$$.type = create_tNode(BOOL,-1);
	  }
	;

and_expression
	: equality_expression
	  {
	  	$$ = $1;
	  }
	| and_expression '&' equality_expression
	  {
	  	if(typecheck($1.type, $3.type)){
	  		$$.loc = localST->gentemp(($1.type)->tNodeType);
	  		char *Arg1 = strdup(($1.loc)->srName);
	  		char *Arg2 = strdup(($3.loc)->srName);
	  		char *res = strdup(($$.loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,BW_AND,$1.loc,$3.loc,$$.loc);
	  		globalQArray->emit(x);
	  		$$.type = $1.type;
	  	}
	  }
	;

exclusive_or_expression
	: and_expression
	  {
	  	$$ = $1;
	  }
	| exclusive_or_expression '^' and_expression
	  {
	  	if(typecheck($1.type, $3.type)){
	  		$$.loc = localST->gentemp(($1.type)->tNodeType);
	  		char *Arg1 = strdup(($1.loc)->srName);
	  		char *Arg2 = strdup(($3.loc)->srName);
	  		char *res = strdup(($$.loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,BW_XOR,$1.loc,$3.loc,$$.loc);
	  		globalQArray->emit(x);
	  		$$.type = $1.type;
	  	}
	  }
	;

inclusive_or_expression
	: exclusive_or_expression
	  {
	  	$$ = $1;
	  }
	| inclusive_or_expression '|' exclusive_or_expression
	  {
	  	if(typecheck($1.type, $3.type)){
	  		$$.loc = localST->gentemp(($1.type)->tNodeType);
	  		char *Arg1 = strdup(($1.loc)->srName);
	  		char *Arg2 = strdup(($3.loc)->srName);
	  		char *res = strdup(($$.loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,BW_INOR,$1.loc,$3.loc,$$.loc);
	  		globalQArray->emit(x);
	  		$$.type = $1.type;
	  	}
	  }
	;

logical_and_expression
	: inclusive_or_expression
	  {
	  	$$ = $1;
	  }
	| logical_and_expression LOGICAL_AND M inclusive_or_expression		// M augmented so that if $1 is true then it jumps to $3
	  {
	  	backpatch($1.TrueList,$3);
	  	$$.FalseList = merge($1.FalseList, $4.FalseList);
	  	$$.TrueList = $4.TrueList;
	  	$$.type = create_tNode(BOOL,-1);
	  }
	;

logical_or_expression
	: logical_and_expression
	  {
	  	$$ = $1;
	  }
	| logical_or_expression LOGICAL_OR M logical_and_expression			// M augmented so that if $1 is false then it jumps to $3
	  {
	  	backpatch($1.FalseList,$3);
	  	$$.TrueList = merge($1.TrueList,$4.TrueList);
	  	$$.FalseList = $4.FalseList;
	  	$$.type = create_tNode(BOOL,-1);
	  }
	;

conditional_expression
	: logical_or_expression
	  {
	  	$$ = $1;
	  }
	| logical_or_expression N '?' M expression N ':' M conditional_expression		// M and N augmented
	  {
	  	$$.loc = localST->gentemp(($5.type)->tNodeType);
	  	$$.type = $5.type;
	  	char *res = strdup(($$.loc)->srName);
	  	char *Arg1 = strdup(($9.loc)->srName);
	  	quadArrayRow x(Arg1,0,res,ASSIGN,$9.loc,0,$$.loc);
	  	globalQArray->emit(x);
	  	lNode *l = makelist(instCounter);
	  	quadArrayRow y(0,0,0,GOTO,0,0,0);
	  	globalQArray->emit(y);
	  	backpatch($6,instCounter);
	  	res = strdup(($$.loc)->srName);
	  	Arg1 = strdup(($5.loc)->srName);
	  	quadArrayRow z(Arg1,0,res,ASSIGN,$5.loc,0,$$.loc);
	  	globalQArray->emit(z);
	  	l = merge(l,makelist(instCounter));
	  	quadArrayRow a(0,0,0,GOTO,0,0,0);
	  	globalQArray->emit(a);
	  	backpatch($2,instCounter);
	  	conv2Bool(&$1);
	  	backpatch($1.TrueList,$4);
	  	backpatch($1.FalseList,$8);
	  	backpatch(l,instCounter);

	  }
	;

assignment_expression
	: conditional_expression
	  {
	  	$$ = $1;
	  }
	| unary_expression assignment_operator assignment_expression
	  {
	  	if(is_left == 1){
	  		char *Arg1 = strdup(($3.loc)->srName);
		  	char *res = strdup(($1.loc)->srName);
		  	quadArrayRow x(Arg1,0,res,LEFT_STAR,$3.loc,0,$1.loc);
		  	globalQArray->emit(x);
	  	}
	  	else{
	  		if(typecheck($1.type,$3.type)){
		  		if($1.Eloc1){
			  		char *Arg1 = strdup(($1.array)->srName);
			  		char *Arg2 = strdup(($1.Eloc1)->srName);
			  		char *res = strdup(($3.loc)->srName);
			  		quadArrayRow x(Arg1,Arg2,res,BRACKET_EQ,$1.array,$1.Eloc1,$3.loc);
			  		globalQArray->emit(x);
		  		}
		  		else{
			  		char *Arg1 = strdup(($3.loc)->srName);
				  	char *res = strdup(($1.loc)->srName);
				  	quadArrayRow x(Arg1,0,res,ASSIGN,$3.loc,0,$1.loc);
				  	globalQArray->emit(x);
		  		}
	  		}
		  	else{
		  		symbolTableRow *temp1, *temp2;
		  		if(($1.type)->tNodeType == INT && ($3.type)->tNodeType == DOUBLE){
		  			temp1 = localST->gentemp(INT);
		  			char *Arg1 = new char[100];
		  			sprintf(Arg1,"dbl2int(%s)",($3.loc)->srName);
		  			char *res = strdup(temp1->srName);
		  			quadArrayRow x(Arg1,0,res,ASSIGN,$3.loc,0,temp1);
		  			globalQArray->emit(x);
		  		}
		  		else if(($1.type)->tNodeType == INT && ($3.type)->tNodeType == CHAR){
		  			temp1 = localST->gentemp(CHAR);
		  			char *Arg1 = new char[100];
		  			sprintf(Arg1,"int2char(%s)",($1.loc)->srName);
		  			char *res = strdup(temp1->srName);
		  			quadArrayRow x(Arg1,0,res,ASSIGN,$1.loc,0,temp1);
		  			globalQArray->emit(x);
		  			
		  		}
		  		else if(($1.type)->tNodeType == DOUBLE && ($3.type)->tNodeType == INT){
		  			temp1 = localST->gentemp(INT);
		  			char *Arg1 = new char[100];
		  			sprintf(Arg1,"dbl2int(%s)",($1.loc)->srName);
		  			char *res = strdup(temp1->srName);
		  			quadArrayRow x(Arg1,0,res,ASSIGN,$1.loc,0,temp1);
		  			globalQArray->emit(x);
		  		}
		  		else if(($1.type)->tNodeType == CHAR && ($3.type)->tNodeType == INT){
		  			temp1 = localST->gentemp(CHAR);
		  			char *Arg1 = new char[100];
		  			sprintf(Arg1,"int2char(%s)",($3.loc)->srName);
		  			char *res = strdup(temp1->srName);
		  			quadArrayRow x(Arg1,0,res,ASSIGN,$3.loc,0,temp1);
		  			globalQArray->emit(x);
		  		}
		  		if($1.Eloc1){
			  		char *Arg1 = strdup(($1.array)->srName);
			  		char *Arg2 = strdup(($1.Eloc1)->srName);
			  		char *res = strdup((temp1)->srName);
			  		quadArrayRow x(Arg1,Arg2,res,BRACKET_EQ,$1.array,$1.Eloc1,$3.loc);
			  		globalQArray->emit(x);
		  		}
		  		else{
			  		char *Arg1 = strdup((temp1)->srName);
				  	char *res = strdup(($1.loc)->srName);
				  	quadArrayRow x(Arg1,0,res,ASSIGN,$3.loc,0,$1.loc);
				  	globalQArray->emit(x);
		  		}
		  	}
	  	}
	  	left_or_right = 1;
	  	is_left = 0;
	  	star_count = 0;
	  }
	;

assignment_operator
	: '='
	 {
	 	left_or_right = 2;
	 }
	|STAR_EQUAL
	 {
	 	// no action
	 }
	|BY_EQUAL
	 {
	 	// no action
	 }
        |PERCENT_EQUAL
         {
         	// no action
         }
        |PLUS_EQUAL
         {
         	// no action
         }
        |MINUS_EQUAL
         {
         	// no action
         }
        |LEFT_SHIFT_EQUAL
         {
         	// no action
         }
        |RIGHT_SHIFT_EQUAL
         {
         	// no action
         }
        |AND_EQUAL
         {
         	// no action
         }
        |BITWISENOT_EQUAL
         {
         	// no action
         }
        |OR_EQUAL
         {
         	// no action
         }
	;

expression
	: assignment_expression
	  {
	  	$$ = $1;
	  }
	| expression ',' assignment_expression
	  {
	  	// not to be used as comma is not to be used as an operator
	  }
	;

constant_expression
	: conditional_expression
	  {

	  }
	;

declaration
	: declaration_specifiers ';'
	  {
	  	// To be skipped
	  }
	| declaration_specifiers init_declarator_list ';'
	  {
	  	if(flag1 == 1 && flag2 == 0){
	  		tNode *temp = create_tNode(($1.type)->tNodeType,-1);
	  		char *temp1 = strdup("retVal");
	  		symbolTableRow x(temp1,temp,0,$1.width,-1,0);
	  		temp_use->insert(x);
	  		temp = create_tNode(FUNCTION,-1);
	  		symbolTableRow y($2.var,temp,0,0,-1,temp_use);
	  		globalST->insert(y);
	  	}
	  	flag1 = 0;
	  	flag2 = 0;
	  	c = 0;
	  }
	;

declaration_specifiers
	: storage_class_specifier {/* To be skipped*/}
	| storage_class_specifier declaration_specifiers {/* To be skipped*/}
	| type_specifier {/* To be skipped*/}
	  {
	  	if(flag1 == 0 || flag2 == 0){
	  		$$.type = $1.type;
	  		$$.width = $1.width;
	  		t = $$.type;
	  		w = $$.width;
	  	}
	  }
	| type_specifier declaration_specifiers {/* To be skipped*/}
	| type_qualifier {/* To be skipped*/}
	| type_qualifier declaration_specifiers {/* To be skipped*/}
	| function_specifier {/* To be skipped*/}
	| function_specifier declaration_specifiers {/* To be skipped*/}
	;

init_declarator_list
	: init_declarator
	  {
	  	if(flag1 == 1 && flag2 == 0)
	  		$$.var = $1.var;
	  }
	| init_declarator_list ',' init_declarator
	  {

	  }
	;

init_declarator
	: declarator
	  {
	  	if(flag1 == 0){
	  		tNode *temp = create_tNode(t->tNodeType,-1);
	  		temp = merge_node($1.type,temp);
	  		int temp_size;
	  		if(temp->tNodeType == POINTER)
	  			temp_size = SIZE_OF_PTR;
	  		else{
		  		switch(t->tNodeType){
		  			case INT : temp_size = SIZE_OF_INT;
		  					   break;
		  			case DOUBLE : temp_size = SIZE_OF_DOUBLE;
		  						  break;
		  			case CHAR   : temp_size = SIZE_OF_CHAR;
		  						  break; 	
	  			}
	  		}
	  		temp_size = temp_size * $1.width;
	  		symbolTableRow x($1.var,temp,0,temp_size,-1,0);
	  		localST->insert(x);
	  	}
	  	else if(flag1 == 1 && flag2 == 0){
	  		$$.var = $1.var;
	  	}
	  }
	| declarator '=' initializer
	  {
	  	if(flag1 == 0){
	  		tNode *temp = create_tNode(t->tNodeType,-1);
	  		temp = merge_node($1.type,temp);
	  		void *value;
	  		int *v1;
	  		double *v2;
	  		char *v3;
	  		int temp_size;
	  		switch(t->tNodeType){
	  			case INT : v1 = (int *)malloc(sizeof(int));
	  					   (*v1) = $3.InitIntVal; 	
	  					   value = (void *)v1;
	  					   temp_size = SIZE_OF_INT;
	  					   break;
	  			case DOUBLE : v2 = (double *)malloc(sizeof(double));
		  					   (*v2) = $3.InitDoubleVal;
		  					   value = (void *)v2;
		  					   temp_size = SIZE_OF_DOUBLE;
		  					   break;
	  			case CHAR   :v3 = (char *)malloc(sizeof(char));
	  					   (*v3) = $3.InitCharVal; 	
	  					   value = (void *)v3;
	  					   temp_size = SIZE_OF_CHAR;
	  					   break;
	  			default     : value = 0; 	
	  		}
	  		temp_size = temp_size * $1.width;
	  		symbolTableRow x($1.var,temp,value,temp_size,-1,0);
	  		localST->insert(x);
	  	}
	  }
	;

storage_class_specifier
	: TYPEDEF_KEYWORD {/* To be skipped*/}
	| EXTERN_KEYWORD {/* To be skipped*/}
	| STATIC_KEYWORD {/* To be skipped*/}
	| AUTO_KEYWORD {/* To be skipped*/}
	| REGISTER_KEYWORD {/* To be skipped*/}
	;

type_specifier
	: VOID_KEYWORD
	  {
	  	if(flag2 == 0 || flag1 == 0){
	  		$$.type = create_tNode(VOID,-1);
	  		$$.width = 0;
	  	}
	  }
	| CHAR_KEYWORD
	  {
	  	if(flag2 == 0 || flag1 == 0){
	  		$$.type = create_tNode(CHAR,-1);
	  		$$.width = SIZE_OF_CHAR;
	  	}
	  }
	| SHORT_KEYWORD {/* To be skipped*/}
	| INT_KEYWORD
	  {
	  	if(flag2 == 0 || flag1 == 0){
	  		$$.type = create_tNode(INT,-1);
	  		$$.width = SIZE_OF_INT;
	  	}
	  }
	| LONG_KEYWORD {/* To be skipped*/}
	| FLOAT_KEYWORD {/* To be skipped*/}
	| DOUBLE_KEYWORD
	  {
	  	if(flag2 == 0 || flag1 == 0){
	  		$$.type = create_tNode(DOUBLE,-1);
	  		$$.width = SIZE_OF_DOUBLE;
	  	}
	  }
	| SIGNED_KEYWORD {/* To be skipped*/}
	| UNSIGNED_KEYWORD {/* To be skipped*/}
	| BOOL_KEYWORD {/* To be skipped*/}
	| COMPLEX_KEYWORD {/* To be skipped*/}
	| IMAGINARY_KEYWORD {/* To be skipped*/}
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	  {
	  	// To be skipped
	  }
	| type_specifier
	  {
	  	// To be skipped
	  }
	| type_qualifier specifier_qualifier_list
	  {
	  	// To be skipped
	  }
	| type_qualifier
	  {
	  	// To be skipped
	  }
	;

type_qualifier
	: CONST_KEYWORD
	  {
	  	// To be skipped
	  }
	| RESTRICT_KEYWORD
	  {
	  	// To be skipped
	  }
	| VOLATILE_KEYWORD
	  {
	  	// To be skipped
	  }
	;

function_specifier
	: INLINE_KEYWORD
	  {
	  	// To be skipped
	  }
	;

declarator
	: pointer direct_declarator
	  {
	  	if(flag1 == 0 || flag2 == 0){
	  		$$.type = merge_node($2.type,$1.type);
	  		$$.width = $2.width;
	  		$$.var = $2.var;
	  	}
	  }
	| direct_declarator
	  {
	  		$$.type = $1.type;
	  		$$.var = $1.var;
	  		$$.width = $1.width;
	  }
	;

direct_declarator
	: IDENTIFIER
	  {
	  	if(flag1 == 0 || flag2 == 0){
	  		$$.var = $1.var;
		  	$$.type = 0;
		  	$$.width = 1;
		  	if(c == 0){
		  		symbolTableRow *t = localST->lookup($1.var);
			  	if(t){
			  		flag2 = 1;
			  		temp_use = (t->srNestedTable);	// Set flag to handle multiple declaration
			  	}							
			  	else                                            
			  		flag2 = 0; 
			  	c++;	
		  	}
	  	}										
	  }
	| '(' declarator ')'
	  {
	  	// To be skipped
	  }
	| direct_declarator '[' type_qualifier_list assignment_expression ']'
	  {
	  	// To be skipped
	  }
	| direct_declarator '[' assignment_expression ']'
	  {
	  	if(flag1 == 0 || flag2 == 0){
	  		tNode *temp = create_tNode(ARRAY,$3.val.InitIntVal);
	  		$$.type = merge_node($1.type,temp);
	  		$$.width = $1.width * $3.val.InitIntVal;
	  		$$.var = $1.var;
	  	}
	  }
	| direct_declarator '[' type_qualifier_list ']'
	  {
	  	// To be skipped
	  }
	| direct_declarator '[' ']'
	  {
	  	if(flag1 == 0 || flag2 == 0){
	  		$$.var = $1.var;
		  	$$.type = $1.type;
		  	$$.width = $1.width;
	  	}
	  }
	| direct_declarator '[' STATIC_KEYWORD type_qualifier_list assignment_expression ']'
	  {
	  	// To be skipped
	  }
	| direct_declarator '[' STATIC_KEYWORD assignment_expression ']'
	  {
	  	// To be skipped
	  }
	| direct_declarator '[' type_qualifier_list STATIC_KEYWORD assignment_expression ']'
	  {
	  	// To be skipped
	  }
	| direct_declarator '[' type_qualifier_list '*' ']'
	  {
	  	// To be skipped
	  }
	| direct_declarator '[' '*' ']'
	  {
	  	// To be skipped
	  }
	| direct_declarator '(' parameter_type_list ')'
	  {
	  	flag1 = 1;										// Flag1 is set for variable declaration
	  	$$.var = $1.var;
	  	$$.type = 0;
	  	$$.width = 1;
	  }
	| direct_declarator '(' identifier_list ')'
	  {
	  	// To be skipped
	  }
	| direct_declarator '(' ')'
	  {
	  	flag1 = 1;
	  	if(flag2 == 0)
	  		temp_use = createSymbolTable();
	  	$$.var = $1.var;
	  	$$.type = 0;
	  	$$.width = 1;
	  }
	;

pointer
	: '*'
	  {
	  	$$.type = create_tNode(POINTER,-1);
	  }
	| '*' type_qualifier_list
	  {
	  	// To be skipped
	  }
	| '*' pointer
	  {
	  	tNode *temp = create_tNode(POINTER,-1);
	  	$$.type = merge_node($2.type,temp);
	  }
	| '*' type_qualifier_list pointer
	  {
	  	// To be skipped
	  }
	;

type_qualifier_list
	: type_qualifier
	  {
	  	// To be skipped
	  }
	| type_qualifier_list type_qualifier
	  {
	  	// To be skipped
	  }
	;

parameter_type_list
	: parameter_list {}
	| parameter_list ',' ELLIPSES
	  {
	  	// To be skipped
	  }
	;

parameter_list
	: parameter_declaration
	  {
	  	if(flag2 == 0){										// An indication of the fact that function has not been
	  		temp_use = createSymbolTable();				// declared previously
	  		symbolTableRow x($1.var,$1.type,0,$1.width,-1,0); //Insert in sym tab of function(srOffset comp.in insert)
	  		temp_use->insert(x);
	  	}
	  }
	| parameter_list ',' parameter_declaration
	  {
	  	if(flag2 == 0){
	  		symbolTableRow x($3.var,$3.type,0,$3.width,-1,0); //Insert in sym tab of function(srOffset comp. in insert)
	  		temp_use->insert(x);
	  	}
	  }
	;

parameter_declaration
	: declaration_specifiers declarator
	  {
	  	if(flag2 == 0){										// An indication that function has not been declared prev
	  		$$.type = merge_node($2.type,$1.type);
	  		$$.var = $2.var;
	  		$$.width = $1.width*$2.width;
	  	}	
	  }
	| declaration_specifiers
	  {
	  	// To be skipped
	  }
	;

identifier_list
	: IDENTIFIER
	  {
	  	// To be skipped
	  }
	| identifier_list ',' IDENTIFIER
	  {
	  	// To be skipped
	  }
	;

type_name
	: specifier_qualifier_list
	  {
	  	// To be skipped
	  }
	;

initializer
	: assignment_expression
	  {
	  	$$ = $1.val;
	  }
	| '{' initializer_list '}'
	  {
	  	// To be skipped
	  }
	| '{' initializer_list ',' '}'
	  {
	  	// To be skipped
	  }
	;

initializer_list
	: initializer
	  {
	  	// To be skipped
	  }
	| initializer_list ',' initializer
	  {
	  	// To be skipped
	  }
	| initializer_list ',' designation initializer
	  {
	  	// To be skipped
	  }
	;

designation
	: designator_list '='
	  {
	  	// To be skipped
	  }
	;

designator_list
	: designator
	  {
	  	// To be skipped
	  }
	| designator_list designator
	  {
	  	// To be skipped
	  }
	;

designator
	: '[' constant_expression ']'
	  {
	  	// To be skipped
	  }
	| '.' IDENTIFIER
	  {
	  	// To be skipped
	  }
	;

statement
	: labeled_statement
	  {
	  	// To be skipped
	  }
	| compound_statement
	  {
	  	$$ = $1;
	  }
	| expression_statement
	  {
	  	$$ = $1;
	  }
	| selection_statement
	  {
	  	$$ = $1;
	  }
	| iteration_statement
	  {
	  	$$ = $1;
	  }
	| jump_statement
	  {
	  	$$ = $1;
	  }
	;
labeled_statement
	: IDENTIFIER ':' statement
	  {
	  	// To be skipped
	  }
	| CASE_KEYWORD constant_expression ':' statement
	  {
	  	// To be skipped
	  }
	| DEFAULT_KEYWORD ':' statement
	  {
	  	// To be skipped
	  }
	;

compound_statement
	: '{' '}'
	  {
	  	// To be skipped
	  }
	| '{' block_item_list '}'
	  { 
	  	$$ = $2;
	  }
	;

block_item_list
	: block_item
	  { 
	  	$$ = $1;
	  }
	| block_item_list M block_item 
	  { 
		backpatch($1.NextList,$2);
		$$ = $3;
	  }
	;

block_item
	: declaration{ }
	| statement 
	  {
	  	$$ = $1;
	  }
	;

expression_statement
	: ';'
	  {
	  	// To be skipped
	  }
	| expression ';'
	  {
	  	$$ = $1;
	  }
	;

selection_statement
	: IF_KEYWORD '(' expression N')' M statement N  %prec IF_CONFLICT
	  {
	  	backpatch($4,instCounter);
	  	conv2Bool(&$3);
	  	backpatch($3.TrueList,$6);
	  	$$.NextList = merge($7.NextList,$3.FalseList);
	  	$$.NextList = merge($$.NextList,$8);
	  }
	| IF_KEYWORD '(' expression N')' M statement N ELSE_KEYWORD M statement  
	  {
	  	lNode *l = 0;
	  	if(($3.type)->tNodeType!=BOOL){
	  		l = makelist(instCounter);
	  		quadArrayRow x(0,0,0,GOTO,0,0,0);
	  		globalQArray->emit(x);
	  	}
	  	backpatch($4,instCounter);
	  	conv2Bool(&$3);
	  	backpatch($3.TrueList,$6);
	  	backpatch($3.FalseList,$10);
	  	lNode *temp = merge($8,$7.NextList);
	  	$$.NextList = merge(temp,$11.NextList);
	  	$$.NextList = merge($$.NextList,l);
	  }
	| SWITCH_KEYWORD '(' expression ')' statement
	  {
	  	// To be skipped
	  }
	;

iteration_statement
	: WHILE_KEYWORD M '(' expression N')' M statement              // M and N augmented
	  {
	  	char *res = new char[10];
	  	sprintf(res,"%d",$2);
	  	quadArrayRow x(0,0,res,GOTO,0,0,0);
	  	globalQArray->emit(x);
	  	backpatch($5,instCounter);
	  	conv2Bool(&$4);
	  	backpatch($8.NextList,$2);
	  	backpatch($4.TrueList,$7);
	  	$$.NextList = $4.FalseList;
	  }
	| DO_KEYWORD M statement M WHILE_KEYWORD '(' expression N')' ';'		// M and N augmented
	  {
	  	backpatch($8,instCounter);
	  	conv2Bool(&$7);
	  	backpatch($7.TrueList,$2);
	  	backpatch($3.NextList,$4);
	  	$$.NextList = $7.FalseList;
	  }
	| FOR_KEYWORD '(' expression_statement M 
		expression_statement N M expression N')' M statement                    // M & N augmented
	  {
	  	backpatch($9,$4);
	  	lNode *l = makelist(instCounter);
	  	quadArrayRow x(0,0,0,GOTO,0,0,0);
	  	globalQArray->emit(x);
	  	$12.NextList = merge($12.NextList,l);
	  	backpatch($12.NextList,$7);
	  	backpatch($6,instCounter);
	  	conv2Bool(&$5);
	  	backpatch($5.TrueList,$11);
	  	$$.NextList = $5.FalseList;
	  }
	| FOR_KEYWORD '(' declaration expression_statement expression ')' statement
	  {
	  	// To be skipped
	  }
	;

jump_statement
	: GOTO_KEYWORD IDENTIFIER ';'
	  {
	  	// To be skipped
	  }
	| CONTINUE_KEYWORD ';'
	  {
	  	// To be skipped
	  }
	| BREAK_KEYWORD ';'
	  {
	  	// To be skipped
	  }
	| RETURN_KEYWORD ';'
	  {
	  	quadArrayRow x(0,0,0,RETURN,0,0,0);
	  	globalQArray->emit(x);
	  }
	| RETURN_KEYWORD expression ';'
	  {
	  	char *Arg1 = strdup(($2.loc)->srName);
	  	quadArrayRow x(Arg1,0,0,RETURN_EXP,$2.loc,0,0);
	  	globalQArray->emit(x);
	  }
	;

translation_unit
	: external_declaration {}
	| translation_unit external_declaration { //Not used as multiple translation units are not supported
											}
	;

external_declaration
	: function_definition {}
	| declaration {}
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
	  {
	  	// Not used
	  }
	| declaration_specifiers declarator O compound_statement            	// O augmented
	  {
	  	localST = globalST; // Exiting out of function so set localST pointer to globalST symbol table 
	  }
	;

declaration_list
	: declaration
	  {
	  	// To be skipped
	  }
	| declaration_list declaration
	  {
	  	// To be skipped
	  }
M
	:
	{
		$$ = instCounter;
	}
	;
N
	:
	{
		$$ = makelist(instCounter);
		quadArrayRow x(0,0,0,GOTO,0,0,0);
		globalQArray->emit(x);
	}
	;
O   
	:
	{
		localST = temp_use; // As we are entering the function localST should point to symbol table of function
		//localST->print_stTable();
		//printf("Yes\n");
		int i;
		char *t;
		for(i=0;i<=globalST->stNumRows;i++){
			if((((globalST->table)[i]).srNestedTable) == localST){
				t = strdup(((globalST->table)[i]).srName);
				break;
			}
		}
		quadArrayRow x(t,0,0,Function,((globalST->table)+i),0,0);
		globalQArray->emit(x);
		flag1 = 0;
		flag2 = 0;
		c = 0;
		//printf("Yes\n");
	}
	;

%%

void yyerror(const char* s) {
	printf("%s", s);
}