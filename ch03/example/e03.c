#include<stdio.h>
int main(void) {
    int month;
    printf("输入月份:");
    scanf("%d", &month);

    switch (month) {
    case 12:
        printf("冬\n");
        break;

    case 11:
        printf("秋\n");
        break;

    case 10:
        printf("秋\n");
        break;

    case 9:
        printf("秋\n");
        break;

    case 8:
        printf("夏\n");
        break;

    case 7:
        printf("夏\n");
        break;

    case 6:
        printf("夏\n");
        break;

    case 5:
        printf("春\n");
        break;

    case 4:
        printf("春\n");
        break;

    case 3:
        printf("春\n");
        break;

    case 2:
        printf("冬\n");
        break;

    case 1:
        printf("冬\n");
        break;

    default:
        printf("请输入1-12!\n");

    }

    return 0;
}