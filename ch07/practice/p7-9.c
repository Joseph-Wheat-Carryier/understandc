#include<stdio.h>
#include<math.h>

int main(void){
	int area;
	printf("输入一个实数:");
	scanf("%d",&area);
	printf("面积为该实数正方形的边长为%lf\n",sqrt(area));
}