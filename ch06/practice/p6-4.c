#include<stdio.h>
int sqr(int x){
	return x*x;
}

int pow4 (int x){
	return sqr(x)*sqr(x);
}

int main(void){
	int a;
	printf("输入一个整数:");
	scanf("%d",&a);
	printf("该数的四次方数:%d\n",pow4(a));
}