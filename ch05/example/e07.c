#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rdm(int min,int max){
	int no;
	srand((unsigned)time(NULL));
	no=(rand()%(max-min+1)+min);
	return no;
}

int main(void){
	int a = rdm(5,8);
	printf("%d\n", a);
}