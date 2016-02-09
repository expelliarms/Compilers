%{
#include <stdio.h>
#include <string.h>
#include <iostream>
extern int yylex();
#include "ass5_13CS10055_translator.h"
void yyerror(char* s);
%}

%union {
  int intval;
  double floatval;
  char charval;
  idAttributes idAttr;
  expAttributes expAttr;
  opSpecifier unaryOpAttr;
  pNode *params;
  int instr;
}

%token AUTO_KEYWORD;
%token ENUM_KEYWORD;
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
//%token <intval> IDENTIFIER;
%token <intval>  INTEGER_CONSTANT;
%token <floatval> FLOAT_CONSTANT;
%token <intval> ENUMERATION;
%token <charval> CHAR_CONSTANT;
%token <charval> STRING_LITERAL;
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
%token SINGLE_COMMENT;
%token MULTI_COMMENT;

/* Changes and additions made */
%token <idAttr> IDENTIFIER;//previously it was only for intval

%type <expAttr> primary_expression;
%type <expAttr> expression;
%type <expAttr> postfix_expression;
%type <expAttr> assignment_expression;
%type <expAttr> multiplicative_expression;
%type <expAttr> additive_expression;
%type <expAttr> cast_expression;
%type <expAttr> unary_expression;
%type <expAttr> shift_expression;
%type <expAttr> relational_expression;
%type <expAttr> equality_expression;
%type <expAttr> and_expression;
%type <expAttr> exclusive_or_expression;
%type <expAttr> inclusive_or_expression;
%type <expAttr> logical_and_expression;
%type <expAttr> logical_or_expression;
%type <expAttr> conditional_expression;
%type <unaryOpAttr> unary_operator;
%type <params> argument_expression_list
%type <instr> JUMP_AUG;

%expect 1

%start translation_unit;
%%

primary_expression
	: IDENTIFIER
		{
			$1.loc = localST->lookup($1.varName);//Check in local symboltable
			if(!($1.loc))//If not present in local symbol table check for global symbol table
			{
				$1.loc = globalST->lookup($1.varName);
			}
			$$.loc = $1.loc;
			$$.Etype = ($1.loc)->srType;
			$$.Earray = $$.loc;
			$$.Eloc1 = NULL;
		}
	| INTEGER_CONSTANT
		{
			$$.val.InitIntVal = $1;//Assign the value
			$$.Etype = create_tNode(INT);//Create a new node of int type
			$$.loc = localST->gentemp(INT);//Generate a temporary in the local symbol table
			char *Arg1 = new char[10];
			sprintf(Arg1,"%d",$1);
			char *Res = strdup(($$.loc)->srName);
			quadArrayRow tempQRow( Arg1, 0, Res, ASSIGN, 0, 0, $$.loc);//Generate a new temprary quadArrayRow
			globalQArray->emit(tempQRow);//Add the generated row to the global quad array
		}
	| FLOAT_CONSTANT
		{
			$$.val.InitDoubleVal = $1;//Assign the value
			$$.Etype = create_tNode(DOUBLE);
			$$.loc = localST->gentemp(DOUBLE);
			char *Arg1 = new char[10];
			sprintf(Arg1,"%lf",$1);
			char *Res = strdup(($$.loc)->srName);
			quadArrayRow tempQRow( Arg1, 0, Res, ASSIGN, 0, 0, $$.loc);//Generate a new temprary quadArrayRow
			globalQArray->emit(tempQRow);//Add the generated row to the global quad array
		}
	| CHAR_CONSTANT
		{
			$$.val.InitCharVal = $1;//Assign the value
			$$.Etype = create_tNode(CHAR);
			$$.loc = localST->gentemp(CHAR);
			char *Arg1 = new char[10];
			sprintf(Arg1,"%c",$1);
			char *Res = strdup(($$.loc)->srName);
			quadArrayRow tempQRow( Arg1, 0, Res, ASSIGN, 0, 0, $$.loc);//Generate a new temprary quadArrayRow
			globalQArray->emit(tempQRow);//Add the generated row to the global quad array
		}
	| ENUMERATION
	| STRING_LITERAL
	| '(' expression ')'
		{
			$$ = $2;//Assigns all the attributes of expression inside the braces to $$
		}
	;

expression
	: assignment_expression
		{
			$$ = $1;// Simple assignment
		}
	| expression ',' assignment_expression
		{
			//Skip for time-being.
		}
	;

/* unary operators */
unary_operator
	: '&'
		{
			$$ = U_ADDR;//ampersand operator
		}
	| '*'
		{
			$$ = U_STAR;//star operator
		}
	| '+'
		{
			$$ = U_PLUS;//Unary plus
		}
	| '-'
		{
			$$ = U_MINUS;//Unary ,inus operator
		}
	| '~'
		{
			$$ = U_NEGATION;//Unary negate operator
		}
	| '!'
		{
			$$ = BW_U_NOT;//Unary not
		}
	;

