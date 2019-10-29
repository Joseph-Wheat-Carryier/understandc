#include<stdio.h>
#define NUMBERS 10

int main(void) {
    int no;
    int arr[NUMBERS];

    do {
        printf("数据个数:");
        scanf("%d", &no);
        printf("请输入1~%d的数\n", NUMBERS);
    } while (no > NUMBERS);


    for (int i = 0; i < no; i++) {
        printf("%d号:", i + 1);
        scanf("%d", &arr[i]);
    }


    printf("{");

    for (int i = 0; i < no; i++) {
        if (i != no - 1) {
            printf("%d,", arr[i]);
        } else {
            printf("%d}\n", arr[i]);
        }
    }
}