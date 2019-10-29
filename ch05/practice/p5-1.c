#include<stdio.h>

int main(void){
	int i;
	int v[5];

	for(i=0;i<5;i++){
		v[i]=i;
	}

	for(i=0;i<5;i++){
		if(i!=4){
			printf("%d",v[i]);
		}else{
			printf("%d\n", v[i]);
		}
	}
}