#include<stdio.h>
int main(void){
	float height;
	float stdWeight;
	printf("请输入您的身高:");
	scanf("%f",&height);
	stdWeight = (height-100)*0.9;
	printf("%s%.1f公斤。\n","您的标准体重是",stdWeight );
}