postfix_expression
	: primary_expression
		{
			$$ = $1;//Simple assignment
		}
	| postfix_expression '[' expression ']'
		{
			$$.Earray = $1.Earray;//Assign expresion array
			$$.Etype = ($1.Etype)->right;//Take care of type
			if($1.Eloc1)
			{
				symbolTableRow *tempsRow = localST->gentemp(INT);
				$$.Eloc1 = localST->gentemp(INT);
				char *Arg1 = strdup(($3.loc)->srName);
				char *Arg2 = new char[10];
				sprintf(Arg2,"%d",calculateWidth($$.Etype));
				char *Res = strdup(tempsRow->srName);
				quadArrayRow qRow1(Arg1, Arg2, Res, INTO, $3.loc, 0, tempsRow);
				globalQArray->emit(qRow1);
				Arg1 = strdup(($1.Eloc1)->srName);
				Arg2 = strdup(tempsRow->srName);
				Res = strdup(($$.Eloc1)->srName);
				quadArrayRow qRow2(Arg1, Arg2, Res, PLUS, $1.Eloc1, tempsRow, $$.Eloc1);
				globalQArray->emit(qRow2);
			}
			else
			{
				$$.Eloc1 = localST->gentemp(INT);
	  		char *Arg1 = strdup(($3.loc)->srName);
	  		char *Arg2 = new char[10];
	  		sprintf(Arg2,"%d",calculateWidth(($1.Etype)->right));
	  		char *Res = strdup(($$.Eloc1)->srName);
	  		quadArrayRow qRow3(Arg1,Arg2,Res,INTO,$3.loc,0,$$.Eloc1);
	  		globalQArray->emit(qRow3);
			}
		}
	| postfix_expression '(' ')'
		{
			symbolTableRow *tempsRow = globalST->lookup(($1.loc)->srName);//lookup symbol table for variable name
			$$.loc = localST->gentemp((((tempsRow->srNestedTable)->stTabletop)->srType)->tNodeType);//Go to nestd table take the first entry and find the type of that and create a temporary of that type in local symbol table
			//Add into local symbol table and set E.loc
			char *Arg1 = strdup(($1.loc)->srName);
			char *Res = strdup(($$.loc)->srName);
			quadArrayRow qRow(Arg1, 0, Res, call, $1.loc, 0, $$.loc);//Create a quad array row
			globalQArray->emit(qRow);//Emit into global quad array
			$$.Etype = ($$.loc)->srType;//Take care of type
		}
	| postfix_expression '(' argument_expression_list ')'
		{
			pNode *temppNode = $3;
			int numParams = 0;
			while(temppNode)
			{
				char *Arg1 = strdup((temppNode->parameter)->srName);
				quadArrayRow qRow(Arg1,0,0,PARAM,temppNode->parameter,0,0);//Create a quadarray row
				globalQArray->emit(qRow);//emit into quad arrayrow
				numParams++;//Count number of parameters
				temppNode = temppNode->next;
			}
			symbolTableRow *sRow = globalST->lookup($1.loc->srName);//Lookup the symbol table to find the existance of the function name
			$$.loc = localST->gentemp(((((sRow->srNestedTable)->stTabletop)+numParams)->srType)->tNodeType);//Go to nestd table take the first entry and find the type of that and create a temporary of that type in local symbol table
			//Add into local symbol table and set E.loc
			char *Res = strdup(($$.loc)->srName);
	  	char *Arg1 = strdup(($1.loc)->srName);
	  	char *Arg2 = new char[10];
	  	sprintf(Arg2,"%d",numParams);
	  	quadArrayRow qRow(Arg1,Arg2,Res,call,$1.loc,0,$$.loc);//Create a quad array row
	  	globalQArray->emit(qRow);//Emit into global quad 
	  	$$.Etype = ($$.loc)->srType;//Take care of type
		}
	| postfix_expression '.' IDENTIFIER
		{
			//To be skipped
		}
	| postfix_expression VAL_AT IDENTIFIER
		{
			//To be skipped
		}
	| postfix_expression PLUS_PLUS
		{
			/* assignment has to be done before incrementing */
			$$.loc = localST->gentemp(($1.Etype)->tNodeType);//generate temporary of type $1
			char *Arg1 = strdup(($1.loc)->srName);
			char *Res = strdup(($$.loc)->srName);
			quadArrayRow qRow1(Arg1, 0, Res, ASSIGN, $1.loc, 0, $$.loc);//generate quad for assignment action
			globalQArray->emit(qRow1);
			/* increment now */
			Arg1 = strdup(($1.loc)->srName);
			char *Arg2 = new char[10];
			sprintf(Arg2,"1");
			Res = strdup(($$.loc)->srName);
			quadArrayRow qRow2(Arg1, Arg2, Res, PLUS, $1.loc, 0, $$.loc);//generate quad for increment action
			globalQArray->emit(qRow2);
			$$.Etype = $1.Etype;
		}
	| postfix_expression MINUS_MINUS
		{
			/* assignment has to be done before decrementing */
			$$.loc = localST->gentemp(($1.Etype)->tNodeType);//generate temporary of type $1
			char *Arg1 = strdup(($1.loc)->srName);
			char *Res = strdup(($$.loc)->srName);
			quadArrayRow qRow1(Arg1, 0, Res, ASSIGN, $1.loc, 0, $$.loc);//generate quad for assignment action
			globalQArray->emit(qRow1);//Add to global quad array
			/* decrement now */
			Arg1 = strdup(($1.loc)->srName);
			char *Arg2 = new char[10];
			sprintf(Arg2,"1");
			Res = strdup(($$.loc)->srName);
			quadArrayRow qRow2(Arg1, Arg2, Res, PLUS, $1.loc, 0, $$.loc);//generate quad decrementing action
			globalQArray->emit(qRow2);
			$$.Etype = $1.Etype;
		}
	| '(' type_name ')' '{' initializer_list '}'
		{
			//To be skipped
		}
	| '(' type_name ')' '{' initializer_list ',' '}'
		{
			//To be skipped
		}
	;

