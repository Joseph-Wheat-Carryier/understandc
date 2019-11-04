#include<stdio.h>

int factorial(int n){
	int result=1;
	for(int i=0;i<n;i++){
		result*=n-i;
	}
	return result;
}

int main(void){
	int a=3;
	a=factorial(a);
	printf("%d\n",a );
}