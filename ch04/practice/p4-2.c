#include<stdio.h>
int main(void) {
    int a, b, c, a1, b1;
    puts("请输入两个整数。");
    printf("整数A:");
    scanf("%d", &a);

    printf("整数B:");
    scanf("%d", &b);

    a1 = a;
    b1 = b;

    if (a > b) {
        c = b;


        do {
            b += 1;
            c = b + c;
        } while (a - b != 0);

        printf("大于等于%d小于等于%d的所有整数的和是%d。\n", b1, a1, c);
    } else if (a < b) {

        c = a;

        do {
            a += 1;
            c = a + c;
        } while (b - a != 0);

        printf("大于等于%d小于等于%d的所有整数的和是%d。\n", a1, b1, c);
    } else {
        c = 2 * a;
        printf("大于等于%d小于等于%d的所有整数的和是%d。\n", a1, b1, c);
    }

    return 0;
}