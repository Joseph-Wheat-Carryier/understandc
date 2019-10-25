#include<stdio.h>
int main(void) {
    int len;
    printf("菱形的边长:");
    scanf("%d", &len);

    for(int i=1; i<=len;i++){
    	for(int j=1;j<=len;j++){
    		if(j<=len-i){
    			printf(" ");
    		}else{
    			if(j==len){
    				printf("*\n");
    			}else{
    				printf("*");
    			}
    		}
    	}
    }

    for(int i=len-1;i>=1;i--){
    	for(int j=1;j<=i;j++){
    		if(j%i==0){
    			printf("*\n");
    		}else{
    			printf("*");
    		}
    	}
    }
}