#include<stdio.h>
int main(void) {
    int a, b, c;
    puts("输入三个数。");
    printf("整数A:");
    scanf("%d", &a);

    printf("整数B:");
    scanf("%d", &b);

    printf("整数C:");
    scanf("%d", &c);

    if (a < b) {
        if (a < c) {
            printf("%s%d。\n", "最小值是", a);
        } else {
            printf("%s%d。\n", "最小值是", c);
        }
    } else {

        if (b < c) {
            printf("%s%d。\n", "最小值是", b);
        } else {
            printf("%s%d。\n", "最小值是", c);
        }
    }
    return 0;
}