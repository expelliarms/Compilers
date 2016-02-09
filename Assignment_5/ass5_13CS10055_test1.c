/* Tests expression grammar */
int main();
int main()
{
	int N = 10;
	int a = 5, b = 3, c = -12;
	int acc = 0;
	acc = a + b; //binary addition
	acc = acc - c;//subtraction
	acc = acc % N;//modulous 
	acc = acc * a;//Multiplication
	acc++;//postfix op
	++acc;//prefix op
	acc = -N;//unary minus
	double d = 3.14;
	double area = 0;
	area = d*a*a;//type conversion
	a = ~c;//Negation
	acc = a ^ 2;
	a = a<<2;
	b = b>>2;
	acc = N | 2;
	return 0;
}