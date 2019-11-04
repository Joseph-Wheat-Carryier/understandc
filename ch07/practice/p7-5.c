#include<stdio.h>
#include<math.h>
unsigned set_n(unsigned x,int pos,int n){
	unsigned mask;
	mask = (int)(pow(2,pos+nk)-pow(2,pos-1));
	return x|mask;
}

unsigned reset_n(unsigned x,int pos,int n){
	unsigned mask;
	mask = 0xffffffff-(int)pow(2,pos+n)+(int)pow(2,pos);
	return x&mask;
}

unsigned reverse_n(unsigned x,int pos,int n){
	unsigned mask;
	mask = (int)(pow(2,pos+n+1)-pow(2,pos-1));
	return (~x|~mask)&(x|mask);
}
int main(void){
	unsigned no;
	printf("输入一个数:");
	scanf("%d",&no);
	printf("它的第1位置取反后的值为%d\n",reverse_n(no,1,2));
}