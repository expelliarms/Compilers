#ifndef ASS5_13CS10055_TRANSLATOR_INCLUDED
#define ASS5_13CS10055_TRANSLATOR_INCLUDED

# define SIZE_OF_INT 4
# define SIZE_OF_DOUBLE 8
# define SIZE_OF_CHAR 1
# define SIZE_OF_PTR 4
# define MAX_SIZE 10000

typedef enum {INT, CHAR, DOUBLE, VOID, BOOL, ARRAY, POINTER} typeSpecifier;//Type specifiers 

typedef enum { DEFAULT, PLUS, MINUS, INTO, DIV, PERCENT,LOGIC_AND, LOGIC_OR, BW_AND, BW_OR, BW_XOR, SHIFTLEFT, SHIFTRIGHT, LESSTHAN, LESSTHANEQ, GREATERTHAN, GREATERTHANEQ, EQUALTO, NOTEQUALTO, goto_LESSTHAN, goto_LESSTHANEQ, goto_GREATERTHAN, goto_GREATERTHANEQ, goto_EQUALTO, goto_NOTEQUALTO, call,EQ_BRACKET, BRACKET_EQ, U_PLUS, U_MINUS, BW_U_NOT, U_NEGATION, U_ADDR, U_STAR, ASSIGN, GOTO, IF_GOTO, IF_FALSE_GOTO, PARAM, RETURN_EXP, RETURN, Function } opSpecifier;

class symbolTable;
class symbolTableRow;

/* Structure of node of expression tree */
typedef struct tNode
{
	/* data */
	typeSpecifier tNodeType;
	int *left;
	struct tNode *right;
}tNode;

/* Structure of a node in the list */
typedef struct lNode
{
	/* data */
	int danglingIndex;
	struct lNode *next;
}lNode;

/* Structure for parameter list */
typedef struct pNode
{
	/* data */
	symbolTableRow *parameter;
	struct pNode *next;
}pNode;

/* Symbol table row class */
class symbolTableRow
{
public:
	/* Constructor and Destructor */
	symbolTableRow(char* = 0, tNode* = 0, void* = 0, int = -1, int = -1, symbolTable* = 0);//Default constructor 
	~symbolTableRow();//Destructor

	/* data */
	char *srName;//Name of the variable
	tNode *srType;
	void *srInitialValue;
	int srSize;
	int srOffset;
	symbolTable *srNestedTable;

	/* Other methods */
	void operator=(symbolTableRow &);//method to override assignment operator
	void print_sRow();//Method to print a row
};

/* Structure to define attributes to identifier */
typedef struct idAttributes
{
	/* data */
	symbolTableRow *loc;
	char *varName;
}idAttributes;

// Union for initial value constants
typedef union initAttributes
{
	int InitIntVal;
	double InitDoubleVal;
	char InitCharVal;
}initAttributes;

/* Structure to define attributes of expression */
typedef struct expAttributes
{
	/* data */
	symbolTableRow *loc;//E.loc
	lNode *TrueList;
	lNode *FalseList;
	lNode *NextList;
	tNode *Etype; 
	symbolTableRow *Earray;
	symbolTableRow *Eloc1;	
	initAttributes val;//Initializing variables	
}expAttributes;


/* Symbol Table Class */
class symbolTable
{
public:
	/* Constructor and Destructor */
	symbolTable(unsigned int);//Constructor with unsigned int parameter(numRows)
	~symbolTable();//Destructor

	/* data */
	symbolTableRow *stTabletop;//Pointer to the top row of the table
	int stNumRows;// number of rows in the table

	/* Methods */
	symbolTableRow *lookup(char *);//Takes the name of the symbol and looks up in the table and returns the entry(if any).
	void insert(symbolTableRow &);// Inserts a row into the symbol table
	symbolTableRow *gentemp(typeSpecifier);//generates new temporary
	void print_stTable();//Prints table
};

/* QuadArrayRow Class */
class quadArrayRow
{
public:
	/* Constructor and Destructor */
	quadArrayRow(char * = 0, char * = 0, char * = 0, opSpecifier = DEFAULT, symbolTableRow * = 0, symbolTableRow * = 0, symbolTableRow * = 0);
	~quadArrayRow();

	/* data */
	char *qrArg1;
	char *qrArg2;
	char *qrRes;
	opSpecifier qrOp;
	symbolTableRow *qrArg1_Loc;
	symbolTableRow *qrArg2_Loc;
	symbolTableRow *qrRes_Loc;

	/* Methods */
	void operator=(struct quadArrayRow &);
	void print_quadArrayRow(int);
};

/* QuadArray Class */
class quadArray
{
public:
	/* Constructor and Destructor */
	quadArray(unsigned int);
	~quadArray();

	/* data */
	quadArrayRow *quadArraytop;
	
	/* Methods */
	void emit(quadArrayRow &);
	void print_quadArray();
	void fill_dangling_goto(int,int);
};

/* Global Variables */
extern int totalTemps;
extern symbolTable *globalST;
extern symbolTable *localST;
extern int instCounter;
extern quadArray *globalQArray;

/* Global Functions */
lNode *makelist(int);
lNode *merge(lNode*, lNode*);
void backpatch(lNode*, int);
tNode *create_tNode(typeSpecifier);
int calculateWidth(tNode*);
int typecheck(tNode*, tNode*);
tNode *new_node(typeSpecifier ,int);

#endif 