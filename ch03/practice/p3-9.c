#include<stdio.h>
int main(void) {
    int a, b, c, temp;
    puts("输入三个数。");
    printf("整数A:");
    scanf("%d", &a);

    printf("整数B:");
    scanf("%d", &b);

    printf("整数C:");
    scanf("%d", &c);

    temp = a < b ? a : b;
    printf("最小值是%d\n", temp < c ? temp : c);
}