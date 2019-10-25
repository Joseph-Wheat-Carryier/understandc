#include<stdio.h>
int main(void){
	int no;
	printf("请输入一个整数:");
	scanf("%d",&no);

	if(no==0)
		puts("该整数位0");
	else if(no>0)
		puts("该整数位正数");
	else if(no<0)
		puts("该整数为负数");
	return 0;
}//结果没影响