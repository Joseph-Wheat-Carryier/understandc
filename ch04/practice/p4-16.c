#include<stdio.h>
int main(void) {
    int no;
    printf("输入一个整数：");
    scanf("%d", &no);

    for (int i = 0; i <= no && no > 0; i++) {
        if (i % 2 == 1) {
            printf("%d ", i);
        }

        if (i == no) {
            printf("\n");
        }
    }

    return 0;
}