#include<stdio.h>
int sumup(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}

int main(void) {
    int a;
    printf("输入一个整数:");
    scanf("%d", &a);
    printf("1到该数的总和为:%d\n", sumup(a));
}