#include<stdio.h>
int min(int a,int b,int c){
	int d;
	if(a>b){
		d = b;
	}else{
		d = a;
	}

	if(d>c){
		return c;
	}else{
		return d;
	}
}

int main(void){
	int a,b,c;
	printf("输入三个整数:\n整数1:");
	scanf("%d",&a);
	printf("整数2:");
	scanf("%d",&b);
	printf("整数3:");
	scanf("%d",&c);
	printf("较小的数是:%d\n",min(a,b,c));
}