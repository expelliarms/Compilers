/*** This C program, using recursion, finds the GCD of the two numbers entered by the user***/
int readi(int *ep);
int printi(int n);
int prints(char *str);
int calculateGCD(int a,int b);
int main();
int calculateGCD(int a, int b){
	int t;
	while (a != b)
  {
    if (a > b)
    {
    	t = a - b;
      return calculateGCD(t, b);
    }
    else
    {
    	t = b - a;
      return calculateGCD(a, t);
    }
  }
  return a;
}
int main(){
	int u,a,b,gcd;
	u = prints("GCD of two numbers using Recursion\n");
	u = prints("Enter the number a\n");
	a = readi(&u);
	u = prints("Enter the number b\n");
	b = readi(&u);
	gcd = calculateGCD(a,b);
	u = prints("GCD of a and b : ");
	u = printi(gcd);
	u = prints("\n");
	return 0;
}