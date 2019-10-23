#include<stdio.h>
int main(void){
    int a;
    int b;
    int c;
    int d;
	puts("请输入两个整数。");
	printf("整数1:");
	scanf("%d",&a);
	printf("整数2:");
	scanf("%d",&b);
	printf("整数3:" );
	scanf("%d",&c);
	d=a+b+c;
	printf("%s%d。\n","它们的和是",d);
	return 0;
}