#include<stdio.h>
int main(void) {
    int a;
    printf("请输入一个整数:");
    scanf("%d", &a);

    if (a >= 0) {
        printf("%s%d\n", "绝对值是", a);
    } else {
        printf("%s%d\n", "绝对值是", -a);
    }

    return 0;
}