/* Test loops */

int main();
int main()
{
	int ARR[10];

	int x,y = 10;
	//for loop
	for ( x = 0; x < 10; x++ ) 
	{
   	ARR[x] = x;
  }
  for ( x = 0; x < 10; x++ ) 
  {
  	//do while
   	do
   	{
   		ARR[x] = ARR[x] + y;
   		y = y - x;
   	}while(y>0);
   	y = 10;
  }
  //while loop
  while(x%2 == 0)
  {
  	x = x / 3;
  }
}