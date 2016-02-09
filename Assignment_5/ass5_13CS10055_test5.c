/* Test case to test recursive function calls */
int main();
int sum(int n);
int sum(int n)
{
  if(n==0)
    return n;
  else
    return n+sum(n-1);  
}
int main()
{
  int num = 4,add;
  add = sum(num);
  return 0;
}
