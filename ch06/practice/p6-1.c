#include<stdio.h>
int min(int a,int b){
	if(a>b){
		return b;
	}else{
		return a;
	}
}

int main(void){
	int a,b;
	printf("输入两个整数:\n整数1:");
	scanf("%d",&a);
	printf("整数2:");
	scanf("%d",&b);
	printf("较小的数是:%d\n",min(a,b));
}