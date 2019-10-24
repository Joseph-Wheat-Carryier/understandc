#include<stdio.h>
int main(void){
	int month;
	printf("输入月份:");
	scanf("%d",&month);
	if(month==12||month==1||month==2){
		printf("冬\n");
	}else if(month>=3&&month<=5){
		printf("春\n");
	}else if(month>=6&&month<=8){
		printf("夏\n");
	}else if(month>=9&&month<=11){
		printf("冬\n");
	}else{
		printf("请输入1-12的数!\n");
	}
}