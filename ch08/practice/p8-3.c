#include<stdio.h>

#define swap(type,a,b)   {type temp;temp=a;a=b;b=temp;}



int main(void){
	float a=11.0;
	float b=22.0;
	swap(float,a,b);
	printf("a%f b%f\n",a,b );
}