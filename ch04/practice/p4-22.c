#include<stdio.h>
int main(void){
	int l,w,temp;
	puts("让我们来画个长方形。");
	printf("一边:");
	scanf("%d",&l);
	printf("另一边");
	scanf("%d",&w);
	if(w>l){
		temp = l;
		l = w;
		w = temp ;
	}
	for(int i=1;i<=w;i++){
		for(int j=1;j<=l;j++){
			if(j%l==0){
				printf("*\n");
			}else{
				printf("*");
			}
		}
	}
	return 0;
}