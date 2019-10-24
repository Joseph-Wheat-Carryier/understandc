#include<stdio.h>
int main(void){
	double r;
	double area;
	puts("输入半径:");
	scanf("%lf",&r);
	area = r*r*3.14;
	printf("%s[%.2f]。\n","该圆的面积是:",area);
	return 0;
}