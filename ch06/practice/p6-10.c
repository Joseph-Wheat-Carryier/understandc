#include<stdio.h>

void intary_rcpy(int v[], const int v2[], int n) {
    for (int i = 0; i < n; i++) {
        v[i] = v2[n - i - 1];
    }
}

int main(void) {
    int arr[4];
    int arr1[4];
    printf("输入4个数组元素:\n");

    for (int i = 0; i < 4; i++) {
        printf("arr[%d]:\n", i);
        scanf("%d", &arr[i]);
    }

    intary_rcpy(arr1, arr,4);
    printf("该数组的倒序排列是:\n");

    for (int i = 0; i < 4; i++) {
        printf("%d", arr1[i]);
    }

    printf("\n");
}