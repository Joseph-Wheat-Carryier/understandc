#include<stdio.h>

void delNo(int index, int v[], int length , int aim) {
    if (v[index] == aim) {
        for (int i = index; i < length - 1; i++) {
            v[i] = v[i + 1];
            v[length - 1] = 0;
        }
    }

    index++;

    if (index == length) {
        return;
    }

    delNo(index, v, length, aim);
}


int main(void) {
    int v[7] = {1, 2, 3, 2, 4, 2, 5};
    delNo(0, v, 7, 4);

    for (int i = 0; i < 7; i++) {
        printf("%d", v[i]);
    }

    printf("\n");
}