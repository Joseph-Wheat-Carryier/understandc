#include<stdio.h>

int search_idx(const int v[], int inx[], int key, int length) {
    int index = 0;

    for (int i = 0; i < length; i++) {
        if (v[i] == key) {
            inx[index] = i;
            index++;
        }
    }

    return index;
}

int main(void) {
    int v[5] = {1, 2, 1, 3, 1};
    int inx[5];
    printf("共%d个\n", search_idx(v, inx, 1, 5));

    for (int i = 0; i < 5; i++) {
        printf("%d ", inx[i]);
    }

    printf("\n");
}