#include<stdio.h>
int main(void){
    int a;
    int b;
    int c;
	puts("请输入两个整数。");
	printf("整数1:");
	scanf("%d",&a);
	printf("整数2:");
	scanf("%d",&b);
	c=a*b;
	printf("%s%d。\n","它们的乘积是",c);
	return 0;
}