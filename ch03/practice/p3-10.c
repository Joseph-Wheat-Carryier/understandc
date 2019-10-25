#include<stdio.h>
int main(void) {
    int a, b, c;
    puts("输入三个数。");
    printf("整数A:");
    scanf("%d", &a);

    printf("整数B:");
    scanf("%d", &b);

    printf("整数C:");
    scanf("%d", &c);

    if(a==b){
    	if(a==c){
    		printf("有三个值相等\n");
    	}else{
    		printf("有两个值相等\n");
    	}
    }else{
    	if(a==c){
    		printf("有两个值相等\n");
    	}else if(b==c){
    		printf("有两个值相等\n");
    	}else{
    		printf("三个值各不同\n");
    	}
    }
}