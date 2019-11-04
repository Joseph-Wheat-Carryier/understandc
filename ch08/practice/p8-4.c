#include<stdio.h>

#define NUMBER 5

void bsort(int a[], int n) {
    int temp;

    for (int i = 0; i < n; i++) {
        for (int j =n; j >= i; j--) {
            if (a[j] < a[j - 1]) {
                temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main(void) {
    int height[NUMBER];

    printf("请输入%d人的身高。\n", NUMBER);

    for (int i = 0; i < NUMBER; i++) {
        printf("%2d号:\n", i + 1);
        scanf("%d", &height[i]);
    }

    bsort(height, NUMBER);

    puts("按升序排列。");

    for (int i = 0; i < NUMBER; i++) {
        printf("%2d号:%d\n", i + 1, height[i]);
    }

    return 0;
}