#include<stdio.h>

int main(void) {
    int n;
    int result;
    printf("n的值:");
    scanf("%d",&n);
    printf("1到%d的和为", n);
    result = n;

    for (; n>0 ; ) {
        n = n - 1;
        result = result + n;
    }

    printf("%d\n", result);
    return 0;
}