argument_expression_list
	: assignment_expression
		{
			pNode *temppNode = new pNode;
			temppNode->parameter = $1.loc;
			temppNode->next = NULL;
			$$ = temppNode;
		}
	| argument_expression_list ',' assignment_expression
		{
			pNode *temppNode = new pNode;
			temppNode->parameter = $3.loc;
			temppNode->next = NULL;
			if($1 == NULL)
			{
				$$ = temppNode;
			}
			else if(temppNode == NULL)
			{
				$$ = $1;
			}
			else
			{
				pNode *temppNode1 = $1;
				while(temppNode1->next)
				{
					temppNode1 = temppNode1->next;
				}
				temppNode1->next = temppNode;
				$$ = $1;
			}
		}
	;

unary_expression
	: postfix_expression
		{
			$$ = $1;
	  	if($1.Eloc1)
	  	{
				$$.loc = localST->gentemp(($1.Etype)->tNodeType);
				char *Arg1 = strdup(($1.Earray)->srName);
				char *Arg2 = strdup(($1.Eloc1)->srName);
				char *Res = strdup(($$.loc)->srName);
				quadArrayRow qRow(Arg1,Arg2,Res,EQ_BRACKET,$1.loc,$1.Eloc1,$$.loc);
				globalQArray->emit(qRow);
			}
		}
	| PLUS_PLUS unary_expression
		{
			/* First Increment */
			$$.loc = localST->gentemp(($2.Etype)->tNodeType);
	  	char *Arg1 = strdup(($2.loc)->srName);
	  	char *Arg2 = new char[10];
	  	sprintf(Arg2,"1");
	  	char *Res = strdup(($2.loc)->srName);
	  	quadArrayRow y(Arg1,Arg2,Res,PLUS,$2.loc,0,$2.loc);
	  	globalQArray->emit(y);
	  	/* Now Assign */
	  	Arg1 = strdup(($2.loc)->srName);
	  	Res = strdup(($$.loc)->srName);
	  	quadArrayRow x(Arg1,0,Res,ASSIGN,$2.loc,0,$$.loc);
	  	globalQArray->emit(x);
	  	$$.Etype = $2.Etype;
		}
	| MINUS_MINUS unary_expression
		{
			/* first decrement */
			$$.loc = localST->gentemp(($2.Etype)->tNodeType);
	  	char *Arg1 = strdup(($2.loc)->srName);
	  	char *Arg2 = new char[10];
	  	sprintf(Arg2,"1");
	  	char *Res = strdup(($2.loc)->srName);
	  	quadArrayRow y(Arg1,Arg2,Res,MINUS,$2.loc,0,$2.loc);
	  	globalQArray->emit(y);
	  	/* Now assign */
	  	Arg1 = strdup(($2.loc)->srName);
	  	Res = strdup(($$.loc)->srName);
	  	quadArrayRow x(Arg1,0,Res,ASSIGN,$2.loc,0,$$.loc);
	  	globalQArray->emit(x);
	  	$$.Etype = $2.Etype;
		}
	| unary_operator cast_expression
		{
			$$.loc = localST->gentemp(($2.Etype)->tNodeType);
	  	char *Arg1 = strdup(($2.loc)->srName);
	  	char *Res = strdup(($$.loc)->srName);
	  	quadArrayRow x(Arg1,0,Res,$1,$2.loc,0,$$.loc);
	  	globalQArray->emit(x);
	  	$$.Etype = $2.Etype;
		}
	| SIZEOF_KEYWORD unary_expression
		{
			//Skip
		}
	| SIZEOF_KEYWORD '(' type_name ')'
		{
			//Skip
		}
	;

