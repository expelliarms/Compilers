/*** Tests arithmetic operations ***/
int readi(int *ep);
int printi(int n);
int prints(char *str);
int n1;
int n2;
int main();

int main(){
	int x;
  int a=9,b=4,c;
  c=a+b;
  x = prints("\na+b=");
  x = printi(c);
  c=a-b;
  x = prints("\na-b=");
  x = printi(c);
  c=a*b;
  x = prints("\na*b=");
  x = printi(c);
  c=a/b;
  x = prints("\na/b=");
  x = printi(c);
  c=a%b;
  x = prints("\na mod b=");
  x = printi(c);
  c=+a;
  x = prints("\n+a=");
  x = printi(c);
  c=-b;
  x = prints("\n-b=");
  x = printi(c);
  return 0;
}
