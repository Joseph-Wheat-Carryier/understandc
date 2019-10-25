#include<stdio.h>
int main(void) {
    int len;
    printf("菱形的边长:");
    scanf("%d", &len);

    for (int i = 1; i <= len; i++) {
        for (int j = 1; j <= len+i-1 ; j++) {
            if (j <= i - 1) {
                printf(" ");
            } else {
                if (j == len+i-1) {
                    printf("*\n");
                } else {
                    printf("*");
                }
            }
        }
    }
}
