#include<stdio.h>
int main(void){
	double a,b,c;
	printf("输入一个实数:\n");
	scanf("%lf",&a);
	printf("输入一个实数:\n");
	scanf("%lf",&b);
	c=(a+b)/2;
	printf("%s%lf。\n","平均数为",c);
}