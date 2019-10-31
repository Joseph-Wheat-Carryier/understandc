#include<stdio.h>

void findMax (int *a,int *b){
	if(*a<*b){
		*a=*b;
	}
}

int main(void){
	int a=1;
	int b=2;

	findMax(&a,&b);
	printf("%d\n",a );
}