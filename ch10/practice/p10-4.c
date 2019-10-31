#include<stdio.h>

void set_idx(int *v, int n) {
    for (int i = 0; i < n; i++) {
        *(v + i) = i;
    }
}

int main(void) {
    int v[10] = {0};
    set_idx(v, 10);

    for (int i = 0; i < 10; i++) {
        printf("%d  ", v[i]);
    }
    printf("\n");
}