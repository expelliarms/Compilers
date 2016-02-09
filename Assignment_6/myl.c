#include "myl.h"
#define MAX 100

int prints(char *str)
{
    int len = 0;
    while(*(str+len))
    {
        len++;
    }
    __asm__ __volatile__(
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(str),"d"(len));
    return len;
}

int printi(int n)
{
    char str[MAX];
    int i = 0;
    if(n == 0)
    {
        str[i++] = '0';
    }
    else if(n < 0)
    {
        str[i++] = '-';
        n = (-1)*n;
    }
    int left, right, current;
    left = i;
    for (; n > 0; n = n/10, i++)
    {
        current = n%10;
        str[i] = (char)(current + '0');
    }
    right = i - 1;
    while(left <= right)
    {
        int temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++; right--;
    }
    str[i] = '\0';
    __asm__ __volatile__(
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(str),"d"(i));
   return i;
}

int readi(int *eP)
{
    char str[MAX];
    int i = 0;
    do
    {
        __asm__ __volatile__(
        "movl $0, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(str+i), "d"(1)); 
    }while(str[i++] != '\n');
    i--;
    int j = 0;
    if(str[0] == '-')
    {
        j = 1;
    }
    int value = 0;
    for (; j < i; j++)
    {
        if(str[j] >= '0' && str[j] <='9')
        {
            value = value*10 + (int)(str[j] - '0');
        }
        else
        {
            (*eP)=ERR;
        return (*eP);
        }
    }
    if(str[0]=='-')
    {
    value = (-1)*value;
  }
  (*eP)=OK;
  return value;
}

int readf(float *fP)
{
    char str[MAX];
    int i = 0;
    int fact = 1;
  do
  {
    __asm__ __volatile__(
      "movl $0, %%eax \n\t"
      "movq $1, %%rdi \n\t"
      "syscall \n\t"
      :
      : "S"(str+i), "d"(1)
    );
  }while(str[i++]!='\n');
  i--;
  int j = 0;
  if(str[0] == '-')
  {
    j = 1;
  }
    float value = 0;
  for(;j < i && str[j] != '.'; j++)
  {
    if(str[j] >= '0' && str[j] <= '9')
    {   
        value = value*10 + (str[j] - '0');
    }
    else
    {
        (*fP) = ERR;
        return *fP;
    }
  }
  j++;
  for(;j < i; j++, fact = fact*10)
  {
    if(str[j] >= '0' && str[j] <= '9')
    {
        value = value*10 + (str[j]-'0');
    }
    else
    {
        (*fP)=ERR;
        return *fP;
    }
  }
  value = value/fact;
  if(str[0] == '-')
  {
    value = (-1)*value;
  }
  (*fP) = value;
  return OK;
}


int printd(float f)
{
    char str[MAX];
    int i = 0;
    int left = 0;
    if(f == 0.0)
    {
        str[i++] = '0';
    }
    else if( f < 0 )
    {
        str[i++]='-';
        f = (-1)*f;
        left = 1;
    }
    int int_part = (int)f;
    float dec_part = f - int_part;
    for (; int_part > 0; i++, int_part = int_part/10)
    {
        str[i] = int_part%10 + '0';
    }
    int right = i-1;
    while(left < right)
    {
        int temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++; right--;
    }
    str[i++] = '.';
    left = i;
    if(dec_part == 0.0)
    {
        str[i++]='0';
    }
    else
    {
        int number_times=0;
        int rem = 0;
        while(number_times < 25)
        {
            rem = (int)(dec_part*10);
            str[i++] = (char)(rem + '0');
            dec_part = dec_part*10;
            dec_part = dec_part - rem;
            number_times++;
        }
    }

    str[i] = '\0';
    right = i - 1;
    __asm__ __volatile__(
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(str),"d"(i));
  return i;
}
