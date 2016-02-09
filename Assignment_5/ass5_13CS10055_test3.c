//test declarations and global variables
double ans = 2.3;
int i, w[10];
int a = 4, *p, b;
void func(int i, double d);
int main();
char c;
//Test function defenition with parameters list
void func(int i, double d)
{
	//Test if else condition statements
	if(i>0)
	{
		//Test while loops
		while(i)
		{
			//Arithmetic operations
			ans = d * ans;//global variable used in func
			i = i /10;
		}
	}
	else
	{
		return -1;
	}
	return ans;
}
int main()
{
	//Test function calls
	func(1,3.5);
	func(-1,2.3);
	return 0;
}