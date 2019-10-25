#include<stdio.h>
int main(void) {
    int a, b, c, d;
    int f, g;
    puts("输入4个整数");
    printf("整数A:");
    scanf("%d", &a);

    printf("整数B:");
    scanf("%d", &b);

    printf("整数C:");
    scanf("%d", &c);

    printf("整数D:");
    scanf("%d", &d);

    if (a > b) {
        f = a;
    } else {
        f = b;
    }

    if (c > d) {
        g = c;
    } else {
        g = d;
    }

    if (f > g) {
        printf("%s%d。\n", "最大值是", f);
    } else {
        printf("%s%d。\n", "最大值是", g);
    }

    return 0;
}