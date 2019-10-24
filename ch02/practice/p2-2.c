#include<stdio.h>
int main(void)
{
	int a,b;
	puts("请输入两个整数。");
	printf("整数a:" );
	scanf("%d",&a);
	printf("整数b:" );
	scanf("%d",&b);
	printf("%s%d，%s%d。\n","它们的和是",a+b,"它们的积是",a*b );
	return 0;
}