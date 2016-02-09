#include "myl.h"
#define MAX_LENGTH 100

int prints(char *s){
	int no_char=0;
	while(*(s+no_char)){
		no_char++;
	}

	/*__asm__ __volatile__(
		"movl $4, %%eax \n\t"
		"movl $1, %%ebx \n\t"
		"syscall \n\t"
		:
		: "c"(s),"d"(no_char));*/ 
	__asm__ __volatile__(
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(s),"d"(no_char));
	return no_char;
}

int printi(int n){
	int digit,start1,end1;
	int i=0;
	char buffer[MAX_LENGTH];
	if(!n){
		buffer[i++]='0';
	}
	else if(n<0){
		buffer[i++]='-';
		n=(-1)*n;
	}
	start1=i;
	while(n>0){
		digit=n%10;
		buffer[i++]=(char)(digit+'0');
		n=n/10;
	}
	end1=i-1;
	while(start1<=end1){
		int temp=buffer[start1];
		buffer[start1++]=buffer[end1];
		buffer[end1--]=temp;
	}
	buffer[i]='\0';
    /*__asm__ __volatile__(
          "movl $4, %%eax \n\t"
          "movl $1, %%ebx \n\t"
          "int $128 \n\t"
          :
          : "c"(buffer), "d"(i));*/
    	__asm__ __volatile__(
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(buffer),"d"(i));
    return i;
}

int readi(int *eP){
	char s[MAX_LENGTH];
	int start1=0;
	int end1;
	int answer1=0;
	int size1=0;
	int i=0;
    do{
        /*__asm__ __volatile__(
            "movl $3, %%eax \n\t"
            "movl $0, %%ebx \n\t"
            "syscall \n\t"
            :
            :"c"(s+i), "d"(1)
        );*/
        __asm__ __volatile__(
        	"movl $0, %%eax \n\t"
        	"movq $1, %%rdi \n\t"
        	"syscall \n\t"
        	:
        	:"S"(s+i), "d"(1)); 
    }while(s[i++]!='\n');
    i--;
    end1=i-1;
    if(s[0]=='-'){
    	start1=1;
    }
    while(start1<=end1){
    	if(!(s[start1]>='0' && s[start1]<='9')){
    		(*eP)=ERR;
    		return (*eP);
    	}
    	answer1=answer1*10+(int)(s[start1++]-'0');
    }

    if(s[0]=='-'){
    	answer1=-1*answer1;
    }
    (*eP)=OK;
    return answer1;
}

int readf(float *fP){
	char s[MAX_LENGTH];
	int i=0;
	int start1=0;
	int fact=1;
	float answer1=0;
    do{
        __asm__ __volatile__(
            "movl $0, %%eax \n\t"
            "movq $1, %%rdi \n\t"
            "syscall \n\t"
            :
            : "S"(s+i), "d"(1)
        );
    }while(s[i++]!='\n');
    i--;
    int end1=i-1;
    //printf("%d--%d\n",start1,end1);
    if(s[0]=='-'){
    	start1=1;
    }

    while(start1<=end1 && s[start1]!='.'){
    	if(!(s[start1]>='0' && s[start1]<='9')){
    		(*fP)=ERR;
    		return *fP;
    	}
    	answer1=answer1*10+(s[start1++]-'0');
    }

    start1++;

    while(start1<=end1){
    	if(!(s[start1]>='0' && s[start1]<='9')){
    		(*fP)=ERR;
    		return *fP;
    	}
    	answer1=answer1*10+(s[start1++]-'0');
    	fact=fact*10;
    }

    answer1=answer1/fact;
    if(s[0]=='-'){
    	answer1=-1*answer1;
    }
    (*fP)=answer1;
    //printf("%.6f\n",(*fP));
    return OK;
}

int printd(float f){
	char s[MAX_LENGTH];
	int i=0;
	int start1=0;
	if(f==0.0){
		s[i++]='0';
	}
	else if(f<0){
		s[i++]='-';
		f=-1*(f);
		start1=1;
	}

	int integer_part=(int)f;
	float float_part=f-integer_part;
	while(integer_part>0){
		s[i++]=integer_part%10+'0';
		integer_part=integer_part/10;
	}

	int end1=i-1;
	while(start1<=end1){
		int temp=s[start1];
		s[start1++]=s[end1];
		s[end1--]=temp;
	}

	s[i++]='.';
	start1=i;
	if(float_part==0.0){
		s[i++]='0';
	}
	else{
		int number_times=0;
		int rem=0;

		while(number_times<25){
			rem=(int)(float_part*10);
			s[i++]=(char)(rem+'0');
			float_part=float_part*10;
			float_part=float_part-rem;
			number_times++;
		}
	}

	s[i]='\0';
	end1=i-1;
    /*__asm__ __volatile__(
		"movl $4, %%eax \n\t"
		"movl $1, %%ebx \n\t"
		"int $128 \n\t"
		:
		:"c"(s), "d"(i)
	);*/
		__asm__ __volatile__(
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(s),"d"(i));
    return i;
}