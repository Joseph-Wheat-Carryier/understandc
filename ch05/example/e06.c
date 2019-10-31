#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    char no;
    printf("输入任意字符开始:");
    scanf("%c", &no);
    srand((unsigned)time(NULL));
    int key = rand();


    int arr[100];

    for (int i = 0; i < 5; i++) {
        arr[i] = 1;
    }

    for (int i = 5; i < 15; i++) {
        arr[i] = 2;
    }

    for (int i = 15; i < 30; i++) {
        arr[i] = 3;
    }

    for (int i = 30; i < 60; i++) {
        arr[i] = 4;
    }

    for (int i = 60; i < 80; i++) {
        arr[i] = 5;
    }

    for (int i = 80; i < 95; i++) {
        arr[i] = 6;
    }

    for (int i = 95; i < 100; i++) {
        arr[i] = 7;
    }

    switch (arr[key % 100]) {
    case 1:

        printf("%s\n", "大吉");
        break;

    case 2:

        printf("%s\n", "中吉");
        break;

    case 3:

        printf("%s\n", "小吉");
        break;

    case 4:

        printf("%s\n", "吉");
        break;

    case 5:

        printf("%s\n", "末吉");
        break;

    case 6:

        printf("%s\n", "凶");
        break;

    case 7:

        printf("%s\n", "大凶");
        break;



    default:
        break;
    }
}