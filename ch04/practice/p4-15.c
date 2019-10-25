#include<stdio.h>
int main(void) {
    int start, end, length;
    printf("开始数值:");
    scanf("%d", &start);

    printf("结束数值:");
    scanf("%d", &end);

    printf("间隔数值:");
    scanf("%d", &length);

    for (;start < end;start += length) {
        double result = (start - 100) * 0.9;
        printf("%dcm      %.2lfkg\n", start, result);
    }

    return 0;
}