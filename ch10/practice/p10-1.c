#include<stdio.h>

void adjust_point(int *n){
	if(*n<0){
		*n=0;
	}else if(*n>100){
		*n=100;
	}else{
		return;
	}
}

int main(void){
	int a=101;
	adjust_point(&a);
	printf("%d\n", a);
}