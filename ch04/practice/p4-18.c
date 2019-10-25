#include<stdio.h>

int main(void) {
    int no;
    printf("显示多少个*:");
    scanf("%d", &no);

    for (int i = 1; i <= no; i++) {
        if (i % 5 != 0) {
            putchar('*');
        } else {
            printf("*\n");
        }

        if (no % 5 != 0 && i==no ){
        	printf("\n");
        }
    }

    return 0;
}