#include<stdio.h>
void rev_intary(int v[], int n) {
    int temp = 0;

    for (int i = 0; i < n / 2; i++) {
        temp = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = temp;
    }
}

int main(void) {
    int arr[4];
    printf("输入4个数组元素:\n");

    for (int i = 0; i < 4; i++) {
        printf("arr[%d]:\n", i);
        scanf("%d", &arr[i]);
    }

    rev_intary(arr, 4);
    printf("该数组的倒序排列是:\n");

    for (int i = 0; i < 4; i++) {
        printf("%d", arr[i]);
    }

    printf("\n");
}