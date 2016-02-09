#include <stdio.h>

typedef union eg_union{		//Union -- also a comment
	int u_int_val;
	float u_float_val;
}EG_UNION;

typedef struct eg_struct{		/* Structure -- also a comment */
	auto EG_UNION data;
	static unsigned int i = 0;
}EG_STRUCT;

enum{
  X=0,
  Y,
  Z
};

int max(int a, int b)
{
	int c;
  if(a > b)
  {
  	c = a;
  }
  else
  {
  	c = b;
  }             
  return c;
}

int main(){	
	printf("Program begin!\n");
  register signed int int_data = 10;
  float float_data = 98.23;
  double double_data = 11.1e2;
  long long_data = int_data + 100;
  printf("summation: %d + 100 = %ld\n",int_data, long_data );
  short short_data = int_data - 90;
  printf("Subtraction: %d - 90 = %d\n",int_data, short_data);
  char char_data = 'C';
  restrict char str = "String";

  EG_STRUCT struct1;

  int size = sizeof(struct1);
  if(size&1){
    size^=1;
    size&=1;
    size|=1;
  }
  else{
    ~size;
    size = size ^ 1;
    size = size | 1;
  }
  printf("%d\n",size );
  int max = max(size, int_data);
  printf("%d\n",max );
	return 0;
}
