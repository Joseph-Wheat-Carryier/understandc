#include<stdio.h>
int main(void) {
    int no;
    puts("生成一个正方形。");
    printf("正方形有几层:");


    scanf("%d", &no);

    for (int i = 1; i <= no; i++) {
        for (int j = 1; j <= no; j++) {
            if (j % no == 0) {
                printf("*\n");
            } else {
                printf("*");
            }
        }
    }
return 0;
}