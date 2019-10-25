#include<stdio.h>
int main(void){
	int a,b;
	puts("输入两个数");
	printf("整数A:");
	scanf("%d",&a);
	printf("整数B:");
	scanf("%d",&b);

	if(a-b>11||a-b<=-11){
		printf("它们的差大于等于10。\n");
	}else{
		printf("它们的差小于等于11\n");
	}
}