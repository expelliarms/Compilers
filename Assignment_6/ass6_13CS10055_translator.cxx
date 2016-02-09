# include "ass6_13CS10055_translator.h"
# include "y.tab.h"
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <iostream>

using namespace std;

/* Global variables */
int totalTemps = 0;
symbolTable *globalST = NULL;
symbolTable *localST = NULL;
int instCounter = 0;
quadArray *globalQArray = NULL;//Redefinition error vs undefined reference ?? --peace
tNode *t = 0;
int w;
symbolTable *temp_use = 0;
int flag1 = 0;
int flag2 = 0;
int c = 0;
int line_count = 0;
int flag_array = 0;
int left_or_right = 1;
int is_left = 0;			
int star_count = 0;
char **s;
char **constsTable;
int count_toc = 0;

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

int typecheck(tNode *t1, tNode *t2)//Check for compatibel types
{
	if(!t1 && !t2) return 1;
	if(!t1) return 0;
	if(!t2) return 0;
	if((t1->tNodeType == POINTER && t2->tNodeType == ARRAY) || (t1->tNodeType == ARRAY && t2->tNodeType == POINTER) || t1->tNodeType == t2->tNodeType)
		return typecheck(t1->right,t2->right);
	return 0;
}

tNode *create_tNode(typeSpecifier type, int val)//Function to create a new tNode
{
	tNode *temptNode = new tNode;
	temptNode->tNodeType = type;
	if(type == ARRAY)
		temptNode->left = new int(val);
	else
		temptNode->left = 0;
	temptNode->right = NULL;
	return temptNode;
}

tNode *create_tNode(typeSpecifier type)//Overloaded function --when the second parameter is not defined 
{
	tNode *temptNode = new tNode;
	temptNode->tNodeType = type;
	temptNode->left = 0;
	temptNode->right = NULL;
	return temptNode;
}

int calculateWidth(tNode *temp)//Calculate the width of the tree
{
	if(temp == NULL) return 0;
	int width = 1;
	while(temp)
	{
		switch(temp->tNodeType)
		{
			case ARRAY : width *= (*temp->left);
				break;
			case INT : width *= SIZE_OF_INT;
				break;
			case DOUBLE : width *= SIZE_OF_DOUBLE;
				break;
			case CHAR : width *= SIZE_OF_CHAR;
				break;
			case POINTER : width *= SIZE_OF_PTR;
				break;
		}
		if(temp->tNodeType == POINTER)
			break;
		temp = temp->right;
	}
	return width;
}

symbolTable *createSymbolTable()// Creates a symbol table and returns a pointer to it
{
	symbolTable *st = new symbolTable(MAX_SIZE);
	return st;
}

/* Prints the expression tree */
void print_expTree(tNode *temp)
{
	while(temp){
		switch(temp->tNodeType)
		{
			case INT : cout<<"int ";
				break;
			case DOUBLE : cout<<"double ";
				break;
			case CHAR : cout<<"char ";
				break;
			case VOID : cout<<"void ";
				break;
			case ARRAY : cout<<"array ";
				break;
			case POINTER : cout<<"ptr ";
				break;
			case FUNCTION : cout<<"function ";
				break;
			default : cout<<"Undefined Type ";
		}
		if(temp->left)
			cout<<*(temp->left)<<" ";
		temp = temp->right;
	}
}
void print_Initial_Value(void *temp, tNode *t){
	if(!temp)
		cout<<"... ";
	else{
		switch(t->tNodeType){
			case INT : cout<<(*((int *)temp))<<" ";
						break;
			case DOUBLE : cout<<(*((double *)temp))<<" ";
						break;
			case CHAR : cout<<(*((char *)temp))<<" ";
						break;
		}
	}
}

tNode *merge_node(tNode *sub, tNode *one_node){
	if(!sub) return one_node;
	tNode *temp = sub;
	while(temp->right)
		temp = temp->right;
	temp->right = one_node;
	return sub;
}

void conv2Bool(expAttributes *E){
	if(((E->type)->tNodeType) != BOOL){
		E->FalseList = makelist(instCounter);
		char *Arg1 = strdup((E->loc)->srName);
		/*char *Arg2 = new char[10];
		sprintf(Arg2,"0");*/
		quadArrayRow x(Arg1,0,0,IF_FALSE_GOTO,E->loc,0,0);
		globalQArray->emit(x);
		E->TrueList = makelist(instCounter);
		quadArrayRow y(0,0,0,GOTO,0,0,0);
		globalQArray->emit(y);
	}
}

