#include<stdio.h>

int cube(int x){
	return x*x*x;
}

int main(void){
	int a;
	printf("输入一个整数:");
	scanf("%d",&a);
	printf("该数的立方是:%d\n",cube(a));
}