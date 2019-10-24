# include<stdio.h>
int main(void){
	int x,y;
	double z;
	puts("请输入两个整数");
	printf("%s","输入x:");
	scanf("%d",&x);
	printf("%s","输入y:" );
	scanf("%d",&y);
	z=(double)x/(double)y*100;
	printf("%s%.2f%%。\n","x的值是y的",z);
}