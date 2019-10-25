#include<stdio.h>
int main(void){
	int a=1;

	int z,n;

	n=0;

	for(int i=a;i<=4;i++){
		for(int j=a;j<=4;j++){
			z=10*i + j;
			if(i!=j){
				n++;
				printf("数:%d\n",z);
			}
		}
	}
	printf("共:%d\n",n);


}