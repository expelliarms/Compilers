# include "ass5_13CS10055_translator.h"
# include "y.tab.h"
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <iostream>

using namespace std;

/* Global Variables */
int totalTemps = 0;
symbolTable *globalST = NULL;
symbolTable *localST = NULL;
int instCounter = 0;
quadArray *globalQArray = NULL; 
//Redefinition error vs undefined reference ?? 

/* Global Functions */
lNode *makelist(int i)//Creates a new list containing only i and returns the pointer to the newly created list
{
	lNode *templNode = new lNode;
	templNode->danglingIndex = i;
	templNode->next = NULL;
	return templNode;
}

lNode *merge(lNode *p1, lNode *p2)//Concatenates two lists pointed by p1 and p2 and returns pointer to the concatenated list
{
	if(p1 == NULL)//if one of them is NULL return the other one
		return p2;
	if(p2 == NULL)
		return p1;
	lNode *templNode = p1;
	while(templNode->next != NULL)//Traverse upto the end of p1
		templNode = templNode->next;
	templNode->next = p2;//Concatenate p2 to the next of last nod of p1
	return p1;//return p1 after concatenating
}

void backpatch(lNode *p, int i)//function to insert i as the target label for each of the quad’s on the list pointed to by p.
{
	lNode *templNode = p;
	while(templNode)//Iterate through each of the quads pointed by p
	{
		globalQArray->fill_dangling_goto(templNode->danglingIndex,i);//insert i as the target lab;e to each of them
		templNode = templNode->next;
	}
}

int typecheck(tNode *e1, tNode *e2)//Check for compatibel types
{
	if(e1->tNodeType == e2->tNodeType)
	{
		return 1;
	}
	else
	{
		/* Have to take care of implicit conversion */
		printf("Incompatible types\n");
	}
	return 0;
}

tNode *create_tNode(typeSpecifier type)//Function to create a new tNode
{
	tNode *temptNode = new tNode;
	temptNode->tNodeType = type;
	temptNode->left = 0;
	temptNode->right = NULL;
	return temptNode;
}

int calculateWidth(tNode *temp)//Calculate the width of the tree
{
	if(temp == NULL)
		return 0;
	int width = 1;
	while(temp)
	{
		switch(temp->tNodeType)
		{
			case INT : width *= SIZEOF_INT;
				break;
			case DOUBLE : width *= SIZEOF_DOUBLE;
				break;
			case CHAR : width *= SIZEOF_CHAR;
				break;
		}
	}
	temp = temp->right;
	return width;
}

tNode *new_node(typeSpecifier t, int val)
{
	tNode *temp = new tNode;
	temp->tNodeType = t;
	if(t == ARRAY)
		temp->left = new int(val);
	else
		temp->left = 0;
	temp->right = 0;
	return temp;
}

/* ------ symbolTableRow implementation ------ */

//Constructor
symbolTableRow :: symbolTableRow(char *Name, tNode *Type, void *InitialValue, int size, int Offset, symbolTable *NestedTable) : srName(Name), srType(Type), srInitialValue(InitialValue), srSize(size), srOffset(Offset), srNestedTable(NestedTable){}

//Assignment Operator
void symbolTableRow :: operator=(symbolTableRow &right)
{
	this->srName = right.srName;
	this->srType = right.srType;
	this->srInitialValue = right.srInitialValue;
	this->srSize = right.srSize;
	this->srOffset = right.srOffset;
	this->srNestedTable = right.srNestedTable;
}