tNode *duplicate_tree(tNode *temp){
	if(!temp) return 0;
	tNode *tu;
	if(temp->tNodeType == ARRAY)
		tu = create_tNode(ARRAY,*(temp->left));
	else
		tu = create_tNode(temp->tNodeType,-1);
	tu->right = duplicate_tree(temp->right);
	return tu;
}

pNode *make_param_list(symbolTableRow *p){
	pNode *temp = new pNode;
	temp->parameter = p;
	temp->next = 0;
	return temp;
}

pNode *merge_param_list(pNode *l1, pNode *l2){
	if(!l1) return l2;
	if(!l2) return l1;
	pNode *temp = l1;
	while(temp->next)
		temp = temp->next;
	temp->next = l2;
	return l1;
}


/* ------ symbolTableRow implementation ------ */

//Constructor
symbolTableRow :: symbolTableRow(char *Name, tNode *Type, void *InitialValue, int srsize, int Offset, symbolTable *NestedTable) : srName(Name), Type(Type), srInitialValue(InitialValue), size(srsize), srOffset(Offset), srNestedTable(NestedTable) {}

//Assignment Operator
void symbolTableRow :: operator=(symbolTableRow &right){
	this->srName = right.srName;
	this->Type = right.Type;
	this->srInitialValue = right.srInitialValue;
	this->size = right.size;
	this->srOffset = right.srOffset;
	this->srNestedTable = right.srNestedTable;
}

//SymbolTableRow print function
void symbolTableRow :: print_sRow()
{
	printf("%s\t ",srName);
	//Print statements for initial values of various types 
	if(srInitialValue)
	{
		switch(Type->tNodeType)
		{
			case INT : cout<<(*((int *)srInitialValue))<<" ";
				break;
			case DOUBLE : cout<<(*((double *)srInitialValue))<<" ";
				break;
			case CHAR : cout<<(*((char *)srInitialValue))<<" ";
				break;
		}
	}
	else
	{
		cout<<"... ";
	}
	printf("\t");
	cout<<size<<"\t";
	cout<<srOffset<<"\t";
	//Check fot nested tables
	if(srNestedTable)
		printf("%s \t",(srNestedTable->table)[0].srName);
	else
		cout<<"... \t";
	print_expTree(Type);
}

//Destructor
symbolTableRow :: ~symbolTableRow(){}

/* ----- symbolTableRow implementation end ---- */

/* ---- Implementation of symbolTable class ----*/

//Constructor
symbolTable :: symbolTable(unsigned int numRows)
{
	table = new symbolTableRow[numRows];//Declare numRows number of symbolTableRows 
	stNumRows = -1;//Initialize the number of rows of the table to -1 indicating that there are no entries yet
}

// Table lookup method
symbolTableRow *symbolTable :: lookup(char *varname)// Returns the pointer to the symboltable row if the variable name is already present, else returns 0
{											
	int i;
	for(i = 0;i<=stNumRows;i++)//Loop through the entries of symbol table
	{
		if(strcmp(table[i].srName,varname) == 0)
			return (table + i);//If the variable name is found, return the address of the row 
	}
	return 0;//Return 0 if the name is not found in the symbol table
}

// Table Insert method
void symbolTable :: insert(symbolTableRow &tempRow)
{											
	if(stNumRows == -1)
		tempRow.srOffset = 0;
	else
		tempRow.srOffset = table[stNumRows].size + table[stNumRows].srOffset;//Add the last row's size and offset to calculate the new offset
	stNumRows++;//Increment the number of rows
	table[stNumRows] = tempRow;//Augment the tempRow to the end of the table
}

// Print Table method
void symbolTable :: print_stTable()// Prints the symbol table
{															
	int i;
	for(i=0;i<=(this->stNumRows);i++)//Itereate through the rows and print each of them
	{
		table[i].print_sRow();
		cout<<endl;
	}
}

