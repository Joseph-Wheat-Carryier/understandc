#include<stdio.h>

int main(void){
	int i;
	int v[5];

	for(i=5;i>=1;i--){
		v[5-i]=i;
	}

	for(i=0;i<5;i++){
		if(i!=4){
			printf("%d",v[i]);
		}else{
			printf("%d\n", v[i]);
		}
	}
}