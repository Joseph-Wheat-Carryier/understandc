#include<stdio.h>
int main {
    int no;
    printf("输入一个整数:");
    scanf("%d", no);

    if (no > 0) {
        printf("这个是正数\n");
    } else if (no < 0) {
        printf("这是个负数\n");
    } else{puts("这是零")}
}