//SymbolTableRow print function
void symbolTableRow :: print_sRow()
{
	printf("%s\t", srName);
	
	switch(srType->tNodeType)//Print statements for initial values of various types 
	{
		case INT : cout<<(*((int *)srInitialValue))<<" ";
			break;
		case DOUBLE : cout<<(*((double *)srInitialValue))<<" ";
			break;
		case CHAR : cout<<(*((char *)srInitialValue))<<" ";
			break;
		default : printf("InitialValue not defined\t");
	}
	
	cout<<"\t"<<srSize<<"\t"<<srOffset<<"\t";
	
	//Check for nested tables
	if(srNestedTable == 0)
	{
		printf("...\t");
	}
	else
	{
		printf("%s\t", (srNestedTable->stTabletop)[0].srName);
	}
	
	//Print tree structue 
	tNode *temptNode = srType; 
	while(temptNode)
	{
		switch(temptNode->tNodeType)
		{
			case INT : printf("int ");
				break;
			case CHAR : printf("char ");
				break;
			case DOUBLE : printf("double ");
				break;
			case VOID : printf("void ");
				break;
			case BOOL : printf("bool ");
				break;
			default : printf("Undefined Type ");
		}
		if(temptNode->left != 0)
		{
			cout<<*(temptNode->left)<<" ";
		}
		temptNode = temptNode->right;
	}
	printf("\n");
}

//Destructor
symbolTableRow :: ~symbolTableRow(){}

/* ----- symbolTableRow implementation end ---- */

/* ---- Implementation of symbolTable class ----*/

//Constructor
symbolTable :: symbolTable(unsigned int numRows)
{
	stTabletop = new symbolTableRow[numRows];//Declare numRows number of symbolTableRows 
	stNumRows = -1;//Initialize the number of rows of the table to -1 indicating that there are no entries yet
}

// Table lookup method
symbolTableRow *symbolTable :: lookup(char *varName)
{
	int i = 0;
	for(; i <= stNumRows; i++)//Loop through the entries of symbol table
	{
		if(strcmp((stTabletop+i)->srName,varName) == 0)
			return (stTabletop + i);//If the variable name is found, return the address of the row 
	}
	return 0;//Return 0 if the name is not found in the symbol table
}

// Table Insert method
void symbolTable :: insert(symbolTableRow &tempRow)
{
	if(stNumRows == -1)
	{
		tempRow.srOffset = 0;
	}
	else
	{
		tempRow.srOffset = (stTabletop + stNumRows)->srSize + (stTabletop + stNumRows)->srOffset;//Add the last row's size and offset to calculate the new offset
	}
	stNumRows++;//Increment the number of rows
	*(stTabletop + stNumRows) = tempRow;//Augment the tempRow to the end of the table
}

// Print Table method
void symbolTable :: print_stTable()
{
	int i;
	for(i = 0; i <= stNumRows; i++)//Iterate through the rows and print each row
	{
		(stTabletop + i)->print_sRow();
	}
	printf("\n");
}

// gentemp method
symbolTableRow *symbolTable :: gentemp(typeSpecifier tempType)
{
	tNode *temp = new tNode;
	temp->tNodeType = tempType;
	temp->left = 0;
	temp->right = NULL; 
	char *tempName = new char[10];
	sprintf(tempName, "t%d",totalTemps++);//Namng convention t0,t1,t2,...
	int tempSize;
	switch(tempType)
	{
		case INT : tempSize = SIZEOF_INT;
			break;
		case CHAR : tempSize = SIZEOF_CHAR;
			break;
		case DOUBLE : tempSize = SIZEOF_DOUBLE;
			break;
		default : tempSize = 0;
	}
	symbolTableRow newRow(tempName,temp,0,tempSize,-1,0);//Create new Row
	insert(newRow);// Insert into the symbol table
	return stTabletop + stNumRows;// Return the pointer to the newly inserted row
}

//Destructor
symbolTable :: ~symbolTable(){}

/* -- end of Implementation of symbolTable class --*/

/* ------ Implementation of quadArrayRow ---------- */
//Constructor
quadArrayRow :: quadArrayRow(char *arg1, char *arg2, char *res, opSpecifier op, symbolTableRow *arg1_loc, symbolTableRow *arg2_loc, symbolTableRow *res_loc) : qrArg1(arg1), qrArg2(arg2), qrRes(res), qrOp(op), qrArg1_Loc(arg1_loc), qrArg2_Loc(arg2_loc), qrRes_Loc(res_loc) {}

