#include<stdio.h>
}
}int main(void){
	int arr[5]={1,2,3,4,5};
	int temp[5];
	for(int i=0;i<5;i++){
		for(int j=4;j>=0;j--){
			temp=arr[j];
		}
		arr[i]=temp[i];
	