// gentemp method
symbolTableRow *symbolTable :: gentemp(typeSpecifier tempType)
{
	tNode *temp = create_tNode(tempType,-1);
	char *tempName = new char[10];
	sprintf(tempName,"t%d",totalTemps);//Namng convention t0,t1,t2,...
	totalTemps++;
	int temp_size = 0;
	switch(tempType){
		case INT : temp_size = SIZE_OF_INT;
					break;
		case CHAR : temp_size = SIZE_OF_CHAR;
					break;
		case DOUBLE : temp_size = SIZE_OF_DOUBLE;
					break;
		case POINTER : temp_size = SIZE_OF_PTR;
					break;
	}
	symbolTableRow newRow(tempName,temp,0,temp_size,-1,0);//Create new Row
	insert(newRow);// Insert into the symbol table
	return table + stNumRows;// Return the pointer to the newly inserted row
}

symbolTableRow *symbolTable :: gentemp_cmplx(tNode *temp)
{
	tNode *ti = duplicate_tree(temp);
	int siz = calculateWidth(ti);
	char *s = new char[10];
	sprintf(s,"t%d",totalTemps);
	totalTemps++;
	symbolTableRow x(s,ti,0,siz,-1,0);
	this->insert(x);
	return &((this->table)[stNumRows]);
}

//Destructor
symbolTable :: ~symbolTable(){}

/* -- end of Implementation of symbolTable class --*/

/* Implementation of quadArrayRow */

quadArrayRow :: quadArrayRow(char *arg1_f, char *arg2_f, char *res_f, opSpecifier op_f, symbolTableRow *arg1_loc_f, symbolTableRow *arg2_loc_f, symbolTableRow *res_loc_f) : Arg1(arg1_f), Arg2(arg2_f), res(res_f), op(op_f), arg1_loc(arg1_loc_f), arg2_loc(arg2_loc_f), res_loc(res_loc_f) {}

void quadArrayRow :: operator=(quadArrayRow &x){
	this->Arg1 = x.Arg1;
	this->Arg2 = x.Arg2;
	this->res = x.res;
	this->op = x.op;
	this->arg1_loc = x.arg1_loc;
	this->arg2_loc = x.arg2_loc;
	this->res_loc = x.res_loc;
}