//Method to overload assignment operator
void quadArrayRow::operator=(quadArrayRow &x)
{
	this->qrArg1 = x.qrArg1;
	this->qrArg2 = x.qrArg2;
	this->qrRes = x.qrRes;
	this->qrOp = x.qrOp;
	this->qrArg1_Loc = x.qrArg1_Loc;
	this->qrArg2_Loc = x.qrArg2_Loc;
	this->qrRes_Loc = x.qrRes_Loc;
}

//Method to print quadArrayRow
void quadArrayRow :: print_quadArrayRow(int line)
{
	if(this->qrArg2)//Check for the 2nd Arguement
	{
		switch(this->qrOp)
		{
			case PLUS : printf("%3d : %s = %s + %s \n", line, this->qrRes, this->qrArg1, this->qrArg2);//Addition operator
				break;
			case MINUS : printf("%3d : %s = %s - %s \n", line, this->qrRes, this->qrArg1, this->qrArg2);//Subtraction operator
				break;
			case INTO : printf("%3d : %s = %s * %s \n", line, this->qrRes, this->qrArg1, this->qrArg2);//Multiplication Operator
				break;
			case DIV : printf("%3d : %s = %s / %s \n", line, this->qrRes, this->qrArg1, this->qrArg2);//Div operator
				break;
			case PERCENT : printf("%3d : %s = %s %% %s \n", line, this->qrRes, this->qrArg1, this->qrArg2);//Mod operator
				break;
			case LOGIC_AND : printf("%3d : %s = %s && %s \n", line, this->qrRes, this->qrArg1, this->qrArg2);//Mod operator
				break;
			case LOGIC_OR : printf("%3d : %s = %s || %s \n", line, this->qrRes, this->qrArg1, this->qrArg2);//Mod operator
				break;
			case BW_AND : printf("%3d : %s = %s & %s \n", line, this->qrRes, this->qrArg1, this->qrArg2);//Mod operator
				break;
			case BW_OR : printf("%3d : %s = %s | %s \n", line, this->qrRes, this->qrArg1, this->qrArg2);//Mod operator
				break;
			case BW_XOR : printf("%3d : %s = %s ^ %s \n", line, this->qrRes, this->qrArg1, this->qrArg2);//Mod operator
				break;
			case SHIFTLEFT : printf("%3d : %s = %s << %s \n", line, this->qrRes, this->qrArg1, this->qrArg2);//Shift left
				break;
			case SHIFTRIGHT : printf("%3d : %s = %s >> %s \n", line, this->qrRes, this->qrArg1, this->qrArg2);//Shift right
				break;
			case LESSTHAN : printf("%3d : %s = %s < %s \n", line, this->qrRes, this->qrArg1, this->qrArg2);//Less than operator
				break;
			case LESSTHANEQ : printf("%3d : %s = %s <= %s \n", line, this->qrRes, this->qrArg1, this->qrArg2);//Less than or equal to operator
				break;
			case GREATERTHAN : printf("%3d : %s = %s > %s \n", line, this->qrRes, this->qrArg1, this->qrArg2);// Greater than operator
				break;
			case GREATERTHANEQ : printf("%3d : %s = %s >= %s \n", line, this->qrRes, this->qrArg1, this->qrArg2);// Greater than or equal to operator
				break;
			case EQUALTO : printf("%3d : %s = %s == %s \n", line, this->qrRes, this->qrArg1, this->qrArg2);//Equalto equalto operator
				break;
			case NOTEQUALTO : printf("%3d : %s = %s != %s \n", line, this->qrRes, this->qrArg1, this->qrArg2);// Not equal to operator
				break;
			case goto_LESSTHAN : printf("%3d : if %s < %s goto %s\n",line,this->qrArg1,this->qrArg2,this->qrRes);
				break;
			case goto_LESSTHANEQ : printf("%3d : if %s <= %s goto %s\n",line,this->qrArg1,this->qrArg2,this->qrRes);
				break;
			case goto_GREATERTHAN : printf("%3d : if %s > %s goto %s\n",line,this->qrArg1,this->qrArg2,this->qrRes);
				break;
			case goto_GREATERTHANEQ : printf("%3d : if %s >= %s goto %s\n",line,this->qrArg1,this->qrArg2,this->qrRes);
				break;
			case goto_EQUALTO : printf("%3d : if %s == %s goto %s\n",line,this->qrArg1,this->qrArg2,this->qrRes);
				break;
			case goto_NOTEQUALTO : printf("%3d : if %s != %s goto %s\n",line,this->qrArg1,this->qrArg2,this->qrRes);
				break;
			case call : printf("%3d : %s = call %s, %s\n",line,this->qrRes,this->qrArg1,this->qrArg2);
				break;
			case EQ_BRACKET : printf("%3d : %s = %s[%s]\n",line,this->qrRes,this->qrArg1,this->qrArg2);
				break;
			case BRACKET_EQ : printf("%3d : %s[%s] = %s\n",line,this->qrArg1,this->qrArg2,this->qrRes);
				break;
			default : printf("Operator not defined\n");
		}
	}
	else
	{
		switch(this->qrOp)
		{
			case U_PLUS : printf("%3d : %s = %s\n",line,this->qrRes,this->qrArg1);
				break;
			case U_MINUS : printf("%3d : %s = - %s\n",line,this->qrRes,this->qrArg1);
				break;
			case BW_U_NOT : printf("%3d : %s = ~%s\n",line,this->qrRes,this->qrArg1);
				break;
			case U_NEGATION : printf("%3d : %s = !%s\n",line,this->qrRes,this->qrArg1);
				break;
			case U_ADDR : printf("%3d : %s = & %s\n",line,this->qrRes,this->qrArg1);
				break;
			case U_STAR : printf("%3d : %s = * %s\n",line,this->qrRes,this->qrArg1);
				break;
			case ASSIGN : printf("%3d : %s = %s\n",line,this->qrRes,this->qrArg1);
				break;
			case GOTO : printf("%3d : goto %s\n",line,this->qrRes);
				break;
			case IF_GOTO : printf("%3d : if %s goto %s\n",line,this->qrArg1,this->qrRes);
				break;
			case IF_FALSE_GOTO : printf("%3d : ifFalse %s goto %s\n",line,this->qrArg1,this->qrRes);
				break;
			case PARAM : printf("%3d : param %s\n",line,this->qrArg1);
				break;
			case RETURN_EXP : printf("%3d : return %s\n",line,this->qrArg1);
				break;
			case RETURN : printf("%3d : return\n",line);
				break;
			case Function : printf("%3d : %s : \n",line,this->qrArg1);
				break;
			default : printf("Operator not defined\n");
		}
	}
}

//Destructor
quadArrayRow :: ~quadArrayRow() {}
/* ----- end of Implementation of quadArrayRow ----- */

/* Implementation of class quadArray */
//Constructor
quadArray :: quadArray(unsigned int numRows = MAX_SIZE)
{
	quadArraytop = new quadArrayRow[numRows];
	instCounter = 0;
}

//Emit method
void quadArray :: emit(quadArrayRow &x){
	*(quadArraytop + (instCounter++)) = x;
}

//Print quad array method
void quadArray :: print_quadArray(){
	int i;
	for(i = 0;i < instCounter;i++){
		quadArraytop[i].print_quadArrayRow(i);
	}
}

void quadArray :: fill_dangling_goto(int index, int data){
	char *temp = new char[10];
	sprintf(temp,"%d",data);
	((this->quadArraytop)[index]).qrRes = temp;
}



int main(){
  globalST = new symbolTable(MAX_SIZE);
  localST = globalST;
  globalQArray = new quadArray(10000);
  int x = yyparse();
  return 0;
}