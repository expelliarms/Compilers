/*** Test pointers ***/
/* This program takes three enters from user which is stored in variable a, b and c respectively. Then, these variables are passed to function using call by reference. This function swaps the value of these elements in cyclic order.*/

void Cycle(int *a, int *b,int *c);
int main();
int readi(int *ep);
int printi(int n);
int prints(char *str);
int error;
void Cycle(int *a, int *b,int *c){
	int temp;
	temp=*b;
  *b=*a;
  *a=*c;
  *c=temp;
	return;
}
int main()
{
	int x;
	x = prints("\nEnter a: ");
	int a,b,c,temp;
	a = readi(&error);
	if(error == 0){
		x = prints("\nEnter b: ");
		b = readi(&error);
		if(error == 0){
			x = prints("\nEnter c : ");
			c = readi(&error);
			if(error == 0){
				x = prints("\na = ");
				x = printi(a);
				x = prints("\nb = ");
				x = printi(b);
				x = prints("\nc = ");
				x = printi(c);
				x = prints("\nCycle function called");
				Cycle(&a,&b,&c);
				x = prints("\na = ");
				x = printi(a);
				x = prints("\nb = ");
				x = printi(b);
				x = prints("\nc = ");
				x = printi(c);
			}
			else{
				x = prints("\nYou entered non numeral characters");
				x = prints("\nThe program is exiting");
			}
		}
		else{
			x = prints("\nYou entered non numeral characters");
			x = prints("\nThe program is exiting");
		}
	}
	else{
		x = prints("\nYou entered non numeral characters");
		x = prints("\nThe program is exiting");
	}
	return 0;
}