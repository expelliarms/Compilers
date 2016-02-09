/*** C program to find whether a given year is leap year or not ***/
int readi(int *ep);
int printi(int n);
int prints(char *str);

int main();
int u;

int main(){
	u = prints("Enter a year \n");
	int year,rem400,rem100,rem4;
	year = readi(&u);
	rem400 = year%400;
	rem100 = year%100;
	rem4 = year%4;
	if(rem400 == 0)
		u = prints("Given year is a leap year \n");
	else if(rem100 == 0)
		u = prints("Given year is a leap year \n");
	else if(rem4 == 0)
		u = prints("Given year is a leap year \n");
	else
		u = prints("Given year is not a leap year \n");
	return 0;
}
