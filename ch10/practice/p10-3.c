#include<stdio.h>

void sort3(int *n1, int *n2, int *n3) {
    int temp;
    int arr[3] = {*n1, *n2, *n3};

    for (int i = 0; i < 3; i++) {
        for (int j = i; j < 3; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    *n1 = arr[0];
    *n2 = arr[1];
    *n3 = arr[2];
}

int main(void) {
    int a = 3;
    int b = 2;
    int c = 1;
    sort3(&a, &b, &c);
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    printf("b=%d\n", c);
}