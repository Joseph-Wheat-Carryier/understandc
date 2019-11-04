#include<stdio.h>
#include<stdlb.h>
int main(void){
	float a;
	double b;
	long double c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	printf("float:%d\n",sizeof(a));
	printf("double:%d\n",sizeof(b));
	printf("long double:%d\n",sizeof(c));
}