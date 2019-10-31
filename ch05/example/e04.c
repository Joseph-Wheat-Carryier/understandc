#include<stdio.h>
int main(void) {
    int c[100] = {0};
    int a = 0;
    int arr[3][3] = {{11, 12, 13}, {12, 17, 35}, {35, 32, 22}};
    int temp = arr[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > temp) {
                temp = arr[i][j];
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (temp == arr[i][j]) {
                c[a] = i;
                c[a + 1] = j;
                a += 2;
            }
        }
    }


    printf("最大的值时是%d\n", temp);

    for (int i = 0; i <=a-2; i+=2) {
        printf("它的坐标是%d,%d\n", c[i], c[i + 1]);


    }
}

