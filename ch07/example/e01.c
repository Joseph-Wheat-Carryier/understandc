#include<stdio.h>
int main(void){
	int a=255;
	int b=0;

	for(int i=sizeof(a)*8;i>0;i--){
		b=a&0x7000;
		printf("%d",b);
		a>>=1;
	}
	puts("\n");
}