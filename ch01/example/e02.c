#include<stdio.h>
int main(void){
	int length;
	int width;
	scanf("%d,%d",&length,&width);
	int area = length*width;
	printf("%s%d\n","长方形的面积是",area);
	return 0;
}