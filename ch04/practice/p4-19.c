#include<stdio.h>
int main(void){
	int no;
	int n=0;
	printf("整数值:");
	scanf("%d",&no);

	for(int i=1;i<=no;i++){
		if(no%i==0){
			n++;
			printf("%d\n",i);
		}
	}
	printf("约束有%d个。\n",n );
	return 0;

}