void quadArrayRow :: print_quadArrayRow(int line){
	if(this->Arg2)//Binary operators -- 2nd argument present
	{
		switch(this->op)
		{
			case PLUS : printf("%3d : %s = %s + %s\n",line,this->res,this->Arg1,this->Arg2);
						break;
			case MINUS : printf("%3d : %s = %s - %s\n",line,this->res,this->Arg1,this->Arg2);
						break;
			case INTO : printf("%3d : %s = %s * %s\n",line,this->res,this->Arg1,this->Arg2);
						break;
			case DIV : printf("%3d : %s = %s / %s\n",line,this->res,this->Arg1,this->Arg2);
						break;
			case PERCENT : printf("%3d : %s = %s %% %s\n",line,this->res,this->Arg1,this->Arg2); 
						break;

			case LOGIC_AND : printf("%3d : %s = %s && %s\n",line,this->res,this->Arg1,this->Arg2);
						break;
			case LOGIC_OR : printf("%3d : %s = %s || %s\n",line,this->res,this->Arg1,this->Arg2);
						break;

			case BW_AND : printf("%3d : %s = %s & %s\n",line,this->res,this->Arg1,this->Arg2);
						break;
			case BW_INOR : printf("%3d : %s = %s | %s\n",line,this->res,this->Arg1,this->Arg2);
						break;
			case BW_XOR : printf("%3d : %s = %s ^ %s\n",line,this->res,this->Arg1,this->Arg2);
						break;

			case SHIFTLEFT : printf("%3d : %s = %s << %s\n",line,this->res,this->Arg1,this->Arg2);
						break;
			case SHIFTRIGHT : printf("%3d : %s = %s >> %s\n",line,this->res,this->Arg1,this->Arg2);
						break;

			case LESSTHAN : printf("%3d : %s = %s < %s\n",line,this->res,this->Arg1,this->Arg2);
						break;
			case LESSTHANEQ : printf("%3d : %s = %s <= %s\n",line,this->res,this->Arg1,this->Arg2);
						break;
			case GREATERTHAN : printf("%3d : %s = %s > %s\n",line,this->res,this->Arg1,this->Arg2);
						break;
			case GREATERTHANEQ : printf("%3d : %s = %s >= %s\n",line,this->res,this->Arg1,this->Arg2);
						break;
			case EQUALTO : printf("%3d : %s = %s == %s\n",line,this->res,this->Arg1,this->Arg2);
						break;
			case NOTEQUALTO : printf("%3d : %s = %s != %s\n",line,this->res,this->Arg1,this->Arg2);
						break;
						
			case goto_LESSTHAN : printf("%3d : if %s < %s goto %s\n",line,this->Arg1,this->Arg2,this->res);
						break;
			case goto_LESSTHANEQ : printf("%3d : if %s <= %s goto %s\n",line,this->Arg1,this->Arg2,this->res);
						break;
			case goto_GREATERTHAN : printf("%3d : if %s > %s goto %s\n",line,this->Arg1,this->Arg2,this->res);
						break;
			case goto_GREATERTHANEQ : printf("%3d : if %s >= %s goto %s\n",line,this->Arg1,this->Arg2,this->res);
						break;
			case goto_EQUALTO : printf("%3d : if %s == %s goto %s\n",line,this->Arg1,this->Arg2,this->res);
						break;
			case goto_NOTEQUALTO : printf("%3d : if %s != %s goto %s\n",line,this->Arg1,this->Arg2,this->res);
						break;

			case call : printf("%3d : %s = call %s, %s\n",line,this->res,this->Arg1,this->Arg2);
						break;
			case call_void : printf("%3d : call %s, %s\n",line,this->Arg1,this->Arg2);
						break;

			case EQ_BRACKET : printf("%3d : %s = %s[%s]\n",line,this->res,this->Arg1,this->Arg2);
						break;
			case BRACKET_EQ : printf("%3d : %s[%s] = %s\n",line,this->Arg1,this->Arg2,this->res);
						break;
		}
	}
	else//Arg2 not present --unary operators
	{
		switch(this->op){
			case U_PLUS : printf("%3d : %s = %s\n",line,this->res,this->Arg1);
						break;
			case U_MINUS : printf("%3d : %s = - %s\n",line,this->res,this->Arg1);
						break;
			case BW_U_NOT : printf("%3d : %s = ~%s\n",line,this->res,this->Arg1);
						break;
			case U_NEGATION : printf("%3d : %s = !%s\n",line,this->res,this->Arg1);
						break;
			case U_ADDR : printf("%3d : %s = & %s\n",line,this->res,this->Arg1);
						break;
			case U_STAR : printf("%3d : %s = * %s\n",line,this->res,this->Arg1);
						break;
			case ASSIGN : printf("%3d : %s = %s\n",line,this->res,this->Arg1);
						break;
			case GOTO : printf("%3d : goto %s\n",line,this->res);
						break;
			case IF_GOTO : printf("%3d : if %s goto %s\n",line,this->Arg1,this->res);
						break;
			case IF_FALSE_GOTO : printf("%3d : ifFalse %s goto %s\n",line,this->Arg1,this->res);
						break;
			case PARAM : printf("%3d : param %s\n",line,this->Arg1);
						break;
			case RETURN_EXP : printf("%3d : return %s\n",line,this->Arg1);
						break;
			case RETURN : printf("%3d : return\n",line);
						break;
			case Function : printf("%3d : %s : \n",line,Arg1);
						break;
			case LEFT_STAR : printf("%3d : * %s = %s\n",line,this->res,this->Arg1);
						break;
		}
	}
}

//Destructor
quadArrayRow :: ~quadArrayRow() {}
/* ----- end of Implementation of quadArrayRow ----- */

/* ------ Implementation of class quadArray ------- */

quadArray :: quadArray(unsigned int capacity = MAX_SIZE){
	quadArraytop = new quadArrayRow[capacity];
	instCounter = 0;
}
void quadArray :: emit(quadArrayRow &x){
	quadArraytop[instCounter++] = x;
}

void quadArray :: print_quadArray(){
	int i;
	for(i = 0;i < instCounter;i++){
		quadArraytop[i].print_quadArrayRow(i);
	}
}

void quadArray :: fill_dangling_goto(int index, int data){
	char *temp = new char[10];
	sprintf(temp,"%d",data);
	((this->quadArraytop)[index]).res = temp;
}

