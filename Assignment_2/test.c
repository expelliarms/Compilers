# include <stdio.h>
# include "myl.h"
int main(){
  printf("Enter a stream of characters\n");
  char str[100];
  char ch;
  int i = 0;
  while((ch=getchar())!='\n'){
    str[i++] = ch;
  }
  str[i] = '\0';
  printf("The stream you entered is : \n");
  int no_of_chars = prints(str);
  printf("\nThe no of characters is : %d\n",no_of_chars);
  printf("\nEnter the number \n");
  int n;
  int t;
  n = readi(&t);
  if(t)
     printf("Invalid Input\n");
  else{
      printf("The number you entered : \n");
      no_of_chars = printi(n);
      printf("\nThe number of characters : %d\n",no_of_chars);
      //printf("%d\n",no_of_chars);
  }
  printf("\nEnter a floating point number\n");
  float num;
  /*scanf("%f",&num);
  printf("The number you entered : \n");
  no_of_chars = printd(num);
  printf("\nNo of chars : %d\n",no_of_chars);*/
  t = readf(&num);
  if(t)
     printf("Invalid Input\n");
  else{
      printf("The number you entered : \n");
      //printf("%f\n",num);
      no_of_chars = printd(num);
      printf("\nThe number of characters : \n");
      printf("%d\n",no_of_chars);	
  }
  //no_of_chars = printi(n);
  //printf("%d\n",no_of_chars);
  return 0;
}
