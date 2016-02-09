/** Simple C program that checks if a number is odd or even using three different methods **/
void oddoreven1(int a);
void oddoreven2(int a);
void oddoreven3(int a);
int main();
int readi(int *ep);
int printi(int n);
int prints(char *str);
int x;

void oddoreven1(int a)
{
	int x;
	x = prints("Check Odd or even using modulous operator\n");
	int b;
	b = a%2;
	if (b == 0)
	{
		x = printi(a);
  	x = prints("is Even\n");
	}
  else
  {
		x = printi(a);
  	x = prints("is Odd\n");
  } 
 	return;
}

void oddoreven2(int a){
	int x;
	x = prints("Check Odd or even using bitwise operator\n");
	int b;
	b = a&1;
	if (b == 1)
	{
		x = printi(a);
  	x = prints("is Even\n");
	}
  else
  {
		x = printi(a);
  	x = prints("is Odd\n");
  } 
 	return;
}

void oddoreven3(int a){
	int x;
	x = prints("Check Odd or even without using bitwise or modulus operator\n");
	int b;
	b = a/2;
	b = b*2;
	if (b == a)
	{
		x = printi(a);
  	x = prints("is Even\n");
	}
  else
  {
		x = printi(a);
  	x = prints("is Odd\n");
  } 
 	return;
}

int main(){
	int x;
	int a;
	x = prints("Enter an integer\n");
  a = readi(&x);
 	oddoreven1(a);
 	oddoreven2(a);
 	oddoreven3(a); 
  return 0;
}