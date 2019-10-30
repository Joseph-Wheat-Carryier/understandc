#include<stdio.h>

int main(void) {
    int no;
    printf("输入一个整数:\n");
    scanf("%d", &no);

    if ((no * 2 == (no << 1))&& (no / 2 == (no >> 1))) {
        printf("正确\n");
    } else {
        printf("错误\n");
    }
}
