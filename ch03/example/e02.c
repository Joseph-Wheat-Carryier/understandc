#include<stdio.h>
int main(void) {
    int a, b;
    printf("输入一个数:");
    scanf("%d", &a);
    printf("输入另一个数:");
    scanf("%d", &b);

    if (a < 0 || b < 0) {
        puts("不支持!");
    } else {
        if (a > b) {
            printf("%s%d\n", "较大的数是", a);
        } else if (a == b) {
            printf("%s。\n", "一样大");
        } else {
            printf("%s%d。\n", "较大的数是", b);
        }
    }

    return 0;
}
