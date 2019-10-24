# include<stdio.h>
int main(void){
	int a,b;
	double c;
	puts("请输入两个整数");
	printf("%s","输入a:");
	scanf("%d",&a);
	printf("%s","输入b:" );
	scanf("%d",&b);
	c=(double)a/(double)b*100;
	printf("%s%.6f%%。\n","a是b的",c);
}