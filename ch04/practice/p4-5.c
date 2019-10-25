#include<stdio.h>

int main(void){
	int i,no;

	printf("输入一个整数。\n");
	scanf("%d",&no);

	i=1;
	while (i<=no && no>=0){
		printf("%d ",i++);
		if(i-1==no){
			printf("\n");
		}
	}
}