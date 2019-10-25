#include<stdio.h>
int main(void) {
    int no;
    printf("正整数:");
    scanf("%d", &no);

    while (no-- > 0) {
        if (no % 2 == 1) {
            putchar('+');
        }else{
        	putchar('-');
        }
        if(no == 0){
        	putchar('\n');
        }
    }

    return 0;
}