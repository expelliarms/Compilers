#include <stdio.h>

typedef union eg_union{		//Union -- also a comment
	int u_int_val;
	float u_float_val;
  double u_sdouble_val;
  long u_long_val;
  short u_short_val;
  char u_char_val;
  char u_car_val;
}EG_UNION;

typedef struct eg_struct{		/* Structure -- also a comment */
	int key;
  struct eg_struct *next;
}EG_STRUCT;

enum{
  X=0,
  Y,
  Z
};

int maximum(int a, int b)
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

extern int func(int,...);

int main(){	
	printf("Program begin!\n");
  register signed int int_data = 10;
  float float_data = 98.23;
  double double_data = 11.1e2;
  unsigned long long_data = int_data + 100;
  printf("int_data = %d, float_data = %f, double_data =  %lf, long_data = %lu\n",int_data,float_data,double_data,long_data );
  int_data++;
  printf("int_data after increment = %d\n", int_data);
  int_data = (5+int_data)*10;

  
  short short_data = int_data - 90;
  char char_data = 'C';
  char str[] = "String";
  printf("%s\n",str );
  int loop_var = 1;
  EG_STRUCT struct1;
  while(int_data >= 0)
  {
    for(;loop_var<int_data;loop_var *= 4)
    {
      int_data /= 4;
      int_data *= -2; 
      if(loop_data > 100)
      {
        int_data = -1;
        break;
      }
      else
      {
        continue;
      }
    }
  }
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
  printf("size = %d\n",size );
  _Bool b_val = int_data>0? true:false;
  switch(b_val) 
  {
    case true: int_data %= 2;
      break;
    case false: int_data *= -1;
      break;
    default: break;
  }
  int max_val = maximum(size, int_data);
  printf("maximum(%d,%d) = %d\n",size,int_data,max_val );
	return 0;
}
