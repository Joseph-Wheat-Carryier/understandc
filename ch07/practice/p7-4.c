#include<stdio.h>
#include<math.h>
unsigned set(unsigned x,int pos){
	unsigned mask;
	mask = (int)pow(2,pos-1);
	return x|mask;
}

unsigned reset(unsigned x,int pos){
	unsigned mask;
	mask = 0xffffffff-(int)pow(2,pos-1);
	return x&mask;
}

unsigned reverse(unsigned x,int pos){
	unsigned mask;
	mask = (int)pow(2,pos-1);
	return (~x|~mask)&(x|mask);
}
int main(void){
	unsigned no;
	int pos=2;
	printf("输入一个数:");
	scanf("%d",&no);
	printf("它的第1位置取反后的值为%d\n",reverse(no,pos));
}