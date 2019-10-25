#include<stdio.h>
int main(void) {
    int no;
    printf("金字塔有几层:");
    scanf("%d", &no);

    for (int i = 1; i <= no; i++) {
        for (int j = 1; j <= no + i - 1 ; j++) {
            if (j == no + i - 1) {
                printf("*\n");
            } else if (j != no + i - 1 && j <= no - i) {
                printf(" ");
            } else {
                printf("*");
            }
        }
    }
}
