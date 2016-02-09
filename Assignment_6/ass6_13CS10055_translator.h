#ifndef ASS5_13CS10055_TRANSLATOR_INCLUDED
#define ASS5_13CS10055_TRANSLATOR_INCLUDED



# define SIZE_OF_INT 4
# define SIZE_OF_DOUBLE 8
# define SIZE_OF_CHAR 1
# define SIZE_OF_PTR 4
# define MAX_SIZE 10000


/* Various structures */
typedef enum { VOID, INT, CHAR, DOUBLE, BOOL, ARRAY, POINTER, FUNCTION }typeSpecifier;//Type specifiers 

typedef enum {DEFAULT, PLUS, MINUS, INTO, DIV, PERCENT,LOGIC_AND, LOGIC_OR, BW_AND, BW_INOR, BW_XOR, SHIFTLEFT, SHIFTRIGHT, LESSTHAN, LESSTHANEQ, GREATERTHAN, GREATERTHANEQ, EQUALTO, NOTEQUALTO, goto_LESSTHAN, goto_LESSTHANEQ, goto_GREATERTHAN, goto_GREATERTHANEQ, goto_EQUALTO, goto_NOTEQUALTO, call,call_void,EQ_BRACKET, BRACKET_EQ, U_PLUS, U_MINUS, BW_U_NOT, U_NEGATION, U_ADDR, U_STAR, LEFT_STAR, ASSIGN, GOTO, IF_GOTO, IF_FALSE_GOTO, PARAM, RETURN_EXP, RETURN, Function}opSpecifier;				

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
	tNode *Type;
	void *srInitialValue;
	int size;
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
	char *var;
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
	symbolTableRow *loc;	// E.loc
	lNode *TrueList;			//B.TrueList
	lNode *FalseList;			//B.FalseList
	lNode *NextList;			//B.NextList	
	tNode *type;					//A.type
	symbolTableRow *array;//A.array
	symbolTableRow *Eloc1;
	initAttributes val;		//Initializing variables	
}expAttributes;

/* Symbol Table Class */
class symbolTable
{
public:
	/* Constructor and Destructor */
	symbolTable(unsigned int);//Constructor with unsigned int parameter(numRows)
	~symbolTable();//Destructor

	/* data */
	symbolTableRow *table;//Pointer to the top row of the table
	int stNumRows;

	/* Methods */
	symbolTableRow *lookup(char *);//Takes the name of the symbol and looks up in the table and returns the entry(if any).
	void insert(symbolTableRow &);// Inserts a row into the symbol table
	symbolTableRow *gentemp(typeSpecifier);//generates new temporary
	symbolTableRow *gentemp_cmplx(tNode *);
	void print_stTable();
};

/* QuadArrayRow Class */
typedef struct quadArrayRow
{
	/* Constructor and Destructor */
	quadArrayRow(char * = 0, char * = 0, char * = 0, opSpecifier = DEFAULT, symbolTableRow * = 0, symbolTableRow * = 0, symbolTableRow * = 0);
	~quadArrayRow();

	/* data */
	char *Arg1;
	char *Arg2;
	char *res;
	opSpecifier op;
	symbolTableRow *arg1_loc;
	symbolTableRow *arg2_loc;
	symbolTableRow *res_loc;
	
	/* Methods */
	void operator=(struct quadArrayRow &);
	void print_quadArrayRow(int);
}quadArrayRow;

/* Quad array class */
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

/* variable declaration grammar attributes */
typedef struct var_decl_attr_struct
{
	tNode *type;
	int width;
	char *var;
}var_decl_attr_struct;

/* Global Variables */
extern int totalTemps;// Total number of temporaries
extern symbolTable *globalST;//Global symboltable
extern symbolTable *localST;//Local symboltable local to the current function
extern int instCounter;//To keep the count of the instruction so that next instruction can be fetched
extern quadArray *globalQArray;// Stores the count of quad array so that next index can be found
extern tNode *t;
extern int w;
extern symbolTable *temp_use;
extern int flag1;
extern int flag2;
extern int c;							
extern int line_count;
extern int flag_array;
/* Global variables for handling pointers */
extern int star_count;
extern int left_or_right;
extern int is_left;
extern char **s;
extern char **constsTable;
extern int count_toc;

/* Global Functions */
symbolTable *createSymbolTable();
lNode *makelist(int);
lNode *merge(lNode *, lNode *);
void print_expTree(tNode *);
void print_Initial_Value(void *,tNode *);
tNode *create_tNode(typeSpecifier ,int);
tNode *create_tNode(typeSpecifier);
tNode *merge_node(tNode *, tNode *);
void backpatch(lNode *, int);
int typecheck(tNode *,tNode *);
void conv2Bool(expAttributes *);
int calculateWidth(tNode *);
pNode *make_param_list(symbolTableRow *);
tNode *duplicate_tree(tNode *);
pNode *merge_param_list(pNode *, pNode *);
void updateSToffsets();


#endif