cast_expression
	: unary_expression
		{
			$$ = $1;
		}
	| '(' type_name ')' cast_expression
		{
			//To be skipped
		}
	;

multiplicative_expression
	: cast_expression
		{
			$$ = $1;
		}
	| multiplicative_expression '*' cast_expression
		{
			if(typecheck($1.Etype, $3.Etype))
			{
	  		$$.loc = localST->gentemp(($1.Etype)->tNodeType);
	  		char *Arg1 = strdup(($1.loc)->srName);
	  		char *Arg2 = strdup(($3.loc)->srName);
	  		char *Res = strdup(($$.loc)->srName);
	  		quadArrayRow qRow(Arg1,Arg2,Res,INTO,$1.loc,$3.loc,$$.loc);
	  		globalQArray->emit(qRow);
	  		$$.Etype = $1.Etype;
	  	}
	  	else
	  	{
	  		symbolTableRow *tempRow1, *tempRow2;
	  		if(($1.Etype)->tNodeType == INT && ($3.Etype)->tNodeType == DOUBLE){
	  			tempRow1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",($1.loc)->srName);
	  			char *Res = strdup(tempRow1->srName);
	  			quadArrayRow x(Arg1,0,Res,ASSIGN,$1.loc,0,tempRow1);
	  			globalQArray->emit(x);
	  			tempRow2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(tempRow1->srName);
	  			char *Arg2 = strdup(($3.loc)->srName);
	  			Res = strdup(tempRow2->srName);
	  			quadArrayRow y(Arg1,Arg2,Res,INTO,tempRow1,$3.loc,tempRow2);
	  			globalQArray->emit(y);
	  			$$.Etype = $3.Etype;
	  		}
	  		else if(($1.Etype)->tNodeType == INT && ($3.Etype)->tNodeType == CHAR){
	  			tempRow1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",($3.loc)->srName);
	  			char *Res = strdup(tempRow1->srName);
	  			quadArrayRow x(Arg1,0,Res,ASSIGN,$3.loc,0,tempRow1);
	  			globalQArray->emit(x);
	  			tempRow2 = localST->gentemp(INT);
	  			Arg1 = strdup(($1.loc)->srName);
	  			char *Arg2 = strdup(tempRow1->srName);
	  			Res = strdup(tempRow2->srName);
	  			quadArrayRow y(Arg1,Arg2,Res,INTO,$1.loc,tempRow1,tempRow2);
	  			globalQArray->emit(y);
	  			$$.Etype = $1.Etype;
	  		}
	  		else if(($1.Etype)->tNodeType == DOUBLE && ($3.Etype)->tNodeType == INT){
	  			tempRow1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",($3.loc)->srName);
	  			char *Res = strdup(tempRow1->srName);
	  			quadArrayRow x(Arg1,0,Res,ASSIGN,$3.loc,0,tempRow1);
	  			globalQArray->emit(x);
	  			tempRow2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(($1.loc)->srName);
	  			char *Arg2 = strdup(tempRow1->srName);
	  			Res = strdup(tempRow2->srName);
	  			quadArrayRow y(Arg1,Arg2,Res,INTO,$1.loc,tempRow1,tempRow2);
	  			globalQArray->emit(y);
	  			$$.Etype = $1.Etype;
	  		}
	  		else if(($1.Etype)->tNodeType == CHAR && ($3.Etype)->tNodeType == INT){
	  			tempRow1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",($1.loc)->srName);
	  			char *Res = strdup(tempRow1->srName);
	  			quadArrayRow x(Arg1,0,Res,ASSIGN,$1.loc,0,tempRow1);
	  			globalQArray->emit(x);
	  			tempRow2 = localST->gentemp(INT);
	  			Arg1 = strdup(tempRow1->srName);
	  			char *Arg2 = strdup(($3.loc)->srName);
	  			Res = strdup(tempRow2->srName);
	  			quadArrayRow y(Arg1,Arg2,Res,INTO,tempRow1,$3.loc,tempRow2);
	  			globalQArray->emit(y);
	  			$$.Etype = $3.Etype;
	  		}
	  		$$.loc = tempRow2;
	  	}
		}
	| multiplicative_expression '/' cast_expression
		{
			if(typecheck($1.Etype, $3.Etype)){
	  		$$.loc = localST->gentemp(($1.Etype)->tNodeType);
	  		char *Arg1 = strdup(($1.loc)->srName);
	  		char *Arg2 = strdup(($3.loc)->srName);
	  		char *Res = strdup(($$.loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,Res,DIV,$1.loc,$3.loc,$$.loc);
	  		globalQArray->emit(x);
	  		$$.Etype = $1.Etype;
	  	}
	  	else{
	  		symbolTableRow *tempRow1, *tempRow2;
	  		if(($1.Etype)->tNodeType == INT && ($3.Etype)->tNodeType == DOUBLE){
	  			tempRow1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",($1.loc)->srName);
	  			char *Res = strdup(tempRow1->srName);
	  			quadArrayRow x(Arg1,0,Res,ASSIGN,$1.loc,0,tempRow1);
	  			globalQArray->emit(x);
	  			tempRow2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(tempRow1->srName);
	  			char *Arg2 = strdup(($3.loc)->srName);
	  			Res = strdup(tempRow2->srName);
	  			quadArrayRow y(Arg1,Arg2,Res,DIV,tempRow1,$3.loc,tempRow2);
	  			globalQArray->emit(y);
	  			$$.Etype = $3.Etype;
	  		}
	  		else if(($1.Etype)->tNodeType == INT && ($3.Etype)->tNodeType == CHAR){
	  			tempRow1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",($3.loc)->srName);
	  			char *Res = strdup(tempRow1->srName);
	  			quadArrayRow x(Arg1,0,Res,ASSIGN,$3.loc,0,tempRow1);
	  			globalQArray->emit(x);
	  			tempRow2 = localST->gentemp(INT);
	  			Arg1 = strdup(($1.loc)->srName);
	  			char *Arg2 = strdup(tempRow1->srName);
	  			Res = strdup(tempRow2->srName);
	  			quadArrayRow y(Arg1,Arg2,Res,DIV,$1.loc,tempRow1,tempRow2);
	  			globalQArray->emit(y);
	  			$$.Etype = $1.Etype;
	  		}
	  		else if(($1.Etype)->tNodeType == DOUBLE && ($3.Etype)->tNodeType == INT){
	  			tempRow1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",($3.loc)->srName);
	  			char *Res = strdup(tempRow1->srName);
	  			quadArrayRow x(Arg1,0,Res,ASSIGN,$3.loc,0,tempRow1);
	  			globalQArray->emit(x);
	  			tempRow2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(($1.loc)->srName);
	  			char *Arg2 = strdup(tempRow1->srName);
	  			Res = strdup(tempRow2->srName);
	  			quadArrayRow y(Arg1,Arg2,Res,DIV,$1.loc,tempRow1,tempRow2);
	  			globalQArray->emit(y);
	  			$$.Etype = $1.Etype;
	  		}
	  		else if(($1.Etype)->tNodeType == CHAR && ($3.Etype)->tNodeType == INT){
	  			tempRow1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",($1.loc)->srName);
	  			char *Res = strdup(tempRow1->srName);
	  			quadArrayRow x(Arg1,0,Res,ASSIGN,$1.loc,0,tempRow1);
	  			globalQArray->emit(x);
	  			tempRow2 = localST->gentemp(INT);
	  			Arg1 = strdup(tempRow1->srName);
	  			char *Arg2 = strdup(($3.loc)->srName);
	  			Res = strdup(tempRow2->srName);
	  			quadArrayRow y(Arg1,Arg2,Res,DIV,tempRow1,$3.loc,tempRow2);
	  			globalQArray->emit(y);
	  			$$.Etype = $3.Etype;
	  		}
	  		$$.loc = tempRow2;
	  	}
		}
	| multiplicative_expression '%' cast_expression
		{
			if(typecheck($1.Etype, $3.Etype)){
	  		$$.loc = localST->gentemp(($1.Etype)->tNodeType);
	  		char *Arg1 = strdup(($1.loc)->srName);
	  		char *Arg2 = strdup(($3.loc)->srName);
	  		char *Res = strdup(($$.loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,Res,PERCENT,$1.loc,$3.loc,$$.loc);
	  		globalQArray->emit(x);
	  		$$.Etype = $1.Etype;
	  	}
	  	else{
	  		symbolTableRow *tempRow1, *tempRow2;
	  		if(($1.Etype)->tNodeType == INT && ($3.Etype)->tNodeType == DOUBLE){
	  			tempRow1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",($1.loc)->srName);
	  			char *Res = strdup(tempRow1->srName);
	  			quadArrayRow x(Arg1,0,Res,ASSIGN,$1.loc,0,tempRow1);
	  			globalQArray->emit(x);
	  			tempRow2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(tempRow1->srName);
	  			char *Arg2 = strdup(($3.loc)->srName);
	  			Res = strdup(tempRow2->srName);
	  			quadArrayRow y(Arg1,Arg2,Res,PERCENT,tempRow1,$3.loc,tempRow2);
	  			globalQArray->emit(y);
	  			$$.Etype = $3.Etype;
	  		}
	  		else if(($1.Etype)->tNodeType == INT && ($3.Etype)->tNodeType == CHAR){
	  			tempRow1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",($3.loc)->srName);
	  			char *Res = strdup(tempRow1->srName);
	  			quadArrayRow x(Arg1,0,Res,ASSIGN,$3.loc,0,tempRow1);
	  			globalQArray->emit(x);
	  			tempRow2 = localST->gentemp(INT);
	  			Arg1 = strdup(($1.loc)->srName);
	  			char *Arg2 = strdup(tempRow1->srName);
	  			Res = strdup(tempRow2->srName);
	  			quadArrayRow y(Arg1,Arg2,Res,PERCENT,$1.loc,tempRow1,tempRow2);
	  			globalQArray->emit(y);
	  			$$.Etype = $1.Etype;
	  		}
	  		else if(($1.Etype)->tNodeType == DOUBLE && ($3.Etype)->tNodeType == INT){
	  			tempRow1 = localST->gentemp(DOUBLE);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"int2dbl(%s)",($3.loc)->srName);
	  			char *Res = strdup(tempRow1->srName);
	  			quadArrayRow x(Arg1,0,Res,ASSIGN,$3.loc,0,tempRow1);
	  			globalQArray->emit(x);
	  			tempRow2 = localST->gentemp(DOUBLE);
	  			Arg1 = strdup(($1.loc)->srName);
	  			char *Arg2 = strdup(tempRow1->srName);
	  			Res = strdup(tempRow2->srName);
	  			quadArrayRow y(Arg1,Arg2,Res,PERCENT,$1.loc,tempRow1,tempRow2);
	  			globalQArray->emit(y);
	  			$$.Etype = $1.Etype;
	  		}
	  		else if(($1.Etype)->tNodeType == CHAR && ($3.Etype)->tNodeType == INT){
	  			tempRow1 = localST->gentemp(INT);
	  			char *Arg1 = new char[100];
	  			sprintf(Arg1,"char2int(%s)",($1.loc)->srName);
	  			char *Res = strdup(tempRow1->srName);
	  			quadArrayRow x(Arg1,0,Res,ASSIGN,$1.loc,0,tempRow1);
	  			globalQArray->emit(x);
	  			tempRow2 = localST->gentemp(INT);
	  			Arg1 = strdup(tempRow1->srName);
	  			char *Arg2 = strdup(($3.loc)->srName);
	  			Res = strdup(tempRow2->srName);
	  			quadArrayRow y(Arg1,Arg2,Res,PERCENT,tempRow1,$3.loc,tempRow2);
	  			globalQArray->emit(y);
	  			$$.Etype = $3.Etype;
	  		}
	  		$$.loc = tempRow2;
	  	}
		}
	;

additive_expression
	: multiplicative_expression
		{
			$$ = $1;//Simple assignment for multiplication expression
		}
	| additive_expression '+' multiplicative_expression
		{
			if(typecheck($1.Etype, $3.Etype)){
	  		$$.loc = localST->gentemp(($1.Etype)->tNodeType);
	  		char *Arg1 = strdup(($1.loc)->srName);
	  		char *Arg2 = strdup(($3.loc)->srName);
	  		char *res = strdup(($$.loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,PLUS,$1.loc,$3.loc,$$.loc);
	  		globalQArray->emit(x);
	  		$$.Etype = $1.Etype;
	  	}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		if(($1.Etype)->tNodeType == INT && ($3.Etype)->tNodeType == DOUBLE){
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
	  			$$.Etype = $3.Etype;
	  		}
	  		else if(($1.Etype)->tNodeType == INT && ($3.Etype)->tNodeType == CHAR){
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
	  			$$.Etype = $1.Etype;
	  		}
	  		else if(($1.Etype)->tNodeType == DOUBLE && ($3.Etype)->tNodeType == INT){
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
	  			$$.Etype = $1.Etype;
	  		}
	  		else if(($1.Etype)->tNodeType == CHAR && ($3.Etype)->tNodeType == INT){
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
	  			$$.Etype = $3.Etype;
	  		}
	  		$$.loc = temp2;
	  	}
		}
	| additive_expression '-' multiplicative_expression
		{
			if(typecheck($1.Etype, $3.Etype)){
	  		$$.loc = localST->gentemp(($1.Etype)->tNodeType);
	  		char *Arg1 = strdup(($1.loc)->srName);
	  		char *Arg2 = strdup(($3.loc)->srName);
	  		char *res = strdup(($$.loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,MINUS,$1.loc,$3.loc,$$.loc);
	  		globalQArray->emit(x);
	  		$$.Etype = $1.Etype;
	  	}
	  	else{
	  		symbolTableRow *temp1, *temp2;
	  		if(($1.Etype)->tNodeType == INT && ($3.Etype)->tNodeType == DOUBLE){
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
	  			$$.Etype = $3.Etype;
	  		}
	  		else if(($1.Etype)->tNodeType == INT && ($3.Etype)->tNodeType == CHAR){
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
	  			$$.Etype = $1.Etype;
	  		}
	  		else if(($1.Etype)->tNodeType == DOUBLE && ($3.Etype)->tNodeType == INT){
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
	  			$$.Etype = $1.Etype;
	  		}
	  		else if(($1.Etype)->tNodeType == CHAR && ($3.Etype)->tNodeType == INT){
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
	  			$$.Etype = $3.Etype;
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
	  	if(typecheck($1.Etype, $3.Etype)){
	  		$$.loc = localST->gentemp(($1.Etype)->tNodeType);
	  		char *Arg1 = strdup(($1.loc)->srName);
	  		char *Arg2 = strdup(($3.loc)->srName);
	  		char *res = strdup(($$.loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,SHIFTLEFT,$1.loc,$3.loc,$$.loc);
	  		globalQArray->emit(x);
	  		$$.Etype = $1.Etype;
	  	}
	  }
	| shift_expression RIGHT_SHIFT additive_expression
		{
	  	if(typecheck($1.Etype, $3.Etype)){
	  		$$.loc = localST->gentemp(($1.Etype)->tNodeType);
	  		char *Arg1 = strdup(($1.loc)->srName);
	  		char *Arg2 = strdup(($3.loc)->srName);
	  		char *res = strdup(($$.loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,SHIFTRIGHT,$1.loc,$3.loc,$$.loc);
	  		globalQArray->emit(x);
	  		$$.Etype = $1.Etype;
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
	  	$$.Etype = new_node(BOOL,-1);	
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
	  	$$.Etype = new_node(BOOL,-1);
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
	  	$$.Etype = new_node(BOOL,-1);
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
	  	$$.Etype = new_node(BOOL,-1);
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
	  	$$.Etype = new_node(BOOL,-1);
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
	  	$$.Etype = new_node(BOOL,-1);
	  }
	;

and_expression
	: equality_expression
		{
			$$ = $1;
		}
	| and_expression '&' equality_expression
		{
	  	if(typecheck($1.Etype, $3.Etype)){
	  		$$.loc = localST->gentemp(($1.Etype)->tNodeType);
	  		char *Arg1 = strdup(($1.loc)->srName);
	  		char *Arg2 = strdup(($3.loc)->srName);
	  		char *res = strdup(($$.loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,BW_AND,$1.loc,$3.loc,$$.loc);
	  		globalQArray->emit(x);
	  		$$.Etype = $1.Etype;
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
	  	if(typecheck($1.Etype, $3.Etype)){
	  		$$.loc = localST->gentemp(($1.Etype)->tNodeType);
	  		char *Arg1 = strdup(($1.loc)->srName);
	  		char *Arg2 = strdup(($3.loc)->srName);
	  		char *res = strdup(($$.loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,BW_XOR,$1.loc,$3.loc,$$.loc);
	  		globalQArray->emit(x);
	  		$$.Etype = $1.Etype;
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
	  	if(typecheck($1.Etype, $3.Etype)){
	  		$$.loc = localST->gentemp(($1.Etype)->tNodeType);
	  		char *Arg1 = strdup(($1.loc)->srName);
	  		char *Arg2 = strdup(($3.loc)->srName);
	  		char *res = strdup(($$.loc)->srName);
	  		quadArrayRow x(Arg1,Arg2,res,BW_OR,$1.loc,$3.loc,$$.loc);
	  		globalQArray->emit(x);
	  		$$.Etype = $1.Etype;
	  	}
	  }
	;

logical_and_expression
	: inclusive_or_expression
		{
			$$ = $1;
		}
	| logical_and_expression LOGICAL_AND JUMP_AUG inclusive_or_expression//JUMP_AUG is augment to take care of control transfer based on the value of expressions //If $1 is true jump to $3
		{
			backpatch($1.TrueList,$3);
	  	$$.FalseList = merge($1.FalseList, $4.FalseList);
	  	$$.TrueList = $4.TrueList;
	  	$$.Etype = new_node(BOOL,-1);
		}
	;

logical_or_expression
	: logical_and_expression
		{
			$$ = $1;
		}
	| logical_or_expression LOGICAL_OR JUMP_AUG logical_and_expression//if $1 is false jump to $3
		{
	  	backpatch($1.FalseList,$3);
	  	$$.TrueList = merge($1.TrueList,$4.TrueList);
	  	$$.FalseList = $4.FalseList;
	  	$$.Etype = new_node(BOOL,-1);
	  }
	;

conditional_expression
	: logical_or_expression
		{
			$$ = $1;
		}
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression
		{
			$$ = $1;
		}
	| unary_expression assignment_operator assignment_expression
	;

/* Compound assignment operators not supported */
assignment_operator
	: '='{}
	| STAR_EQUAL{/*Not supported --skip*/}
	| BY_EQUAL{/*Not supported --skip*/}
  | PERCENT_EQUAL{/*Not supported --skip*/}
  | PLUS_EQUAL{/*Not supported --skip*/}
  | MINUS_EQUAL{/*Not supported --skip*/}
  | LEFT_SHIFT_EQUAL{/*Not supported --skip*/}
  | RIGHT_SHIFT_EQUAL{/*Not supported --skip*/}
  | AND_EQUAL{/*Not supported --skip*/}
  | BITWISENOT_EQUAL{/*Not supported --skip*/}
  | OR_EQUAL{/*Not supported --skip*/}
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers ';'{/*Not supported --skip*/}
	| declaration_specifiers init_declarator_list ';'
	;

declaration_specifiers
	: storage_class_specifier
	| storage_class_specifier declaration_specifiers
	| type_specifier
	| type_specifier declaration_specifiers
	| type_qualifier
	| type_qualifier declaration_specifiers
	| function_specifier
	| function_specifier declaration_specifiers
	;

init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator
	;

init_declarator
	: declarator
	| declarator '=' initializer
	;
storage_class_specifier
	: TYPEDEF_KEYWORD
	| EXTERN_KEYWORD
	| STATIC_KEYWORD
	| AUTO_KEYWORD
	| REGISTER_KEYWORD
	;

type_specifier
	: VOID_KEYWORD
	| CHAR_KEYWORD
	| SHORT_KEYWORD
	| INT_KEYWORD
	| LONG_KEYWORD
	| FLOAT_KEYWORD
	| DOUBLE_KEYWORD
	| SIGNED_KEYWORD
	| UNSIGNED_KEYWORD
	| BOOL_KEYWORD
	| COMPLEX_KEYWORD
	| IMAGINARY_KEYWORD
	| enum_specifier
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

enum_specifier
	: ENUM_KEYWORD '{' enumerator_list '}'
	| ENUM_KEYWORD IDENTIFIER '{' enumerator_list '}'
	| ENUM_KEYWORD IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	;

enumerator
	: IDENTIFIER
	| IDENTIFIER '=' constant_expression
	;

type_qualifier
	: CONST_KEYWORD
	| RESTRICT_KEYWORD
	| VOLATILE_KEYWORD
	;

function_specifier
	: INLINE_KEYWORD
	;

declarator
	: pointer direct_declarator
	| direct_declarator
	;

direct_declarator
	: IDENTIFIER
	| '(' declarator ')'
	| direct_declarator '[' type_qualifier_list assignment_expression ']'
	| direct_declarator '[' assignment_expression ']'
	| direct_declarator '[' type_qualifier_list ']'
	| direct_declarator '[' ']'
	| direct_declarator '[' STATIC_KEYWORD type_qualifier_list assignment_expression ']'
	| direct_declarator '[' STATIC_KEYWORD assignment_expression ']'
	| direct_declarator '[' type_qualifier_list STATIC_KEYWORD assignment_expression ']'
	| direct_declarator '[' type_qualifier_list '*' ']'
	| direct_declarator '[' '*' ']'
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' identifier_list ')'
	| direct_declarator '(' ')'
	;

pointer
	: '*'
	| '*' type_qualifier_list
	| '*' pointer
	| '*' type_qualifier_list pointer
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list
	| parameter_list ',' ELLIPSES
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer
	| initializer_list ',' initializer
	| initializer_list ',' designation initializer
	;

designation
	: designator_list '='
	;

designator_list
	: designator
	| designator_list designator
	;

designator
	: '[' constant_expression ']'
	| '.' IDENTIFIER
	;

statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE_KEYWORD constant_expression ':' statement
	| DEFAULT_KEYWORD ':' statement
	;

compound_statement
	: '{' '}'
	| '{' block_item_list '}'
	;

block_item_list
	: block_item
	| block_item_list block_item
	;

block_item
	: declaration
	| statement
	;

expression_statement
	: ';'
	| expression ';'
	;

selection_statement
	: IF_KEYWORD '(' expression ')' statement
	| IF_KEYWORD '(' expression ')' statement ELSE_KEYWORD statement
	| SWITCH_KEYWORD '(' expression ')' statement
	;

iteration_statement
	: WHILE_KEYWORD '(' expression ')' statement
	| DO_KEYWORD statement WHILE_KEYWORD '(' expression ')' ';'
	| FOR_KEYWORD '(' expression_statement expression_statement expression ')' statement
	| FOR_KEYWORD '(' declaration expression_statement expression ')' statement
	;

jump_statement
	: GOTO_KEYWORD IDENTIFIER ';'
	| CONTINUE_KEYWORD ';'
	| BREAK_KEYWORD ';'
	| RETURN_KEYWORD ';'
	| RETURN_KEYWORD expression ';'
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

external_declaration
	: function_definition
	| declaration
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement
	;

declaration_list
	: declaration
		{
			//skip
		}
	| declaration_list declaration
		{
			//skip
		}
	;

JUMP_AUG
	:
		{
			$$ = instCounter;
		}
	;
%%

void yyerror(char* s) {
	printf("%s", s);
}