#include<stdio.h>

int main(void) {
    int n;
    printf("请输入一个整数:");
    scanf("%d", &n);

    for (int i = 0; i <= n; i += 10) {
        for (int j = 0; j < 10 ; j++) {
            if (j + 1 != 10) {
                printf("%d", j + 1);
            } else {
                printf("%d", 0);
            }
        }
    }

    for (int j = 0; j < n % 10; j++) {
        printf("%d", j + 1);

        if (j == n % 10 - 1) {
            printf("\n");
        }
    }

    return 0;

}